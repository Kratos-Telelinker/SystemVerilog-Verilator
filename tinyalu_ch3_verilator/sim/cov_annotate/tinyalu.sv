//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // TinyALU Top-Level (SystemVerilog Conversion of Ray Salemi's VHDL)
        // Enhanced Version: Parameters, Enums, Modern SV, Verilator-Friendly
        // -----------------------------------------------------------------------------
        
        module tinyalu #(
            parameter WIDTH         = 16,
            parameter RESULT_WIDTH  = 16,
            parameter PIPE_DEPTH    = 3     // M3: parameterized pipeline depth (default 3)
        ) (
 000056     input  logic [WIDTH-1:0]        A,
 000056     input  logic [WIDTH-1:0]        B,
 000436     input  logic                    clk,
%000001     input  logic                    reset_n,   // R1: active-low async reset
 000078     input  logic                    start,
 000055     input  tinyalu_op_t             op,        // O2: enum opcodes
 000093     output logic                    done,
 000098     output logic [RESULT_WIDTH-1:0] result
        );
        
            // -------------------------------------------------------------------------
            // Internal signals
            // -------------------------------------------------------------------------
 000065     logic                    start_single;
 000040     logic                    start_mult;
        
 000053     logic                    done_aax;
 000040     logic                    done_mult;
        
 000034     logic [RESULT_WIDTH-1:0] result_aax;
 000060     logic [RESULT_WIDTH-1:0] result_mult;
 000063     logic [RESULT_WIDTH-1:0] prev_result;
            // Functional coverage counters     
            integer cov_add, cov_and, cov_xor, cov_mul,cov_nop;
        
 000436     always_ff @(posedge clk or negedge reset_n) 
 000436         begin
~000431             if (!reset_n) 
%000005                 begin
%000005                     cov_add <= 0;
%000005                     cov_and <= 0;
%000005                     cov_xor <= 0;
%000005                     cov_mul <= 0;
%000005                     cov_nop <= 0;
                        end 
 000231             else if (start)     
 000200                 begin
 000200                     case (op)
 000050                         OP_ADD:  cov_add <= cov_add + 1;
 000034                         OP_AND:  cov_and <= cov_and + 1;
 000039                         OP_XOR:  cov_xor <= cov_xor + 1;
 000040                         OP_MUL:  cov_mul <= cov_mul + 1;
 000037                         default: cov_nop <= cov_nop + 1;
                                    
                            endcase
                        end
                end
        
            // -------------------------------------------------------------------------
            // Start Demux: route start to correct block based on op
            // -------------------------------------------------------------------------
 000249     always_comb begin
 000169         if (op == OP_MUL) begin
 000080             start_single = 1'b0;
 000080             start_mult   = start;
 000169         end else begin
 000169             start_single = start;
 000169             start_mult   = 1'b0;
                end
            end
        
            // -------------------------------------------------------------------------
            // Result Mux
            // -------------------------------------------------------------------------
 000594     always_comb 
 000594         begin
 000594             result = '0;
        
 000594             case (op)
 000187                 OP_NOP:  result = prev_result;       // no-op
 000089                 OP_ADD:  result = result_aax;
 000060                 OP_AND:  result = result_aax;
 000067                 OP_XOR:  result = result_aax;
 000191                 OP_MUL:  result = result_mult;
%000000                 default: result = prev_result;
                    endcase
                end
        
            // -------------------------------------------------------------------------
            // Done Mux
            // -------------------------------------------------------------------------
 000594     always_comb 
 000594         begin
 000594             done = 1'b0;
        
 000594             case (op)
 000187                 OP_NOP:  done = 1'b0;
 000089                 OP_ADD:  done = done_aax;
 000060                 OP_AND:  done = done_aax;
 000067                 OP_XOR:  done = done_aax;
 000191                 OP_MUL:  done = done_mult;
%000000                 default: done = 1'b0;
                    endcase
                end
        
            
            
        
 000436     always_ff @(posedge clk or negedge reset_n)
~000431         if (!reset_n)
%000005             prev_result <= '0;
                else
 000431             prev_result <= result;
        
            // -------------------------------------------------------------------------
            // Instantiations
            // -------------------------------------------------------------------------
            single_cycle #(
                .WIDTH(WIDTH),
                .RESULT_WIDTH(RESULT_WIDTH)
            ) u_single_cycle (
                .A(A),
                .B(B),
                .clk(clk),
                .reset_n(reset_n),
                .start(start_single),
                .op(op),
                .done_aax(done_aax),
                .result_aax(result_aax)
            );
        
            three_cycle #(
                .WIDTH(WIDTH),
                .RESULT_WIDTH(RESULT_WIDTH),
                .PIPE_DEPTH(PIPE_DEPTH)
            ) u_three_cycle (
                .A(A),
                .B(B),
                .clk(clk),
                .reset_n(reset_n),
                .start(start_mult),
                .done_mult(done_mult),
                .result_mult(result_mult)
            );
        
        endmodule
        

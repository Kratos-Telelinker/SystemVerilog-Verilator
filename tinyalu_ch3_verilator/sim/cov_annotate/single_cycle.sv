//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // Single-Cycle Add/AND/XOR (SystemVerilog Conversion of Ray Salemi's VHDL)
        // Enhanced Version: Parameters, Enums, Modern SV, Verilator-Friendly
        // -----------------------------------------------------------------------------
        
        module single_cycle #(
            parameter WIDTH         = 16,
            parameter RESULT_WIDTH  = 16
        ) (
 000056     input  logic [WIDTH-1:0]        A,
 000056     input  logic [WIDTH-1:0]        B,
 000436     input  logic                    clk,
%000001     input  logic                    reset_n,   // R1: active-low async reset
 000065     input  logic                    start,
 000055     input  tinyalu_op_t             op,        // O2: enum opcodes
 000053     output logic                    done_aax,
 000034     output logic [RESULT_WIDTH-1:0] result_aax
        );
        
            // -------------------------------------------------------------------------
            // Result Logic
            // -------------------------------------------------------------------------
 000436     always_ff @(posedge clk or negedge reset_n) begin
~000431         if (!reset_n) begin
%000005             result_aax <= '0;
 000271         end else if (start) begin
 000160             case (op)
 000050                 OP_ADD: result_aax <= A + B;
 000034                 OP_AND: result_aax <= { {(RESULT_WIDTH-WIDTH){1'b0}}, (A & B) };
 000039                 OP_XOR: result_aax <= { {(RESULT_WIDTH-WIDTH){1'b0}}, (A ^ B) };
 000037                 default: /* no-op */ ;
                    endcase
                end
            end
        
            // -------------------------------------------------------------------------
            // Done Logic
            // -------------------------------------------------------------------------
 000436     always_ff @(posedge clk or negedge reset_n) begin
~000431         if (!reset_n) begin
%000005             done_aax <= 1'b0;
 000431         end else begin
 000431             done_aax <= (start && (op != OP_NOP));
                end
            end
        
        endmodule
        

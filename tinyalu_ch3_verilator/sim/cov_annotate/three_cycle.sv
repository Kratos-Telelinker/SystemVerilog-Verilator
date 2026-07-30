//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // Three-Cycle Multiplier (SystemVerilog Conversion of Ray Salemi's VHDL)
        // Enhanced Version: Parameters, Enums, Modern SV, Verilator-Friendly
        // PIPE_DEPTH = 3 by default (P1)
        // -----------------------------------------------------------------------------
        
        module three_cycle #(
            parameter WIDTH         = 16,
            parameter RESULT_WIDTH  = 16,
            parameter PIPE_DEPTH    = 3     // M3: parameterized pipeline depth
        ) (
 000056     input  logic [WIDTH-1:0]        A,
 000056     input  logic [WIDTH-1:0]        B,
 000436     input  logic                    clk,
%000001     input  logic                    reset_n,   // R1: active-low async reset
 000040     input  logic                    start,
 000040     output logic                    done_mult,
 000060     output logic [RESULT_WIDTH-1:0] result_mult
        );
        
            // -------------------------------------------------------------------------
            // Pipeline Registers
            // -------------------------------------------------------------------------
 000056     logic [WIDTH-1:0]        a_pipe   [PIPE_DEPTH];
 000056     logic [WIDTH-1:0]        b_pipe   [PIPE_DEPTH];
 000060     logic [RESULT_WIDTH-1:0] mult_pipe[PIPE_DEPTH];
 000040     logic                    done_pipe[PIPE_DEPTH];
        
            // -------------------------------------------------------------------------
            // Pipeline Logic
            // -------------------------------------------------------------------------
            integer i;
        
 000436     always_ff @(posedge clk or negedge reset_n) begin
~000431         if (!reset_n) begin
~000015             for (i = 0; i < PIPE_DEPTH; i++) begin
 000015                 a_pipe[i]    <= '0;
 000015                 b_pipe[i]    <= '0;
 000015                 mult_pipe[i] <= '0;
 000015                 done_pipe[i] <= 1'b0;
                    end
%000005             result_mult <= '0;
%000005             done_mult   <= 1'b0;
 000431         end else begin
                    // Stage 0: capture inputs
 000431             a_pipe[0]    <= A;
 000431             b_pipe[0]    <= B;
 000431             mult_pipe[0] <= A * B;
 000431             done_pipe[0] <= start;
        
                    // Remaining pipeline stages
 000862             for (i = 1; i < PIPE_DEPTH; i++) begin
 000862                 a_pipe[i]    <= a_pipe[i-1];
 000862                 b_pipe[i]    <= b_pipe[i-1];
 000862                 mult_pipe[i] <= mult_pipe[i-1];
 000862                 done_pipe[i] <= done_pipe[i-1];
                    end
        
                    // Final stage output
 000431             result_mult <= mult_pipe[PIPE_DEPTH-1];
 000431             done_mult   <= done_pipe[PIPE_DEPTH-1];
                end
            end
        
        endmodule
        

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
    input  logic [WIDTH-1:0]        A,
    input  logic [WIDTH-1:0]        B,
    input  logic                    clk,
    input  logic                    reset_n,   // R1: active-low async reset
    input  logic                    start,
    output logic                    done_mult,
    output logic [RESULT_WIDTH-1:0] result_mult
);

    // -------------------------------------------------------------------------
    // Pipeline Registers
    // -------------------------------------------------------------------------
    logic [WIDTH-1:0]        a_pipe   [PIPE_DEPTH];
    logic [WIDTH-1:0]        b_pipe   [PIPE_DEPTH];
    logic [RESULT_WIDTH-1:0] mult_pipe[PIPE_DEPTH];
    logic                    done_pipe[PIPE_DEPTH];

    // -------------------------------------------------------------------------
    // Pipeline Logic
    // -------------------------------------------------------------------------
    integer i;

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            for (i = 0; i < PIPE_DEPTH; i++) begin
                a_pipe[i]    <= '0;
                b_pipe[i]    <= '0;
                mult_pipe[i] <= '0;
                done_pipe[i] <= 1'b0;
            end
            result_mult <= '0;
            done_mult   <= 1'b0;
        end else begin
            // Stage 0: capture inputs
            a_pipe[0]    <= A;
            b_pipe[0]    <= B;
            mult_pipe[0] <= A * B;
            done_pipe[0] <= start;

            // Remaining pipeline stages
            for (i = 1; i < PIPE_DEPTH; i++) begin
                a_pipe[i]    <= a_pipe[i-1];
                b_pipe[i]    <= b_pipe[i-1];
                mult_pipe[i] <= mult_pipe[i-1];
                done_pipe[i] <= done_pipe[i-1];
            end

            // Final stage output
            result_mult <= mult_pipe[PIPE_DEPTH-1];
            done_mult   <= done_pipe[PIPE_DEPTH-1];
        end
    end

endmodule

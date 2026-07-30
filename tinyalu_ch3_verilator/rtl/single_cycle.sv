// -----------------------------------------------------------------------------
// Single-Cycle Add/AND/XOR (SystemVerilog Conversion of Ray Salemi's VHDL)
// Enhanced Version: Parameters, Enums, Modern SV, Verilator-Friendly
// -----------------------------------------------------------------------------

module single_cycle #(
    parameter WIDTH         = 16,
    parameter RESULT_WIDTH  = 16
) (
    input  logic [WIDTH-1:0]        A,
    input  logic [WIDTH-1:0]        B,
    input  logic                    clk,
    input  logic                    reset_n,   // R1: active-low async reset
    input  logic                    start,
    input  tinyalu_op_t             op,        // O2: enum opcodes
    output logic                    done_aax,
    output logic [RESULT_WIDTH-1:0] result_aax
);

    // -------------------------------------------------------------------------
    // Result Logic
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            result_aax <= '0;
        end else if (start) begin
            case (op)
                OP_ADD: result_aax <= A + B;
                OP_AND: result_aax <= { {(RESULT_WIDTH-WIDTH){1'b0}}, (A & B) };
                OP_XOR: result_aax <= { {(RESULT_WIDTH-WIDTH){1'b0}}, (A ^ B) };
                default: /* no-op */ ;
            endcase
        end
    end

    // -------------------------------------------------------------------------
    // Done Logic
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            done_aax <= 1'b0;
        end else begin
            done_aax <= (start && (op != OP_NOP));
        end
    end

endmodule

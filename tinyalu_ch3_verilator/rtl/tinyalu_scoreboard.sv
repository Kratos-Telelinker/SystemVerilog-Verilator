module tinyalu_scoreboard #(
    parameter WIDTH = 8,
    parameter RESULT_WIDTH = 16
)(
    input logic                    clk,
    input logic                    reset_n,
    input logic                    start,
    input tinyalu_op_t             op,
    input logic [WIDTH-1:0]        A,
    input logic [WIDTH-1:0]        B,
    input logic [RESULT_WIDTH-1:0] result
);

    logic [RESULT_WIDTH-1:0] expected;

    always_comb begin
        case (op)
            OP_ADD: expected = A + B;
            OP_AND: expected = { {(RESULT_WIDTH-WIDTH){1'b0}}, (A & B) };
            OP_XOR: expected = { {(RESULT_WIDTH-WIDTH){1'b0}}, (A ^ B) };
            OP_MUL: expected = A * B;
            default: expected = 'x;
        endcase
    end

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            // nothing
        end else if (start) begin
            if (expected !== result) begin
                $display("SCOREBOARD ERROR: A=%0d B=%0d op=%0d result=%0d expected=%0d",
                         A, B, op, result, expected);
            end
        end
    end

endmodule

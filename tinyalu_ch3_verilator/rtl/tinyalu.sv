// -----------------------------------------------------------------------------
// TinyALU Top-Level (SystemVerilog Conversion of Ray Salemi's VHDL)
// Enhanced Version: Parameters, Enums, Modern SV, Verilator-Friendly
// -----------------------------------------------------------------------------

module tinyalu #(
    parameter WIDTH         = 16,
    parameter RESULT_WIDTH  = 16,
    parameter PIPE_DEPTH    = 3     // M3: parameterized pipeline depth (default 3)
) (
    input  logic [WIDTH-1:0]        A,
    input  logic [WIDTH-1:0]        B,
    input  logic                    clk,
    input  logic                    reset_n,   // R1: active-low async reset
    input  logic                    start,
    input  tinyalu_op_t             op,        // O2: enum opcodes
    output logic                    done,
    output logic [RESULT_WIDTH-1:0] result
);

    // -------------------------------------------------------------------------
    // Internal signals
    // -------------------------------------------------------------------------
    logic                    start_single;
    logic                    start_mult;

    logic                    done_aax;
    logic                    done_mult;

    logic [RESULT_WIDTH-1:0] result_aax;
    logic [RESULT_WIDTH-1:0] result_mult;
    logic [RESULT_WIDTH-1:0] prev_result;
    // Functional coverage counters     
    integer cov_add, cov_and, cov_xor, cov_mul,cov_nop;

    always_ff @(posedge clk or negedge reset_n) 
        begin
            if (!reset_n) 
                begin
                    cov_add <= 0;
                    cov_and <= 0;
                    cov_xor <= 0;
                    cov_mul <= 0;
                    cov_nop <= 0;
                end 
            else if (start)     
                begin
                    case (op)
                        OP_ADD:  cov_add <= cov_add + 1;
                        OP_AND:  cov_and <= cov_and + 1;
                        OP_XOR:  cov_xor <= cov_xor + 1;
                        OP_MUL:  cov_mul <= cov_mul + 1;
                        default: cov_nop <= cov_nop + 1;
                            
                    endcase
                end
        end

    // -------------------------------------------------------------------------
    // Start Demux: route start to correct block based on op
    // -------------------------------------------------------------------------
    always_comb begin
        if (op == OP_MUL) begin
            start_single = 1'b0;
            start_mult   = start;
        end else begin
            start_single = start;
            start_mult   = 1'b0;
        end
    end

    // -------------------------------------------------------------------------
    // Result Mux
    // -------------------------------------------------------------------------
    always_comb 
        begin
            result = '0;

            case (op)
                OP_NOP:  result = prev_result;       // no-op
                OP_ADD:  result = result_aax;
                OP_AND:  result = result_aax;
                OP_XOR:  result = result_aax;
                OP_MUL:  result = result_mult;
                default: result = prev_result;
            endcase
        end

    // -------------------------------------------------------------------------
    // Done Mux
    // -------------------------------------------------------------------------
    always_comb 
        begin
            done = 1'b0;

            case (op)
                OP_NOP:  done = 1'b0;
                OP_ADD:  done = done_aax;
                OP_AND:  done = done_aax;
                OP_XOR:  done = done_aax;
                OP_MUL:  done = done_mult;
                default: done = 1'b0;
            endcase
        end

    
    

    always_ff @(posedge clk or negedge reset_n)
        if (!reset_n)
            prev_result <= '0;
        else
            prev_result <= result;

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

typedef enum logic [2:0] {
    OP_NOP = 3'b000,
    OP_ADD = 3'b001,
    OP_AND = 3'b010,
    OP_XOR = 3'b011,
    OP_MUL = 3'b100
} tinyalu_op_t;

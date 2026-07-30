#include "Vtinyalu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <cassert>

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vtinyalu* top, VerilatedVcdC* tfp) {
    top->clk = 0;
    top->eval();

    top->clk = 1;
    top->eval();

    if (tfp) {
        tfp->dump(main_time++);
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtinyalu* top = new Vtinyalu;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("tinyalu.vcd");

    // -------------------------------------------------------------------------
    // Results file (full detail)
    // -------------------------------------------------------------------------
    std::ofstream results("test_results.txt");
    results << "TinyALU Test Results\n";
    results << "====================\n\n";

    std::srand(std::time(nullptr));

    // Reset
    top->reset_n = 0;
    top->start   = 0;
    top->op      = 0;
    top->A       = 0;
    top->B       = 0;

    for (int i = 0; i < 5; i++) tick(top, tfp);
    top->reset_n = 1;

    const int NUM_TESTS = 200;
    int errors = 0;
    uint16_t last_result = 0;

    for (int i = 0; i < NUM_TESTS; i++) {

        uint16_t A = std::rand() & 0xFFFF;
        uint16_t B = std::rand() & 0xFFFF;

        uint8_t op_sel = std::rand() % 5;
        uint8_t op;
        switch (op_sel) {
        case 0: op = 0b000; break; // NOP
        case 1: op = 0b001; break; // ADD
        case 2: op = 0b010; break; // AND
        case 3: op = 0b011; break; // XOR
        case 4: op = 0b100; break; // MUL
        }

        top->A   = A;
        top->B   = B;
        top->op  = op;

        top->start = 1;
        tick(top, tfp);
        top->start = 0;

        int cycles = 0;
        const int MAX_CYCLES = 2000;

        if (op != 0b000) {
            while (!top->done && cycles < MAX_CYCLES) {
                tick(top, tfp);
                cycles++;
            }

            if (!top->done) {
                results << "TIMEOUT: i=" << i
                        << " op=" << (int)op
                        << " A=" << A
                        << " B=" << B << "\n";
                errors++;
                break;
            }
        } else {
            for (int k = 0; k < 3; ++k) tick(top, tfp);
        }

        uint16_t expected = last_result;

        switch (op) {
        case 0b001: expected = (A + B) & 0xFFFF; break;
        case 0b010: expected = (A & B) & 0xFFFF; break;
        case 0b011: expected = (A ^ B) & 0xFFFF; break;
        case 0b100: expected = ((uint32_t)A * B) & 0xFFFF; break;
        case 0b000: default:
            break;
        }

        if (op != 0b000 && top->result != expected) {
            results << "FAIL: i=" << i
                    << " op=" << (int)op
                    << " A=" << A
                    << " B=" << B
                    << " got=" << top->result
                    << " exp=" << expected << "\n";
            errors++;
        } else {
            results << "PASS: i=" << i
                    << " op=" << (int)op << "\n";
        }

        last_result = expected;
    }

    results << "\nSimulation complete. Errors = " << errors << "\n";
    results.close();

    VerilatedCov::write("obj_dir/coverage.dat");


    tfp->close();
    delete tfp;
    delete top;

    // -------------------------------------------------------------------------
    // FINAL SCREEN OUTPUT — ONE WORD ONLY
    // -------------------------------------------------------------------------
    if (errors == 0)
        std::cout << "PASS" << std::endl;
    else
        std::cout << "FAIL" << std::endl;

    return 0;
}

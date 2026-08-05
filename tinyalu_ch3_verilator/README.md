![Telelinker Logic Solutions](assets/telelinker-logo.png)

### A cross‑platform hardware‑verification project demonstrating how to simulate, test, and measure coverage for a small ALU using Verilator.

## Overview
    TinyALU is a compact SystemVerilog design used to demonstrate:
          Verilator RTL compilation
          C++ testbench integration
          Randomized stimulus generation
          Functional checking
          Waveform tracing (VCD)
          Coverage collection & HTML reporting
          Windows‑safe builds using MSYS2 MinGW64
     
##     This project is ideal for engineers learning:
          Verilator workflows
          C++‑based hardware simulation
          Cross‑platform verification setups
          Coverage‑driven development

## Installation
      Linux
          bash
          sudo apt install verilator make g++ python3
      Windows (MSYS2 MinGW64)
          Install MSYS2, then:
          bash
          pacman -Syu
          pacman -S mingw-w64-x86_64-toolchain
          pacman -S mingw-w64-x86_64-verilator
          pacman -S python3
          Ensure you are in MSYS2 MinGW64, not MSYS2 or UCRT64.

## Directory Structure
'''
        UVM_Primer-for-Verilator/
        │
        ├── rtl/                 # SystemVerilog RTL
        ├── sim/                 # C++ testbench + scripts
        │   ├── sim_main.cpp
        │   ├── Makefile
        │   ├── benchmark_runtime.sh
        │   ├── build_windows.sh
        │   ├── sanitize_paths.sh
        │   ├── coverage_report.sh
        │   └── coverage_html.py
        └── obj_dir/             # Verilator build output
'''
## Building the Project
        Linux bash
            make
        Windows (MSYS2 MinGW64)   bash
            ./build_windows.sh 
                This script ensures:
                No spaces in the project path
                Correct MSYS2 environment
                Verilator built‑ins exist
             Makefile uses Windows‑safe include paths

## Running the Simulation
        bash
        make run
            Produces:
                  tinyalu.vcd waveform
                  test_results.txt
                  PASS/FAIL summary
                  obj_dir/coverage.dat

## Generating Coverage Reports
        bash
        make coverage
        make report
            Outputs:
                coverage.info
                cov_annotate/ annotated source
                coverage_report.html dashboard
## Benchmarking Runtime
        bash
        ./benchmark_runtime.sh
        Compare Linux vs Windows performance by running multiple iterations.

## Workflow Diagram

        SystemVerilog RTL
                │
                ▼
        Verilator (C++)
                │
                ▼
        C++ Testbench (sim_main.cpp)
                │
                ├── Randomized tests
                ├── Functional checking
                ├── VCD waveform dump
                └── Coverage write-out
                ▼
        Coverage Tools + HTML Report

## TinyALU Operations
        Opcode	Operation
        000	NOP
        001	ADD
        010	AND
        011	XOR
        100	MUL


### File Descriptions

##        Makefile — Windows‑Safe Verilator Build System
            Cross‑platform Makefile supporting Linux and MSYS2 MinGW64.
            Handles RTL compilation
            C++ simulation build
            execution
            cleanup
            coverage generation.

##        benchmark_runtime.sh — Verilator Runtime Benchmark
              Runs the TinyALU simulation multiple times and computes average runtime.
              Useful for comparing Linux vs Windows performance.

##        build_windows.sh — MSYS2 MinGW64 Build Wrapper
              Ensures a correct Windows environment, checks for path issues, validates Verilator built‑ins, 
              and runs a clean build.

##        sanitize_paths.sh — Windows Path & Environment Validator
              Detects path problems, verifies MSYS2 MinGW64, fixes missing headers, and ensures Verilator 
              uses correct include paths.

##        coverage_report.sh — Coverage Dashboard Generator
              Creates coverage.info, annotated source, and a full HTML coverage dashboard using Verilator + Python.

##         sim_main.cpp — TinyALU Verilator Testbench
              C++ simulation harness that drives TinyALU, generates randomized tests, logs results, 
              dumps VCD waveforms, and writes coverage data.




👤 Author Brad Balla kratos@telelinker.com Design and Verification, Python Developer retired.

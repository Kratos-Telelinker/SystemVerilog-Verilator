# ============================================================
# TinyALU Verilator Build System
# ============================================================

RTL_DIR := ../rtl
OBJ_DIR := obj_dir

# Verilator flags
# VERILATOR_FLAGS := -Wall --Wno-fatal --trace --coverage --top-module tinyalu
VERILATOR_FLAGS := -Wall --Wno-fatal --trace --coverage --coverage-line --top-module tinyalu



RTL_SRCS := \
    $(RTL_DIR)/tinyalu_op_t.sv \
    $(RTL_DIR)/tinyalu.sv \
    $(RTL_DIR)/single_cycle.sv \
    $(RTL_DIR)/three_cycle.sv

TB := sim_main.cpp
EXE := $(OBJ_DIR)/Vtinyalu

all: clean verilate build run

clean:
	@echo "=== Cleaning old build ==="
	rm -rf $(OBJ_DIR)

verilate:
	@echo "=== Running Verilator ==="
	verilator $(VERILATOR_FLAGS) --cc $(RTL_SRCS) \
		--exe $(TB) \
		--Mdir $(OBJ_DIR)

build:
	@echo "=== Building simulation ==="
	make -C $(OBJ_DIR) -f Vtinyalu.mk

COV_DAT := $(OBJ_DIR)/coverage.dat

run:
	@echo "=== Running TinyALU simulation ==="
	$(EXE)
	

coverage:
	@echo "=== Generating annotated coverage ==="
	verilator_coverage --annotate obj_dir/cov_annotate obj_dir/coverage.dat


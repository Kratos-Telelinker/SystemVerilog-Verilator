# Auto-detect platform
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
    PLATFORM = linux
    VERILATOR = verilator
    COPY_FLEX = echo "Linux: FlexLexer.h already in place"
else
    PLATFORM = windows
    VERILATOR = verilator
    COPY_FLEX = cp /usr/include/FlexLexer.h /mingw64/include/
endif

# Design files
RTL = ../rtl/tinyalu_op_t.sv ../rtl/tinyalu.sv ../rtl/single_cycle.sv ../rtl/three_cycle.sv
TOP = tinyalu

# Build directories
OBJDIR = obj_dir

all: build

build:
    @echo "=== Building on $(PLATFORM) ==="
    $(COPY_FLEX)
    $(VERILATOR) -Wall --trace --coverage --top-module $(TOP) --cc $(RTL) \
        --exe sim_main.cpp --Mdir $(OBJDIR)
    make -C $(OBJDIR) -f V$(TOP).mk

run:
    ./$(OBJDIR)/V$(TOP)

coverage:
    verilator_coverage --write-info coverage.info $(OBJDIR)/coverage.dat
    verilator_coverage --annotate cov_annotate $(OBJDIR)/coverage.dat

report:
    python3 coverage_html.py coverage.info cov_annotate coverage_report.html

clean:
    rm -rf $(OBJDIR) cov_annotate coverage.info coverage_report.html

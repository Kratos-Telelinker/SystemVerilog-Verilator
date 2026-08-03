#!/bin/bash
# coverage_report.sh

# Stop on any error
set -e

# Paths
COV_DAT="obj_dir/coverage.dat"
COV_INFO="coverage.info"
ANN_DIR="cov_annotate"
OUT_HTML="coverage_report.html"

echo "=== Verilator Coverage Dashboard Generator ==="

# 1. Check coverage.dat exists
if [ ! -f "$COV_DAT" ]; then
    echo "ERROR: $COV_DAT not found."
    echo "Run your simulation first so VerilatedCov::write() produces it."
    exit 1
fi

# 2. Generate coverage.info (text summary with counters)
echo "=== Generating coverage.info ==="
verilator_coverage --write-info "$COV_INFO" "$COV_DAT"

# 3. Generate annotated source directory
echo "=== Generating annotated source ==="
verilator_coverage --annotate "$ANN_DIR" "$COV_DAT"

# 4. Generate HTML dashboard
echo "=== Generating HTML dashboard ==="
python3 coverage_html.py "$COV_INFO" "$ANN_DIR" "$OUT_HTML"

echo "=== Coverage dashboard written to $OUT_HTML ==="

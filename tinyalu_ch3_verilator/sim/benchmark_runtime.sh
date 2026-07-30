#!/usr/bin/env bash
# benchmark_runtime.sh
# Run TinyALU multiple times and measure runtime.

set -e

RUNS=${RUNS:-5}
EXE=${EXE:-obj_dir/Vtinyalu}

echo "=== Verilator runtime benchmark ==="
echo "Executable: $EXE"
echo "Runs: $RUNS"

if [[ ! -x "$EXE" ]]; then
    echo "ERROR: $EXE not found or not executable. Build first."
    exit 1
fi

TOTAL=0

for i in $(seq 1 $RUNS); do
    echo "--- Run $i ---"
    START=$(date +%s.%N)
    "$EXE" >/dev/null
    END=$(date +%s.%N)
    DT=$(echo "$END - $START" | bc)
    echo "Run $i time: $DT s"
    TOTAL=$(echo "$TOTAL + $DT" | bc)
done

AVG=$(echo "$TOTAL / $RUNS" | bc -l)
echo "=== Average runtime over $RUNS runs: $AVG s ==="
echo "Record this on Linux and Windows to compare."

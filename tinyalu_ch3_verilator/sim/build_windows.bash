#!/usr/bin/env bash
# Windows-safe build wrapper for Verilator (MSYS2 MinGW64)

set -e

echo "=== Verifying MSYS2 MinGW64 environment ==="
UNAME_S=$(uname -s)
if [[ "$UNAME_S" != "MINGW64_NT"* ]]; then
    echo "ERROR: This script must be run from MSYS2 MinGW64 shell."
    echo "Open 'MSYS2 MinGW64' and run: ./build_windows.sh"
    exit 1
fi

echo "=== Sanitizing path (no spaces) ==="
PWD_PATH=$(pwd)
if [[ "$PWD_PATH" == *" "* ]]; then
    echo "ERROR: Project path contains spaces:"
    echo "  $PWD_PATH"
    echo "Move the project to a path without spaces (e.g. D:/DesignData/Design/...)."
    exit 1
fi

echo "=== Ensuring Verilator built-in files exist ==="
if [[ ! -f /mingw64/include/verilated_std.sv ]] || [[ ! -f /mingw64/include/verilated_std_waiver.vlt ]]; then
    echo "ERROR: Verilator built-in files missing in /mingw64/include."
    echo "Rebuild Verilator using rebuild_verilator.sh, then retry."
    exit 1
fi

echo "=== Running make clean && make ==="
make clean
make

echo "=== Build complete ==="

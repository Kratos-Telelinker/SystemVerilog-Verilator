#!/usr/bin/env bash
# check_msys2_env.sh
# Diagnostic script for MSYS2 + Verilator environment

set -e

echo "=== MSYS2 / Verilator Environment Diagnostic ==="

echo "[1] uname:"
uname -a

echo "[2] Shell check:"
if [[ "$MSYSTEM" != "MINGW64" ]]; then
    echo "WARNING: Not in MINGW64 (MSYSTEM=$MSYSTEM). Use MSYS2 MinGW64 shell."
else
    echo "OK: MSYS2 MinGW64 shell."
fi

echo "[3] Verilator version:"
if command -v verilator >/dev/null 2>&1; then
    verilator --version
else
    echo "ERROR: verilator not found in PATH."
fi

echo "[4] GCC version:"
if command -v g++ >/dev/null 2>&1; then
    g++ --version | head -n 1
else
    echo "ERROR: g++ not found."
fi

echo "[5] Flex/Bison:"
if command -v flex >/dev/null 2>&1; then
    flex --version
else
    echo "ERROR: flex not found."
fi
if command -v bison >/dev/null 2>&1; then
    bison --version | head -n 1
else
    echo "ERROR: bison not found."
fi

echo "[6] Verilator built-in files:"
for f in /mingw64/include/verilated_std.sv /mingw64/include/verilated_std_waiver.vlt; do
    if [[ -f "$f" ]]; then
        echo "OK: $f"
    else
        echo "MISSING: $f"
    fi
done

echo "[7] Project path spaces check:"
PWD_PATH=$(pwd)
if [[ "$PWD_PATH" == *" "* ]]; then
    echo "ERROR: Project path contains spaces:"
    echo "  $PWD_PATH"
else
    echo "OK: No spaces in project path."
fi

echo "=== Diagnostic complete ==="

#!/usr/bin/env bash
# Path sanitizer to prevent Windows from breaking Verilator

set -e

echo "=== Path Sanitizer ==="

PWD_PATH=$(pwd)
if [[ "$PWD_PATH" == *" "* ]]; then
    echo "ERROR: Current project path contains spaces:"
    echo "  $PWD_PATH"
    echo "Move the project to a space-free path (e.g. D:/DesignData/Design/UVM_Primer-for-Verilator)."
    exit 1
fi

echo "=== Checking MSYS2 MinGW64 ==="
if [[ "$MSYSTEM" != "MINGW64" ]]; then
    echo "ERROR: Not in MSYS2 MinGW64 (MSYSTEM=$MSYSTEM)."
    echo "Open 'MSYS2 MinGW64' and rerun."
    exit 1
fi

echo "=== Normalizing include paths for Verilator ==="
if [[ ! -f /mingw64/include/FlexLexer.h ]] && [[ -f /usr/include/FlexLexer.h ]]; then
    echo "Copying FlexLexer.h from /usr/include to /mingw64/include..."
    cp /usr/include/FlexLexer.h /mingw64/include/
fi

echo "=== Ensuring /mingw64/include is used by Verilator ==="
echo "Add this to your Makefile VERILATOR_FLAGS if not present:"
echo "  -I/mingw64/include"

echo "=== Path sanitizer complete ==="

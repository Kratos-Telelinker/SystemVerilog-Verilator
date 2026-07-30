#!/usr/bin/env bash

set -e

UNAME_S=$(uname -s)

echo "=== Rebuilding Verilator on $UNAME_S ==="

if [[ "$UNAME_S" == "Linux" ]]; then
    sudo apt update
    sudo apt install -y git gcc g++ make flex bison autoconf automake libtool python3
else
    pacman -S --needed git mingw-w64-x86_64-gcc mingw-w64-x86_64-make \
        autoconf automake libtool flex bison python
    echo "Copying FlexLexer.h into MinGW64 include directory..."
    cp /usr/include/FlexLexer.h /mingw64/include/
fi

rm -rf ~/verilator
git clone https://github.com/verilator/verilator ~/verilator
cd ~/verilator

autoconf
./configure
make -j8
make install

echo "=== Verilator rebuild complete ==="
verilator --version

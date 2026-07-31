#!/usr/bin/env bash
set -e

echo "====================================================="
echo "  Verilator Windows Install Script (MSYS2 MinGW64)"
echo "====================================================="

# -------------------------------------------------------
# 1. Update MSYS2 and install required packages
# -------------------------------------------------------
echo "[1/7] Updating MSYS2 and installing dependencies..."
pacman -Syu --noconfirm
pacman -S --noconfirm \
    git \
    make \
    autoconf \
    automake \
    libtool \
    clang \
    python3 \
    perl \
    gcc \
    flex \
    bison

# -------------------------------------------------------
# 2. Clone Verilator
# -------------------------------------------------------
echo "[2/7] Cloning Verilator..."
cd ~
rm -rf verilator
git clone https://github.com/verilator/verilator.git
cd verilator

# -------------------------------------------------------
# 3. Bootstrap (generate configure script)
# -------------------------------------------------------
echo "[3/7] Bootstrapping Verilator..."
autoconf

# -------------------------------------------------------
# 4. Configure for Windows/MSYS2 MinGW64
# -------------------------------------------------------
echo "[4/7] Configuring Verilator..."
./configure \
    CC=clang \
    CXX=clang++ \
    --prefix=/mingw64

# -------------------------------------------------------
# 5. Build Verilator
# -------------------------------------------------------
echo "[5/7] Building Verilator..."
make -j$(nproc)

# -------------------------------------------------------
# 6. Install Verilator
# -------------------------------------------------------
echo "[6/7] Installing Verilator..."
make install

# -------------------------------------------------------
# 7. Copy missing include files (MSYS2 fix)
# -------------------------------------------------------
echo "[7/7] Copying missing Verilator include files..."

INC_SRC=include
INC_DST=/mingw64/share/verilator/include

mkdir -p $INC_DST

cp -v $INC_SRC/verilated*.h $INC_DST/
cp -v $INC_SRC/verilated.mk $INC_DST/
cp -v $INC_SRC/verilated_config.h $INC_DST/
cp -vr $INC_SRC/verilated $INC_DST/

echo "====================================================="
echo "  Verilator installation complete!"
echo "====================================================="

echo "Verifying installation..."
verilator --version || echo "Verilator not found in PATH"

echo "Done."

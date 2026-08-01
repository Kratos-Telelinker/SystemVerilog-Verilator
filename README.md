# Ray Selemi UVM Primer-modified to use Verilator
Repository cVerilator free simulator.

# Verilator Cross‑Platform Build & Coverage Framework  
Portable workflow for Windows (MSYS2 MinGW64) and Linux

This repository provides a complete, reproducible workflow for building Verilator
from source, running simulations, extracting coverage, generating annotated
source, and producing a clean HTML coverage dashboard. The system is designed to
work identically on **Linux** and **Windows (MSYS2 MinGW64)**.

---

## 📘 Overview

Verilator provides high‑performance SystemVerilog simulation and coverage
instrumentation. This project wraps the full flow:

1. Build Verilator from source (portable across Windows + Linux)
2. Build your design using Verilator
3. Run the simulation
4. Extract coverage (`verilator_coverage`)
5. Generate annotated source HTML
6. Produce a readable HTML coverage report

The Windows workflow is fully automated with setup using :
        Windows MSYS2 MINGW64
        Verilator 5.051 (script install_veriltor_window.sh provided to be run in MSYS2 MINGW64)
        make setup on MSYS2 MINGW64
            - pacman -Syu
            - pacman -S mingw-w64-86_64-make


The Linux workflow is fully automated with setup using :
        Install prerequisites: 
            Verilator 5.051 or newer
            
            sudo apt-get install git help2man perl python3 make autoconf g++ flex bison ccache. Also install: sudo apt-get install libgoogle-perftools-dev libjemalloc-dev numactl perl-doc. For Ubuntu only: sudo apt-get install libfl2 libfl-dev zlibc zlib1g zlib1g-dev.

            Clone the repository: git clone https://github.com/verilator/verilator.
            
            Navigate into the cloned directory: cd verilator.
            Update the repository: git pull.
            (Optional) Check available versions: git tag and checkout a desired version with git checkout v{version}.

Generate the configure script: autoconf.

Configure the build: ./configure.

Compile Verilator: make -j $(nproc).

Install Verilator: sudo make install.    

- `Makefile` (single mMakefile auto‑detects Windows vs Linux)
- `install_verilator.sh` (auto‑rebuilds Verilator correctly to work with Linux/Windows make )
- `coverage_html.py` (HTML report generator, no graphics)

---

## 🖥 Supported Platforms

| Platform | Status | Notes |
|---------|--------|-------|
| **Linux (Ubuntu/Debian/Fedora)** | ✔ Supported | Uses system GCC + standard packages |
<<<<<<< HEAD
| **Windows (MSYS2 MinGW64)** | ✔ Supported | Requires MSYS2 + MinGW64 toolchain + Make|
=======
| **Windows (MSYS2 MinGW64)** | ✔ Supported | Requires MSYS2 + MinGW64 toolchain |
>>>>>>> 64b4380205dcfb2a7241d6c4d38fd96934030845

---

## 📁 Directory Structure
project/
│
├── Makefile                     # Auto-detects Windows/Linux
├── rebuild_verilator.sh         # Rebuilds Verilator correctly
├── coverage_html.py             # HTML report generator (no graphics)
│
├── obj_dir/                     # Verilator build output
│   ├── Vtop                     # Simulation executable
│   ├── coverage.dat             # Raw coverage database
│   └── ...
│
├── cov_annotate/                # Annotated source HTML (generated)
│   ├── module.sv.html
│   └── ...
│
└── coverage.info                # LCOV coverage data (generated)
---

## 🔧 Requirements

### Linux
sudo apt install git gcc g++ make flex bison autoconf automake libtool python3

pacman -S --needed \
git \
mingw-w64-x86_64-gcc \
mingw-w64-x86_64-make \
autoconf automake libtool \
flex bison \
python

> **Important:**  
> MSYS2 installs `FlexLexer.h` into `/usr/include`.  
> MinGW64 needs it in `/mingw64/include`.  
> The Makefile handles this automatically.

---

COMPLETE WINDOWS VERILATOR INSTALL SCRIPT
install_verilator_windows.sh

Includes:
MSYS2 package install

Cloning Verilator

Building with autoconf + clang

Installing into C:/msys64/mingw64

Copying missing include files

Fixing Windows path issues

Verifying installation

## 🧪 Running Simulation + Coverage

make run
make coverage
make report


---

## 📊 Coverage Categories

- Line coverage  
- Branch coverage  
- Expression coverage  
- Toggle coverage  

All displayed in clean HTML tables.

---

## 🛠 Troubleshooting

### FlexLexer.h missing (Windows)
Run:
./rebuild_verilator.sh
You must run it in:
MSYS2 MinGW64 shell
This is the only environment where:

pacman exists

MinGW64 GCC exists

/usr/include and /mingw64/include exist

Verilator can actually build

Your prompt must look like:
### ABI mismatch (undefined reference to std::__cxx11::basic_string)
Rebuild Verilator using the script.

### Annotated source missing
Ensure:
verilator_coverage --annotate cov_annotate obj_dir/coverage.dat



👤 Author
Brad Balla kratos@telelinker.com verification enthusiast and retired Python engineer.


## 📘 Overview

Verilator provides high‑performance SystemVerilog simulation and coverage
instrumentation. This project wraps the full flow:

1. Build Verilator from source (portable across Windows + Linux)
2. Build your design using Verilator
3. Run the simulation
4. Extract coverage (`verilator_coverage`)
5. Generate annotated source HTML
6. Produce a readable HTML coverage report

The workflow is fully automated using:

- `Makefile` (auto‑detects Windows vs Linux)
- `rebuild_verilator.sh` (auto‑rebuilds Verilator correctly)
- `coverage_html.py` (HTML report generator, no graphics)

---

## 🖥 Supported Platforms

| Platform | Status | Notes |
|---------|--------|-------|
| **Linux (Ubuntu/Debian/Fedora)** | ✔ Supported | Uses system GCC + standard packages |
| **Windows (MSYS2 MinGW64)** | ✔ Supported | Requires MSYS2 + MinGW64 toolchain |

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

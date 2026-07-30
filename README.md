# RaySelemiUVMPrimer-with-Verilator
Repository cVerilator free simulator.

This version intentionally contains **no graphics**, ensuring predictable layout
and compatibility with all browsers and PDF printers.

---

## 📘 Overview

Modern hardware verification requires more than passing tests — it requires
quantifiable coverage metrics. Verilator provides raw coverage data, but not a
human‑friendly report. This project fills that gap by:

1. Running Verilator simulations with coverage enabled  
2. Extracting coverage databases  
3. Converting coverage data into LCOV format  
4. Generating annotated source HTML  
5. Producing a readable HTML report via Python

The workflow is fully automated through a shell script and a Python report
generator.

---

## 📁 Project Structure

project/
│
├── coverage_html.py          # HTML report generator (no graphics)
├── coverage_report.sh        # End‑to‑end coverage workflow
├── Makefile                  # Verilator build + run + coverage extraction
│
├── obj_dir/                  # Verilator build output
│   ├── Vtop                  # Simulation executable
│   ├── coverage.dat          # Raw coverage database
│   └── ...                   # Other Verilator artifacts
│
├── cov_annotate/             # Annotated source HTML (generated)
│   ├── module1.sv.html
│   ├── module2.sv.html
│   └── ...
│
└── coverage.info             # LCOV coverage data (generated)

Code

---

## 🔧 Requirements

### Tools
- **Verilator 5.x**
- **lcov** (geninfo + genhtml)
- **Python 3.8+**

### Verilator Build Flags
Coverage requires specific flags:

--coverage
--trace
--trace-structs

Code

Example:

```bash
verilator -cc top.sv --exe sim_main.cpp --coverage --trace --trace-structs
🚀 Running the Full Coverage Flow
Your coverage_report.sh automates the entire process:

1. Build and run the simulation
bash
make -j
./obj_dir/Vtop
2. Extract coverage database
bash
verilator_coverage --write-info coverage.info obj_dir/coverage.dat
3. Generate annotated source HTML
bash
verilator_coverage --annotate cov_annotate obj_dir/coverage.dat
4. Generate final HTML report
bash
python3 coverage_html.py coverage.info cov_annotate coverage_report.html
The resulting coverage_report.html is your complete coverage dashboard.

📊 Coverage Categories
Verilator produces several coverage types, all of which are parsed and displayed:

Category	Description
Line	Executed vs non‑executed lines
Branch	Conditional branches taken/not taken
Expression	FNDA entries (function/expression hits)
Toggle	Signal toggle counts


These appear in both the summary table and detailed module tables.

📝 HTML Report Layout (No Graphics)
The generated HTML contains:

1. Coverage Summary Table
Shows percentage coverage for each module:

Code
Module      Line   Branch   Expr   Toggle
-----------------------------------------
adder.sv    92%    88%      100%   75%
alu.sv      97%    90%      100%   80%
2. Detailed Coverage Tables
Each module includes:

Line coverage table

Branch coverage table

Expression coverage table

Toggle coverage table

Rows are color‑coded:

Green → covered

Red → uncovered

3. Annotated Source
Each module includes collapsible annotated source:

Code
<details>
  <summary>Annotated Source</summary>
  <div> ... HTML from Verilator ... </div>
</details>
🧠 How coverage_html.py Works
Step 1 — Parse LCOV
Reads coverage.info and extracts:

DA: line hits

BRDA: branch hits

FNDA: expression hits

TOGGLE: signal toggles

Step 2 — Load Annotated Source
Reads all .html files from cov_annotate/.

Step 3 — Generate HTML
Builds:

Summary table

Detailed tables

Annotated source blocks

Step 4 — Write Output
Saves final report to the path you specify.

🛠 Troubleshooting
Coverage is zero
Ensure Verilator was built with:

Code
--coverage
Annotated source missing
Ensure:

bash
verilator_coverage --annotate cov_annotate obj_dir/coverage.dat
HTML layout looks wrong
Delete old output:

bash
rm coverage_report.html
rm -rf cov_annotate
rm coverage.info
Regenerate:

bash
./coverage_report.sh
🚀 Future Enhancements
If desired, the project can be extended with:

Unified graphics page (pie + bar charts)

Sortable tables

Collapsible module sections

PDF export

Heatmap‑style coverage visualization

CI integration (GitHub Actions)

Graphics were intentionally removed for stability, but can be re‑added cleanly.

👤 Author
Kratos — Calgary, Alberta
Hardware verification enthusiast and retired Python engineer.

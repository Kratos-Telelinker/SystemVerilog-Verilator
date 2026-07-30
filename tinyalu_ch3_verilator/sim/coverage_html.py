#!/usr/bin/env python3

# Coding       : utf-8 
# Project      : tinyalu_ch3_verilator
# Package      : 
# Filename     : coverage_html.py
# Date         : 2026-07-29  12:20 p.m.
# AUTHOR       : krato kratos@telelinker.com
# Organization : Telelinker Logic Solutions

# Copyright � 2026 Telelinker Logic Solutions
# All rights reserved. 

# ----------------------------------------------------------------------
# Description

# ----------------------------------------------------------------------
#!/usr/bin/env python3
import sys
import os
import re
import html
from pathlib import Path
from collections import defaultdict


# Define Functions
# --------------------------------------------------------------------
# Usage:
#   python3  coverage.info cov_annotate_dir out.html
# --------------------------------------------------------------------
#!/usr/bin/env python3
import sys
import os
from pathlib import Path
from collections import defaultdict

# ============================================================
#  LCOV Coverage Parser (Verilator 5.x)
# ============================================================

def parse_coverage_info(info_path):
    modules = defaultdict(lambda: {
        "lines": [],
        "branches": [],
        "expressions": [],
        "toggles": [],
        "total_lines": 0,
        "covered_lines": 0,
        "total_branches": 0,
        "covered_branches": 0,
        "total_expr": 0,
        "covered_expr": 0,
        "total_toggles": 0,
        "covered_toggles": 0
    })

    current_file = None

    with open(info_path, "r") as f:
        for line in f:
            line = line.strip()

            if line.startswith("SF:"):
                current_file = os.path.basename(line[3:])
                continue

            if line.startswith("DA:") and current_file:
                ln, hits = line[3:].split(",")
                ln = int(ln)
                hits = int(hits)
                mod = modules[current_file]
                mod["lines"].append((current_file, ln, hits))
                mod["total_lines"] += 1
                if hits > 0:
                    mod["covered_lines"] += 1
                continue

            if line.startswith("BRDA:") and current_file:
                ln, blk, br, hits = line[5:].split(",")
                hits = int(hits)
                mod = modules[current_file]
                mod["branches"].append((current_file, int(ln), blk, br, hits))
                mod["total_branches"] += 1
                if hits > 0:
                    mod["covered_branches"] += 1
                continue

            if line.startswith("FNDA:") and current_file:
                hits, func = line[5:].split(",")
                hits = int(hits)
                mod = modules[current_file]
                mod["expressions"].append((current_file, func, hits))
                mod["total_expr"] += 1
                if hits > 0:
                    mod["covered_expr"] += 1
                continue

            if line.startswith("TOGGLE:") and current_file:
                sig, hits = line[7:].split(",")
                hits = int(hits)
                mod = modules[current_file]
                mod["toggles"].append((current_file, sig, hits))
                mod["total_toggles"] += 1
                if hits > 0:
                    mod["covered_toggles"] += 1
                continue

    return modules


# ============================================================
#  Annotated Source Loader
# ============================================================

def load_annotated_sources(annotate_dir):
    annotated = {}
    annotate_dir = Path(annotate_dir)

    for path in annotate_dir.glob("*.html"):
        annotated[path.name] = path.read_text(encoding="utf-8", errors="ignore")

    return annotated


# ============================================================
#  Utility
# ============================================================

def pct(cov, total):
    return 0.0 if total == 0 else 100.0 * cov / total


# ============================================================
#  HTML Dashboard Generator
# ============================================================

def generate_html(modules, annotated, out_path):
    out = []

    out.append("<!DOCTYPE html>")
    out.append("<html><head><meta charset='utf-8'>")
    out.append("<title>Coverage Dashboard</title>")

    out.append("<script src='https://cdn.jsdelivr.net/npm/chart.js'></script>")

    out.append("""
<style>
body { background:#202124; color:#3a81de; font-family:Arial; margin:20px; }
table { border-collapse:collapse; width:100%; margin-bottom:20px; }
th,td { border:1px solid #5f6368; padding:6px 10px; }
th { background:#303134; }
tr.good { background:#1e3a1e; }
tr.bad { background:#3c1e1e; }
.module-card { background:#f2f2f2; padding:10px; margin-bottom:20px; border:1px solid #1A0A0AFF; }

/* 75% smaller charts using CSS scaling */
.chart-small {
    transform: scale(0.75);
    transform-origin: top left;
    width:200px;
    height: 100px;
}
</style>
</head><body>
""")

    out.append("<h1>Verilator Coverage Dashboard</h1>")

    # ============================================================
    #  TABLES FIRST
    # ============================================================

    out.append("<h2>Coverage Summary</h2>")
    out.append("<table>")
    out.append("<tr><th>Module</th><th>Line</th><th>Branch</th><th>Expr</th><th>Toggle</th></tr>")

    for file_name, data in sorted(modules.items()):
        p_line   = pct(data["covered_lines"], data["total_lines"])
        p_branch = pct(data["covered_branches"], data["total_branches"])
        p_expr   = pct(data["covered_expr"], data["total_expr"])
        p_toggle = pct(data["covered_toggles"], data["total_toggles"])

        out.append(f"<tr><td>{file_name}</td>"
                   f"<td>{p_line:.1f}%</td>"
                   f"<td>{p_branch:.1f}%</td>"
                   f"<td>{p_expr:.1f}%</td>"
                   f"<td>{p_toggle:.1f}%</td></tr>")

    out.append("</table>")

    # Detailed tables
    out.append("<h2>Detailed Coverage</h2>")

    for file_name, data in sorted(modules.items()):
        out.append(f"<h3>{file_name}</h3>")

        # Line coverage
        out.append("<h4>Line Coverage</h4>")
        out.append("<table><tr><th>Line</th><th>Hits</th></tr>")
        for (_, ln, hits) in sorted(data["lines"], key=lambda x: x[1]):
            cls = "good" if hits > 0 else "bad"
            out.append(f"<tr class='{cls}'><td>{ln}</td><td>{hits}</td></tr>")
        out.append("</table>")

        # Branch coverage
        out.append("<h4>Branch Coverage</h4>")
        out.append("<table><tr><th>Line</th><th>Block</th><th>Branch</th><th>Hits</th></tr>")
        for (_, ln, blk, br, hits) in data["branches"]:
            cls = "good" if hits > 0 else "bad"
            out.append(f"<tr class='{cls}'><td>{ln}</td><td>{blk}</td><td>{br}</td><td>{hits}</td></tr>")
        out.append("</table>")

        # Expression coverage
        out.append("<h4>Expression Coverage</h4>")
        out.append("<table><tr><th>Expression</th><th>Hits</th></tr>")
        for (_, func, hits) in data["expressions"]:
            cls = "good" if hits > 0 else "bad"
            out.append(f"<tr class='{cls}'><td>{func}</td><td>{hits}</td></tr>")
        out.append("</table>")

        # Toggle coverage
        out.append("<h4>Toggle Coverage</h4>")
        out.append("<table><tr><th>Signal</th><th>Hits</th></tr>")
        for (_, sig, hits) in data["toggles"]:
            cls = "good" if hits > 0 else "bad"
            out.append(f"<tr class='{cls}'><td>{sig}</td><td>{hits}</td></tr>")
        out.append("</table>")

        # Annotated source
        ann_key = file_name + ".html"
        if ann_key in annotated:
            out.append("<details><summary>Annotated Source</summary>")
            out.append("<div style='background:#111; padding:10px;'>")
            out.append(annotated[ann_key])
            out.append("</div></details>")
        else:
            out.append("<p><em>No annotated source available.</em></p>")

    # ============================================================
    #  GRAPHICS LAST (ONE PAGE ONLY)
    # ============================================================

    out.append("<h2>Coverage Graphics Overview</h2>")
    out.append("<p>Bar graphs show the percentage of coverage for each category: line, branch, expression, and toggle.</p>")

    for file_name, data in sorted(modules.items()):
        p_line   = pct(data["covered_lines"], data["total_lines"])
        p_branch = pct(data["covered_branches"], data["total_branches"])
        p_expr   = pct(data["covered_expr"], data["total_expr"])
        p_toggle = pct(data["covered_toggles"], data["total_toggles"])

        out.append(f"""
        <div class='module-card'>
            <h3>{file_name}</h3>

            <canvas class='chart-small' id='pie_{file_name}'></canvas>
            <canvas class='chart-small' id='bar_{file_name}'></canvas>

            <script>
            new Chart(document.getElementById('pie_{file_name}'), {{
                type: 'pie',
                data: {{
                    labels: ['Line','Branch','Expr','Toggle'],
                    datasets: [{{
                        data: [{p_line:.1f},{p_branch:.1f},{p_expr:.1f},{p_toggle:.1f}],
                        backgroundColor: ['#4caf50','#2196f3','#ff9800','#9c27b0']
                    }}]
                }}
            }});

            new Chart(document.getElementById('bar_{file_name}'), {{
                type: 'bar',
                data: {{
                    labels: ['Line','Branch','Expr','Toggle'],
                    datasets: [{{
                        label: 'Coverage %',
                        data: [{p_line:.1f},{p_branch:.1f},{p_expr:.1f},{p_toggle:.1f}],
                        backgroundColor: '#8ab4f8'
                    }}]
                }},
                options: {{
                    plugins: {{
                        title: {{
                            display: true,
                            text: 'Coverage breakdown for test module: {file_name}'
                        }}
                    }},
                    scales: {{
                        y: {{ beginAtZero:true, max:100 }}
                    }}
                }}
            }});
            </script>
        </div>
        """)

    out.append("</body></html>")
    Path(out_path).write_text("\n".join(out), encoding="utf-8")
    print(f"Coverage HTML report written to {out_path}")


# ============================================================
#  Main
# ============================================================

def main():
    if len(sys.argv) != 4:
        print("Usage: python3 coverage_html.py coverage.info cov_annotate_dir out.html")
        sys.exit(1)

    info_path = sys.argv[1]
    annotate_dir = sys.argv[2]
    out_path = sys.argv[3]

    modules = parse_coverage_info(info_path)
    annotated = load_annotated_sources(annotate_dir)
    generate_html(modules, annotated, out_path)

    
    
    
if __name__ == '__main__':
    print()
    print("*" * 50)
    print("coverage_html.py : Running Python {0}.{1}.{2}"
          .format(int(sys.version_info[0]),
                  int(sys.version_info[1]),
                  int(sys.version_info[2])))
    print("Copyright � 2026 Telelinker Logic Solutions")
    print("All rights reserved")
    print("*" * 50 + "\n\n")
    if int(sys.version_info[0]) < 3 or (int(sys.version_info[0]) == 3
                                        and int(sys.version_info[1]) < 12):
        raise Exception("Must be running Python 3.12 or newer.")
    main()

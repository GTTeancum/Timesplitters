"""Ranks the generated game functions for -O2 from a console profile and
writes the list (B-CODEGEN, M3.6; src/xbox/PUSH-BC-PLAN.md section 5.2).

usage: rank_o2.py <hwprof report> <main.map> [--budget-kb N] [--min-share P] [--out FILE]

<hwprof report>: the output of src/xbox/tools/hwprof_report.py for a
TS_HWPROF=1 run on the console (run it with --top 400 so the list reaches
the small functions); <main.map>: the link map of that same build.

Each generated function in the report's top list gets a density: its
samples per KB of its code in that build (most of the profiled build is
-Oz, so the size is what -O2 roughly doubles). The list is filled in order
of density until the code -O2 adds (estimated as --growth times the
function's size in the profiled build; check it against main.map after a
build) reaches the budget,
leaving out:
  - the originals a native twin replaces (NATIVE_TWINS in
    src/xbox/gen_fast_names.mk, except calMatrices whose original still
    runs) and the ones B-LOGIC's natives replace
    (src/xbox/tools/native_replaced.txt, one name per line);
  - functions under --min-share percent of all samples (default 0.1).
The result is written to src/xbox/gen_fast_names_ranked.mk (or --out) as
GEN_FAST_NAMES_RANKED, which `make TS_O2_RANKED=1` builds -O2 in place of
the hand list. The report, the budget and each pick's numbers are in the
file's comments.
"""
import argparse
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
XBOX = os.path.dirname(HERE)
GENERATED_NAME = re.compile(r"\b([A-Za-z_]\w*_0x[0-9a-f]+)\b")
O2_GROWTH = 0.8


def read_report(path):
    """name -> (share %, samples) from the report's 'top N functions' list."""
    picks = {}
    total_line = None
    in_top = False
    for line in open(path, encoding="latin-1"):
        if line.startswith("== top "):
            in_top = True
            total_line = line.strip()
            continue
        if line.startswith("=="):
            in_top = False
            continue
        if not in_top:
            continue
        m = re.match(r"\s*([\d.]+)%\s+(\d+)\s+(\S+)", line)
        if not m:
            continue
        g = GENERATED_NAME.fullmatch(m.group(3))
        if g:
            name = g.group(1)
            share, samples = float(m.group(1)), int(m.group(2))
            old = picks.get(name, (0.0, 0))
            picks[name] = (old[0] + share, old[1] + samples)
    return picks, total_line


def read_sizes(path):
    """name -> code bytes in the profiled build, from the link map."""
    syms = []
    for line in open(path, encoding="latin-1"):
        m = re.match(r"\s*[0-9a-f]{4}:[0-9a-f]{8}\s+(\S+)\s+([0-9a-f]{8,16})\s", line)
        if m:
            syms.append((int(m.group(2), 16), m.group(1)))
    syms.sort()
    sizes = {}
    for (addr, name), (next_addr, _) in zip(syms, syms[1:]):
        g = re.match(r"\?(\w+_0x[0-9a-f]+)@@", name)
        if g and next_addr > addr:
            sizes.setdefault(g.group(1), next_addr - addr)
    return sizes


def read_names(path, variable):
    """The names in a make variable's (continued) assignment."""
    text = open(path).read().replace("\\\n", " ")
    m = re.search(r"^%s\s*:?=(.*)$" % variable, text, re.M)
    return set(m.group(1).split()) if m else set()


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("report")
    parser.add_argument("map")
    parser.add_argument("--budget-kb", type=float, default=420.0,
                        help="code -O2 may add, in KB")
    parser.add_argument("--growth", type=float, default=O2_GROWTH,
                        help="code -O2 adds per byte of the profiled build's code (estimate)")
    parser.add_argument("--min-share", type=float, default=0.1)
    parser.add_argument("--out", default=os.path.join(XBOX, "gen_fast_names_ranked.mk"))
    args = parser.parse_args()

    picks, total_line = read_report(args.report)
    sizes = read_sizes(args.map)
    twins = read_names(os.path.join(XBOX, "gen_fast_names.mk"), "NATIVE_TWINS")
    twins.discard("calMatrices_0x212e08")
    replaced_path = os.path.join(HERE, "native_replaced.txt")
    replaced = set()
    if os.path.exists(replaced_path):
        replaced = {l.split("#", 1)[0].strip() for l in open(replaced_path)} - {""}
    generated = {os.path.splitext(f)[0] for f in os.listdir(os.path.join(XBOX, "..", "..", "project", "generated"))}

    ranked = []
    skipped = []
    for name, (share, samples) in picks.items():
        if name not in generated:
            skipped.append((name, "not a generated file"))
        elif name in twins or name in replaced:
            skipped.append((name, "replaced by a native"))
        elif share < args.min_share:
            continue
        elif name not in sizes:
            skipped.append((name, "not in the map"))
        else:
            kb = sizes[name] / 1024.0
            ranked.append((samples / kb, name, share, samples, kb))
    ranked.sort(reverse=True)

    chosen, added = [], 0.0
    for density, name, share, samples, kb in ranked:
        if added + kb * args.growth > args.budget_kb:
            continue
        chosen.append((name, share, samples, kb, density))
        added += kb * args.growth

    lines = [
        "# Generated by src/xbox/tools/rank_o2.py; do not edit (rerun it on a new profile).",
        "# Report: %s (%s)" % (os.path.basename(args.report), total_line or "no top list"),
        "# Map: %s; budget %.0f KB of added code (estimated %.0f KB used); min share %.2f%%."
        % (os.path.basename(args.map), args.budget_kb, added, args.min_share),
        "# name: share of all samples, samples, KB at the profiled build's level, samples per KB",
    ]
    for name, share, samples, kb, density in chosen:
        lines.append("#   %-40s %5.2f%% %6d %7.1f %8.1f" % (name, share, samples, kb, density))
    for name, why in sorted(skipped):
        lines.append("#   (left out: %s, %s)" % (name, why))
    lines.append("GEN_FAST_NAMES_RANKED := " + " \\\n    ".join(n for n, _, _, _, _ in chosen))
    open(args.out, "w").write("\n".join(lines) + "\n")
    print("rank_o2: %d functions, ~%.0f KB of added code -> %s" % (len(chosen), added, args.out))
    return 0


if __name__ == "__main__":
    sys.exit(main())

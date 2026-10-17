"""Corpus test of src/xbox/tools/patch_generated.py (B-CODEGEN,
src/xbox/PUSH-BC-PLAN.md section 5.2).

usage: python src/xbox/test/patch_generated_test.py [--build <build/xbox>] [--flags "<options>"]

Runs the patcher over every generated function (project/generated) with the
given options (default: every exact one) and checks:
  1. without options the output is byte-identical to Week 0's patcher (the
     default build is unchanged; the f09a873 copy is read with git show);
  2. the header carries the options, and per file the pc stores add up
     (dropped + kept = found);
  3. no dropped store is visible: a forward pass over the patched output in
     which every PS2X_PC_DROP poisons pc finds no consumer (a call, a
     return, a syscall, the delay-slot resume test, an unrouted memory
     access, the function's end) that can read the poison. This is the
     dual of the patcher's own backward liveness pass, run on its output;
  4. every routed memory access carries the pc the unpatched code had there
     (a forward constant pass with the dropped stores put back);
  5. the names no set of the flow pass knows (all of them treated as
     consumers) are listed, for review when the recompiler changes.
With --build, the patched copies in <build>/gen are also checked against
<build>/gen/patch.flags (the stamp the Makefile writes): each copy's
"// flags:" line must be the stamp's options.
Exits nonzero on any failure.
"""
import argparse
import collections
import glob
import os
import re
import runpy
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
TOOLS = os.path.join(ROOT, "src", "xbox", "tools")
sys.path.insert(0, TOOLS)
import direct_calls  # noqa: E402
import patch_generated as pg  # noqa: E402

DEFAULT_FLAGS = "-pc-stores -delay-flags -resume-guard -indirect-cache"
BASELINE_COMMIT = "f09a873"

DROP = re.compile(r"PS2X_PC_DROP\((0x[0-9A-Fa-f]+)u\);")
ROUTED = re.compile(r"PS2X_PC_(DS_)?(READ|WRITE)(8|16|32|64|128)\((0x[0-9A-Fa-f]+)u, (?:(0x[0-9A-Fa-f]+)u, )?")
GUARD = re.compile(r"if \(__builtin_expect\(ctx->pc != 0x[0-9a-f]+u, 0\)\) switch \(PS2X_RESUME_PC\(ctx->pc\)\) \{")


def unpatch_view(lines):
    """The patched lines in the generated vocabulary, for the flow pass:
    a dropped store back as a store, a routed access as an in-RAM one (pure
    for pc), the resume guard as the plain switch. Returns the lines, the
    dropped lines and {routed line: [pc, ...]}."""
    out, drops, routed = [], set(), {}
    for i, line in enumerate(lines):
        m = DROP.search(line)
        if m:
            drops.add(i)
            line = line.replace(m.group(0), "ctx->pc = %su;" % m.group(1))
        pcs = [int(r.group(4), 16) for r in ROUTED.finditer(line)]
        if pcs:
            routed[i] = pcs
            line = ROUTED.sub(lambda r: "FAST_%s%s(" % (r.group(2), r.group(3)), line)
        line = line.replace("PS2X_DS_DROP();", ";")
        if GUARD.search(line):
            line = GUARD.sub("switch (ctx->pc) {", line)
        out.append(line)
    return out, drops, routed


def check_function(name, text, problems):
    lines = text.split("\n")
    view, drops, routed = unpatch_view(lines)
    span = pg.function_span(view)
    if span is None:
        return
    try:
        flow = pg.Flow(view, span[0] + 1, span[1])
    except pg.Unsupported:
        if drops or routed:
            problems.append("%s: patched although the flow pass cannot model it" % name)
        return
    # 4. routed accesses carry the unpatched pc.
    known = flow.known_pc()
    for i, pcs in routed.items():
        if any(pc != known[i] for pc in pcs):
            problems.append("%s:%d: routed pc %s, the code had %s" % (name, i + 1, pcs, known[i]))
    # 3. forward may-poison pass.
    poisoned = {i: False for i in range(flow.start, flow.end)}
    seen = set()
    work = [flow.start]
    for i in range(flow.start, flow.end):  # every node is a possible entry (resume labels)
        work.append(i)
    while work:
        i = work.pop()
        k = flow.kind[i]
        p = poisoned[i]
        consumer = k == "use" or (k == "mem" and i not in routed)
        if consumer and p:
            key = (name, i)
            if key not in seen:
                seen.add(key)
                problems.append("%s:%d: a dropped pc store reaches %r" % (name, i + 1, flow.text[i]))
        if i in drops:
            out = True
        elif isinstance(k, tuple) or k == "kill":
            out = False
        else:
            out = p
        for t in flow.succ[i]:
            if t == pg.EXIT:
                if out and not consumer:
                    problems.append("%s:%d: a dropped pc store reaches the function's end" % (name, i + 1))
                continue
            if out and not poisoned[t]:
                poisoned[t] = True
                work.append(t)


def run(flags, problems, unknown):
    table = os.path.join(ROOT, "build", "xbox", "gen", "register_functions_xbox.cpp")
    if not os.path.exists(table):
        table = os.path.join(tempfile.mkdtemp(), "register_functions_xbox.cpp")
        import compact_function_table
        compact_function_table.write_table(os.path.join(ROOT, "project", "generated", "register_functions.cpp"), table)
    out_dir = tempfile.mkdtemp()
    baseline = None
    if not flags:
        source = subprocess.run(["git", "-C", ROOT, "show", "%s:src/xbox/tools/patch_generated.py" % BASELINE_COMMIT],
                                capture_output=True, text=True).stdout
        baseline = os.path.join(out_dir, "baseline_patch_generated.py")
        open(baseline, "w").write(source)
    totals = collections.Counter()
    files = sorted(p for p in glob.glob(os.path.join(ROOT, "project", "generated", "*.cpp"))
                   if not p.endswith("register_functions.cpp"))
    for path in files:
        name = os.path.basename(path)
        output = os.path.join(out_dir, name)
        stats = pg.main(flags + [path, table, output])
        stats.pop("why", None)
        totals.update(stats)
        text = open(output).read()
        if baseline:
            # 1. identical to Week 0's output.
            reference = os.path.join(out_dir, "ref_" + name)
            saved = sys.argv
            sys.argv = [baseline, path, table, reference]
            try:
                runpy.run_path(baseline, run_name="__main__")
            finally:
                sys.argv = saved
            if open(reference).read() != text:
                problems.append("%s: differs from the %s patcher without options" % (name, BASELINE_COMMIT))
            continue
        # 2. header and counts.
        head = text.split("\n", 3)
        if head[1] != "// flags: " + " ".join(flags):
            problems.append("%s: flags line %r" % (name, head[1]))
        if stats["found"] != stats["dropped"] + stats["kept"]:
            problems.append("%s: %d found, %d dropped + %d kept" % (name, stats["found"], stats["dropped"], stats["kept"]))
        check_function(name, text, problems)
        for line in open(path).read().split("\n"):
            s = pg.strip_comment(line)
            if s and not s.startswith("#"):
                for n in pg.unknown_names(s):
                    if not re.search(r"_0x[0-9a-f]+$", n):  # (direct calls of game functions)
                        unknown[n] += 1
    return totals, len(files)


def check_build(build, problems):
    stamp = open(os.path.join(build, "gen", "patch.flags")).read().strip()
    for path in glob.glob(os.path.join(build, "gen", "*.cpp")):
        if path.endswith("register_functions_xbox.cpp"):
            continue
        head = open(path).read().split("\n", 2)
        flags_line = head[1][len("// flags: "):] if head[1].startswith("// flags: ") else ""
        if flags_line != stamp:
            problems.append("%s: flags %r, stamp %r" % (os.path.basename(path), flags_line, stamp))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--flags", default=DEFAULT_FLAGS)
    parser.add_argument("--build")
    args = parser.parse_args()
    problems = []
    unknown = collections.Counter()
    for flags in ([], args.flags.split()):
        totals, count = run(flags, problems, unknown)
        print("[patch_generated_test] %d files, flags %r: %s" % (count, " ".join(flags), dict(totals)))
    if args.build:
        check_build(args.build, problems)
    named = ", ".join("%s(%d)" % kv for kv in sorted(unknown.items(), key=lambda kv: -kv[1])[:40])
    print("[patch_generated_test] consumer names besides game functions (no set knows them): %d distinct; most used: %s" % (len(unknown), named))
    for p in problems[:50]:
        print("FAIL", p)
    print("[patch_generated_test] %s (%d problems)" % ("FAIL" if problems else "pass", len(problems)))
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main())

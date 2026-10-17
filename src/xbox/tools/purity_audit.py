"""Purity audit (B-LOGIC, src/xbox/PUSH-BC-PLAN.md section 3.6 items 1d and
5; design section 4.3): which game functions an idiomatic native may call
inside a no-yield region, or run twice in the lockstep.

A function is pure when it and everything it can call:
  * make no indirect call (jalr: the target is unknown);
  * make no kernel call outside the non-blocking set below (a syscall in a
    kernel wrapper; WaitSema, SleepThread, the SIF/RPC family, FlushCache,
    ... block or hand the CPU to another thread);
  * are not a host override that may block (ts_overrides.cpp's
    replaceFunction list: xboxWaitSema, loggedAssert, the zbtest pair, the
    stream RPC, the traced propDamage; the others are named pure below);
  * are not a runtime stub of the blocking families (Sema, Thread, Sif, Cd,
    Pad, Dma, Gs, Rpc, Sleep, Wait, Flush, Event);
  * do not poll hardware: a load from the I/O range (0x10000000-0x1FFFFFFF,
    built with lui) in a function with a backward branch is a polling loop.
Calls to addresses outside the corpus are impure.

Usage:
    python purity_audit.py <generated dir> <overrides cpp> <out header> [--report <file>]

The header is project/game/native/ts_pure_functions.h (generated; review a
change in a verdict before committing it: a function that becomes impure
must leave every guestCallPure and lockstep it is in).
"""

import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import mips_listing as ml  # noqa: E402

BLOCKING = re.compile(r"(Sema|Thread|Sif|Cd|Pad|Dma|Gs|Rpc|Sleep|Wait|Flush|Event|Intc|Alarm|Vblank)", re.I)
NONBLOCKING_SYSCALL_WRAPPERS = {"GetThreadId", "iGetThreadId", "ReferThreadStatus"}
PURE_OVERRIDES = {"nativeMemMark", "cheatUnlockedEx", "cheatChallengeAvail", "widescreenMatrixPerspective",
                  "displayMenuTick", "displayMenuMake"}
CONST = re.compile(r"constexpr uint32_t (k\w+) = (0x[0-9A-Fa-f]+)u?;")


def read_overrides(path):
    """{address: host function name} from ts_overrides.cpp."""
    text = open(path, encoding="utf-8", errors="replace").read()
    consts = {m.group(1): int(m.group(2), 16) for m in CONST.finditer(text)}
    found = {}
    for m in re.finditer(r"replaceFunction\(\s*(0x[0-9A-Fa-f]+u?|k\w+)\s*,\s*&?(\w+)\s*\)", text):
        key, name = m.group(1), m.group(2)
        if key.startswith("0x"):
            found[int(key.rstrip("u"), 16)] = name
        elif key in consts:
            found[consts[key]] = name
    return found


def local_verdict(fn, overrides):
    """Why fn itself is impure, or None."""
    if fn.address in overrides:
        name = overrides[fn.address]
        return None if name in PURE_OVERRIDES else "host override " + name
    if fn.stub:
        return "blocking stub" if BLOCKING.search(fn.name) else None
    has_back_edge = any(i.kind == "branch" and i.target is not None and i.target <= i.addr for i in fn.insns)
    high = {}
    for insn in fn.insns:
        if insn.kind == "jalr":
            return "indirect call"
        if insn.kind == "syscall" and fn.name not in NONBLOCKING_SYSCALL_WRAPPERS:
            return "kernel call"
        if insn.kind == "jr":
            pass  # a jump table stays inside the function
        if insn.op == "lui" and len(insn.regs) == 1:
            try:
                high[insn.regs[0]] = int(insn.args.split(",")[1].strip(), 16) << 16
            except (IndexError, ValueError):
                pass
            continue
        if insn.op in ml.LOADS and len(insn.regs) == 2 and insn.regs[1] in high and has_back_edge:
            if 0x10000000 <= (high[insn.regs[1]] & 0xFFFFFFFF) < 0x20000000:
                return "hardware polling"
        for r in insn.regs[:1]:
            if r in high and insn.defs & ml.bit(r):
                del high[r]
    return None


def main(argv):
    if len(argv) < 4:
        print(__doc__)
        return 2
    generated, overrides_path, header = argv[1], argv[2], argv[3]
    report = argv[argv.index("--report") + 1] if "--report" in argv else None
    functions = ml.read_corpus(generated)
    overrides = read_overrides(overrides_path)
    why = {}
    for a, fn in functions.items():
        reason = local_verdict(fn, overrides)
        if reason:
            why[a] = reason
    callees = {}
    for a, fn in functions.items():
        targets = set()
        for insn in fn.insns:
            if insn.kind in ("jal", "j") and insn.callee is not None and not (fn.address <= insn.callee < fn.end):
                targets.add(insn.callee)
        callees[a] = targets
    changed = True
    while changed:
        changed = False
        for a, targets in callees.items():
            if a in why:
                continue
            for t in sorted(targets):
                if t not in functions:
                    why[a] = "calls 0x%X (not in the corpus)" % t
                elif t in why:
                    why[a] = "calls %s" % functions[t].name
                else:
                    continue
                changed = True
                break
    pure = sorted(a for a in functions if a not in why)
    lines = []
    for i in range(0, len(pure), 8):
        lines.append("        " + " ".join("0x%06Xu," % a for a in pure[i:i + 8]))
    text = """// Generated by src/xbox/tools/purity_audit.py (B-LOGIC; src/xbox/PUSH-BC-PLAN.md
// section 3.6): the game functions that are pure (no blocking or kernel
// call, no indirect call, no hardware polling, transitively). An idiomatic
// native may call them inside a no-yield region; the lockstep runs only
// pure entries twice. Regenerate after the generated code changes:
//   python src/xbox/tools/purity_audit.py project/generated \\
//       project/game/ts_overrides.cpp project/game/native/ts_pure_functions.h
#pragma once
#include <cstdint>

namespace ts_pure
{
    inline constexpr uint32_t kPure[] = {
%s
    };
    inline constexpr uint32_t kPureCount = sizeof(kPure) / sizeof(kPure[0]);

    constexpr bool isPure(uint32_t address)
    {
        uint32_t lo = 0, hi = kPureCount;
        while (lo < hi)
        {
            const uint32_t mid = (lo + hi) / 2u;
            if (kPure[mid] < address)
                lo = mid + 1u;
            else
                hi = mid;
        }
        return lo < kPureCount && kPure[lo] == address;
    }
}
""" % "\n".join(lines)
    old = open(header).read() if os.path.exists(header) else ""
    if old != text:
        with open(header, "w", newline="\n") as handle:
            handle.write(text)
    if report:
        with open(report, "w") as handle:
            for a in sorted(functions):
                handle.write("0x%06X %-40s %s\n" % (a, functions[a].name, why.get(a, "pure")))
    print("purity_audit: %d functions, %d pure" % (len(functions), len(pure)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

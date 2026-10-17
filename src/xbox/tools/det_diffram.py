#!/usr/bin/env python3
"""Narrow a det-mode guest RAM difference down to 64 KB blocks (B-SCHED, M0.8).

Two runs of a `make TS_DET=1 TS_DET_DUMP=<frame>` build write, at that frame,
512 block hashes of guest RAM, eight to a line:

    [TS:detram] f=<frame> at=<base hex> h0 h1 ... h7

This lists the 64 KB blocks whose hashes differ, merged into address ranges,
and, given the game's main.map (or any `address symbol` listing of the
guest's data), the symbols that start inside each range.

    det_diffram.py a.log b.log [--map main.map]

Exit status: 0 no difference, 1 differences, 2 no [TS:detram] lines.
"""
import argparse
import re
import sys

BLOCK = 64 * 1024
LINE = re.compile(r"\[TS:detram\]\s+f=(\d+)\s+at=([0-9a-fA-F]+)((?:\s+[0-9a-fA-F]{8})+)")


def read(path):
    blocks, frame = {}, None
    with open(path, "r", errors="replace") as f:
        for text in f:
            m = LINE.search(text)
            if not m:
                continue
            frame = int(m.group(1))
            base = int(m.group(2), 16)
            for i, h in enumerate(m.group(3).split()):
                blocks[base + i * BLOCK] = h
    return frame, blocks


def read_map(path):
    syms = []
    with open(path, "r", errors="replace") as f:
        for text in f:
            m = re.match(r"\s*(?:0x)?([0-9a-fA-F]{6,8})\s+(\S+)", text)
            if m:
                addr = int(m.group(1), 16)
                if addr < 0x2000000:
                    syms.append((addr, m.group(2)))
    syms.sort()
    return syms


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("a")
    p.add_argument("b")
    p.add_argument("--map", help="address/symbol listing for naming the ranges")
    args = p.parse_args()
    fa, a = read(args.a)
    fb, b = read(args.b)
    if not a or not b:
        print("no [TS:detram] lines in %s" % (args.a if not a else args.b))
        return 2
    if fa != fb:
        print("warning: dumps at different frames (%s, %s)" % (fa, fb))
    bad = sorted(k for k in set(a) | set(b) if a.get(k) != b.get(k))
    if not bad:
        print("frame %s: guest RAM identical (%d blocks)" % (fa, len(a)))
        return 0
    ranges = []
    for k in bad:
        if ranges and ranges[-1][1] == k:
            ranges[-1][1] = k + BLOCK
        else:
            ranges.append([k, k + BLOCK])
    syms = read_map(args.map) if args.map else []
    print("frame %s: %d of %d blocks differ" % (fa, len(bad), len(a)))
    for lo, hi in ranges:
        inside = [name for addr, name in syms if lo <= addr < hi]
        extra = (" " + ", ".join(inside[:8]) + (" ..." if len(inside) > 8 else "")) if inside else ""
        print("  %08x-%08x (%d KB)%s" % (lo, hi, (hi - lo) // 1024, extra))
    return 1


if __name__ == "__main__":
    sys.exit(main())

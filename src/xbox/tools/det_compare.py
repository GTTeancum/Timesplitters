#!/usr/bin/env python3
"""Compare two deterministic-mode runs (src/xbox/PUSH-BC-PLAN.md M0.8, B-SCHED).

Each log is an xemu/console log of a `make TS_DET=1` build (src/xbox/xbox_det.h)
carrying lines like

    [TS:det] f=12 ram=... iop=... spu=... vram=... vu=... ctx=... sched=... draw=... pcm=... ee=... ring=... all=...
    [TS:detv] v=40 ctx=... sched=... ee=...
    [TS:detc] f=60 hosttime=0 pinnedTime=3 remote=0 catchup=0 pinnedIdle=12 frozen=0 excl=2 dropped=0

The game frames are compared stream by stream up to the shorter run; the
first differing frame and every stream that differs there are printed, then
the count of differing frames per stream. [TS:detv] lines (boot, loading)
are compared the same way by vblank. The counters that must stay 0 in det
mode (hosttime, remote, catchup, dropped) are checked in both logs.

    det_compare.py a.log b.log [--ignore ram,draw] [--from F] [--to F] [--all]

Exit status: 0 identical (over the compared frames, counters clean), 1 a
difference, 2 a log without [TS:det] lines.
"""
import argparse
import re
import sys

STREAMS = ["ram", "iop", "spu", "vram", "vu", "ctx", "sched", "draw", "pcm", "ee", "ring"]
VSTREAMS = ["ctx", "sched", "ee"]
MUST_BE_ZERO = ["hosttime", "remote", "catchup", "dropped"]

LINE = re.compile(r"\[TS:(det|detv|detc)\]((?:\s+\w+=[0-9a-fA-F]+)+)")
FIELD = re.compile(r"(\w+)=([0-9a-fA-F]+)")


def read(path):
    frames, vblanks, counters = {}, {}, []
    with open(path, "r", errors="replace") as f:
        for text in f:
            m = LINE.search(text)
            if not m:
                continue
            fields = dict(FIELD.findall(m.group(2)))
            kind = m.group(1)
            if kind == "det" and "f" in fields:
                frames[int(fields["f"])] = fields
            elif kind == "detv" and "v" in fields:
                vblanks[int(fields["v"])] = fields
            elif kind == "detc":
                counters.append(fields)
    return frames, vblanks, counters


def compare(name, a, b, streams, ignore, lo, hi, show_all):
    keys = sorted(k for k in set(a) & set(b) if lo <= k <= hi)
    diffs = {s: 0 for s in streams}
    first = None
    for k in keys:
        bad = [s for s in streams if s not in ignore and a[k].get(s) != b[k].get(s)]
        for s in bad:
            diffs[s] += 1
        if bad and (first is None or show_all):
            if first is None:
                first = k
            print("%s %d differs: %s" % (name, k, " ".join("%s %s/%s" % (s, a[k].get(s), b[k].get(s)) for s in bad)))
    only = len(set(a) ^ set(b))
    print("%s: %d compared (%s..%s), %d in one run only; differing per stream: %s" % (
        name, len(keys), keys[0] if keys else "-", keys[-1] if keys else "-", only,
        " ".join("%s=%d" % (s, n) for s, n in diffs.items() if s not in ignore)))
    return first


def counters_clean(path, counters):
    ok = True
    for c in counters:
        for key in MUST_BE_ZERO:
            if key in c and int(c[key]) != 0:
                print("%s: [TS:detc] f=%s %s=%s (must be 0)" % (path, c.get("f"), key, c[key]))
                ok = False
    return ok


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("a")
    p.add_argument("b")
    p.add_argument("--ignore", default="", help="comma-separated streams to leave out")
    p.add_argument("--from", dest="lo", type=int, default=0)
    p.add_argument("--to", dest="hi", type=int, default=1 << 62)
    p.add_argument("--all", action="store_true", help="print every differing frame, not just the first")
    args = p.parse_args()
    ignore = set(s for s in args.ignore.split(",") if s)

    fa, va, ca = read(args.a)
    fb, vb, cb = read(args.b)
    if not fa or not fb:
        print("no [TS:det] lines in %s" % (args.a if not fa else args.b))
        return 2
    first = compare("frame", fa, fb, STREAMS, ignore, args.lo, args.hi, args.all)
    vfirst = compare("vblank", va, vb, VSTREAMS, ignore, 0, 1 << 62, args.all) if va and vb else None
    clean = counters_clean(args.a, ca) & counters_clean(args.b, cb)
    if first is None and vfirst is None and clean:
        print("identical")
        return 0
    if first is not None:
        print("first differing frame: %d (narrow a ram difference with TS_DET_DUMP=%d and det_diffram.py)" % (first, first))
    return 1


if __name__ == "__main__":
    sys.exit(main())

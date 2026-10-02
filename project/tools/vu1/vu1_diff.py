"""Compare vu_benchmark output records (VU1State + VU data + GIF packets)."""
import os, struct, sys
FIELDS = [("vf", 0, 512), ("vi", 512, 64), ("acc", 576, 16), ("q", 592, 4), ("p", 596, 4), ("i", 600, 4),
          ("r", 604, 4), ("pc", 608, 4), ("mac", 612, 4), ("clip", 616, 4), ("status", 620, 4), ("cycles", 624, 8),
          ("bools", 632, 8), ("top", 640, 8), ("branch", 648, 16)]
STATE, DATA = 664, 16384
def describe(a, b):
    out = []
    for name, off, size in FIELDS:
        if a[off:off+size] != b[off:off+size]:
            if name in ("vf", "vi"):
                width = 16 if name == "vf" else 4
                regs = [i for i in range(size // width) if a[off+i*width:off+(i+1)*width] != b[off+i*width:off+(i+1)*width]]
                out.append(f"{name}{regs}")
            else:
                out.append(f"{name}:{a[off:off+size].hex()}!={b[off:off+size].hex()}")
    da, db = a[STATE:STATE+DATA], b[STATE:STATE+DATA]
    if da != db:
        q = [i // 16 for i in range(0, DATA, 16) if da[i:i+16] != db[i:i+16]]
        out.append(f"data qwords {q[:8]}{'...' if len(q) > 8 else ''} ({len(q)})")
    if a[STATE+DATA:] != b[STATE+DATA:]:
        pa, pb = a[STATE+DATA:], b[STATE+DATA:]
        first = next((i for i in range(min(len(pa), len(pb))) if pa[i] != pb[i]), min(len(pa), len(pb)))
        out.append(f"packets differ at byte {first} (len {len(pa)} vs {len(pb)})")
    return out
ref, new = sys.argv[1], sys.argv[2]
# "ignore=status": the status register is left out (programs that never read it).
ignore_status = "ignore=status" in sys.argv[3:]
args = [a for a in sys.argv[3:] if not a.startswith("ignore=")]
sys.argv = sys.argv[:3] + args
bad = 0
for name in sorted(os.listdir(ref)):
    a = open(os.path.join(ref, name), "rb").read(); b = open(os.path.join(new, name), "rb").read()
    if ignore_status:
        a = a[:620] + b"\0\0\0\0" + a[624:]; b = b[:620] + b"\0\0\0\0" + b[624:]
    if a != b:
        bad += 1
        if bad <= int(sys.argv[3] if len(sys.argv) > 3 else 12):
            print(name, "; ".join(describe(a, b)))
print("mismatched", bad)

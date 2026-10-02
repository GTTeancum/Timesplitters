# cmp_native.py refdir newdir : compare replay packets of the exact VU (ref) and the
# native pipeline (new) strip by strip. Unclipped strips (same tag) must match:
# positions within 1 unit (1/16 px), ST within 1e-5, colours exact. Clipped strips
# differ by construction (the native clipper emits lists); they are counted.
import os, struct, sys
STATE, DATA = 664, 16384
ref, new = sys.argv[1], sys.argv[2]


def packets(stream):
    """The replay records each kicked packet as [u32 size][bytes]; join them."""
    out, p = b'', 0
    while p + 4 <= len(stream):
        n = struct.unpack_from('<I', stream, p)[0]; p += 4
        out += stream[p:p + n]; p += n
    return out


def tags(pk):
    """Split a packet stream into (tag words, vertex qwords) per GIF tag (packed, NREG=3 strips)."""
    out, p = [], 0
    while p + 16 <= len(pk):
        w = struct.unpack_from('<4I', pk, p)
        nloop, nreg = w[0] & 0x7FFF, (w[1] >> 28) or 16
        flg = (w[1] >> 26) & 3
        p += 16
        if flg == 0 and nreg == 3 and w[2] == 0x412:
            verts = [pk[p + i * 48:p + (i + 1) * 48] for i in range(nloop)]
            p += nloop * 48
            out.append((w, verts))
        else:  # A+D state blocks etc.: skip their payload
            p += nloop * nreg * 16 if flg != 2 else nloop * 16
            out.append((w, None))
    return out


exact = clipped = bad = records = 0
worst = (0, 0.0)
shown = 0
for name in sorted(os.listdir(ref)):
    a = packets(open(os.path.join(ref, name), 'rb').read()[STATE + DATA:])
    b = packets(open(os.path.join(new, name), 'rb').read()[STATE + DATA:])
    if a == b:
        exact += 1
        continue
    records += 1
    ta, tb = tags(a), tags(b)
    # pair strips by order; stop at the first structural divergence
    i = j = 0
    while i < len(ta) and j < len(tb):
        (wa, va), (wb, vb) = ta[i], tb[j]
        if va is None or vb is None:
            i += 1; j += 1; continue
        typ_a, typ_b = (wa[1] >> 15) & 7, (wb[1] >> 15) & 7
        if typ_b == 3 and typ_a != 3:  # native clipped this strip
            clipped += 1
            i += 1; j += 1; continue
        if (wa[0] & 0x7FFF) != (wb[0] & 0x7FFF):
            bad += 1
            if shown < 5: shown += 1; print(name, 'strip count differs', wa[0] & 0x7FFF, wb[0] & 0x7FFF)
            break
        for k, (x, y) in enumerate(zip(va, vb)):
            sa, sb = struct.unpack_from('<4f', x), struct.unpack_from('<4f', y)
            ca, cb = x[16:32], y[16:32]
            pa, pb = struct.unpack_from('<3i', x, 32), struct.unpack_from('<3i', y, 32)
            dst = max(abs(sa[0] - sb[0]), abs(sa[1] - sb[1]), abs(sa[2] - sb[2]))
            dxyz = max(abs(pa[0] - pb[0]), abs(pa[1] - pb[1]), abs(pa[2] - pb[2]))
            worst = (max(worst[0], dxyz), max(worst[1], dst))
            if ca != cb or dxyz > 1 or dst > 1e-5:
                bad += 1
                if shown < 8:
                    shown += 1
                    print(name, 'strip', i, 'vertex', k, 'ref st', [round(v, 5) for v in sa[:3]], 'new', [round(v, 5) for v in sb[:3]],
                          'rgba', ca.hex(), cb.hex(), 'xyz', pa, pb)
        i += 1; j += 1
print(f'records identical={exact} differing={records} clipped strips={clipped} bad vertices={bad} worst xyz={worst[0]} st={worst[1]:.2e}')

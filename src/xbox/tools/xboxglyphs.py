"""Xbox controller button glyphs for the Xbox build.

TimeSplitters draws every button prompt (the front end's footers such as
"triangle Back  cross Select", the sign-on keyboard, the message boxes) with
eight small palettised textures in MISC.PAK, the map maker's button icons:

  textures/misc/mm_button01.qpm      24x24  circle    -> B
  textures/misc/mm_circle_24x24.qpm  24x24  circle    -> B (a second copy)
  textures/misc/mm_button02.qpm      24x24  cross     -> A
  textures/misc/mm_button03.qpm      24x24  triangle  -> Y
  textures/misc/mm_button04.qpm      24x24  square    -> X
  textures/misc/mm_button05.qpm      24x24  SELECT    -> BACK
  textures/misc/mm_cursor13.qpm      32x32  L1        -> White
  textures/misc/mm_cursor14.qpm      32x32  L2        -> left trigger

(The mapping is the Xbox controller layer's: src/xbox/xbox_raylib.cpp and
ps2_pad.cpp. There are no R1, R2, START, D-pad or stick icons in the game.)
The Xbox build replaces them with the Duke controller's buttons in the PS2
disc image it carries (build/xbox/iso/ps2disc.iso), which is where the game
reads MISC.PAK from, sector by sector. Each replacement has the original's
size, format and file length, so it is written over the original in place
and nothing else on the disc moves. The PC build reads the user's disc and
is not touched.

The art is the user's atlas (src/xbox/assets/buttons/xbox_duke_buttons.png):

  row 1  a b x y white black start
  row 2  left_stick left_stick_move left_stick_click
         right_stick right_stick_move right_stick_click back
  row 3  dpad dpad_up dpad_down dpad_left dpad_right lt rt

usage:
  xboxglyphs.py crop      cut the atlas into one PNG per glyph
                          (src/xbox/assets/buttons/<name>.png)
  xboxglyphs.py build     draw the replacement textures from the crops
                          (src/xbox/assets/buttons/qpm/*.qpm, and a preview
                          sheet with --preview FILE)
  xboxglyphs.py patch FILE...
                          write the replacements into FILE in place: a
                          MISC.PAK, or a PS2 disc image holding /PAK/MISC.PAK

crop and build need numpy and Pillow (crop also SciPy) and run only when
the art changes; their output is committed. patch needs only the standard
library (any Python 3) and runs in the Xbox build (src/xbox/mk/glyphs.mk)
whenever the disc image is copied afresh or the textures change.

Texture format (.qpm "Q8", as xtpbuild.py reads it): "Q8\\n<w> <h>\\n255 v
256 \\n", a 256-entry palette of R, G, B, A bytes in plain order (the game
applies the GS CLUT swizzle when it uploads it), then w*h palette indices.
Alpha is GS scale; the originals use 0x7F for opaque, and so do these.
Entries 0 and 127 are transparent black (CLEAR_SLOTS below).
"""
import argparse
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ASSETS = os.path.normpath(os.path.join(HERE, "..", "assets", "buttons"))
ATLAS = os.path.join(ASSETS, "xbox_duke_buttons.png")
QPM_DIR = os.path.join(ASSETS, "qpm")

# The atlas's glyphs, row by row, left to right.
ATLAS_ROWS = [
    ["a", "b", "x", "y", "white", "black", "start"],
    ["left_stick", "left_stick_move", "left_stick_click",
     "right_stick", "right_stick_move", "right_stick_click", "back"],
    ["dpad", "dpad_up", "dpad_down", "dpad_left", "dpad_right", "lt", "rt"],
]

# MISC.PAK entry -> (Xbox glyph, texture size, the box the PS2 art fills:
# x, y, w, h). The glyph is fitted into the box, aspect kept, centred.
REPLACEMENTS = {
    "textures/misc/mm_button01.qpm": ("b", (24, 24), (0, 0, 24, 24)),
    "textures/misc/mm_circle_24x24.qpm": ("b", (24, 24), (0, 0, 24, 24)),
    "textures/misc/mm_button02.qpm": ("a", (24, 24), (0, 0, 24, 24)),
    "textures/misc/mm_button03.qpm": ("y", (24, 24), (0, 0, 24, 24)),
    "textures/misc/mm_button04.qpm": ("x", (24, 24), (0, 0, 24, 24)),
    "textures/misc/mm_button05.qpm": ("back", (24, 24), (0, 0, 24, 24)),
    "textures/misc/mm_cursor13.qpm": ("white", (32, 32), (0, 0, 31, 17)),
    "textures/misc/mm_cursor14.qpm": ("lt", (32, 32), (0, 0, 31, 17)),
}

SECTOR = 2048
OPAQUE = 0x7F  # GS alpha the originals use for opaque texels
# Palette entries kept transparent black. 0 is the originals' clear texel.
# 127: the game puts a 24x24 texture in a 32x32 GS texture, and the eight
# columns to its right hold index 127 (the PC port's texture dump shows it
# for every button); the glyph's draw filters its last column against
# them, which the originals' dark rim hid. A clear entry there keeps the
# edge clean whatever the glyph's own edge is.
CLEAR_SLOTS = (0, 127)


def qpm_name(entry):
    return os.path.basename(entry)


def qpm_header(w, h):
    return b"Q8\n%d %d\n255 v 256 \n" % (w, h)


# ------------------------------------------------------------------ crop

def crop(args):
    import numpy as np
    from PIL import Image
    from scipy import ndimage

    rgba = np.array(Image.open(args.atlas).convert("RGBA"))
    labels, count = ndimage.label(rgba[..., 3] > 0, structure=np.ones((3, 3)))
    boxes = ndimage.find_objects(labels)
    found = [(i + 1, b) for i, b in enumerate(boxes) if (labels[b] == i + 1).sum() >= 64]
    expected = sum(len(r) for r in ATLAS_ROWS)
    if len(found) != expected:
        sys.exit("%s: %d glyphs found, %d expected" % (args.atlas, len(found), expected))
    # Rows, top to bottom: a glyph whose centre is below the previous one's
    # bottom edge starts the next row.
    found.sort(key=lambda f: (f[1][0].start + f[1][0].stop) / 2)
    rows, current = [], [found[0]]
    for f in found[1:]:
        prev = current[-1][1][0]
        if (f[1][0].start + f[1][0].stop) / 2 > prev.stop:
            rows.append(current)
            current = [f]
        else:
            current.append(f)
    rows.append(current)
    if [len(r) for r in rows] != [len(r) for r in ATLAS_ROWS]:
        sys.exit("%s: rows of %s glyphs, %s expected" % (args.atlas, [len(r) for r in rows], [len(r) for r in ATLAS_ROWS]))
    os.makedirs(args.out, exist_ok=True)
    margin = 2
    for row, names in zip(rows, ATLAS_ROWS):
        row.sort(key=lambda f: f[1][1].start)
        for (label, (ys, xs)), name in zip(row, names):
            y0, y1 = max(ys.start - margin, 0), min(ys.stop + margin, rgba.shape[0])
            x0, x1 = max(xs.start - margin, 0), min(xs.stop + margin, rgba.shape[1])
            piece = rgba[y0:y1, x0:x1].copy()
            # This glyph only (a neighbour's shadow never reaches in, but be
            # sure), and fully clear texels clear to black.
            mine = labels[y0:y1, x0:x1] == label
            piece[~mine] = 0
            piece[piece[..., 3] == 0] = 0
            path = os.path.join(args.out, name + ".png")
            Image.fromarray(piece, "RGBA").save(path, optimize=True)
            print("[glyphs] %-18s %4dx%-4d %s" % (name, x1 - x0, y1 - y0, path))


# ----------------------------------------------------------------- build

def fit(glyph, box):
    """The glyph (RGBA uint8) reduced into the box (w, h), aspect kept,
    centred, filtered on premultiplied colour so clear texels add nothing.
    Returns (h, w, 4) uint8."""
    import numpy as np
    from PIL import Image

    bw, bh = box
    ys, xs = np.nonzero(glyph[..., 3])  # the crop's own margin left out
    glyph = np.ascontiguousarray(glyph[ys.min():ys.max() + 1, xs.min():xs.max() + 1])
    gh, gw = glyph.shape[:2]
    scale = min(bw / gw, bh / gh)
    # Size and offset in the box, sub-texel: the resampler places the glyph
    # at its exact centre instead of rounding the offset to a whole texel.
    w, h = gw * scale, gh * scale
    ox, oy = (bw - w) / 2, (bh - h) / 2
    premult = Image.fromarray(glyph, "RGBA").convert("RGBa")
    # Destination texel (x, y) samples source ((x - ox) / scale, (y - oy) / scale).
    inv = 1.0 / scale
    # A reduction this large in two steps: drawn at 8x the box (bicubic,
    # near the art's own scale), then box-filtered down to the box.
    ss = 8
    big = premult.transform((bw * ss, bh * ss), Image.AFFINE,
                            (inv / ss, 0, -ox * inv, 0, inv / ss, -oy * inv),
                            resample=Image.BICUBIC, fillcolor=(0, 0, 0, 0))
    small = big.reduce(ss)
    return np.array(small.convert("RGBA"), np.uint8)


def quantise(rgba, colours):
    """At most `colours` colours for the visible texels of an RGBA image:
    (palette (n, 4), indices (h, w) into it, -1 for clear texels). Exact
    when the image has few enough colours; else a weighted k-means (alpha
    weighs a texel's colour: half-clear edge texels matter less than solid
    ones), started from the farthest points, so the same art always gives
    the same file."""
    import numpy as np

    flat = rgba.reshape(-1, 4).astype(np.int64)
    clear = flat[:, 3] == 0
    visible = flat[~clear]
    indices = np.full(len(flat), -1, np.int64)
    unique, inverse = np.unique(visible, axis=0, return_inverse=True)
    if len(unique) <= colours:
        indices[~clear] = inverse.reshape(-1)
        return unique.astype(np.uint8), indices.reshape(rgba.shape[:2])
    points = visible.astype(np.float64)
    weight = 0.25 + points[:, 3] / 255.0
    centres = [points[np.argmax(points[:, 3])]]
    dist = ((points - centres[0]) ** 2).sum(1)
    for _ in range(1, colours):
        centres.append(points[np.argmax(dist * weight)])
        dist = np.minimum(dist, ((points - centres[-1]) ** 2).sum(1))
    centres = np.array(centres)
    for _ in range(30):
        nearest = ((points[:, None, :] - centres[None, :, :]) ** 2).sum(-1).argmin(1)
        for c in range(colours):
            m = nearest == c
            if m.any():
                centres[c] = (points[m] * weight[m, None]).sum(0) / weight[m].sum()
    centres = np.clip(np.rint(centres), 0, 255)
    centres[:, 3] = np.maximum(centres[:, 3], 1)  # a visible texel stays visible
    indices[~clear] = ((points[:, None, :] - centres[None, :, :]) ** 2).sum(-1).argmin(1)
    return centres.astype(np.uint8), indices.reshape(rgba.shape[:2])


def build(args):
    import numpy as np
    from PIL import Image

    os.makedirs(QPM_DIR, exist_ok=True)
    previews = []
    for entry, (glyph, (tw, th), (bx, by, bw, bh)) in sorted(REPLACEMENTS.items()):
        art = np.array(Image.open(os.path.join(ASSETS, glyph + ".png")).convert("RGBA"))
        texture = np.zeros((th, tw, 4), np.uint8)
        texture[by:by + bh, bx:bx + bw] = fit(art, (bw, bh))
        # Alpha to GS scale (opaque 0x7F as in the originals); a texel too
        # faint to show (below 1/128) is clear.
        gs_alpha = np.rint(texture[..., 3].astype(np.float64) * OPAQUE / 255.0).astype(np.uint8)
        texture[..., 3] = gs_alpha
        texture[gs_alpha == 0] = 0
        # Entries CLEAR_SLOTS are transparent black and hold no colour of
        # the glyph; the visible colours fill the other slots in order.
        slots = [i for i in range(256) if i not in CLEAR_SLOTS]
        palette, found = quantise(texture, len(slots))
        full = np.zeros((256, 4), np.uint8)
        full[slots[:len(palette)]] = palette
        indices = np.where(found < 0, CLEAR_SLOTS[0], np.array(slots)[np.maximum(found, 0)])
        data = qpm_header(tw, th) + full.tobytes() + indices.astype(np.uint8).tobytes()
        path = os.path.join(QPM_DIR, qpm_name(entry))
        with open(path, "wb") as f:
            f.write(data)
        shown = full[indices]
        error = np.abs(shown.astype(int) - texture.astype(int)).max()
        print("[glyphs] %-22s %-6s %dx%d, %3d colours, largest palette error %d -> %s" % (
            qpm_name(entry), glyph, tw, th, len(palette), error, path))
        previews.append((qpm_name(entry), shown))
    if args.preview:
        scale = 8
        cell = 32 * scale + 16
        sheet = Image.new("RGBA", (cell * len(previews), cell), (40, 44, 60, 255))
        for i, (name, shown) in enumerate(previews):
            show = shown.copy()
            show[..., 3] = np.minimum(show[..., 3].astype(int) * 2, 255)
            im = Image.fromarray(show, "RGBA")
            im = im.resize((im.size[0] * scale, im.size[1] * scale), Image.NEAREST)
            sheet.alpha_composite(im, (i * cell + 8, 8))
        sheet.save(args.preview)
        print("[glyphs] preview: %s" % args.preview)


# ----------------------------------------------------------------- patch

def find_in_iso(f):
    """(offset, size) of /PAK/MISC.PAK in an ISO 9660 image, or None."""
    f.seek(16 * SECTOR)
    pvd = f.read(SECTOR)
    if len(pvd) < SECTOR or pvd[1:6] != b"CD001":
        return None

    def entries(lba, size):
        f.seek(lba * SECTOR)
        data = f.read(size)
        pos = 0
        while pos < len(data):
            length = data[pos]
            if length == 0:  # records do not cross sectors: next sector
                pos = (pos // SECTOR + 1) * SECTOR
                continue
            record = data[pos:pos + length]
            name = record[33:33 + record[32]].split(b";")[0].upper()
            yield name, struct.unpack_from("<I", record, 2)[0], struct.unpack_from("<I", record, 10)[0], record[25] & 2
            pos += length

    root = pvd[156:156 + 34]
    lba, size = struct.unpack_from("<I", root, 2)[0], struct.unpack_from("<I", root, 10)[0]
    for name, l, s, directory in entries(lba, size):
        if name == b"PAK" and directory:
            for inner, il, isz, idir in entries(l, s):
                if inner == b"MISC.PAK" and not idir:
                    return il * SECTOR, isz
    return None


def patch_file(path):
    replacements = {}
    for entry in REPLACEMENTS:
        with open(os.path.join(QPM_DIR, qpm_name(entry)), "rb") as f:
            replacements[entry] = f.read()
    # The file is written in place: it must be the build's own copy, never
    # a link into the game data it was copied from.
    if os.path.islink(path) or os.path.normcase(os.path.realpath(path)) != os.path.normcase(os.path.abspath(path)):
        sys.exit("[glyphs] %s: reached through a link; refusing to write the game data in place" % path)
    with open(path, "r+b") as f:
        head = f.read(4)
        if head == b"P4CK":
            base, size = 0, os.path.getsize(path)
            where = "MISC.PAK"
        else:
            found = find_in_iso(f)
            if not found:
                sys.exit("[glyphs] %s: neither a P4CK archive nor a disc image with /PAK/MISC.PAK" % path)
            base, size = found
            where = "/PAK/MISC.PAK"
        f.seek(base)
        magic, dir_offset, dir_size = struct.unpack("<4sII", f.read(12))
        if magic != b"P4CK" or dir_offset + dir_size > size:
            sys.exit("[glyphs] %s: %s is not a P4CK archive" % (path, where))
        f.seek(base + dir_offset)
        directory = f.read(dir_size)
        todo = dict(replacements)
        changed = 0
        for i in range(dir_size // 60):
            record = directory[i * 60:i * 60 + 60]
            name = record[:48].split(b"\0")[0].decode("ascii", "replace")
            if name not in todo:
                continue
            offset, length = struct.unpack_from("<II", record, 48)
            data = todo.pop(name)
            f.seek(base + offset)
            original = f.read(length)
            if length != len(data) or original.split(b"\n", 3)[:3] != data.split(b"\n", 3)[:3]:
                sys.exit("[glyphs] %s: %s is not the texture expected (%d bytes, %r); not patched" % (
                    path, name, length, original[:24]))
            if original != data:
                f.seek(base + offset)
                f.write(data)
                changed += 1
        if todo:
            sys.exit("[glyphs] %s: %s not found in %s" % (path, ", ".join(sorted(todo)), where))
    print("[glyphs] %s: %d of %d button textures replaced (%d already were)" % (
        path, changed, len(replacements), len(replacements) - changed))


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    sub = parser.add_subparsers(dest="command", required=True)
    p = sub.add_parser("crop", help="cut the atlas into one PNG per glyph")
    p.add_argument("--atlas", default=ATLAS)
    p.add_argument("--out", default=ASSETS)
    p = sub.add_parser("build", help="draw the replacement textures from the crops")
    p.add_argument("--preview", help="also write a preview sheet (PNG) here")
    p = sub.add_parser("patch", help="write the replacements into MISC.PAK or a disc image in place")
    p.add_argument("files", nargs="+")
    args = parser.parse_args()
    if args.command == "crop":
        crop(args)
    elif args.command == "build":
        build(args)
    else:
        for path in args.files:
            patch_file(path)


if __name__ == "__main__":
    main()

"""The PC's UI fonts: the game's five bitmap fonts redrawn from Jost.

The game draws its text from five 8-bit font atlases in MISC.PAK
(textures/misc/<name>.qpm), one textured sprite per character, each from its
own rectangle of the atlas (the glyph tables in the ELF, 10 bytes a
character from ' ': x0, y0, x1, y1, a y offset). Upscaled, those small
bitmaps look wavy. This tool redraws every printable ASCII character of each
font from Jost (SIL Open Font License; tools/fonts/Jost-wght.ttf, a variable
font with weights 100-900) at 4x across and 8x down (the atlases are drawn
stretched to twice their height in the 224-line front end), matched to that
font on its own:

- each character is fitted to the box the original glyph's ink fills in its
  rectangle, so its size, width and place (and so the game's spacing and
  layout) stay as they are;
- each font gets the Jost weight whose ink coverage over a set of sample
  characters is closest to the original's.

Output: project/game/pc_fonts/<key>_<w>x<h>.png, one per font, where key is
gs_texture_hash::hash (runtime/gs/gs_texture_hash.h) of the font's own atlas
area (w x h texels, top left of its texture; the rest of the texture holds
whatever else is in video memory, so the whole texture's key is not stable).
Only Jost's drawing is in the PNG: red 255 marks the texels it replaces
(white, its alpha the glyph's), red 0 those that stay the game's own (other
characters, the accent marks). The program builds the replacement texture
from the game's texture and this at run time (gs_texture_replacement::
addFontImage).

Usage (from the repository root, with the disc's files in project/game-data):
    python tools/pc_font_atlases.py [--preview DIR]
"""

import argparse
import os
import struct

from PIL import Image, ImageFont

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SX, SY = 4, 8
ELF_BASE = 0x1FF000  # vaddr = file offset + this

# name, glyph table, characters in it, characters to keep the game's own
FONTS = [
    ("font09", 0x31B410, 0x60, ""),
    ("font07", 0x31B7D0, 0x60, ""),
    ("newsfont", 0x31BB90, 0x63, ""),
    ("squarefont", 0x31BF70, 0x60, "JKLMNOPQRSTUVWXYZ"),  # those slots hold the accent marks
    ("itckabelfont", 0x31C330, 0x64, ""),
]
SAMPLE = "AEHMNORSaegnosx"


def pak_entries(pak):
    offset, size = struct.unpack("<II", pak[4:12])
    entries = {}
    for i in range(size // 60):
        rec = pak[offset + 60 * i : offset + 60 * i + 60]
        name = rec[:48].split(b"\0")[0].decode("latin1")
        entries[name] = struct.unpack("<II", rec[48:56])
    return entries


def load_atlas(pak, entries, name):
    o, s = entries["textures/misc/%s.qpm" % name]
    data = pak[o : o + s]
    cuts = [i for i, c in enumerate(data[:200]) if c == 10][:3]
    w, h = map(int, data[cuts[0] + 1 : cuts[1]].split())
    body = data[cuts[2] + 1 :]
    palette = struct.unpack("<256I", body[:1024])
    texels = [palette[i] for i in body[1024 : 1024 + w * h]]
    return w, h, texels


def texture_key(texels, w, h):
    """gs_texture_hash::hash (FNV-1a over texel pairs, seeded with the size)."""
    mask = (1 << 64) - 1
    k = (0xCBF29CE484222325 ^ (w << 32 | h)) & mask
    i, n = 0, w * h
    while i + 1 < n:
        k = ((k ^ (texels[i] | texels[i + 1] << 32)) * 0x100000001B3) & mask
        i += 2
    if i < n:
        k = ((k ^ texels[i]) * 0x100000001B3) & mask
    return k


def glyph_rects(elf, table, count):
    rects = {}
    for k in range(count):
        x0, y0, x1, y1, _yoff, _pad = struct.unpack("<4HbB", elf[table - ELF_BASE + 10 * k : table - ELF_BASE + 10 * k + 10])
        rects[32 + k] = (x0, y0, x1 + 1 - x0, y1 + 1 - y0)
    return rects


def ink_box(alpha, w, rect, threshold=0.5):
    """The original glyph's ink in its rectangle: (x0, y0, x1, y1) exclusive, or None."""
    x, y, gw, gh = rect
    xs, ys = [], []
    for j in range(gh):
        for i in range(gw):
            if alpha[(y + j) * w + x + i] >= threshold:
                xs.append(x + i)
                ys.append(y + j)
    if not xs:
        return None
    return min(xs), min(ys), max(xs) + 1, max(ys) + 1


class Jost:
    def __init__(self, path):
        self.path = path
        self.cache = {}

    def mask(self, char, weight):
        """The character's ink at a large size, cropped to it (an L image)."""
        key = (char, weight)
        if key not in self.cache:
            font = ImageFont.truetype(self.path, 400)
            font.set_variation_by_axes([weight])
            image = Image.new("L", (800, 800), 0)
            from PIL import ImageDraw

            ImageDraw.Draw(image).text((100, 100), char, font=font, fill=255)
            box = image.getbbox()
            self.cache[key] = image.crop(box) if box else None
        return self.cache[key]


def coverage_error(jost, weight, chars, alpha, w, rects):
    error, n = 0.0, 0
    for c in chars:
        box = ink_box(alpha, w, rects[ord(c)])
        mask = jost.mask(c, weight)
        if not box or mask is None:
            continue
        bw, bh = box[2] - box[0], box[3] - box[1]
        small = mask.resize((bw * 4, bh * 4), Image.LANCZOS).resize((bw, bh), Image.BOX)
        ours = sum(small.getdata()) / 255.0 / (bw * bh)
        theirs = sum(alpha[(yy) * w + xx] for yy in range(box[1], box[3]) for xx in range(box[0], box[2])) / (bw * bh)
        error += abs(ours - theirs)
        n += 1
    return error / max(n, 1)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    parser.add_argument("--game-data", default=os.path.join(ROOT, "project", "game-data"))
    parser.add_argument("--font", default=os.path.join(ROOT, "tools", "fonts", "Jost-wght.ttf"))
    parser.add_argument("--out", default=os.path.join(ROOT, "project", "game", "pc_fonts"))
    parser.add_argument("--preview", help="also write <name>_compare.png (the game's glyphs above, Jost's below)")
    args = parser.parse_args()

    pak = open(os.path.join(args.game_data, "PAK", "MISC.PAK"), "rb").read()
    elf = open(os.path.join(args.game_data, "SLUS_200.90"), "rb").read()
    entries = pak_entries(pak)
    jost = Jost(args.font)
    os.makedirs(args.out, exist_ok=True)
    for old in os.listdir(args.out):
        if old.endswith(".png"):
            os.remove(os.path.join(args.out, old))

    for name, table, count, keep in FONTS:
        w, h, texels = load_atlas(pak, entries, name)
        alpha = [min((t >> 24) / 128.0, 1.0) for t in texels]
        rects = glyph_rects(elf, table, count)
        chars = [chr(c) for c in range(33, 127) if c in rects and chr(c) not in keep]
        sample = [c for c in SAMPLE if c in chars]
        weight = min(range(200, 901, 25), key=lambda wt: coverage_error(jost, wt, sample, alpha, w, rects))

        out = Image.new("RGBA", (w * SX, h * SY), (0, 0, 0, 0))
        for c in chars:
            x, y, gw, gh = rects[ord(c)]
            box = ink_box(alpha, w, rects[ord(c)])
            mask = jost.mask(c, weight)
            cell = Image.new("RGBA", (gw * SX, gh * SY), (255, 255, 255, 0))  # replaced, empty
            if box and mask is not None:
                bw, bh = (box[2] - box[0]) * SX, (box[3] - box[1]) * SY
                glyph = mask.resize((bw, bh), Image.LANCZOS)
                white = Image.new("RGBA", (bw, bh), (255, 255, 255, 255))
                white.putalpha(glyph)
                cell.paste(white, ((box[0] - x) * SX, (box[1] - y) * SY))
            out.paste(cell, (x * SX, y * SY))
        key = texture_key(texels, w, h)
        path = os.path.join(args.out, "%016x_%dx%d.png" % (key, w, h))
        out.save(path, optimize=True)
        print("%-12s %dx%d key %016x weight %d -> %s" % (name, w, h, key, weight, os.path.relpath(path, ROOT)))

        if args.preview:
            os.makedirs(args.preview, exist_ok=True)
            game = Image.new("RGBA", (w, h))
            game.putdata([(255, 255, 255, int(a * 255)) for a in alpha])
            game = game.resize((w * SX, h * SY), Image.NEAREST)
            sheet = Image.new("RGB", (w * SX, h * SY * 2 + 8), (30, 30, 70))
            sheet.paste(game, (0, 0), game)
            sheet.paste(out, (0, h * SY + 8), out)
            sheet.save(os.path.join(args.preview, "%s_compare.png" % name))


if __name__ == "__main__":
    main()

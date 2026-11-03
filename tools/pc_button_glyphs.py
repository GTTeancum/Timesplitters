"""Button glyphs for the PC build: Xbox controller and keyboard versions.

The game draws every button prompt with eight small textures in MISC.PAK
(src/xbox/tools/xboxglyphs.py lists them). The PC build draws one of two
sets of replacements over them, picked by the device the player used last
(gs_texture_replacement: buttonImage; ps2_pad.cpp: ps2PadButtonSet):

  PS2 button  texture(s)                     Xbox controller  keyboard
  Cross       mm_button02                    A                Enter
  Circle      mm_button01, mm_circle_24x24   B                C
  Square      mm_button04                    X                Z
  Triangle    mm_button03                    Y                Esc
  Select      mm_button05                    BACK             Tab
  L1          mm_cursor13                    LB               Q
  L2          mm_cursor14                    LT               Shift

(the mapping of ps2_pad.cpp: an XInput controller's A, B, X, Y, Back,
left bumper and left trigger; the keyboard's Enter, C, Z, Esc, Tab, Q,
Left Shift). The renderer names a texture by gs_texture_hash::hash of its
decoded texels; the hashes below are those of the eight textures as the
game uploads them (24x24 buttons sit in a 32x32 texture whose spare
columns hold palette index 127 and spare rows index 0). `--check` recomputes
them from a MISC.PAK.

The replacements are drawn at four times the texture's size, the glyph in
the box the PS2 art fills, and written to project/game/pc_glyphs/<set>/
<hash>.png; project/game/CMakeLists.txt builds them into the program. The
Xbox art is the user's Duke atlas crops (src/xbox/assets/buttons); the
bumper and the keycaps are drawn here.

usage:
  pc_button_glyphs.py build              write the PNGs (needs Pillow, numpy)
  pc_button_glyphs.py --check MISC.PAK   verify the hashes against the game's textures
"""
import argparse
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.normpath(os.path.join(HERE, ".."))
ATLAS_CROPS = os.path.join(ROOT, "src", "xbox", "assets", "buttons")
OUT = os.path.join(ROOT, "project", "game", "pc_glyphs")
SCALE = 4
FONT = r"C:\Windows\Fonts\arialbd.ttf"

# texture -> (hash, texture size, box the PS2 art fills: x, y, w, h,
#             Xbox glyph: atlas crop name or a drawn one, keyboard label)
GLYPHS = {
    "mm_button02": (0x894A1129AD18C520, 32, (0, 0, 24, 24), "a", "Enter"),
    "mm_button01": (0x40A5963645BD34F2, 32, (0, 0, 24, 24), "b", "C"),  # and mm_circle_24x24
    "mm_button04": (0xC4D7E929A4AEBB6C, 32, (0, 0, 24, 24), "x", "Z"),
    "mm_button03": (0x905BEEBD195FF6D0, 32, (0, 0, 24, 24), "y", "Esc"),
    "mm_button05": (0x99179AB41F0AABCF, 32, (0, 0, 24, 24), "back", "Tab"),
    "mm_cursor13": (0xD95B517DD8DDEE93, 32, (0, 0, 31, 17), "@LB", "Q"),
    "mm_cursor14": (0xE62DFDE3D0332176, 32, (0, 0, 31, 17), "lt", "Shift"),
}


def font(size):
    from PIL import ImageFont
    return ImageFont.truetype(FONT, size)


def fit_into(canvas, art, box):
    """Pastes RGBA art into box (x, y, w, h) of canvas, aspect kept, centred."""
    from PIL import Image
    bbox = art.getbbox()
    if bbox:
        art = art.crop(bbox)
    x, y, w, h = box
    scale = min(w / art.width, h / art.height)
    size = (max(1, round(art.width * scale)), max(1, round(art.height * scale)))
    art = art.resize(size, Image.LANCZOS)
    canvas.alpha_composite(art, (x + (w - size[0]) // 2, y + (h - size[1]) // 2))


def drawn(label, wide, keycap):
    """A keycap (light key, dark label) or the Xbox bumper (dark pill, white
    label), drawn at 8x the final box and reduced by the caller."""
    from PIL import Image, ImageDraw
    w, h = (520, 280) if wide else (400, 400)
    im = Image.new("RGBA", (w, h), (0, 0, 0, 0))
    d = ImageDraw.Draw(im)
    pad = 12
    if keycap:
        d.rounded_rectangle((pad, pad, w - pad, h - pad), radius=70, fill=(70, 70, 76, 255))
        d.rounded_rectangle((pad + 16, pad + 10, w - pad - 16, h - pad - 34), radius=56, fill=(232, 232, 236, 255))
        colour = (24, 24, 28, 255)
    else:
        d.rounded_rectangle((pad, pad, w - pad, h - pad), radius=(h - 2 * pad) // 2, fill=(40, 40, 44, 255),
                            outline=(200, 200, 205, 255), width=14)
        colour = (245, 245, 245, 255)
    # The label as large as the key face allows (one letter at most 230).
    size = 230
    while True:
        f = font(size)
        box = d.textbbox((0, 0), label, font=f)
        if box[2] - box[0] <= w - 2 * pad - 70 or size <= 40:
            break
        size -= 6
    tw, th = box[2] - box[0], box[3] - box[1]
    cy = (h - (34 if keycap else 0)) / 2
    d.text(((w - tw) / 2 - box[0], cy - th / 2 - box[1]), label, font=f, fill=colour)
    return im


def build(_args):
    from PIL import Image
    for name, (key, tex, box, xbox, keyboard) in GLYPHS.items():
        wide = box[2] > box[3]
        scaled = tuple(v * SCALE for v in box)
        for folder, art in (
            ("xbox", drawn(xbox[1:], True, False) if xbox.startswith("@")
             else Image.open(os.path.join(ATLAS_CROPS, xbox + ".png")).convert("RGBA")),
            ("keyboard", drawn(keyboard, wide, True)),
        ):
            canvas = Image.new("RGBA", (tex * SCALE, tex * SCALE), (0, 0, 0, 0))
            fit_into(canvas, art, scaled)
            os.makedirs(os.path.join(OUT, folder), exist_ok=True)
            path = os.path.join(OUT, folder, "%016x.png" % key)
            canvas.save(path, optimize=True)
            print(path, name)


def fnv(texels, w, h):
    import numpy as np
    state = 0xCBF29CE484222325 ^ ((w << 32) | h)
    flat = texels.reshape(-1).astype("<u4")
    for pair in flat[:len(flat) // 2 * 2].view("<u8").tolist():
        state = ((state ^ pair) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    if len(flat) % 2:
        state = ((state ^ int(flat[-1])) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return state


def check(pak_path):
    import numpy as np
    pak = open(pak_path, "rb").read()
    magic, dir_offset, dir_size = struct.unpack_from("<4sII", pak, 0)
    if magic != b"P4CK":
        sys.exit("%s: not a P4CK archive" % pak_path)
    files = {}
    for i in range(dir_size // 60):
        entry = pak[dir_offset + i * 60:dir_offset + i * 60 + 60]
        files[entry[:48].split(b"\0")[0].decode("ascii", "replace")] = struct.unpack_from("<II", entry, 48)
    bad = 0
    for name, (key, tex, _box, _x, _k) in list(GLYPHS.items()) + [("mm_circle_24x24", GLYPHS["mm_button01"])]:
        offset, size = files["textures/misc/%s.qpm" % name]
        parts = pak[offset:offset + size].split(b"\n", 3)
        w, h = map(int, parts[1].split())
        palette = np.frombuffer(parts[3][:1024], "<u4")
        indices = np.frombuffer(parts[3][1024:1024 + w * h], np.uint8).reshape(h, w)
        full = np.zeros((tex, tex), np.uint8)
        full[:h, w:] = 127
        full[:h, :w] = indices
        got = fnv(palette[full], tex, tex)
        print("%016x %s %s" % (got, name, "ok" if got == key else "DIFFERS (expected %016x)" % key))
        bad += got != key
    sys.exit(1 if bad else 0)


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("command", nargs="?", default="build", choices=["build"])
    parser.add_argument("--check", metavar="MISC.PAK")
    args = parser.parse_args()
    if args.check:
        check(args.check)
    else:
        build(args)


if __name__ == "__main__":
    main()

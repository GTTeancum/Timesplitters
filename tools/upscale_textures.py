"""Upscale dumped TimeSplitters textures into replacement PNGs.

Runs each PNG through an AI upscaler (upscayl-bin, the Real-ESRGAN engine
that ships with Upscayl) and writes the result, same file name, to the
output folder, where the game picks it up as a replacement.

Methods (--method):
  ai      AI upscaler for colour and transparency (icons, logos, artwork)
  smooth  4x Lanczos resize, for art meant to be soft (glows, flares, clouds,
          motion blur), which the AI would sharpen or invent detail in

With the ai method, separate shapes that are faint in the original (no
pixel reaches 75% of the texture's strongest opacity, like some thin font glyphs) take the smooth
result instead: the AI invents detail in them.

Transparency is handled separately: colour under fully transparent pixels
is first filled from the nearest visible pixels so edges do not pick up
dark or stray colours, then colour and alpha are upscaled as two images and
recombined.

Usage:
    python tools/upscale_textures.py textures/dump/2d textures/replacements/ui
    python tools/upscale_textures.py IN OUT --method smooth --files a.png b.png
"""

import argparse
import os
import shutil
import subprocess
import sys
import tempfile

import numpy as np
from PIL import Image

DEFAULT_BIN = r"C:\Program Files\Upscayl\resources\bin\upscayl-bin.exe"
DEFAULT_MODELS = r"C:\Program Files\Upscayl\resources\models"


def bleed(rgba):
    """Fill RGB under transparent pixels from visible neighbours."""
    rgb = rgba[..., :3].astype(np.float32)
    known = rgba[..., 3] > 0
    if known.all() or not known.any():
        return rgba[..., :3]
    for _ in range(max(rgba.shape[:2])):
        if known.all():
            break
        total = np.zeros_like(rgb)
        count = np.zeros(known.shape, np.float32)
        for dy, dx in ((-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)):
            shifted_known = np.roll(known, (dy, dx), (0, 1))
            shifted_rgb = np.roll(rgb, (dy, dx), (0, 1))
            total += shifted_rgb * shifted_known[..., None]
            count += shifted_known
        grow = (~known) & (count > 0)
        rgb[grow] = total[grow] / count[grow][:, None]
        known = known | grow
    return np.clip(rgb + 0.5, 0, 255).astype(np.uint8)


def smooth_upscale(rgba):
    h, w = rgba.shape[:2]
    colour = Image.fromarray(bleed(rgba)).resize((w * 4, h * 4), Image.LANCZOS)
    colour.putalpha(Image.fromarray(rgba[..., 3]).resize((w * 4, h * 4), Image.LANCZOS))
    return colour


def faint_shapes(alpha, limit=192):
    """Boxes (x0, y0, x1, y1) of 8-connected visible shapes whose opacity never reaches limit."""
    visible = alpha > 16
    seen = np.zeros_like(visible)
    boxes = []
    h, w = alpha.shape
    for y, x in zip(*np.nonzero(visible)):
        if seen[y, x]:
            continue
        stack = [(y, x)]
        seen[y, x] = True
        ys, xs, peak = [], [], 0
        while stack:
            cy, cx = stack.pop()
            ys.append(cy)
            xs.append(cx)
            peak = max(peak, int(alpha[cy, cx]))
            for dy in (-1, 0, 1):
                for dx in (-1, 0, 1):
                    ny, nx = cy + dy, cx + dx
                    if 0 <= ny < h and 0 <= nx < w and visible[ny, nx] and not seen[ny, nx]:
                        seen[ny, nx] = True
                        stack.append((ny, nx))
        if peak < limit and len(ys) < h * w // 4:
            boxes.append((min(xs) - 1, min(ys) - 1, max(xs) + 2, max(ys) + 2))
    return boxes


def run_upscaler(args, src_dir, dst_dir):
    cmd = [args.bin, "-i", src_dir, "-o", dst_dir, "-m", args.models, "-n", args.model, "-s", "4", "-f", "png", "-t", str(args.tile), "-j", "1:1:1"]
    result = subprocess.run(cmd, capture_output=True, text=True, encoding="utf-8", errors="replace")
    if result.returncode != 0:
        sys.exit("upscaler failed:\n" + result.stderr)


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("input")
    parser.add_argument("output")
    parser.add_argument("--method", choices=("ai", "smooth"), default="ai")
    parser.add_argument("--model", default="digital-art-4x")
    parser.add_argument("--bin", default=DEFAULT_BIN)
    parser.add_argument("--models", default=DEFAULT_MODELS)
    parser.add_argument("--tile", type=int, default=64, help="GPU tile size; smaller uses less video memory")
    parser.add_argument("--files", nargs="*", help="only these file names from the input folder")
    args = parser.parse_args()

    names = args.files or sorted(f for f in os.listdir(args.input) if f.lower().endswith(".png"))
    os.makedirs(args.output, exist_ok=True)
    if args.method != "ai":
        for name in names:
            rgba = np.array(Image.open(os.path.join(args.input, name)).convert("RGBA"))
            colour = smooth_upscale(rgba)
            colour.save(os.path.join(args.output, name))
            print(name, colour.size)
        return
    work = tempfile.mkdtemp(prefix="ts_upscale_")
    try:
        colour_in, colour_out = os.path.join(work, "c_in"), os.path.join(work, "c_out")
        alpha_in, alpha_out = os.path.join(work, "a_in"), os.path.join(work, "a_out")
        for d in (colour_in, colour_out, alpha_in, alpha_out):
            os.makedirs(d)
        has_alpha = {}
        for name in names:
            rgba = np.array(Image.open(os.path.join(args.input, name)).convert("RGBA"))
            Image.fromarray(bleed(rgba)).save(os.path.join(colour_in, name))
            alpha = rgba[..., 3]
            has_alpha[name] = bool((alpha < 255).any())
            if has_alpha[name]:
                Image.fromarray(np.dstack([alpha] * 3)).save(os.path.join(alpha_in, name))
        run_upscaler(args, colour_in, colour_out)
        if any(has_alpha.values()):
            run_upscaler(args, alpha_in, alpha_out)
        for name in names:
            colour = Image.open(os.path.join(colour_out, name)).convert("RGB")
            if has_alpha[name]:
                alpha = Image.open(os.path.join(alpha_out, name)).convert("L")
                if alpha.size != colour.size:
                    alpha = alpha.resize(colour.size, Image.LANCZOS)
            else:
                alpha = Image.new("L", colour.size, 255)
            colour.putalpha(alpha)
            original = np.array(Image.open(os.path.join(args.input, name)).convert("RGBA"))
            if has_alpha[name] and colour.size == (original.shape[1] * 4, original.shape[0] * 4):
                smooth = smooth_upscale(original)
                for x0, y0, x1, y1 in faint_shapes(original[..., 3], int(original[..., 3].max()) * 3 // 4):
                    box = (max(0, x0) * 4, max(0, y0) * 4, min(original.shape[1], x1) * 4, min(original.shape[0], y1) * 4)
                    colour.paste(smooth.crop(box), box[:2])
            colour.save(os.path.join(args.output, name))
            print(name, colour.size)
    finally:
        shutil.rmtree(work, ignore_errors=True)


if __name__ == "__main__":
    main()

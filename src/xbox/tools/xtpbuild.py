"""Builds the Xbox texture pack (textures.xtp) from the game's own MISC.PAK.

Without the pack the Xbox decodes each GS texture on first use and
DXT-encodes it on the spot: one mip level, a fast encoder, and the large
textures halved to fit the cache. This tool does that work offline at full
quality instead. Every texture in MISC.PAK (textures/NNNN.qpm and
textures/misc/*.qpm) is decoded exactly as the GS decode would produce it,
keyed with the PC port's texture-replacement hash, given a mip chain and
compressed with a careful DXT encoder. The runtime looks a texture up by
that key after its own decode and keeps today's path for anything the pack
does not hold (render targets, runtime palettes, non-power-of-two images).

The pack is derived from the user's disc data, so it is only ever written
under build/ (gitignored), never committed.

usage: xtpbuild.py MISC.PAK OUT.xtp [--replacements DIR] [--dump DIR]
                   [--from-dump] [--preview DIR] [--jobs N]

  --replacements DIR  HD PNGs named <16 hex key>.png (as the PC port's
                      textures/replacements); capped at twice the original
                      size per side
  --dump DIR          the PC port's textures/dump: checks the keys against its
                      file names and supplies originals for replacements of
                      textures that are not in MISC.PAK
  --from-dump         also pack textures known only from the dump (front-end
                      art kept in other containers), checked by re-hashing
  --preview DIR       also write each entry as a loose .dds for inspection
  --jobs N            encoder processes (default: up to 8)

Pack format (little-endian); the runtime reader must follow it exactly:
  header, 32 bytes: char magic[4] = "XTP1"; u32 version = 1;
    u32 hashVersion = 1; u32 count; u32 indexOffset; u32 dataOffset;
    u32 reserved[2] = 0
  index at indexOffset: count entries of 24 bytes, sorted by key ascending:
    u64 key; u32 offset (absolute file offset of level 0, 128-byte aligned);
    u32 size (bytes of all levels); u16 width; u16 height (level-0 stored
    size, powers of two); u8 format (0 DXT1, 1 DXT5, 2 swizzled A8R8G8B8,
    3 swizzled A1R5G5B5); u8 levels (>= 1: down to 1x1, or for DXT until a
    side would drop below 4); u8 flags (bit0 alpha is unit scale: stored
    alpha 255 is GS 0x80, i.e. min(2a, 255), always set; bit1 binary alpha
    (alpha-tested); bit2 from an HD replacement); u8 reserved = 0
  data: per entry, its levels back to back from level 0; DXT levels in
    standard BC1/BC3 block order (the NV2A reads compressed textures
    block-linear, not swizzled), swizzled formats in NV2A Morton order per
    level; each entry starts 128-byte aligned.
"""
import argparse
import os
import struct
import sys
import time

import numpy as np
from PIL import Image

PACK_MAGIC = b"XTP1"
PACK_VERSION = 1
HASH_VERSION = 1  # gs_texture_replacement::hash, FNV-1a over texel pairs
HEADER = struct.Struct("<4sIIIIIII")
ENTRY = struct.Struct("<QIIHHBBBB")
ALIGN = 128

FMT_DXT1, FMT_DXT5, FMT_ARGB8888, FMT_ARGB1555 = 0, 1, 2, 3
FMT_NAMES = {FMT_DXT1: "DXT1", FMT_DXT5: "DXT5", FMT_ARGB8888: "A8R8G8B8", FMT_ARGB1555: "A1R5G5B5"}
FLAG_UNIT_ALPHA, FLAG_BINARY_ALPHA, FLAG_REPLACEMENT = 1, 2, 4

# DXT's error where it shows (weighted PSNR of level 0, dB) above which a
# texture is kept compressed. A small texture under SMALL_FALLBACK_PSNR is
# stored uncompressed and exact: cursors, HUD icons and other small UI art,
# where block artefacts show at 1:1 and the cost is a few KB. Any texture
# under FALLBACK_PSNR is too: many colours in small details (faces,
# emblems, multicoloured noise) that DXT's two colours a block turn to
# mud; 40 of MISC.PAK's textures, 0.7 MB in all. Between the two,
# busy world art (gravel, foliage) looks right in DXT at 4-8x less memory.
FALLBACK_PSNR = 27.0
SMALL_FALLBACK_PSNR = 30.0
SMALL_MAX_TEXELS = 32 * 32
# A one-bit-alpha fallback that is not exact in 16-bit colour still uses
# A1R5G5B5 when it scores at least this.
ARGB1555_PSNR = 38.0
# HD replacements: at most this many times the original size per side (a
# 640x480 screen shows no more, and each doubling costs 4x the memory).
REPLACEMENT_SCALE = 2


# ------------------------------------------------------------------ input

def read_pak(path):
    """(name, bytes) for each file of a "P4CK" archive: u32 directory offset,
    u32 directory size, then 60-byte entries (48-byte name, offset, size)."""
    data = open(path, "rb").read()
    magic, dir_offset, dir_size = struct.unpack_from("<4sII", data, 0)
    if magic != b"P4CK":
        sys.exit("%s: not a P4CK archive" % path)
    for i in range(dir_size // 60):
        entry = data[dir_offset + i * 60:dir_offset + i * 60 + 60]
        name = entry[:48].split(b"\0")[0].decode("ascii", "replace")
        offset, size = struct.unpack_from("<II", entry, 48)
        yield name, data[offset:offset + size]


def parse_qpm(data):
    """Texels of a .qpm as the GS decode gives them: one uint32 per texel,
    bytes R, G, B, A, alpha in GS scale (0x80 = 1.0). Returns (kind, levels)
    with levels a list of (h, w) arrays, or None for an unknown kind.

      Q8  "Q8\\n<w> <h>\\n255 v 256\\n", a 256-entry RGBA palette, w*h indices
      M8  the same with a level count after "256", then the game's own
          smaller levels' indices (same palette) back to back
      Q6  "Q6\\n<w> <h>\\n255\\n", w*h RGBA texels
    The palettes are stored in plain order; the game applies the GS CLUT
    swizzle when it uploads them, so plain lookups give the GS texels.
    """
    parts = data.split(b"\n", 3)
    if len(parts) < 4:
        return None
    kind = parts[0]
    w, h = map(int, parts[1].split())
    body = parts[3]
    if kind in (b"Q8", b"M8"):
        fields = parts[2].split()
        count = int(fields[3]) if kind == b"M8" and len(fields) > 3 else 1
        palette = np.frombuffer(body[:1024], "<u4")
        levels, pos, lw, lh = [], 1024, w, h
        for _ in range(count):
            indices = np.frombuffer(body[pos:pos + lw * lh], np.uint8)
            if len(indices) < lw * lh:
                break
            levels.append(palette[indices].reshape(lh, lw))
            pos += lw * lh
            lw, lh = max(1, lw // 2), max(1, lh // 2)
        return (kind.decode(), levels) if levels else None
    if kind == b"Q6":
        texels = np.frombuffer(body[:w * h * 4], "<u4")
        if len(texels) < w * h:
            return None
        return "Q6", [texels.reshape(h, w)]
    return None


def pc_keys(images):
    """The PC port's texture key for each (h, w) uint32 texel array:
    gs_texture_replacement::hash, FNV-1a over the texels read as 64-bit
    little-endian pairs, seeded with (width << 32 | height). FNV is serial
    within a texture, so the loop runs over texel pairs with every texture
    of the same size in one vector."""
    keys = [0] * len(images)
    groups = {}
    for i, image in enumerate(images):
        groups.setdefault(image.shape, []).append(i)
    prime = np.uint64(0x100000001B3)
    for (h, w), members in groups.items():
        count = w * h
        flat = np.stack([images[i].reshape(-1) for i in members]).astype("<u4")
        pairs = np.ascontiguousarray(flat[:, :count // 2 * 2]).view("<u8").T.copy()
        state = np.full(len(members), 0xCBF29CE484222325 ^ ((w << 32) | h), np.uint64)
        with np.errstate(over="ignore"):
            for column in pairs:
                state ^= column
                state *= prime
            if count % 2:
                state ^= flat[:, -1].astype(np.uint64)
                state *= prime
        for i, value in zip(members, state.tolist()):
            keys[i] = value
    return keys


def dump_keys(dump_dir):
    """Key -> PNG path for the PC port's dump (textures/dump/{2d,3d})."""
    found = {}
    for sub in ("2d", "3d"):
        folder = os.path.join(dump_dir, sub)
        if not os.path.isdir(folder):
            continue
        for name in os.listdir(folder):
            stem, ext = os.path.splitext(name)
            if ext.lower() == ".png" and len(stem) == 16:
                try:
                    found[int(stem, 16)] = os.path.join(folder, name)
                except ValueError:
                    pass
    return found


def load_png_rgba(path):
    return np.array(Image.open(path).convert("RGBA"), np.uint8)


def dump_texels(path, key):
    """GS texels of a dumped PNG, recovered by undoing the dump's alpha
    doubling as the PC loader does ((a + 1) / 2) or, for a texture dumped
    with raw alpha, as stored; whichever re-hashes to the file's key."""
    rgba = load_png_rgba(path)
    h, w = rgba.shape[:2]
    halved = rgba.copy()
    halved[..., 3] = (rgba[..., 3].astype(np.uint16) + 1) // 2
    for candidate in (halved, rgba):
        texels = np.ascontiguousarray(candidate).view("<u4").reshape(h, w)
        if pc_keys([texels])[0] == key:
            return texels
    return None


# ------------------------------------------------------------ colour math

_SRGB_TO_LINEAR = np.array([c / 12.92 if c <= 0.04045 else ((c + 0.055) / 1.055) ** 2.4
                            for c in np.arange(256) / 255.0], np.float32)


def to_linear(rgb8):
    return _SRGB_TO_LINEAR[rgb8]


def to_srgb8(linear):
    c = np.clip(linear, 0.0, 1.0)
    s = np.where(c <= 0.0031308, c * 12.92, 1.055 * np.power(c, 1 / 2.4) - 0.055)
    return np.clip(np.rint(s * 255.0), 0, 255).astype(np.uint8)


def stored_alpha(gs_alpha):
    """Unit-scale alpha (pack flag bit0): GS 0x80 is stored as 255."""
    return np.minimum(gs_alpha.astype(np.uint16) * 2, 255).astype(np.uint8)


def to_stored(texels):
    """(h, w) GS texels -> (h, w, 4) RGBA bytes with unit-scale alpha."""
    rgba = np.ascontiguousarray(texels).view(np.uint8).reshape(texels.shape + (4,)).copy()
    rgba[..., 3] = stored_alpha(rgba[..., 3])
    return rgba


def _reduce(x, fy, fx):
    """Box average over fy x fx cells (factors 1 or 2)."""
    h, w = x.shape[:2]
    return x.reshape((h // fy, fy, w // fx, fx) + x.shape[2:]).mean(axis=(1, 3))


def _half(x):
    h, w = x.shape[:2]
    return _reduce(x, 2 if h > 1 else 1, 2 if w > 1 else 1)


def bleed(rgb, known):
    """Colour under transparent texels taken from the visible ones, so
    filtering and smaller mip levels do not pull in the dark or stray
    colours that sit under alpha 0 (tools/upscale_textures.py bleed()).
    A few rounds of nearest-neighbour growth keep edges exact; a push-pull
    pyramid fills the rest in one pass instead of one round per texel of
    distance. Wraps around the edges, as the textures repeat."""
    if known.all() or not known.any():
        return rgb
    rgb = rgb.copy()
    known = known.copy()
    for _ in range(4):
        total = np.zeros_like(rgb)
        count = np.zeros(known.shape, np.float32)
        for dy, dx in ((-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)):
            shifted = np.roll(known, (dy, dx), (0, 1))
            total += np.roll(rgb, (dy, dx), (0, 1)) * shifted[..., None]
            count += shifted
        grow = (~known) & (count > 0)
        rgb[grow] = total[grow] / count[grow][:, None]
        known |= grow
        if known.all():
            return rgb
    # Push-pull: weighted averages up the pyramid, unknown texels filled
    # from the coarser level on the way back down. Replacement PNGs come
    # here at any size (a 3x upscale of 128x64 is 384x192), so an odd side
    # is padded with its edge texel before halving; on the way down,
    # i * coarse // fine is i // 2 for a halved side, padded or not.
    sums = [rgb * known[..., None]]
    weights = [known.astype(np.float32)]
    while sums[-1].shape[0] > 1 or sums[-1].shape[1] > 1:
        h, w = weights[-1].shape
        pad = ((0, h % 2 if h > 1 else 0), (0, w % 2 if w > 1 else 0))
        sums.append(_half(np.pad(sums[-1], pad + ((0, 0),), mode="edge")))
        weights.append(_half(np.pad(weights[-1], pad, mode="edge")))
    colour = sums[-1] / np.maximum(weights[-1], 1e-12)[..., None]
    for s, wgt in zip(reversed(sums[:-1]), reversed(weights[:-1])):
        h, w = wgt.shape
        up = colour[np.arange(h) * colour.shape[0] // h][:, np.arange(w) * colour.shape[1] // w]
        colour = np.where(wgt[..., None] > 0, s / np.maximum(wgt, 1e-12)[..., None], up)
    rgb[~known] = colour[~known]
    return rgb


def resize_rgba(rgba, tw, th):
    """High-quality reduction of an RGBA8 image to tw x th: repeated 2x box
    filters on linear light (colour weighted by alpha) when the ratio is a
    power of two, else Lanczos on the bled colour and the alpha apart."""
    h, w = rgba.shape[:2]
    if (w, h) == (tw, th):
        return rgba
    if w % tw == 0 and h % th == 0 and (w // tw) & (w // tw - 1) == 0 and (h // th) & (h // th - 1) == 0:
        lin = to_linear(rgba[..., :3])
        alpha = rgba[..., 3].astype(np.float32) / 255.0
        while lin.shape[0] > th or lin.shape[1] > tw:
            lin = bleed(lin, alpha > 0)
            fy = 2 if lin.shape[0] > th else 1
            fx = 2 if lin.shape[1] > tw else 1
            wgt = alpha + 1.0 / 1024.0
            lin = _reduce(lin * wgt[..., None], fy, fx) / _reduce(wgt, fy, fx)[..., None]
            alpha = _reduce(alpha, fy, fx)
        out = np.empty((th, tw, 4), np.uint8)
        out[..., :3] = to_srgb8(lin)
        out[..., 3] = np.clip(np.rint(alpha * 255.0), 0, 255)
        return out
    colour = bleed(to_linear(rgba[..., :3]), rgba[..., 3] > 0)
    image = Image.fromarray(to_srgb8(colour)).resize((tw, th), Image.LANCZOS)
    alpha = Image.fromarray(rgba[..., 3]).resize((tw, th), Image.LANCZOS)
    image.putalpha(alpha)
    return np.array(image, np.uint8)


# ---------------------------------------------------------------- mip chain

def level_sizes(w, h, dxt):
    """Stored level sizes: halving to 1x1, or for DXT until a side would
    drop below one 4x4 block."""
    sizes = [(w, h)]
    while (w, h) != (1, 1):
        w, h = max(1, w // 2), max(1, h // 2)
        if dxt and (w < 4 or h < 4):
            break
        sizes.append((w, h))
    return sizes


def _bayer(h, w):
    """Ordered-dither ranks in [0, 1) for an h x w level (tiled)."""
    size = 1
    rank = np.zeros((1, 1))
    while size < max(h, w):
        rank = np.block([[4 * rank, 4 * rank + 2], [4 * rank + 3, 4 * rank + 1]])
        size *= 2
    return np.tile(rank / (size * size), (-(-h // size), -(-w // size)))[:h, :w]


def _coverage_threshold(area, target):
    """Opaque mask for a mip level of an alpha-tested texture: the texels
    whose area coverage is highest, exactly as many as keep level 0's
    fraction of opaque texels. Plain averaging and a 50% cut thins fences
    and grates at each level until they vanish at a distance. Equal
    coverage is common (regular patterns, and every texel of a small level
    of an even mesh), so ties go to the texel whose neighbours are more
    covered, which keeps wires joined, then to an ordered dither, which
    spreads the rest evenly; a plain cut at a tied value would make such a
    level all clear or all solid."""
    h, w = area.shape
    if target <= 0.0:
        return np.zeros(area.shape, bool)
    k = min(area.size, max(1, int(round(target * area.size))))  # at least one: a sparse texture does not vanish
    around = sum(np.roll(area, (dy, dx), (0, 1)) for dy in (-1, 0, 1) for dx in (-1, 0, 1))
    chosen = np.lexsort((_bayer(h, w).reshape(-1), -around.reshape(-1), -area.reshape(-1)))[:k]
    mask = np.zeros(area.size, bool)
    mask[chosen] = True
    return mask.reshape(h, w)


def build_chain(authored, binary):
    """All levels to 1x1 as (h, w, 4) RGBA8 with unit-scale alpha.
    authored: level 0 and any of the game's own smaller levels (M8), which
    are kept; the rest are 2x box filtered on linear light, colour weighted
    by alpha after bleeding. binary: alpha-tested (0 or opaque only), whose
    levels keep level 0's coverage and its opaque value."""
    h, w = authored[0].shape[:2]
    sizes = level_sizes(w, h, False)
    out = [authored[0]]
    alpha0 = authored[0][..., 3]
    opaque = int(alpha0.max())
    target = float((alpha0 > 0).mean())
    lin = to_linear(authored[0][..., :3])
    alpha = alpha0.astype(np.float32) / 255.0
    area = (alpha0 > 0).astype(np.float32)
    for i in range(1, len(sizes)):
        if i < len(authored) and authored[i].shape[:2] == (sizes[i][1], sizes[i][0]):
            level = authored[i]
            out.append(level)
            lin = to_linear(level[..., :3])
            alpha = level[..., 3].astype(np.float32) / 255.0
            area = (level[..., 3] > 0).astype(np.float32)
            continue
        visible = (area if binary else alpha) > 0
        lin = bleed(lin, visible)
        wgt = (area if binary else alpha) + 1.0 / 1024.0
        lin = _half(lin * wgt[..., None]) / _half(wgt)[..., None]
        level = np.empty(lin.shape[:2] + (4,), np.uint8)
        level[..., :3] = to_srgb8(lin)
        if binary:
            area = _half(area)
            mask = _coverage_threshold(area, target)
            level[..., 3] = np.where(mask, opaque, 0)
            alpha = mask.astype(np.float32) * (opaque / 255.0)
        else:
            alpha = _half(alpha)
            level[..., 3] = np.clip(np.rint(alpha * 255.0), 0, 255)
        out.append(level)
    return out


# ----------------------------------------------------------- DXT encoding
#
# Vectorised over blocks (N, 16 texels). Colour: principal-axis end points,
# then a few rounds of least-squares refinement against the current
# indices, a candidate from the optimal single-colour tables, every
# candidate rounded to the nearest 565 colour and kept only if its real
# (quantised) error is lower. DXT1 tries the 4- and 3-colour modes; blocks
# with transparent texels must use the 3-colour mode, whose fourth entry is
# transparent black. DXT5 alpha tries both the 8-step and the 6-step modes.

# Squared-error weights per channel, close to luma: green errors cost most,
# as the eye is most sensitive there, but blue keeps enough weight that its
# hue does not drift.
CHANNEL_WEIGHTS = np.array([0.30, 0.55, 0.15], np.float32)
_SCALE = np.sqrt(CHANNEL_WEIGHTS).astype(np.float32)
_E5 = np.array([(q << 3) | (q >> 2) for q in range(32)], np.float32)
_E6 = np.array([(q << 2) | (q >> 4) for q in range(64)], np.float32)
_W4 = np.array([1.0, 0.0, 2.0 / 3.0, 1.0 / 3.0], np.float32)  # weight of colour0 per index
_W3 = np.array([1.0, 0.0, 0.5, 0.0], np.float32)
_REFINE_ROUNDS = 3
_CHUNK = 8192


def _nearest(values, table):
    """Index of the nearest expanded 5/6-bit level (rounding, not truncation)."""
    top = len(table) - 1
    q = np.clip(np.rint(values * (top / 255.0)), 0, top).astype(np.int32)
    best, dist = q, np.abs(table[q] - values)
    for step in (-1, 1):
        c = np.clip(q + step, 0, top)
        d = np.abs(table[c] - values)
        better = d < dist
        best, dist = np.where(better, c, best), np.where(better, d, dist)
    return best


def _quantise(e):
    e = np.clip(e, 0.0, 255.0)
    q = np.stack([_nearest(e[:, 0], _E5), _nearest(e[:, 1], _E6), _nearest(e[:, 2], _E5)], 1)
    return q, np.stack([_E5[q[:, 0]], _E6[q[:, 1]], _E5[q[:, 2]]], 1)


def _single_colour_table(table, weight0):
    """For each 8-bit value, the end point pair whose interpolated entry
    (weight0 * e0 + (1 - weight0) * e1) is nearest: a flat block then
    keeps its exact colour instead of the nearest 565 level. A small
    penalty on the spread keeps the pair close, as hardware decoders
    round the interpolation differently."""
    e0, e1 = table[:, None], table[None, :]
    mixed = weight0 * e0 + (1.0 - weight0) * e1
    cost = np.abs(mixed[None, :, :] - np.arange(256, dtype=np.float32)[:, None, None])
    cost += 0.03 * np.abs(e0 - e1)[None]
    flat = cost.reshape(256, -1).argmin(1)
    return np.stack([flat // len(table), flat % len(table)], 1).astype(np.int32)


_SINGLE = {
    (False, 5): _single_colour_table(_E5, 2.0 / 3.0), (False, 6): _single_colour_table(_E6, 2.0 / 3.0),
    (True, 5): _single_colour_table(_E5, 0.5), (True, 6): _single_colour_table(_E6, 0.5),
}


def _evaluate(xs, m, x0, x1, three):
    """Weighted squared error and nearest indices for end points x0, x1."""
    p0, p1 = x0 * _SCALE, x1 * _SCALE
    if three:
        palette = np.stack([p0, p1, (p0 + p1) * 0.5], 1)
    else:
        palette = np.stack([p0, p1, (2.0 * p0 + p1) / 3.0, (p0 + 2.0 * p1) / 3.0], 1)
    d = ((xs[:, :, None, :] - palette[:, None, :, :]) ** 2).sum(-1)
    idx = d.argmin(-1)
    err = (np.take_along_axis(d, idx[..., None], -1)[..., 0] * m).sum(1)
    return err, idx


def _least_squares(x, m, idx, three):
    """End points that minimise the error for fixed indices (per channel;
    the channel weights do not change the solution)."""
    a = (_W3 if three else _W4)[idx]
    b = 1.0 - a
    am, bm = a * m, b * m
    aa, ab, bb = (am * a).sum(1), (am * b).sum(1), (bm * b).sum(1)
    xa = np.einsum("ni,nic->nc", am, x)
    xb = np.einsum("ni,nic->nc", bm, x)
    det = aa * bb - ab * ab
    ok = det > 1e-4
    safe = np.where(ok, det, 1.0)[:, None]
    e0 = (bb[:, None] * xa - ab[:, None] * xb) / safe
    e1 = (aa[:, None] * xb - ab[:, None] * xa) / safe
    return e0, e1, ok


def _principal_axis(xs, m):
    """Mean and end points along the principal axis of the weighted
    colours, in the weighted space."""
    n = np.maximum(m.sum(1), 1e-6)
    mean = (xs * m[..., None]).sum(1) / n[:, None]
    d = (xs - mean[:, None, :]) * m[..., None]
    cov = np.einsum("nic,nid->ncd", d, d)
    diag = np.diagonal(cov, axis1=1, axis2=2)
    v = cov[np.arange(len(cov)), :, diag.argmax(1)]  # start: the widest channel's column
    for _ in range(8):
        v = np.einsum("ncd,nd->nc", cov, v)
        v /= np.maximum(np.linalg.norm(v, axis=1, keepdims=True), 1e-12)
    t = np.einsum("nic,nc->ni", d, v)
    active = m > 0
    has = active.any(1)
    tmax = np.where(has, np.where(active, t, -np.inf).max(1), 0.0)
    tmin = np.where(has, np.where(active, t, np.inf).min(1), 0.0)
    return mean, mean + tmax[:, None] * v, mean + tmin[:, None] * v


def _fit_mode(x, xs, m, three, start0, start1, mean):
    """Best quantised end points and indices for one DXT colour mode."""
    q0, x0 = _quantise(start0)
    q1, x1 = _quantise(start1)
    err, idx = _evaluate(xs, m, x0, x1, three)

    def keep(n0, n1):
        nonlocal err, idx, q0, q1, x0, x1
        nq0, nx0 = _quantise(n0)
        nq1, nx1 = _quantise(n1)
        e, i = _evaluate(xs, m, nx0, nx1, three)
        better = e < err
        err = np.where(better, e, err)
        idx = np.where(better[:, None], i, idx)
        q0, x0 = np.where(better[:, None], nq0, q0), np.where(better[:, None], nx0, x0)
        q1, x1 = np.where(better[:, None], nq1, q1), np.where(better[:, None], nx1, x1)

    # Optimal single-colour end points for the block's mean colour.
    v = np.clip(np.rint(mean), 0, 255).astype(np.int32)
    pairs = [_SINGLE[(three, 5)][v[:, 0]], _SINGLE[(three, 6)][v[:, 1]], _SINGLE[(three, 5)][v[:, 2]]]
    s0 = np.stack([_E5[pairs[0][:, 0]], _E6[pairs[1][:, 0]], _E5[pairs[2][:, 0]]], 1)
    s1 = np.stack([_E5[pairs[0][:, 1]], _E6[pairs[1][:, 1]], _E5[pairs[2][:, 1]]], 1)
    keep(s0, s1)
    for _ in range(_REFINE_ROUNDS):
        e0, e1, ok = _least_squares(x, m, idx, three)
        keep(np.where(ok[:, None], e0, x0), np.where(ok[:, None], e1, x1))
    return err, idx, q0, q1


def _pack565(q):
    return (q[:, 0] << 11) | (q[:, 1] << 5) | q[:, 2]


def _index_bits(idx, bits):
    shifts = (np.arange(16, dtype=np.uint64) * np.uint64(bits))
    return (idx.astype(np.uint64) << shifts).sum(1, dtype=np.uint64)


def _texel_error(x, q0, q1, three, idx):
    """Weighted squared error per texel (N, 16) of the chosen blocks."""
    x0 = np.stack([_E5[q0[:, 0]], _E6[q0[:, 1]], _E5[q0[:, 2]]], 1)
    x1 = np.stack([_E5[q1[:, 0]], _E6[q1[:, 1]], _E5[q1[:, 2]]], 1)
    w0 = np.where(three[:, None], _W3[None, :], _W4[None, :])
    w0 = np.take_along_axis(w0, idx, 1)[..., None]
    decoded = w0 * x0[:, None, :] + (1.0 - w0) * x1[:, None, :]
    return (((x - decoded) * _SCALE) ** 2).sum(-1)


def encode_colour(x, m, dxt1, seen=None):
    """Colour blocks: x (N, 16, 3) RGB 0..255, m (N, 16) 1 for texels that
    must be coloured, 0 for transparent ones (DXT1 only). Returns (N, 8)
    bytes and the weighted squared error per block, each texel's error
    weighted by m, or by seen (N, 16) when given: how much of it shows."""
    n = len(x)
    xs = x * _SCALE
    mean_s, start0_s, start1_s = _principal_axis(xs, m)
    mean, start0, start1 = mean_s / _SCALE, start0_s / _SCALE, start1_s / _SCALE
    transparent = (m == 0).any(1)
    best_err = np.full(n, np.inf, np.float32)
    best_idx = np.zeros((n, 16), np.int64)
    best_q0 = np.zeros((n, 3), np.int32)
    best_q1 = np.zeros((n, 3), np.int32)
    best_three = np.zeros(n, bool)
    # 4-colour mode for every opaque block; 3-colour for DXT1 blocks (the
    # only choice when a texel is transparent, sometimes better otherwise).
    for three in ((False, True) if dxt1 else (False,)):
        rows = np.arange(n) if three else np.nonzero(~transparent)[0]
        if not len(rows):
            continue
        err, idx, q0, q1 = _fit_mode(x[rows], xs[rows], m[rows], three, start0[rows], start1[rows], mean[rows])
        better = err < best_err[rows]
        sel = rows[better]
        best_err[sel], best_idx[sel], best_q0[sel], best_q1[sel] = err[better], idx[better], q0[better], q1[better]
        best_three[sel] = three
    if seen is not None:
        best_err = (_texel_error(x, best_q0, best_q1, best_three, best_idx) * seen).sum(1)
    c0, c1 = _pack565(best_q0), _pack565(best_q1)
    idx = best_idx
    # 4-colour mode needs colour0 > colour1, 3-colour mode colour0 <= colour1:
    # swap the end points where the order is wrong and renumber the indices.
    swap4 = ~best_three & (c0 < c1)
    swap3 = best_three & (c0 > c1)
    idx = np.where(swap4[:, None], np.array([1, 0, 3, 2])[idx], idx)
    idx = np.where(swap3[:, None], np.array([1, 0, 2, 3])[idx], idx)
    swap = swap4 | swap3
    c0, c1 = np.where(swap, c1, c0), np.where(swap, c0, c1)
    # Equal end points decode as the 3-colour mode: index 0 is that colour.
    idx = np.where((~best_three & (c0 == c1))[:, None], 0, idx)
    idx = np.where(best_three[:, None] & (m == 0), 3, idx)
    out = np.zeros(n, dtype=[("c0", "<u2"), ("c1", "<u2"), ("bits", "<u4")])
    out["c0"], out["c1"] = c0, c1
    out["bits"] = _index_bits(idx, 2)
    return out.view(np.uint8).reshape(n, 8), best_err


_A8 = np.array([7, 0, 6, 5, 4, 3, 2, 1], np.float32) / 7.0  # weight of alpha0 per code, 8-step mode
_A6 = np.array([5, 0, 4, 3, 2, 1, 0, 0], np.float32) / 5.0  # 6-step mode (codes 6, 7 are 0 and 255)


def _alpha_palette(a0, a1):
    a0 = a0.astype(np.float32)[:, None]
    a1 = a1.astype(np.float32)[:, None]
    eight = _A8 * a0 + (1.0 - _A8) * a1
    six = _A6 * a0 + (1.0 - _A6) * a1
    six[:, 6], six[:, 7] = 0.0, 255.0
    return np.where(a0 > a1, eight, six)


def _alpha_evaluate(alpha, a0, a1):
    d = (alpha[:, :, None] - _alpha_palette(a0, a1)[:, None, :]) ** 2
    idx = d.argmin(-1)
    return np.take_along_axis(d, idx[..., None], -1)[..., 0].sum(1), idx


def _alpha_least_squares(alpha, idx, six, c0, c1):
    """End points that minimise the error for fixed codes (the 6-step
    mode's fixed 0 and 255 codes left out), rounded and put back in the
    order that selects the mode."""
    weights = (_A6 if six else _A8)[idx]
    used = ~((idx >= 6) & six)
    wa, wb = weights * used, (1.0 - weights) * used
    aa, ab, bb = (wa * weights).sum(1), (wa * (1.0 - weights)).sum(1), (wb * (1.0 - weights)).sum(1)
    xa, xb = (wa * alpha).sum(1), (wb * alpha).sum(1)
    det = aa * bb - ab * ab
    ok = det > 1e-4
    safe = np.where(ok, det, 1.0)
    n0 = np.where(ok, np.clip(np.rint((bb * xa - ab * xb) / safe), 0, 255), c0)
    n1 = np.where(ok, np.clip(np.rint((aa * xb - ab * xa) / safe), 0, 255), c1)
    if six:
        return np.minimum(n0, n1), np.maximum(n0, n1)
    n0, n1 = np.maximum(n0, n1), np.minimum(n0, n1)
    # Equal end points would select the 6-step mode: pull them one apart.
    same = n0 == n1
    return np.where(same & (n0 < 255), n0 + 1, n0), np.where(same & (n0 == 255), n1 - 1, n1)


def encode_alpha(alpha):
    """DXT5 alpha blocks: alpha (N, 16) 0..255. Returns (N, 8) bytes and
    the squared error per block. The 8-step mode spans the block's range;
    the 6-step mode spans the values other than 0 and 255, which it holds
    exactly, and is often better for blocks with fully clear or solid
    texels next to soft ones."""
    n = len(alpha)
    inner = (alpha > 0) & (alpha < 255)
    has = inner.any(1)
    lo6 = np.where(has, np.where(inner, alpha, 255).min(1), 0)
    hi6 = np.where(has, np.where(inner, alpha, 0).max(1), 0)
    best_err = None
    for six, (c0, c1) in ((False, (alpha.max(1), alpha.min(1))), (True, (lo6, hi6))):
        err, idx = _alpha_evaluate(alpha, c0, c1)
        for _ in range(_REFINE_ROUNDS):
            n0, n1 = _alpha_least_squares(alpha, idx, six, c0, c1)
            e, i = _alpha_evaluate(alpha, n0, n1)
            better = e < err
            err, idx = np.where(better, e, err), np.where(better[:, None], i, idx)
            c0, c1 = np.where(better, n0, c0), np.where(better, n1, c1)
        if best_err is None:
            best_err, best_idx, a0, a1 = err, idx, c0, c1
        else:
            better = err < best_err
            best_err, best_idx = np.where(better, err, best_err), np.where(better[:, None], idx, best_idx)
            a0, a1 = np.where(better, c0, a0), np.where(better, c1, a1)
    out = np.zeros((n, 8), np.uint8)
    out[:, 0], out[:, 1] = a0, a1
    bits = _index_bits(best_idx, 3)
    for k in range(6):
        out[:, 2 + k] = (bits >> np.uint64(8 * k)) & np.uint64(0xFF)
    return out, best_err


def _encode_chunk(task):
    blocks, dxt5 = task
    x = blocks[..., :3].astype(np.float32)
    a = blocks[..., 3].astype(np.float32)
    if dxt5:
        # Every texel's colour is fitted (filtering blends the colour under
        # clear texels into their neighbours, as on the GS); the error is
        # reported for the colour that shows, weighted by alpha.
        colour, cerr = encode_colour(x, np.ones(a.shape, np.float32), False, a / 255.0)
        alpha, aerr = encode_alpha(a)
        return np.concatenate([alpha, colour], 1), cerr, aerr
    colour, cerr = encode_colour(x, (a > 0).astype(np.float32), True)
    return colour, cerr, np.zeros(len(blocks), np.float32)


def encode_blocks(batches, workers):
    """batches: [(blocks (N, 16, 4) RGBA8, dxt5)]. Returns per batch the
    (N, 8 or 16) DXT1/DXT5 bytes and the colour and alpha squared error per
    block. Chunks go to worker processes: numpy runs each on one core."""
    tasks, owner = [], []
    for b, (blocks, dxt5) in enumerate(batches):
        for start in range(0, len(blocks), _CHUNK):
            tasks.append((blocks[start:start + _CHUNK], dxt5))
            owner.append(b)
    if workers > 1 and len(tasks) > 1:
        from concurrent.futures import ProcessPoolExecutor
        with ProcessPoolExecutor(min(workers, len(tasks))) as pool:
            results = list(pool.map(_encode_chunk, tasks))
    else:
        results = [_encode_chunk(task) for task in tasks]
    out = []
    for b, (blocks, dxt5) in enumerate(batches):
        mine = [r for r, o in zip(results, owner) if o == b]
        if not mine:
            out.append((np.zeros((0, 16 if dxt5 else 8), np.uint8), np.zeros(0), np.zeros(0)))
            continue
        out.append(tuple(np.concatenate(part) for part in zip(*mine)))
    return out


def to_blocks(level):
    """(h, w, 4) -> (h/4 * w/4, 16, 4), blocks in row order, texels in row order."""
    h, w = level.shape[:2]
    return level.reshape(h // 4, 4, w // 4, 4, 4).transpose(0, 2, 1, 3, 4).reshape(-1, 16, 4)


# ------------------------------------------------------ swizzled formats

def _spread_masks(w, h):
    """NV2A swizzle: texel coordinate bits interleaved, u first, while both
    sizes last, then the longer side's upper bits."""
    mask_u = mask_v = 0
    bit, size = 0, 1
    while size < w or size < h:
        if size < w:
            mask_u |= 1 << bit
            bit += 1
        if size < h:
            mask_v |= 1 << bit
            bit += 1
        size <<= 1
    return mask_u, mask_v


def _spread(values, mask):
    out = np.zeros_like(values)
    src = 0
    for bit in range(32):
        if mask & (1 << bit):
            out |= ((values >> src) & 1) << bit
            src += 1
    return out


def swizzle(image):
    h, w = image.shape[:2]
    mask_u, mask_v = _spread_masks(w, h)
    order = _spread(np.arange(h, dtype=np.int64), mask_v)[:, None] | _spread(np.arange(w, dtype=np.int64), mask_u)[None, :]
    out = np.empty(h * w, image.dtype)
    out[order.reshape(-1)] = image.reshape(-1)
    return out


def argb8888(level):
    r, g, b, a = (level[..., c].astype(np.uint32) for c in range(4))
    return (a << 24) | (r << 16) | (g << 8) | b


def quantise555(level):
    """(h, w, 3) 5-bit levels nearest to each channel as the NV2A expands
    them (bit replication), and the colour they display."""
    rgb = level[..., :3].astype(np.float32).reshape(-1, 3)
    q = np.stack([_nearest(rgb[:, c], _E5) for c in range(3)], 1)
    return q.reshape(level.shape[:2] + (3,)), _E5[q].reshape(level.shape[:2] + (3,))


def argb1555(level):
    q = quantise555(level)[0].astype(np.uint16)
    a = (level[..., 3] > 0).astype(np.uint16)
    return (a << 15) | (q[..., 0] << 10) | (q[..., 1] << 5) | q[..., 2]


# ------------------------------------------------------------- preview

def dds_bytes(fmt, w, h, levels_linear):
    """A .dds of the entry for inspection (swizzled formats unswizzled)."""
    flags = 0x1 | 0x2 | 0x4 | 0x1000 | 0x20000
    caps = 0x1000 | (0x400008 if len(levels_linear) > 1 else 0)
    if fmt in (FMT_DXT1, FMT_DXT5):
        flags |= 0x80000
        pitch = len(levels_linear[0])
        pf = struct.pack("<II4sIIIII", 32, 0x4, b"DXT1" if fmt == FMT_DXT1 else b"DXT5", 0, 0, 0, 0, 0)
    elif fmt == FMT_ARGB8888:
        flags |= 0x8
        pitch = w * 4
        pf = struct.pack("<II4sIIIII", 32, 0x41, b"\0\0\0\0", 32, 0xFF0000, 0xFF00, 0xFF, 0xFF000000)
    else:
        flags |= 0x8
        pitch = w * 2
        pf = struct.pack("<II4sIIIII", 32, 0x41, b"\0\0\0\0", 16, 0x7C00, 0x3E0, 0x1F, 0x8000)
    header = struct.pack("<4sIIIIIII", b"DDS ", 124, flags, h, w, pitch, 0, len(levels_linear))
    header += b"\0" * 44 + pf + struct.pack("<IIIII", caps, 0, 0, 0, 0)
    return header + b"".join(levels_linear)


# ---------------------------------------------------------------- main

class Texture:
    def __init__(self, key, names, authored, replacement=False):
        self.key = key
        self.names = names            # where it came from (MISC.PAK names, or a PNG)
        self.authored = authored      # stored RGBA8 levels: level 0 and any of the game's own mips
        self.replacement = replacement
        self.from_dump = False
        self.format = None
        self.levels = []
        self.flags = FLAG_UNIT_ALPHA
        self.psnr = None
        self.data = b""
        self.preview = []

    @property
    def width(self):
        return self.authored[0].shape[1]

    @property
    def height(self):
        return self.authored[0].shape[0]


def alpha_class(gs_alpha):
    """'high' (some alpha above 0x80, which unit scale cannot hold),
    'unit' (only 0, 0x7F and 0x80: one bit is enough), else 'soft'."""
    values = np.unique(gs_alpha)
    if values.max() > 0x80:
        return "high"
    if np.isin(values, (0, 0x7F, 0x80)).all():
        return "unit"
    return "soft"


def psnr(sq_error, count):
    mse = sq_error / max(count, 1e-6)
    return 99.0 if mse <= 1e-9 else 10.0 * np.log10(255.0 * 255.0 / mse)


def choose_uncompressed(tex, exact):
    """Swizzled, mips down to 1x1: A1R5G5B5 when one alpha bit is enough
    and 16-bit colour shows level 0 exactly (exact) or scores at least
    ARGB1555_PSNR (otherwise: half the memory of A8R8G8B8, and busy
    textures that DXT fails on look the same in 16-bit), else A8R8G8B8."""
    level0 = tex.chain[0]
    use16 = False
    if tex.alpha == "unit":
        shown = quantise555(level0)[1]
        error = ((shown - level0[..., :3]) ** 2 * CHANNEL_WEIGHTS).sum(-1)[level0[..., 3] > 0]
        use16 = not error.any() if exact else psnr(error.sum() / CHANNEL_WEIGHTS.sum(), error.size) >= ARGB1555_PSNR
    tex.format = FMT_ARGB1555 if use16 else FMT_ARGB8888
    tex.levels = tex.chain
    convert, dtype = (argb1555, "<u2") if use16 else (argb8888, "<u4")
    tex.preview = [convert(level).astype(dtype).tobytes() for level in tex.levels]
    tex.data = b"".join(swizzle(convert(level).astype(dtype)).tobytes() for level in tex.levels)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("pak", help="the game's MISC.PAK")
    parser.add_argument("output", help="textures.xtp to write")
    parser.add_argument("--replacements", help="HD replacement PNGs (<key>.png, any depth)")
    parser.add_argument("--dump", help="the PC port's texture dump (textures/dump)")
    parser.add_argument("--from-dump", action="store_true", help="also pack textures found only in --dump")
    parser.add_argument("--preview", help="write loose .dds files here")
    parser.add_argument("--jobs", type=int, default=min(8, os.cpu_count() or 1), help="encoder processes")
    args = parser.parse_args()
    started = time.time()
    clock = {}

    # 1. Decode MISC.PAK's textures.
    t = time.time()
    sources = []  # (name, kind, GS levels)
    for name, data in read_pak(args.pak):
        if not name.endswith(".qpm") or not data:
            continue
        if not (name.startswith("textures/") and (name.count("/") == 1 or name.startswith("textures/misc/"))):
            continue
        parsed = parse_qpm(data)
        if parsed:
            sources.append((name,) + parsed)
    skipped = {"non-power-of-two": 0, "alpha above 0x80": 0, "duplicate": 0}  # files
    pow2 = []
    for name, kind, levels in sources:
        h, w = levels[0].shape
        if w & (w - 1) or h & (h - 1):
            skipped["non-power-of-two"] += 1
        else:
            pow2.append((name, kind, levels))
    keys = pc_keys([levels[0] for _, _, levels in pow2])
    textures = {}
    order = []
    for (name, kind, levels), key in zip(pow2, keys):
        known = textures.get(key)
        if known is not None:
            if not np.array_equal(known.gs0, levels[0]):
                sys.exit("key collision: %s and %s share %016x" % (known.names[0], name, key))
            known.names.append(name)
            skipped["duplicate"] += 1
            if len(levels) > len(known.gs_levels):  # prefer the copy with the game's mips
                known.gs_levels = levels
            continue
        tex = Texture(key, [name], None)
        tex.gs0 = levels[0]
        tex.gs_levels = levels
        textures[key] = tex
        order.append(key)
    clock["decode + key"] = time.time() - t

    # 2. Check the keys against the PC port's dump.
    dumped = dump_keys(args.dump) if args.dump else {}
    dump_hits = sum(1 for k in dumped if k in textures)
    if args.from_dump:
        for key, path in sorted(dumped.items()):
            if key in textures:
                continue
            texels = dump_texels(path, key)
            if texels is None:
                continue
            h, w = texels.shape
            if w & (w - 1) or h & (h - 1):
                continue
            tex = Texture(key, [os.path.relpath(path, args.dump)], None)
            tex.gs0 = texels
            tex.gs_levels = [texels]
            tex.from_dump = True
            textures[key] = tex
            order.append(key)

    # 3. Alpha class, stored levels; drop what unit-scale alpha cannot hold
    #    (those keep the runtime path, which handles alpha above 0x80).
    #    Over every level the game supplies, as build_chain keeps its M8
    #    levels as they are: two textures (1770, 2297) are alpha-tested at
    #    level 0 but partly transparent further down, which DXT1 would turn
    #    opaque (2297's 8x8 level, alpha 11 and 87, into a solid block).
    high_alpha = set()
    for key in list(order):
        tex = textures[key]
        tex.alpha = alpha_class(np.concatenate([(level >> 24).ravel() for level in tex.gs_levels]))
        if tex.alpha == "high":
            skipped["alpha above 0x80"] += 1
            high_alpha.add(key)
            del textures[key]
            order.remove(key)
            continue
        tex.authored = [to_stored(level) for level in tex.gs_levels]

    # 4. HD replacements, same key, alpha back to GS scale as the PC loader does.
    replaced = 0
    if args.replacements:
        for folder, _, files in os.walk(args.replacements):
            for name in sorted(files):
                stem, ext = os.path.splitext(name)
                if ext.lower() != ".png" or len(stem) != 16:
                    continue
                try:
                    key = int(stem, 16)
                except ValueError:
                    continue
                if key in high_alpha:
                    print("[xtp] replacement %s: original has alpha above 0x80; skipped" % name)
                    continue
                if key in textures and textures[key].replacement:
                    print("[xtp] replacement %s: a second PNG for the same key; skipped" % name)
                    continue
                if key in textures:
                    ow, oh = textures[key].width, textures[key].height
                    original = textures[key].gs0
                elif key in dumped:
                    original = dump_texels(dumped[key], key)
                    if original is None:
                        print("[xtp] replacement %s: the dump PNG does not re-hash to its name; skipped" % name)
                        continue
                    oh, ow = original.shape
                else:
                    print("[xtp] replacement %s: original not in MISC.PAK%s; skipped" % (name, " or the dump" if args.dump else " (try --dump)"))
                    continue
                if ((original >> 24) > 0x80).any():
                    print("[xtp] replacement %s: original has alpha above 0x80; skipped" % name)
                    continue
                rgba = load_png_rgba(os.path.join(folder, name))
                rh, rw = rgba.shape[:2]
                tw = min(1 << (rw.bit_length() - 1), REPLACEMENT_SCALE * ow)
                th = min(1 << (rh.bit_length() - 1), REPLACEMENT_SCALE * oh)
                rgba = resize_rgba(rgba, tw, th)
                gs_alpha = (rgba[..., 3].astype(np.uint16) + 1) // 2  # PNG 0..255 -> GS 0..128
                rgba[..., 3] = stored_alpha(gs_alpha)
                tex = Texture(key, [os.path.relpath(os.path.join(folder, name), args.replacements)], [rgba], True)
                tex.alpha = alpha_class(gs_alpha)
                tex.gs0 = None
                if key not in textures:
                    order.append(key)
                textures[key] = tex
                replaced += 1

    # 5. Mip chains and format choice.
    t = time.time()
    dxt_jobs = {False: [], True: []}  # dxt5 -> textures
    for key in order:
        tex = textures[key]
        binary = tex.alpha == "unit" and (tex.authored[0][..., 3] == 0).any() and (tex.authored[0][..., 3] > 0).any()
        if binary:
            tex.flags |= FLAG_BINARY_ALPHA
        if tex.replacement:
            tex.flags |= FLAG_REPLACEMENT
        tex.chain = build_chain(tex.authored, binary)
        if tex.width >= 8 and tex.height >= 8:
            tex.format = FMT_DXT1 if tex.alpha == "unit" else FMT_DXT5
            count = len(level_sizes(tex.width, tex.height, True))
            tex.levels = tex.chain[:count]
            dxt_jobs[tex.format == FMT_DXT5].append(tex)
        else:
            choose_uncompressed(tex, True)
    clock["mip chains"] = time.time() - t

    # 6. DXT: every level of every texture of a format in one batch.
    t = time.time()
    batches, layouts = [], []
    for dxt5, jobs in dxt_jobs.items():
        blocks, spans, start = [], [], 0
        for tex in jobs:
            span = []
            for level in tex.levels:
                b = to_blocks(level)
                blocks.append(b)
                span.append((start, len(b)))
                start += len(b)
            spans.append(span)
        batches.append((np.concatenate(blocks) if blocks else np.zeros((0, 16, 4), np.uint8), dxt5))
        layouts.append((jobs, spans))
    for (encoded, cerr, aerr), (jobs, spans) in zip(encode_blocks(batches, args.jobs), layouts):
        for tex, span in zip(jobs, spans):
            s0, n0 = span[0]
            # Colour error where it shows: DXT1's visible texels, DXT5's
            # weighted by alpha.
            alpha0 = tex.levels[0][..., 3]
            seen = (alpha0 > 0).sum() if tex.format == FMT_DXT1 else alpha0.sum() / 255.0
            colour_psnr = psnr(cerr[s0:s0 + n0].sum() / CHANNEL_WEIGHTS.sum(), seen)
            alpha_psnr = psnr(aerr[s0:s0 + n0].sum(), n0 * 16)
            tex.psnr = min(colour_psnr, alpha_psnr)
            small = tex.width * tex.height <= SMALL_MAX_TEXELS
            if tex.psnr < FALLBACK_PSNR or (small and tex.psnr < SMALL_FALLBACK_PSNR):
                choose_uncompressed(tex, small)
                continue
            tex.preview = [encoded[s:s + n].tobytes() for s, n in span]
            tex.data = b"".join(tex.preview)
    clock["DXT encode"] = time.time() - t

    # 7. Write the pack: index sorted by key, data in MISC.PAK order.
    t = time.time()
    index = []
    count = len(order)
    data_offset = -(-(HEADER.size + ENTRY.size * count) // ALIGN) * ALIGN
    pos = data_offset
    chunks = []
    for key in order:
        tex = textures[key]
        pad = -pos % ALIGN
        chunks.append(b"\0" * pad)
        pos += pad
        index.append(ENTRY.pack(key, pos, len(tex.data), tex.width, tex.height, tex.format, len(tex.levels), tex.flags, 0))
        chunks.append(tex.data)
        pos += len(tex.data)
    index_sorted = [entry for _, entry in sorted(zip(order, index))]
    header = HEADER.pack(PACK_MAGIC, PACK_VERSION, HASH_VERSION, count, HEADER.size, data_offset, 0, 0)
    head = header + b"".join(index_sorted)
    head += b"\0" * (data_offset - len(head))
    os.makedirs(os.path.dirname(os.path.abspath(args.output)), exist_ok=True)
    temp = args.output + ".tmp"
    with open(temp, "wb") as f:  # complete or not at all: make must not see a partial pack
        f.write(head)
        for chunk in chunks:
            f.write(chunk)
    os.replace(temp, args.output)
    clock["write"] = time.time() - t

    if args.preview:
        os.makedirs(args.preview, exist_ok=True)
        with open(os.path.join(args.preview, "index.txt"), "w") as listing:
            for key in order:
                tex = textures[key]
                with open(os.path.join(args.preview, "%016x.dds" % key), "wb") as f:
                    f.write(dds_bytes(tex.format, tex.width, tex.height, tex.preview))
                listing.write("%016x %4dx%-4d %-8s levels %2d flags %d psnr %5s  %s\n" % (
                    key, tex.width, tex.height, FMT_NAMES[tex.format], len(tex.levels), tex.flags,
                    "%.1f" % tex.psnr if tex.psnr is not None else "-", " ".join(tex.names)))

    # Stats.
    per_format = {}
    for key in order:
        tex = textures[key]
        n, b = per_format.get(tex.format, (0, 0))
        per_format[tex.format] = (n + 1, b + len(tex.data))
    total = os.path.getsize(args.output)
    print("[xtp] %s: %d entries, %.2f MB (%d qpm files read)" % (args.output, count, total / 2 ** 20, len(sources)))
    for fmt in sorted(per_format):
        n, b = per_format[fmt]
        print("[xtp]   %-8s %5d entries %8.2f MB" % (FMT_NAMES[fmt], n, b / 2 ** 20))
    print("[xtp]   skipped: " + ", ".join("%s %d" % item for item in skipped.items()))
    flags = [textures[k].flags for k in order]
    print("[xtp]   alpha-tested %d, replacements %d, from the dump only %d, with the game's own mips %d" % (
        sum(1 for f in flags if f & FLAG_BINARY_ALPHA), replaced,
        sum(1 for k in order if textures[k].from_dump and not textures[k].replacement),
        sum(1 for k in order if len(textures[k].authored) > 1)))
    scored = sorted(textures[k].psnr for k in order if textures[k].format in (FMT_DXT1, FMT_DXT5))
    fallbacks = sum(1 for k in order if textures[k].psnr is not None and textures[k].format not in (FMT_DXT1, FMT_DXT5))
    if scored:
        print("[xtp]   DXT level-0 weighted PSNR: worst %.1f dB, median %.1f dB; %d stored uncompressed instead" % (
            scored[0], scored[len(scored) // 2], fallbacks))
    if args.dump:
        print("[xtp]   PC dump: %d of %d dumped textures have the same key here" % (dump_hits, len(dumped)))
    print("[xtp]   time: " + ", ".join("%s %.1f s" % item for item in clock.items()) + ", total %.1f s" % (time.time() - started))


if __name__ == "__main__":
    main()

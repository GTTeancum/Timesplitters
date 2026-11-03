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
                   [--source-keys] [--variant-keys] [--variants LOG ...]
                   [--xbox-dump DIR ...] [--palette-textures]
                   [--preload-bytes N] [--preload-palette-textures]

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
  --source-keys       format version 3, with the source table below
  --variant-keys      also indices-only keys, so that the Xbox logs the
                      palettes it meets that the pack lacks (implies
                      --source-keys)
  --variants LOG      an Xbox log: add the palettes it lists ([TS:texvariant])
                      for indices MISC.PAK has (implies --variant-keys)
  --xbox-dump DIR     the Xbox's texture dumps (TS_TEXTURE_DUMP, .xtx, layout
                      at read_xbox_dumps): textures of any GS format the pack
                      lacked, each checked by re-hashing every key
  --palette-textures  also every indexed texture as an index texture (format
                      4), which the Xbox draws with whatever palette the game
                      loads: palette swaps the pack has no copy of
  --preload-bytes N   preload each entry's largest level of at most N bytes
                      (a multiple of 128): kept in the Xbox's memory from the
                      start and drawn while the entry is on its way
  --preload-palette-textures  preloads for the index textures too

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

  Version 2 is version 1 with header reserved[0] =
  sourceCount and reserved[1] = sourceOffset (0 when there are none), and
  at sourceOffset, after the index and before the data, sourceCount
  records of 16 bytes sorted by key ascending: u64 key; u32 entry (its
  position in the sorted index); u8 kind (0 exact: the entry is this
  texture; 1 indices only: the entry has these indices with another
  palette; --variant-keys only); u8 reserved[3] = 0. The keys are src/xbox/
  xbox_texture_source.h's (version 1): an 8-bit indexed texture's by its
  indices and its CLUT buffer's hash, a 32-bit one's by its texels, which
  the Xbox works out without decoding the texture (TS_TEXTURE_SOURCE_KEYS).
  --variants LOG adds the palettes the Xbox logged for indices the pack
  already has ([TS:texvariant] lines: palette swaps made at run time).

  Version 3 (--source-keys; this tool writes no version 2) is version 2
  with a 32-byte extension after the header and the index from offset 64:
  u32 preloadCount; u32 preloadOffset; u32 preloadDataOffset; u32
  preloadDataBytes; u32 reserved[4] = 0. The keys are version 2 of
  xbox_texture_source.h: every GS texture format, the palette part by the
  CLUT buffer's hash (PSMT8, 32-bit CLUT, CSA 0), the decoded palette
  (other indexed formats) or TEXA (24- and 16-bit colour). Format 4 is a
  swizzled 8-bit index texture, levels to 1x1 (the top-left index of each
  2x2), filed under its indices-only key; with --palette-textures source
  records of kind 1 name it. At preloadOffset (after the source table)
  preloadCount records of 16 bytes sorted by entry: u32 entry; u32 offset
  (from preloadDataOffset, 128-byte aligned); u16 width; u16 height; u8
  format (the entry's); u8 reserved[3] = 0; at preloadDataOffset
  (128-byte aligned, preloadDataBytes, a multiple of 128) their texels:
  a copy of that level of the entry, as stored there. The data follows.
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
PACK_VERSION_SOURCES = 3  # with the source table, preloads, index textures (--source-keys)
EXTENSION = struct.Struct("<8I")  # version 3, after the header
PRELOAD = struct.Struct("<IIHHBBBB")
HASH_VERSION = 1  # gs_texture_replacement::hash, FNV-1a over texel pairs
HEADER = struct.Struct("<4sIIIIIII")
ENTRY = struct.Struct("<QIIHHBBBB")
SOURCE = struct.Struct("<QIBBBB")
ALIGN = 128

FMT_DXT1, FMT_DXT5, FMT_ARGB8888, FMT_ARGB1555, FMT_I8 = 0, 1, 2, 3, 4
FMT_NAMES = {FMT_DXT1: "DXT1", FMT_DXT5: "DXT5", FMT_ARGB8888: "A8R8G8B8", FMT_ARGB1555: "A1R5G5B5", FMT_I8: "I8"}
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
    bytes R, G, B, A, alpha in GS scale (0x80 = 1.0). Returns (kind, levels,
    source) with levels a list of (h, w) arrays and source what GS memory
    holds for them (source keys): (PSM_T8, index levels as (h, w) uint8
    arrays, the 256-entry palette) or (PSM_CT32, None, None); None for an
    unknown kind.

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
        levels, index_levels, pos, lw, lh = [], [], 1024, w, h
        for _ in range(count):
            indices = np.frombuffer(body[pos:pos + lw * lh], np.uint8)
            if len(indices) < lw * lh:
                break
            levels.append(palette[indices].reshape(lh, lw))
            index_levels.append(indices.reshape(lh, lw))
            pos += lw * lh
            lw, lh = max(1, lw // 2), max(1, lh // 2)
        return (kind.decode(), levels, (PSM_T8, index_levels, palette)) if levels else None
    if kind == b"Q6":
        texels = np.frombuffer(body[:w * h * 4], "<u4")
        if len(texels) < w * h:
            return None
        return "Q6", [texels.reshape(h, w)], (PSM_CT32, None, None)
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


# ------------------------------------------------------------ source keys
# src/xbox/xbox_texture_source.h, which the renderer uses with
# TS_TEXTURE_SOURCE_KEYS: a texture named by what GS memory holds (indices
# and CLUT, or 32-bit texels), found without decoding it. Bit for bit the
# same as the header; test_xtexture_source.py checks the two against each
# other.

PSM_CT32, PSM_T8 = 0x00, 0x13
SOURCE_VERSION = 1  # xbox_texture_source::kVersion
SOURCE_EXACT, SOURCE_IMAGE = 0, 1
M32, M64 = 0xFFFFFFFF, 0xFFFFFFFFFFFFFFFF
FNV32, LANE_B = np.uint32(16777619), np.uint32(0x85EBCA6B)


def _two_lanes(words, a, b):
    """ImageHasher's (and GSCpuBackend::HashClut's Xbox) lanes over the
    columns of words (one row a hash), from start values a and b."""
    shift = np.uint32(13)
    with np.errstate(over="ignore"):
        for column in np.ascontiguousarray(words.T):
            a, b = (a ^ column) * FNV32, (b ^ column) * LANE_B + (b >> shift)
    return a, b


def source_image_keys(images):
    """ImageHasher(psm, w, h) over each (psm, w, h, bytes) image (bytes a
    uint8 array: indices or 32-bit texels in texel order), every image of
    the same shape and length in one vector."""
    keys = [0] * len(images)
    groups = {}
    for i, (psm, w, h, data) in enumerate(images):
        groups.setdefault((psm, w, h, len(data)), []).append(i)
    for (psm, w, h, n), members in groups.items():
        flat = np.zeros((len(members), -(-n // 4) * 4), np.uint8)
        for row, i in enumerate(members):
            flat[row, :n] = images[i][3]
        a0 = (2166136261 ^ ((w * 0x9E3779B1) & M32) ^ h) & M32
        b0 = (0x9E3779B9 ^ ((psm << 24) & M32) ^ ((h * 0x85EBCA6B) & M32) ^ w) & M32
        a, b = _two_lanes(flat.view("<u4"), np.full(len(members), a0, np.uint32), np.full(len(members), b0, np.uint32))
        with np.errstate(over="ignore"):
            a = (a ^ np.uint32(n & M32)) * FNV32
        for i, x, y in zip(members, a.tolist(), b.tolist()):
            keys[i] = (x << 32) | y
    return keys


def image_bytes(psm, image):
    """The bytes an image hashes: (h, w) uint8 indices or uint32 texels."""
    return np.ascontiguousarray(image.astype(np.uint8 if psm == PSM_T8 else "<u4")).reshape(-1).view(np.uint8)


def hash_cluts(palettes):
    """GSCpuBackend::HashClut (the Xbox variant) of the CLUT buffer a full
    32-bit load of each 256-entry palette leaves: 512 halfwords, the low
    halves of the entries, then the high ones, hashed as 32-bit words."""
    if not len(palettes):
        return []
    palettes = np.stack([np.asarray(p, np.uint32) for p in palettes])
    buffers = np.ascontiguousarray(np.concatenate([palettes & 0xFFFF, palettes >> 16], axis=1).astype("<u2"))
    a, b = _two_lanes(buffers.view("<u4"), np.full(len(palettes), 2166136261, np.uint32),
                      np.full(len(palettes), 0x9E3779B9, np.uint32))
    return [(x << 32) | y for x, y in zip(a.tolist(), b.tolist())]


def hash_clut(palette):
    return hash_cluts([palette])[0]


def _rotl(v, s):
    return ((v << s) | (v >> (64 - s))) & M64


def exact_key(image, clut):
    return image ^ _rotl(clut, 29) ^ 0x5851F42D4C957F2D


def image_only_key(image):
    return image ^ 0xA0761D6478BD642F


def read_variants(paths):
    """Palettes the renderer met for indices the pack has, from its logs:
    "[TS:texvariant] <image> <clut> <w>x<h> <part>/8 <32 entries>" lines
    (hex), eight parts a palette. {(image, clut): (w, h, palette)} for the
    complete ones whose entries hash to the logged CLUT."""
    parts = {}
    for path in paths:
        with open(path, "r", errors="replace") as f:
            for line in f:
                at = line.find("[TS:texvariant] ")
                if at < 0:
                    continue
                fields = line[at:].split()
                try:
                    image, clut = int(fields[1], 16), int(fields[2], 16)
                    w, h = map(int, fields[3].split("x"))
                    part = int(fields[4].split("/")[0])
                    entries = [int(fields[5][i:i + 8], 16) for i in range(0, 256, 8)]
                except (IndexError, ValueError):
                    continue
                if 0 <= part < 8 and len(fields[5]) == 256:
                    parts.setdefault((image, clut, w, h), {})[part] = entries
    found = {}
    for (image, clut, w, h), pieces in parts.items():
        if len(pieces) != 8:
            continue
        palette = np.array([e for p in range(8) for e in pieces[p]], np.uint32)
        if hash_clut(palette) == clut:
            found[(image, clut)] = (w, h, palette)
    return found


IMAGE_BITS = {0x00: 32, 0x01: 24, 0x02: 16, 0x0A: 16, 0x13: 8, 0x1B: 8, 0x14: 4, 0x24: 4, 0x2C: 4}
MODE_NONE, MODE_CLUT, MODE_PALETTE, MODE_TEXA = 0, 1, 2, 3  # how a dump's palette part was made


def palette_key(entries):
    """xbox_texture_source::paletteKey: the palette as the decode applies
    it (16 or 256 RGBA8 entries)."""
    entries = np.asarray(entries, np.uint32)
    count = len(entries)
    a, b = _two_lanes(entries.astype("<u4").reshape(1, -1), np.full(1, (0x811C9DC5 ^ count) & M32, np.uint32),
                      np.full(1, (0x27D4EB2F ^ (count << 16)) & M32, np.uint32))
    return ((int(a[0]) << 32) | int(b[0])) ^ 0x3C6EF372FE94F82B


def texa_key(ta0, ta1, aem):
    return 0x6A09E667F3BCC908 ^ ((ta0 & 0xFF) | ((ta1 & 0xFF) << 8) | ((1 if aem else 0) << 16))


def pack_texels(psm, values):
    """xbox_texture_source::packTexels: texel values (indices or stored
    colour bits, texel order) as an upload in that format carries them."""
    values = np.asarray(values, np.uint32).reshape(-1)
    bits = IMAGE_BITS[psm]
    if bits == 4:
        nibbles = np.zeros(-(-len(values) // 2) * 2, np.uint8)
        nibbles[:len(values)] = values & 0x0F
        return nibbles[0::2] | (nibbles[1::2] << 4)
    return np.ascontiguousarray(values.astype("<u4").view(np.uint8).reshape(-1, 4)[:, :bits // 8]).reshape(-1)


def image_indices(psm, data, w, h):
    """An indexed image's bytes back to one index a texel, (h, w) uint8."""
    data = np.frombuffer(bytes(data), np.uint8)
    if IMAGE_BITS[psm] == 4:
        data = np.stack([data & 0x0F, data >> 4], axis=1).reshape(-1)
    return np.ascontiguousarray(data[:w * h]).reshape(h, w)


# The renderer's dumps (TS_TEXTURE_DUMP): one .xtx a texture the pack had
# neither by source key nor by decoded key, written to
# E:\TimeSplitters\texdump\<decoded key>.xtx. Layout (little-endian): 64
# bytes: char magic[4] "XTX1"; u32 version 1; u16 width; u16 height; u8
# psm; u8 cpsm; u8 flags (bit0 indexed); u8 mode (palette part: 0 none, 1
# CLUT buffer hash, 2 paletteKey, 3 texaKey); u64 decoded key; u64 image
# key; u64 palette part; u64 exact key; u32 palette entries (0, 16, 256);
# u32 image bytes; u32 TEXA (ta0 | ta1 << 8 | aem << 16); u32 reserved;
# then the decoded texels (RGBA8, GS alpha), the image bytes, the palette
# as decoded (RGBA8).
XTX = struct.Struct("<4sIHHBBBBQQQQIIII")


class XboxDump:
    pass


def read_xbox_dumps(folders):
    """The renderer's dumps whose every key re-hashes to what it wrote."""
    found, bad = [], 0
    for folder in folders:
        for name in sorted(os.listdir(folder)):
            if not name.lower().endswith(".xtx"):
                continue
            data = open(os.path.join(folder, name), "rb").read()
            if len(data) < XTX.size:
                bad += 1
                continue
            (magic, version, w, h, psm, cpsm, flags, mode, decoded, image, part, exact,
             entries, nbytes, texa, _) = XTX.unpack_from(data, 0)
            if magic != b"XTX1" or version != 1 or psm not in IMAGE_BITS or w & (w - 1) or h & (h - 1) or not w or not h:
                bad += 1
                continue
            at = XTX.size
            rgba_end, image_end = at + w * h * 4, at + w * h * 4 + nbytes
            if nbytes != (w * h * IMAGE_BITS[psm] + 7) // 8 or len(data) != image_end + entries * 4:
                bad += 1
                continue
            rgba = np.frombuffer(data[at:rgba_end], "<u4").reshape(h, w)
            raw = np.frombuffer(data[rgba_end:image_end], np.uint8)
            palette = np.frombuffer(data[image_end:], "<u4")
            expected = {MODE_NONE: 0, MODE_TEXA: texa_key(texa & 0xFF, (texa >> 8) & 0xFF, texa >> 16)}
            if mode == MODE_CLUT and entries == 256:
                expected[MODE_CLUT] = hash_clut(palette)
            if mode == MODE_PALETTE and entries in (16, 256):
                expected[MODE_PALETTE] = palette_key(palette)
            if (pc_keys([rgba])[0] != decoded or source_image_keys([(psm, w, h, raw)])[0] != image or
                    expected.get(mode) != part or exact_key(image, part) != exact):
                bad += 1
                continue
            dump = XboxDump()
            dump.name = "xbox dump %s" % name
            dump.rgba, dump.psm, dump.image, dump.part = rgba, psm, image, part
            indexed = bool(flags & 1)
            dump.index_levels = [image_indices(psm, raw, w, h)] if indexed else None
            full = np.zeros(256, np.uint32)
            if indexed and entries:
                full[:] = palette[np.arange(256) % entries]
            dump.palette = full if indexed else None
            found.append(dump)
    if bad:
        print("[xtp] %d Xbox dumps whose keys do not re-hash, or of a layout this tool does not know; skipped" % bad)
    return found


def index_chain(index_levels):
    """An index texture's levels to 1x1: the game's own, then the top-left
    index of each 2x2 (an index is not averaged)."""
    levels = list(index_levels)
    while levels[-1].shape != (1, 1):
        last = levels[-1]
        levels.append(np.ascontiguousarray(last[::2 if last.shape[0] > 1 else 1, ::2 if last.shape[1] > 1 else 1]))
    return levels


def stored_level_bytes(fmt, w, h):
    if fmt in (FMT_DXT1, FMT_DXT5):
        return ((w + 3) // 4) * ((h + 3) // 4) * (8 if fmt == FMT_DXT1 else 16)
    return w * h * {FMT_ARGB8888: 4, FMT_ARGB1555: 2, FMT_I8: 1}[fmt]


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
    parser.add_argument("--source-keys", action="store_true",
                        help="write format version 2: the entries also by source key (TS_TEXTURE_SOURCE_KEYS)")
    parser.add_argument("--variant-keys", action="store_true",
                        help="also the indices-only keys, so the Xbox logs palettes the pack lacks "
                             "(implies --source-keys; 16 bytes of the Xbox's memory a texture)")
    parser.add_argument("--variants", action="append", default=[],
                        help="an Xbox log with [TS:texvariant] lines: add those palettes of known indices "
                             "(implies --variant-keys; may be given more than once)")
    parser.add_argument("--xbox-dump", action="append", default=[],
                        help="a folder of the Xbox's texture dumps (.xtx, TS_TEXTURE_DUMP): add those textures, "
                             "any format (implies --source-keys; may be given more than once)")
    parser.add_argument("--palette-textures", action="store_true",
                        help="also each indexed texture as 8-bit indices, which the Xbox draws with any palette "
                             "(implies --source-keys)")
    parser.add_argument("--preload-bytes", type=int, default=0,
                        help="preload each entry's largest level of at most this many bytes (multiples of 128; "
                             "the Xbox keeps them all in memory: 128 a texture), drawn while the entry loads")
    parser.add_argument("--preload-palette-textures", action="store_true",
                        help="preloads for the --palette-textures entries too")
    args = parser.parse_args()
    args.variant_keys = args.variant_keys or bool(args.variants)
    args.source_keys = (args.source_keys or args.variant_keys or args.palette_textures or bool(args.xbox_dump) or
                        args.preload_bytes > 0)
    if args.preload_bytes < 0 or args.preload_bytes % ALIGN:
        sys.exit("--preload-bytes must be a multiple of %d" % ALIGN)
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
    for name, kind, levels, source in sources:
        h, w = levels[0].shape
        if w & (w - 1) or h & (h - 1):
            skipped["non-power-of-two"] += 1
        else:
            pow2.append((name, kind, levels, source))
    # Source keys (--source-keys): each texture's image key, and for the
    # indexed ones the palettes the Xbox logged for the same indices
    # (--variants), expanded here as textures of their own.
    image_keys, parts = [], []  # parts: a palette part, None for its CLUT buffer's hash
    variants_added = dumps_added = 0
    if args.source_keys:
        image_keys = source_image_keys([(src[0], lv[0].shape[1], lv[0].shape[0],
                                         image_bytes(src[0], src[1][0] if src[0] == PSM_T8 else lv[0]))
                                        for _, _, lv, src in pow2])
        parts = [None if src[0] == PSM_T8 else 0 for _, _, _, src in pow2]
        if args.variants:
            by_image = {}
            for item, image in zip(pow2, image_keys):
                if item[3][0] == PSM_T8:
                    by_image.setdefault(image, item)
            for (image, clut), (w, h, palette) in sorted(read_variants(args.variants).items()):
                base = by_image.get(image)
                if base is None or base[2][0].shape != (h, w):
                    print("[xtp] variant %016x/%016x: indices not in MISC.PAK; skipped" % (image, clut))
                    continue
                name, kind, _, (psm, index_levels, _) = base
                pow2.append(("%s (palette %016x)" % (name, clut), kind,
                             [palette[indices] for indices in index_levels], (psm, index_levels, palette)))
                image_keys.append(image)
                parts.append(None)
                variants_added += 1
        for dump in read_xbox_dumps(args.xbox_dump):
            pow2.append((dump.name, "XTX", [dump.rgba], (dump.psm, dump.index_levels, dump.palette)))
            image_keys.append(dump.image)
            parts.append(dump.part)
            dumps_added += 1
    keys = pc_keys([levels[0] for _, _, levels, _ in pow2])
    # Source key -> (kind, texture key). A key two different textures claim
    # (a hash collision) is dropped; an indices-only key keeps its first.
    # With --palette-textures an indices-only key names the index texture
    # (made below) instead.
    source_map, source_conflicts = {}, set()
    index_sources = {}  # indices-only key -> index levels (--palette-textures)
    cluts = iter(hash_cluts([src[2] for (_, _, _, src), part in zip(pow2, parts) if part is None]))
    for (name, kind, levels, (psm, index_levels, palette)), key, image, part in zip(pow2, keys, image_keys, parts):
        claims = [(exact_key(image, next(cluts) if part is None else part), SOURCE_EXACT)]
        if index_levels is not None and args.palette_textures:
            index_sources.setdefault(image_only_key(image), index_levels)
        elif index_levels is not None and args.variant_keys:
            claims.append((image_only_key(image), SOURCE_IMAGE))
        for skey, skind in claims:
            known = source_map.get(skey)
            if known is None:
                source_map[skey] = (skind, key)
            elif known[0] != skind or (skind == SOURCE_EXACT and known[1] != key):
                source_conflicts.add(skey)
    for skey in source_conflicts:
        del source_map[skey]
    textures = {}
    order = []
    for (name, kind, levels, _), key in zip(pow2, keys):
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

    # 7. Index textures (--palette-textures): the indices, swizzled, to 1x1,
    #    filed under their indices-only key, which the source table gives
    #    as kind 1.
    index_textures = 0
    for ikey, index_levels in sorted(index_sources.items()):
        if ikey in textures or ikey in source_conflicts:
            continue
        tex = Texture(ikey, ["indices %016x" % ikey], [index_levels[0]])
        tex.format = FMT_I8
        tex.levels = index_chain(index_levels)
        tex.data = b"".join(swizzle(level).tobytes() for level in tex.levels)
        textures[ikey] = tex
        order.append(ikey)
        source_map[ikey] = (SOURCE_IMAGE, ikey)
        index_textures += 1

    # 8. Write the pack: index sorted by key, then (version 3) the source
    #    table sorted by key, the preload table and texels, data in
    #    MISC.PAK order. Source keys of textures that were left out (alpha
    #    above 0x80) go with them.
    t = time.time()
    index = []
    count = len(order)
    position = {key: i for i, key in enumerate(sorted(order))}
    source_records = [SOURCE.pack(skey, position[key], skind, 0, 0, 0)
                      for skey, (skind, key) in sorted(source_map.items()) if key in position]
    index_offset = HEADER.size + (EXTENSION.size if args.source_keys else 0)
    source_offset = index_offset + ENTRY.size * count
    # Preloads: each entry's largest level of at most --preload-bytes.
    preload_records, preload_data = [], bytearray()
    for key in sorted(order) if args.preload_bytes else []:
        tex = textures[key]
        if tex.format == FMT_I8 and not args.preload_palette_textures:
            continue
        at = 0
        for level in tex.levels:
            lh, lw = level.shape[:2]
            n = stored_level_bytes(tex.format, lw, lh)
            if n <= args.preload_bytes:
                preload_records.append(PRELOAD.pack(position[key], len(preload_data), lw, lh, tex.format, 0, 0, 0))
                preload_data += tex.data[at:at + n] + bytes(-n % ALIGN)
                break
            at += n
    preload_offset = source_offset + SOURCE.size * len(source_records)
    preload_data_offset = -(-(preload_offset + PRELOAD.size * len(preload_records)) // ALIGN) * ALIGN
    data_offset = preload_data_offset + len(preload_data)
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
    if args.source_keys:
        header = HEADER.pack(PACK_MAGIC, PACK_VERSION_SOURCES, HASH_VERSION, count, index_offset, data_offset,
                             len(source_records), source_offset if source_records else 0)
        header += EXTENSION.pack(len(preload_records), preload_offset if preload_records else 0,
                                 preload_data_offset if preload_records else 0, len(preload_data), 0, 0, 0, 0)
    else:
        header = HEADER.pack(PACK_MAGIC, PACK_VERSION, HASH_VERSION, count, HEADER.size, data_offset, 0, 0)
    head = header + b"".join(index_sorted) + b"".join(source_records) + b"".join(preload_records)
    head += b"\0" * (data_offset - len(preload_data) - len(head)) + bytes(preload_data)
    assert len(head) == data_offset
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
                if tex.format == FMT_I8:
                    continue  # no palette to show it with
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
    if args.source_keys:
        kinds = [SOURCE.unpack(r)[2] for r in source_records]
        print("[xtp]   source keys: %d exact, %d indices only, %d palette variants from logs, %d dropped as collisions" % (
            kinds.count(SOURCE_EXACT), kinds.count(SOURCE_IMAGE), variants_added, len(source_conflicts)))
        print("[xtp]   Xbox dumps %d, index textures %d, preloads %d (%d KB)" % (
            dumps_added, index_textures, len(preload_records), len(preload_data) // 1024))
    print("[xtp]   time: " + ", ".join("%s %.1f s" % item for item in clock.items()) + ", total %.1f s" % (time.time() - started))


if __name__ == "__main__":
    main()

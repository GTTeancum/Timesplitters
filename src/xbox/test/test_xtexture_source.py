"""Host checks of texture source keys (TS_TEXTURE_SOURCE_KEYS); no game assets.

python -m unittest discover -s src/xbox/test -p 'test_xtexture_source.py' -v
CXX may select a host compiler. Needs numpy and Pillow (tools/xtpbuild.py).

The Xbox renderer (src/xbox/xbox_texture_source.h) and the pack builder
(tools/xtpbuild.py) must give the same keys bit for bit: the renderer looks a
texture up by the key it works out from GS memory, the builder files it under
the key it works out from MISC.PAK. A synthetic MISC.PAK checks that the
version 3 source table names the right entries, also for logged palettes,
the renderer's dumps of other formats, index textures and preloads.
"""
import os
from pathlib import Path
import random
import shlex
import struct
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / "src/xbox/tools"))
try:
    import numpy as np
    import xtpbuild
except ImportError as missing:  # numpy or Pillow
    np = xtpbuild = None
    MISSING = str(missing)

HEADER = struct.Struct("<4s7I")
ENTRY = struct.Struct("<QIIHHBBBB")
SOURCE = struct.Struct("<QIBBBB")
EXTENSION = struct.Struct("<8I")
PRELOAD = struct.Struct("<IIHHBBBB")
XTX = struct.Struct("<4sIHHBBBBQQQQIIII")
FOUR_BIT, SIXTEEN = (0x14, 0x24, 0x2C), (0x02, 0x0A)


def apply_texa(cpsm, texel, ta0, ta1, aem):
    """GSCpuBackend's applyTexa, transcribed (test_shared_decode_unchanged)."""
    if cpsm == 0x00:
        return texel
    rgb_zero = (texel & 0xFFFFFF) == 0
    a = (texel >> 24) & 0xFF
    if cpsm == 0x01:
        a = 0 if aem and rgb_zero else ta0
    elif cpsm in SIXTEEN:
        a = ta1 if a & 0x80 else (0 if aem and rgb_zero else ta0)
    return (texel & 0xFFFFFF) | (a << 24)


def lookup_palette(clut, psm, cpsm, csm, csa, ta0, ta1, aem):
    """GSCpuBackend::LookupCLUT for every index, as DecodeTextureRows fills
    its palette (16 entries repeated for 4-bit formats)."""
    sixteen, four = cpsm in SIXTEEN, psm in FOUR_BIT
    base = (csa & (0x1F if sixteen else 0x0F)) << 4
    count = 16 if four else 256
    out = []
    for index in range(count):
        at = (base + index) & (0x1FF if sixteen else 0xFF)
        if not sixteen and csm == 0 and not four:
            at = min((index & 0xF0) + base, 240) + (index & 0x0F)
        if sixteen:
            c = int(clut[at])
            raw = ((c & 31) << 3) | (((c >> 5) & 31) << 11) | (((c >> 10) & 31) << 19) | (((c >> 15) & 1) << 31)
        else:
            raw = int(clut[at]) | (int(clut[at + 256]) << 16)
            if cpsm == 0x01:
                raw &= 0xFFFFFF
        out.append(apply_texa(cpsm, raw, ta0, ta1, aem))
    return count, np.array([out[i & 15] if i >= count else out[i] for i in range(256)], np.uint32)


def qpm_q8(w, h, palette, indices):
    return b"Q8\n%d %d\n255 v 256\n" % (w, h) + palette.astype("<u4").tobytes() + indices.astype(np.uint8).tobytes()


def qpm_q6(w, h, texels):
    return b"Q6\n%d %d\n255\n" % (w, h) + texels.astype("<u4").tobytes()


def pak(files):
    """A P4CK archive: u32 directory offset and size, 60-byte entries (name,
    offset, size, a word xtpbuild.read_pak does not read)."""
    body = bytearray(b"P4CK" + bytes(8))
    entries = []
    for name, data in files:
        entries.append((name, len(body), len(data)))
        body += data
    directory = b"".join(name.encode().ljust(48, b"\0") + struct.pack("<III", at, n, 0) for name, at, n in entries)
    struct.pack_into("<II", body, 4, len(body), len(directory))
    return bytes(body + directory)


def read_pack(path, preloads=False):
    data = Path(path).read_bytes()
    magic, version, _, count, index_offset, _, source_count, source_offset = HEADER.unpack_from(data, 0)
    entries = [ENTRY.unpack_from(data, index_offset + i * ENTRY.size) for i in range(count)]
    sources = [SOURCE.unpack_from(data, source_offset + i * SOURCE.size) for i in range(source_count)] if version >= 2 else []
    if not preloads:
        return version, entries, sources
    found = []
    if version >= 3:
        n, at, data_at, nbytes = EXTENSION.unpack_from(data, HEADER.size)[:4]
        for i in range(n):
            entry, offset, w, h, fmt = PRELOAD.unpack_from(data, at + i * PRELOAD.size)[:5]
            found.append((entry, w, h, fmt, data[data_at + offset:data_at + offset + xtpbuild.stored_level_bytes(fmt, w, h)]))
    return version, entries, sources, found, data


@unittest.skipIf(xtpbuild is None, "numpy and Pillow needed" if xtpbuild is None else "")
class TextureSourceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temp = tempfile.TemporaryDirectory(prefix="ts-xtsrc-test-")
        cls.addClassCleanup(cls.temp.cleanup)
        cls.folder = Path(cls.temp.name)
        cls.exe = cls.folder / "texture_source_test"
        command = shlex.split(os.environ.get("CXX", "c++")) + ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror",
                  str(ROOT / "src/xbox/test/texture_pack_host/texture_source_test.cpp"), "-o", str(cls.exe)]
        built = subprocess.run(command, capture_output=True, text=True, timeout=60)
        if built.returncode:
            raise RuntimeError("host key build failed:\n" + built.stdout + built.stderr)

    def host(self, lines):
        cases = self.folder / "cases.txt"
        cases.write_text("\n".join(lines) + "\n")
        result = subprocess.run([str(self.exe), str(cases)], capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 0, result.stderr)
        return [int(v, 16) for v in result.stdout.split()]

    def test_image_keys_agree_in_any_pieces(self):
        rng = random.Random(7)
        images, lines = [], []
        for psm, w, h in [(0x13, 1, 1), (0x13, 3, 5), (0x13, 8, 8), (0x13, 64, 32), (0x00, 1, 1), (0x00, 4, 4),
                          (0x00, 16, 8), (0x13, 8, 8), (0x00, 2, 1)]:
            data = bytes(rng.randrange(256) for _ in range(w * h * (1 if psm == 0x13 else 4)))
            images.append((psm, w, h, np.frombuffer(data, np.uint8)))
            for chunk in (1, 3, 4, 16, 1 << 20):
                lines.append("image %d %d %d %d %s" % (psm, w, h, chunk, data.hex()))
        expected = xtpbuild.source_image_keys(images)
        got = self.host(lines)
        for i, key in enumerate(expected):
            self.assertEqual(got[5 * i:5 * i + 5], [key] * 5, "image %d" % i)
        self.assertEqual(len(set(expected)), len(expected), "different images, formats or sizes share a key")

    def test_clut_and_combined_keys_agree(self):
        rng = np.random.default_rng(11)
        palettes = [rng.integers(0, 2 ** 32, 256, dtype=np.uint64).astype(np.uint32) for _ in range(3)]
        buffers = [np.concatenate([p & 0xFFFF, p >> 16]).astype("<u2").tobytes().hex() for p in palettes]
        self.assertEqual(self.host(["clut " + b for b in buffers]), xtpbuild.hash_cluts(palettes))
        image, clut = 0x0123456789ABCDEF, 0xFEDCBA9876543210
        self.assertEqual(self.host(["exact %x %x" % (image, clut), "exact %x 0" % image, "only %x x" % image]),
                         [xtpbuild.exact_key(image, clut), xtpbuild.exact_key(image, 0), xtpbuild.image_only_key(image)])

    def test_shared_clut_hash_unchanged(self):
        # The renderer's CLUT hash is GSCpuBackend::HashClut's Xbox branch;
        # the builder and the host copy above follow these lines.
        text = (ROOT / "source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_cpu_backend.cpp").read_text()
        body = text[text.index("uint64_t GSCpuBackend::HashClut"):]
        body = body[:body.index("#else")]
        for line in ("uint32_t a = 2166136261u, b = 0x9E3779B9u;", "std::memcpy(&word, clut + 2u * i, 4);",
                     "a = (a ^ word) * 16777619u;", "b = (b ^ word) * 0x85EBCA6Bu + (b >> 13);",
                     "return (uint64_t(a) << 32) | b;"):
            self.assertIn(line, body)

    def build(self, files, *options):
        source = self.folder / "MISC.PAK"
        source.write_bytes(pak(files))
        out = self.folder / "textures.xtp"
        result = subprocess.run([sys.executable, str(ROOT / "src/xbox/tools/xtpbuild.py"), "--jobs", "1", *options,
                                 str(source), str(out)], capture_output=True, text=True, timeout=300)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        return read_pack(out)

    def test_pack_source_table_names_the_decoded_entries(self):
        rng = np.random.default_rng(5)
        palette = (rng.integers(0, 2 ** 24, 256, dtype=np.uint64).astype(np.uint32) | np.uint32(0x80 << 24))
        other = (rng.integers(0, 2 ** 24, 256, dtype=np.uint64).astype(np.uint32) | np.uint32(0x80 << 24))
        a = rng.integers(0, 256, (8, 8), dtype=np.uint64).astype(np.uint8)
        b = rng.integers(0, 256, (16, 16), dtype=np.uint64).astype(np.uint8)
        texels = rng.integers(0, 2 ** 24, (4, 4), dtype=np.uint64).astype(np.uint32) | np.uint32(0x80 << 24)
        files = [("textures/0001.qpm", qpm_q8(8, 8, palette, a)), ("textures/0002.qpm", qpm_q8(16, 16, other, b)),
                 ("textures/0003.qpm", qpm_q6(4, 4, texels))]
        version, entries, sources = self.build(files)
        self.assertEqual((version, sources), (1, []))

        # What the Xbox would work out from GS memory, by the host code.
        def buffer(p):
            return np.concatenate([p & 0xFFFF, p >> 16]).astype("<u2").tobytes().hex()
        img_a, img_b, img_c, clut_p, clut_o = self.host([
            "image 19 8 8 4 " + a.tobytes().hex(), "image 19 16 16 64 " + b.tobytes().hex(),
            "image 0 4 4 16 " + texels.astype("<u4").tobytes().hex(), "clut " + buffer(palette), "clut " + buffer(other)])
        exact_a, exact_b, exact_c, only_a = self.host(["exact %x %x" % (img_a, clut_p), "exact %x %x" % (img_b, clut_o),
                                                       "exact %x 0" % img_c, "only %x x" % img_a])
        decoded = dict(zip(("a", "b", "c"), xtpbuild.pc_keys([palette[a], other[b], texels])))

        version, entries, sources = self.build(files, "--source-keys")
        self.assertEqual(version, 3)
        keys = [e[0] for e in entries]
        table = {key: (keys[entry], kind) for key, entry, kind, *_ in sources}
        self.assertEqual(table, {exact_a: (decoded["a"], 0), exact_b: (decoded["b"], 0), exact_c: (decoded["c"], 0)})

        # A palette the Xbox logged for a's indices: a texture of its own.
        swap = (rng.integers(0, 2 ** 24, 256, dtype=np.uint64).astype(np.uint32) | np.uint32(0x80 << 24))
        (clut_s,) = self.host(["clut " + buffer(swap)])
        (exact_s,) = self.host(["exact %x %x" % (img_a, clut_s)])
        log = self.folder / "xbox.log"
        with open(log, "w") as f:
            f.write("[TS:xbox] unrelated line\n")
            for part in range(8):
                entries_hex = "".join("%08x" % v for v in swap[part * 32:part * 32 + 32])
                f.write("[TS:texvariant] %016x %016x 8x8 %d/8 %s\n" % (img_a, clut_s, part, entries_hex))
            # A palette whose entries do not hash to its key is not used.
            for part in range(8):
                f.write("[TS:texvariant] %016x %016x 8x8 %d/8 %s\n" % (img_a, clut_s ^ 1, part, "0" * 256))
        version, entries, sources = self.build(files, "--variants", str(log))
        (swapped,) = xtpbuild.pc_keys([swap[a]])
        keys = [e[0] for e in entries]
        self.assertEqual(sorted(keys), sorted(list(decoded.values()) + [swapped]))
        table = {key: (keys[entry], kind) for key, entry, kind, *_ in sources}
        self.assertEqual(table[exact_s], (swapped, 0))
        self.assertEqual(table[exact_a], (decoded["a"], 0))
        self.assertEqual(table[only_a][1], 1)
        self.assertEqual(len(table), 6)  # three exact, a's swap, and two indices-only (a and b)


    def test_every_format_packs_and_hashes_alike(self):
        rng = np.random.default_rng(3)
        cases, lines = [], []
        for psm in sorted(xtpbuild.IMAGE_BITS):
            for w, h in ((1, 1), (8, 4), (16, 16)):
                values = rng.integers(0, 2 ** 32, w * h, dtype=np.uint64).astype(np.uint32)
                cases.append((psm, w, h, xtpbuild.pack_texels(psm, values)))
                for chunk in (1, 3, 7, 1 << 20):
                    lines.append("pack %d %d %d %d %s" % (psm, w, h, chunk, values.astype("<u4").tobytes().hex()))
        expected = xtpbuild.source_image_keys(cases)
        got = self.host(lines)
        for i, key in enumerate(expected):
            self.assertEqual(got[4 * i:4 * i + 4], [key] * 4, "case %d (psm %#x)" % (i, cases[i][0]))
        self.assertEqual(len(set(expected)), len(expected))

    def test_decoded_palettes_agree_with_lookup_clut(self):
        rng = np.random.default_rng(9)
        lines, expected = [], []
        for psm in (0x13, 0x1B, 0x14, 0x24):
            for cpsm in (0x00, 0x01, 0x02, 0x0A):
                for csm in (0, 1):
                    clut = rng.integers(0, 2 ** 16, 512, dtype=np.uint64).astype(np.uint16)
                    csa, ta0, ta1, aem = (int(v) for v in rng.integers(0, 32, 1).tolist() + rng.integers(0, 256, 2).tolist() +
                                          rng.integers(0, 2, 1).tolist())
                    lines.append("palette %d %d %d %d %d %d %d %s" % (psm, cpsm, csm, csa, ta0, ta1, aem,
                                                                     clut.astype("<u2").tobytes().hex()))
                    count, entries = lookup_palette(clut, psm, cpsm, csm, csa, ta0, ta1, aem)
                    last = int(entries[count - 1])
                    a = min((last >> 24) * 2, 255)
                    expected += [count, xtpbuild.palette_key(entries[:count]), xtpbuild.palette_key(entries),
                                 (a << 24) | ((last & 0xFF) << 16) | (last & 0xFF00) | ((last >> 16) & 0xFF)]
        self.assertEqual(self.host(lines), expected)
        self.assertEqual(self.host(["texa 64 128 1"]), [xtpbuild.texa_key(64, 128, 1)])

    def test_shared_decode_unchanged(self):
        # decodePalette and lookup_palette above follow LookupCLUT and
        # applyTexa; a change there must change them too.
        text = (ROOT / "source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_cpu_backend.cpp").read_text()
        for line in ("const uint32_t clutBase = (static_cast<uint32_t>(csa) & csaMask) << 4u;",
                     "uint32_t clutIndex = (clutBase + sourceIndex) & (sixteenBit ? 0x1FFu : 0x0FFu);",
                     "if (!sixteenBit && csm == 0u && isEightBitIndexedPsm(sourcePsm))",
                     "const uint32_t block = std::min((sourceIndex & 0xF0u) + clutBase, 240u);",
                     "return applyTexa(state.texa, cpsm, raw & 0x00FFFFFFu);",
                     "return applyTexa(state.texa, cpsm, Rgba5551ToRgba8888(m_clut[clutIndex]));",
                     "a = (texa.aem && rgbZero) ? 0u : texa.ta0;", "a = texa.ta1;",
                     "u32 a = ((c >> 15) & 0x01) << 7;", "palette[i] = palette[i & 15];"):
            self.assertIn(line, text)

    def test_dumps_index_textures_and_preloads(self):
        rng = np.random.default_rng(13)
        opaque = np.uint32(0x80 << 24)
        palette = rng.integers(0, 2 ** 24, 256, dtype=np.uint64).astype(np.uint32) | opaque
        a = rng.integers(0, 256, (8, 8), dtype=np.uint64).astype(np.uint8)
        b = rng.integers(0, 256, (32, 32), dtype=np.uint64).astype(np.uint8)
        files = [("textures/0001.qpm", qpm_q8(8, 8, palette, a)), ("textures/0002.qpm", qpm_q8(32, 32, palette, b))]
        dumps = self.folder / "texdump"
        dumps.mkdir(exist_ok=True)

        def write_dump(name, w, h, psm, cpsm, mode, rgba, values, part, entries, texa=0):
            raw = xtpbuild.pack_texels(psm, values)
            (image,) = self.host(["image %d %d %d 5 %s" % (psm, w, h, raw.tobytes().hex())])
            (exact,) = self.host(["exact %x %x" % (image, part)])
            (decoded,) = xtpbuild.pc_keys([rgba])
            head = XTX.pack(b"XTX1", 1, w, h, psm, cpsm, 1 if psm in FOUR_BIT + (0x13, 0x1B) else 0, mode,
                            decoded, image, part, exact, len(entries), len(raw), texa, 0)
            (dumps / name).write_bytes(head + rgba.astype("<u4").tobytes() + raw.tobytes() +
                                       np.asarray(entries, "<u4").tobytes())
            return decoded, image, exact

        # A 4-bit texture with a 16-entry palette (paletteKey), and 16-bit
        # colour (texaKey), neither in MISC.PAK.
        small = rng.integers(0, 2 ** 24, 16, dtype=np.uint64).astype(np.uint32) | opaque
        nibbles = rng.integers(0, 16, (8, 8), dtype=np.uint64).astype(np.uint32)
        clut = np.zeros(512, np.uint16)
        clut[:16], clut[256:272] = small & 0xFFFF, small >> 16
        _, key16 = self.host(["palette 20 0 0 0 0 0 0 " + clut.astype("<u2").tobytes().hex()])[:2]
        four = write_dump("four.xtx", 8, 8, 0x14, 0x00, 2, small[nibbles], nibbles, key16, small)
        colour = rng.integers(0, 2 ** 16, (8, 8), dtype=np.uint64).astype(np.uint32)
        rgba = np.array([[xtpbuild_texa_16(int(c), 0x40, 0x80) for c in row] for row in colour], np.uint32)
        (tkey,) = self.host(["texa 64 128 0"])
        sixteen = write_dump("sixteen.xtx", 8, 8, 0x02, 0x00, 3, rgba, colour, tkey, [], 0x40 | (0x80 << 8))
        bad = bytearray((dumps / "four.xtx").read_bytes())
        bad[XTX.size] ^= 1  # a texel changed: the decoded key no longer matches
        (dumps / "bad.xtx").write_bytes(bytes(bad))

        out = self.folder / "v3.xtp"
        source = self.folder / "MISC.PAK"
        source.write_bytes(pak(files))
        result = subprocess.run([sys.executable, str(ROOT / "src/xbox/tools/xtpbuild.py"), "--jobs", "1", "--source-keys",
                                 "--palette-textures", "--preload-bytes", "128", "--preload-palette-textures",
                                 "--xbox-dump", str(dumps), str(source), str(out)], capture_output=True, text=True, timeout=300)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertIn("1 Xbox dumps whose keys do not re-hash", result.stdout)
        version, entries, sources, preloads, data = read_pack(out, True)
        self.assertEqual(version, 3)
        keys = [e[0] for e in entries]
        table = {key: (entry, kind) for key, entry, kind, *_ in sources}
        # The dumps' exact keys name their decoded entries.
        for decoded, image, exact in (four, sixteen):
            self.assertEqual(keys[table[exact][0]], decoded)
            self.assertEqual(table[exact][1], 0)
        # Indices only: index textures (format 4) holding the indices, mips to 1x1.
        img_a, img_b = self.host(["image 19 8 8 4 " + a.tobytes().hex(), "image 19 32 32 4 " + b.tobytes().hex()])
        only = self.host(["only %x x" % img_a, "only %x x" % img_b, "only %x x" % four[1]])
        for ikey, indices in zip(only, (a, b, nibbles.astype(np.uint8))):
            entry, kind = table[ikey]
            self.assertEqual(kind, 1)
            key, offset, size, w, h, fmt, levels, flags, _ = entries[entry]
            self.assertEqual((key, fmt, w, h, levels), (ikey, 4, indices.shape[1], indices.shape[0], len(xtpbuild.level_sizes(w, h, False))))
            self.assertEqual(data[offset:offset + w * h], xtpbuild.swizzle(indices).tobytes())
        # Preloads: one a level of every entry, its own bytes, at most 128.
        self.assertEqual(sorted(p[0] for p in preloads), list(range(len(entries))))
        for entry, w, h, fmt, texels in preloads:
            key, offset, size, ew, eh, efmt, levels, *_ = entries[entry]
            self.assertEqual(fmt, efmt)
            at, (lw, lh) = offset, (ew, eh)
            for lw, lh in xtpbuild.level_sizes(ew, eh, efmt in (0, 1))[:levels]:
                n = xtpbuild.stored_level_bytes(efmt, lw, lh)
                if (lw, lh) == (w, h):
                    break
                at += n
            self.assertEqual((lw, lh), (w, h))
            self.assertLessEqual(len(texels), 128)
            self.assertEqual(texels, data[at:at + len(texels)])


def xtpbuild_texa_16(c, ta0, ta1):
    """A CT16 texel decoded (Rgba5551ToRgba8888, then TEXA; aem 0)."""
    raw = ((c & 31) << 3) | (((c >> 5) & 31) << 11) | (((c >> 10) & 31) << 19) | (((c >> 15) & 1) << 31)
    return apply_texa(0x02, raw, ta0, ta1, 0)


if __name__ == "__main__":
    unittest.main()

"""Host checks of texture source keys (TS_TEXTURE_SOURCE_KEYS); no game assets.

python -m unittest discover -s src/xbox/test -p 'test_xtexture_source.py' -v
CXX may select a host compiler. Needs numpy and Pillow (tools/xtpbuild.py).

The Xbox renderer (src/xbox/xbox_texture_source.h) and the pack builder
(tools/xtpbuild.py) must give the same keys bit for bit: the renderer looks a
texture up by the key it works out from GS memory, the builder files it under
the key it works out from MISC.PAK. A synthetic MISC.PAK checks that the
version 2 source table names the right entries, also for logged palettes.
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


def read_pack(path):
    data = Path(path).read_bytes()
    magic, version, _, count, index_offset, _, source_count, source_offset = HEADER.unpack_from(data, 0)
    entries = [ENTRY.unpack_from(data, index_offset + i * ENTRY.size) for i in range(count)]
    sources = [SOURCE.unpack_from(data, source_offset + i * SOURCE.size) for i in range(source_count)] if version == 2 else []
    return version, entries, sources


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
        self.assertEqual(version, 2)
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


if __name__ == "__main__":
    unittest.main()

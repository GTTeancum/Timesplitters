"""Host-only tests; synthetic inputs, no game assets or Xbox SDK required.

The differential reference is extracted from the repository's production
scalar decoder and GSXfVertex declaration, not a second hand-written port.
Extraction deliberately fails if those source boundaries change. This does
not compile or test the full Xbox renderer or its SSE/ring paths.
"""
from __future__ import annotations

import importlib.util
import os
from pathlib import Path
import random
import shlex
import struct
import subprocess
import sys
import tempfile
import unittest
import zlib

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
REF_ROOT = Path(os.environ.get("TS_XMESH_REFERENCE_ROOT", ROOT))
spec = importlib.util.spec_from_file_location("xmeshbuild", XBOX / "tools/xmeshbuild.py")
mesh = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mesh)


def capture(kind=0, top=256, counts=(3, 4, 5), seed=0):
    rng = random.Random(seed)
    data = bytearray(rng.getrandbits(8) for _ in range(mesh.VU_BYTES))
    for i, count in enumerate(counts):
        # Smooth shaded textured triangle strip; retain every tag bit.
        prim = 4 | (1 << 3) | (1 << 4)
        mesh.U32X4.pack_into(data, (top + i) * 16,
                            count | (0x8000 if i + 1 == len(counts) else 0),
                            (3 << 28) | (prim << 15) | (1 << 14), 0x512, 0)
    base, rgba, st, normal, bone = mesh.LAYOUTS[kind]
    for i in range(sum(counts)):
        if st is not None:
            # +0, -0, subnormal, finite, infinity and NaN Q values.
            q = (0, 0x80000000, 1, 0x3F000000, 0x7F800000, 0x7FC01234)[i % 6]
            struct.pack_into("<I", data, (top + base + st + i) * 16 + 8, q)
        if bone is not None:
            struct.pack_into("<I", data, (top + base + bone + i) * 16,
                             (0, 1, 2, 3, 0xFFFF, 0xABCD0001)[i % 6])
    return bytes(data)


def crc_fixed(data):
    data = bytearray(data)
    struct.pack_into("<I", data, 48, 0)
    struct.pack_into("<I", data, 48, zlib.crc32(data))
    return bytes(data)


class ConverterTests(unittest.TestCase):
    def test_layout_and_determinism(self):
        self.assertEqual((mesh.HEADER.size, mesh.STRIP.size, mesh.VERTEX.size), (96, 32, 44))
        for kind in range(4):
            data = capture(kind)
            packed = mesh.convert(data, kind, 256)
            self.assertEqual(packed, mesh.convert(data, kind, 256))
            self.assertEqual(mesh.HEADER.unpack_from(packed)[5:7], (3, 12))
            self.assertEqual(packed, crc_fixed(packed))
            self.assertEqual(packed[56:88], mesh.hashlib.sha256(data).digest())

    def test_source_is_unchanged(self):
        data = bytearray(capture())
        before = bytes(data)
        mesh.convert(data, 0, 256)
        self.assertEqual(data, before)

    def test_q_and_color(self):
        data = bytearray(capture(counts=(3,)))
        mesh.U32X4.pack_into(data, (256 + 24 + 64) * 16, 0xFFFFFF80, 0xABCDEF12, 0x3456, 0xFFFFFF80)
        packed = mesh.convert(data, 0, 256)
        offset = mesh.HEADER.unpack_from(packed)[8]
        first = mesh.VERTEX.unpack_from(packed, offset)
        self.assertEqual(first[6], 0x80801256)
        self.assertEqual(first[9], 0x3F800000)
        self.assertEqual(mesh.VERTEX.unpack_from(packed, offset + 44)[9], 0x3F800000)
        self.assertEqual(mesh.VERTEX.unpack_from(packed, offset + 88)[9], 1)

    def test_bad_lengths(self):
        for size in (0, 16383, 16385):
            with self.assertRaises(ValueError):
                mesh.convert(bytes(size), 0, 0)

    def test_bad_kind_and_top(self):
        for kind, top in ((-1, 0), (4, 0), (0, -1), (0, 1024), (0, 2**32)):
            with self.assertRaises(ValueError):
                mesh.convert(capture(), kind, top)

    def test_bad_tags(self):
        for word, value in ((0, 0), (0, 2), (0, 65), (1, 0),
                            (1, (3 << 28) | (4 << 15)),
                            (1, (3 << 28) | (3 << 15) | (1 << 14)),
                            (1, (3 << 28) | (4 << 15) | (1 << 14) | (1 << 26))):
            data = bytearray(capture())
            struct.pack_into("<I", data, 256 * 16 + word * 4, value)
            with self.assertRaises(ValueError):
                mesh.convert(data, 0, 256)

    def test_wrap_and_boundary(self):
        for kind in range(4):
            base = mesh.LAYOUTS[kind][0]
            last = 128 if kind < 2 else 144
            top = 1024 - base - last - 3
            mesh.convert(capture(kind, top, (3,)), kind, top)
            data = bytearray(mesh.VU_BYTES)
            mesh.U32X4.pack_into(data, (top + 1) * 16, 0x8003, (3 << 28) | (4 << 15) | (1 << 14), 0x512, 0)
            with self.assertRaises(ValueError):
                mesh.convert(data, kind, top + 1)

    def test_missing_eop_fails_whole_run(self):
        data = bytearray(capture(counts=(3,)))
        struct.pack_into("<I", data, 256 * 16, 3)
        struct.pack_into("<I", data, 257 * 16, 0)
        with self.assertRaises(ValueError):
            mesh.convert(data, 0, 256)

    def test_cli_and_no_clobber(self):
        with tempfile.TemporaryDirectory() as tmp:
            source, out = Path(tmp) / "input.bin", Path(tmp) / "output.xmesh"
            source.write_bytes(capture())
            cmd = [sys.executable, str(XBOX / "tools/xmeshbuild.py"), str(source), str(out), "--kind", "plain", "--top", "0x100"]
            result = subprocess.run(cmd, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            original = out.read_bytes()
            self.assertEqual(original, mesh.convert(source.read_bytes(), 0, 256))
            source.write_bytes(b"bad input")
            self.assertNotEqual(subprocess.run(cmd, capture_output=True).returncode, 0)
            self.assertEqual(out.read_bytes(), original)
            cmd[3] = str(source)
            self.assertNotEqual(subprocess.run(cmd, capture_output=True).returncode, 0)
            self.assertEqual(source.read_bytes(), b"bad input")


def between(text, start, end):
    return text[text.index(start):text.index(end, text.index(start))]


class NativeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        # Compile actual production source excerpts, unchanged, plus the reader.
        decoder = (REF_ROOT / "project/game/vu1_native_xf.h").read_text()
        backend = (REF_ROOT / "source/PS2Recomp/ps2xRuntime/include/runtime/gs/gs_backend.h").read_text()
        vertex = between(backend, "struct GSXfVertex\n", "struct GSXfConstants\n")
        layouts = between(decoder, "    constexpr uint32_t kDataQwords", "    // The record is written")
        reference = between(decoder, "    inline void decodeXfVertex(", "    // The strip's n vertices")
        cls.temp = tempfile.TemporaryDirectory()
        cls.addClassCleanup(cls.temp.cleanup)
        cls.dir = Path(cls.temp.name)
        cls.probe = cls.dir / "probe"
        source = cls.dir / "probe.cpp"
        source.write_text('''#include <algorithm>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include "xbox_mesh_pack.h"
''' + vertex + '\nnamespace ts_native_xf {\n' + layouts + reference + '\n}\n' + r'''
int main(int argc, char **argv) {
    if (argc < 3) return 2;
    std::ifstream in(argv[2], std::ios::binary);
    if (!in) return 2;
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(in)), {});
    if (std::string(argv[1]) == "decode") {
        if (argc != 7 || data.size() != 16384) return 2;
        const unsigned kind = std::stoul(argv[3]), vi = std::stoul(argv[4]), n = std::stoul(argv[5]);
        if (kind > 3 || vi >= 1024 || n > 64) return 2;
        std::ofstream out(argv[6], std::ios::binary);
        for (unsigned i = 0; i < n; ++i) {
            GSXfVertex v{};
            ts_native_xf::decodeXfVertex(ts_native_xf::kLayouts[kind], data.data(), vi, i, &v);
            out.write(reinterpret_cast<const char *>(&v), sizeof(v));
        }
        return out ? 0 : 2;
    }
    ts_xmesh::View view;
    if (std::string(argv[1]) == "check")
        return ts_xmesh::open(data.data(), data.size(), view) == ts_xmesh::Error::None ? 0 : 1;
    if (std::string(argv[1]) != "audit") return 2;
    if (ts_xmesh::open(data.data(), data.size(), view) != ts_xmesh::Error::None) return 3;
    for (size_t n = 0; n < data.size(); ++n) {
        if (ts_xmesh::open(data.data(), n, view) == ts_xmesh::Error::None) return 4;
        if (view.vertices || view.strips || view.sourceSha256 || view.vertexCount || view.stripCount) return 5;
    }
    for (size_t i = 0; i < data.size(); ++i) {
        data[i] ^= 1;
        if (ts_xmesh::open(data.data(), data.size(), view) == ts_xmesh::Error::None) return 6;
        data[i] ^= 1;
    }
    if (ts_xmesh::open(nullptr, data.size(), view) == ts_xmesh::Error::None) return 7;
    // Deliberately unaligned file storage must still be safe.
    std::vector<uint8_t> unaligned(data.size() + 1);
    std::copy(data.begin(), data.end(), unaligned.begin() + 1);
    if (ts_xmesh::open(unaligned.data() + 1, data.size(), view) != ts_xmesh::Error::None) return 8;
    // Fixed-seed mutations with a valid checksum exercise structural guards.
    uint32_t rng = 0x12345678;
    volatile uint32_t observed = 0; // keep validation observable under optimisation
    for (unsigned trial = 0; trial < 10000; ++trial) {
        auto changed = data;
        rng ^= rng << 13; rng ^= rng >> 17; rng ^= rng << 5;
        const size_t pos = rng % changed.size();
        changed[pos] ^= static_cast<uint8_t>((rng >> 24) | 1u);
        const uint32_t crc = ts_xmesh::checksum(changed.data(), changed.size());
        for (unsigned j = 0; j < 4; ++j) changed[48 + j] = static_cast<uint8_t>(crc >> (j * 8));
        const auto status = ts_xmesh::open(changed.data(), changed.size(), view);
        if (status == ts_xmesh::Error::None) {
            if (!view.vertices || !view.strips || !view.vertexCount || !view.stripCount) return 9;
        } else if (view.vertices || view.strips || view.sourceSha256 || view.vertexCount || view.stripCount) return 10;
        observed = observed + static_cast<uint32_t>(status) + view.vertexCount;
    }
    return 0;
}
''')
        cmd = shlex.split(os.environ.get("CXX", "c++"))
        cmd += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-I", str(XBOX)]
        cmd += shlex.split(os.environ.get("TS_XMESH_CXXFLAGS", ""))
        subprocess.run(cmd + [str(source), "-o", str(cls.probe)], check=True)

    def check_file(self, packed, expected=0, mode="check"):
        path = self.dir / "input.xmesh"
        path.write_bytes(packed)
        proc = subprocess.run([str(self.probe), mode, str(path)], capture_output=True, text=True)
        self.assertEqual(proc.stderr, "", proc.stderr) # a sanitizer exit=1 is NOT an expected rejection
        self.assertEqual(proc.returncode, expected, proc.stderr)

    def test_differential_all_layouts(self):
        for kind in range(4):
            for seed in range(12):
                data = capture(kind, seed=seed)
                source = self.dir / "vu.bin"
                source.write_bytes(data)
                packed = mesh.convert(data, kind, 256)
                fields = mesh.HEADER.unpack_from(packed)
                self.check_file(packed)
                for i in range(fields[5]):
                    first, count, vi, *_ = mesh.STRIP.unpack_from(packed, 96 + i * 32)
                    output = self.dir / "reference.bin"
                    subprocess.run([str(self.probe), "decode", str(source), str(kind), str(vi), str(count), str(output)], check=True)
                    start = fields[8] + first * 44
                    self.assertEqual(packed[start:start + count * 44], output.read_bytes(), (kind, seed, i))

    def test_truncation_corruption_unaligned_and_fuzz(self):
        for kind in range(4):
            self.check_file(mesh.convert(capture(kind), kind, 256), mode="audit")

    def test_structural_rejections_with_valid_crc(self):
        packed = mesh.convert(capture(), 0, 256)
        # Header and strip failures must not depend only on a bad CRC.
        for offset, value in ((8, 2), (12, 0xFFFFFFFF), (16, 4), (20, 1024),
                              (24, 0), (24, 65), (28, 0xFFFFFFFF), (32, 0),
                              (36, 0), (40, 48), (44, 0), (52, 1), (88, 1),
                              (96, 1), (100, 2), (100, 65), (104, 0xFFFFFFFF),
                              (108, 3), (112, 0x8003), (116, 0)):
            changed = bytearray(packed)
            struct.pack_into("<I", changed, offset, value)
            self.check_file(crc_fixed(changed), expected=1)
        self.check_file(packed + b"trailing", expected=1)


if __name__ == "__main__":
    unittest.main()

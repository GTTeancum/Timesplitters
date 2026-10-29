"""Synthetic VCU1 interoperability and negative tests; no copyrighted inputs.

Compile production header/hash/scalar-decoder excerpts from the checkout.
Synthetic microprogram identity is substituted only inside unit tests; the
shipped CLI has NO identity-override flag and rejects these fake programs.
"""
from __future__ import annotations

from contextlib import redirect_stderr, redirect_stdout
from dataclasses import replace
import io
import json
import os
from pathlib import Path
import random
import re
import shlex
import struct
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

XBOX = Path(__file__).resolve().parents[1]
ROOT = Path(os.environ.get("TS_XMESH_REFERENCE_ROOT", XBOX.parents[1]))
sys.path.insert(0, str(XBOX / "tools"))
import xmeshcapture as cap
import xmeshbuild as mesh

CODE = bytes((i * 17 + 31) & 255 for i in range(16384))
SYNTHETIC_HASH = cap.hash_program(CODE)


def snapshot(kind=0, top=256, counts=(3, 4, 5), seed=0):
    rng = random.Random(seed)
    data = bytearray(rng.getrandbits(8) for _ in range(mesh.VU_BYTES))
    for i, count in enumerate(counts):
        prim = 4 | (1 << 3) | (1 << 4)
        mesh.U32X4.pack_into(data, (top + i) * 16,
                            count | (0x8000 if i == len(counts) - 1 else 0),
                            (3 << 28) | (prim << 15) | (1 << 14), 0x512, 0)
    base, _, st, _, bone = mesh.LAYOUTS[kind]
    for i in range(sum(counts)):
        if st is not None:
            struct.pack_into("<I", data, (top + base + st + i) * 16 + 8,
                             (0, 0x80000000, 1, 0x3F000000, 0x7F800000, 0x7FC01234)[i % 6])
        if bone is not None:
            struct.pack_into("<I", data, (top + base + bone + i) * 16,
                             (0, 1, 2, 3, 0xFFFF, 0xABCD0001)[i % 6])
    # Valid bounded A+D state input: tag plus one register/value qword.
    mesh.U32X4.pack_into(data, (top + 216) * 16, 0x8001, 1 << 28, 0xE, 0)
    mesh.U32X4.pack_into(data, (top + 217) * 16, 0, 0, 0x06, 0)
    return bytes(data)


def recording(data=None, *, pc=0, top=256, code=CODE, state_size=640, itop=0, cycles=100000):
    data = snapshot() if data is None else data
    return cap.CAPTURE.pack(cap.CAPTURE_MAGIC, state_size, len(code), len(data), pc, top, itop, cycles) + bytes(state_size) + code + data


def record(kind=0, pc=None, data=None):
    pc = (0, 0xD20, 0x1AE0, 0x2800)[kind] if pc is None else pc
    return next(cap.records(io.BytesIO(recording(snapshot(kind) if data is None else data, pc=pc))))


class StreamTests(unittest.TestCase):
    def test_mixed_host_state_sizes_and_offsets(self):
        a, b = recording(state_size=1), recording(state_size=65536, pc=0x3520)
        values = list(cap.records(io.BytesIO(a + b)))
        self.assertEqual([v.index for v in values], [0, 1])
        self.assertEqual([v.offset for v in values], [0, len(a)])
        self.assertEqual([v.state_bytes for v in values], [1, 65536])
        self.assertEqual(values[1].code, CODE)
        self.assertEqual(values[1].data, snapshot())

    def test_partial_reads_without_seek(self):
        class TinyStream:
            def __init__(self, data): self.source = io.BytesIO(data)
            def read(self, n): return self.source.read(min(n, 3))
        self.assertEqual(list(cap.records(TinyStream(recording()))), list(cap.records(io.BytesIO(recording()))))

    def test_every_byte_truncation(self):
        # Small structurally valid record keeps exhaustive stream tests quick.
        data = recording(bytes(16), code=bytes(8), state_size=7)
        for length in range(len(data)):
            with self.subTest(length=length), self.assertRaises(cap.CaptureError):
                list(cap.records(io.BytesIO(data[:length])))
        self.assertEqual(len(list(cap.records(io.BytesIO(data)))), 1)

    def test_full_size_truncation_boundaries_and_trailing_junk(self):
        data = recording()
        for length in (31, 32, 32 + 639, 32 + 640, 32 + 640 + 16383, len(data) - 1):
            with self.assertRaises(cap.CaptureError):
                list(cap.records(io.BytesIO(data[:length])))
        for tail in (b"x", cap.CAPTURE.pack(0, 1, 8, 16, 0, 0, 0, 1)):
            with self.assertRaises(cap.CaptureError):
                list(cap.records(io.BytesIO(data + tail)))
        # Exact record boundary is legal: the format cannot detect missing later records.
        self.assertEqual(len(list(cap.records(io.BytesIO(data)))), 1)

    def test_bad_header_bounds_fail_before_body_reads(self):
        valid = [cap.CAPTURE_MAGIC, 1, 8, 16, 0, 0, 0, 1]
        for field, value in ((0, 0), (1, 0), (1, 65537), (1, 0xFFFFFFFF),
                             (2, 0), (2, 7), (2, 16392), (2, 0xFFFFFFFF),
                             (3, 0), (3, 15), (3, 16400), (3, 0xFFFFFFFF)):
            words = valid.copy(); words[field] = value
            with self.subTest(field=field, value=value), self.assertRaises(cap.CaptureError) as error:
                list(cap.records(io.BytesIO(cap.CAPTURE.pack(*words))))
            self.assertNotIn("truncated", str(error.exception))
        with self.assertRaises(cap.CaptureError):
            list(cap.records(io.BytesIO(struct.pack(">8I", *valid))))

    def test_record_limit_does_not_silently_drop_tail(self):
        small = recording(bytes(16), code=bytes(8), state_size=1)
        self.assertEqual(len(list(cap.records(io.BytesIO(small), limit=1))), 1)
        with self.assertRaises(cap.CaptureError):
            list(cap.records(io.BytesIO(small * 2), limit=1))
        for limit in (0, 8193):
            with self.assertRaises(ValueError): list(cap.records(io.BytesIO(small), limit=limit))


class ConversionTests(unittest.TestCase):
    def setUp(self):
        self.identity = patch.object(cap, "PROGRAM_HASH", SYNTHETIC_HASH)
        self.identity.start(); self.addCleanup(self.identity.stop)

    def test_five_entries_use_correct_layout(self):
        for pc, kind in cap.DRAW_KINDS.items():
            r = record(kind, pc=pc)
            self.assertEqual(cap.convert_record(r), mesh.convert(r.data, kind, r.top))

    def test_unknown_code_and_unsupported_entries(self):
        r = record()
        with self.assertRaisesRegex(cap.CaptureError, "microprogram"):
            cap.convert_record(replace(r, code=b"\0" * 16384))
        for pc in (1, 0x3FE0, 0x4000, 0xFFFFFFFF):
            with self.assertRaises(cap.CaptureError): cap.convert_record(replace(r, pc=pc))

    def test_unsupported_draws_keep_fallback(self):
        r = record()
        for changed in (replace(r, data=bytes(4096)), replace(r, top=1024), replace(r, top=900)):
            with self.assertRaises(cap.CaptureError): cap.convert_record(changed)
        for offset, value in ((r.top * 16, 2), ((r.top + 216) * 16, 32),
                              (r.top * 16 + 4, 0)):
            data = bytearray(r.data); struct.pack_into("<I", data, offset, value)
            with self.assertRaises(cap.CaptureError): cap.convert_record(replace(r, data=bytes(data)))

    def test_geometry_ignores_constants_unused_ram_and_top(self):
        r = record()
        base = cap.fingerprints(r, cap.convert_record(r))
        data = bytearray(r.data)
        data[0] ^= 1                    # live view-projection input
        data[106 * 16] ^= 1             # live light input
        data[1000 * 16] ^= 1            # unrelated RAM
        moved = bytearray(data)
        old, new, span = 256, 512, 248
        moved[new * 16:(new + span) * 16] = data[old * 16:(old + span) * 16]
        changed = replace(r, data=bytes(moved), top=new)
        now = cap.fingerprints(changed, cap.convert_record(changed))
        self.assertEqual(base["geometry_sha256"], now["geometry_sha256"])
        self.assertEqual(base["tags_sha256"], now["tags_sha256"])
        self.assertEqual(base["state_block_sha256"], now["state_block_sha256"])
        self.assertNotEqual(base["constant_inputs_sha256"], now["constant_inputs_sha256"])
        self.assertNotEqual(base["data_sha256"], now["data_sha256"])

    def test_geometry_changes_with_vertex_order_topology_and_pc(self):
        r = record(2)
        base = cap.fingerprints(r, cap.convert_record(r))["geometry_sha256"]
        variants = []
        for byte in (0, 48 * 16, 96 * 16, 144 * 16):
            data = bytearray(r.data); data[(r.top + 24) * 16 + byte] ^= 1
            variants.append(replace(r, data=bytes(data)))
        # Same number of vertices, different strip boundaries.
        data = bytearray(r.data)
        for i, n in enumerate((4, 3, 5)):
            struct.pack_into("<I", data, (r.top + i) * 16, n | (0x8000 if i == 2 else 0))
        variants += [replace(r, data=bytes(data)), replace(r, pc=0x3520)]
        for changed in variants:
            self.assertNotEqual(base, cap.fingerprints(changed, cap.convert_record(changed))["geometry_sha256"])

    def test_tags_and_materials_stay_separate_from_geometry(self):
        r = record()
        base = cap.fingerprints(r, cap.convert_record(r))
        data = bytearray(r.data)
        data[(r.top + 217) * 16] ^= 1
        tag1 = struct.unpack_from("<I", data, r.top * 16 + 4)[0] ^ (1 << (15 + 6))
        struct.pack_into("<I", data, r.top * 16 + 4, tag1)
        changed = replace(r, data=bytes(data))
        now = cap.fingerprints(changed, cap.convert_record(changed))
        self.assertEqual(base["geometry_sha256"], now["geometry_sha256"])
        self.assertNotEqual(base["tags_sha256"], now["tags_sha256"])
        self.assertNotEqual(base["state_block_sha256"], now["state_block_sha256"])

    def test_report_records_all_outcomes_and_repetition(self):
        data = bytearray(snapshot()); data[0] ^= 1
        stream = recording() + recording(bytes(data)) + recording(pc=0x3FE0)
        stream += recording(code=bytes(16384)) + recording(top=1024)
        report = cap.analyze(io.BytesIO(stream))
        self.assertEqual(report["status_counts"], {"converted": 2, "non_draw_entry": 1,
                                                 "unsupported_program": 1, "unsupported_draw": 1})
        self.assertEqual(report["record_count"], 5)
        self.assertEqual(report["unique_geometry_observations"], 1)
        self.assertEqual(report["repeated_geometry"][0]["records"], [0, 1])
        self.assertEqual(report["repeated_geometry"][0]["distinct_constant_inputs"], 2)
        self.assertFalse(report["runtime_installed"])
        self.assertNotIn("frame", report["records"][0])
        self.assertEqual(report, cap.analyze(io.BytesIO(stream)))

    def test_selection_exhausts_stream_and_checks_range(self):
        stream = recording() + recording(snapshot(1), pc=0xD20)
        self.assertEqual(cap.extract(io.BytesIO(stream), 1), mesh.convert(snapshot(1), 1, 256))
        for selected in (-1, 2, 8192):
            with self.assertRaises(cap.CaptureError): cap.extract(io.BytesIO(stream), selected)
        # A valid selected record MUST NOT hide a corrupt later record.
        with self.assertRaises(cap.CaptureError): cap.extract(io.BytesIO(stream + b"bad"), 0)

    def test_cli_atomic_no_clobber_and_same_path(self):
        with tempfile.TemporaryDirectory() as tmp, redirect_stdout(io.StringIO()), redirect_stderr(io.StringIO()):
            source, target = Path(tmp) / "capture.vucapture", Path(tmp) / "draw.xmesh"
            source.write_bytes(recording())
            self.assertEqual(cap.main(["extract", str(source), str(target), "--record", "0"]), 0)
            packed = target.read_bytes()
            self.assertEqual(packed, mesh.convert(snapshot(), 0, 256))
            source.write_bytes(recording() + b"bad")
            for command in (["extract", str(source), str(target), "--record", "0"],
                            ["inspect", str(source), "--output", str(target)]):
                with self.assertRaises(SystemExit) as error: cap.main(command)
                self.assertEqual(error.exception.code, 2)
                self.assertEqual(target.read_bytes(), packed)
            before = source.read_bytes()
            with self.assertRaises(SystemExit): cap.main(["inspect", str(source), "--output", str(source)])
            self.assertEqual(source.read_bytes(), before)
            source.write_bytes(recording())
            with patch.object(mesh.os, "replace", side_effect=OSError("injected write failure")):
                with self.assertRaises(SystemExit): cap.main(["extract", str(source), str(target), "--record", "0"])
            self.assertEqual(target.read_bytes(), packed)
            self.assertEqual(sorted(p.name for p in Path(tmp).iterdir()), ["capture.vucapture", "draw.xmesh"])

    def test_cli_inspect_json(self):
        with tempfile.TemporaryDirectory() as tmp:
            source, target = Path(tmp) / "input", Path(tmp) / "report.json"
            source.write_bytes(recording())
            self.assertEqual(cap.main(["inspect", str(source), "--output", str(target)]), 0)
            self.assertEqual(json.loads(target.read_text())["status_counts"], {"converted": 1})
            out = io.StringIO()
            with redirect_stdout(out): cap.main(["inspect", str(source)])
            self.assertEqual(json.loads(out.getvalue()), json.loads(target.read_text()))


class ReleaseIdentityTests(unittest.TestCase):
    def test_cli_has_no_unknown_program_override(self):
        with tempfile.TemporaryDirectory() as tmp:
            source, target = Path(tmp) / "input", Path(tmp) / "output.xmesh"
            source.write_bytes(recording())
            proc = subprocess.run([sys.executable, str(XBOX / "tools/xmeshcapture.py"),
                                   "extract", str(source), str(target), "--record", "0"], capture_output=True, text=True)
            self.assertEqual(proc.returncode, 2)
            self.assertIn("unsupported microprogram", proc.stderr)
            self.assertFalse(target.exists())

    def test_production_identity_and_entry_mapping(self):
        source = (ROOT / "project/game/vu1_native_ts.cpp").read_text()
        value = re.search(r"kProgramHash\s*=\s*(0x[0-9a-fA-F]+)ull", source)
        self.assertIsNotNone(value)
        self.assertEqual(int(value.group(1), 16), cap.PROGRAM_HASH)
        names = {"Plain": 0, "EnvMap": 1, "Lit": 2, "Skinned": 3}
        entries = re.findall(r"case (0x[0-9a-fA-F]+): return &kLayouts\[(\w+)\];", source)
        self.assertEqual({int(pc, 16): names[kind] for pc, kind in entries}, cap.DRAW_KINDS)


def between(text, start, end):
    return text[text.index(start):text.index(end, text.index(start))]


class CppInteropTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        vu = ROOT / "source/PS2Recomp/ps2xRuntime/src/lib/vu"
        capture_source = (vu / "ps2_vu_capture.h").read_text()
        header = between(capture_source, "struct VuCaptureHeader\n", "};") + "};"
        jit = (vu / "ps2_vu1_jit.cpp").read_text()
        hashing = between(jit, "uint64_t hashVu1Code(", "Vu1CompiledEntry VU1Interpreter::lookupCompiledProgram")
        backend = (ROOT / "source/PS2Recomp/ps2xRuntime/include/runtime/gs/gs_backend.h").read_text()
        vertex = between(backend, "struct GSXfVertex\n", "struct GSXfConstants")
        decoder = (ROOT / "project/game/vu1_native_xf.h").read_text()
        layouts = between(decoder, "    constexpr uint32_t kDataQwords", "    // The record is written")
        reference = between(decoder, "    inline void decodeXfVertex(", "    // The strip's n vertices")
        cls.temp = tempfile.TemporaryDirectory(); cls.addClassCleanup(cls.temp.cleanup)
        cls.dir = Path(cls.temp.name); cls.probe = cls.dir / "probe"
        source = cls.dir / "probe.cpp"
        source.write_text('''#include <algorithm>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
struct VU1State { uint8_t opaque[641]; }; // deliberately NOT a real host ABI
''' + header + '\n' + hashing + vertex + '\nnamespace ts_native_xf {\n' + layouts + reference + '\n}\n' + r'''
int main(int argc, char **argv) {
    if (argc != 8) return 2;
    std::ifstream ci(argv[1], std::ios::binary), di(argv[2], std::ios::binary);
    if (!ci || !di) return 2;
    std::vector<uint8_t> code((std::istreambuf_iterator<char>(ci)), {}), data((std::istreambuf_iterator<char>(di)), {});
    const unsigned pc = std::stoul(argv[3]), top = std::stoul(argv[4]), kind = std::stoul(argv[5]);
    if (data.size() != 16384 || code.size() != 16384 || kind > 3 || top != 256) return 2;
    std::ofstream out(argv[6], std::ios::binary), vertices(argv[7], std::ios::binary);
    const VuCaptureHeader h{0x31554356u, sizeof(VU1State), static_cast<uint32_t>(code.size()),
        static_cast<uint32_t>(data.size()), pc, top, 17, 123456};
    static_assert(sizeof(h) == 32, "capture header changed");
    const VU1State state{};
    out.write(reinterpret_cast<const char *>(&h), sizeof(h));
    out.write(reinterpret_cast<const char *>(&state), sizeof(state));
    out.write(reinterpret_cast<const char *>(code.data()), code.size());
    out.write(reinterpret_cast<const char *>(data.data()), data.size());
    unsigned vi = top + ts_native_xf::kLayouts[kind].vertexBase;
    for (unsigned n : {3u, 4u, 5u}) {
        for (unsigned i = 0; i < n; ++i) {
            GSXfVertex vertex{};
            ts_native_xf::decodeXfVertex(ts_native_xf::kLayouts[kind], data.data(), vi, i, &vertex);
            vertices.write(reinterpret_cast<const char *>(&vertex), sizeof(vertex));
        }
        vi += n;
    }
    std::cout << hashVu1Code(code.data(), code.size()) << '\n';
    return out && vertices ? 0 : 3;
}
''')
        command = shlex.split(os.environ.get("CXX", "c++"))
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror"]
        command += shlex.split(os.environ.get("TS_XMESH_CXXFLAGS", ""))
        subprocess.run(command + [str(source), "-o", str(cls.probe)], check=True)

    def test_cpp_producer_to_python_converter_matches_cpp_decoder(self):
        code = self.dir / "code.bin"; code.write_bytes(CODE)
        for pc, kind in cap.DRAW_KINDS.items():
            for seed in range(8):
                data = snapshot(kind, seed=seed)
                ram, capture, vertices = (self.dir / n for n in ("ram.bin", "capture.bin", "vertices.bin"))
                ram.write_bytes(data)
                result = subprocess.run([str(self.probe), str(code), str(ram), str(pc), "256", str(kind),
                                         str(capture), str(vertices)], capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stderr)
                self.assertEqual(result.stderr, "")
                self.assertEqual(int(result.stdout), SYNTHETIC_HASH)
                self.assertEqual(capture.read_bytes(), recording(data, pc=pc, state_size=641, itop=17, cycles=123456))
                with patch.object(cap, "PROGRAM_HASH", SYNTHETIC_HASH), capture.open("rb") as stream:
                    packed = cap.extract(stream, 0)
                vertex_offset = mesh.HEADER.unpack_from(packed)[8]
                self.assertEqual(packed[vertex_offset:], vertices.read_bytes(), (pc, kind, seed))


if __name__ == "__main__":
    unittest.main()

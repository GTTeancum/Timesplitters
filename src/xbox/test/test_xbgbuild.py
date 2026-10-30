"""Independent synthetic source/pack fixtures for the source BG converter.

No original game data is embedded. Expected header/table/vertex bytes are
assembled from the documented layout, independently of converter constants.
The reader probe compiles the production borrowed-memory header unchanged.
"""
from __future__ import annotations

import hashlib
import importlib.util
import json
import os
from pathlib import Path
import shlex
import struct
import subprocess
import sys
import tempfile
import unittest
import zlib

XBOX = Path(__file__).resolve().parents[1]
TOOL = XBOX / "tools/xbgbuild.py"
spec = importlib.util.spec_from_file_location("xbgbuild", TOOL)
bg = importlib.util.module_from_spec(spec)
sys.modules[spec.name] = bg
spec.loader.exec_module(bg)

RAW_BYTES = 0x740
TEXTURES, ROOMS, PORTALS, VOLUMES = 0x20, 0x80, 0x160, 0x180
PART, MODEL, EMPTY_PART, EMPTY_MODEL = 0x1B0, 0x200, 0x210, 0x260
PLAIN_DESC, ENV_DESC = 0x300, 0x340
PLAIN_TAGS, PLAIN_POS, PLAIN_VEC, PLAIN_RGBA = 0x400, 0x450, 0x500, 0x5A0
ENV_TAGS, ENV_POS, ENV_VEC, ENV_RGBA = 0x600, 0x620, 0x660, 0x6B0
PART_WORDS = (0x01020300, 0xA0B0C0D0)  # class byte is zero; other bits are opaque
TEXTURE_WORDS = ((7, 0x11223344, 0x55667788, 0x99AABBCC),
                 (42, 0x10203040, 0x50607080, 0x90A0B0C0))
MISC_NAMES = {"textures/0007.qpm", "textures/0042.qpm"}

# Bit patterns deliberately include signed zero and unusual but preserved
# float words. Expectations never pass through Python floating-point maths.
PLAIN_POSITIONS = (
    (0x3F800000, 0x80000000, 0x7FC01234),
    (0x40000000, 0x40400000, 0x40800000),
    (0xBF800000, 0x00000000, 0x3F000000),
    (0x41200000, 0xC1200000, 0x3E800000),
    (0x00000001, 0x80000001, 0x7F800000),
    (0x3F800000, 0x40000000, 0x40400000),
    (0x40800000, 0x40A00000, 0x40C00000),
)
PLAIN_VECTORS = (
    (0x3F000000, 0xBF000000, 0x00000000, 0xDEADBEEF),
    (0x80000000, 0x3F800000, 0x80000000, 0x12345678),
    (0x3F800000, 0x40000000, 0x3F400000, 0),
    (0x40000000, 0x40400000, 0x7FC00001, 0),
    (0x40400000, 0x40800000, 0x00000001, 0),
    (0x40800000, 0x40A00000, 0xFF800000, 0),
    (0x40A00000, 0x40C00000, 0x3F800000, 0),
)
PLAIN_STQ_EXPECTED = (
    (0x3F000000, 0xBF000000, 0x3F800000),
    (0x80000000, 0x3F800000, 0x3F800000),
    (0x3F800000, 0x40000000, 0x3F400000),
    (0x40000000, 0x40400000, 0x7FC00001),
    (0x40400000, 0x40800000, 0x00000001),
    (0x40800000, 0x40A00000, 0xFF800000),
    (0x40A00000, 0x40C00000, 0x3F800000),
)
PLAIN_COLORS = ((0x12, 0x34, 0x56, 0x78), (0xFF, 0, 0x80, 1),
                (0, 0xFF, 0, 0x80), (0x80, 0x81, 0xFE, 0xFF),
                (1, 2, 3, 4), (0xFF, 0xFF, 0xFF, 0xFF), (0, 0, 0, 0))
PLAIN_PACKED_COLORS = (0x78123456, 0x01FF0080, 0x8000FF00, 0xFF8081FE,
                       0x04010203, 0xFFFFFFFF, 0)
ENV_POSITIONS = ((0x3F800000, 0x40000000, 0x40400000),
                 (0x40800000, 0x40A00000, 0x40C00000),
                 (0x40E00000, 0x41000000, 0x41100000))
ENV_VECTORS = ((0x3F800000, 0x80000000, 0x40000000, 0xDEADBEEF),
              (0xBF800000, 0x3F000000, 0, 0x3F800000),
              (0, 0x3F800000, 0x7FC05678, 0x80000000))
ENV_COLORS = ((9, 8, 7, 6), (0xAB, 0xCD, 0xEF, 0x80), (0x80, 0, 0xFF, 0x40))
ENV_PACKED_COLORS = (0x06090807, 0x80ABCDEF, 0x408000FF)


def words_into(data, offset, values):
    struct.pack_into(f"<{len(values)}I", data, offset, *values)


def tag(count, last):
    # Preserve even unused upper register-list bits; no source tag is rewritten.
    return (count | (0x8000 if last else 0),
            (3 << 28) | ((4 | 8 | 16) << 15) | (1 << 14),
            0x512, 0xDEC0ADDE)


def source_raw():
    raw = bytearray(RAW_BYTES)
    words_into(raw, 0, (TEXTURES, ROOMS, PORTALS, VOLUMES))
    for i, values in enumerate(TEXTURE_WORDS):
        words_into(raw, TEXTURES + i * 16, values)
    words_into(raw, TEXTURES + 32, (0xFFFFFFFF, 0, 0, 0))
    words_into(raw, ROOMS + 44, (MODEL, 0x700, 0x704, 0x708, 0x70C,
                                 0x3F800000, 0x40000000, 0x40400000,
                                 0x40800000, 0x40A00000, 0x40C00000))
    words_into(raw, ROOMS + 88, (EMPTY_MODEL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
    words_into(raw, PORTALS, (0, 0x710, 0))
    words_into(raw, MODEL, (1,))
    words_into(raw, EMPTY_MODEL, (1,))
    words_into(raw, PART, PART_WORDS)
    words_into(raw, PART + 8, (PLAIN_DESC, ENV_DESC))
    words_into(raw, PART + 20, (PLAIN_TAGS, PLAIN_POS, PLAIN_VEC, PLAIN_RGBA, 0, 0))
    words_into(raw, PART + 44, (ENV_TAGS, ENV_POS, ENV_VEC, ENV_RGBA, 0, 0))
    words_into(raw, PLAIN_DESC, (0, 1, 2, 2, 7, 0))
    words_into(raw, PLAIN_DESC + 24, (0, 0, 0, 0, 0, 0xFFFFFFFF))
    words_into(raw, ENV_DESC, (1, 0, 1, 1, 3, 2))
    words_into(raw, ENV_DESC + 24, (0, 0, 0, 0, 0, 0xFFFFFFFF))
    raw[PLAIN_TAGS:PLAIN_TAGS + 16] = b"\xA5" * 16  # not part of either batch
    words_into(raw, PLAIN_TAGS + 16, tag(3, False))
    words_into(raw, PLAIN_TAGS + 32, tag(4, True))
    words_into(raw, ENV_TAGS, tag(3, True))
    for i, (position, vector, color) in enumerate(zip(PLAIN_POSITIONS, PLAIN_VECTORS, PLAIN_COLORS), 2):
        words_into(raw, PLAIN_POS + i * 12, position)
        words_into(raw, PLAIN_VEC + i * 16, vector)
        raw[PLAIN_RGBA + i * 4:PLAIN_RGBA + (i + 1) * 4] = bytes(color)
    for i, (position, vector, color) in enumerate(zip(ENV_POSITIONS, ENV_VECTORS, ENV_COLORS), 1):
        words_into(raw, ENV_POS + i * 12, position)
        words_into(raw, ENV_VEC + i * 16, vector)
        raw[ENV_RGBA + i * 4:ENV_RGBA + (i + 1) * 4] = bytes(color)
    return bytes(raw)


def pak(entries):
    """Minimal independently assembled P4CK; entries are (name, payload)."""
    data = bytearray(16)
    directory = bytearray()
    for name, payload in entries:
        encoded = name.encode("ascii")
        if len(encoded) >= 48:
            raise ValueError("fixture name too long")
        directory.extend(encoded + bytes(48 - len(encoded)))
        directory.extend(struct.pack("<3I", len(data), len(payload), 0))
        data.extend(payload)
    struct.pack_into("<4sII", data, 0, b"P4CK", len(data), len(directory))
    return bytes(data + directory)


def reseal(data):
    data = bytearray(data)
    struct.pack_into("<I", data, 152, 0)
    struct.pack_into("<I", data, 152, zlib.crc32(data))
    return bytes(data)


def changed(data, offset, value):
    data = bytearray(data)
    struct.pack_into("<I", data, offset, value)
    return bytes(data)


def expected_vertices():
    result = bytearray()
    for position, color, stq in zip(PLAIN_POSITIONS, PLAIN_PACKED_COLORS, PLAIN_STQ_EXPECTED):
        result.extend(struct.pack("<11I", *position, 0, 0, 0, color, *stq, 0))
    for position, vector, color in zip(ENV_POSITIONS, ENV_VECTORS, ENV_PACKED_COLORS):
        result.extend(struct.pack("<11I", *position, *vector[:3], color, 0, 0, 0x3F800000, 0))
    return bytes(result)


def expected_pack(raw, pak_sha, level=7):
    """A complete golden fixture, independent of converter/header helpers."""
    result = bytearray(160)
    struct.pack_into("<8s20I", result, 0, b"TSXBGP1\0", 1, 160, 1, level,
                     1080, len(raw), 2, 2, 3, 10, 2, 192, 320, 448, 640, 160,
                     TEXTURES, ROOMS, PORTALS, VOLUMES)
    result[88:120] = hashlib.sha256(raw).digest()
    result[120:152] = pak_sha
    for texture in TEXTURE_WORDS:
        result.extend(struct.pack("<4I", *texture))
    for index, first, count in ((1, 0, 2), (2, 2, 0)):
        room_offset = ROOMS + index * 44
        result.extend(struct.pack("<4I", index, room_offset, first, count))
        result.extend(raw[room_offset:room_offset + 44])
        result.extend(bytes(4))
    result.extend(struct.pack("<16I", 0, MODEL, PART, 0, 0, PLAIN_DESC, 0, 0,
                              0, 2, 0, 7, 1, 2, *PART_WORDS))
    result.extend(struct.pack("<16I", 0, MODEL, PART, 0, 1, ENV_DESC, 1, 2,
                              2, 1, 7, 3, 0, 1, *PART_WORDS))
    for first, count, source_tag, gif in ((0, 3, PLAIN_TAGS + 16, tag(3, False)),
                                          (3, 4, PLAIN_TAGS + 32, tag(4, True)),
                                          (7, 3, ENV_TAGS, tag(3, True))):
        result.extend(struct.pack("<8I", first, count, source_tag, 0, *gif))
    result.extend(bytes(640 - len(result)))
    result.extend(expected_vertices())
    assert len(result) == 1080
    return reseal(result)


class ConverterTests(unittest.TestCase):
    def setUp(self):
        self.raw = source_raw()
        self.pak = pak([("bg/level7/level7.raw", self.raw)])
        self.pak_sha = hashlib.sha256(self.pak).digest()

    def build(self, raw=None, **kwargs):
        return bg.build_level(self.raw if raw is None else raw, level=7,
                              pak_sha256=self.pak_sha, **kwargs)

    def test_complete_pack_matches_independent_golden_bytes(self):
        self.assertEqual(self.build(), expected_pack(self.raw, self.pak_sha))

    def test_exact_vertex_layout_color_and_signed_zero_q(self):
        packed = self.build()
        self.assertEqual(packed[640:], expected_vertices())
        self.assertEqual(struct.unpack_from("<I", packed, 640 + 24)[0], 0x78123456)
        self.assertEqual(struct.unpack_from("<I", packed, 640 + 36)[0], 0x3F800000)
        self.assertEqual(struct.unpack_from("<I", packed, 640 + 44 + 36)[0], 0x3F800000)
        self.assertEqual(struct.unpack_from("<3I", packed, 640 + 7 * 44 + 12), ENV_VECTORS[0][:3])
        self.assertEqual(struct.unpack_from("<3I", packed, 640 + 7 * 44 + 28), (0, 0, 0x3F800000))

    def test_source_is_unchanged_and_conversion_is_deterministic(self):
        raw = bytearray(self.raw)
        first = self.build(raw)
        self.assertEqual(bytes(raw), self.raw)
        self.assertEqual(first, self.build(raw))

    def test_pak_and_misc_inventory(self):
        entries = bg.parse_pak(self.pak, require_bg=True)
        self.assertEqual(len(entries), 1)
        self.assertEqual((entries[0]["name"], entries[0]["offset"], entries[0]["size"], entries[0]["data"]),
                         ("bg/level7/level7.raw", 16, len(self.raw), self.raw))
        self.assertEqual(self.build(misc_names=MISC_NAMES), self.build())
        with self.assertRaises(ValueError):
            self.build(misc_names={"textures/0007.qpm"})

    def test_generic_empty_placeholder_is_valid_but_empty_bg_is_not(self):
        placeholder = bg.parse_pak(pak([("textures/zzz.qpm", b"")]))
        self.assertEqual([(item["name"], item["size"], item["data"]) for item in placeholder],
                         [("textures/zzz.qpm", 0, b"")])
        with self.assertRaises(ValueError):
            bg.parse_pak(pak([("bg/level7/level7.raw", b"")]), require_bg=True)

    def test_pak_directory_and_payload_rejections(self):
        directory = struct.unpack_from("<I", self.pak, 4)[0]
        cases = {
            "truncated header": self.pak[:11],
            "bad magic": b"BAD!" + self.pak[4:],
            "directory before header": changed(self.pak, 4, 8),
            "directory out of range": changed(self.pak, 4, 0xFFFFFFFF),
            "nonrecord directory size": changed(self.pak, 8, 59),
            "unterminated name": self.pak[:directory] + b"x" * 48 + self.pak[directory + 48:],
            "payload overlap directory": changed(self.pak, directory + 48, directory),
            "payload overflow": changed(self.pak, directory + 52, 0xFFFFFFFF),
            "compressed entry": changed(self.pak, directory + 56, 1),
            "duplicate names": pak([("bg/level7/level7.raw", self.raw), ("bg/level7/level7.raw", self.raw)]),
            "level name mismatch": pak([("bg/level7/level8.raw", self.raw)]),
            "unsafe path": pak([("../level7.raw", self.raw)]),
        }
        for label, invalid in cases.items():
            with self.subTest(label=label), self.assertRaises(ValueError):
                bg.parse_pak(invalid, require_bg=True)

    def test_raw_bounds_layout_and_source_identity_rejections(self):
        cases = {
            "short header": self.raw[:15],
            "null texture table": changed(self.raw, 0, 0),
            "room table lacks sentinel": changed(self.raw, 4, RAW_BYTES - 44),
            "portal table out of bounds": changed(self.raw, 8, 0xFFFFFFFF),
            "volume pointer out of bounds": changed(self.raw, 12, RAW_BYTES - 3),
            "model part underflow": changed(self.raw, MODEL, MODEL // 80 + 1),
            "unsupported class": changed(self.raw, PART, PART_WORDS[0] | 1),
            "runtime pointer on disk": changed(self.raw, PART + 76, 1),
            "opaque pointer out of bounds": changed(self.raw, PART + 72, RAW_BYTES),
            "unsupported layout": changed(self.raw, PLAIN_DESC + 20, 1),
            "inherited texture": changed(self.raw, PLAIN_DESC, 0xFFFFFFFF),
            "missing texture": changed(self.raw, PLAIN_DESC, 2),
            "too many tags": changed(self.raw, PLAIN_DESC + 8, 25),
            "too many vertices": changed(self.raw, PLAIN_DESC + 16, 65),
            "tag start overflow": changed(self.raw, PLAIN_DESC + 4, 0xFFFFFFFF),
            "vertex start overflow": changed(self.raw, PLAIN_DESC + 12, 0xFFFFFFFF),
            "null positions": changed(self.raw, PART + 24, 0),
            "truncated vectors": changed(self.raw, PART + 28, RAW_BYTES - 4),
            "color array overflow": changed(self.raw, PART + 32, 0xFFFFFFF0),
            "vertex sum mismatch": changed(self.raw, PLAIN_DESC + 16, 6),
        }
        no_texture_end = bytearray(changed(self.raw, 0, RAW_BYTES - 16))
        words_into(no_texture_end, RAW_BYTES - 16, (1, 0, 0, 0))
        cases["missing texture sentinel"] = no_texture_end
        no_desc_end = bytearray(changed(self.raw, PART + 8, RAW_BYTES - 24))
        words_into(no_desc_end, RAW_BYTES - 24, (0, 1, 2, 2, 7, 0))
        cases["missing descriptor sentinel"] = no_desc_end
        for label, invalid in cases.items():
            with self.subTest(label=label), self.assertRaises(ValueError):
                self.build(invalid)

    def test_source_tag_contract_and_complete_batch(self):
        first = PLAIN_TAGS + 16
        last = PLAIN_TAGS + 32
        original_flags = tag(3, False)[1]
        cases = {
            "early EOP": changed(self.raw, first, 0x8003),
            "missing final EOP": changed(self.raw, last, 4),
            "missing PRE": changed(self.raw, first + 4, original_flags & ~(1 << 14)),
            "wrong packed format": changed(self.raw, first + 4, original_flags | (1 << 26)),
            "wrong NREG": changed(self.raw, first + 4, (original_flags & 0x0FFFFFFF) | (4 << 28)),
            "wrong primitive": changed(self.raw, first + 4, (original_flags & ~(7 << 15)) | (3 << 15)),
        }
        too_short = changed(changed(self.raw, first, 2), PLAIN_DESC + 16, 6)
        cases["two vertex strip"] = too_short
        for label, invalid in cases.items():
            with self.subTest(label=label), self.assertRaises(ValueError):
                self.build(invalid)

    def test_cli_build_inspect_and_level_selection(self):
        with tempfile.TemporaryDirectory() as temp:
            base = Path(temp)
            archive, misc, output = base / "BG.PAK", base / "MISC.PAK", base / "out"
            archive.write_bytes(pak([("bg/level7/level7.raw", self.raw), ("bg/level8/level8.raw", self.raw)]))
            misc.write_bytes(pak([(name, b"synthetic opaque texture record") for name in sorted(MISC_NAMES)]
                                 + [("textures/zzz.qpm", b"")]))
            result = subprocess.run([sys.executable, str(TOOL), "build", str(archive), str(output),
                                     "--misc-pak", str(misc), "--level", "7"], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual((output / "level7.xbg").read_bytes(),
                             expected_pack(self.raw, hashlib.sha256(archive.read_bytes()).digest()))
            self.assertFalse((output / "level8.xbg").exists())
            self.assertIsInstance(json.loads((output / "manifest.json").read_text()), dict)
            inspected = subprocess.run([sys.executable, str(TOOL), "inspect", str(output / "level7.xbg")],
                                       capture_output=True, text=True)
            self.assertEqual(inspected.returncode, 0, inspected.stderr)
            self.assertIsInstance(json.loads(inspected.stdout), dict)

    def test_cli_empty_numeric_texture_preserves_existing_outputs(self):
        with tempfile.TemporaryDirectory() as temp:
            base = Path(temp)
            archive, misc, output = base / "BG.PAK", base / "MISC.PAK", base / "out"
            archive.write_bytes(self.pak)
            misc.write_bytes(pak([("textures/0007.qpm", b"opaque texture"),
                                  ("textures/0042.qpm", b""), ("textures/zzz.qpm", b"")]))
            original = {"level7.xbg": b"previous-seven", "manifest.json": b'{"previous": true}\n'}
            output.mkdir()
            for name, data in original.items():
                (output / name).write_bytes(data)
            result = subprocess.run([sys.executable, str(TOOL), "build", str(archive), str(output),
                                     "--misc-pak", str(misc)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 2, result.stdout + result.stderr)
            self.assertEqual({path.name: path.read_bytes() for path in output.iterdir()}, original)

    def test_cli_later_bad_level_preserves_every_existing_output(self):
        with tempfile.TemporaryDirectory() as temp:
            base, original = Path(temp), {"level7.xbg": b"previous-seven", "level8.xbg": b"previous-eight",
                                         "manifest.json": b'{"previous": true}\n'}
            archive, output = base / "BG.PAK", base / "out"
            output.mkdir()
            for name, data in original.items():
                (output / name).write_bytes(data)
            archive.write_bytes(pak([("bg/level7/level7.raw", self.raw),
                                     ("bg/level8/level8.raw", changed(self.raw, PART, PART_WORDS[0] | 1))]))
            result = subprocess.run([sys.executable, str(TOOL), "build", str(archive), str(output)],
                                    capture_output=True, text=True)
            self.assertEqual(result.returncode, 2, result.stdout + result.stderr)
            self.assertEqual({path.name: path.read_bytes() for path in output.iterdir()}, original)


class ReaderTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temp = tempfile.TemporaryDirectory()
        cls.addClassCleanup(cls.temp.cleanup)
        cls.directory = Path(cls.temp.name)
        cls.probe = cls.directory / "reader"
        source = cls.directory / "reader.cpp"
        source.write_text(r'''
#include <algorithm>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include "xbox_bg_pack.h"
static std::vector<uint8_t> read(const char *path) {
    std::ifstream in(path, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(in)), {});
}
static bool empty(const ts_xbg::View &v) {
    return !v.textures && !v.rooms && !v.batches && !v.strips && !v.vertices &&
           !v.sourceRawSha256 && !v.sourcePakSha256 && !v.textureCount && !v.roomCount &&
           !v.batchCount && !v.stripCount && !v.vertexCount && !v.level && !v.sourceRawBytes && !v.flags;
}
int main(int argc, char **argv) {
    if (argc < 2) return 2;
    auto good = read(argv[1]);
    ts_xbg::View view;
    if (ts_xbg::open(good.data(), good.size(), view) != ts_xbg::Error::None) return 3;
    if (view.textures != good.data() + 160 || view.rooms != good.data() + 192 ||
        view.batches != good.data() + 320 || view.strips != good.data() + 448 ||
        view.vertices != good.data() + 640 || view.sourceRawSha256 != good.data() + 88 ||
        view.sourcePakSha256 != good.data() + 120) return 14;
    if (argc == 2) {
        std::cout << view.level << ' ' << view.textureCount << ' ' << view.roomCount << ' '
                  << view.batchCount << ' ' << view.stripCount << ' ' << view.vertexCount << ' '
                  << view.sourceRawBytes << ' ' << view.flags << '\n';
        return 0;
    }
    const std::string mode = argv[2];
    if (mode == "unaligned") {
        std::vector<uint8_t> copy(good.size() + 1);
        std::copy(good.begin(), good.end(), copy.begin() + 1);
        return ts_xbg::open(copy.data() + 1, good.size(), view) == ts_xbg::Error::None ? 0 : 4;
    }
    if (mode == "boundaries") {
        for (size_t size = 0; size < good.size(); ++size) {
            if (ts_xbg::open(good.data(), good.size(), view) != ts_xbg::Error::None) return 5;
            if (ts_xbg::open(good.data(), size, view) == ts_xbg::Error::None || !empty(view)) return 6;
        }
        if (ts_xbg::open(good.data(), good.size(), view) != ts_xbg::Error::None) return 7;
        if (ts_xbg::open(good.data(), size_t(ts_xbg::kMaxBytes) + 1u, view) != ts_xbg::Error::Size || !empty(view)) return 8;
        if (ts_xbg::open(good.data(), good.size(), view) != ts_xbg::Error::None) return 9;
        return ts_xbg::open(nullptr, good.size(), view) != ts_xbg::Error::None && empty(view) ? 0 : 10;
    }
    if (argc != 4) return 11;
    auto bad = read(argv[3]);
    const auto error = ts_xbg::open(bad.data(), bad.size(), view);
    if (error == ts_xbg::Error::None || !empty(view)) return 12;
    if (mode == "checksum" && error != ts_xbg::Error::Checksum) return 13;
    return 0;
}
''')
        command = shlex.split(os.environ.get("CXX", "c++"))
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-I", str(XBOX)]
        command += shlex.split(os.environ.get("TS_XBG_CXXFLAGS", ""))
        subprocess.run(command + [str(source), "-o", str(cls.probe)], check=True)
        raw = source_raw()
        cls.good = expected_pack(raw, hashlib.sha256(pak([("bg/level7/level7.raw", raw)])).digest())
        cls.good_path = cls.directory / "good.xbg"
        cls.good_path.write_bytes(cls.good)

    def run_probe(self, mode=None, data=None):
        command = [str(self.probe), str(self.good_path)]
        if mode:
            command.append(mode)
        if data is not None:
            with self.assertRaises(ValueError):
                bg.inspect_pack(data)
            path = self.directory / "bad.xbg"
            path.write_bytes(data)
            command.append(str(path))
        result = subprocess.run(command, capture_output=True, text=True)
        self.assertEqual(result.stderr, "", result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        return result.stdout

    def reject_changes(self, changes):
        for label, offset, value in changes:
            with self.subTest(label=label):
                self.run_probe("invalid", reseal(changed(self.good, offset, value)))

    def test_independent_pack_and_unaligned_input(self):
        self.assertEqual(bg.inspect_pack(self.good)["counts"],
                         {"textures": 2, "rooms": 2, "batches": 2, "strips": 3, "vertices": 10})
        self.assertEqual(self.run_probe().split(), ["7", "2", "2", "2", "3", "10", str(RAW_BYTES), "1"])
        self.run_probe("unaligned")

    def test_all_truncations_oversize_and_failed_reopen(self):
        self.run_probe("boundaries")

    def test_payload_corruption_hits_checksum_guard(self):
        corrupted = bytearray(self.good)
        corrupted[650] ^= 1
        self.run_probe("checksum", corrupted)

    def test_header_flags_sizes_offsets_padding_and_overflow(self):
        self.reject_changes([
            ("version", 8, 2), ("header size", 12, 159), ("missing live binding", 16, 0),
            ("unknown flags", 16, 3), ("reserved zero level", 20, 0), ("wrong total", 24, 1079),
            ("no rooms", 32, 0), ("room overflow", 32, 0xFFFFFFFF),
            ("batch overflow", 36, 0xFFFFFFFF), ("strip overflow", 40, 0xFFFFFFFF),
            ("vertex overflow", 44, 0xFFFFFFFF), ("texture overflow", 48, 0xFFFFFFFF),
            ("room offset", 52, 196), ("batch offset", 56, 316),
            ("strip offset", 60, 480), ("unaligned vertices", 64, 641),
            ("texture offset", 68, 176), ("reserved", 156, 1),
            ("nonzero alignment padding", 544, 1),
        ])
        self.run_probe("invalid", self.good + b"\0")

    def test_source_bounds_and_texture_sentinel_ids(self):
        self.reject_changes([
            ("empty source", 28, 0), ("source texture sentinel outside", 72, RAW_BYTES - 16),
            ("source table inside header", 72, 12),
            ("source room sentinel outside", 76, RAW_BYTES - 44),
            ("source portal sentinel outside", 80, RAW_BYTES - 4),
            ("source volume truncated", 84, RAW_BYTES - 3),
            ("negative texture ID", 160, 0xFFFFFFFF),
            ("high bit texture ID", 176, 0x80000000),
            ("room model outside", 192 + 16, RAW_BYTES - 2),
            ("empty room model header truncated", 256 + 16, RAW_BYTES - 39),
            ("room metadata pointer outside", 192 + 20, RAW_BYTES - 2),
            ("part before source header", 320 + 8, 0),
            ("part extends past model", 320 + 8, MODEL),
            ("part index overflow", 320 + 12, 0xFFFFFFFF),
            ("descriptor truncated", 320 + 20, RAW_BYTES - 23),
            ("source tag start overflow", 320 + 48, 0xFFFFFFFF),
            ("source tag array base before header", 320 + 48, (PLAIN_TAGS + 16) // 16),
            ("source vertex start overflow", 320 + 52, 0xFFFFFFFF),
        ])
        # Move both references together so an inconsistent repeated identity
        # cannot conceal the local source-part alignment error.
        misaligned = changed(changed(self.good, 320 + 8, PART - 1), 384 + 8, PART - 1)
        self.run_probe("invalid", reseal(misaligned))

    def test_room_partition_and_identity(self):
        self.reject_changes([
            ("sentinel room included", 192, 0), ("duplicate source room", 256, 1),
            ("wrong source room offset", 192 + 4, ROOMS + 45),
            ("skipped first batch", 192 + 8, 1), ("room batch overrun", 192 + 12, 3),
            ("overlapping room range", 256 + 8, 1), ("room reserved", 192 + 60, 1),
        ])

    def test_batch_hierarchy_identity_and_partitions(self):
        self.reject_changes([
            ("wrong owner room", 320, 1), ("wrong source model", 320 + 4, EMPTY_MODEL),
            ("unknown variant", 320 + 16, 2), ("texture index out of range", 320 + 24, 2),
            ("inherited texture", 320 + 24, 0xFFFFFFFF), ("unsupported layout", 320 + 28, 1),
            ("first strip gap", 320 + 32, 1), ("zero strips", 320 + 36, 0),
            ("too many strips", 320 + 36, 25), ("strip range overflow", 320 + 36, 0xFFFFFFFF),
            ("first vertex gap", 320 + 40, 1), ("too few vertices", 320 + 44, 2),
            ("too many vertices", 320 + 44, 65), ("vertex range overflow", 320 + 44, 0xFFFFFFFF),
            ("strip vertex sum differs", 320 + 44, 8), ("nonzero source class", 320 + 56, PART_WORDS[0] | 1),
            ("same part identity changes", 384 + 60, PART_WORDS[1] ^ 1),
            ("part progression mismatch", 384 + 12, 1),
            ("same variant descriptor gap", 384 + 16, 0),
            ("second batch strip overlap", 384 + 32, 1),
            ("second batch vertex overlap", 384 + 40, 6),
        ])
        duplicate = changed(changed(self.good, 384 + 16, 0), 384 + 20, PLAIN_DESC)
        self.run_probe("invalid", reseal(duplicate))

    def test_strip_ranges_original_tags_and_batch_termination(self):
        flags = tag(3, False)[1]
        self.reject_changes([
            ("strip vertex gap", 448, 1), ("short strip", 448 + 4, 2),
            ("long strip", 448 + 4, 65), ("source tag before header", 448 + 8, 15),
            ("truncated source tag", 448 + 8, RAW_BYTES - 15),
            ("noncontiguous source tag", 480 + 8, PLAIN_TAGS + 48),
            ("strip reserved", 448 + 12, 1), ("NLOOP mismatch", 448 + 16, 4),
            ("early EOP", 448 + 16, 0x8003), ("missing EOP", 480 + 16, 4),
            ("late batch missing EOP", 512 + 16, 3),
            ("PRE absent", 448 + 20, flags & ~(1 << 14)),
            ("not packed", 448 + 20, flags | (1 << 26)),
            ("NREG mismatch", 448 + 20, (flags & 0x0FFFFFFF) | (4 << 28)),
            ("not triangle strip", 448 + 20, (flags & ~(7 << 15)) | (3 << 15)),
        ])


if __name__ == "__main__":
    unittest.main()

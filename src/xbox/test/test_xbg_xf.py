"""Synthetic tests for XBG writes into the existing native transform path.

The production adapter is compiled unchanged. A synchronous binding stub
provides intentionally unaligned pack storage; it does not model real asset
identity, loading, GS state, GPU execution, or performance.
"""
from __future__ import annotations

import importlib.util
import os
from pathlib import Path
import shlex
import subprocess
import sys
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
TOOL = XBOX / "tools/patch_bg_native.py"
NATIVE = ROOT / "project/game/vu1_native_ts.cpp"
spec = importlib.util.spec_from_file_location("patch_bg_native", TOOL)
patcher = importlib.util.module_from_spec(spec)
spec.loader.exec_module(patcher)


PROBE = r'''
#include "xbox_bg_xf.h"
#include "xbox_bg_runtime.h"
#include <algorithm>
#include <array>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

#define CHECK(x) do { if (!(x)) { std::cerr << "check failed at " << __LINE__ << ": " #x "\n"; return false; } } while (0)
static std::array<uint8_t, 16384> vu;
static std::vector<uint8_t> packed;
static uint32_t kindWanted, viWanted, countWanted, calls, callbacks;
static bool hit = true;

bool xboxBgWithStrip(uint32_t kind, const uint8_t *data, uint32_t vi, uint32_t count,
                     XboxBgStripWriter writer, void *user) {
    ++calls;
    if (kind != kindWanted || data != vu.data() || vi != viWanted || count != countWanted)
        std::abort();
    if (!hit) return false;
    ++callbacks;
    writer(packed.data() + 1, user);
    return true;
}

static std::vector<uint8_t> fixture(uint32_t kind, uint32_t vi, uint32_t count, uint8_t seed) {
    kindWanted = kind; viWanted = vi; countWanted = count;
    packed.assign(1 + count * 44, 0);
    vu.fill(0xA5); // Geometry in VU differs, so a silent live decode cannot pass.
    for (uint32_t i = 0; i < count; ++i) {
        auto *p = packed.data() + 1 + i * 44;
        for (uint32_t byte = 0; byte < 44; ++byte) p[byte] = uint8_t(seed + i * 7 + byte);
        if (kind == 0) std::memset(p + 12, 0, 12);
        std::memset(p + 40, 0, 4);
        // Explicit float words retain signed zero and a NaN payload bit-for-bit.
        const uint32_t x = i ? 0x7FC01234u : 0x80000000u;
        std::memcpy(p, &x, 4);
        for (uint32_t lane = 0; lane < 4; ++lane) {
            auto *c = vu.data() + (vi + 64 + i) * 16 + lane * 4;
            c[0] = uint8_t(0x81 + i * 3 + lane * 17);
            c[1] = 0xCC; c[2] = 0xDD; c[3] = 0xEE; // Only low bytes matter.
        }
    }
    std::vector<uint8_t> expected(packed.begin() + 1, packed.end());
    for (uint32_t i = 0; i < count; ++i) {
        auto *p = expected.data() + i * 44;
        const auto *c = vu.data() + (vi + 64 + i) * 16;
        p[24] = c[8]; p[25] = c[4]; p[26] = c[0]; p[27] = c[12];
    }
    return expected;
}

static bool flat() {
    for (uint32_t kind : {0u, 1u}) for (uint32_t n : {3u, 4u, 64u}) {
        const uint32_t vi = 1024 - 128 - n; // Last legal full native array span.
        const auto expected = fixture(kind, vi, n, 11);
        const auto originalPacked = packed;
        const auto originalVu = vu;
        GSXfVertex out[66]; std::memset(out, 0xB6, sizeof(out));
        GSXfVertex canary; std::memset(&canary, 0xB6, sizeof(canary));
        const uint32_t before = calls, wrote = callbacks;
        CHECK(xboxBgTryDecodeStrip(kind, vu.data(), vi, n, out + 1));
        CHECK(calls == before + 1 && callbacks == wrote + 1);
        CHECK(packed == originalPacked && vu == originalVu);
        packed.assign(packed.size(), 0); vu.fill(0); // No source pointer is retained.
        CHECK(std::memcmp(out + 1, expected.data(), expected.size()) == 0);
        CHECK(std::memcmp(out, &canary, 44) == 0 && std::memcmp(out + 1 + n, &canary, 44) == 0);
    }
    return true;
}

static bool joined() {
    for (uint32_t kind : {0u, 1u}) {
        GSXfVertex ring[16]; std::memset(ring, 0xB6, sizeof(ring));
        GSXfVertex canary; std::memset(&canary, 0xB6, sizeof(canary));
        GSXfCursor cursor; cursor.direct = true; cursor.next = ring + 1; cursor.end = ring + 15;
        std::vector<uint8_t> expected;
        uint32_t strips = 0, vertices = 0;
        for (uint32_t n : {3u, 4u, 3u}) {
            const auto batch = fixture(kind, 280, n, uint8_t(7 + strips * 31));
            if (strips) {
                const std::array<uint8_t, 44> last = [&] {
                    std::array<uint8_t, 44> result{};
                    std::copy(expected.end() - 44, expected.end(), result.begin());
                    return result;
                }();
                expected.insert(expected.end(), last.begin(), last.end());
                expected.insert(expected.end(), batch.begin(), batch.begin() + 44);
            }
            expected.insert(expected.end(), batch.begin(), batch.end());
            const uint32_t before = calls, wrote = callbacks;
            CHECK(xboxBgTryWriteJoinedStrip(kind, cursor, vu.data(), 280, n));
            CHECK(calls == before + 1 && callbacks == wrote + 1);
            ++strips; vertices += n;
            packed.assign(packed.size(), 0); vu.fill(0);
            CHECK(cursor.next == ring + 1 + expected.size() / 44 && cursor.end == ring + 15);
            CHECK(cursor.direct && cursor.join && cursor.strips == strips && cursor.vertices == vertices);
            CHECK(std::memcmp(ring + 1, expected.data(), expected.size()) == 0);
            CHECK(std::memcmp(&cursor.last, batch.data() + batch.size() - 44, 44) == 0);
            CHECK(std::memcmp(ring, &canary, 44) == 0 && std::memcmp(cursor.next, &canary, 44) == 0);
        }
    }
    return true;
}

static bool sameCursor(const GSXfCursor &a, const GSXfCursor &b) {
    return a.next == b.next && a.end == b.end && a.direct == b.direct && a.join == b.join &&
        a.strips == b.strips && a.vertices == b.vertices && std::memcmp(&a.last, &b.last, 44) == 0;
}

static bool misses() {
    fixture(0, 280, 3, 17);
    GSXfVertex out[8]; std::memset(out, 0xB6, sizeof(out));
    std::array<uint8_t, sizeof(out)> original{}; std::memcpy(original.data(), out, sizeof(out));
    GSXfCursor good; good.direct = good.join = true; good.next = out + 1; good.end = out + 7;
    good.strips = 7; good.vertices = 21; std::memset(&good.last, 0x47, 44);
    GSXfCursor cursor = good;
    hit = false;
    CHECK(!xboxBgTryDecodeStrip(0, vu.data(), 280, 3, out));
    CHECK(!xboxBgTryWriteJoinedStrip(0, cursor, vu.data(), 280, 3));
    CHECK(calls == 2 && callbacks == 0 && sameCursor(cursor, good));
    CHECK(std::memcmp(out, original.data(), sizeof(out)) == 0);
    hit = true;
    const uint32_t before = calls;
    struct Bad { uint32_t kind, vi, n; const uint8_t *vu; };
    for (const Bad b : {Bad{2,280,3,vu.data()}, Bad{3,280,3,vu.data()}, Bad{~0u,280,3,vu.data()},
                       Bad{0,280,2,vu.data()}, Bad{0,280,65,vu.data()}, Bad{0,894,3,vu.data()},
                       Bad{0,~0u,3,vu.data()}, Bad{0,280,3,nullptr}}) {
        cursor = good;
        CHECK(!xboxBgTryDecodeStrip(b.kind, b.vu, b.vi, b.n, out));
        CHECK(!xboxBgTryWriteJoinedStrip(b.kind, cursor, b.vu, b.vi, b.n));
        CHECK(sameCursor(cursor, good));
    }
    CHECK(!xboxBgTryDecodeStrip(0, vu.data(), 280, 3, nullptr));
    for (unsigned mode = 0; mode < 7; ++mode) {
        cursor = good;
        if (mode == 0) cursor.direct = false;
        if (mode == 1) cursor.next = nullptr;
        if (mode == 2) cursor.end = nullptr;
        if (mode == 3) cursor.end = out;
        if (mode == 4) cursor.end = cursor.next + 4; // Needs 3 + 2 join vertices.
        if (mode == 5) cursor.strips = std::numeric_limits<uint32_t>::max();
        if (mode == 6) cursor.vertices = std::numeric_limits<uint32_t>::max() - 2;
        const GSXfCursor prior = cursor;
        CHECK(!xboxBgTryWriteJoinedStrip(0, cursor, vu.data(), 280, 3));
        CHECK(sameCursor(cursor, prior));
    }
    CHECK(calls == before && callbacks == 0);
    CHECK(std::memcmp(out, original.data(), sizeof(out)) == 0);
    return true;
}

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    return (mode == "flat" ? flat() : mode == "joined" ? joined() : mode == "misses" && misses()) ? 0 : 1;
}
'''


class VertexTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temp = tempfile.TemporaryDirectory()
        cls.addClassCleanup(cls.temp.cleanup)
        directory = Path(cls.temp.name)
        source = directory / "probe.cpp"
        source.write_text(PROBE)
        cls.probe = directory / "probe"
        command = shlex.split(os.environ.get("CXX", "c++"))
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-I", str(XBOX),
                    "-I", str(ROOT / "source/PS2Recomp/ps2xRuntime/include")]
        command += shlex.split(os.environ.get("TS_XBG_CXXFLAGS", ""))
        subprocess.run(command + [str(source), str(XBOX / "xbox_bg_xf.cpp"), "-o", str(cls.probe)], check=True)

    def run_probe(self, mode):
        result = subprocess.run([str(self.probe), mode], capture_output=True, text=True)
        self.assertEqual(result.stderr, "", result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_flat_live_colors_exact_geometry_and_bounds(self):
        self.run_probe("flat")

    def test_joined_strips_cached_last_and_cursor_accounting(self):
        self.run_probe("joined")

    def test_binding_miss_and_invalid_inputs_leave_output_untouched(self):
        self.run_probe("misses")


class PatcherTests(unittest.TestCase):
    def test_only_group_loop_two_production_calls_and_include_change(self):
        source = NATIVE.read_text()
        result = patcher.patch_source(source)
        self.assertIn('ts_native_xf::decodeXfStrip(kind, data, vi, n - 1u, s_ringShadow);', result)
        restored = result.removeprefix(patcher.GENERATED)
        restored = restored.replace('#include "vu1_native_xf.h"\n#include "xbox_bg_xf.h"',
                                    '#include "vu1_native_xf.h"')
        restored = restored.replace(
            '                if (!xboxBgTryWriteJoinedStrip(kind, cursor, data, vi, n))\n'
            '                    ts_native_xf::writeJoinedStrip(kind, cursor, data, vi, n);',
            '                ts_native_xf::writeJoinedStrip(kind, cursor, data, vi, n);')
        restored = restored.replace(
            '                if (!xboxBgTryDecodeStrip(kind, data, vi, n, list))\n'
            '                    ts_native_xf::decodeXfStrip(kind, data, vi, n, list);',
            '                ts_native_xf::decodeXfStrip(kind, data, vi, n, list);')
        restored = restored.replace(patcher.GROUP_REPLACEMENT, patcher.GROUP)
        self.assertEqual(restored, source)

    def test_missing_duplicate_and_repatched_anchors_fail(self):
        source = NATIVE.read_text()
        for anchor in (patcher.INCLUDE, patcher.JOINED, patcher.FLAT, patcher.GROUP):
            for invalid in (source.replace(anchor, "// changed", 1), source + "\n" + anchor):
                with self.subTest(anchor=anchor), self.assertRaises(ValueError):
                    patcher.patch_source(invalid)
        with self.assertRaises(ValueError):
            patcher.patch_source(patcher.patch_source(source))

    def test_cli_preserves_shared_input_and_previous_output_on_rejection(self):
        with tempfile.TemporaryDirectory() as temp:
            source, output = Path(temp) / "input.cpp", Path(temp) / "copy.cpp"
            original = NATIVE.read_bytes()
            source.write_bytes(original)
            command = [sys.executable, str(TOOL), str(source), str(output)]
            result = subprocess.run(command, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(source.read_bytes(), original)
            previous = output.read_bytes()
            source.write_text("// changed upstream shape\n")
            self.assertEqual(subprocess.run(command, capture_output=True).returncode, 2)
            self.assertEqual(output.read_bytes(), previous)
            command[-1] = str(source)
            self.assertEqual(subprocess.run(command, capture_output=True).returncode, 2)
            self.assertEqual(source.read_text(), "// changed upstream shape\n")


if __name__ == "__main__":
    unittest.main()

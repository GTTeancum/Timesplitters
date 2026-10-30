"""Deferred native probes for the Xbox flat transform-ring cursor handoff.

The fixture compiles the production cursor/accounting methods unchanged,
with a small segment and a recorded reservation/fence simulator. It checks
ordering and ownership, not GPU visibility, pbkit fences or target behavior.
These probes are source-authored; the no-interim-build pass does not run them.
"""
from __future__ import annotations

import os
from pathlib import Path
import shlex
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]


def method(source: str, signature: str) -> str:
    """Use the exact production body, failing if the expected shape drifts."""
    anchor = "    " + signature
    if source.count(anchor) != 1:
        raise ValueError("expected one production method: " + signature)
    start = source.index(anchor)
    end = source.index("\n    }\n", start) + len("\n    }")
    return source[start:end]


PREFIX = r'''
#include "runtime/gs/gs_backend.h"
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#define CHECK(x) do { if (!(x)) { std::cerr << __LINE__ << ": " #x "\n"; return false; } } while (0)
struct Stats { uint32_t xfStrips = 0, xfVertices = 0; } g_nv2aTextureStats;
constexpr uint32_t kDisplayRows = 512u;
struct DrawKey { uint32_t topology = 0; };
struct Backend {
    static constexpr uint32_t kXfSegment = 16u;
    GSXfVertex records[kXfSegment * 2u]{};
    GSXfVertex *xfVertices = records;
    uint32_t xfUsed = 0, xfSegment = 0, batchCount = 0, batchFirst = 0;
    uint32_t frameHeight = 224u, gpuRows = 0;
    bool screenGpuNewer = false;
    DrawKey batchKey{}, runKey{};
    GSXfVertex stripLast{};
    GSXfCursor *flatXfCursor = nullptr;
    struct Fence { uint32_t segment, used, count; };
    std::vector<Fence> fences;
    void nextXfSegment() {
        // Record exactly what reserveXf would hand off before reuse. No
        // fake GPU timing or fence-completion claim is made by this probe.
        fences.push_back({xfSegment, xfUsed, batchCount});
        batchCount = 0;
        xfSegment = (xfSegment + 1u) % 2u;
        xfUsed = xfSegment * kXfSegment;
    }
'''

SUFFIX = r'''
};

static void pending(GSXfCursor &cursor, uint32_t marker) {
    for (uint32_t i = 0; i < 3u; ++i) {
        cursor.next[i] = {};
        cursor.next[i].color = marker + i;
    }
    cursor.next += 3u;
    ++cursor.strips;
    cursor.vertices += 3u;
}

static bool mixed() {
    Backend backend; GSXfCursor cursor;
    backend.stripLast.color = 73u;
    CHECK(backend.begin(false, cursor));
    CHECK(!cursor.direct && !cursor.join && cursor.next == backend.records &&
          cursor.end == backend.records + 16u && backend.flatXfCursor == &cursor);
    pending(cursor, 100u);
    GSXfVertex legacy[4]{};
    for (uint32_t i = 0; i < 4u; ++i) legacy[i].color = 10u + i;
    backend.emitXfStrip(legacy, 4u);
    const uint32_t expected[] = {100, 101, 102, 12, 10, 11, 13, 11, 12};
    for (uint32_t i = 0; i < 9u; ++i) CHECK(backend.records[i].color == expected[i]);
    CHECK(backend.xfUsed == 9u && backend.batchCount == 9u && cursor.next == backend.records + 9u);
    CHECK(cursor.strips == 0u && cursor.vertices == 0u && !cursor.direct && !cursor.join);
    CHECK(g_nv2aTextureStats.xfStrips == 2u && g_nv2aTextureStats.xfVertices == 7u);
    pending(cursor, 200u);
    backend.endXfRun(cursor);
    CHECK(backend.xfUsed == 12u && backend.batchCount == 12u && backend.flatXfCursor == nullptr);
    CHECK(backend.records[9].color == 200u && backend.records[11].color == 202u);
    CHECK(backend.stripLast.color == 73u); // Flat writes never seed a joined-strip vertex.
    CHECK(g_nv2aTextureStats.xfStrips == 3u && g_nv2aTextureStats.xfVertices == 10u);
    CHECK(backend.screenGpuNewer && backend.gpuRows == 224u && backend.fences.empty());
    return true;
}

static bool rollover() {
    Backend backend; GSXfCursor cursor;
    backend.xfUsed = backend.batchCount = 13u;
    CHECK(backend.begin(false, cursor));
    pending(cursor, 100u); // Exactly fills the old segment before fallback.
    GSXfVertex legacy[3]{};
    for (uint32_t i = 0; i < 3u; ++i) legacy[i].color = 10u + i;
    backend.emitXfStrip(legacy, 3u);
    CHECK(backend.fences.size() == 1u && backend.fences[0].segment == 0u &&
          backend.fences[0].used == 16u && backend.fences[0].count == 16u);
    CHECK(backend.records[13].color == 100u && backend.records[15].color == 102u);
    CHECK(backend.records[16].color == 12u && backend.records[17].color == 10u &&
          backend.records[18].color == 11u);
    CHECK(backend.xfUsed == 19u && backend.batchCount == 3u &&
          cursor.next == backend.records + 19u && cursor.end == backend.records + 32u);
    pending(cursor, 200u);
    backend.endXfRun(cursor);
    CHECK(backend.xfUsed == 22u && backend.batchCount == 6u && backend.flatXfCursor == nullptr);
    CHECK(backend.records[19].color == 200u && backend.records[21].color == 202u);
    CHECK(g_nv2aTextureStats.xfStrips == 3u && g_nv2aTextureStats.xfVertices == 9u);
    return true;
}

static bool joined() {
    Backend backend; GSXfCursor cursor;
    CHECK(backend.begin(true, cursor));
    CHECK(cursor.direct && !cursor.join && backend.flatXfCursor == nullptr);
    pending(cursor, 100u); cursor.last.color = 102u;
    backend.growXfCursor(cursor, 16u);
    CHECK(backend.fences.size() == 1u && backend.fences[0].used == 3u &&
          backend.fences[0].count == 3u && backend.stripLast.color == 102u);
    CHECK(cursor.direct && !cursor.join && cursor.next == backend.records + 16u &&
          cursor.end == backend.records + 32u);
    pending(cursor, 200u); cursor.last.color = 202u;
    backend.endXfRun(cursor);
    CHECK(backend.xfUsed == 19u && backend.batchCount == 3u && backend.stripLast.color == 202u);
    CHECK(g_nv2aTextureStats.xfStrips == 2u && g_nv2aTextureStats.xfVertices == 6u);
    return true;
}

static bool disabled() {
    Backend backend; GSXfCursor cursor;
    CHECK(backend.begin(false, cursor));
    CHECK(!cursor.direct && cursor.next == nullptr && cursor.end == nullptr &&
          backend.flatXfCursor == nullptr);
    GSXfVertex legacy[3]{};
    for (uint32_t i = 0; i < 3u; ++i) legacy[i].color = 10u + i;
    backend.emitXfStrip(legacy, 3u);
    backend.endXfRun(cursor);
    CHECK(backend.xfUsed == 3u && backend.batchCount == 3u && cursor.next == nullptr);
    CHECK(backend.records[0].color == 12u && backend.records[1].color == 10u &&
          backend.records[2].color == 11u);
    CHECK(g_nv2aTextureStats.xfStrips == 1u && g_nv2aTextureStats.xfVertices == 3u);
    return true;
}

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    return (mode == "mixed" ? mixed() : mode == "rollover" ? rollover()
        : mode == "joined" ? joined() : mode == "disabled" && disabled()) ? 0 : 1;
}
'''


class CursorLifecycleTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        source = (XBOX / "gs_nv2a_backend.cpp").read_text()
        begin = method(source, "bool beginXfRun(")
        start = begin.index("        runKey = key;")
        tail = begin[start:begin.rindex("\n    }")]
        methods = "\n".join(method(source, signature) for signature in (
            "GSXfVertex *reserveXf(", "void openXfCursor(", "void takeXfCursor(",
            "void growXfCursor(", "void emitXfStrip(", "void endXfRun("))
        begin_fixture = ("    bool begin(bool direct, GSXfCursor &cursor) {\n"
                         "        DrawKey key; key.topology = direct ? 1u : 0u;\n" + tail + "\n    }\n")
        cls.temp = tempfile.TemporaryDirectory()
        cls.addClassCleanup(cls.temp.cleanup)
        directory = Path(cls.temp.name)
        probe = directory / "cursor.cpp"
        probe.write_text(PREFIX + methods + "\n" + begin_fixture + SUFFIX)
        command = shlex.split(os.environ.get("CXX", "c++"))
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-I",
                    str(ROOT / "source/PS2Recomp/ps2xRuntime/include")]
        command += shlex.split(os.environ.get("TS_XBG_CXXFLAGS", ""))
        cls.probes = {}
        for native, batch in ((1, 1), (0, 1), (1, 0)):
            executable = directory / f"cursor_{native}_{batch}"
            subprocess.run(command + [f"-DTS_BG_NATIVE={native}", f"-DTS_BG_BATCH={batch}",
                                      str(probe), "-o", str(executable)], check=True)
            cls.probes[native, batch] = executable

    def run_probe(self, mode, flags=(1, 1)):
        result = subprocess.run([str(self.probes[flags]), mode], capture_output=True, text=True)
        self.assertEqual(result.stderr, "", result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_pending_flat_group_precedes_legacy_array_and_final_group(self):
        self.run_probe("mixed")

    def test_pending_records_are_accounted_before_segment_handoff(self):
        self.run_probe("rollover")

    def test_joined_cursor_accounting_retains_existing_behavior(self):
        for flags in self.probes:
            with self.subTest(flags=flags):
                self.run_probe("joined", flags)

    def test_either_disabled_switch_retains_original_flat_cursor(self):
        for flags in ((0, 1), (1, 0)):
            with self.subTest(flags=flags):
                self.run_probe("disabled", flags)


if __name__ == "__main__":
    unittest.main()

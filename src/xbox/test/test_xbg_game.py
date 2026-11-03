"""Entry-hook boundaries and chaining, with synthetic guest RAM only.

Compiles the unchanged production TU against a minimal runtime function table;
pack loading, provenance and rendering have their own independent tests.
"""
from pathlib import Path
import os
import shlex
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]

RUNTIME = r"""
#pragma once
#include <array>
#include <cstdint>
#include <unordered_map>
constexpr uint32_t PS2_RAM_SIZE = 32u * 1024u * 1024u;
struct R5900Context { std::array<uint8_t, 16> r[32]{}; uint32_t pc = 0; };
class PS2Runtime {
public:
    using RecompiledFunction = void (*)(uint8_t *, R5900Context *, PS2Runtime *);
    std::unordered_map<uint32_t, RecompiledFunction> table;
    bool hasFunction(uint32_t p) const { return table.count(p) && table.at(p); }
    RecompiledFunction lookupFunction(uint32_t p) { return table.at(p); }
    bool replaceFunction(uint32_t p, RecompiledFunction f) { table.at(p) = f; return true; }
};
"""

PROBE = r"""
#include "ps2_runtime.h"
#include "xbox_bg_game.h"
#include "xbox_bg_runtime.h"
#include <cassert>
#include <cstring>
#include <string>
#include <vector>

struct Event { char kind; uint32_t level, base, bytes; };
std::vector<Event> events;
void xboxBgPrepareSource(uint8_t *, uint32_t l, uint32_t b, uint32_t n) {
    events.push_back({'P', l, b, n});
}
void xboxBgActivateSource(uint8_t *, uint32_t l, uint32_t b, uint32_t n) {
    events.push_back({'A', l, b, n});
}
void xboxBgResetSource() { events.push_back({'R', 0, 0, 0}); }
void xboxBgInvalidateSource() { events.push_back({'I', 0, 0, 0}); }
void xboxBgSourceWrite(uint32_t d) { events.push_back({'W', 0, d, 0}); }
void original(uint8_t *, R5900Context *ctx, PS2Runtime *) {
    events.push_back({'O', 0, 0, 0});
    ctx->pc = 0x256518u; // Simulate a yield into a separate generated resume.
}
void resume(uint8_t *, R5900Context *, PS2Runtime *) { events.push_back({'Y', 0, 0, 0}); }

constexpr uint32_t gp = 0x3F0000, table = 0x1FB4C60, name = 0x10000;
constexpr uint32_t raw = 0x100000, rawBytes = 0x101;
const char canonical[] = "host0:bg/level26/level26.raw";
std::vector<uint8_t> ram(PS2_RAM_SIZE);
R5900Context ctx;
PS2Runtime runtime;
void word(uint32_t p, uint32_t v) { std::memcpy(ram.data() + p, &v, 4); }
void reg(unsigned r, uint32_t v) { std::memcpy(ctx.r[r].data(), &v, 4); }
void record(uint32_t i, uint32_t kind, uint32_t n = name) {
    const uint32_t p = table + i * 24;
    word(p, kind); word(p + 12, n); word(p + 16, raw); word(p + 20, rawBytes);
}
void fixture() {
    ctx = {};
    std::memset(ram.data() + table, 0, 500 * 24);
    reg(28, gp); reg(4, name);
    word(gp - 0x6090, 26); word(gp - 0x6290, 2);
    std::memcpy(ram.data() + name, canonical, sizeof(canonical));
    record(0, 1, 0xFFFFFFFF); // Non-file entries must not dereference filename.
    record(1, 0);
}
void invoke(uint32_t pc, const char *expected) {
    events.clear();
    const auto before = ctx;
    ctx.pc = pc;
    runtime.lookupFunction(pc)(ram.data(), &ctx, &runtime);
    std::string actual;
    for (const Event &e : events) actual += e.kind;
    assert(actual == expected);
    assert(std::memcmp(before.r, ctx.r, sizeof(ctx.r)) == 0);
}
void prepared(uint32_t pc, const char *expected) {
    invoke(pc, expected);
    assert(events[0].level == 26 && events[0].base == raw && events[0].bytes == rawBytes);
}

int main() {
    const uint32_t entries[] = {0x2564A8, 0x253B88, 0x256750, 0x21C1F8,
        0x21C728, 0x2567F8, 0x260258, 0x278888, 0x278998};
    for (uint32_t pc : entries) runtime.table[pc] = &original;
    runtime.table[0x256518] = &resume;
    xboxBgInstallGameHooks(runtime);
    fixture();
    prepared(0x2564A8, "PO");
    assert(ctx.pc == 0x256518);
    invoke(0x256518, "Y"); // No duplicate observation at a resume entry.
    invoke(0x256750, "RO"); // Retains the verified pending source for bgLoad.
    prepared(0x253B88, "AO");
    for (uint32_t pc : {0x21C1F8u, 0x21C728u, 0x2567F8u}) invoke(pc, "IO");
    xboxBgInstallGameHooks(runtime);
    prepared(0x2564A8, "PO"); // Reinstall does not chain a hook to itself.

    // Capacity boundary, ambiguous matches, invalid names and exact RAM spans.
    for (uint32_t i = 0; i < 500; ++i) record(i, 1, 0);
    record(499, 0); word(gp - 0x6290, 500);
    prepared(0x2564A8, "PO");
    for (uint32_t count : {0u, 501u, 0xFFFFFFFFu}) {
        word(gp - 0x6290, count); invoke(0x2564A8, "IO");
    }
    fixture(); record(0, 0); invoke(0x2564A8, "IO");
    fixture(); word(table + 24 + 12, PS2_RAM_SIZE - 4);
    std::memcpy(ram.data() + PS2_RAM_SIZE - 4, "bg/l", 4);
    invoke(0x2564A8, "IO");
    fixture(); std::memset(ram.data() + name, 'x', 256); invoke(0x2564A8, "IO");
    fixture(); word(table + 24 + 16, PS2_RAM_SIZE - 8);
    word(table + 24 + 20, 16); invoke(0x2564A8, "IO");
    fixture(); word(table + 24 + 16, 0x80000000); invoke(0x2564A8, "IO");
    fixture(); word(table + 24 + 20, 0); invoke(0x2564A8, "IO");
    fixture(); word(table + 24 + 16, PS2_RAM_SIZE - 16);
    word(table + 24 + 20, 16); invoke(0x2564A8, "PO");
    assert(events[0].base == PS2_RAM_SIZE - 16 && events[0].bytes == 16);
    for (uint32_t level : {0u, 100u, 101u, 102u, 103u, 104u, 105u, 0xFFFFFFFFu}) {
        fixture(); word(gp - 0x6090, level); invoke(0x2564A8, "IO");
    }
    fixture(); reg(28, 1); invoke(0x2564A8, "IO");
    fixture(); reg(28, 0xFFFFFFFF); invoke(0x2564A8, "IO");
    fixture(); reg(4, name + 1); invoke(0x253B88, "IO");
    fixture(); ram[name] = 'B'; invoke(0x2564A8, "IO");
    for (const char *wrong : {"bg/level26/level26.raw", "host1:bg/level26/level26.raw",
                             "cdrom0:bg/level26/level26.raw"}) {
        fixture(); std::strcpy(reinterpret_cast<char *>(ram.data()+name),wrong);
        invoke(0x2564A8, "IO"); // A PAK-relative or different-device record is not the loaded file.
        fixture(); std::strcpy(reinterpret_cast<char *>(ram.data()+name+128),wrong);
        reg(4,name+128); invoke(0x253B88, "IO"); // A correct preload record cannot legitimize another a0.
    }

    // Writes report actual a1 destinations; nonpositive counts do not write.
    fixture(); reg(5, raw + 32); reg(6, 3);
    for (uint32_t pc : {0x278888u, 0x278998u}) {
        invoke(pc, "WO"); assert(events[0].base == raw + 32);
        reg(6, 0); invoke(pc, "O");
        reg(6, 0xFFFFFFFF); invoke(pc, "O"); reg(6, 3);
    }
    // External model aliasing source positions, both variant array locations.
    const uint32_t model = 0x200000;
    fixture(); reg(4, model); reg(5, 0); word(model, 1);
    for (uint32_t variant : {0u, 1u}) {
        reg(6, variant); word(model - 80 + (variant ? 0x30 : 0x18), raw + 64);
        invoke(0x260258, "WWO");
        assert(events[0].base == model && events[1].base == raw + 64);
    }
    reg(4, raw); word(raw, 0); invoke(0x260258, "WO");
    assert(events[0].base == raw); // Empty first part still covers sibling writes.

    // A missing required hook disables observations, but preserves old handlers.
    runtime.table.erase(0x278998);
    xboxBgInstallGameHooks(runtime);
    fixture(); invoke(0x2564A8, "O");
    runtime.table[0x278998] = &original;
    xboxBgInstallGameHooks(runtime);
    prepared(0x2564A8, "PO");
}
"""


class GameHookTests(unittest.TestCase):
    def test_entry_observations_and_bounds(self):
        with tempfile.TemporaryDirectory(prefix="xbg-game-") as directory:
            work = Path(directory)
            (work / "ps2_runtime.h").write_text(RUNTIME)
            (work / "probe.cpp").write_text(PROBE)
            compiler = shlex.split(os.environ.get("CXX", "c++"))
            command = compiler + ["-std=c++17", "-O1", "-Wall", "-Wextra", "-Werror"]
            command += shlex.split(os.environ.get("XBG_GAME_TEST_CXXFLAGS", ""))
            command += ["-I", str(work), "-I", str(XBOX), str(work / "probe.cpp"),
                        str(XBOX / "xbox_bg_game.cpp"), "-o", str(work / "probe")]
            built = subprocess.run(command, capture_output=True, text=True)
            self.assertEqual(built.returncode, 0, built.stdout + built.stderr)
            ran = subprocess.run([str(work / "probe")], capture_output=True, text=True)
            self.assertEqual(ran.returncode, 0, ran.stdout + ran.stderr)


if __name__ == "__main__":
    unittest.main()

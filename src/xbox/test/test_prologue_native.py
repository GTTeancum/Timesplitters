"""Host test of the native prologue tokens (TS_NATIVE_REPLAY, src/xbox/xbox_part_prologue.cpp).

prologue_native_test.cpp runs partGfx prologue records natively (the walker's
marker, then the decoder's native run) and through a reference of the VIF
decoder on the payloads the walker would have listed, from random VIF1
registers and VU1 memory, and compares VU1 memory, every VIF1 register, the
MSCAL runs and the watched rows. It is built against a small stand-in for
runtime/ps2_memory.h written here (PS2Memory with its RAM and the decoder
entry the fallback calls); the real ps2_vu1_watch.h is used. Compiles and
runs native C++ (CXX, default clang++).
"""
from __future__ import annotations

import os
from pathlib import Path
import shlex
import shutil
import subprocess
import tempfile
import unittest


XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
RUNTIME_INCLUDE = ROOT / "source/PS2Recomp/ps2xRuntime/include"

SHIM = """#pragma once
// Stand-in for the runtime's ps2_memory.h (test_prologue_native.py).
#include <cstddef>
#include <cstdint>
#include <utility>
constexpr uint32_t PS2_RAM_SIZE = 32u * 1024u * 1024u;
constexpr uint32_t PS2_RAM_MASK = PS2_RAM_SIZE - 1u;
inline bool ps2IsScratchpadAddress(uint32_t addr) { return addr >= 0x70000000u && addr < 0x70004000u; }
struct VIFRegisters
{
    uint32_t stat, fbrst, err, mark, cycle, mode, num, mask, code, itops, base, ofst, tops, itop, top, row[4], col[4];
};
class PS2Memory
{
public:
    using Vif1Piece = std::pair<const uint8_t *, uint32_t>;
    uint8_t *rdram = nullptr;
    uint8_t *getRDRAM() { return rdram; }
    uint32_t decodeVIF1Pieces(const Vif1Piece *pieces, size_t count, uint32_t bytes, bool chainEnd);
};
"""


class PrologueNativeTest(unittest.TestCase):
    def test_native_prologue_matches_decoder(self):
        command = shlex.split(os.environ.get("CXX", "clang++"))
        if not command or not shutil.which(command[0]):
            self.skipTest("requires a host C++ compiler")
        with tempfile.TemporaryDirectory(prefix="ts-prologue-native-") as tmp:
            shim = Path(tmp) / "shim" / "runtime"
            shim.mkdir(parents=True)
            (shim / "ps2_memory.h").write_text(SHIM, encoding="utf-8")
            # The real watched-rows header next to the stand-in.
            shutil.copy(RUNTIME_INCLUDE / "runtime" / "ps2_vu1_watch.h", shim / "ps2_vu1_watch.h")
            out = Path(tmp) / "prologue_native_test"
            build = command + ["-std=c++20", "-O1", "-DTS_NATIVE_MODELS=1", "-DTS_NATIVE_REPLAY=1",
                               "-I", str(Path(tmp) / "shim"), "-I", str(XBOX),
                               str(XBOX / "test" / "prologue_native_test.cpp"), str(XBOX / "xbox_part_prologue.cpp"),
                               "-o", str(out)]
            result = subprocess.run(build, capture_output=True, text=True, timeout=180)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            result = subprocess.run([str(out)], capture_output=True, text=True, timeout=120)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            self.assertIn("native prologue host test passed", result.stdout)


if __name__ == "__main__":
    unittest.main()

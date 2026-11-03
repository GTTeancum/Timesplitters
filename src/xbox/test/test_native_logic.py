"""Host test of TS_NATIVE_LOGIC's rewritten functions and leaf copies.

For each function under test the ordinary Xbox copy (patch_generated.py) and
the rewritten copy (logic_generated.py) are compiled for the host and run by
native_logic_test.cpp from the same random guest states, with checkpoints
that come due at random, a mock callee that yields at random, and the real
translated leaf originals in the function table (published as the leaf
natives, so the promoted copy runs its inline leaves against them). The
contexts at every dispatcher step and at every call, the pc every slow guest
access sees, and the final context and guest memory must be identical.

Also checks the patchers' text: the default patch is unchanged without
--logic, every function gets the entry guard, and the promoter refuses what
it does not understand.

usage: test_native_logic.py [-v] (CXX: the host compiler, default clang++;
TS_LOGIC_FUNCTIONS: comma-separated names to test instead of the defaults;
TS_LOGIC_SAMPLE: that many more functions picked at random (seed
TS_LOGIC_SEED) from every generated one the rewrite accepts;
TS_LOGIC_MODE: lite (the build's, default) or full; TS_LOGIC_CASES: cases
per function, default 120)
"""
from __future__ import annotations

import importlib.util
import os
from pathlib import Path
import re
import shlex
import shutil
import subprocess
import sys
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
RUNTIME = ROOT / "source/PS2Recomp/ps2xRuntime"
GENERATED = ROOT / "project/generated"
TOOLS = XBOX / "tools"
TABLE = ROOT / "build/xbox/gen/register_functions_xbox.cpp"
sys.path.insert(0, str(TOOLS))

import direct_calls  # noqa: E402
import logic_generated  # noqa: E402
import promote_registers  # noqa: E402

DEFAULT_FUNCTIONS = [  # the profile's hot translated functions
    "findpadslinked2pad_0x264a18", "MoveTestWall_0x27cce0", "propMoveTestRoom_0x270e08",
    "propTickBefore_0x26f500", "pickupPropTick_0x26a330", "calMatrices_0x212e08", "playerTick_0x281248",
]
LEAF_FILES = {
    0x2D5E98: "sceVu0MulMatrix_0x2d5e98", 0x2D6188: "sceVu0UnitMatrix_0x2d6188",
    0x2D6120: "sceVu0CopyMatrix_0x2d6120", 0x2DC5A0: "fabsf_0x2dc5a0",
    0x2B5638: "matrixVecRotAligned_0x2b5638", 0x2B5570: "matrixVec3Mul4Aligned_0x2b5570",
}


MODE = os.environ.get("TS_LOGIC_MODE", "lite")


def patched_copy(name: str, slots: dict[int, int], logic: bool, promote: set[str]) -> str:
    """What patch_generated.py writes (the PATCHES table touches none of these)."""
    text = (GENERATED / (name + ".cpp")).read_text()
    text, _, _ = direct_calls.rewrite(text, slots)
    if logic:
        text, _ = logic_generated.apply(text, name + ".cpp", promote, slots, MODE)
    return text


class PatchTextTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not TABLE.exists():
            raise unittest.SkipTest("needs build/xbox/gen/register_functions_xbox.cpp (make generated tables)")
        cls.slots = direct_calls.read_slots(TABLE)

    def test_guard_skips_resume_switch_on_entry(self):
        text = patched_copy("findpadslinked2pad_0x264a18", self.slots, True, set())
        self.assertIn("if (ctx->pc != 0x264a18u) switch (ctx->pc) {", text)

    def test_promoted_has_no_pc_store_per_instruction(self):
        text = patched_copy("findpadslinked2pad_0x264a18", self.slots, True, {"findpadslinked2pad_0x264a18"})
        self.assertIn("Register-promoted", text)
        self.assertNotIn("ctx->pc = 0x264a1cu;", text)
        self.assertIn("XL_READ32(0x264A18u,", text)

    def test_refuses_unknown_shapes(self):
        text = patched_copy("findpadslinked2pad_0x264a18", self.slots, False, set())
        broken = text.replace("default: break;", "default: break;\n    } else {", 1)
        with self.assertRaises(promote_registers.PromoteError):
            promote_registers.promote(broken)

    def test_every_hot_function_promotes(self):
        for name in DEFAULT_FUNCTIONS:
            text = patched_copy(name, self.slots, False, set())
            promote_registers.promote(text)

    def test_makefile_list_promotes(self):
        # Every function TS_NATIVE_LOGIC promotes by default must promote:
        # a refusal would silently leave it slow.
        makefile = (XBOX / "Makefile").read_text()
        block = re.search(r"LOGIC_PROMOTE_NAMES \?=(.*?)\nLOGIC_STAMP", makefile, re.S).group(1)
        names = re.findall(r"\w+_0x[0-9a-f]+", block)
        self.assertGreaterEqual(len(names), len(DEFAULT_FUNCTIONS))
        leaves = {a: self.slots[a] for a in promote_registers.LEAVES}
        for name in names:
            promote_registers.promote(patched_copy(name, self.slots, False, set()), leaves)

    def test_native_copies(self):
        import patch_native_logic

        for name in ("ts_native_math", "ts_native_game", "ts_native_game2", "ts_native_game3"):
            source = (ROOT / "project/game" / (name + ".cpp")).read_text(encoding="utf-8")
            text = patch_native_logic.patch_source(source, name + ".cpp", self.slots)
            self.assertIn('#include "xbox_logic.h"', text)
            self.assertNotIn("xboxNativeGuestCall<", text)
            self.assertNotRegex(text, r"\b(guestCall|lightCall)\(\s*(G_PASS|rdram, ctx, runtime),\s*0x")
            if name == "ts_native_math":
                self.assertIn("xlNoteLeafNative(fn.address, fn.native);", text)
            if name == "ts_native_game2":
                self.assertIn("xlNativeLeafCall<", text)  # animMtxTick/calMatrices' sceVu0MulMatrix calls
            with self.assertRaises(ValueError):
                patch_native_logic.patch_source(text, name + ".cpp", self.slots)


class EquivalenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.command = shlex.split(os.environ.get("CXX", "clang++"))
        if not cls.command or not shutil.which(cls.command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        if not TABLE.exists():
            raise unittest.SkipTest("needs build/xbox/gen/register_functions_xbox.cpp")
        cls.temporary = tempfile.TemporaryDirectory(prefix="ts-native-logic-")
        cls.addClassCleanup(cls.temporary.cleanup)
        cls.dir = Path(cls.temporary.name)
        cls.slots = direct_calls.read_slots(TABLE)

    def compile(self, source: Path, extra: list[str]) -> Path:
        obj = self.dir / (source.stem + ".o")  # never next to a source in the tree
        # The host's SSE4.1 for the vector intrinsics. (The Xbox's SSE1-only
        # emulation, compat/ps2_simd_scalar.h, needs a 32-bit host compiler:
        # x86-64 headers always bring SSE2's.) Both sides of every comparison
        # use the same ones, and xbox_logic.h works on either representation.
        simd = ["-msse4.1"]
        command = self.command + [
            "-std=c++20", "-O1", "-w", "-c", *simd, "-DPLATFORM_XBOX=1", "-DPS2X_NO_EXCEPTIONS=1",
            "-DPS2X_HAS_FFMPEG=0", "-DPS2X_ENABLE_IOP_RPC_TRACE=0", "-DPS2X_DEVICE_CYCLE_BATCH=2048",
            "-DTS_NATIVE_LOGIC=1", *extra,
            "-I", str(RUNTIME / "include"), "-I", str(RUNTIME / "src/lib"), "-I", str(RUNTIME / "src/lib/Kernel"),
            "-I", str(ROOT / "source/PS2Recomp/ps2xIOP/include"), "-I", str(ROOT / "source/PS2Recomp/ps2xIOP/src"),
            "-I", str(GENERATED), "-I", str(XBOX), "-I", str(self.dir), str(source), "-o", str(obj)]
        result = subprocess.run(command, capture_output=True, text=True, timeout=1800)
        if result.returncode:
            raise AssertionError(" ".join(command) + "\n" + result.stdout + result.stderr[-6000:])
        return obj

    def test_promoted_functions_match_originals(self):
        names = [n for n in os.environ.get("TS_LOGIC_FUNCTIONS", "").split(",") if n] or list(DEFAULT_FUNCTIONS)
        sample = int(os.environ.get("TS_LOGIC_SAMPLE", "0"))
        if sample:
            import random

            rng = random.Random(int(os.environ.get("TS_LOGIC_SEED", "1")))
            pool = sorted(p.stem for p in GENERATED.glob("*_0x*.cpp") if p.stem not in names and
                          p.stem not in LEAF_FILES.values())
            rng.shuffle(pool)
            for name in pool:
                if len(names) >= len(DEFAULT_FUNCTIONS) + sample:
                    break
                text = patched_copy(name, self.slots, False, set())
                # The harness models calls, checkpoints, traps and the
                # dispatcher; syscalls and other runtime services it does not.
                if re.search(r"runtime->(?!eeCheckpointDue|dispatchGuestBranch|SignalException|handleBreak)\w+", text):
                    continue
                if re.search(r"\bps2_(syscalls|stubs)::", text):
                    continue
                try:
                    promote_registers.promote(text, None, MODE)
                except promote_registers.PromoteError:
                    continue
                names.append(name)
        cases = os.environ.get("TS_LOGIC_CASES", "120")
        objects, stubs, entries = [], set(), []
        defined = set(names) | set(LEAF_FILES.values())
        for name in names:
            original = self.dir / (name + ".orig.cpp")
            promoted = self.dir / (name + ".prom.cpp")
            original.write_text(patched_copy(name, self.slots, False, set()))
            text = patched_copy(name, self.slots, True, {name})
            mutate = os.environ.get("TS_LOGIC_MUTATE")
            if mutate:
                # Harness self-check: drop one store the promoted code needs;
                # the run must then report differences.
                at = text.find(mutate)
                self.assertGreaterEqual(at, 0, "mutation text not found")
                text = text[:at] + text[at + len(mutate):]
            promoted.write_text(text)
            self.assertIn("Register-promoted", text)
            objects.append(self.compile(original, []))
            objects.append(self.compile(promoted, ["-D%s=prom_%s" % (name, name)]))
            text = original.read_text()
            begin, end = re.search(r"// Address: (0x[0-9a-f]+) - (0x[0-9a-f]+)", text).groups()
            entries.append((name, int(begin, 16), int(end, 16)))
            stubs.update(re.findall(r"\b(\w+_0x[0-9a-f]+)\(rdram, ctx, runtime\)", text))
        for address, name in LEAF_FILES.items():
            leaf = self.dir / (name + ".leaf.cpp")
            leaf.write_text(patched_copy(name, self.slots, False, set()))
            objects.append(self.compile(leaf, []))
        stubs -= defined
        lines = ['#pragma once']
        for name in sorted(set(names) | set(LEAF_FILES.values()) | stubs):
            lines.append("void %s(uint8_t *, R5900Context *, PS2Runtime *);" % name)
        for name in names:
            lines.append("void prom_%s(uint8_t *, R5900Context *, PS2Runtime *);" % name)
        for name in sorted(stubs):
            lines.append("void %s(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime) { mockCallee(rdram, ctx, runtime); }"
                         % name)
        lines.append("struct TestFunction { const char *name; PS2Runtime::RecompiledFunction original, promoted; "
                     "uint32_t entry, end; };")
        lines.append("static const TestFunction kFunctions[] = {")
        for name, begin, end in entries:
            lines.append('    {"%s", &%s, &prom_%s, 0x%xu, 0x%xu},' % (name, name, name, begin, end))
        lines.append("};")
        lines.append("struct LeafEntry { uint32_t address, slot; PS2Runtime::RecompiledFunction original; };")
        lines.append("static const LeafEntry kLeaves[] = {")
        for address, name in LEAF_FILES.items():
            lines.append("    {0x%Xu, %du, &%s}," % (address, self.slots[address], name))
        lines.append("};")
        (self.dir / "native_logic_cases.inc").write_text("\n".join(lines) + "\n")
        harness = self.compile(XBOX / "test/native_logic_test.cpp", ["-DTEST_SLOT_COUNT=%du" % len(self.slots)])
        logic = self.compile(XBOX / "xbox_logic.cpp", [])
        exe = self.dir / "native_logic_test.exe"
        result = subprocess.run(self.command + [*map(str, objects), str(harness), str(logic), "-o", str(exe)],
                                capture_output=True, text=True, timeout=600)
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr[-6000:])
        result = subprocess.run([str(exe), cases], capture_output=True, text=True, timeout=3600)
        sys.stdout.write(result.stdout)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()

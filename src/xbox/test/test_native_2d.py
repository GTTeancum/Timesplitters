"""Host test of the native 2D route (TS_NATIVE_2D, src/xbox/xbox_native_2d.*).

The patcher must find each anchor once in the shared sources and in the
earlier stages' copies (native models for the walker and decoder, direct GIF
for the GS front end), and refuse its own output. native_2d_test.cpp, built
from the GS front end's patch_gif_direct.py + patch_native_2d.py copy, feeds
random batches of the emitters' items (static blocks from the game's ELF,
project/game-data/SLUS_200.90) through the reference VIF1 decode and through
the fast route; every renderer call, the VIF1 registers and the GS state
must be identical. Compiles and runs native C++ (CXX, default clang++).
"""
from __future__ import annotations

import importlib.util
import os
from pathlib import Path
import shlex
import shutil
import subprocess
import tempfile
import unittest


XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
RUNTIME = ROOT / "source/PS2Recomp/ps2xRuntime"
LIB = RUNTIME / "src/lib"
ELF = ROOT / "project/game-data/SLUS_200.90"


def load(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / "tools" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


direct = load("patch_gif_direct")
models = load("patch_native_models")
native2d = load("patch_native_2d")


class PatchTests(unittest.TestCase):
    def test_walker_and_decoder_over_both_inputs(self):
        memory = (LIB / "ps2_memory.cpp").read_text(encoding="utf-8")
        vif = (LIB / "ps2_vif1_interpreter.cpp").read_text(encoding="utf-8")
        for text in (memory, models.patch_memory(memory)):
            self.assertEqual(native2d.patch_memory(text).count("xboxNative2dWalk("), 1)
        for text in (vif, models.patch_vif(vif)):
            self.assertEqual(native2d.patch_vif(text).count("xboxNative2dPlan("), 1)

    def test_gs_needs_the_direct_stage(self):
        source = (LIB / "gs/gs_frontend.cpp").read_text(encoding="utf-8")
        with self.assertRaises(ValueError):
            native2d.patch_gs(source)
        patched = native2d.patch_source("gs", direct.patch_source(source))
        self.assertEqual(patched.count("xboxNative2dTakeKicks("), 1)
        with self.assertRaises(ValueError):
            native2d.patch_source("gs", patched)


@unittest.skipUnless(ELF.exists(), "requires project/game-data/SLUS_200.90")
class EquivalenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.command = shlex.split(os.environ.get("CXX", "clang++"))
        if not cls.command or not shutil.which(cls.command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory(prefix="ts-native-2d-")
        cls.addClassCleanup(cls.temporary.cleanup)
        cls.dir = Path(cls.temporary.name)

    def test_fast_route_matches_the_reference_decode(self):
        source = (LIB / "gs/gs_frontend.cpp").read_text(encoding="utf-8")
        copy = self.dir / "gs_native_2d.cpp"
        copy.write_text(native2d.patch_source("gs", direct.patch_source(source)), encoding="utf-8", newline="\n")
        exe = self.dir / "native_2d_test"
        command = self.command + [
            "-std=c++20", "-O1", "-w", "-DPLATFORM_XBOX=1", "-DTS_GIF_DIRECT=1", "-DTS_NATIVE_2D=1",
            "-DTS_NATIVE_2D_HOST_TEST=1", f'-DNATIVE_2D_GS_SOURCE="{copy.as_posix()}"',
            "-I", str(RUNTIME / "include"), "-I", str(LIB),
            "-I", str(ROOT / "source/PS2Recomp/ps2xIOP/include"), "-I", str(XBOX),
            str(XBOX / "test/native_2d_test.cpp"), str(XBOX / "xbox_gif_direct.cpp"), str(XBOX / "xbox_native_2d.cpp"),
            str(LIB / "gs/gs_cpu_backend.cpp"), str(LIB / "gs/ps2_gs_memory.cpp"),
            str(LIB / "ps2_host_settings.cpp"), "-o", str(exe)]
        result = subprocess.run(command, capture_output=True, text=True, timeout=600)
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr)
        outputs = [subprocess.run([str(exe), mode, "4000", str(ELF)], capture_output=True, text=True, timeout=300)
                   for mode in ("original", "native")]
        for out in outputs:
            self.assertEqual(out.returncode, 0, out.stderr)
        self.assertIn("native 2d: fast", outputs[1].stderr)
        if outputs[0].stdout != outputs[1].stdout:
            for number, (a, b) in enumerate(zip(outputs[0].stdout.splitlines(), outputs[1].stdout.splitlines())):
                if a != b:
                    self.fail(f"line {number + 1} differs:\n  original {a}\n  native   {b}")
            self.fail("outputs differ in length")
        print(outputs[1].stderr.strip())


if __name__ == "__main__":
    unittest.main()

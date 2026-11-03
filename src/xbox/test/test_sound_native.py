"""Host test of the Xbox sound path (TS_SOUND_NATIVE, src/xbox/xbox_sound_native.inl).

The SPU2 is built from the shared ps2_spu2.cpp and from the
patch_sound_native.py copy; sound_native_test.cpp plays the same random
script on each (random ADPCM sounds and loops, pitch, ADSR, swept volumes,
key on/off, sound RAM rewritten under playing voices, IRQs) and prints a
hash of the output and the read-back registers after every mix call. The
outputs must be identical. A steady many-voice load is also compared and
timed. Compiles and runs native C++ (CXX, default clang++).
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
SPU2 = RUNTIME / "src/lib/ps2_spu2.cpp"


def load(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / "tools" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


sound = load("patch_sound_native")


class PatchTests(unittest.TestCase):
    def test_patches_once(self):
        patched = sound.patch_source(SPU2.read_text(encoding="utf-8"))
        self.assertEqual(patched.count("#if !TS_SOUND_NATIVE"), 2)
        self.assertEqual(patched.count('#include "xbox_sound_native.inl"'), 1)
        with self.assertRaises(ValueError):
            sound.patch_source(patched)

    def test_crlf_kept(self):
        source = SPU2.read_text(encoding="utf-8").replace("\n", "\r\n")
        patched = sound.patch_source(source)
        self.assertNotIn("\n", patched.replace("\r\n", ""))


class EquivalenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.command = shlex.split(os.environ.get("CXX", "clang++"))
        if not cls.command or not shutil.which(cls.command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory(prefix="ts-sound-native-")
        cls.addClassCleanup(cls.temporary.cleanup)
        cls.dir = Path(cls.temporary.name)
        copy = cls.dir / "ps2_spu2.cpp"
        copy.write_text(sound.patch_source(SPU2.read_text(encoding="utf-8")), encoding="utf-8", newline="\n")
        cls.old = cls.build("spu2-old", SPU2, [])
        cls.new = cls.build("spu2-new", copy, ["-DTS_SOUND_NATIVE=1"])
        # The copy with the switch off is the original.
        cls.off = cls.build("spu2-off", copy, ["-DTS_SOUND_NATIVE=0"])

    @classmethod
    def build(cls, name, source, flags):
        exe = cls.dir / (name + (".exe" if sys.platform == "win32" else ""))
        command = cls.command + [
            "-std=c++20", "-O2", "-w", "-DPLATFORM_XBOX=1", *flags,
            f'-DSPU2_SOURCE="{source.as_posix()}"',
            "-I", str(RUNTIME / "include"), "-I", str(RUNTIME / "src/lib"), "-I", str(XBOX),
            str(XBOX / "test/sound_native_test.cpp"), "-o", str(exe)]
        result = subprocess.run(command, capture_output=True, text=True, timeout=600)
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr)
        return exe

    def compare(self, args, exes=None):
        exes = exes or (self.old, self.new)
        outputs = [subprocess.run([str(exe), *args], capture_output=True, text=True, timeout=600) for exe in exes]
        for result in outputs:
            self.assertEqual(result.returncode, 0, result.stderr)
        if outputs[0].stdout != outputs[1].stdout:
            for a, b in zip(outputs[0].stdout.splitlines(), outputs[1].stdout.splitlines()):
                if a != b:
                    self.fail(f"step differs:\n  original {a}\n  native   {b}")
            self.fail("outputs differ in length")
        return outputs

    def test_random_scripts(self):
        for seed in range(1, 9):
            with self.subTest(seed=seed):
                outputs = self.compare(["3000", str(seed)])
                self.assertIn("decoded blocks", outputs[1].stderr)

    def test_switch_off_is_original(self):
        self.compare(["1500", "3"], (self.old, self.off))

    def test_steady_load(self):
        for voices in (8, 24, 48):
            with self.subTest(voices=voices):
                outputs = self.compare([str(voices), "7", "bench"])
                times = [float(re.search(r"mix ([0-9.]+) s", r.stderr).group(1)) for r in outputs]
                print(f"\n  {voices} voices, 10 s of sound: original {times[0] * 1000:.1f} ms, "
                      f"native {times[1] * 1000:.1f} ms; {outputs[1].stderr.strip().splitlines()[-1]}",
                      file=sys.stderr)


if __name__ == "__main__":
    unittest.main()

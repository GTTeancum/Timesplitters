"""Host test of the direct GIF decoder (TS_GIF_DIRECT, src/xbox/xbox_gif_direct.h).

The GS front end is built from the shared source and from the
patch_gif_direct.py copy (and both again over patch_native_gif.py's copy,
TS_GIF_NATIVE=1); gif_direct_test.cpp feeds each the same random packets
(PACKED, REGLIST and IMAGE tags, every kind of register, split at random
bytes and interleaved over the paths, some through the native PACKED entry)
and prints every renderer call and the GS state after each piece. The outputs
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
GS = RUNTIME / "src/lib/gs/gs_frontend.cpp"


def load(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / "tools" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


direct = load("patch_gif_direct")
native = load("patch_native_gif")


class PatchTests(unittest.TestCase):
    def test_patches_both_inputs_once(self):
        source = GS.read_text(encoding="utf-8")
        for text in (source, native.patch_source("gs", source)):
            patched = direct.patch_source(text)
            self.assertEqual(patched.count("xbox_gif_direct::run("), 2)
            with self.assertRaises(ValueError):
                direct.patch_source(patched)


class EquivalenceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.command = shlex.split(os.environ.get("CXX", "clang++"))
        if not cls.command or not shutil.which(cls.command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory(prefix="ts-gif-direct-")
        cls.addClassCleanup(cls.temporary.cleanup)
        cls.dir = Path(cls.temporary.name)

    def build(self, name, source, flags, extra=()):
        exe = self.dir / name
        command = self.command + [
            "-std=c++20", "-O1", "-w", "-DPLATFORM_XBOX=1", *flags,
            f'-DGIF_DIRECT_GS_SOURCE="{source.as_posix()}"',
            "-I", str(RUNTIME / "include"), "-I", str(RUNTIME / "src/lib"),
            "-I", str(ROOT / "source/PS2Recomp/ps2xIOP/include"), "-I", str(XBOX),
            str(XBOX / "test/gif_direct_test.cpp"), *map(str, extra),
            str(RUNTIME / "src/lib/gs/gs_cpu_backend.cpp"), str(RUNTIME / "src/lib/gs/ps2_gs_memory.cpp"),
            str(RUNTIME / "src/lib/ps2_host_settings.cpp"), "-o", str(exe)]
        result = subprocess.run(command, capture_output=True, text=True, timeout=600)
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr)
        return exe

    def run_pair(self, base, flags, extra=()):
        copy = self.dir / f"{base.stem}-direct.cpp"
        copy.write_text(direct.patch_source(base.read_text(encoding="utf-8")), encoding="utf-8", newline="\n")
        old = self.build(f"{base.stem}-old", base, flags, extra)
        new = self.build(f"{base.stem}-new", copy, flags + ["-DTS_GIF_DIRECT=1"],
                         [*extra, XBOX / "xbox_gif_direct.cpp"])
        outputs = [subprocess.run([str(exe), "20000"], capture_output=True, text=True, timeout=300)
                   for exe in (old, new)]
        for result in outputs:
            self.assertEqual(result.returncode, 0, result.stderr)
        self.assertIn("direct packets", outputs[1].stderr)
        if outputs[0].stdout != outputs[1].stdout:
            for number, (a, b) in enumerate(zip(outputs[0].stdout.splitlines(), outputs[1].stdout.splitlines())):
                if a != b:
                    self.fail(f"line {number + 1} differs:\n  original {a}\n  direct   {b}")
            self.fail("outputs differ in length")

    def test_shared_front_end(self):
        self.run_pair(GS, [])

    def test_native_gif_front_end(self):
        base = self.dir / "gs_native.cpp"
        base.write_text(native.patch_source("gs", GS.read_text(encoding="utf-8")), encoding="utf-8", newline="\n")
        # TS_PERF_BACKEND: the plan cache without its PS2Memory entry.
        self.run_pair(base, ["-DTS_GIF_NATIVE=1", "-DTS_PERF_BACKEND=1"], [XBOX / "xbox_gif_native.cpp"])


if __name__ == "__main__":
    unittest.main()

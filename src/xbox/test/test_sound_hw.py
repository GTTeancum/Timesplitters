"""Host test of the Xbox fast mixer (TS_SOUND_HW, src/xbox/xbox_sound_hw.inl).

The SPU2 is built from the shared ps2_spu2.cpp, and from the
patch_sound_native.py copy with TS_SOUND_NATIVE=1 and TS_SOUND_HW=1.
sound_native_test.cpp plays the same random script on each (see
test_sound_native.py) with TS_SOUND_TEST_PCM set: its printed hashes then
cover only the registers the model reads back (envelope levels, current
volumes, NAX, LSA, END flags, IRQs), which must be identical, and the output
goes to a file. The fast mixer's samples are not bit-identical (gain ramps
per span, one shift for the Gaussian), so the two outputs are compared by
their signal-to-error ratio, and by the largest single-sample difference
on a steady load like a match's. A steady many-voice load is also timed.
Compiles and runs native C++ (CXX, default clang++).
"""
from __future__ import annotations

from array import array
import importlib.util
import math
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

# Random scripts use every rate, sweep and pitch, including envelopes that
# jump in a few frames; a game's sounds are kinder (the steady load).
RANDOM_MIN_SNR_DB = 30.0
STEADY_MIN_SNR_DB = 45.0


def load(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / "tools" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


sound = load("patch_sound_native")


def snr(reference: array, test: array) -> tuple[float, int]:
    """Signal-to-error ratio in dB, and the largest sample difference."""
    signal = error = 0
    worst = 0
    for a, b in zip(reference, test):
        signal += a * a
        d = a - b
        error += d * d
        if d < 0:
            d = -d
        if d > worst:
            worst = d
    if error == 0:
        return math.inf, 0
    if signal == 0:
        return -math.inf, worst
    return 10.0 * math.log10(signal / error), worst


class FastMixerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.command = shlex.split(os.environ.get("CXX", "clang++"))
        if not cls.command or not shutil.which(cls.command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory(prefix="ts-sound-hw-")
        cls.addClassCleanup(cls.temporary.cleanup)
        cls.dir = Path(cls.temporary.name)
        copy = cls.dir / "ps2_spu2.cpp"
        copy.write_text(sound.patch_source(SPU2.read_text(encoding="utf-8")), encoding="utf-8", newline="\n")
        cls.old = cls.build("spu2-old", SPU2, [])
        cls.native = cls.build("spu2-native", copy, ["-DTS_SOUND_NATIVE=1"])
        cls.fast = cls.build("spu2-fast", copy, ["-DTS_SOUND_NATIVE=1", "-DTS_SOUND_HW=1"])
        # TS_SOUND_HW=0 leaves the native path as it was.
        cls.native_off = cls.build("spu2-native-hw0", copy, ["-DTS_SOUND_NATIVE=1", "-DTS_SOUND_HW=0"])

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

    def run_split(self, exe, args, tag):
        pcm = self.dir / f"{tag}.pcm"
        env = dict(os.environ, TS_SOUND_TEST_PCM=str(pcm))
        result = subprocess.run([str(exe), *args], capture_output=True, text=True, timeout=600, env=env)
        self.assertEqual(result.returncode, 0, result.stderr)
        samples = array("h")
        samples.frombytes(pcm.read_bytes())
        if sys.byteorder != "little":
            samples.byteswap()
        return result, samples

    def compare(self, args, minimum_snr):
        tag = "-".join(args)
        old, old_pcm = self.run_split(self.old, args, "old-" + tag)
        new, new_pcm = self.run_split(self.fast, args, "fast-" + tag)
        if old.stdout != new.stdout:
            for a, b in zip(old.stdout.splitlines(), new.stdout.splitlines()):
                if a != b:
                    self.fail(f"read-back registers differ:\n  original {a}\n  fast     {b}")
            self.fail("register hashes differ in length")
        self.assertEqual(len(old_pcm), len(new_pcm))
        ratio, worst = snr(old_pcm, new_pcm)
        self.assertGreaterEqual(ratio, minimum_snr, f"output {ratio:.1f} dB from the original (worst sample {worst})")
        return old, new, ratio, worst

    def test_random_scripts(self):
        for seed in range(1, 9):
            with self.subTest(seed=seed):
                _, _, ratio, worst = self.compare(["3000", str(seed)], RANDOM_MIN_SNR_DB)
                print(f"\n  seed {seed}: {ratio:.1f} dB, worst sample {worst}", file=sys.stderr)

    def test_hw_off_is_native(self):
        outputs = [subprocess.run([str(exe), "1500", "3"], capture_output=True, text=True, timeout=600)
                   for exe in (self.native, self.native_off)]
        self.assertEqual(outputs[0].stdout, outputs[1].stdout)

    def test_steady_load(self):
        for voices in (8, 24, 48):
            with self.subTest(voices=voices):
                args = [str(voices), "7", "bench"]
                old, new, ratio, worst = self.compare(args, STEADY_MIN_SNR_DB)
                native = subprocess.run([str(self.native), *args], capture_output=True, text=True, timeout=600)
                times = [float(re.search(r"mix ([0-9.]+) s", r.stderr).group(1)) for r in (old, native, new)]
                print(f"\n  {voices} voices, 10 s of sound: original {times[0] * 1000:.1f} ms, "
                      f"native {times[1] * 1000:.1f} ms, fast {times[2] * 1000:.1f} ms; "
                      f"{ratio:.1f} dB, worst sample {worst}", file=sys.stderr)


if __name__ == "__main__":
    unittest.main()

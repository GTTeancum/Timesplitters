"""Deferred host execution of the Xbox VIF source bridge integration probe.

This module compiles and runs native C++ when its test class is selected.
It is intentionally excluded from the source-only verification stage. A
successful host probe would cover synthetic CPU records and lifetime guards;
it would not verify Xbox GPU behavior, in-game coverage or performance.
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


class VifSourceNativeProbeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        command = shlex.split(os.environ.get("CXX", "c++"))
        if not command or not shutil.which(command[0]):
            raise unittest.SkipTest("requires a host C++ compiler")
        cls.temporary = tempfile.TemporaryDirectory(prefix="ts-vif-source-probe-")
        cls.addClassCleanup(cls.temporary.cleanup)
        cls.probe = Path(cls.temporary.name) / "vif_source_probe"
        command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-pthread",
                    "-DTS_VIF_SOURCE=1", "-DTS_DRAW_RECORDS=1",
                    "-I", str(XBOX), "-I", str(ROOT / "project/game"),
                    "-I", str(ROOT / "source/PS2Recomp/ps2xRuntime/include")]
        command += shlex.split(os.environ.get("TS_VIF_SOURCE_CXXFLAGS", ""))
        command += [str(XBOX / "test/vif_source_test.cpp"),
                    str(XBOX / "xbox_vif_source.cpp"),
                    str(XBOX / "xbox_vif_record.cpp"), "-o", str(cls.probe)]
        result = subprocess.run(command, capture_output=True, text=True, timeout=120)
        if result.returncode:
            raise AssertionError(result.stdout + result.stderr)

    def test_source_records_lifetimes_and_real_prefix_integration(self):
        result = subprocess.run([str(self.probe)], capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertEqual(result.stderr, "", result.stderr)
        self.assertEqual(result.stdout, "VIF source bridge synthetic probe passed\n")


if __name__ == "__main__":
    unittest.main()

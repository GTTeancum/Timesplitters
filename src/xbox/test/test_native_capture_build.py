"""Exercise the real Xbox Makefile's capture switch without an Xbox SDK.

The compiler probe records commands instead of generating target code. This
checks routing and rebuilds, not whether the Xbox executable compiles or boots.
"""
from pathlib import Path
import json
import os
import shutil
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]


@unittest.skipUnless(shutil.which("make") and os.name == "posix", "requires GNU make and a POSIX shell")
class CaptureBuildTests(unittest.TestCase):
    def test_toggle_rebuilds_both_objects_without_renaming_runtime_registry(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            bindir = root / "bin"
            bindir.mkdir()
            compiler = bindir / "compiler"
            compiler.write_text('''#!/usr/bin/env python3
import json
from pathlib import Path
import sys
args = sys.argv[1:]
out = Path(args[args.index("-o") + 1])
out.write_text(json.dumps(args))
dep = Path(args[args.index("-MF") + 1])
dep.write_text(str(out) + ": " + args[-1] + "\\n")
with (Path(__file__).parent / "commands.jsonl").open("a") as log:
    log.write(json.dumps(args) + "\\n")
''')
            compiler.chmod(0o755)
            cygpath = bindir / "cygpath"
            cygpath.write_text('#!/bin/sh\nprintf "%s\\n" "$2"\n')
            cygpath.chmod(0o755)
            sources = (
                "project/game/vu1_native_ts.cpp",
                "src/xbox/xbox_vu_capture.cpp",
                "source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_jit.cpp",
            )
            for relative in sources:
                path = root / relative
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text("// Command-routing probe; never compiled as game code.\n")
            (root / "source/PS2Recomp/ps2xRuntime/src/lib/Kernel").mkdir()
            objects = [root / "build/xbox/obj" / Path(path).with_suffix(".obj") for path in sources]
            environment = dict(os.environ, PATH=str(bindir) + os.pathsep + os.environ.get("PATH", ""))
            # Clear inherited make options and job-server state; every probe
            # must exercise the same ordinary sequential recipe behavior.
            environment.pop("MAKEFLAGS", None)
            environment.pop("MFLAGS", None)
            command = ["make", "--no-print-directory", "-f", str(XBOX / "Makefile"),
                       "ROOT=" + str(root), "XBOX=" + str(root / "src/xbox"),
                       "GEN_FAST_NAMES=", "CXX=" + str(compiler),
                       "NXDK_DIR=" + str(root / "nxdk"), *map(str, objects)]

            def build(*settings):
                result = subprocess.run(command + list(settings), cwd=XBOX, env=environment,
                                        text=True, capture_output=True, timeout=30)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                return [json.loads(path.read_text()) for path in objects]

            def invocations():
                return [json.loads(line) for line in (bindir / "commands.jsonl").read_text().splitlines()]

            rename = "-DregisterVu1NativeProgram=xboxRegisterVu1NativeProgram"
            normal = build()
            self.assertTrue(all(rename not in args for args in normal))
            self.assertIn("-DTS_NATIVE_CAPTURE=0", normal[1])
            self.assertEqual(len(invocations()), 3)
            build()
            self.assertEqual(len(invocations()), 3, "unchanged configuration must not rebuild")

            enabled = build("TS_NATIVE_CAPTURE=1")
            self.assertIn(rename, enabled[0])
            self.assertNotIn(rename, enabled[1])
            self.assertNotIn(rename, enabled[2])
            self.assertIn("-DTS_NATIVE_CAPTURE=1", enabled[1])
            self.assertEqual(len(invocations()), 5, "both registration objects must rebuild")

            configured = build("TS_NATIVE_CAPTURE=1", "TS_NATIVE_CAPTURE_DELAY_MS=0",
                               "TS_NATIVE_CAPTURE_STRIDE=2", "TS_NATIVE_CAPTURE_LIMIT=7")
            for define in ("-DTS_NATIVE_CAPTURE_DELAY_MS=0", "-DTS_NATIVE_CAPTURE_STRIDE=2",
                           "-DTS_NATIVE_CAPTURE_LIMIT=7"):
                self.assertIn(define, configured[1])
                self.assertNotIn(define, configured[0])
                self.assertNotIn(define, configured[2])
            self.assertEqual(len(invocations()), 7)

            restored = build()
            self.assertTrue(all(rename not in args for args in restored))
            self.assertIn("-DTS_NATIVE_CAPTURE=0", restored[1])
            self.assertEqual(len(invocations()), 9, "disabling must remove stale instrumentation")
            invalid = subprocess.run(command + ["TS_NATIVE_CAPTURE=2"], cwd=XBOX, env=environment,
                                     text=True, capture_output=True, timeout=30)
            self.assertNotEqual(invalid.returncode, 0)
            self.assertIn("TS_NATIVE_CAPTURE must be 0 or 1", invalid.stderr)
            self.assertEqual(len(invocations()), 9)


if __name__ == "__main__":
    unittest.main()

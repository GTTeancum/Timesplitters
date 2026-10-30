"""Exercise optional XBG routing with the real Makefile and source patchers.

The compiler only records commands; the asset converter writes synthetic
markers. This verifies source selection, flags, dependencies and staging,
not target compilation, valid game assets, rendering, or performance.
"""
from pathlib import Path
import hashlib
import json
import os
import shutil
import subprocess
import sys
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]


@unittest.skipUnless(shutil.which("make") and os.name == "posix", "requires GNU make and a POSIX shell")
class BgNativeBuildTests(unittest.TestCase):
    def test_opt_in_routing_capture_chain_stamps_and_asset_staging(self):
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
source = Path(args[-1])
source.read_bytes()
out = Path(args[args.index("-o") + 1])
out.write_text(json.dumps(args))
Path(args[args.index("-MF") + 1]).write_text(str(out) + ": " + str(source) + "\\n")
with (Path(__file__).parent / "commands.jsonl").open("a") as log:
    log.write(json.dumps(args) + "\\n")
''')
            compiler.chmod(0o755)
            cygpath = bindir / "cygpath"
            cygpath.write_text('#!/bin/sh\nprintf "%s\\n" "$2"\n')
            cygpath.chmod(0o755)
            (bindir / "python").symlink_to(sys.executable)

            routed = {
                "native": "project/game/vu1_native_ts.cpp",
                "vif": "source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.cpp",
                "memory": "source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.cpp",
            }
            originals = {}
            for name, relative in routed.items():
                destination = root / relative
                destination.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / relative, destination)
                originals[name] = hashlib.sha256(destination.read_bytes()).hexdigest()
            sources = dict(routed)
            for name in ("game", "loader", "runtime", "vu", "xf"):
                sources["bg_" + name] = "src/xbox/xbox_bg_" + name + ".cpp"
            sources.update({"main": "src/xbox/xbox_main.cpp", "capture": "src/xbox/xbox_vu_capture.cpp",
                            "registry": "source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_jit.cpp"})
            for name, relative in sources.items():
                if name in routed:
                    continue
                path = root / relative
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text("// Command-routing fixture; never compiled as target code.\n")
            (root / "source/PS2Recomp/ps2xRuntime/src/lib/Kernel").mkdir()
            tool_dir = root / "src/xbox/tools"
            tool_dir.mkdir()
            for name in ("patch_bg_native.py", "patch_bg_runtime.py"):
                shutil.copyfile(XBOX / "tools" / name, tool_dir / name)
            (tool_dir / "xbgbuild.py").write_text('''from pathlib import Path
import json
import sys
args = sys.argv[1:]
assert len(args) == 5 and args[0] == "build" and args[3] == "--misc-pak"
Path(args[1]).read_bytes()
Path(args[4]).read_bytes()
out = Path(args[2]); out.mkdir(parents=True, exist_ok=True)
(out / "level7.xbg").write_bytes(b"synthetic routing marker")
(out / "manifest.json").write_text(json.dumps(args))
with (Path(__file__).parent / "asset-calls.jsonl").open("a") as log:
    log.write(json.dumps(args) + "\\n")
''')
            pak_dir = root / "project/game-data/PAK"
            pak_dir.mkdir(parents=True)
            (pak_dir / "BG.PAK").write_bytes(b"synthetic BG routing input")
            (pak_dir / "MISC.PAK").write_bytes(b"synthetic MISC routing input")
            objects = {name: root / "build/xbox/obj" / Path(path).with_suffix(".obj")
                       for name, path in sources.items()}
            by_object = {str(path): name for name, path in objects.items()}
            affected = set(sources) - {"capture", "registry"}
            environment = dict(os.environ, PATH=str(bindir) + os.pathsep + os.environ.get("PATH", ""))
            for name in ("MAKEFLAGS", "MFLAGS", "TS_BG_NATIVE", "TS_BG_VERIFY", "TS_NATIVE_CAPTURE"):
                environment.pop(name, None)
            command = ["make", "--no-print-directory", "-f", str(XBOX / "Makefile"),
                       "ROOT=" + str(root), "XBOX=" + str(root / "src/xbox"), "GEN_FAST_NAMES=",
                       "CXX=" + str(compiler), "NXDK_DIR=" + str(root / "nxdk"),
                       "TS_HWPROF=1", "TS_RENDER_COUNTERS=2", *map(str, objects.values()), "backgrounds"]

            def invocations():
                path = bindir / "commands.jsonl"
                return [json.loads(line) for line in path.read_text().splitlines()] if path.exists() else []

            def asset_invocations():
                path = tool_dir / "asset-calls.jsonl"
                return [json.loads(line) for line in path.read_text().splitlines()] if path.exists() else []

            def build(expected, *settings):
                before = len(invocations())
                result = subprocess.run(command + list(settings), cwd=XBOX, env=environment,
                                        text=True, capture_output=True, timeout=30)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                recent = invocations()[before:]
                self.assertEqual([by_object[args[args.index("-o") + 1]] for args in recent],
                                 [name for name in sources if name in expected])
                return {name: json.loads(path.read_text()) for name, path in objects.items()}

            def assert_flags(records, native, verify):
                for name in affected:
                    self.assertIn(f"-DTS_BG_NATIVE={native}", records[name], name)
                    self.assertIn(f"-DTS_BG_VERIFY={verify}", records[name], name)
                for name in routed:
                    self.assertIn("-O2", records[name], name)
                    self.assertIn("-DTS_RENDER_COUNTERS=2", records[name], name)
                    self.assertIn("-I" + str(root / "project/game"), records[name], name)
                    self.assertIn("-I" + str(root / "src/xbox"), records[name], name)
                self.assertIn("-DTS_HWPROF=1", records["main"])
                for name in set(records) - {"native"}:
                    self.assertFalse(any(arg.startswith("-DregisterVu1NativeProgram=")
                                         for arg in records[name]), name)

            asset_dir = root / "build/xbox/iso/native-bg"
            feature_stamp = root / "build/xbox/gen/bg_native.flags"
            rename_bg = "-DregisterVu1NativeProgram=xboxBgRegisterVu1NativeProgram"
            rename_capture = "-DregisterVu1NativeProgram=xboxRegisterVu1NativeProgram"
            off = build(set(sources))
            assert_flags(off, 0, 0)
            self.assertNotIn(rename_bg, off["native"])
            self.assertNotIn(rename_capture, off["native"])
            for name, source in routed.items():
                self.assertEqual(off[name][-1], str(root / source))
            self.assertFalse(asset_dir.exists())
            self.assertEqual(asset_invocations(), [])
            stamp_time = feature_stamp.stat().st_mtime_ns
            build(set())
            self.assertEqual(feature_stamp.stat().st_mtime_ns, stamp_time)

            on = build(affected, "TS_BG_NATIVE=1")
            assert_flags(on, 1, 0)
            self.assertIn(rename_bg, on["native"])
            self.assertNotIn(rename_capture, on["native"])
            self.assertIn("-DTS_NATIVE_CAPTURE=0", on["bg_vu"])
            for name, relative in routed.items():
                generated = root / "build/xbox/gen/bg" / Path(relative).name
                self.assertEqual(on[name][-1], str(generated))
                text = generated.read_text()
                self.assertTrue(text.startswith("// Xbox build copy made by src/xbox/tools/patch_bg_"))
                self.assertIn('xboxBgTryWriteJoinedStrip' if name == "native" else '#include "xbox_bg_runtime.h"', text)
                self.assertEqual(hashlib.sha256((root / relative).read_bytes()).hexdigest(), originals[name])
            self.assertEqual(len(asset_invocations()), 1)
            self.assertEqual(json.loads((asset_dir / "manifest.json").read_text()),
                             ["build", str(pak_dir / "BG.PAK"), str(asset_dir), "--misc-pak", str(pak_dir / "MISC.PAK")])
            stamp_time = feature_stamp.stat().st_mtime_ns
            build(set(), "TS_BG_NATIVE=1")
            self.assertEqual(feature_stamp.stat().st_mtime_ns, stamp_time)
            self.assertEqual(len(asset_invocations()), 1)

            # Patcher changes regenerate only the affected routed object.
            with (tool_dir / "patch_bg_native.py").open("a") as stream:
                stream.write("\n# Synthetic build-dependency change.\n")
            build({"native"}, "TS_BG_NATIVE=1")
            verified = build(affected, "TS_BG_NATIVE=1", "TS_BG_VERIFY=1")
            assert_flags(verified, 1, 1)
            self.assertEqual(len(asset_invocations()), 1, "verification changes do not rewrite asset bytes")

            captured = build({"native", "bg_vu", "capture"}, "TS_BG_NATIVE=1", "TS_BG_VERIFY=1",
                             "TS_NATIVE_CAPTURE=1")
            self.assertIn(rename_bg, captured["native"])
            self.assertNotIn(rename_capture, captured["native"])
            self.assertIn("-DTS_NATIVE_CAPTURE=1", captured["bg_vu"])
            self.assertIn("-DTS_NATIVE_CAPTURE=1", captured["capture"])
            (pak_dir / "MISC.PAK").write_bytes(b"changed synthetic MISC routing input")
            build(set(), "TS_BG_NATIVE=1", "TS_BG_VERIFY=1", "TS_NATIVE_CAPTURE=1")
            self.assertEqual(len(asset_invocations()), 2)

            # Old enabled-build dependencies still name copies. Disabling
            # must use originals even if those copies or patchers are gone.
            (root / "build/xbox/gen/bg/vu1_native_ts.cpp").unlink()
            (tool_dir / "patch_bg_native.py").write_text('raise SystemExit("must not patch while disabled")\n')
            restored = build(affected | {"capture"})
            assert_flags(restored, 0, 0)
            for name, source in routed.items():
                self.assertEqual(restored[name][-1], str(root / source))
            self.assertNotIn(rename_bg, restored["native"])
            self.assertNotIn(rename_capture, restored["native"])
            self.assertFalse(asset_dir.exists(), "disabled ISO staging must not retain prior XBG files")
            before = len(invocations())
            for setting in ("TS_BG_NATIVE=2", "TS_BG_VERIFY=2"):
                result = subprocess.run(command + [setting], cwd=XBOX, env=environment,
                                        text=True, capture_output=True, timeout=30)
                self.assertNotEqual(result.returncode, 0)
                self.assertIn(setting.split("=")[0] + " must be 0 or 1", result.stderr)
            self.assertEqual(len(invocations()), before)


if __name__ == "__main__":
    unittest.main()

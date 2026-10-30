"""Exercise Xbox source routing with the real Makefile and source patchers.

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
    def test_composed_routes_capture_chain_stamps_and_asset_staging(self):
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
                "gs": "source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_frontend.cpp",
                "native_math": "project/game/ts_native_math.cpp",
                "native_game": "project/game/ts_native_game.cpp",
                "native_game2": "project/game/ts_native_game2.cpp",
                "native_game3": "project/game/ts_native_game3.cpp",
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
                            "registry": "source/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_jit.cpp",
                            "gif_adapter": "src/xbox/xbox_gif_native.cpp",
                            "dma_adapter": "src/xbox/xbox_dma_chain.cpp",
                            "draw_adapter": "src/xbox/xbox_draw_record.cpp",
                            "vif_record": "src/xbox/xbox_vif_record.cpp",
                            "perf": "src/xbox/xbox_perf.cpp"})
            for name, relative in sources.items():
                if name in routed:
                    continue
                path = root / relative
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text("// Command-routing fixture; never compiled as target code.\n")
            (root / "source/PS2Recomp/ps2xRuntime/src/lib/Kernel").mkdir()
            table_source = root / "project/generated/register_functions.cpp"
            table_source.parent.mkdir(parents=True)
            shutil.copyfile(ROOT / "project/generated/register_functions.cpp", table_source)
            tool_dir = root / "src/xbox/tools"
            tool_dir.mkdir()
            patch_tools = ("patch_bg_native.py", "patch_bg_runtime.py", "patch_vif_fast.py",
                           "patch_native_gif.py", "patch_dma_chain.py", "patch_native_calls.py",
                           "patch_draw_record_game.py", "patch_vif_record.py")
            for name in patch_tools + ("direct_calls.py", "compact_function_table.py"):
                shutil.copyfile(XBOX / "tools" / name, tool_dir / name)
            shutil.copyfile(XBOX / "xbox_vif_fast.h", root / "src/xbox/xbox_vif_fast.h")
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
            native_calls = {"native_math", "native_game", "native_game2", "native_game3"}
            bg_consumers = {"native", "vif", "memory", "bg_game", "bg_loader", "bg_runtime",
                            "bg_vu", "bg_xf", "main"}
            opt_consumers = {"vif", "vif_record", "main"}
            path_consumers = {"native", "memory", "gs", "gif_adapter", "dma_adapter", "main"} | native_calls
            perf_consumers = {"perf", "gif_adapter", "main"}
            draw_consumers = {"native_game2", "vif", "draw_adapter", "vif_record", "main"}
            defaults = {
                "TS_BG_NATIVE": 0, "TS_BG_VERIFY": 0, "TS_BG_FAST": 1, "TS_BG_BATCH": 1,
                "TS_VIF_FAST": 1, "TS_NV2A_MATERIAL_CACHE": 1, "TS_NV2A_PACK_IDENTITY_CACHE": 1,
                "TS_GIF_NATIVE": 1, "TS_DMA_CHAIN_CACHE": 1, "TS_NATIVE_CALL_SLOTS": 1,
                "TS_NATIVE_CAPTURE": 0, "TS_PERF_BACKEND": 0,
                "TS_DRAW_RECORDS": 1,
            }
            environment = dict(os.environ, PATH=str(bindir) + os.pathsep + os.environ.get("PATH", ""))
            for name in ("MAKEFLAGS", "MFLAGS", "TS_GEN_PCH", *defaults):
                environment.pop(name, None)
            command = ["make", "--no-print-directory", "-f", str(XBOX / "Makefile"),
                       "ROOT=" + str(root), "XBOX=" + str(root / "src/xbox"), "GEN_FAST_NAMES=",
                       "CXX=" + str(compiler), "NXDK_DIR=" + str(root / "nxdk"),
                       "TS_GEN_PCH=0", "TS_HWPROF=1", "TS_RENDER_COUNTERS=2",
                       *map(str, objects.values()), "backgrounds"]

            def invocations():
                path = bindir / "commands.jsonl"
                return [json.loads(line) for line in path.read_text().splitlines()] if path.exists() else []

            def asset_invocations():
                path = tool_dir / "asset-calls.jsonl"
                return [json.loads(line) for line in path.read_text().splitlines()] if path.exists() else []

            rename_bg = "-DregisterVu1NativeProgram=xboxBgRegisterVu1NativeProgram"
            rename_capture = "-DregisterVu1NativeProgram=xboxRegisterVu1NativeProgram"

            def assert_flags(records, settings):
                groups = (
                    (bg_consumers, ("TS_BG_NATIVE", "TS_BG_VERIFY", "TS_BG_FAST", "TS_BG_BATCH")),
                    (opt_consumers, ("TS_VIF_FAST", "TS_NV2A_MATERIAL_CACHE", "TS_NV2A_PACK_IDENTITY_CACHE")),
                    (path_consumers, ("TS_GIF_NATIVE", "TS_DMA_CHAIN_CACHE", "TS_NATIVE_CALL_SLOTS")),
                    (perf_consumers, ("TS_PERF_BACKEND",)),
                    (draw_consumers, ("TS_DRAW_RECORDS",)),
                    ({"bg_vu", "capture"}, ("TS_NATIVE_CAPTURE",)),
                )
                for consumers, switches in groups:
                    for name in consumers:
                        for switch in switches:
                            self.assertIn(f"-D{switch}={settings[switch]}", records[name], name)
                for name in routed:
                    self.assertIn("-O2", records[name], name)
                    self.assertIn("-I" + str(root / "project/game"), records[name], name)
                    self.assertIn("-I" + str(root / "src/xbox"), records[name], name)
                for name in {"native", "vif", "memory", "native_game2"}:
                    self.assertIn("-DTS_RENDER_COUNTERS=2", records[name], name)
                self.assertIn("-DTS_HWPROF=1", records["main"])
                for name in set(records) - {"native"}:
                    self.assertFalse(any(arg.startswith("-DregisterVu1NativeProgram=")
                                         for arg in records[name]), name)
                self.assertEqual(rename_bg in records["native"], bool(settings["TS_BG_NATIVE"]))
                self.assertEqual(rename_capture in records["native"],
                                 bool(settings["TS_NATIVE_CAPTURE"] and not settings["TS_BG_NATIVE"]))

            def route_paths(settings):
                paths = {name: root / source for name, source in routed.items()}
                generated = root / "build/xbox/gen"
                if settings["TS_BG_NATIVE"]:
                    for name in ("native", "vif", "memory"):
                        paths[name] = generated / "bg" / Path(routed[name]).name
                if settings["TS_VIF_FAST"]:
                    paths["vif"] = generated / "vif/ps2_vif1_interpreter.cpp"
                if settings["TS_DRAW_RECORDS"]:
                    paths["vif"] = generated / "draw-records/ps2_vif1_interpreter.cpp"
                    paths["native_game2"] = generated / "draw-records/ts_native_game2.cpp"
                if settings["TS_GIF_NATIVE"]:
                    paths["native"] = generated / "gif/vu1_native_ts.cpp"
                    paths["gs"] = generated / "gif/gs_frontend.cpp"
                if settings["TS_DMA_CHAIN_CACHE"]:
                    paths["memory"] = generated / "dma/ps2_memory.cpp"
                if settings["TS_NATIVE_CALL_SLOTS"]:
                    for name in native_calls:
                        paths[name] = generated / "native-calls" / Path(routed[name]).name
                return paths

            def assert_routes(records, settings):
                texts = {}
                for name, selected in route_paths(settings).items():
                    self.assertEqual(records[name][-1], str(selected), name)
                    texts[name] = selected.read_text()
                    self.assertEqual(hashlib.sha256((root / routed[name]).read_bytes()).hexdigest(),
                                     originals[name], name)
                markers = (
                    ("native", "xboxBgTryEmitGroup(", "TS_BG_NATIVE"),
                    ("native", "xboxGifTryNativePacket(", "TS_GIF_NATIVE"),
                    ("vif", '#include "xbox_bg_runtime.h"', "TS_BG_NATIVE"),
                    ("vif", "xboxUnpackPlans", "TS_VIF_FAST"),
                    ("vif", "xboxVifRecordTryPrefix(", "TS_DRAW_RECORDS"),
                    ("native_game2", "xboxDrawRecordNotePrecalc(", "TS_DRAW_RECORDS"),
                    ("native_game2", "xboxDrawRecordNoteDbuf(", "TS_DRAW_RECORDS"),
                    ("memory", '#include "xbox_bg_runtime.h"', "TS_BG_NATIVE"),
                    ("memory", "xboxDmaChainPrepare(", "TS_DMA_CHAIN_CACHE"),
                    ("gs", "xboxGifWithNativePlan(", "TS_GIF_NATIVE"),
                )
                for name, marker, switch in markers:
                    self.assertEqual(marker in texts[name], bool(settings[switch]), (name, switch))
                for name in native_calls:
                    self.assertEqual("xboxNativeGuestCall<" in texts[name],
                                     bool(settings["TS_NATIVE_CALL_SLOTS"]), name)

            def build(expected, **overrides):
                settings = dict(defaults, **overrides)
                before = len(invocations())
                result = subprocess.run(command + [f"{name}={value}" for name, value in settings.items()],
                                        cwd=XBOX, env=environment,
                                        text=True, capture_output=True, timeout=30)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                recent = invocations()[before:]
                self.assertEqual([by_object[args[args.index("-o") + 1]] for args in recent],
                                 [name for name in sources if name in expected])
                records = {name: json.loads(path.read_text()) for name, path in objects.items()}
                assert_flags(records, settings)
                assert_routes(records, settings)
                return records

            asset_dir = root / "build/xbox/iso/native-bg"
            stamps = [root / "build/xbox/gen" / name for name in
                      ("bg_native.flags", "optimizations.flags", "native_paths.flags", "perf_backend.flags",
                       "draw_records.flags")]
            build(set(sources))
            self.assertFalse(asset_dir.exists())
            self.assertEqual(asset_invocations(), [])
            stamp_times = [path.stat().st_mtime_ns for path in stamps]
            build(set())
            self.assertEqual([path.stat().st_mtime_ns for path in stamps], stamp_times)

            build(bg_consumers, TS_BG_NATIVE=1)
            self.assertEqual(len(asset_invocations()), 1)
            self.assertEqual(json.loads((asset_dir / "manifest.json").read_text()),
                             ["build", str(pak_dir / "BG.PAK"), str(asset_dir), "--misc-pak", str(pak_dir / "MISC.PAK")])
            stamp_times = [path.stat().st_mtime_ns for path in stamps]
            build(set(), TS_BG_NATIVE=1)
            self.assertEqual([path.stat().st_mtime_ns for path in stamps], stamp_times)
            self.assertEqual(len(asset_invocations()), 1)

            # The outer GIF copy must rebuild when the inner BG stage changes.
            with (tool_dir / "patch_bg_native.py").open("a") as stream:
                stream.write("\n# Synthetic build-dependency change.\n")
            build({"native"}, TS_BG_NATIVE=1)
            build(bg_consumers, TS_BG_NATIVE=1, TS_BG_VERIFY=1)
            enabled = {"TS_BG_NATIVE": 1, "TS_BG_VERIFY": 1, "TS_BG_BATCH": 0}
            build(bg_consumers, **enabled)
            self.assertEqual(len(asset_invocations()), 1, "verification changes do not rewrite asset bytes")

            enabled["TS_NATIVE_CAPTURE"] = 1
            build({"native", "bg_vu", "capture"}, **enabled)
            (pak_dir / "MISC.PAK").write_bytes(b"changed synthetic MISC routing input")
            build(set(), **enabled)
            self.assertEqual(len(asset_invocations()), 2)

            # Every source stage follows its own tool, and native call slots
            # are regenerated when this build's compact table changes.
            for tool, consumers in (("patch_native_gif.py", {"native", "gs"}),
                                    ("patch_dma_chain.py", {"memory"}),
                                    ("patch_vif_fast.py", {"vif"}),
                                    ("patch_draw_record_game.py", {"native_game2"}),
                                    ("patch_vif_record.py", {"vif"}),
                                    ("patch_native_calls.py", native_calls)):
                with (tool_dir / tool).open("a") as stream:
                    stream.write("\n# Synthetic build-dependency change.\n")
                build(consumers, **enabled)
            with table_source.open("a") as stream:
                stream.write("\n// Synthetic compact-table input change.\n")
            build(native_calls, **enabled)

            build(perf_consumers, **enabled, TS_PERF_BACKEND=1)
            build(perf_consumers, **enabled)

            # Records compose with either native-call dispatch and either
            # VIF implementation. A disable must regenerate the outer copy
            # even when its newly selected original input has an older mtime.
            build(draw_consumers, **enabled, TS_DRAW_RECORDS=0)
            build(draw_consumers, **enabled)
            build(path_consumers, **enabled, TS_NATIVE_CALL_SLOTS=0)
            build(path_consumers, **enabled)
            build(opt_consumers, **enabled, TS_VIF_FAST=0)
            build(opt_consumers, **enabled)

            # Each outer stage can be disabled while the BG observers and
            # geometry adapter stay enabled underneath it.
            outer_off = dict(enabled, TS_GIF_NATIVE=0, TS_DMA_CHAIN_CACHE=0,
                             TS_NATIVE_CALL_SLOTS=0, TS_VIF_FAST=0, TS_DRAW_RECORDS=0)
            build(path_consumers | opt_consumers | draw_consumers, **outer_off)
            build(path_consumers | opt_consumers | draw_consumers, **enabled)

            # Old enabled-build dependencies still name copies. Disabling
            # must use originals even if those copies or patchers are gone.
            for generated in route_paths(dict(defaults, **enabled)).values():
                generated.unlink()
            for name in ("native", "vif", "memory"):
                (root / "build/xbox/gen/bg" / Path(routed[name]).name).unlink()
            (root / "build/xbox/gen/draw-records/ts_native_game2.cpp").unlink()
            (root / "build/xbox/gen/vif/ps2_vif1_interpreter.cpp").unlink()
            for tool in patch_tools:
                (tool_dir / tool).write_text('raise SystemExit("must not patch while disabled")\n')
            disabled = {name: 0 for name in defaults}
            build(bg_consumers | opt_consumers | path_consumers | draw_consumers | {"capture"}, **disabled)
            self.assertFalse(asset_dir.exists(), "disabled ISO staging must not retain prior XBG files")
            self.assertEqual(len(asset_invocations()), 2)
            build(set(), **disabled)
            before = len(invocations())
            for switch in defaults:
                invalid = dict(disabled, **{switch: 2})
                result = subprocess.run(command + [f"{name}={value}" for name, value in invalid.items()],
                                        cwd=XBOX, env=environment,
                                        text=True, capture_output=True, timeout=30)
                self.assertNotEqual(result.returncode, 0)
                self.assertIn(switch + " must be 0 or 1", result.stderr)
            self.assertEqual(len(invocations()), before)


if __name__ == "__main__":
    unittest.main()

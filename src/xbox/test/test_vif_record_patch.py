"""Source-copy regression cases for the ordered Xbox VIF-prefix consumer.

These checks exercise patcher composition, semantic guards and atomic
output independently of target compilation or game execution.
"""
from __future__ import annotations

import importlib.util
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[3]
TOOLS = ROOT / 'src/xbox/tools'
SOURCE = ROOT / 'source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.cpp'


def load(name):
    spec = importlib.util.spec_from_file_location(name, TOOLS / (name + '.py'))
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


records = load('patch_vif_record')
background = load('patch_bg_runtime')
fast = load('patch_vif_fast')


def mscal_block(text):
    decoder = text.index('uint32_t PS2Memory::decodeVIF1Pieces(')
    start = text.index('        else if (opcode == VIF_MSCAL || opcode == VIF_MSCALF || opcode == VIF_MSCNT)', decoder)
    end = text.index('        else if (opcode == VIF_STMASK)', start)
    return text[start:end]


class VifRecordPatcherTests(unittest.TestCase):
    def test_four_compositions_preserve_original_mscal_and_all_other_source(self):
        original = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')
        for bg in (False, True):
            for quick in (False, True):
                with self.subTest(background=bg, fast=quick):
                    source = background.patch_source('vif', original) if bg else original
                    source = fast.patch_source(source) if quick else source
                    before_mscal = mscal_block(source)
                    patched = records.patch_source(source)
                    self.assertEqual(mscal_block(patched), before_mscal)
                    self.assertEqual(patched.count(records.HOOK), 1)
                    self.assertEqual(patched.count(records.ADAPTER_INCLUDE), 1)
                    restored = patched.removeprefix(records.GENERATED)
                    restored = restored.replace(records.ADAPTER_INCLUDE, '', 1)
                    restored = restored.replace(records.HOOK, '', 1)
                    self.assertEqual(restored, source)
                    self.assertIn('#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2', patched)
                    self.assertIn('!PS2Memory::onVif1Worker()', patched)
                    self.assertIn('xboxVifRecordMayStart(xboxRecordNextCode,', records.HOOK)
                    self.assertLess(records.HOOK.index('xboxVifRecordMayStart('),
                                    records.HOOK.index('xboxDrawRecordWithChain('))
                    hook = patched.index(records.HOOK)
                    pending = patched.index('        if (m_vif1PendingPath2ImageQwc != 0u)',
                                            patched.index(records.DECODE))
                    self.assertLess(pending, hook)
                    self.assertLess(hook, patched.index(records.COMMAND, hook))
                    self.assertIn('in.skip(context.bytes);', records.HOOK)

    def test_semantic_anchor_drift_duplicate_or_double_patch_rejects(self):
        source = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')
        for anchor in (records.INCLUDE, records.DECODE, records.COMMAND,
                       records.REGISTERS, records.TRACK_COMMAND, records.OBSERVER,
                       records.MARK_FLUSH, records.PAYLOAD_REGISTERS,
                       records.UNPACK_EXTEND, records.UNPACK_COMPACT, records.UNPACK_LAYOUT):
            for changed in (source.replace(anchor, '// upstream drift\n', 1), source + '\n' + anchor):
                with self.subTest(anchor=anchor[:50]), self.assertRaises(ValueError):
                    records.patch_source(changed)
        with self.assertRaises(ValueError):
            records.patch_source(records.patch_source(source))

    def test_crlf_is_preserved_and_mixed_encoding_declines(self):
        source = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')
        windows = source.replace('\n', '\r\n')
        patched = records.patch_source(windows)
        self.assertNotIn('\n', patched.replace('\r\n', ''))
        self.assertEqual(patched.replace('\r\n', '\n'), records.patch_source(source))
        for changed in (windows + '\n', '\ufeff' + source, source + '\x00'):
            with self.assertRaises(ValueError):
                records.patch_source(changed)

    def test_cli_keeps_input_and_previous_output_on_failure(self):
        original = SOURCE.read_bytes()
        with tempfile.TemporaryDirectory(prefix='ts-vif-record-patch-') as directory:
            root = Path(directory)
            source, output = root / 'source.cpp', root / 'generated.cpp'
            source.write_bytes(original)
            command = [sys.executable, str(TOOLS / 'patch_vif_record.py'), str(source), str(output)]
            success = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(success.returncode, 0, success.stderr)
            self.assertEqual(source.read_bytes(), original)
            previous = output.read_bytes()
            source.write_text('// changed source shape\n')
            failure = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(failure.returncode, 2)
            self.assertEqual(output.read_bytes(), previous)
            self.assertEqual(source.read_text(), '// changed source shape\n')
            alias = subprocess.run(command[:-1] + [str(source)], capture_output=True, text=True, timeout=10)
            self.assertEqual(alias.returncode, 2)
            self.assertEqual(source.read_text(), '// changed source shape\n')


if __name__ == '__main__':
    unittest.main()

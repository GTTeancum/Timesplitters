"""Pure Python adapter checks; never compiles or executes a native probe."""
from __future__ import annotations

import importlib.util
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest


XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
TOOLS = XBOX / 'tools'
SOURCE = ROOT / 'project/game/vu1_native_ts.cpp'


def load(name: str):
    spec = importlib.util.spec_from_file_location(name, TOOLS / f'{name}.py')
    module = importlib.util.module_from_spec(spec)
    assert spec.loader is not None
    spec.loader.exec_module(module)
    return module


source_route = load('patch_native_source')
background = load('patch_bg_native')
gif = load('patch_native_gif')


class SourceNativePatcherTests(unittest.TestCase):
    def test_four_compositions_restore_exact_original_and_keep_xbg_first(self):
        original = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')
        for bg in (False, True):
            for native_gif in (False, True):
                with self.subTest(background=bg, gif=native_gif):
                    before = background.patch_source(original) if bg else original
                    before = gif.patch_source('native', before) if native_gif else before
                    patched = source_route.patch_source(before)
                    indent = ' ' * (20 if bg else 16)
                    restored = patched.removeprefix(source_route.GENERATED)
                    restored = restored.replace(source_route.ADAPTER_INCLUDE, '', 1)
                    restored = restored.replace(source_route.NATIVE_SCOPE, '', 1)
                    restored = restored.replace(source_route.LOAD_V_SOURCE, source_route.LOAD_V, 1)
                    restored = restored.replace(source_route.LOAD_I_SOURCE, source_route.LOAD_I, 1)
                    self.assertEqual(patched.count(source_route.READ_GUARD), 2)
                    for call, attempt in (
                            (source_route.JOINED_CALL,
                             'xboxVifSourceTryWriteJoinedStrip(kind, cursor, data, vi, n)'),
                            (source_route.FLAT_CALL,
                             'xboxVifSourceTryDecodeStrip(kind, data, vi, n, list)')):
                        rewritten = source_route.strip_replacement(indent, call, attempt)
                        self.assertEqual(patched.count(rewritten), 1)
                        restored = restored.replace(rewritten, indent + call + '\n', 1)
                    group = '\n'.join(indent + line for line in source_route.GROUP_LINES) + '\n'
                    restored = restored.replace(source_route.group_replacement(indent), group, 1)
                    self.assertEqual(restored, before)
                    self.assertIn('TS_VIF_SOURCE && TS_DRAW_RECORDS && !TS_NATIVE_CAPTURE', patched)
                    self.assertIn('if (ringCheck || !xboxVifSourceTry', patched)
                    begin = patched.index('if (ok && gs.beginXfRun(prim, *xc, cursor))')
                    source_group = patched.index('xboxVifSourceTryWriteGroup(', begin)
                    end = patched.index('gs.endXfRun(cursor);', source_group)
                    self.assertLess(begin, source_group)
                    self.assertLess(source_group, end)
                    if bg:
                        self.assertLess(patched.index('xboxBgTryEmitGroup(', begin), source_group)
                        self.assertIn('if (!xboxBgGroupWritten)\n' +
                                      source_route.group_replacement(indent), patched)
                    # No registration replacement, new state application,
                    # interpreter dispatch, or ring ownership operation.
                    for marker in ('registerVu1NativeProgram(', 'gs.beginXfRun(', 'gs.endXfRun(',
                                   'gs.growXfCursor(', 'sendState();', 'gifArbiter()->drain();'):
                        self.assertEqual(patched.count(marker), before.count(marker))

    def test_semantic_anchor_drift_and_partial_background_adapter_reject(self):
        original = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')
        for bg in (False, True):
            source = background.patch_source(original) if bg else original
            indent = ' ' * (20 if bg else 16)
            anchors = [source_route.INCLUDE, source_route.RUN, source_route.LOAD_V,
                       source_route.LOAD_I, source_route.ELIGIBILITY,
                       source_route.GROUP_OPEN, source_route.GROUP_CLOSE,
                       indent + source_route.JOINED_CALL + '\n',
                       indent + source_route.FLAT_CALL + '\n',
                       '\n'.join(indent + line for line in source_route.GROUP_LINES) + '\n']
            if bg:
                anchors += ['                if (!xboxBgGroupWritten)\n',
                            '                if (!xboxBgTryDecodeStrip(kind, data, vi, n, list))\n']
            for anchor in anchors:
                for invalid in (source.replace(anchor, '// drift\n', 1), source + '\n' + anchor):
                    with self.subTest(background=bg, anchor=anchor[:45]), self.assertRaises(ValueError):
                        source_route.patch_source(invalid)
            with self.assertRaises(ValueError):
                source_route.patch_source(source_route.patch_source(source))
            relocated = source.replace(source_route.GROUP_OPEN, '', 1) + source_route.GROUP_OPEN
            with self.assertRaises(ValueError):
                source_route.patch_source(relocated)

    def test_crlf_preserved_and_mixed_encoding_declines(self):
        original = SOURCE.read_bytes().decode('utf-8').replace('\r\n', '\n')
        windows = original.replace('\n', '\r\n')
        patched = source_route.patch_source(windows)
        self.assertNotIn('\n', patched.replace('\r\n', ''))
        self.assertEqual(patched.replace('\r\n', '\n'), source_route.patch_source(original))
        for invalid in (windows + '\n', original + '\x00', '\ufeff' + original):
            with self.assertRaises(ValueError):
                source_route.patch_source(invalid)

    def test_cli_preserves_input_and_previous_output_on_rejection(self):
        original = SOURCE.read_bytes()
        with tempfile.TemporaryDirectory(prefix='ts-native-source-patch-') as directory:
            root = Path(directory)
            source, output = root / 'source.cpp', root / 'result.cpp'
            source.write_bytes(original)
            command = [sys.executable, str(TOOLS / 'patch_native_source.py'), str(source), str(output)]
            result = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(result.returncode, 0, result.stderr)
            previous = output.read_bytes()
            self.assertEqual(source.read_bytes(), original)
            source.write_text('// unknown native shape\n')
            result = subprocess.run(command, capture_output=True, text=True, timeout=10)
            self.assertEqual(result.returncode, 2)
            self.assertEqual(output.read_bytes(), previous)
            result = subprocess.run(command[:-1] + [str(source)], capture_output=True, text=True, timeout=10)
            self.assertEqual(result.returncode, 2)
            self.assertEqual(source.read_text(), '// unknown native shape\n')


if __name__ == '__main__':
    unittest.main()

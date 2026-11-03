"""Exact-anchor and atomic-output checks for Xbox runtime build copies.

Uses the checked-in shared sources as inputs. No full runtime build or original
game data is required, and the shared files are never written by these checks.
"""
from __future__ import annotations

import importlib.util
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[3]
TOOL = ROOT / 'src/xbox/tools/patch_bg_runtime.py'
RUNTIME = ROOT / 'source/PS2Recomp/ps2xRuntime/src/lib'
SOURCES = {'vif': RUNTIME / 'ps2_vif1_interpreter.cpp', 'memory': RUNTIME / 'ps2_memory.cpp'}
spec = importlib.util.spec_from_file_location('xbg_runtime_patch', TOOL)
patcher = importlib.util.module_from_spec(spec)
spec.loader.exec_module(patcher)

GENERATED = '// Xbox build copy made by src/xbox/tools/patch_bg_runtime.py; do not edit.\n'
INCLUDE = '#include "xbox_bg_runtime.h"\n'
LEGACY = '    XboxBgVuWriteScope xboxBgLegacyWriteScope;\n    xboxBgInvalidateVu();\n'
UNPACK = '''            xboxBgNoteUnpack(m_rdram, m_vu1Data, vuAddr,
                             in.avail() >= sourceBytes ? in.here() : nullptr,
                             writeVectorCount, opcode & 0xFu, cl, wl, vif1_regs.mode,
                             maskEnable, PS2Memory::onVif1Worker());
'''
EXECUTE = '            XboxBgVuWriteScope xboxBgExecutionWriteScope;\n'
TYPES = ('uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', '__m128i')


def original(kind):
    return SOURCES[kind].read_bytes().decode('utf-8')


def remove_insertions(kind, patched):
    """Independent exact inverse: every original source byte must be retained."""
    if not patched.startswith(GENERATED) or patched.count(INCLUDE) != 1:
        raise AssertionError('incorrect generated/include markers')
    restored = patched[len(GENERATED):].replace(INCLUDE, '', 1)
    if kind == 'vif':
        for insertion in (LEGACY, UNPACK, EXECUTE):
            if restored.count(insertion) != 1:
                raise AssertionError('incorrect VIF insertion count')
            restored = restored.replace(insertion, '', 1)
    else:
        for kind_type in TYPES:
            before = ('            else if (vuMem == m_vu1Data)\n'
                      f'                g_vu1WatchedRows.noteBytes(vuOffset, sizeof({kind_type}));\n')
            after = ('            else if (vuMem == m_vu1Data)\n'
                     '            {\n'
                     f'                g_vu1WatchedRows.noteBytes(vuOffset, sizeof({kind_type}));\n'
                     '                xboxBgInvalidateVu();\n'
                     '            }\n')
            if restored.count(after) != 1:
                raise AssertionError('incorrect conditional VU1 invalidation')
            restored = restored.replace(after, before, 1)
        reset = '        g_vu1WatchedRows.noteAll();\n        xboxBgInvalidateVu();\n'
        if restored.count(reset) != 1:
            raise AssertionError('incorrect initialization invalidation')
        restored = restored.replace(reset, '        g_vu1WatchedRows.noteAll();\n', 1)
    return restored


class RuntimePatchTests(unittest.TestCase):
    def cli(self, kind, source, output):
        return subprocess.run([sys.executable, str(TOOL), kind, str(source), str(output)],
                              capture_output=True, text=True, timeout=10)

    def test_vif_insertions_follow_validation_and_preserve_all_original_work(self):
        source = original('vif')
        patched = patcher.patch_source('vif', source)
        self.assertEqual(remove_insertions('vif', patched), source)
        self.assertEqual(patched.count('xboxBgNoteUnpack('), 1)
        self.assertEqual(patched.count('XboxBgVuWriteScope '), 2)
        self.assertEqual(patched.count('xboxBgInvalidateVu();'), 1)
        self.assertIn('void PS2Memory::processVIF1Data(const uint8_t *data, uint32_t sizeBytes)\n{\n'
                      + LEGACY + '    g_vif1LastConsumed = 0;', patched)
        segmented = patched.index('uint32_t PS2Memory::decodeVIF1Pieces(')
        validation = patched.index('            if (totalBytes > in.left())', segmented)
        note = patched.index(UNPACK)
        fast = patched.index('            if (!maskEnable && (vif1_regs.mode & 3u) == 0u && cl == wl', note)
        self.assertLess(segmented, validation)
        self.assertLess(validation, note)
        self.assertLess(note, fast)
        self.assertIn('            const bool zeroExtend = (imm & 0x4000u) != 0u;\n' + UNPACK, patched)
        self.assertIn('        else if (opcode == VIF_MSCAL || opcode == VIF_MSCALF || opcode == VIF_MSCNT)\n'
                      '        {\n' + EXECUTE + '            const uint32_t runTop', patched)

    def test_memory_insertions_keep_the_five_original_conditions(self):
        source = original('memory')
        patched = patcher.patch_source('memory', source)
        self.assertEqual(remove_insertions('memory', patched), source)
        self.assertEqual(patched.count('g_vu1WatchedRows.noteBytes('), 5)
        self.assertEqual(patched.count('g_vu1WatchedRows.noteAll('), 1)
        self.assertEqual(patched.count('xboxBgInvalidateVu();'), 6)
        for kind_type in TYPES:
            self.assertIn(f'g_vu1WatchedRows.noteBytes(vuOffset, sizeof({kind_type}));\n'
                          '                xboxBgInvalidateVu();\n            }', patched)

    def test_changed_duplicate_and_already_patched_sources_fail_atomically(self):
        anchors = {
            'vif': (patcher.INCLUDE, patcher.LEGACY, patcher.DECODE, patcher.UNPACK, patcher.EXECUTE),
            'memory': (patcher.INCLUDE, patcher.RESET,
                       '            else if (vuMem == m_vu1Data)\n'
                       '                g_vu1WatchedRows.noteBytes(vuOffset, sizeof(uint8_t));\n'),
        }
        with tempfile.TemporaryDirectory(prefix='ts-xbg-patch-') as directory:
            root = Path(directory)
            source_path, output = root / 'source.cpp', root / 'output.cpp'
            sentinel = b'previous completed build copy\n'
            for kind, choices in anchors.items():
                source = original(kind)
                variants = [('missing-' + str(i), source.replace(anchor, '', 1)) for i, anchor in enumerate(choices)]
                variants += [('duplicate-' + str(i), source + '\n' + anchor) for i, anchor in enumerate(choices)]
                variants.append(('already-patched', patcher.patch_source(kind, source)))
                variants.append(('extra-write-site', source + '\ng_vu1WatchedRows.noteBytes(0, 1);\n')
                                if kind == 'memory' else ('mixed-newlines', source + '\r\n'))
                for label, changed in variants:
                    with self.subTest(kind=kind, case=label):
                        source_path.write_bytes(changed.encode('utf-8'))
                        output.write_bytes(sentinel)
                        result = self.cli(kind, source_path, output)
                        self.assertNotEqual(result.returncode, 0, result.stdout)
                        self.assertIn('patch_bg_runtime:', result.stderr)
                        self.assertEqual(output.read_bytes(), sentinel)
                        self.assertEqual(source_path.read_bytes(), changed.encode('utf-8'))
                        self.assertEqual(list(root.glob('.xbg-runtime-*')), [])
            source_path.write_bytes(b'\xffinvalid UTF-8')
            self.assertNotEqual(self.cli('vif', source_path, output).returncode, 0)
            self.assertEqual(output.read_bytes(), sentinel)
            self.assertNotEqual(self.cli('unsupported', source_path, output).returncode, 0)
            self.assertEqual(output.read_bytes(), sentinel)

    def test_input_aliases_are_rejected_without_modifying_shared_source(self):
        with tempfile.TemporaryDirectory(prefix='ts-xbg-alias-') as directory:
            root = Path(directory)
            for kind in SOURCES:
                source = root / (kind + '.cpp')
                content = original(kind).encode('utf-8')
                source.write_bytes(content)
                aliases = [source]
                hard = root / (kind + '-hard.cpp')
                os.link(source, hard)
                aliases.append(hard)
                link = root / (kind + '-link.cpp')
                try:
                    link.symlink_to(source)
                    aliases.append(link)
                except OSError:
                    pass  # Symlink creation can require extra rights on Windows.
                for output in aliases:
                    with self.subTest(kind=kind, alias=output.name):
                        result = self.cli(kind, source, output)
                        self.assertNotEqual(result.returncode, 0)
                        self.assertIn('must not alias', result.stderr)
                        self.assertEqual(source.read_bytes(), content)
                self.assertEqual(list(root.glob('.xbg-runtime-*')), [])

    def test_cli_replaces_complete_output_and_preserves_crlf(self):
        with tempfile.TemporaryDirectory(prefix='ts-xbg-output-') as directory:
            root = Path(directory)
            for kind in SOURCES:
                source, output = root / (kind + '.cpp'), root / (kind + '-patched.cpp')
                text = original(kind)
                content = text.replace('\n', '\r\n').encode('utf-8')
                source.write_bytes(content)
                output.write_bytes(b'old output')
                result = self.cli(kind, source, output)
                self.assertEqual(result.returncode, 0, result.stderr)
                self.assertEqual(source.read_bytes(), content)
                patched = output.read_bytes().decode('utf-8')
                self.assertNotIn('\n', patched.replace('\r\n', ''))
                restored = remove_insertions(kind, patched.replace('\r\n', '\n'))
                self.assertEqual(restored.replace('\n', '\r\n').encode('utf-8'), content)
            self.assertEqual(list(root.glob('.xbg-runtime-*')), [])

    def test_failed_output_replace_cleans_temporary_and_preserves_destination(self):
        with tempfile.TemporaryDirectory(prefix='ts-xbg-atomic-') as directory:
            root = Path(directory)
            source, output = root / 'source.cpp', root / 'existing-directory'
            content = original('vif').encode('utf-8')
            source.write_bytes(content)
            output.mkdir()
            (output / 'keep.txt').write_bytes(b'keep')
            result = self.cli('vif', source, output)
            self.assertNotEqual(result.returncode, 0)
            self.assertEqual(source.read_bytes(), content)
            self.assertEqual((output / 'keep.txt').read_bytes(), b'keep')
            self.assertEqual(list(root.glob('.xbg-runtime-*')), [])


if __name__ == '__main__':
    unittest.main()

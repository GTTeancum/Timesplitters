"""Compiler-free, focused adapter/contract checks using source-shaped fixtures.

These fixtures exercise the actual Python patchers. They are NOT a complete
shared-runtime checkout, a C++ compiler, or evidence of Xbox execution. The
full-source composition suite remains test_vif_source_patch.py. Native read
and write-plan probes are separate and must wait for the build hold to end.
"""
from __future__ import annotations

import importlib.util
from pathlib import Path
import subprocess
import random
import sys
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]


def load(name):
    spec = importlib.util.spec_from_file_location(name, XBOX / 'tools' / (name + '.py'))
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


native = load('patch_native_source')
vif = load('patch_vif_record')


def native_fixture(background=False):
    indent = ' ' * (20 if background else 16)
    text = native.INCLUDE + native.LOAD_V + native.LOAD_I + native.RUN
    if background:
        text += '#include "xbox_bg_xf.h"\n'
        text += '                if (!xboxBgTryWriteJoinedStrip(kind, cursor, data, vi, n))\n'
    text += indent + native.JOINED_CALL + '\n'
    if background:
        text += '                if (!xboxBgTryDecodeStrip(kind, data, vi, n, list))\n'
    text += indent + native.FLAT_CALL + '\n'
    text += native.ELIGIBILITY + native.GROUP_OPEN
    if background:
        text += '                if (!xboxBgGroupWritten)\n'
    text += '\n'.join(indent + line for line in native.GROUP_LINES) + '\n'
    return text + native.GROUP_CLOSE + '// Unrelated fixture tail is retained.\n'


def vif_fixture():
    return (vif.INCLUDE + vif.LEGACY + '// Legacy body omitted in this text fixture.\n}\n' +
            vif.UNPACK_EXTEND + vif.UNPACK_COMPACT + vif.DECODE + vif.COMMAND +
            vif.TRACK_COMMAND + vif.REGISTERS + vif.MARK_FLUSH + vif.FAST_CALL +
            vif.PAYLOAD_REGISTERS + vif.OBSERVER + vif.UNPACK_LAYOUT)


class FinalSourceAdapterTests(unittest.TestCase):
    def test_native_readers_and_writers_restore_the_input_exactly(self):
        for background in (False, True):
            before = native_fixture(background)
            after = native.patch_source(before)
            indent = ' ' * (20 if background else 16)
            restored = after.removeprefix(native.GENERATED)
            for old, new in ((native.ADAPTER_INCLUDE, ''), (native.NATIVE_SCOPE, ''),
                             (native.LOAD_V_SOURCE, native.LOAD_V),
                             (native.LOAD_I_SOURCE, native.LOAD_I)):
                self.assertEqual(restored.count(old), 1)
                restored = restored.replace(old, new, 1)
            for call, attempt in ((native.JOINED_CALL,
                                   'xboxVifSourceTryWriteJoinedStrip(kind, cursor, data, vi, n)'),
                                  (native.FLAT_CALL,
                                   'xboxVifSourceTryDecodeStrip(kind, data, vi, n, list)')):
                restored = restored.replace(native.strip_replacement(indent, call, attempt),
                                            indent + call + '\n', 1)
            restored = restored.replace(native.group_replacement(indent),
                                        '\n'.join(indent + line for line in native.GROUP_LINES) + '\n', 1)
            self.assertEqual(restored, before)
            self.assertEqual(after.count(native.READ_GUARD), 2)
            self.assertEqual(after.count('xboxVifSourceTryReadRow('), 2)

    def test_reader_semantic_drift_duplicate_and_repatch_are_rejected(self):
        source = native_fixture()
        for anchor in (native.LOAD_V, native.LOAD_I):
            for bad in (source.replace(anchor, '// drift\n', 1), source + anchor):
                with self.assertRaises(ValueError):
                    native.patch_source(bad)
        with self.assertRaises(ValueError):
            native.patch_source(native.patch_source(source))

    def test_diagnostic_paths_keep_the_original_readers(self):
        for macro in ('TS_NATIVE_DRAW_SELFCHECK', 'TS_NATIVE_RING_SELFCHECK', 'TS_NATIVE_CAPTURE'):
            self.assertIn('!' + macro, native.READ_GUARD)
        for replacement in (native.LOAD_V_SOURCE, native.LOAD_I_SOURCE):
            self.assertLess(replacement.index('xboxVifSourceTryReadRow('), replacement.index('#endif'))
            self.assertGreater(replacement.index('std::memcpy('), replacement.index('#endif'))
            self.assertIn('q & (kDataQwords - 1u)', replacement)

    def test_vif_policy_connection_and_exact_restoration(self):
        before = vif_fixture()
        after = vif.patch_source(before)
        self.assertEqual(after.count('XboxVifRecordWritePolicy::FinalState'), 1)
        self.assertIn('!PS2Memory::onVif1Worker()', vif.HOOK)
        self.assertIn('#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2', vif.HOOK)
        self.assertLess(vif.HOOK.index('const auto observe'), vif.HOOK.index('XboxVifRecordWritePolicy::FinalState'))
        self.assertLess(vif.HOOK.index('XboxVifRecordWritePolicy::FinalState'), vif.HOOK.index('in.skip(context.bytes)'))
        restored = after.removeprefix(vif.GENERATED)
        for addition in (vif.ADAPTER_INCLUDE, vif.SOURCE_INCLUDE, vif.SOURCE_LEGACY,
                         vif.SOURCE_SCOPE, vif.HOOK, vif.SOURCE_COMMAND, vif.SOURCE_TRACK):
            self.assertEqual(restored.count(addition), 1)
            restored = restored.replace(addition, '', 1)
        restored = restored.replace(vif.FAST_REPLACEMENT, vif.FAST_CALL, 1)
        self.assertEqual(restored, before)

    def test_line_endings_and_atomic_rejection(self):
        for module, source in ((native, native_fixture()), (vif, vif_fixture())):
            windows = source.replace('\n', '\r\n')
            self.assertEqual(module.patch_source(windows).replace('\r\n', '\n'), module.patch_source(source))
            for invalid in (windows + '\n', '\ufeff' + source, source + '\x00'):
                with self.assertRaises(ValueError):
                    module.patch_source(invalid)
            with tempfile.TemporaryDirectory() as tmp:
                inp, out = Path(tmp)/'input.cpp', Path(tmp)/'output.cpp'
                inp.write_text(source)
                command = [sys.executable, str(Path(module.__file__)), str(inp), str(out)]
                result = subprocess.run(command, text=True, capture_output=True, timeout=10)
                self.assertEqual(result.returncode, 0, result.stderr)
                previous = out.read_bytes()
                inp.write_text('// Missing anchors.\n')
                result = subprocess.run(command, text=True, capture_output=True, timeout=10)
                self.assertEqual(result.returncode, 2)
                self.assertEqual(out.read_bytes(), previous)
                result = subprocess.run(command[:-1] + [str(inp)], capture_output=True, timeout=10)
                self.assertEqual(result.returncode, 2)
                self.assertEqual(inp.read_text(), '// Missing anchors.\n')

    def test_group_reservation_and_counter_model(self):
        # This is an arithmetic model, not execution of the C++ writer.
        rng = random.Random(0x58465249)
        maximum = (1 << 32) - 1
        for _ in range(4096):
            counts = []
            remaining = 64
            for _ in range(rng.randrange(1, 22)):
                if remaining < 3:
                    break
                n = rng.randrange(3, remaining + 1)
                counts.append(n)
                remaining -= n
            vertices, strips = sum(counts), len(counts)
            for previous in (False, True):
                emitted, original_need = 0, 0
                joined = previous
                for n in counts:
                    original_need = max(original_need, emitted + n + 2)
                    emitted += n + (2 if joined else 0)
                    joined = True
                grouped = max(vertices + 2*(strips - 1 + int(previous)), counts[0] + 2)
                self.assertEqual(grouped, original_need)
            for total, add in ((maximum, strips), (maximum-strips, strips),
                               (maximum-vertices+1, vertices), (maximum-vertices, vertices)):
                self.assertEqual(total > maximum-add, total+add > maximum)

    def test_cpp_read_is_bounded_and_failure_precedes_output(self):
        text = (XBOX/'xbox_vif_source.cpp').read_text()
        body = text.split('bool xboxVifSourceTryReadRow(', 1)[1].split('bool xboxVifSourceTryDecodeStrip(', 1)[0]
        self.assertIn('row >= 1024u', body)
        self.assertIn('source->array(vu, row, 1u, false, input, stride)', body)
        self.assertIn('std::memcpy(value, input, 12u);', body)
        self.assertIn('stride == 16u ? input + 12u : vu + row * 16u + 12u', body)
        self.assertLess(body.rindex('return false'), body.index('std::memcpy(out, value'))
        self.assertEqual(body.count('std::memcpy(out,'), 1)

    def test_cpp_cursor_guards_precede_all_output(self):
        text = (XBOX/'xbox_vif_source.cpp').read_text()
        joined = text.split('bool xboxVifSourceTryWriteJoinedStrip(', 1)[1].split('bool xboxVifSourceTryWriteGroup(', 1)[0]
        self.assertLess(joined.index('cursor.strips == std::numeric_limits'), joined.index('joined(kind,'))
        self.assertLess(joined.index('cursor.vertices > std::numeric_limits'), joined.index('joined(kind,'))
        group = text.split('bool xboxVifSourceTryWriteGroup(', 1)[1].split('bool xboxVifSourceGetStats(', 1)[0]
        self.assertLess(group.index('cursor.strips > std::numeric_limits'), group.index('joined(kind,'))
        self.assertLess(group.index('cursor.vertices > std::numeric_limits'), group.index('vertex(kind,'))
        self.assertIn('required = strips[0].count + 2u;', group)
        self.assertLess(group.index('required = strips[0].count + 2u'), group.index('if (!room(cursor, required)'))


if __name__ == '__main__':
    unittest.main()

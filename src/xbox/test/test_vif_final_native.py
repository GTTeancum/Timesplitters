"""Deferred native probes. Do NOT select this module during source-only work."""
from pathlib import Path
import os
import shlex
import shutil
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]


class FinalWriteNativeTests(unittest.TestCase):
    def build_and_run(self, source, runtime=False):
        command = shlex.split(os.environ.get('CXX', 'c++'))
        if not command or not shutil.which(command[0]):
            self.skipTest('requires a host C++ compiler')
        with tempfile.TemporaryDirectory(prefix='ts-vif-final-native-') as tmp:
            out = Path(tmp)/'probe'
            command += ['-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror', '-I', str(XBOX)]
            command += shlex.split(os.environ.get('TS_VIF_SOURCE_CXXFLAGS', ''))
            if runtime:
                command += ['-pthread', '-DTS_VIF_SOURCE=1', '-DTS_DRAW_RECORDS=1',
                            '-I', str(ROOT/'project/game'),
                            '-I', str(ROOT/'source/PS2Recomp/ps2xRuntime/include')]
            command += [str(XBOX/'test'/source)]
            if runtime:
                command += [str(XBOX/'xbox_vif_source.cpp'), str(XBOX/'xbox_vif_record.cpp')]
            result = subprocess.run(command + ['-o', str(out)], capture_output=True, text=True, timeout=120)
            self.assertEqual(result.returncode, 0, result.stdout+result.stderr)
            result = subprocess.run([str(out)], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout+result.stderr)
            self.assertEqual(result.stderr, '')
            return result.stdout

    def test_real_write_plan_header(self):
        self.assertEqual(self.build_and_run('vif_write_plan_test.cpp'), 'VIF final-write native probe passed\n')

    def test_source_read_cursor_guards_and_preserve_vs_final_state(self):
        self.assertIn('VIF source-read and final-state integration probe passed\n',
                      self.build_and_run('vif_source_read_test.cpp', runtime=True))


if __name__ == '__main__':
    unittest.main()

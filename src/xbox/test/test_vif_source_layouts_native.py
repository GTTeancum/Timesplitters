"""Deferred native execution of the source-layout probe; excluded from code-only checks."""
from pathlib import Path
import os
import shlex
import shutil
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]


class SourceLayoutNativeTests(unittest.TestCase):
    def test_actual_bridge_layouts_rows_and_prefix_integration(self):
        compiler = shlex.split(os.environ.get('CXX', 'c++'))
        if not compiler or not shutil.which(compiler[0]):
            self.skipTest('requires a host C++ compiler')
        with tempfile.TemporaryDirectory(prefix='ts-source-layout-native-') as directory:
            output = Path(directory) / 'probe'
            command = compiler + ['-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror', '-pthread',
                                  '-DTS_VIF_SOURCE=1', '-DTS_DRAW_RECORDS=1',
                                  '-I', str(XBOX), '-I', str(ROOT/'project/game'),
                                  '-I', str(ROOT/'source/PS2Recomp/ps2xRuntime/include')]
            command += shlex.split(os.environ.get('TS_VIF_SOURCE_CXXFLAGS', ''))
            command += [str(XBOX/'test/vif_source_layouts_test.cpp'), str(XBOX/'xbox_vif_source.cpp'),
                        str(XBOX/'xbox_vif_record.cpp'), '-o', str(output)]
            result = subprocess.run(command, capture_output=True, text=True, timeout=120)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            result = subprocess.run([str(output)], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            self.assertEqual(result.stderr, '')
            self.assertTrue(result.stdout.endswith('VIF source layout native probe passed\n'))


if __name__ == '__main__':
    unittest.main()

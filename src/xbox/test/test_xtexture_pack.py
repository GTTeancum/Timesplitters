"""Host checks of production XTP reader/pool; no game assets or Xbox SDK.

python -m unittest discover -s src/xbox/test -p 'test_xtexture_pack.py' -v
CXX and TS_XTP_CXXFLAGS may select a host compiler and sanitizer flags.
The Win32 shim exercises asynchronous lifetime, not Xbox driver/GPU behavior.
"""
import os
from pathlib import Path
import shlex
import struct
import subprocess
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[3]
HEADER = struct.Struct("<4s7I")
ENTRY = struct.Struct("<QIIHHBBBB")


def pack_bytes(entries):
    """Synthetic (key, format, width, levels) entries with known payloads."""
    offset = (HEADER.size + len(entries) * ENTRY.size + 127) & ~127
    data_start = offset
    index, data = [], bytearray()
    for key, fmt, width, levels in entries:
        size = 0
        side = width
        for _ in range(levels):
            size += ((side + 3) // 4) ** 2 * (8 if fmt == 0 else 16) if fmt < 2 else side * side * (4 if fmt == 2 else 2)
            side = max(1, side // 2)
        at = (offset + 127) & ~127
        data += bytes(at - offset) + bytes([key & 255]) * size
        index.append(ENTRY.pack(key, at, size, width, width, fmt, levels, 1, 0))
        offset = at + size
    head = HEADER.pack(b"XTP1", 1, 1, len(entries), HEADER.size, data_start, 0, 0) + b"".join(index)
    return head + bytes(data_start - len(head)) + data


class TexturePackTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temp = tempfile.TemporaryDirectory(prefix="ts-xtp-test-")
        cls.addClassCleanup(cls.temp.cleanup)
        cls.folder = Path(cls.temp.name)
        cls.exe = cls.folder / "texture_pack_test"
        command = shlex.split(os.environ.get("CXX", "c++")) + ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror", "-pthread", "-D__stdcall="]
        command += shlex.split(os.environ.get("TS_XTP_CXXFLAGS", ""))
        command += ["-I" + str(ROOT / "src/xbox/test/texture_pack_host"),
                    "-I" + str(ROOT / "source/PS2Recomp/ps2xRuntime/include"),
                    str(ROOT / "src/xbox/xbox_texture_pack.cpp"),
                    str(ROOT / "src/xbox/test/texture_pack_host/texture_pack_test.cpp"), "-o", str(cls.exe)]
        built = subprocess.run(command, capture_output=True, text=True, timeout=60)
        if built.returncode:
            raise RuntimeError("host reader build failed:\n" + built.stdout + built.stderr)
        cls.normal = cls.folder / "normal.xtp"
        cls.normal.write_bytes(pack_bytes([(0x10, 0, 8, 2), (0x11, 1, 8, 2), (0x12, 2, 8, 4), (0x13, 3, 8, 4)]))
        cls.other = cls.folder / "other.xtp"
        cls.other.write_bytes(pack_bytes([(0x80, 2, 8, 1)]))
        cls.room = cls.folder / "room.xtp"
        cls.room.write_bytes(pack_bytes([(0x10, 0, 4, 1), (0x11, 0, 4, 1), (0x12, 0, 4, 1), (0x13, 2, 8, 1)]))

    def run_case(self, mode, path=None, other=None):
        result = subprocess.run([str(self.exe), mode, str(path or self.normal), str(other or self.other)],
                                capture_output=True, text=True, timeout=10)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertNotIn("runtime error:", result.stderr)
        self.assertNotIn("Sanitizer", result.stderr)

    def test_all_native_formats_load(self): self.run_case("load")
    def test_reopen_restarts_loader(self): self.run_case("reopen")
    def test_failed_reopen_discards_previous_pack(self): self.run_case("missing", other=self.folder / "absent.xtp")
    def test_pool_alignment_and_impossible_fit(self): self.run_case("admission")
    def test_eviction_across_frame_rollover(self): self.run_case("wrap")
    def test_loader_start_failure_then_reopen(self): self.run_case("thread-fail")
    def test_close_waits_for_pending_read(self): self.run_case("pending-close")
    def test_read_failure_invalidates_cached_no_room(self): self.run_case("failed-room", path=self.room)
    def test_read_completion_invalidates_cached_no_room(self): self.run_case("completed-room", path=self.room)

    def test_rejects_malformed_native_metadata(self):
        source = self.normal.read_bytes()
        patches = [("header reserved", 24, "<I", 1), ("index overlaps header", 16, "<I", 16),
                   ("data overlaps index", 20, "<I", 32), ("data outside file", 20, "<I", len(source) + 1),
                   ("count bounded", 12, "<I", 65537), ("entry reserved", 55, "<B", 1),
                   ("unknown flags", 54, "<B", 128), ("unaligned payload", 40, "<I", 129),
                   ("mismatched bytes", 44, "<I", 7), ("non-power-of-two", 48, "<H", 7),
                   ("unknown format", 52, "<B", 255), ("zero mip count", 53, "<B", 0)]
        for label, offset, fmt, value in patches:
            with self.subTest(label=label):
                altered = bytearray(source)
                struct.pack_into(fmt, altered, offset, value)
                path = self.folder / "bad.xtp"
                path.write_bytes(altered)
                self.run_case("reject", path=path)


if __name__ == "__main__":
    unittest.main()

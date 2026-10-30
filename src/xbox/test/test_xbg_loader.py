"""One production-loader lifecycle check using the existing independent XBG fixture.

CXX and TS_XBG_LOADER_CXXFLAGS select the compiler and optional sanitizer flags.
The injected boundary models short reads, allocation failure and handle ownership;
it does not exercise Xbox filesystem drivers or GPU access.
"""
from __future__ import annotations

import hashlib
import importlib.util
import os
from pathlib import Path
import shlex
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("xbg_loader_fixture", XBOX / "test/test_xbgbuild.py")
fixture = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fixture)

PROBE = r'''
#include "xbox_bg_loader.h"
#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iterator>
#include <vector>

using Loader = XboxBgLoader;
using Status = Loader::Status;
struct Host
{
    std::vector<uint8_t> file;
    uint64_t reported = 0;
    size_t offset = 0;
    unsigned handles = 0, allocations = 0, releases = 0, openCalls = 0;
    uint32_t live = 0, peak = 0;
    bool missing = false, noMemory = false;
    size_t failAt = size_t(-1);
    static Loader::OpenResult open(void *ctx, const char *, void *&out, uint64_t &size)
    {
        Host &h = *static_cast<Host *>(ctx);
        ++h.openCalls;
        out = nullptr; size = h.reported; h.offset = 0;
        if (h.missing) return Loader::OpenResult::Missing;
        assert(h.handles == 0);
        ++h.handles; out = &h;
        return Loader::OpenResult::Opened;
    }
    static bool read(void *ctx, void *handle, uint8_t *out, uint32_t bytes, uint32_t &got)
    {
        Host &h = *static_cast<Host *>(ctx);
        assert(handle == &h && h.handles == 1);
        got = 0;
        if (h.offset >= h.failAt) return false;
        got = static_cast<uint32_t>(std::min<size_t>({bytes, 7, h.file.size() - h.offset}));
        if (got) std::memcpy(out, h.file.data() + h.offset, got);
        h.offset += got;
        return true;
    }
    static void close(void *ctx, void *handle)
    {
        Host &h = *static_cast<Host *>(ctx);
        assert(handle == &h && h.handles == 1);
        --h.handles;
    }
    static uint8_t *allocate(void *ctx, uint32_t bytes)
    {
        Host &h = *static_cast<Host *>(ctx);
        assert(h.live == 0); // Replacement never keeps the old pack allocated.
        if (h.noMemory) return nullptr;
        auto *result = static_cast<uint8_t *>(std::malloc(bytes));
        assert(result);
        ++h.allocations; h.live = bytes; h.peak = std::max(h.peak, bytes);
        return result;
    }
    static void release(void *ctx, uint8_t *bytes)
    {
        Host &h = *static_cast<Host *>(ctx);
        assert(h.live != 0);
        h.live = 0; ++h.releases;
        std::free(bytes);
    }
    Loader::Platform platform() { return {this, open, read, close, allocate, release}; }
};

struct Borrow
{
    Loader *loader;
    Host *host;
    uint64_t generation;
    bool called = false;
    static void visit(void *ctx, const ts_xbg::View &view)
    {
        Borrow &b = *static_cast<Borrow *>(ctx);
        b.called = true;
        assert(view.level == 7 && view.vertexCount == 10);
        uint8_t before[44]; std::memcpy(before, view.vertices, sizeof(before));
        const unsigned releases = b.host->releases;
        assert(b.loader->unload() == Status::Busy);
        assert(b.loader->load("fixture", 7, 4096) == Status::Busy);
        assert(!b.loader->withView(b.generation, visit, &b));
        assert(b.host->releases == releases && b.host->live == 1080);
        assert(std::memcmp(before, view.vertices, sizeof(before)) == 0);
    }
};

int main(int argc, char **argv)
{
    assert(argc == 2);
    Host host;
    std::ifstream file(argv[1], std::ios::binary);
    host.file.assign(std::istreambuf_iterator<char>(file), {});
    assert(host.file.size() == 1080);
    host.reported = host.file.size();
    const std::vector<uint8_t> original = host.file;
    {
        Loader loader(host.platform());
        Loader::Snapshot first, next;
        Loader::Stats stats;
        assert(loader.load("fixture", 7, 0) == Status::Disabled);
        assert(host.openCalls == 0 && host.allocations == 0);
        assert(loader.load("fixture", 7, 1080) == Status::Ready);
        assert(loader.snapshot(first) && first.level == 7 && first.bytes == 1080);
        assert(first.vertexCount == 10 && first.roomCount == 2);
        assert(std::memcmp(first.sourceRawSha256, original.data() + 88, 32) == 0);
        uint8_t vertex[44]{};
        assert(loader.copyRecords(first.generation, Loader::Section::Vertices, 0, 1, vertex, sizeof(vertex)));
        assert(std::memcmp(vertex, original.data() + 640, sizeof(vertex)) == 0);
        const uint8_t saved = vertex[0];
        assert(!loader.copyRecords(first.generation, Loader::Section::Vertices, 10, 1, vertex, sizeof(vertex)));
        assert(vertex[0] == saved);
        Borrow borrow{&loader, &host, first.generation};
        assert(loader.withView(first.generation, Borrow::visit, &borrow) && borrow.called);
        assert(loader.snapshot(next) && next.generation == first.generation);

        // Missing replacement invalidates old storage and stale tokens.
        host.missing = true;
        assert(loader.load("missing", 7, 1080) == Status::Missing);
        assert(host.live == 0 && host.handles == 0 && !loader.snapshot(next));
        assert(next.generation == 0 && next.vertexCount == 0);
        assert(!loader.withView(first.generation, Borrow::visit, &borrow));
        host.missing = false;
        assert(loader.load("fixture", 7, 1080) == Status::Ready);
        assert(loader.snapshot(next) && next.generation > first.generation);
        assert(!loader.copyRecords(first.generation, Loader::Section::Vertices, 0, 1, vertex, sizeof(vertex)));

        const unsigned allocated = host.allocations;
        assert(loader.load("fixture", 7, 1079) == Status::OverBudget);
        assert(host.allocations == allocated && host.live == 0 && host.handles == 0);
        assert(loader.load("fixture", 7, Loader::kMaxResidentBytes + 1) == Status::InvalidArgument);
        host.reported = uint64_t(1) << 40;
        assert(loader.load("huge", 7, Loader::kMaxResidentBytes) == Status::OverBudget);
        assert(host.allocations == allocated && host.handles == 0);
        host.reported = original.size();
        assert(loader.load("wrong-level", 8, 1080) == Status::LevelMismatch);
        assert(host.allocations == allocated);

        host.file.back() ^= 1;
        assert(loader.load("corrupt", 7, 1080) == Status::InvalidPack);
        assert(host.live == 0 && host.handles == 0);
        assert(loader.stats(stats) && stats.lastValidationError == ts_xbg::Error::Checksum);
        host.file = original;
        host.noMemory = true;
        assert(loader.load("oom", 7, 1080) == Status::NoMemory);
        assert(host.live == 0 && host.handles == 0);
        host.noMemory = false;
        host.failAt = 200;
        assert(loader.load("read-failure", 7, 1080) == Status::IoError);
        assert(host.live == 0 && host.handles == 0);
        host.failAt = size_t(-1);

        assert(loader.load("fixture", 7, 1080) == Status::Ready);
        assert(loader.snapshot(next));
        assert(loader.unload() == Status::Unloaded);
        assert(!loader.withView(next.generation, Borrow::visit, &borrow));
        assert(loader.load("fixture", 7, 1080) == Status::Ready);
        assert(loader.stats(stats));
        assert(stats.loads == 4 && stats.missing == 1 && stats.overBudget == 2);
        assert(stats.invalidPacks == 1 && stats.ioFailures == 1 && stats.noMemory == 1);
        assert(stats.liveBytes == 1080 && stats.peakBytes == 1080 && stats.busy == 3);
        assert(stats.staleAccesses == 3 && stats.lastStatus == Status::Ready);
    }
    assert(host.handles == 0 && host.live == 0 && host.allocations == host.releases);
    assert(host.peak == 1080);
}
'''


class LoaderLifecycleTests(unittest.TestCase):
    def test_owned_pack_lifecycle_and_fallback(self):
        raw = fixture.source_raw()
        pak_sha = hashlib.sha256(fixture.pak([("bg/level7/level7.raw", raw)])).digest()
        packed = fixture.expected_pack(raw, pak_sha)
        with tempfile.TemporaryDirectory(prefix="ts-xbg-loader-") as directory:
            root = Path(directory)
            (root / "fixture.xbg").write_bytes(packed)
            (root / "probe.cpp").write_text(PROBE)
            executable = root / "probe"
            command = shlex.split(os.environ.get("CXX", "c++"))
            command += ["-std=c++17", "-O2", "-Wall", "-Wextra", "-Werror"]
            command += shlex.split(os.environ.get("TS_XBG_LOADER_CXXFLAGS", ""))
            command += ["-I" + str(XBOX), str(XBOX / "xbox_bg_loader.cpp"),
                        str(root / "probe.cpp"), "-o", str(executable)]
            built = subprocess.run(command, capture_output=True, text=True, timeout=60)
            self.assertEqual(built.returncode, 0, built.stdout + built.stderr)
            ran = subprocess.run([str(executable), str(root / "fixture.xbg")],
                                 capture_output=True, text=True, timeout=15)
            self.assertEqual(ran.returncode, 0, ran.stdout + ran.stderr)
            self.assertNotIn("runtime error:", ran.stderr)
            self.assertNotIn("Sanitizer", ran.stderr)


if __name__ == "__main__":
    unittest.main()

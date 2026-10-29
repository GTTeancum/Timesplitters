"""Host checks for the opt-in native capture hook; no assets or Xbox SDK.

The actual adapter is compiled with narrow Win32 I/O stubs. Native callback
declarations are extracted from the repository API header, so changing that
API cannot silently leave a hand-written test signature passing. This does
not validate nxdk linking, real console I/O, gameplay or performance.
"""
from __future__ import annotations

import io
import os
from pathlib import Path
import shlex
import struct
import subprocess
import sys
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
REF_ROOT = Path(os.environ.get("TS_VU_CAPTURE_REFERENCE_ROOT",
                              os.environ.get("TS_XMESH_REFERENCE_ROOT", ROOT)))
sys.path.insert(0, str(XBOX / "tools"))
import xmeshcapture as capture
import xmeshbuild as mesh

WINDOWS_STUB = r"""
#pragma once
#include <cstdint>
using DWORD = uint32_t;
using HANDLE = void *;
using BOOL = int;
#define INVALID_HANDLE_VALUE reinterpret_cast<HANDLE>(static_cast<intptr_t>(-1))
constexpr DWORD GENERIC_WRITE=0x40000000, CREATE_NEW=1, FILE_ATTRIBUTE_NORMAL=128;
constexpr DWORD ERROR_FILE_EXISTS=80, ERROR_ALREADY_EXISTS=183, ERROR_WRITE_FAULT=29;
HANDLE CreateFileA(const char *, DWORD, DWORD, void *, DWORD, DWORD, HANDLE);
BOOL WriteFile(HANDLE, const void *, DWORD, DWORD *, void *);
BOOL CloseHandle(HANDLE);
DWORD GetLastError();
DWORD GetTickCount();
"""

HARNESS = r"""
#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include "xbox_vu_capture.cpp"

class GS {};
class PS2Memory {};
static std::vector<Vu1NativeProgram> registry;
void registerVu1NativeProgram(const Vu1NativeProgram &p) { registry.push_back(p); }

static std::vector<uint8_t> output;
static DWORD clockMs=0, lastError=0;
static unsigned opens=0, writes=0, closes=0, callbacks=0;
static bool failOpen=false, failWrite=false, shortWrite=false, failClose=false;
static std::string outputName;
static PS2Memory memory;
static GS gs;

HANDLE CreateFileA(const char *name, DWORD access, DWORD share, void *security,
                   DWORD creation, DWORD attributes, HANDLE templ)
{
    assert(access==GENERIC_WRITE && share==0 && !security && creation==CREATE_NEW);
    assert(attributes==FILE_ATTRIBUTE_NORMAL && !templ);
    ++opens;
    if (failOpen) { lastError=5; return INVALID_HANDLE_VALUE; }
    // The first existing file must be preserved. Opening the next succeeds.
    if (opens==1) { lastError=ERROR_FILE_EXISTS; return INVALID_HANDLE_VALUE; }
    outputName=name;
    return reinterpret_cast<HANDLE>(static_cast<intptr_t>(1));
}
BOOL WriteFile(HANDLE file, const void *data, DWORD size, DWORD *done, void *)
{
    assert(file==reinterpret_cast<HANDLE>(static_cast<intptr_t>(1)));
    ++writes;
    if (failWrite && writes==2) { lastError=112; *done=0; return 0; }
    *done=shortWrite && writes==2 ? size-1 : size;
    const uint8_t *p=static_cast<const uint8_t *>(data);
    output.insert(output.end(), p, p+*done);
    return 1;
}
BOOL CloseHandle(HANDLE file)
{
    assert(file==reinterpret_cast<HANDLE>(static_cast<intptr_t>(1)));
    ++closes;
    if (failClose) { lastError=6; return 0; }
    return 1;
}
DWORD GetLastError() { return lastError; }
DWORD GetTickCount() { return clockMs; }

static bool original(uint32_t pc, uint8_t *data, uint32_t size, uint32_t top,
                     PS2Memory *m, GS &g)
{
    assert(m==&memory && &g==&gs);
    assert(top==0x1500u); // observation masks it, forwarding must not
    ++callbacks;
    if (data && size) data[0]^=0xff; // capture must already own the old bytes
    return pc==0x0d20;              // false retains the original fallback
}
static void invoke(uint32_t pc, uint8_t *data, uint32_t size=16384)
{
    const unsigned before=callbacks;
    const bool result=registry[1].run(pc,data,size,0x1500u,&memory,gs);
    assert(callbacks==before+1 && result==(pc==0x0d20));
}

struct Buffer
{
    std::vector<uint8_t> bytes;
    unsigned opened=0, closed=0;
    static bool open(void *p) { ++static_cast<Buffer *>(p)->opened; return true; }
    static bool write(void *p,const uint8_t *v,size_t n)
    {
        auto &b=static_cast<Buffer *>(p)->bytes;
        b.insert(b.end(),v,v+n); return true;
    }
    static void close(void *p) { ++static_cast<Buffer *>(p)->closed; }
    xbox_vu_capture::Sink sink() { return {this,open,write,close}; }
};

int main(int argc,char **argv)
{
    assert(argc==3);
    const std::string mode=argv[1];
    uint8_t data[16384];
    auto initialise = [&] {
        for(unsigned i=0;i<sizeof(data);++i) data[i]=static_cast<uint8_t>(i*37u+9u);
        // A genuine supported input shape, with wholly synthetic vertices.
        const uint32_t prim=4u|(1u<<3)|(1u<<4);
        xbox_vu_capture::put32(data+256u*16u,3u|0x8000u);
        xbox_vu_capture::put32(data+256u*16u+4u,(3u<<28)|(prim<<15)|(1u<<14));
        xbox_vu_capture::put32(data+256u*16u+8u,0x512u);
        xbox_vu_capture::put32(data+256u*16u+12u,0u);
        // The upstream importer validates the native render-state bounds.
        // Supply a valid A+D packet (tag + one register/value qword).
        xbox_vu_capture::put32(data+(256u+216u)*16u,0x8001u);
        xbox_vu_capture::put32(data+(256u+216u)*16u+4u,1u<<28);
        xbox_vu_capture::put32(data+(256u+216u)*16u+8u,0xeu);
        xbox_vu_capture::put32(data+(256u+216u)*16u+12u,0u);
        xbox_vu_capture::put32(data+(256u+217u)*16u,0u);
        xbox_vu_capture::put32(data+(256u+217u)*16u+4u,0u);
        xbox_vu_capture::put32(data+(256u+217u)*16u+8u,0x06u);
        xbox_vu_capture::put32(data+(256u+217u)*16u+12u,0u);
    };
    initialise();

    if(mode=="early-close")
    {
        {
            Capture early;
            const xbox_vu_capture::Sink sink{&early,&Capture::open,&Capture::write,&Capture::close};
            assert(early.recorder.observe(0,data,sizeof(data),0x1500u,0,sink)==
                   xbox_vu_capture::Result::Recorded);
            assert(early.recorder.records()==1 && closes==0);
        }
        assert(closes==1); // destructor closes an incomplete capture session
    }
    else if(mode=="core")
    {
        using namespace xbox_vu_capture;
        Buffer b;
        Recorder invalid{{0,0,1}};
        assert(invalid.stopped());
        assert(invalid.observe(0,data,sizeof(data),0,0,b.sink())==Result::Skipped);
        Recorder invalidLimit{{0,1,4097}};
        assert(invalidLimit.stopped());
        Recorder delayed{{32,2,3}};
        assert(delayed.observe(0x3ce8,data,sizeof(data),0,0,b.sink())==Result::Skipped);
        // Clock wrap is intentional. Invalid lengths do not open files.
        assert(delayed.observe(0,data,sizeof(data),0,0xfffffff0u,b.sink())==Result::Skipped);
        assert(delayed.observe(0,data,16383,0,0x20u,b.sink())==Result::Skipped);
        assert(delayed.observe(0,nullptr,sizeof(data),0,0x20u,b.sink())==Result::Skipped);
        assert(b.opened==0);
        assert(delayed.observe(0,data,sizeof(data),0x1500u,0x10u,b.sink())==Result::Recorded);
        assert(delayed.observe(0,data,sizeof(data),0x1500u,0x11u,b.sink())==Result::Skipped);
        // Sampling is per PC, so the rare entry is not starved.
        assert(delayed.observe(0x2800,data,sizeof(data),0x1500u,0x12u,b.sink())==Result::Recorded);
        assert(delayed.observe(0,data,sizeof(data),0x1500u,0x13u,b.sink())==Result::Complete);
        assert(delayed.records()==3 && delayed.stopped() && b.opened==1 && b.closed==1);
        assert(delayed.observe(0,data,sizeof(data),0,0x14u,b.sink())==Result::Skipped);
        Buffer aliasBytes;
        Recorder alias{{0,1,1}};
        assert(alias.observe(0x4000u,data,sizeof(data),0,0,aliasBytes.sink())==Result::Complete);
        // Keep the original PC in the header; only classification is masked.
        assert(aliasBytes.bytes[20]==0 && aliasBytes.bytes[21]==0x40);
        output=b.bytes;
    }
    else
    {
        Vu1NativeProgram unknown{123,&original,"unknown"};
        xboxRegisterVu1NativeProgram(unknown);
        assert(registry.size()==1 && registry[0].hash==123 && registry[0].run==&original);
        Vu1NativeProgram target{xbox_vu_capture::kProgramHash,&original,"target"};
        xboxRegisterVu1NativeProgram(target);
        assert(registry.size()==2 && registry[1].hash==target.hash && registry[1].name==target.name);
        assert(registry[1].run!=&original);
        // A duplicate registration retains its own callback without recursion.
        xboxRegisterVu1NativeProgram(target);
        assert(registry.size()==3 && registry[2].run==&original);
        failOpen=mode=="open-error";
        failWrite=mode=="write-error";
        shortWrite=mode=="short-write";
        failClose=mode=="close-error";
        invoke(0x3ce8,data); // constants/unknown entry never captured
        invoke(0,data,16383); // size must be exactly 16 KiB
        invoke(0,nullptr);
        assert(opens==0);
        initialise();
        invoke(0,data);
        invoke(0,data); // stride=2: skip repeated Plain draw
        invoke(0x0d20,data); // per-PC: capture first EnvMap
        invoke(0,data); // next Plain: capture and hit configured limit=3
        for(unsigned i=0;i<8;++i) invoke(0,data);
        if(failOpen) assert(opens==1 && writes==0 && closes==0);
        else if(failWrite||shortWrite) assert(opens==2 && writes==2 && closes==1);
        else assert(opens==2 && writes==6 && closes==1);
        if(!failOpen) assert(outputName=="E:\\TimeSplitters\\vu1-001.tsvucap");
    }
    FILE *out=std::fopen(argv[2],"wb");
    assert(out);
    if(!output.empty())
        assert(std::fwrite(output.data(),1,output.size(),out)==output.size());
    assert(std::fclose(out)==0);
}
"""


class CaptureTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.tmp = tempfile.TemporaryDirectory()
        cls.directory = Path(cls.tmp.name)
        api = (REF_ROOT / "source/PS2Recomp/ps2xRuntime/include/runtime/ps2_vu1_jit.h").read_text()
        start = api.index("class GS;\nclass PS2Memory;")
        end = api.index("// TS_VU1_TRACE=", start)
        native = api[start:end]
        assert "using Vu1NativeEntry" in native and "void registerVu1NativeProgram(" in native
        (cls.directory / "runtime").mkdir()
        (cls.directory / "runtime/ps2_vu1_jit.h").write_text("#pragma once\n#include <cstdint>\n" + native)
        (cls.directory / "windows.h").write_text(WINDOWS_STUB)
        (cls.directory / "capture_test.cpp").write_text(HARNESS)
        cls.executable = cls.directory / "capture_test"
        cxx = shlex.split(os.environ.get("CXX", "c++"))
        flags = shlex.split(os.environ.get("TS_VU_CAPTURE_CXXFLAGS",
                                          os.environ.get("TS_XMESH_CXXFLAGS", "-O2")))
        command = cxx + ["-std=c++17", "-Wall", "-Wextra", "-Werror"] + flags + [
            "-DTS_NATIVE_CAPTURE=1", "-DTS_NATIVE_CAPTURE_DELAY_MS=0",
            "-DTS_NATIVE_CAPTURE_STRIDE=2", "-DTS_NATIVE_CAPTURE_LIMIT=3",
            "-I" + str(cls.directory), "-I" + str(XBOX),
            str(cls.directory / "capture_test.cpp"), "-o", str(cls.executable)]
        subprocess.run(command, check=True, capture_output=True, text=True)
        # Disabled production source must need neither SDK nor runtime headers.
        subprocess.run(cxx + ["-std=c++17", "-Werror", "-DTS_NATIVE_CAPTURE=0", "-c",
                              str(XBOX / "xbox_vu_capture.cpp"), "-o", str(cls.directory / "off.o")],
                       check=True, capture_output=True, text=True)

    @classmethod
    def tearDownClass(cls):
        cls.tmp.cleanup()

    def run_case(self, mode):
        output = self.directory / (mode + ".bin")
        result = subprocess.run([str(self.executable), mode, str(output)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertNotIn("runtime error:", result.stderr)
        self.assertNotIn("AddressSanitizer", result.stderr)
        return output.read_bytes(), result.stderr

    def records(self, data):
        self.assertEqual(len(data) % 16432, 0)
        result = []
        for offset in range(0, len(data), 16432):
            h = struct.unpack_from("<8s6I2Q", data, offset)
            self.assertEqual(h[:4], (b"TSVUCAP\0", 1, 16432, 16384))
            self.assertEqual(h[5:8], (256, 0, 0x38AE1E855CD83DEE))
            result.append((h[4], h[8], data[offset + 48:offset + 16432]))
        return result

    def test_callback_snapshot_fallback_and_bound(self):
        data, log = self.run_case("success")
        records = self.records(data)
        self.assertEqual([r[0] for r in records], [0, 0x0D20, 0])
        self.assertEqual([r[1] for r in records], [3, 5, 6])
        original = bytearray((i * 37 + 9) & 255 for i in range(16384))
        prim = 4 | (1 << 3) | (1 << 4)
        struct.pack_into("<4I", original, 256 * 16, 3 | 0x8000,
                         (3 << 28) | (prim << 15) | (1 << 14), 0x512, 0)
        struct.pack_into("<4I", original, (256 + 216) * 16, 0x8001, 1 << 28, 0xE, 0)
        struct.pack_into("<4I", original, (256 + 217) * 16, 0, 0, 0x06, 0)
        self.assertEqual(records[0][2], original)  # before callback writes
        self.assertEqual(log.count("output=E:"), 2)  # open and completion
        self.assertIn("complete records=3", log)
        self.assertNotIn("stopped error=", log)

    def test_timing_wrap_input_bounds_and_per_pc_sampling(self):
        data, log = self.run_case("core")
        records = self.records(data)
        self.assertEqual([r[0] for r in records], [0, 0x2800, 0])
        self.assertEqual([r[1] for r in records], [4, 6, 7])
        self.assertFalse(log)

    def test_io_failure_disables_capture_but_keeps_callback(self):
        for mode, length in (("open-error", 0), ("write-error", 48), ("short-write", 16431)):
            with self.subTest(mode=mode):
                data, log = self.run_case(mode)
                self.assertEqual(len(data), length)
                self.assertEqual(log.count("stopped error="), 1)
                self.assertNotIn("complete records=", log)

    def test_close_error_is_not_reported_as_complete(self):
        data, log = self.run_case("close-error")
        self.assertEqual(len(self.records(data)), 3)
        self.assertIn("stopped error=6 records=3", log)
        self.assertNotIn("complete records=", log)

    def test_normal_shutdown_closes_an_early_session(self):
        data, log = self.run_case("early-close")
        self.assertEqual(len(self.records(data)), 1)
        self.assertNotIn("complete records=", log)

    def test_writer_converter_round_trip(self):
        data, _ = self.run_case("success")
        records = list(capture.records(io.BytesIO(data), input_format="native-capture"))
        self.assertEqual([record.draw_ordinal for record in records], [3, 5, 6])
        for record in records:
            # A native observer cannot supply interpreter state or microcode.
            self.assertIsNone(record.code)
            self.assertIsNone(record.state_bytes)
            self.assertIsNone(record.itop)
            self.assertIsNone(record.max_cycles)
        for index in range(3):
            packed = capture.extract(io.BytesIO(data), index, input_format="native-capture")
            fields = mesh.HEADER.unpack_from(packed)
            self.assertEqual(fields[4:7], (256, 1, 3))
            self.assertEqual(fields[3], (0, 1, 0)[index])
        # Retain upstream comparison semantics: equal decoded geometry can
        # have different live constants and must not imply safe cache reuse.
        report = capture.analyze(io.BytesIO(data))
        self.assertEqual(report["status_counts"], {"converted": 3})
        plain = next(group for group in report["repeated_geometry"] if group["records"] == [0, 2])
        self.assertEqual(plain["distinct_constant_inputs"], 2)


if __name__ == "__main__":
    unittest.main()

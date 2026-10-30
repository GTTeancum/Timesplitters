"""Production loader -> source binding -> live-color vertex integration.

All inputs and expected vertices are independent synthetic fixtures from the
format tests. No game assets or production vertex decoder build the oracle.
CXX and TS_XBG_BINDING_CXXFLAGS select the compiler and sanitizer flags.
"""
from __future__ import annotations

import hashlib
import importlib.util
import os
from pathlib import Path
import shlex
import struct
import subprocess
import tempfile
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
spec = importlib.util.spec_from_file_location("xbg_binding_fixtures", XBOX / "test/test_xbgbuild.py")
fixtures = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fixtures)

PROBE = r"""
#include "xbox_bg_runtime.h"
#include "xbox_bg_xf.h"
#include <array>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#define CHECK(x) do { if (!(x)) { std::cerr << __LINE__ << ": " << #x << '\n'; std::exit(1); } } while (0)
constexpr uint32_t base=0x100000, colorBase=0x200000, ramSize=32u*1024u*1024u;
uint32_t word(const uint8_t *p) { uint32_t v; std::memcpy(&v,p,4); return v; }
void put(uint8_t *p,uint32_t v) { std::memcpy(p,&v,4); }
std::vector<uint8_t> read(const std::string &path) {
    std::ifstream in(path,std::ios::binary); CHECK(in.good());
    return std::vector<uint8_t>(std::istreambuf_iterator<char>(in),{});
}
struct Harness {
    std::string root;
    std::vector<uint8_t> raw, expected, colors, ram;
    std::array<uint8_t,16384> vu{};
    uint32_t kind=0, top=32, vi=56;
    explicit Harness(const char *p):root(p),raw(read(root+"/raw.bin")),
        expected(read(root+"/expected.bin")),colors(read(root+"/colors.bin")),ram(ramSize) {
        CHECK(raw.size()==0x740 && expected.size()==10*44 && colors.size()==40);
        std::memcpy(ram.data()+colorBase,colors.data(),colors.size());
    }
    XboxBgRuntimeStats stats() const {
        XboxBgRuntimeStats s; CHECK(xboxBgGetStats(s)); return s;
    }
    void prepare(const char *directory="good",uint32_t budget=65536) {
        xboxBgConfigure((root+"/"+directory).c_str(),budget);
        std::memcpy(ram.data()+base,raw.data(),raw.size());
        xboxBgPrepareSource(ram.data(),7,base,uint32_t(raw.size()));
    }
    void fixups() {
        // Only the original loader's texture handles and relocation fields.
        uint8_t *p=ram.data()+base;
        put(p+0x20,3); put(p+0x30,5);
        for (uint32_t at : {0x80u+44u,0x80u+88u}) put(p+at,base+word(raw.data()+at));
        for (uint32_t model : {0x200u,0x260u}) {
            put(p+model+0x24,1); put(p+model+0x0c,base+0x20);
        }
        for (uint32_t off : {8u,12u,16u,20u,24u,28u,32u,36u,40u,44u,48u,52u,56u,60u,64u,72u}) {
            const uint32_t old=word(raw.data()+0x1b0+off);
            if (old) put(p+0x1b0+off,base+old);
        }
    }
    void activate() { xboxBgActivateSource(ram.data(),7,base,uint32_t(raw.size())); }
    void ready() {
        const auto before=stats(); prepare();
        CHECK(stats().prepared==before.prepared+1 && !stats().active);
        CHECK(stats().level==7 && stats().packBytes==1080 && stats().bindingBytes>0);
        xboxBgResetSource(); fixups(); activate(); CHECK(stats().active);
    }
    void note(uint32_t row,const uint8_t *source,uint32_t n,uint32_t format,
              uint32_t cl=1,uint32_t wl=1,uint32_t mode=0,bool masked=false,bool worker=false) {
        xboxBgNoteUnpack(ram.data(),vu.data(),row,source,n,format,cl,wl,mode,masked,worker);
    }
    void unpack(uint32_t row,uint32_t address,uint32_t n,uint32_t format) {
        // Independent copies of V4-32, V3-32 and unsigned V4-8 UNPACK rows.
        const uint32_t stride=format==8 ? 12 : (format==14 ? 4 : 16);
        for (uint32_t i=0;i<n;++i) {
            uint8_t *out=vu.data()+(row+i)*16;
            const uint8_t *in=ram.data()+address+i*stride;
            if (format==14) { for (unsigned j=0;j<4;++j) put(out+j*4,in[j]); }
            else { std::memcpy(out,in,stride); if (format==8) put(out+12,1); }
        }
        note(row,ram.data()+address,n,format);
    }
    void fill(bool env=false) {
        xboxBgInvalidateVu(); vu.fill(0);
        kind=env ? 1 : 0; top=env ? 256 : 32; vi=top+24;
        unpack(top,base+(env ? 0x600 : 0x410),env ? 1 : 2,12);
        unpack(vi,base+(env ? 0x620+12 : 0x450+24),env ? 3 : 7,8);
        unpack(vi+128,base+(env ? 0x660+16 : 0x500+32),env ? 3 : 7,12);
        unpack(vi+64,colorBase+(env ? 7*4 : 0),env ? 3 : 7,14);
    }
    void begin() { xboxBgBeginNative(kind ? 0x0d20 : 0,vu.data(),16384,top,false); }
    void decode(bool wanted,unsigned strip=0) {
        CHECK(!kind || strip==0);
        const uint32_t n=strip ? 4 : 3, row=vi+(strip ? 3 : 0);
        std::array<GSXfVertex,4> out; std::memset(out.data(),0xa5,sizeof(out));
        const auto before=out;
        const bool got=xboxBgTryDecodeStrip(kind,vu.data(),row,n,out.data());
        CHECK(got==wanted);
        if (wanted) {
            CHECK(std::memcmp(out.data(),expected.data()+44*(kind ? 7 : strip ? 3 : 0),n*44)==0);
            CHECK(n==4 || std::memcmp(&out[3],&before[3],44)==0);
        } else CHECK(std::memcmp(out.data(),before.data(),sizeof(out))==0);
    }
};

void valid(Harness &h) {
    h.ready(); const auto before=h.stats(); h.fill(); h.begin();
    h.decode(true); h.decode(true,1);
    std::array<GSXfVertex,12> ring; std::memset(ring.data(),0xa5,sizeof(ring));
    const auto untouched=ring;
    GSXfCursor c; c.direct=true; c.next=ring.data()+1; c.end=ring.data()+11;
    CHECK(xboxBgTryWriteJoinedStrip(0,c,h.vu.data(),h.vi,3));
    CHECK(xboxBgTryWriteJoinedStrip(0,c,h.vu.data(),h.vi+3,4));
    const unsigned order[]={0,1,2,2,3,3,4,5,6};
    for (unsigned i=0;i<9;++i) CHECK(std::memcmp(&ring[i+1],h.expected.data()+order[i]*44,44)==0);
    CHECK(c.next==ring.data()+10 && c.strips==2 && c.vertices==7 && c.join);
    CHECK(std::memcmp(&c.last,h.expected.data()+6*44,44)==0);
    CHECK(std::memcmp(&ring[0],&untouched[0],44)==0);
    CHECK(std::memcmp(&ring[10],&untouched[10],2*44)==0);
    xboxBgEndNative();
    h.fill(true); h.begin(); h.decode(true);
    c={}; c.direct=true; c.next=ring.data()+1; c.end=ring.data()+11;
    CHECK(xboxBgTryWriteJoinedStrip(1,c,h.vu.data(),h.vi,3));
    CHECK(std::memcmp(&ring[1],h.expected.data()+7*44,3*44)==0);
    CHECK(c.next==ring.data()+4 && c.strips==1 && c.vertices==3 && c.join);
    CHECK(std::memcmp(&c.last,h.expected.data()+9*44,44)==0);
    xboxBgEndNative(); const auto after=h.stats();
    CHECK(after.matchedStrips-before.matchedStrips==6 && after.matchedVertices-before.matchedVertices==20);
    CHECK(after.boundStrips-before.boundStrips==3 && after.observedUnpacks-before.observedUnpacks==8);
    CHECK(after.geometryDiffs==before.geometryDiffs && after.fallbackStrips==before.fallbackStrips);
    CHECK(after.verifiedStrips-before.verifiedStrips==(TS_BG_VERIFY ? 3u : 0u));
    CHECK(after.verifiedVertices-before.verifiedVertices==(TS_BG_VERIFY ? 10u : 0u));
}
void lifetime(Harness &h) {
    h.ready(); h.fill(); h.begin(); h.decode(true);
    xboxBgEndNative(); h.decode(false); h.begin(); h.decode(false);
    h.fill(); h.begin(); h.decode(true);
    xboxBgResetSource(); CHECK(!h.stats().active); h.decode(false);
    h.activate(); CHECK(h.stats().active); h.begin(); h.decode(false);
    h.fill(); h.begin(); h.decode(true);
    xboxBgInvalidateSource(); CHECK(!h.stats().active && h.stats().packBytes==0); h.decode(false);
    h.activate(); CHECK(!h.stats().active); h.fill(); h.begin(); h.decode(false);
    // Identical storage and source bytes in a new generation cannot reuse rows.
    h.ready(); h.begin(); h.decode(false); h.fill(); h.begin(); h.decode(true);
    xboxBgConfigure((h.root+"/good").c_str(),65536); h.decode(false);
    h.ready(); h.begin(); h.decode(false); h.fill(); h.begin(); h.decode(true);
    xboxBgEndNative();
}
void provenance(Harness &h) {
    h.ready();
    for (unsigned mode=0;mode<10;++mode) {
        h.fill();
        const uint8_t *position=h.ram.data()+base+0x468;
        std::array<uint8_t,16> staging{};
        if (mode==0) { // DMA staging is outside guest RAM, even with equal bytes.
            std::memcpy(staging.data(),position,12); h.note(h.vi,staging.data(),1,8);
        } else if (mode==1) { // First row still matches; an interior source row does not.
            std::memcpy(h.ram.data()+colorBase+128,position+12,12);
            h.note(h.vi+1,h.ram.data()+colorBase+128,1,8);
        } else if (mode==2) h.note(h.vi,position,7,8,1,1,0,true);
        else if (mode==3) h.note(h.vi,position,7,8,1,1,1);
        else if (mode==4) h.note(h.vi,position,7,8,1,1,0,false,true);
        else if (mode==5) h.note(h.vi,position,7,8,1,2); // Fill mode.
        else if (mode==6) h.note(h.vi,position,7,14); // Wrong UNPACK format.
        else if (mode==7) h.vu[h.top*16+12]^=1; // Full source tag must match.
        else if (mode==8) xboxBgInvalidateVu();
        if (mode==9) xboxBgBeginNative(0,h.vu.data(),16384,h.top,true);
        else h.begin();
        h.decode(false); xboxBgEndNative();
    }
    // An observed, complete batch restores eligibility after each decline.
    h.fill(); h.begin(); h.decode(true); h.decode(true,1); xboxBgEndNative();
    CHECK(h.stats().fallbackStrips>=10);
}
void identity(Harness &h) {
    for (const char *directory : {"bad-identity","bad-vertex"}) {
        const auto before=h.stats(); h.prepare(directory); const auto after=h.stats();
        CHECK(after.prepared==before.prepared && after.sourceRejects==before.sourceRejects+1);
        CHECK(!after.active && after.packBytes==0);
    }
    h.prepare(); const auto before=h.stats();
    h.ram[base+0x450]^=1; // Whole pristine file hash, including unconsumed rows.
    xboxBgPrepareSource(h.ram.data(),7,base,uint32_t(h.raw.size()));
    CHECK(h.stats().prepared==before.prepared && h.stats().sourceRejects==before.sourceRejects+1);
    CHECK(!h.stats().active && h.stats().packBytes==0);
    for (unsigned which=0;which<4;++which) {
        h.prepare();
        xboxBgActivateSource(h.ram.data()+(which==0 ? 16 : 0),which==1 ? 8 : 7,
                             base+(which==2 ? 16 : 0),uint32_t(h.raw.size())-(which==3 ? 1 : 0));
        CHECK(!h.stats().active && h.stats().packBytes==0);
    }
    h.ready(); h.fill(); h.begin(); h.decode(true); xboxBgEndNative();
}
void budget(Harness &h) {
    h.prepare(); const auto good=h.stats();
    CHECK(good.packBytes==1080 && good.bindingBytes>0);
    for (uint32_t budget : {good.packBytes,good.packBytes+good.bindingBytes-1}) {
        h.prepare("good",budget); CHECK(h.stats().packBytes==0 && !h.stats().active);
        h.activate(); CHECK(!h.stats().active);
    }
    h.prepare("good",good.packBytes+good.bindingBytes);
    CHECK(h.stats().packBytes==good.packBytes && h.stats().bindingBytes==good.bindingBytes);
    h.activate(); CHECK(h.stats().active); h.fill(); h.begin(); h.decode(true); xboxBgEndNative();
}
void writes(Harness &h) {
    h.ready(); h.fill(); h.begin();
    xboxBgSourceWrite(base-1); xboxBgSourceWrite(base+uint32_t(h.raw.size()));
    xboxBgSourceWrite(colorBase); h.decode(true); CHECK(h.stats().active);
    xboxBgSourceWrite(base+0x468); CHECK(!h.stats().active); h.decode(false);
    h.prepare(); xboxBgSourceWrite((base+0x468)|0xA0000000u);
    h.activate(); CHECK(!h.stats().active); // Includes a guest alias before activation.
    h.ready(); h.fill(); h.begin(); h.decode(true); xboxBgEndNative();
}
void verify(Harness &h) {
    h.ready();
    for (bool env : {false,true}) {
        h.fill(env); const auto before=h.stats();
        h.vu[(h.vi+(env ? 128 : 0))*16]^=1; // Current VU geometry, intact provenance.
        h.begin(); h.decode(TS_BG_VERIFY==0); const auto after=h.stats();
        CHECK(after.geometryDiffs-before.geometryDiffs==(TS_BG_VERIFY ? 1u : 0u));
        xboxBgEndNative();
    }
    h.fill(); h.begin(); h.decode(true); xboxBgEndNative();
}
struct Reentrant { Harness *h; unsigned operation; bool called=false; };
void revokeDuringBorrow(const uint8_t *packed,void *opaque) {
    auto &job=*static_cast<Reentrant *>(opaque); Harness &h=*job.h;
    std::array<uint8_t,44> before{}; std::memcpy(before.data(),packed,before.size());
    if (job.operation==0) xboxBgInvalidateSource();
    else if (job.operation==1) xboxBgPrepareSource(h.ram.data(),7,base,uint32_t(h.raw.size()));
    else if (job.operation==2) xboxBgResetSource();
    else if (job.operation==3) h.activate();
    else if (job.operation==4) xboxBgSourceWrite(base+0x468);
    else xboxBgConfigure((h.root+"/good").c_str(),65536);
    // Revocation must not free storage while the current visitor borrows it.
    CHECK(std::memcmp(before.data(),packed,before.size())==0); job.called=true;
}
void reentrant(Harness &h) {
    for (unsigned operation=0;operation<6;++operation) {
        h.ready(); h.fill(); h.begin(); Reentrant job{&h,operation};
        CHECK(xboxBgWithStrip(0,h.vu.data(),h.vi,3,&revokeDuringBorrow,&job) && job.called);
        // Activate is deliberately the first new owner after the busy call.
        // Matching an old tuple must not revive an identity it did not prepare.
        h.activate(); CHECK(!h.stats().active && h.stats().packBytes==0);
        h.begin(); h.decode(false);
        if (operation==5) {
            const auto before=h.stats();
            std::memcpy(h.ram.data()+base,h.raw.data(),h.raw.size());
            xboxBgPrepareSource(h.ram.data(),7,base,uint32_t(h.raw.size()));
            CHECK(h.stats().prepared==before.prepared && h.stats().packBytes==0);
        }
        h.prepare(); h.activate(); CHECK(h.stats().active);
        h.fill(); h.begin(); h.decode(true); xboxBgEndNative();
    }
}
int main(int argc,char **argv) {
    CHECK(argc==3); Harness h(argv[1]); const std::string mode=argv[2];
    if (mode=="valid") valid(h); else if (mode=="lifetime") lifetime(h);
    else if (mode=="provenance") provenance(h); else if (mode=="identity") identity(h);
    else if (mode=="budget") budget(h); else if (mode=="writes") writes(h);
    else if (mode=="verify") verify(h); else if (mode=="reentrant") reentrant(h); else CHECK(false);
    xboxBgInvalidateSource();
}
"""


class BindingTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temp = tempfile.TemporaryDirectory(prefix="xbg-binding-")
        cls.addClassCleanup(cls.temp.cleanup)
        cls.directory = Path(cls.temp.name)
        raw = fixtures.source_raw()
        pak_sha = hashlib.sha256(fixtures.pak([("bg/level7/level7.raw", raw)])).digest()
        good = fixtures.expected_pack(raw, pak_sha)
        (cls.directory / "raw.bin").write_bytes(raw)
        colors = bytes((17 * i + 29 * lane + 0x81) & 255 for i in range(10) for lane in range(4))
        expected = bytearray(fixtures.expected_vertices())
        for i in range(10):
            r, g, b, a = colors[4 * i:4 * i + 4]
            struct.pack_into("<I", expected, i * 44 + 24, (a << 24) | (r << 16) | (g << 8) | b)
        (cls.directory / "colors.bin").write_bytes(colors)
        (cls.directory / "expected.bin").write_bytes(expected)
        packs = {
            "good": good,
            "bad-identity": fixtures.reseal(fixtures.changed(good, 320 + 20, fixtures.PLAIN_DESC + 24)),
            "bad-vertex": fixtures.reseal(fixtures.changed(good, 640, 0x3F800001)),
        }
        for name, pack in packs.items():
            directory = cls.directory / name
            directory.mkdir()
            (directory / "level7.xbg").write_bytes(pack)
        source = cls.directory / "binding.cpp"
        source.write_text(PROBE)
        cls.probes = []
        for verify in (0, 1):
            executable = cls.directory / f"binding-{verify}"
            command = shlex.split(os.environ.get("CXX", "c++"))
            command += ["-std=c++17", "-O1", "-Wall", "-Wextra", "-Werror",
                        "-DTS_BG_NATIVE=1", "-DTS_BG_HOST=1", f"-DTS_BG_VERIFY={verify}"]
            command += shlex.split(os.environ.get("TS_XBG_BINDING_CXXFLAGS", ""))
            command += ["-I", str(XBOX), "-I", str(ROOT / "source/PS2Recomp/ps2xRuntime/include"),
                        str(source), str(XBOX / "xbox_bg_loader.cpp"), str(XBOX / "xbox_bg_runtime.cpp"),
                        str(XBOX / "xbox_bg_xf.cpp"), "-o", str(executable)]
            built = subprocess.run(command, capture_output=True, text=True)
            if built.returncode:
                raise RuntimeError(built.stdout + built.stderr)
            cls.probes.append(executable)

    def run_case(self, case):
        for verify, executable in enumerate(self.probes):
            with self.subTest(verify=verify):
                result = subprocess.run([str(executable), str(self.directory), case],
                                        capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_complete_vertices_live_colors_and_joins(self):
        self.run_case("valid")

    def test_end_reset_unload_and_reused_allocation(self):
        self.run_case("lifetime")

    def test_unknown_split_and_unsupported_provenance(self):
        self.run_case("provenance")

    def test_source_hash_identity_and_activation_mismatches(self):
        self.run_case("identity")

    def test_residency_budget_includes_binding_index(self):
        self.run_case("budget")

    def test_bound_source_writes_and_unrelated_live_colors(self):
        self.run_case("writes")

    def test_geometry_audit_switch(self):
        self.run_case("verify")

    def test_reentrant_lifecycle_revokes_prepared_identity(self):
        self.run_case("reentrant")


if __name__ == "__main__":
    unittest.main()

// Host test of B-GS (src/xbox/PUSH-BC-PLAN.md section 5.4): random PATH1
// packets (state blocks of texture and environment registers, repeated
// texture blocks, vertex tags with PRE of every primitive type with colour,
// ST/UV, fog, XYZ2/XYZF2 kicks, XYZ3/XYZF3 and ADC non-kicks, strips over 64
// vertices, tags without PRE, REGLIST tags, packets cut inside a tag) go
//   a: through the per-register stream (processGIFPacket, PATH1),
//   b: through the GIF bulk path (processPath1Bulk), into a backend that
//      takes SubmitPrimitives (expanded into per-primitive records),
//   c: through the bulk path into a backend that declines them,
// and the backends' call records (every draw's state and vertices, CLUT
// loads and texture flushes aside: a repeated block skips its no-op load,
// and the commit self-check flushes again), the front ends' saved
// states and the draw bookkeeping must agree. The front end's own checks run
// too (TS_GS_STATE_SELFCHECK: every cached drawState() against a fresh build,
// every state-block commit against the block processed again; and
// TS_GS_BULK_SELFCHECK on every bulk packet), and a GS on the CPU renderer
// takes the bulk path with material repeats, so the commit check compares
// the renderer's CLUT too. Serials: two drawState()s at one serial must be
// the same state.
//
//   make host-tests (src/xbox/mk/b_gs.mk), or by hand from the repository root:
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -DTS_GS_STATE_SELFCHECK=1 -DTS_GS_STATE_SELFCHECK_EVERY=1 \
//       -DTS_GS_BULK_SELFCHECK=1 -DTS_GS_BULK_SELFCHECK_EVERY=1 -I source/PS2Recomp/ps2xRuntime/include \
//       -I source/PS2Recomp/ps2xRuntime/src/lib source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_frontend.cpp \
//       source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_cpu_backend.cpp source/PS2Recomp/ps2xRuntime/src/lib/gs/ps2_gs_memory.cpp \
//       source/PS2Recomp/ps2xRuntime/src/lib/ps2_host_settings.cpp src/xbox/test/gs_bulk_test.cpp -o gs_bulk_test
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/gs_cpu_backend.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <memory>
#include <random>
#include <vector>

namespace
{
    int failures = 0;
    void fail(const char *what, unsigned packet)
    {
        if (++failures <= 20)
            std::printf("FAIL %s: packet %u\n", what, packet);
    }

    struct Hash
    {
        uint32_t h = 2166136261u;
        void word(uint32_t v) { h = (h ^ v) * 16777619u; }
        void wide(uint64_t v)
        {
            word(static_cast<uint32_t>(v));
            word(static_cast<uint32_t>(v >> 32));
        }
        void real(double d)
        {
            uint64_t bits;
            std::memcpy(&bits, &d, 8);
            wide(bits);
        }
    };

    void hashState(Hash &f, const GSDrawState &s)
    {
        const GSContext &c = s.context;
        f.word(c.frame.fbp); f.word(c.frame.fbw); f.word(c.frame.psm); f.word(c.frame.fbmsk);
        f.word(c.scissor.x0 | (c.scissor.x1 << 16)); f.word(c.scissor.y0 | (c.scissor.y1 << 16));
        f.word(c.tex0.tbp0); f.word(c.tex0.tbw); f.word(c.tex0.psm); f.word(c.tex0.tw); f.word(c.tex0.th);
        f.word(c.tex0.tcc); f.word(c.tex0.tfx); f.word(c.tex0.cbp); f.word(c.tex0.cpsm); f.word(c.tex0.csm);
        f.word(c.tex0.csa); f.word(c.tex0.cld); f.word(c.xyoffset.ofx | (c.xyoffset.ofy << 16));
        f.word(c.zbuf.zbp); f.word(c.zbuf.psm); f.word(c.zbuf.zmask);
        f.wide(c.tex1); f.wide(c.miptbp1); f.wide(c.miptbp2); f.wide(c.clamp); f.wide(c.alpha); f.wide(c.test); f.wide(c.fba);
        const GSPrimReg &p = s.prim;
        f.word(static_cast<uint32_t>(p.type) | (p.iip << 4) | (p.tme << 5) | (p.fge << 6) | (p.abe << 7) | (p.aa1 << 8) |
               (p.fst << 9) | (p.ctxt << 10) | (p.fix << 11));
        f.word(s.texa.ta0 | (s.texa.aem << 8) | (s.texa.ta1 << 16));
        f.word(s.texclut.cbw | (s.texclut.cou << 8) | (s.texclut.cov << 16));
        f.word(s.pabe); f.wide(s.scanmsk); f.wide(s.dimx); f.wide(s.dthe); f.wide(s.colclamp);
        f.word(s.fogR | (s.fogG << 8) | (s.fogB << 16)); f.word(s.textureWidth | (s.textureHeight << 16));
        f.word(s.linearFilter);
    }
    void hashVertex(Hash &f, const GSVertex &v)
    {
        f.real(v.x); f.real(v.y); f.real(v.z);
        f.word(v.r | (v.g << 8) | (v.b << 16) | (static_cast<uint32_t>(v.a) << 24));
        f.real(v.q); f.real(v.s); f.real(v.t);
        f.word(v.u | (static_cast<uint32_t>(v.v) << 16)); f.word(v.fog);
    }

    // Records every call (CLUT loads aside), SubmitPrimitives as the
    // per-primitive Submits it stands for.
    class Recorder final : public GSRasterBackend
    {
    public:
        explicit Recorder(bool takes) : m_takes(takes) {}
        Hash hash;
        uint32_t calls = 0, taken = 0;
        uint32_t DrawPaths() const override { return m_takes ? kGSDrawPathSubmitPrimitives : 0u; }
        void Initialize(uint8_t *, uint32_t) override {}
        void Reset() override {}
        void Submit(const GSPrimitiveBatch &b) override
        {
            note(1);
            hashState(hash, b.state);
            hash.word(b.vertexCount);
            for (uint32_t i = 0; i < b.vertexCount; ++i)
                hashVertex(hash, b.vertices[i]);
        }
        bool SubmitPrimitives(const GSDrawState &s, uint32_t prim, const GSVertex *v, uint32_t n) override
        {
            if (!m_takes)
                return false;
            ++taken;
            const uint32_t type = prim & 7u;
            const uint32_t needed = type == 0 ? 1u : (type == 1 || type == 2 || type == 6) ? 2u : 3u;
            auto one = [&](const GSVertex *const *w) {
                note(1);
                hashState(hash, s);
                hash.word(needed);
                for (uint32_t k = 0; k < needed; ++k)
                    hashVertex(hash, *w[k]);
            };
            if (type == GS_PRIM_TRIFAN)
                for (uint32_t i = 2; i < n; ++i) { const GSVertex *w[3] = {&v[0], &v[i - 1], &v[i]}; one(w); }
            else if (type == GS_PRIM_TRISTRIP)
                for (uint32_t i = 2; i < n; ++i) { const GSVertex *w[3] = {&v[i - 2], &v[i - 1], &v[i]}; one(w); }
            else if (type == GS_PRIM_LINESTRIP)
                for (uint32_t i = 1; i < n; ++i) { const GSVertex *w[3] = {&v[i - 1], &v[i], &v[i]}; one(w); }
            else
                for (uint32_t i = 0; i + needed <= n; i += needed)
                {
                    const GSVertex *w[3] = {&v[i], &v[i + (needed > 1 ? 1 : 0)], &v[i + (needed > 2 ? 2 : 0)]};
                    one(w);
                }
            return true;
        }
        void LoadClut(const GSTex0Reg &, const GSTexClutReg &) override {}
        void BeginTransfer(const GSTransferCommand &c) override { note(3); hash.word(c.bitbltbuf.dbp); hash.word(c.direction); }
        void UploadImage(const uint8_t *d, uint32_t n) override { note(4); for (uint32_t i = 0; i < n; ++i) hash.word(d[i]); }
        void Flush() override { note(5); }
        void TextureFlush() override {} // (the commit self-check flushes again)
        void Sync(GSSyncReason r) override { note(7); hash.word(static_cast<uint32_t>(r)); }
        PresentationFrame Present(const GSPresentationRequest &) override { return {}; }
        bool ClearFramebuffer(const GSContext &, uint32_t) override { return false; }
        uint32_t ConsumeLocalToHostBytes(uint8_t *, uint32_t) override { return 0u; }
        uint32_t ReadVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) const override { return 0u; }
        void WriteVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) override {}
        void SnapshotVram(std::vector<uint8_t> &out) const override { out.clear(); }
        GSTransferSnapshot GetTransferSnapshot() const override { return {}; }

    private:
        void note(uint32_t kind) { ++calls; hash.word(kind); }
        bool m_takes;
    };

    uint32_t stateHash(const GS::CheckState &s)
    {
        Hash f;
        for (const auto &g : s.gifStreams)
        {
            f.word(g.unitBytes); f.word(g.remaining); f.word(g.regIndex); f.word(g.nreg); f.word(g.padding);
            f.word(g.endPadding); f.word(g.format); f.wide(g.registers); f.real(g.q);
        }
        for (const GSContext &c : s.ctx)
        {
            GSDrawState d{};
            d.context = c;
            hashState(f, d);
        }
        GSDrawState p{};
        p.prim = s.prim;
        hashState(f, p);
        p.prim = s.primRegister;
        hashState(f, p);
        p.prim = s.prmodeRegister;
        hashState(f, p);
        f.word(s.curR | (s.curG << 8) | (s.curB << 16) | (s.curA << 24)); f.real(s.curQ); f.real(s.curS); f.real(s.curT);
        f.word(s.curU | (s.curV << 16)); f.word(s.curFog | (s.fogR << 8) | (s.fogG << 16) | (s.fogB << 24));
        f.word(s.prmodecont | (s.pabe << 1)); f.wide(s.scanmsk); f.wide(s.dimx); f.wide(s.dthe); f.wide(s.colclamp);
        f.word(s.texa.ta0 | (s.texa.aem << 8) | (s.texa.ta1 << 16));
        f.word(s.texclut.cbw | (s.texclut.cou << 8) | (s.texclut.cov << 16));
        for (const GSVertex &v : s.vtxQueue)
            hashVertex(f, v);
        f.word(static_cast<uint32_t>(s.vtxCount)); f.word(static_cast<uint32_t>(s.vtxIndex));
        f.wide(s.drawCounter); f.wide(s.lastPerspectiveDraw);
        return f.h;
    }

    // ------------------------------------------------------------ packets
    struct Packet
    {
        std::vector<uint8_t> bytes;
        void qword(uint64_t lo, uint64_t hi)
        {
            const size_t n = bytes.size();
            bytes.resize(n + 16u);
            std::memcpy(bytes.data() + n, &lo, 8);
            std::memcpy(bytes.data() + n + 8, &hi, 8);
        }
        void tag(uint32_t nloop, bool eop, bool pre, uint32_t prim, uint32_t flg, uint32_t nreg, uint64_t regs)
        {
            const uint64_t lo = static_cast<uint64_t>(nloop & 0x7FFFu) | (static_cast<uint64_t>(eop) << 15) |
                                (static_cast<uint64_t>(pre) << 46) | (static_cast<uint64_t>(prim & 0x7FFu) << 47) |
                                (static_cast<uint64_t>(flg & 3u) << 58) | (static_cast<uint64_t>(nreg & 15u) << 60);
            qword(lo, regs);
        }
    };

    uint64_t r64(std::mt19937 &rng) { return (static_cast<uint64_t>(rng()) << 32) | rng(); }

    // A drawing-state register write (A+D) with a value from a small set, so
    // that blocks and values repeat.
    void stateWrite(Packet &p, std::mt19937 &rng)
    {
        static const uint8_t regs[] = {GS_REG_TEX0_1, GS_REG_TEX0_2, GS_REG_TEX1_1, GS_REG_TEX1_2, GS_REG_CLAMP_1,
                                       GS_REG_CLAMP_2, GS_REG_TEX2_1, GS_REG_MIPTBP1_1, GS_REG_TEXA, GS_REG_TEXCLUT,
                                       GS_REG_ALPHA_1, GS_REG_ALPHA_2, GS_REG_TEST_1, GS_REG_TEST_2, GS_REG_FRAME_1,
                                       GS_REG_FRAME_2, GS_REG_ZBUF_1, GS_REG_ZBUF_2, GS_REG_SCISSOR_1, GS_REG_XYOFFSET_1,
                                       GS_REG_FOGCOL, GS_REG_PABE, GS_REG_DTHE, GS_REG_COLCLAMP, GS_REG_TEXFLUSH,
                                       GS_REG_FBA_1};
        const uint8_t reg = regs[rng() % (sizeof(regs) / sizeof(regs[0]))];
        uint64_t value = r64(rng) & (rng() % 4u == 0u ? ~0ull : 0x0000000F000F00FFull);
        if (reg == GS_REG_TEX0_1 || reg == GS_REG_TEX0_2 || reg == GS_REG_TEX2_1)
        {
            static const uint32_t psms[] = {GS_PSM_CT32, GS_PSM_T8, GS_PSM_T4, GS_PSM_CT16};
            value = (value & ~(0x3Full << 20) & ~(7ull << 61)) | (static_cast<uint64_t>(psms[rng() % 4u]) << 20) |
                    (static_cast<uint64_t>(rng() % 6u) << 61);
        }
        if (reg == GS_REG_TEST_1 || reg == GS_REG_TEST_2)
            value = (value & ~(3ull << 17)) | (static_cast<uint64_t>(rng() % 4u) << 17);
        p.qword(value, reg);
    }

    void stateTag(Packet &p, std::mt19937 &rng)
    {
        const uint32_t writes = 1u + rng() % 8u;
        p.tag(writes, false, false, 0, 0, 1, 0xE);
        for (uint32_t i = 0; i < writes; ++i)
            stateWrite(p, rng);
    }

    // A few fixed texture blocks (TEXFLUSH, TEX1, TEX0 with CLD 0/4/5, CLAMP),
    // sent again and again (material repeats).
    void textureBlock(Packet &p, uint32_t which)
    {
        std::mt19937 rng(which * 7919u + 1u);
        p.tag(4, false, false, 0, 0, 1, 0xE);
        p.qword(0, GS_REG_TEXFLUSH);
        p.qword(r64(rng) & 0x3FFull, GS_REG_TEX1_1);
        const uint64_t cld = (which % 3u == 0u) ? 0u : (which % 3u == 1u) ? 4u : 5u;
        p.qword((r64(rng) & 0x1FFFFFFFFFFFFull & ~(0x3Full << 20)) | (static_cast<uint64_t>(GS_PSM_T8) << 20) | (cld << 61),
                GS_REG_TEX0_1);
        p.qword(r64(rng) & 0xFFFFFFFFFull, GS_REG_CLAMP_1);
    }

    void vertexTag(Packet &p, std::mt19937 &rng, bool pre)
    {
        static const uint8_t attrs[] = {0x01, 0x02, 0x03, 0x0A, 0x0F};
        static const uint8_t kicks[] = {0x04, 0x05, 0x04, 0x05, 0x0C, 0x0D};
        const uint32_t nreg = 1u + rng() % 4u;
        uint64_t regs = 0;
        uint8_t desc[16];
        for (uint32_t r = 0; r + 1u < nreg; ++r)
            desc[r] = attrs[rng() % 5u];
        desc[nreg - 1u] = kicks[rng() % 6u];
        if (rng() % 8u == 0u)
            desc[rng() % nreg] = kicks[rng() % 6u];
        if (rng() % 16u == 0u)
            desc[rng() % nreg] = 0x0E; // an A+D write inside: the per-register route
        for (uint32_t r = 0; r < nreg; ++r)
            regs |= static_cast<uint64_t>(desc[r]) << (4u * r);
        const uint32_t nloop = rng() % 8u == 0u ? 64u + rng() % 80u : rng() % 24u;
        const uint32_t prim = (rng() % 8u) | ((rng() & 0xFFu) << 3);
        p.tag(nloop, false, pre, prim, 0, nreg, regs);
        for (uint32_t l = 0; l < nloop; ++l)
            for (uint32_t r = 0; r < nreg; ++r)
            {
                uint64_t lo = r64(rng) & 0x00000FFF00000FFFull, hi = r64(rng);
                switch (desc[r])
                {
                case 0x04: case 0x05:
                    hi &= ~(1ull << 47);
                    if (rng() % 12u == 0u)
                        hi |= 1ull << 47; // ADC: no kick
                    break;
                case 0x0E:
                    hi = GS_REG_RGBAQ;
                    break;
                default:
                    break;
                }
                lo |= 0x0000700000007000ull; // on screen, mostly
                p.qword(lo, hi);
            }
    }

    void reglistTag(Packet &p, std::mt19937 &rng)
    {
        const uint32_t nloop = 1u + rng() % 3u;
        p.tag(nloop, false, false, 0, 1, 2, 0x31u); // RGBAQ, UV
        for (uint32_t i = 0; i < (nloop * 2u + 1u) / 2u; ++i)
            p.qword(r64(rng), r64(rng));
    }

    Packet randomPacket(std::mt19937 &rng)
    {
        Packet p;
        const uint32_t tags = 1u + rng() % 5u;
        for (uint32_t t = 0; t < tags; ++t)
        {
            const uint32_t kind = rng() % 20u;
            if (kind < 5u)
                stateTag(p, rng);
            else if (kind < 9u)
                textureBlock(p, rng() % 6u);
            else if (kind < 17u)
                vertexTag(p, rng, true);
            else if (kind < 18u)
                vertexTag(p, rng, false);
            else if (kind < 19u)
                reglistTag(p, rng);
            else
            {
                // A PRMODE / PRMODECONT / PRIM write by A+D.
                p.tag(1, false, false, 0, 0, 1, 0xE);
                const uint32_t which = rng() % 3u;
                p.qword(rng() & 0x7FFu, which == 0 ? GS_REG_PRMODE : which == 1 ? GS_REG_PRMODECONT : GS_REG_PRIM);
            }
        }
        return p;
    }
}

int main(int argc, char **argv)
{
    const unsigned packets = argc > 1 ? static_cast<unsigned>(std::strtoul(argv[1], nullptr, 10)) : 20000u;
    std::mt19937 rng(0xB0C5u);
    GS a, b, c, d;
    std::vector<uint8_t> vram(4u * 1024u * 1024u, 0u), vramD(4u * 1024u * 1024u, 0u);
    a.init(vram.data(), static_cast<uint32_t>(vram.size()));
    b.init(vram.data(), static_cast<uint32_t>(vram.size()));
    c.init(vram.data(), static_cast<uint32_t>(vram.size()));
    d.init(vramD.data(), static_cast<uint32_t>(vramD.size())); // the CPU renderer
    auto recA = std::make_unique<Recorder>(false), recB = std::make_unique<Recorder>(true),
         recC = std::make_unique<Recorder>(false);
    Recorder *ra = recA.get(), *rb = recB.get(), *rc = recC.get();
    a.setRasterBackend(std::move(recA));
    b.setRasterBackend(std::move(recB));
    c.setRasterBackend(std::move(recC));
    std::map<uint32_t, uint32_t> serials; // b: serial -> its state's hash
    std::vector<uint8_t> carry;            // a packet cut inside a tag goes on in the next
    unsigned cut = 0;
    for (unsigned n = 0; n < packets && failures < 20; ++n)
    {
        Packet p = randomPacket(rng);
        std::vector<uint8_t> bytes = carry;
        bytes.insert(bytes.end(), p.bytes.begin(), p.bytes.end());
        carry.clear();
        if (rng() % 16u == 0u && bytes.size() > 32u)
        {
            const size_t at = 16u * (1u + rng() % (bytes.size() / 16u - 1u));
            carry.assign(bytes.begin() + static_cast<long>(at), bytes.end());
            bytes.resize(at);
            ++cut;
        }
        a.processGIFPacket(bytes.data(), static_cast<uint32_t>(bytes.size()), GifPathId::Path1);
        b.processPath1Bulk(bytes.data(), static_cast<uint32_t>(bytes.size()));
        c.processPath1Bulk(bytes.data(), static_cast<uint32_t>(bytes.size()));
        d.processPath1Bulk(bytes.data(), static_cast<uint32_t>(bytes.size()));
        if (ra->hash.h != rb->hash.h || ra->calls != rb->calls)
            fail("bulk (taken) backend calls", n);
        if (ra->hash.h != rc->hash.h || ra->calls != rc->calls)
            fail("bulk (declined) backend calls", n);
        GS::CheckState sa, sb, sc;
        a.saveCheckState(sa);
        b.saveCheckState(sb);
        c.saveCheckState(sc);
        if (stateHash(sa) != stateHash(sb) || stateHash(sa) != stateHash(sc))
            fail("end state", n);
        Hash h;
        hashState(h, b.drawState());
        auto [it, inserted] = serials.emplace(b.stateSerial(), h.h);
        if (!inserted && it->second != h.h)
            fail("two states at one serial", n);
        Hash ha;
        hashState(ha, a.drawState());
        if (ha.h != h.h)
            fail("drawState", n);
    }
    const GS::Stats &s = GS::stats();
    std::printf("[gs_bulk_test] %u packets (%u cut), %u backend calls, %u runs taken; bulk: %u packets %u tags "
                "(%u state, %u vertex, %u fallback), %u fallback packets; state checks %u (diff %u), commit checks %u "
                "(diff %u), bulk checks %u (diff %u), repeats %u, serials %zu\n",
                packets, cut, ra->calls, rb->taken, s.bulkPackets, s.bulkTags, s.bulkStateTags, s.bulkVertexTags,
                s.bulkFallbackTags, s.bulkFallbackPackets, s.stateChecks, s.stateDiffs, s.materialChecks,
                s.materialDiffs, s.bulkChecks, s.bulkDiffs, s.blockRepeats, serials.size());
    if (s.stateDiffs || s.materialDiffs || s.bulkDiffs)
        fail("front-end self-checks", packets);
    if (rb->taken == 0u || s.bulkVertexTags == 0u)
        fail("the bulk path took no vertex tag", packets);
    std::printf("[gs_bulk_test] %s (%d failures)\n", failures ? "FAIL" : "PASS", failures);
    return failures ? 1 : 0;
}

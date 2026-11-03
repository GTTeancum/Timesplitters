// Host test of the direct GIF decoder (src/xbox/xbox_gif_direct.h,
// TS_GIF_DIRECT): random PACKED/REGLIST/IMAGE packets with every kind of
// register (vertex data, state, FRAME/ZBUF changes, transfers, HWREG,
// SIGNAL/FINISH/LABEL, privileged, unknown), split at random bytes into
// pieces interleaved over the three paths, through the GS front end,
// printing every renderer call, the GS state after each piece and a probe
// draw of the inherited vertex attributes. Built twice by
// test_gif_direct.py, from the shared gs_frontend.cpp and from its
// patch_gif_direct.py copy (-DTS_GIF_DIRECT=1); the two outputs must be
// identical. The copy's runs go to the stub of xboxNv2aSubmitRun below,
// which takes on-screen (FRAME fbp 0) runs and declines the others, so both
// the run and the one-by-one route are compared.
// (linked with gs_cpu_backend.cpp, ps2_gs_memory.cpp, ps2_host_settings.cpp
// and, for the copy, xbox_gif_direct.cpp)
#include GIF_DIRECT_GS_SOURCE

#include <cinttypes>
#include <cstdio>
#include <random>
#include <vector>

namespace
{
    uint32_t bits(float f)
    {
        uint32_t b;
        std::memcpy(&b, &f, 4);
        return b;
    }
    uint64_t bits(double d)
    {
        uint64_t b;
        std::memcpy(&b, &d, 8);
        return b;
    }

    void printContext(const GSContext &c)
    {
        std::printf(" f%u/%u/%u/%x z%u/%u/%u t%u/%u/%u/%u/%u/%u/%u/%u/%u/%u/%u/%u s%u/%u/%u/%u o%u/%u"
                    " %" PRIx64 "/%" PRIx64 "/%" PRIx64 "/%" PRIx64 "/%" PRIx64 "/%" PRIx64 "/%" PRIx64,
                    c.frame.fbp, c.frame.fbw, c.frame.psm, c.frame.fbmsk, c.zbuf.zbp, c.zbuf.psm, c.zbuf.zmask,
                    c.tex0.tbp0, c.tex0.tbw, c.tex0.psm, c.tex0.tw, c.tex0.th, c.tex0.tcc, c.tex0.tfx, c.tex0.cbp,
                    c.tex0.cpsm, c.tex0.csm, c.tex0.csa, c.tex0.cld, c.scissor.x0, c.scissor.x1, c.scissor.y0,
                    c.scissor.y1, c.xyoffset.ofx, c.xyoffset.ofy, c.tex1, c.miptbp1, c.miptbp2, c.clamp, c.alpha,
                    c.test, c.fba);
    }

    void printPrim(const GSPrimReg &p)
    {
        std::printf(" p%u%d%d%d%d%d%d%d%d", unsigned(p.type), p.iip, p.tme, p.fge, p.abe, p.aa1, p.fst, p.ctxt, p.fix);
    }

    class Recorder final : public GSRasterBackend
    {
    public:
        void Initialize(uint8_t *, uint32_t) override {}
        void Reset() override { std::printf("reset\n"); }
        void Submit(const GSPrimitiveBatch &b) override
        {
            const GSDrawState &s = b.state;
            std::printf("draw n%u", unsigned(b.vertexCount));
            printPrim(s.prim);
            printContext(s.context);
            std::printf(" a%u/%d/%u c%u/%u/%u %d %" PRIx64 "/%" PRIx64 "/%" PRIx64 "/%" PRIx64 " fog%u/%u/%u %u/%u/%d\n",
                        s.texa.ta0, s.texa.aem, s.texa.ta1, s.texclut.cbw, s.texclut.cou, s.texclut.cov, s.pabe,
                        s.scanmsk, s.dimx, s.dthe, s.colclamp, s.fogR, s.fogG, s.fogB, s.textureWidth,
                        s.textureHeight, s.linearFilter);
            for (const GSVertex &v : b.vertices)
                std::printf("  v %x %x %" PRIx64 " %u %u %u %u %x %x %x %u %u %u\n", bits(v.x), bits(v.y), bits(v.z),
                            v.r, v.g, v.b, v.a, bits(v.q), bits(v.s), bits(v.t), v.u, v.v, v.fog);
        }
        void LoadClut(const GSTex0Reg &t, const GSTexClutReg &c) override
        {
            std::printf("clut %u/%u/%u/%u/%u/%u %u/%u/%u\n", t.psm, t.cbp, t.cpsm, t.csm, t.csa, t.cld, c.cbw, c.cou, c.cov);
        }
        void BeginTransfer(const GSTransferCommand &c) override
        {
            std::printf("transfer %u %u/%u/%u/%u/%u/%u %u/%u/%u/%u/%u %u/%u\n", c.direction, c.bitbltbuf.sbp,
                        c.bitbltbuf.sbw, c.bitbltbuf.spsm, c.bitbltbuf.dbp, c.bitbltbuf.dbw, c.bitbltbuf.dpsm,
                        c.trxpos.ssax, c.trxpos.ssay, c.trxpos.dsax, c.trxpos.dsay, c.trxpos.dir, c.trxreg.rrw,
                        c.trxreg.rrh);
        }
        void UploadImage(const uint8_t *data, uint32_t size) override
        {
            uint64_t hash = 14695981039346656037ull;
            for (uint32_t i = 0; i < size; ++i)
                hash = (hash ^ data[i]) * 1099511628211ull;
            std::printf("image %u %" PRIx64 "\n", size, hash);
        }
        void Flush() override { std::printf("flush\n"); }
        void TextureFlush() override { std::printf("texflush\n"); }
        void Sync(GSSyncReason r) override { std::printf("sync %u\n", unsigned(r)); }
        PresentationFrame Present(const GSPresentationRequest &) override { return {}; }
        bool ClearFramebuffer(const GSContext &, uint32_t) override { return false; }
        uint32_t ConsumeLocalToHostBytes(uint8_t *, uint32_t) override { return 0; }
        uint32_t ReadVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) const override { return 0; }
        void WriteVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) override {}
        void SnapshotVram(std::vector<uint8_t> &) const override {}
        GSTransferSnapshot GetTransferSnapshot() const override { return {}; }
    };

    std::mt19937 rng(20261101u);
    uint32_t pick(uint32_t n) { return uint32_t(rng() % n); }
    uint64_t rand64() { return (uint64_t(rng()) << 32) | rng(); }

    struct Packet
    {
        std::vector<uint8_t> bytes;
        void qword(uint64_t lo, uint64_t hi)
        {
            word(lo);
            word(hi);
        }
        void word(uint64_t w)
        {
            for (int i = 0; i < 8; ++i)
                bytes.push_back(uint8_t(w >> (i * 8)));
        }
    };

    uint64_t randomPrim()
    {
        static const uint32_t kTypes[] = {6, 6, 6, 4, 4, 5, 3, 0, 1, 2, 7};
        return kTypes[pick(11)] | (uint64_t(pick(256)) << 3);
    }

    uint64_t randomXy(uint32_t shiftY)
    {
        const uint64_t x = 0x0100u + pick(0x2C00u), y = 0x0100u + pick(0x1E00u);
        return x | (y << shiftY);
    }

    // A register value for an address (A+D or REGLIST register format).
    uint64_t addressValue(GS &gs, uint32_t reg)
    {
        const GSDebugSnapshot snap = gs.getDebugSnapshot();
        switch (reg)
        {
        case GS_REG_PRIM: return randomPrim();
        case GS_REG_XYZF2: case GS_REG_XYZF3: case GS_REG_XYZ2: case GS_REG_XYZ3:
            return randomXy(16) | (uint64_t(pick(0x1000000u)) << 32) | (uint64_t(pick(256)) << 56);
        case GS_REG_FRAME_1: case GS_REG_FRAME_2:
        {
            const GSFrameReg &f = snap.ctx[reg & 1u].frame;
            if (pick(2))
                return f.fbp | (uint64_t(f.fbw) << 16) | (uint64_t(f.psm) << 24) | (uint64_t(f.fbmsk) << 32);
            return pick(2) * 0x46u | (10u << 16) | (uint64_t(pick(2) * 2u) << 24);
        }
        case GS_REG_ZBUF_1: case GS_REG_ZBUF_2:
        {
            const GSZbufReg &z = snap.ctx[reg & 1u].zbuf;
            if (pick(2))
                return z.zbp | (uint64_t(z.psm & 0xFu) << 24) | (uint64_t(z.zmask) << 32);
            return 0x8Cu | (uint64_t(pick(2)) << 32);
        }
        case GS_REG_TEST_1: case GS_REG_TEST_2:
            return pick(2) ? 0x30000u : pick(2) ? 0x50000u : rand64() & 0x7FFFFu;
        case GS_REG_ALPHA_1: case GS_REG_ALPHA_2:
            return pick(2) ? 0x64u | (uint64_t(pick(2) ? 0x80u : 0x60u) << 32) : 0x44u;
        case GS_REG_TRXDIR:
            return pick(4); // host-to-local, local-to-host, local-to-local, none
        case GS_REG_TRXREG:
            return (1u + pick(16)) | (uint64_t(1u + pick(16)) << 32);
        case GS_REG_SIGNAL: case GS_REG_LABEL:
            return rand64();
        case GS_REG_PABE: case GS_REG_DIMX: case GS_REG_DTHE: case GS_REG_COLCLAMP: case GS_REG_PRMODECONT:
            return pick(2);
        case GS_REG_TEX0_1: case GS_REG_TEX0_2: case GS_REG_TEX2_1: case GS_REG_TEX2_2:
            return pick(2) ? 0x200000000ull | (uint64_t(19u) << 20) | (uint64_t(pick(4)) << 61) : rand64();
        default:
            return pick(3) ? pick(4) : rand64();
        }
    }

    // Addresses written by A+D/REGLIST, weighted towards the common ones.
    uint32_t randomAddress()
    {
        static const uint8_t kRegs[] = {
            GS_REG_PRIM, GS_REG_RGBAQ, GS_REG_ST, GS_REG_UV, GS_REG_XYZF2, GS_REG_XYZ2, GS_REG_XYZ2, GS_REG_XYZF3,
            GS_REG_XYZ3, GS_REG_FOG, GS_REG_TEX0_1, GS_REG_TEX0_2, GS_REG_CLAMP_1, GS_REG_TEX1_1, GS_REG_TEX2_1,
            GS_REG_XYOFFSET_1, GS_REG_PRMODECONT, GS_REG_PRMODE, GS_REG_TEXCLUT, GS_REG_SCANMSK, GS_REG_MIPTBP1_1,
            GS_REG_TEXA, GS_REG_FOGCOL, GS_REG_TEXFLUSH, GS_REG_SCISSOR_1, GS_REG_ALPHA_1, GS_REG_ALPHA_2,
            GS_REG_ALPHA_1, GS_REG_TEST_1, GS_REG_TEST_2, GS_REG_PABE, GS_REG_FBA_1, GS_REG_DIMX, GS_REG_DTHE,
            GS_REG_COLCLAMP, GS_REG_FRAME_1, GS_REG_FRAME_2, GS_REG_ZBUF_1, GS_REG_ZBUF_2, 0x0E, 0x0F, 0x0B,
            GS_REG_BITBLTBUF, GS_REG_TRXPOS, GS_REG_TRXREG, GS_REG_TRXDIR, GS_REG_HWREG, GS_REG_SIGNAL,
            GS_REG_FINISH, GS_REG_LABEL, 0x59, 0x5A, 0x5B, 0x5C, 0x5F, 0x30, 0x7F};
        const uint32_t n = sizeof(kRegs);
        const uint32_t i = pick(n + 30u);
        return i < n ? kRegs[i] : kRegs[pick(10)];
    }

    void packedTag(GS &gs, Packet &p)
    {
        static const uint8_t kDescs[] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x5, 0x5, 0xC, 0xD, 0xA, 0xE, 0xE, 0xE, 0xF, 0x0, 0x6, 0x8, 0xB};
        const uint32_t nreg = pick(12) ? 1u + pick(5) : 16u;
        const uint32_t nloop = pick(8) ? pick(7) : pick(40);
        uint64_t hi = 0;
        uint8_t descs[16];
        for (uint32_t r = 0; r < nreg; ++r)
        {
            descs[r] = kDescs[pick(sizeof(kDescs))];
            hi |= uint64_t(descs[r]) << (r * 4u);
        }
        const bool pre = pick(2);
        const uint64_t lo = nloop | (uint64_t(pre) << 46) | (randomPrim() << 47) | (uint64_t(nreg & 15u) << 60);
        p.qword(lo, hi);
        for (uint32_t i = 0; i < nloop * nreg; ++i)
        {
            const uint8_t d = descs[i % nreg];
            switch (d)
            {
            case 0x4: case 0xC:
                p.qword(randomXy(32), (uint64_t(pick(0x1000000u)) << 4) | (uint64_t(pick(256)) << 36) |
                                          (uint64_t(pick(5) == 0) << 47) | (rand64() & 0xFF00000000000000ull));
                break;
            case 0x5: case 0xD:
                p.qword(randomXy(32), rng() | (uint64_t(pick(5) == 0) << 47));
                break;
            case 0x2:
                p.qword(uint64_t(bits(float(pick(100)) / 64.0f)) | (uint64_t(bits(float(pick(100)) / 64.0f)) << 32),
                        pick(4) ? bits(float(1 + pick(8)) / 4.0f) : 0u);
                break;
            case 0xE:
            {
                const uint32_t reg = randomAddress();
                p.qword(addressValue(gs, reg), reg | (rand64() & 0xFFFFFFFFFFFF0000ull));
                break;
            }
            default:
                p.qword(rand64(), rand64());
                break;
            }
        }
    }

    void reglistTag(GS &gs, Packet &p)
    {
        static const uint8_t kDescs[] = {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x5, 0xC, 0xD, 0xA, 0xE, 0xF, 0x6, 0x7, 0x9, 0xB};
        const uint32_t nreg = 1u + pick(6);
        const uint32_t nloop = pick(6);
        uint64_t hi = 0;
        uint8_t descs[16];
        for (uint32_t r = 0; r < nreg; ++r)
        {
            descs[r] = kDescs[pick(sizeof(kDescs))];
            hi |= uint64_t(descs[r]) << (r * 4u);
        }
        p.qword(nloop | (uint64_t(pick(2)) << 46) | (randomPrim() << 47) | (1ull << 58) | (uint64_t(nreg) << 60), hi);
        const uint32_t words = nloop * nreg;
        for (uint32_t i = 0; i < words; ++i)
            p.word(addressValue(gs, descs[i % nreg]));
        if (words & 1u)
            p.word(rand64());
    }

    Packet randomPacket(GS &gs)
    {
        Packet p;
        const uint32_t tags = 1u + pick(4);
        for (uint32_t t = 0; t < tags; ++t)
        {
            const uint32_t kind = pick(50);
            if (kind < 40)
                packedTag(gs, p);
            else if (kind < 49)
                reglistTag(gs, p);
            else // IMAGE (or disabled): uploaded data
            {
                const uint32_t nloop = pick(6);
                p.qword(nloop | (uint64_t(2u + (pick(4) == 0)) << 58), 0);
                for (uint32_t q = 0; q < nloop; ++q)
                    p.qword(rand64(), rand64());
            }
        }
        return p;
    }

    // One PACKED XYZ2 on PATH2 (which carries nothing else): draws with
    // what the piece left (attributes, PRIM, vertex queue).
    void probe(GS &gs)
    {
        Packet p;
        p.qword(1u | (1ull << 60), 0x5u);
        p.qword(randomXy(32), rng());
        gs.processGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()), GifPathId::Path2);
    }

    GSRegisters privRegs{};

    void state(GS &gs)
    {
        const GSDebugSnapshot s = gs.getDebugSnapshot();
        std::printf("state");
        printPrim(s.prim);
        printContext(s.ctx[0]);
        printContext(s.ctx[1]);
        GSFrameReg source{};
        uint32_t dest = 0;
        const bool preferred = gs.getPreferredDisplaySource(source, dest);
        std::printf(" a%u/%d/%u c%u/%u/%u pref%d/%u/%u/%u/%u %" PRIu64 " t%u/%u/%u/%u/%u/%u %u/%u/%u/%u %u/%u",
                    s.texa.ta0, s.texa.aem, s.texa.ta1, s.texclut.cbw, s.texclut.cou, s.texclut.cov, preferred,
                    source.fbp, source.fbw, source.psm, dest, uint64_t(gs.nativePackedGIFPacketCount()),
                    s.bitbltbuf.sbp, s.bitbltbuf.sbw, s.bitbltbuf.spsm, s.bitbltbuf.dbp, s.bitbltbuf.dbw,
                    s.bitbltbuf.dpsm, s.trxpos.ssax, s.trxpos.ssay, s.trxpos.dsax, s.trxpos.dsay, s.trxreg.rrw,
                    s.trxreg.rrh);
        std::printf(" priv %" PRIx64 " %" PRIx64 " %" PRIx64 " %" PRIx64 " %" PRIx64 " %" PRIx64 " %" PRIx64 "\n",
                    privRegs.siglblid, uint64_t(privRegs.csr.load()), privRegs.dispfb1, privRegs.display1,
                    privRegs.dispfb2, privRegs.display2, privRegs.bgcolor);
    }
}

#if TS_GIF_DIRECT
bool xboxNv2aSubmitRun(GSRasterBackend *backend, const GSDrawState &state, const GSVertex *vertices, uint32_t per,
                       uint32_t prims)
{
    if (state.context.frame.fbp != 0u)
        return false;
    for (uint32_t p = 0; p < prims; ++p)
    {
        GSPrimitiveBatch batch{};
        batch.state = state;
        batch.vertexCount = uint8_t(per);
        for (uint32_t i = 0; i < per; ++i)
            batch.vertices[i] = vertices[p * per + i];
        backend->Submit(batch);
    }
    return true;
}
#endif

int main(int argc, char **argv)
{
    const uint32_t packets = argc > 1 ? uint32_t(std::atoi(argv[1])) : 20000u;
    static std::vector<uint8_t> vram(4u * 1024u * 1024u);
    GS gs;
    gs.init(vram.data(), uint32_t(vram.size()), &privRegs);
    gs.setRasterBackend(std::make_unique<Recorder>());
    // Context 2 draws off screen (FRAME fbp 0x46), context 1's depth buffer
    // is masked (the widescreen HUD narrowing's overlay draws).
    {
        Packet p;
        p.qword(2u | (1ull << 60), 0xEu);
        p.qword(0x46u | (10u << 16), GS_REG_FRAME_2);
        p.qword(0x8Cu | (1ull << 32), GS_REG_ZBUF_1);
        gs.processGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()), GifPathId::Path3);
    }
    // Each path's packet still to send, in random pieces; a step sends the
    // next piece of a path, or starts its next packet.
    std::vector<uint8_t> pending[3];
    size_t sent[3] = {};
    static const GifPathId kPaths[3] = {GifPathId::Path1, GifPathId::Path2, GifPathId::Path3};
    for (uint32_t i = 0; i < packets; ++i)
    {
        if (i % 64u == 0u) // widescreen HUD narrowing on and off: its draw counters carry over
            hostSettings().widescreen.store(pick(2));
        if (i % 97u == 0u)
            gs.setHostPresentationMode(GS::HostPresentationMode(pick(3)));
        const uint32_t path = pick(4) == 0 ? 0u : 2u; // PATH2 carries only the probes
        std::vector<uint8_t> &bytes = pending[path];
        if (sent[path] == bytes.size())
        {
            Packet p = randomPacket(gs);
            if (pick(10) == 0)
            {
                // The native PACKED entry, whole (it declines the rest; then
                // the packet goes the stream's way, as the DMA does).
                std::printf("packet %u native %u\n", i, uint32_t(p.bytes.size()));
                const bool done = gs.processNativePackedGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()));
                std::printf("native %d\n", done);
                if (!done)
                    gs.processGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()), kPaths[path]);
                state(gs);
                probe(gs);
                continue;
            }
            bytes = std::move(p.bytes);
            sent[path] = 0;
        }
        const size_t left = bytes.size() - sent[path];
        // Whole, or a piece ending anywhere: inside a qword, a tag, a
        // REGLIST padding or an IMAGE transfer.
        size_t piece = pick(3) ? left : 1u + pick(uint32_t(left));
        if (pick(3) == 0 && piece > 16u)
            piece &= ~size_t(15u); // DMA-sized
        std::printf("packet %u path %u %u+%u/%u\n", i, path + 1u, uint32_t(sent[path]), uint32_t(piece),
                    uint32_t(bytes.size()));
        gs.processGIFPacket(bytes.data() + sent[path], uint32_t(piece), kPaths[path]);
        sent[path] += piece;
        state(gs);
        probe(gs);
    }
#if TS_GIF_DIRECT
    const XboxGifDirectStats &s = g_xboxGifDirectStats;
    std::fprintf(stderr, "direct packets %u runs %u gpu %u prims %u writes %u skipped %u images %u carried %u declined",
                 s.packets, s.runs, s.gpuRuns, s.prims, s.writes, s.skipped, s.images, s.carried);
    for (uint32_t d : s.declined)
        std::fprintf(stderr, " %u", d);
    std::fprintf(stderr, "\n");
#endif
    return 0;
}

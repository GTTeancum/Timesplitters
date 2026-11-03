// Host test of the native 2D route (src/xbox/xbox_native_2d.*, TS_NATIVE_2D):
// random batches of the emitters' items (depth-mode and dither blocks,
// textured and filled rectangles, clips; the static blocks from the game's
// ELF, sometimes altered), between random GIF packets on the three paths.
// Each batch's VIF bytes (xboxNative2dMaterialize) go to the GS one of two
// ways, chosen by the first argument:
//  - original: a reference VIF1 decode of them (UNPACK into VU1 memory, the
//    MSCAL register steps, the kick program's XGKICK of the packet at TOP,
//    each kick through processGIFPacket on PATH1) - what the walker and the
//    decoder do with the original REFs;
//  - native: the decoder's fast route (xboxNative2dPlan: the register steps,
//    one token packet on PATH1 for the GS hook) when it takes the batch,
//    else the same reference decode (the nested decode).
// Every renderer call, the VIF1 registers and the GS state after each batch
// and a probe draw of the inherited vertex attributes are printed; the two
// outputs must be identical. Built by test_native_2d.py from the GS front
// end's patch_gif_direct.py + patch_native_2d.py copy.
// (linked with gs_cpu_backend.cpp, ps2_gs_memory.cpp, ps2_host_settings.cpp,
// xbox_gif_direct.cpp and xbox_native_2d.cpp, -DTS_NATIVE_2D_HOST_TEST=1)
#include NATIVE_2D_GS_SOURCE
#include "runtime/ps2_vu1_watch.h"
#include "xbox_native_2d.h"

#include <cinttypes>
#include <cstdio>
#include <cstdlib>
#include <random>
#include <vector>

Vu1WatchedRows g_vu1WatchedRows; // (ps2_memory.cpp's)
void xboxNative2dTestSetRam(uint8_t *rdram);
uint32_t xboxNative2dTestBatch(const uint32_t *items, uint32_t words);

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
            for (uint32_t i = 0; i < b.vertexCount; ++i)
            {
                const GSVertex &v = b.vertices[i];
                std::printf("  v %x %x %" PRIx64 " %u %u %u %u %x %x %x %u %u %u\n", bits(v.x), bits(v.y), bits(v.z),
                            v.r, v.g, v.b, v.a, bits(v.q), bits(v.s), bits(v.t), v.u, v.v, v.fog);
            }
        }
        void LoadClut(const GSTex0Reg &t, const GSTexClutReg &c) override
        {
            std::printf("clut %u/%u/%u/%u/%u/%u %u/%u/%u\n", t.psm, t.cbp, t.cpsm, t.csm, t.csa, t.cld, c.cbw, c.cou, c.cov);
        }
        void BeginTransfer(const GSTransferCommand &c) override { std::printf("transfer %u\n", c.direction); }
        void UploadImage(const uint8_t *, uint32_t size) override { std::printf("image %u\n", size); }
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

    // A random state or drawing packet between the batches (A+D state, a
    // PACKED triangle strip or sprite), on PATH1 or PATH3.
    Packet randomPacket()
    {
        Packet p;
        if (pick(2))
        {
            static const uint8_t kRegs[] = {GS_REG_ZBUF_1, GS_REG_TEST_1, GS_REG_ALPHA_1, GS_REG_SCISSOR_1,
                                            GS_REG_DIMX,   GS_REG_DTHE,   GS_REG_FRAME_1, GS_REG_PRIM,
                                            GS_REG_RGBAQ,  GS_REG_UV,     GS_REG_TEX0_1,  GS_REG_PABE};
            const uint32_t n = 1u + pick(4);
            p.qword(n | (1ull << 15) | (1ull << 60), 0xEu);
            for (uint32_t i = 0; i < n; ++i)
            {
                const uint8_t reg = kRegs[pick(sizeof(kRegs))];
                uint64_t v = rand64();
                if (reg == GS_REG_ZBUF_1)
                    v = 0x50u | (2ull << 24) | (uint64_t(pick(2)) << 32);
                else if (reg == GS_REG_FRAME_1)
                    v = (pick(4) == 0 ? 0x46u : 0u) | (10u << 16);
                else if (reg == GS_REG_TEST_1)
                    v = pick(2) ? 0x30000u : 0x50000u;
                else if (reg == GS_REG_PRIM)
                    v = pick(2) ? 0x156u : 0x4Eu;
                else if (reg == GS_REG_DIMX || reg == GS_REG_DTHE || reg == GS_REG_PABE)
                    v = pick(2);
                p.qword(v, reg);
            }
        }
        else
        {
            const bool strip = pick(2);
            const uint32_t verts = strip ? 3u + pick(4) : 2u;
            const uint64_t prim = strip ? 0x0Cu : 0x156u;
            p.qword(verts | (1ull << 15) | (1ull << 46) | (prim << 47) | (3ull << 60), 0x531u);
            for (uint32_t i = 0; i < verts; ++i)
            {
                p.qword(pick(256) | (uint64_t(pick(256)) << 32), pick(256) | (uint64_t(pick(256)) << 32));
                p.qword(pick(0x4000u) | (uint64_t(pick(0x4000u)) << 32), 0);
                p.qword((0x6C00u + pick(0x2800u)) | (uint64_t(0x7900u + pick(0xE00u)) << 32), rng() & 0x7FFFu);
            }
        }
        return p;
    }

    // ---- the reference VIF1 decode of a batch's bytes
    struct Vif
    {
        uint32_t base = 400u, ofst = 300u, tops = 400u, itops = 0u, top = 0u, itop = 0u;
        bool dbf = false;
        uint32_t cycle = 0x0101u, mode = 0u;
    };
    uint8_t g_vu[1024u * 16u];

    void reference(GS &gs, Vif &vif, const uint8_t *bytes, uint32_t size)
    {
        // Rows earlier batches left are not what the fast route leaves (it
        // writes none); an altered block's kick could read them. Both routes
        // start the reference decode from the same rows.
        std::memset(g_vu, 0, sizeof(g_vu));
        uint32_t at = 0;
        while (at + 4u <= size)
        {
            uint32_t cmd;
            std::memcpy(&cmd, bytes + at, 4);
            at += 4u;
            const uint32_t opcode = (cmd >> 24) & 0x7Fu, imm = cmd & 0xFFFFu, num = (cmd >> 16) & 0xFFu;
            if ((opcode & 0x60u) == 0x60u)
            {
                if ((opcode & 0xFu) != 0xCu || (opcode & 0x10u)) // only V4-32, unmasked, here
                    return;
                const uint32_t n = num ? num : 256u;
                uint32_t dest = imm & 0x3FFu;
                if (imm & 0x8000u)
                    dest = (dest + vif.tops) & 0x3FFu;
                for (uint32_t q = 0; q < n && at + 16u <= size; ++q, at += 16u)
                    std::memcpy(g_vu + ((dest + q) & 0x3FFu) * 16u, bytes + at, 16);
                continue;
            }
            if (opcode == 0x14u || opcode == 0x15u || opcode == 0x17u)
            {
                const uint32_t runTop = vif.tops;
                vif.top = runTop;
                vif.itop = vif.itops;
                vif.tops = vif.dbf ? vif.base : (vif.base + vif.ofst) & 0x3FFu;
                vif.dbf = !vif.dbf;
                if (opcode != 0x17u && imm * 8u == 0x3FE0u)
                {
                    // vu1_native_ts.cpp kickPacket: up to EOP.
                    uint32_t q = runTop, qwords = 0;
                    bool ok = true;
                    for (int tags = 0; tags < 256; ++tags)
                    {
                        if (q + qwords >= 1024u)
                        {
                            ok = false;
                            break;
                        }
                        uint32_t w[4];
                        std::memcpy(w, g_vu + (q + qwords) * 16u, 16);
                        const uint32_t nloop = w[0] & 0x7FFFu, flg = (w[1] >> 26) & 3u;
                        const uint32_t nreg = (w[1] >> 28) ? (w[1] >> 28) : 16u;
                        qwords += 1u;
                        if (flg == 0u)
                            qwords += nloop * nreg;
                        else if (flg == 1u)
                            qwords += (nloop * nreg + 1u) / 2u;
                        else
                            qwords += nloop;
                        if (w[0] & 0x8000u)
                            break;
                    }
                    if (ok && q + qwords <= 1024u)
                        gs.processGIFPacket(g_vu + q * 16u, qwords * 16u, GifPathId::Path1);
                }
                continue;
            }
            // NOP, FLUSH*, anything else: nothing here.
        }
    }

    // ---- random batches
    constexpr uint32_t kRef = 1, kRect = 2, kFill = 3, kFillF = 4, kClip = 5;

    void addRect(std::vector<uint32_t> &items)
    {
        const uint32_t x0 = pick(600), y0 = pick(220);
        items.insert(items.end(), {kRect, uint32_t(rng()), pick(0x800u) + 8u, pick(0x800u) + 8u,
                                   (x0 << 4) + 0x6C00u, (y0 << 4) + 0x7900u, pick(0x800u) + 8u, pick(0x800u) + 8u,
                                   ((x0 + pick(40)) << 4) + 0x6C00u, ((y0 + pick(20)) << 4) + 0x7900u});
    }

    std::vector<uint32_t> randomBatch()
    {
        std::vector<uint32_t> items;
        const uint32_t kind = pick(4);
        if (kind == 0) // a string: dither, then per glyph depth mode 0, the glyph, the previous mode back
        {
            items.insert(items.end(), {kRef, 0x380770u + 0x30u * pick(3), 3u});
            const uint32_t prev = pick(4);
            for (uint32_t g = 0, n = 1u + pick(30); g < n; ++g)
            {
                if (prev != 0u)
                    items.insert(items.end(), {kRef, 0x380670u, 4u});
                addRect(items);
                if (prev != 0u)
                    items.insert(items.end(), {kRef, 0x380670u + 64u * prev, 4u});
            }
            return items;
        }
        for (uint32_t i = 0, n = 1u + pick(12); i < n; ++i)
            switch (pick(7))
            {
            case 0: items.insert(items.end(), {kRef, 0x380670u + 64u * pick(4), 4u}); break;
            case 1: items.insert(items.end(), {kRef, 0x380770u + 0x30u * pick(3), 3u}); break;
            case 2: case 3: addRect(items); break;
            case 4:
                items.insert(items.end(), {kFill, uint32_t(rng()), uint32_t(rng()) & 0x7FFF7FFFu,
                                           uint32_t(rng()) & 0x7FFF7FFFu});
                break;
            case 5:
                items.insert(items.end(), {kFillF, uint32_t(rng()), 0x6C00u + pick(0x2800u), 0x7900u + pick(0xE00u),
                                           0x6C00u + pick(0x2800u), 0x7900u + pick(0xE00u)});
                break;
            default:
                items.insert(items.end(), {kClip, pick(640) | (pick(640) << 16), pick(224) | (pick(224) << 16)});
                break;
            }
        return items;
    }

    GSRegisters privRegs{};

    void state(GS &gs, const Vif &vif)
    {
        const GSDebugSnapshot s = gs.getDebugSnapshot();
        std::printf("state vif %u/%u/%u/%d", vif.top, vif.itop, vif.tops, vif.dbf);
        printPrim(s.prim);
        printContext(s.ctx[0]);
        printContext(s.ctx[1]);
        GSFrameReg source{};
        uint32_t dest = 0;
        const bool preferred = gs.getPreferredDisplaySource(source, dest);
        std::printf(" pref%d/%u/%u\n", preferred, source.fbp, dest);
    }

    // One PACKED XYZ2 on PATH2: draws with what the batch left (attributes,
    // Q, PRIM, the vertex queue).
    void probe(GS &gs)
    {
        Packet p;
        p.qword(1u | (1ull << 60), 0x5u);
        p.qword((0x6C00u + pick(0x2800u)) | (uint64_t(0x7900u + pick(0xE00u)) << 32), rng());
        gs.processGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()), GifPathId::Path2);
    }

    // The game's static display-list blocks from its ELF (PT_LOAD segments).
    bool loadElf(const char *path, std::vector<uint8_t> &ram)
    {
        FILE *f = std::fopen(path, "rb");
        if (!f)
            return false;
        std::vector<uint8_t> elf;
        uint8_t buf[65536];
        for (size_t n; (n = std::fread(buf, 1, sizeof(buf), f)) != 0;)
            elf.insert(elf.end(), buf, buf + n);
        std::fclose(f);
        uint32_t phoff;
        uint16_t phnum;
        std::memcpy(&phoff, elf.data() + 0x1C, 4);
        std::memcpy(&phnum, elf.data() + 0x2C, 2);
        for (uint32_t i = 0; i < phnum; ++i)
        {
            uint32_t ph[8];
            std::memcpy(ph, elf.data() + phoff + i * 32u, 32);
            if (ph[0] == 1u && ph[2] + ph[4] <= ram.size() && ph[1] + ph[4] <= elf.size())
                std::memcpy(ram.data() + ph[2], elf.data() + ph[1], ph[4]);
        }
        return true;
    }
}

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

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::fprintf(stderr, "usage: native_2d_test original|native BATCHES SLUS_200.90\n");
        return 2;
    }
    const bool native = std::strcmp(argv[1], "native") == 0;
    const uint32_t batches = uint32_t(std::atoi(argv[2]));
    static std::vector<uint8_t> ram(32u * 1024u * 1024u);
    if (!loadElf(argv[3], ram))
    {
        std::fprintf(stderr, "cannot read %s\n", argv[3]);
        return 2;
    }
    xboxNative2dTestSetRam(ram.data());
    static const std::vector<uint8_t> pristine(ram.begin() + 0x380600, ram.begin() + 0x380A00);
    static std::vector<uint8_t> vram(4u * 1024u * 1024u);
    GS gs;
    gs.init(vram.data(), uint32_t(vram.size()), &privRegs);
    gs.setRasterBackend(std::make_unique<Recorder>());
    {
        Packet p; // context 2 off screen; context 1's depth buffer as the game's
        p.qword(2u | (1ull << 15) | (1ull << 60), 0xEu);
        p.qword(0x46u | (10u << 16), GS_REG_FRAME_2);
        p.qword(0x50u | (2ull << 24) | (1ull << 32), GS_REG_ZBUF_1);
        gs.processGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()), GifPathId::Path3);
    }
    Vif vif;
    uint32_t fast = 0, declined = 0;
    for (uint32_t i = 0; i < batches; ++i)
    {
        // The static blocks as the ELF has them, or altered: a value (still
        // the fast route's shape) or a command (not).
        std::memcpy(ram.data() + 0x380600, pristine.data(), pristine.size());
        if (pick(8) == 0)
        {
            const uint32_t at = 0x380600u + 4u * pick(uint32_t(pristine.size() / 4u));
            uint32_t w;
            std::memcpy(&w, ram.data() + at, 4);
            w ^= pick(3) == 0 ? (1u << pick(32)) : (pick(2) ? 0x1u : 0x100u);
            std::memcpy(ram.data() + at, &w, 4);
        }
        // The VIF state now and then elsewhere: rows the fast route declines,
        // STCYCL other than 1:1.
        if (pick(16) == 0)
        {
            vif.base = pick(2) ? 400u : pick(1000u);
            vif.ofst = pick(2) ? 300u : pick(400u);
            vif.tops = vif.base;
            vif.dbf = false;
        }
        vif.cycle = pick(20) == 0 ? 0x0204u : 0x0101u;
        for (uint32_t k = 0, n = pick(3); k < n; ++k)
        {
            Packet p = randomPacket();
            std::printf("packet %u\n", i);
            gs.processGIFPacket(p.bytes.data(), uint32_t(p.bytes.size()), pick(2) ? GifPathId::Path1 : GifPathId::Path3);
        }
        if (pick(5) == 0)
            hostSettings().widescreen.store(pick(2));
        const std::vector<uint32_t> items = randomBatch();
        const uint32_t sequence = xboxNative2dTestBatch(items.data(), uint32_t(items.size()));
        const uint8_t *bytes = nullptr;
        uint32_t size = 0;
        if (!xboxNative2dMaterialize(sequence, bytes, size))
        {
            std::fprintf(stderr, "batch %u lost\n", i);
            return 1;
        }
        std::printf("batch %u %u bytes\n", i, size);
        bool done = false;
        if (native)
        {
            XboxNative2dVifState st{vif.base, vif.ofst, vif.tops, 0u, vif.top, vif.itop, vif.dbf, 0u};
            if (xboxNative2dPlan(bytes, size, vif.cycle, vif.mode, st))
            {
                vif.top = st.top;
                vif.itop = st.itop;
                vif.tops = st.tops;
                vif.dbf = st.dbf;
                if (st.mscals)
                    gs.processGIFPacket(xboxNative2dTokenPacket(), 16u, GifPathId::Path1);
                done = true;
                ++fast;
            }
            else
                ++declined;
        }
        if (!done)
            reference(gs, vif, bytes, size);
        state(gs, vif);
        probe(gs);
    }
    if (native)
    {
        XboxNative2dStats s;
        xboxNative2dGetStats(s);
        std::fprintf(stderr, "native 2d: fast %u declined %u kicks %llu deferred %u runs %u prims %u gs-fallback %llu\n",
                     fast, declined, (unsigned long long)s.kicks, g_xboxGifDirectStats.deferred,
                     g_xboxGifDirectStats.runs, g_xboxGifDirectStats.prims, (unsigned long long)s.gsFallback);
    }
    return 0;
}

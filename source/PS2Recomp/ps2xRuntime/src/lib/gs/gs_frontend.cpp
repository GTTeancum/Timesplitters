#include "runtime/gs/gs_frontend.h"
#include "runtime/ps2_host_settings.h"
#include "runtime/gs/gs_cpu_backend.h"
#include "ps2_log.h"
#if defined(PLATFORM_XBOX)
#include "runtime/ps2_measure.h" // TS_MEASURE_PUSHBC: beginXfRun's time, the kick histogram, textured primitives
#endif
#include "runtime/ps2_memory.h"
#include <chrono>
#include <atomic>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>

#if defined(PLATFORM_XBOX)
// ---- B-GS switches (src/xbox/PUSH-BC-PLAN.md sections 3.5 and 5.4). Each
// is #ifndef so that a .mk define (src/xbox/mk/b_gs.mk) or a compiler -D
// flips it; 0 is the old path.
// TS_GS_DRAWSTATE_CACHE 1: drawState() and every draw's state come from a
// copy rebuilt only when the state serial moved (a drawing-state register
// written with a new value, reset, setRasterBackend, restoreCheckState);
// 0: built afresh for every draw, as before.
#ifndef TS_GS_DRAWSTATE_CACHE
#define TS_GS_DRAWSTATE_CACHE 1
#endif
// TS_GS_BULK 1: processPath1Bulk reads whole tags in place (gs_frontend.h);
// 0: it is processGIFPacket on PATH1.
#ifndef TS_GS_BULK
#define TS_GS_BULK 1
#endif
// TS_GS_BULK_ALL_PATH1 1: every PATH1 packet that starts between tags
// takes the bulk path too, not only the native kick's (Tier 0's caller);
// 0: only processPath1Bulk's callers. Development and measurement.
#ifndef TS_GS_BULK_ALL_PATH1
#define TS_GS_BULK_ALL_PATH1 0
#endif
// TS_GS_STATE_SELFCHECK 1: every drawState() served from the cache is
// compared with a fresh build (stateDiffs, the fresh one is used), and one
// material commit in TS_GS_STATE_SELFCHECK_EVERY is processed again as a
// PATH1 packet (checkStateBlock: it must change nothing; materialDiffs).
#ifndef TS_GS_STATE_SELFCHECK
#define TS_GS_STATE_SELFCHECK 0
#endif
#ifndef TS_GS_STATE_SELFCHECK_EVERY
#define TS_GS_STATE_SELFCHECK_EVERY 16
#endif
// TS_GS_BULK_SELFCHECK 1: one bulk packet in TS_GS_BULK_SELFCHECK_EVERY
// (the first TS_GS_BULK_SELFCHECK_PACKETS) also runs through the
// per-register stream from the same saved state into a recording backend,
// and the bulk path into another (which takes SubmitPrimitives, expanding
// them), and the two recordings (every backend call, every draw's state
// and vertices) and end states are compared: bulkDiffs, the first few
// logged. Then the state is restored and the packet goes for real.
#ifndef TS_GS_BULK_SELFCHECK
#define TS_GS_BULK_SELFCHECK 0
#endif
#ifndef TS_GS_BULK_SELFCHECK_EVERY
#define TS_GS_BULK_SELFCHECK_EVERY 4
#endif
#ifndef TS_GS_BULK_SELFCHECK_PACKETS
#define TS_GS_BULK_SELFCHECK_PACKETS 2000000
#endif

#endif
namespace
{
    static constexpr uint32_t kHostFrameWidth = 640u;

#if defined(PLATFORM_XBOX)
    // The front end's statistics (GS::stats(); one GS per runtime).
    GS::Stats s_gsStats;

    // The registers whose value is part of the drawing state a draw takes
    // (buildDrawState): a write with a new value moves the state serial.
    constexpr bool drawStateRegister(uint8_t reg)
    {
        switch (reg)
        {
        case GS_REG_PRIM: case GS_REG_PRMODECONT: case GS_REG_PRMODE:
        case GS_REG_TEX0_1: case GS_REG_TEX0_2: case GS_REG_CLAMP_1: case GS_REG_CLAMP_2:
        case GS_REG_TEX1_1: case GS_REG_TEX1_2: case GS_REG_TEX2_1: case GS_REG_TEX2_2:
        case GS_REG_XYOFFSET_1: case GS_REG_XYOFFSET_2: case GS_REG_TEXCLUT: case GS_REG_SCANMSK:
        case GS_REG_MIPTBP1_1: case GS_REG_MIPTBP1_2: case GS_REG_MIPTBP2_1: case GS_REG_MIPTBP2_2:
        case GS_REG_TEXA: case GS_REG_FOGCOL:
        case GS_REG_SCISSOR_1: case GS_REG_SCISSOR_2: case GS_REG_ALPHA_1: case GS_REG_ALPHA_2:
        case GS_REG_DIMX: case GS_REG_DTHE: case GS_REG_COLCLAMP: case GS_REG_TEST_1: case GS_REG_TEST_2:
        case GS_REG_PABE: case GS_REG_FBA_1: case GS_REG_FBA_2: case GS_REG_FRAME_1: case GS_REG_FRAME_2:
        case GS_REG_ZBUF_1: case GS_REG_ZBUF_2:
            return true;
        default:
            return false;
        }
    }
    struct DrawStateRegisterTable
    {
        bool bits[256];
        constexpr DrawStateRegisterTable() : bits{}
        {
            for (unsigned r = 0; r < 256u; ++r)
                bits[r] = drawStateRegister(static_cast<uint8_t>(r));
        }
    };
    constexpr DrawStateRegisterTable kDrawStateRegisters{};

    // A draw state as canonical words (no padding, no serial), hashed: the
    // self-checks compare states by this.
    struct Fnv
    {
        uint32_t h = 2166136261u;
        void word(uint32_t v) { h = (h ^ v) * 16777619u; }
        void wide(uint64_t v)
        {
            word(static_cast<uint32_t>(v));
            word(static_cast<uint32_t>(v >> 32));
        }
        void real(float f)
        {
            uint32_t bits;
            std::memcpy(&bits, &f, 4);
            word(bits);
        }
        void real(double d)
        {
            uint64_t bits;
            std::memcpy(&bits, &d, 8);
            wide(bits);
        }
    };
    void hashContext(Fnv &f, const GSContext &c)
    {
        f.word(c.frame.fbp); f.word(c.frame.fbw); f.word(c.frame.psm); f.word(c.frame.fbmsk);
        f.word(c.scissor.x0); f.word(c.scissor.x1); f.word(c.scissor.y0); f.word(c.scissor.y1);
        const GSTex0Reg &t = c.tex0;
        f.word(t.tbp0); f.word(t.tbw); f.word(t.psm); f.word(t.tw); f.word(t.th); f.word(t.tcc); f.word(t.tfx);
        f.word(t.cbp); f.word(t.cpsm); f.word(t.csm); f.word(t.csa); f.word(t.cld);
        f.word(c.xyoffset.ofx); f.word(c.xyoffset.ofy);
        f.word(c.zbuf.zbp); f.word(c.zbuf.psm); f.word(c.zbuf.zmask);
        f.wide(c.tex1); f.wide(c.miptbp1); f.wide(c.miptbp2); f.wide(c.clamp); f.wide(c.alpha); f.wide(c.test); f.wide(c.fba);
    }
    void hashPrim(Fnv &f, const GSPrimReg &p)
    {
        f.word(static_cast<uint32_t>(p.type) | (p.iip << 4) | (p.tme << 5) | (p.fge << 6) | (p.abe << 7) | (p.aa1 << 8) |
               (p.fst << 9) | (p.ctxt << 10) | (p.fix << 11));
    }
    uint32_t hashDrawState(const GSDrawState &s)
    {
        Fnv f;
        hashContext(f, s.context);
        hashPrim(f, s.prim);
        f.word(s.texa.ta0 | (s.texa.aem << 8) | (static_cast<uint32_t>(s.texa.ta1) << 16));
        f.word(s.texclut.cbw | (s.texclut.cou << 8) | (static_cast<uint32_t>(s.texclut.cov) << 16));
        f.word(s.pabe);
        f.wide(s.scanmsk); f.wide(s.dimx); f.wide(s.dthe); f.wide(s.colclamp);
        f.word(s.fogR | (s.fogG << 8) | (s.fogB << 16));
        f.word(s.textureWidth | (static_cast<uint32_t>(s.textureHeight) << 16));
        f.word(s.linearFilter);
        return f.h;
    }
    void hashVertex(Fnv &f, const GSVertex &v)
    {
        f.real(v.x); f.real(v.y); f.real(v.z);
        f.word(v.r | (v.g << 8) | (v.b << 16) | (static_cast<uint32_t>(v.a) << 24));
        f.real(v.q); f.real(v.s); f.real(v.t);
        f.word(v.u | (static_cast<uint32_t>(v.v) << 16));
        f.word(v.fog);
    }

#endif
    GSPrimReg decodePrimRegister(uint64_t value)
    {
        GSPrimReg prim{};
        prim.type = static_cast<GSPrimType>(value & 0x7u);
        prim.iip = ((value >> 3) & 1u) != 0u;
        prim.tme = ((value >> 4) & 1u) != 0u;
        prim.fge = ((value >> 5) & 1u) != 0u;
        prim.abe = ((value >> 6) & 1u) != 0u;
        prim.aa1 = ((value >> 7) & 1u) != 0u;
        prim.fst = ((value >> 8) & 1u) != 0u;
        prim.ctxt = ((value >> 9) & 1u) != 0u;
        prim.fix = ((value >> 10) & 1u) != 0u;
        return prim;
    }

    static inline uint64_t loadLE64(const uint8_t *p)
    {
        uint64_t v;
        std::memcpy(&v, p, 8);
        return v;
    }

    struct PackedGifPacketTag
    {
        uint64_t lo = 0u;
        uint64_t hi = 0u;
        uint32_t payloadOffset = 0u;
        uint32_t nloop = 0u;
        uint32_t nreg = 0u;
        uint8_t regs[16]{};
    };

    template <typename Visitor>
    bool visitPackedGifPacket(const uint8_t *data, uint32_t sizeBytes, Visitor &&visitor)
    {
        uint32_t offset = 0u;
        while (offset + 16u <= sizeBytes)
        {
            PackedGifPacketTag tag{};
            tag.lo = loadLE64(data + offset);
            tag.hi = loadLE64(data + offset + 8u);

            const uint8_t flg = static_cast<uint8_t>((tag.lo >> 58u) & 0x3u);
            if (flg != GIF_FMT_PACKED)
                return false;

            tag.nloop = static_cast<uint32_t>(tag.lo & 0x7FFFu);
            tag.nreg = static_cast<uint32_t>((tag.lo >> 60u) & 0xFu);
            if (tag.nreg == 0u)
                tag.nreg = 16u;

            const uint64_t payloadBytes64 =
                static_cast<uint64_t>(tag.nloop) * static_cast<uint64_t>(tag.nreg) * 16ull;
            if (payloadBytes64 > 0xFFFFFFFFull)
                return false;

            offset += 16u;
            const uint32_t payloadBytes = static_cast<uint32_t>(payloadBytes64);
            if (payloadBytes > sizeBytes - offset)
                return false;

            tag.payloadOffset = offset;
            for (uint32_t i = 0u; i < tag.nreg; ++i)
                tag.regs[i] = static_cast<uint8_t>((tag.hi >> (i * 4u)) & 0xFu);

            if (!visitor(tag))
                return false;

            offset += payloadBytes;
        }

        return offset == sizeBytes;
    }

    bool validatePackedGifPacket(const uint8_t *data, uint32_t sizeBytes)
    {
        return visitPackedGifPacket(data, sizeBytes, [](const PackedGifPacketTag &)
                                    { return true; });
    }

#if defined(PLATFORM_XBOX)
    // The state-block register classes (runtime/gs/gs_material.h).
    using gs_material::isStateRegister;
    using gs_material::isClutRegister;
    using gs_material::isTextureRegister;
    using gs_material::alwaysLoadsClut;
#else
    // Registers a native state block may write (GS::decodeStateBlock):
    // drawing state whose write does nothing beyond storing the value, a CLUT
    // load (TEX0, TEX2) or a texture-cache flush.
    bool isStateRegister(uint8_t reg)
    {
        switch (reg)
        {
        case GS_REG_TEX0_1: case GS_REG_TEX0_2: case GS_REG_CLAMP_1: case GS_REG_CLAMP_2:
        case GS_REG_TEX1_1: case GS_REG_TEX1_2: case GS_REG_TEX2_1: case GS_REG_TEX2_2:
        case GS_REG_XYOFFSET_1: case GS_REG_XYOFFSET_2: case GS_REG_TEXCLUT: case GS_REG_SCANMSK:
        case GS_REG_MIPTBP1_1: case GS_REG_MIPTBP1_2: case GS_REG_MIPTBP2_1: case GS_REG_MIPTBP2_2:
        case GS_REG_TEXA: case GS_REG_FOGCOL: case GS_REG_TEXFLUSH:
        case GS_REG_SCISSOR_1: case GS_REG_SCISSOR_2: case GS_REG_ALPHA_1: case GS_REG_ALPHA_2:
        case GS_REG_DIMX: case GS_REG_DTHE: case GS_REG_COLCLAMP: case GS_REG_TEST_1: case GS_REG_TEST_2:
        case GS_REG_PABE: case GS_REG_FBA_1: case GS_REG_FBA_2: case GS_REG_FRAME_1: case GS_REG_FRAME_2:
        case GS_REG_ZBUF_1: case GS_REG_ZBUF_2:
            return true;
        default:
            return false;
        }
    }

    bool isClutRegister(uint8_t reg)
    {
        return reg == GS_REG_TEX0_1 || reg == GS_REG_TEX0_2 || reg == GS_REG_TEX2_1 || reg == GS_REG_TEX2_2;
    }

    // The registers GS::m_textureStateWrites counts.
    bool isTextureRegister(uint8_t reg)
    {
        return isClutRegister(reg) || reg == GS_REG_TEX1_1 || reg == GS_REG_TEX1_2 || reg == GS_REG_CLAMP_1 ||
               reg == GS_REG_CLAMP_2 || reg == GS_REG_MIPTBP1_1 || reg == GS_REG_MIPTBP1_2 ||
               reg == GS_REG_MIPTBP2_1 || reg == GS_REG_MIPTBP2_2;
    }

    // A TEX0/TEX2 value whose write loads the CLUT whatever was loaded before
    // (an indexed format with CLD 1-3); CLD 4 and 5 load only when CBP
    // differs from the address the last load recorded.
    bool alwaysLoadsClut(uint64_t value)
    {
        const uint32_t psm = static_cast<uint32_t>((value >> 20) & 0x3Fu), cld = static_cast<uint32_t>((value >> 61) & 7u);
        const bool indexed = psm == GS_PSM_T8 || psm == GS_PSM_T4 || psm == GS_PSM_T8H || psm == GS_PSM_T4HL ||
                             psm == GS_PSM_T4HH;
        return indexed && cld >= 1u && cld <= 3u;
    }
#endif

    bool sameTex0(const GSTex0Reg &a, const GSTex0Reg &b)
    {
        return a.tbp0 == b.tbp0 && a.tbw == b.tbw && a.psm == b.psm && a.tw == b.tw && a.th == b.th && a.tcc == b.tcc &&
               a.tfx == b.tfx && a.cbp == b.cbp && a.cpsm == b.cpsm && a.csm == b.csm && a.csa == b.csa && a.cld == b.cld;
    }

    bool sameContext(const GSContext &a, const GSContext &b)
    {
        return a.frame.fbp == b.frame.fbp && a.frame.fbw == b.frame.fbw && a.frame.psm == b.frame.psm &&
               a.frame.fbmsk == b.frame.fbmsk && a.scissor.x0 == b.scissor.x0 && a.scissor.x1 == b.scissor.x1 &&
               a.scissor.y0 == b.scissor.y0 && a.scissor.y1 == b.scissor.y1 && sameTex0(a.tex0, b.tex0) &&
               a.xyoffset.ofx == b.xyoffset.ofx && a.xyoffset.ofy == b.xyoffset.ofy && a.zbuf.zbp == b.zbuf.zbp &&
               a.zbuf.psm == b.zbuf.psm && a.zbuf.zmask == b.zbuf.zmask && a.tex1 == b.tex1 && a.miptbp1 == b.miptbp1 &&
               a.miptbp2 == b.miptbp2 && a.clamp == b.clamp && a.alpha == b.alpha && a.test == b.test && a.fba == b.fba;
    }

#if defined(PLATFORM_XBOX)
    bool samePrim(const GSPrimReg &a, const GSPrimReg &b)
    {
        return a.type == b.type && a.iip == b.iip && a.tme == b.tme && a.fge == b.fge && a.abe == b.abe &&
               a.aa1 == b.aa1 && a.fst == b.fst && a.ctxt == b.ctxt && a.fix == b.fix;
    }

    [[maybe_unused]] bool sameDrawState(const GSDrawState &a, const GSDrawState &b)
    {
        return sameContext(a.context, b.context) && samePrim(a.prim, b.prim) && a.texa.ta0 == b.texa.ta0 &&
               a.texa.aem == b.texa.aem && a.texa.ta1 == b.texa.ta1 && a.texclut.cbw == b.texclut.cbw &&
               a.texclut.cou == b.texclut.cou && a.texclut.cov == b.texclut.cov && a.pabe == b.pabe &&
               a.scanmsk == b.scanmsk && a.dimx == b.dimx && a.dthe == b.dthe && a.colclamp == b.colclamp &&
               a.fogR == b.fogR && a.fogG == b.fogG && a.fogB == b.fogB && a.textureWidth == b.textureWidth &&
               a.textureHeight == b.textureHeight && a.linearFilter == b.linearFilter;
    }

    // Floats by their bits (a NaN from a packet's ST or Q is a value too).
    [[maybe_unused]] bool sameBits(float a, float b)
    {
        return std::memcmp(&a, &b, sizeof(float)) == 0;
    }

    // Two saved front-end states alike (TS_GS_BULK_SELFCHECK): everything a
    // packet moves but a stream's last copied unit (scratch once used) and
    // the state-block repeat bookkeeping (a repeat writes nothing).
    [[maybe_unused]] bool sameCheckState(const GS::CheckState &a, const GS::CheckState &b)
    {
        for (size_t i = 0; i < a.gifStreams.size(); ++i)
        {
            const auto &x = a.gifStreams[i];
            const auto &y = b.gifStreams[i];
            if (x.unitBytes != y.unitBytes || x.remaining != y.remaining || x.regIndex != y.regIndex ||
                x.nreg != y.nreg || x.padding != y.padding || x.endPadding != y.endPadding || x.format != y.format ||
                x.registers != y.registers || !sameBits(x.q, y.q) || x.image != y.image)
                return false;
        }
        if (!sameContext(a.ctx[0], b.ctx[0]) || !sameContext(a.ctx[1], b.ctx[1]) || !samePrim(a.prim, b.prim) ||
            !samePrim(a.primRegister, b.primRegister) || !samePrim(a.prmodeRegister, b.prmodeRegister))
            return false;
        if (a.curR != b.curR || a.curG != b.curG || a.curB != b.curB || a.curA != b.curA || !sameBits(a.curQ, b.curQ) ||
            !sameBits(a.curS, b.curS) || !sameBits(a.curT, b.curT) || a.curU != b.curU || a.curV != b.curV || a.curFog != b.curFog ||
            a.fogR != b.fogR || a.fogG != b.fogG || a.fogB != b.fogB || a.prmodecont != b.prmodecont ||
            a.pabe != b.pabe || a.scanmsk != b.scanmsk || a.dimx != b.dimx || a.dthe != b.dthe ||
            a.colclamp != b.colclamp || a.texa.ta0 != b.texa.ta0 || a.texa.aem != b.texa.aem ||
            a.texa.ta1 != b.texa.ta1 || a.texclut.cbw != b.texclut.cbw || a.texclut.cou != b.texclut.cou ||
            a.texclut.cov != b.texclut.cov || a.vtxCount != b.vtxCount || a.vtxIndex != b.vtxIndex ||
            a.drawCounter != b.drawCounter || a.lastPerspectiveDraw != b.lastPerspectiveDraw)
            return false;
        for (size_t i = 0; i < sizeof(a.vtxQueue) / sizeof(a.vtxQueue[0]); ++i)
        {
            Fnv fa, fb;
            hashVertex(fa, a.vtxQueue[i]);
            hashVertex(fb, b.vtxQueue[i]);
            if (fa.h != fb.h)
                return false;
        }
        return true;
    }

#endif
    std::atomic<uint32_t> s_debugGifPacketCount{0};
    std::atomic<uint32_t> s_debugGsRegisterCount{0};
    std::atomic<uint32_t> s_debugGsPackedVertexCount{0};
    std::atomic<uint32_t> s_debugGsVertexKickCount{0};
    std::atomic<uint32_t> s_debugCopyRegCount{0};
    std::atomic<uint32_t> s_debugTexaWriteCount{0};
    std::atomic<uint32_t> s_debugCvFontUploadCount{0};
    std::atomic<uint32_t> s_debugLocalCopyCount{0};
}


GS::GS()
    : m_backend(std::make_unique<GSCpuBackend>())
{
    reset();
}

void GS::init(uint8_t *vram, uint32_t vramSize, GSRegisters *privRegs)
{
    m_localMemoryStorage = vram;
    m_localMemorySize = vramSize;
    m_privRegs = privRegs;
    if (!m_backend)
        m_backend = std::make_unique<GSCpuBackend>();
    m_backend->Initialize(vram, vramSize);
    reset();
}

void GS::reset()
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    std::memset(m_ctx, 0, sizeof(m_ctx));
    m_gifStreams = {};
    m_lastStateBlock = 0; // the backend's CLUT is reset below
#if defined(PLATFORM_XBOX)
    m_rawValid[0] = m_rawValid[1] = 0u; // the state serial moves below (bumpStateSerial)
#endif
    m_hostPresentationSequence.fetch_add(1, std::memory_order_release);
    m_prim = {};
    m_primRegister = {};
    m_prmodeRegister = {};
    m_curR = 0x80;
    m_curG = 0x80;
    m_curB = 0x80;
    m_curA = 0x80;
    m_curQ = 1.0f;
    m_curS = 0.0f;
    m_curT = 0.0f;
    m_curU = 0;
    m_curV = 0;
    m_curFog = 0;
    m_fogR = 0;
    m_fogG = 0;
    m_fogB = 0;
    m_prmodecont = true;
    m_pabe = false;
    m_scanmsk = 0u;
    m_dimx = 0u;
    m_dthe = 0u;
    m_colclamp = 0u;
    m_texa = {0u, false, 0u};
    m_texclut = {0u, 0u, 0u};
    m_bitbltbuf = {};
    m_trxpos = {};
    m_trxreg = {};
    m_trxdir = 3;
    m_vtxCount = 0;
    m_vtxIndex = 0;
    m_preferredDisplaySourceFrame = {};
    m_preferredDisplayDestFbp = 0;
    m_hasPreferredDisplaySource = false;
    if (m_backend)
    {
        m_backend->Flush();
        m_backend->Sync(GSSyncReason::Reset);
        m_backend->Reset();
    }
    {
        std::lock_guard<std::mutex> presentationLock(m_presentationMutex);
        m_hostPresentationFrame.clear();
        m_hostPresentationWidth = 0u;
        m_hostPresentationHeight = 0u;
        m_hostPresentationDisplayFbp = 0u;
        m_hostPresentationSourceFbp = 0u;
        m_hostPresentationUsedPreferred = false;
        m_hasHostPresentationFrame = false;
    }

    m_debugHistoryWrite = 0;
    m_debugHistoryCount = 0;
    m_debugNextSeq = 1;
    m_debugFrameIndex = 0;
    m_debugLastVsyncTick = UINT64_MAX;

    for (int i = 0; i < 2; ++i)
    {
        m_ctx[i].frame.fbw = 10;
        m_ctx[i].scissor = {0, 639, 0, 447};
        m_ctx[i].xyoffset = {0, 0};
    }
#if defined(PLATFORM_XBOX)
    bumpStateSerial();
#endif
}

GSContext &GS::activeContext()
{
    return m_ctx[m_prim.ctxt ? 1 : 0];
}

void GS::snapshotVRAM()
{
    // Presentation/debug snapshots run outside m_stateMutex so the EE can keep
    // feeding the GS while a backend performs host-side conversion. Keep the
    // selected backend alive and unswappable for the duration of the call.
    std::lock_guard<std::mutex> backendLock(m_backendLifetimeMutex);
    if (!m_backend)
        return;
    std::vector<uint8_t> snapshot;
    m_backend->Sync(GSSyncReason::DebugReadback);
    m_backend->SnapshotVram(snapshot);
    std::lock_guard<std::mutex> lock(m_snapshotMutex);
    m_displaySnapshot.swap(snapshot);
}

const uint8_t *GS::lockDisplaySnapshot(uint32_t &outSize)
{
    m_snapshotMutex.lock();
    if (m_displaySnapshot.empty())
    {
        outSize = 0;
        return nullptr;
    }

    outSize = static_cast<uint32_t>(m_displaySnapshot.size());
    return m_displaySnapshot.data();
}

GSDebugSnapshot GS::getDebugSnapshot() const
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif

    GSDebugSnapshot snapshot{};
    snapshot.ctx[0] = m_ctx[0];
    snapshot.ctx[1] = m_ctx[1];
    snapshot.prim = m_prim;
    snapshot.texa = m_texa;
    snapshot.texclut = m_texclut;
    snapshot.scanmsk = m_scanmsk;
    snapshot.dimx = m_dimx;
    snapshot.dthe = m_dthe;
    snapshot.colclamp = m_colclamp;
    snapshot.bitbltbuf = m_bitbltbuf;
    snapshot.trxpos = m_trxpos;
    snapshot.trxreg = m_trxreg;
    const GSTransferSnapshot transfer = m_backend ? m_backend->GetTransferSnapshot() : GSTransferSnapshot{};
    snapshot.trxdir = transfer.direction;
    snapshot.transferX = transfer.x;
    snapshot.transferY = transfer.y;
    snapshot.transferTotalPixels = transfer.totalPixels;
    snapshot.transferCopiedPixels = transfer.copiedPixels;
    snapshot.lastDisplayBaseBytes = m_lastDisplayBaseBytes;
    snapshot.preferredDisplaySourceFrame = m_preferredDisplaySourceFrame;
    snapshot.preferredDisplayDestFbp = m_preferredDisplayDestFbp;
    snapshot.hasPreferredDisplaySource = m_hasPreferredDisplaySource;
    {
        std::lock_guard<std::mutex> presentationLock(m_presentationMutex);
        snapshot.hostPresentationWidth = m_hostPresentationWidth;
        snapshot.hostPresentationHeight = m_hostPresentationHeight;
        snapshot.hostPresentationDisplayFbp = m_hostPresentationDisplayFbp;
        snapshot.hostPresentationSourceFbp = m_hostPresentationSourceFbp;
        snapshot.hostPresentationUsedPreferred = m_hostPresentationUsedPreferred;
        snapshot.hasHostPresentationFrame = m_hasHostPresentationFrame;
    }
    snapshot.localToHostPendingBytes = transfer.localToHostPendingBytes;
    return snapshot;
}

std::vector<GSDebugHistoryEntry> GS::getDebugHistory() const
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif

    std::vector<GSDebugHistoryEntry> out;
    out.reserve(m_debugHistoryCount);
    const size_t first = (m_debugHistoryWrite + kDebugHistoryCapacity - m_debugHistoryCount) % kDebugHistoryCapacity;
    for (size_t i = 0; i < m_debugHistoryCount; ++i)
    {
        out.push_back(m_debugHistory[(first + i) % kDebugHistoryCapacity]);
    }
    return out;
}

void GS::clearDebugHistory()
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    m_debugHistoryWrite = 0;
    m_debugHistoryCount = 0;
    m_debugNextSeq = 1;
    m_debugFrameIndex = 0;
    m_debugLastVsyncTick = UINT64_MAX;
}

bool GS::isDebugHistoryPaused() const
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    return m_debugHistoryPaused;
}

void GS::setDebugHistoryPaused(bool paused)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    m_debugHistoryPaused = paused;
}

GSDebugHistoryEntry GS::makeDebugEventUnlocked(GSDebugEventKind kind) const
{
    GSDebugHistoryEntry entry{};
    entry.kind = kind;
    entry.prim = m_prim;
    const uint32_t ci = m_prim.ctxt ? 1u : 0u;
    entry.frame = m_ctx[ci].frame;
    entry.zbuf = m_ctx[ci].zbuf;
    entry.tex0 = m_ctx[ci].tex0;
    entry.scissor = m_ctx[ci].scissor;
    entry.test = m_ctx[ci].test;
    entry.alpha = m_ctx[ci].alpha;
    entry.bitbltbuf = m_bitbltbuf;
    entry.trxpos = m_trxpos;
    entry.trxreg = m_trxreg;
    const GSTransferSnapshot transfer = m_backend ? m_backend->GetTransferSnapshot() : GSTransferSnapshot{};
    entry.trxdir = transfer.direction;
    entry.transferPixels = transfer.totalPixels;
    return entry;
}

void GS::recordDebugEventUnlocked(GSDebugHistoryEntry entry)
{
    if (m_debugHistoryPaused)
    {
        return;
    }

    const uint64_t tick = m_privRegs ? m_privRegs->vsyncTick.load(std::memory_order_acquire) : 0u;
    if (m_debugLastVsyncTick == UINT64_MAX)
    {
        m_debugLastVsyncTick = tick;
    }
    else if (tick != m_debugLastVsyncTick)
    {
        ++m_debugFrameIndex;
        m_debugLastVsyncTick = tick;
    }

    entry.seq = m_debugNextSeq++;
    entry.vsyncTick = tick;
    entry.frameIndex = m_debugFrameIndex;

    m_debugHistory[m_debugHistoryWrite] = entry;
    m_debugHistoryWrite = (m_debugHistoryWrite + 1u) % kDebugHistoryCapacity;
    if (m_debugHistoryCount < kDebugHistoryCapacity)
    {
        ++m_debugHistoryCount;
    }
}

void GS::recordGifTagDebugEventUnlocked(uint32_t sizeBytes, uint32_t nloop, uint8_t flg, uint32_t nreg)
{
    if (m_debugHistoryPaused)
    {
        return;
    }

    GSDebugHistoryEntry entry = makeDebugEventUnlocked(GSDebugEventKind::GifTag);
    entry.gifSizeBytes = sizeBytes;
    entry.gifNloop = nloop;
    entry.gifFlg = flg;
    entry.gifNreg = static_cast<uint8_t>(std::min<uint32_t>(nreg, 16u));
    recordDebugEventUnlocked(entry);
}

void GS::recordRegisterDebugEventUnlocked(uint8_t regAddr, uint64_t value)
{
    if (m_debugHistoryPaused)
    {
        return;
    }

    switch (regAddr)
    {
    case GS_REG_PRIM:
    case GS_REG_TEX0_1:
    case GS_REG_TEX0_2:
    case GS_REG_TEX2_1:
    case GS_REG_TEX2_2:
    case GS_REG_TEXA:
    case GS_REG_TEXCLUT:
    case GS_REG_FRAME_1:
    case GS_REG_FRAME_2:
    case GS_REG_ZBUF_1:
    case GS_REG_ZBUF_2:
    case GS_REG_ALPHA_1:
    case GS_REG_ALPHA_2:
    case GS_REG_TEST_1:
    case GS_REG_TEST_2:
    case GS_REG_SCISSOR_1:
    case GS_REG_SCISSOR_2:
    case GS_REG_XYOFFSET_1:
    case GS_REG_XYOFFSET_2:
    case GS_REG_BITBLTBUF:
    case GS_REG_TRXPOS:
    case GS_REG_TRXREG:
    case GS_REG_TRXDIR:
        break;
    default:
        return;
    }

    GSDebugHistoryEntry entry = makeDebugEventUnlocked(GSDebugEventKind::Register);
    entry.reg = regAddr;
    entry.regValue = value;
    recordDebugEventUnlocked(entry);
}

void GS::recordDrawDebugEventUnlocked(int vertexCount)
{
    if (m_debugHistoryPaused)
    {
        return;
    }

    if (vertexCount <= 0)
    {
        return;
    }

    GSDebugHistoryEntry entry = makeDebugEventUnlocked(GSDebugEventKind::Draw);
    entry.vertexCount = static_cast<uint32_t>(vertexCount);

    const int count = std::min(vertexCount, kMaxVerts);
    entry.xMin = entry.xMax = m_vtxQueue[0].x;
    entry.yMin = entry.yMax = m_vtxQueue[0].y;
    entry.zMin = entry.zMax = m_vtxQueue[0].z;
    entry.aMin = entry.aMax = m_vtxQueue[0].a;

    for (int i = 1; i < count; ++i)
    {
        const GSVertex &v = m_vtxQueue[i];
        entry.xMin = std::min(entry.xMin, v.x);
        entry.xMax = std::max(entry.xMax, v.x);
        entry.yMin = std::min(entry.yMin, v.y);
        entry.yMax = std::max(entry.yMax, v.y);
        entry.zMin = std::min(entry.zMin, v.z);
        entry.zMax = std::max(entry.zMax, v.z);
        entry.aMin = std::min(entry.aMin, v.a);
        entry.aMax = std::max(entry.aMax, v.a);
    }

    recordDebugEventUnlocked(entry);
}

void GS::recordTransferDebugEventUnlocked()
{
    if (m_debugHistoryPaused)
    {
        return;
    }

    GSDebugHistoryEntry entry = makeDebugEventUnlocked(GSDebugEventKind::Transfer);
    entry.transferPixels = m_backend ? m_backend->GetTransferSnapshot().totalPixels : 0u;
    recordDebugEventUnlocked(entry);
}

void GS::recordPresentDebugEventUnlocked(uint32_t displayFbp, uint32_t sourceFbp, uint32_t width, uint32_t height, bool usedPreferred)
{
    if (m_debugHistoryPaused)
    {
        return;
    }

    GSDebugHistoryEntry entry = makeDebugEventUnlocked(GSDebugEventKind::Present);
    entry.displayFbp = displayFbp;
    entry.sourceFbp = sourceFbp;
    entry.width = width;
    entry.height = height;
    entry.usedPreferred = usedPreferred;
    recordDebugEventUnlocked(entry);
}

bool GS::getPreferredDisplaySource(GSFrameReg &outSource, uint32_t &outDestFbp) const
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    if (!m_hasPreferredDisplaySource)
    {
        outSource = {};
        outDestFbp = 0u;
        return false;
    }

    outSource = m_preferredDisplaySourceFrame;
    outDestFbp = m_preferredDisplayDestFbp;
    return true;
}

void GS::unlockDisplaySnapshot()
{
    m_snapshotMutex.unlock();
}

uint32_t GS::getLastDisplayBaseBytes() const
{
    return m_lastDisplayBaseBytes;
}

void GS::refreshDisplaySnapshot()
{
    snapshotVRAM();
}

GSPresentationRequest GS::buildPresentationRequestUnlocked() const
{
    GSPresentationRequest request{};
    if (!m_privRegs)
        return request;
    request.pmode = m_privRegs->pmode;
    request.smode2 = m_privRegs->smode2;
    request.dispfb1 = m_privRegs->dispfb1;
    request.display1 = m_privRegs->display1;
    request.dispfb2 = m_privRegs->dispfb2;
    request.display2 = m_privRegs->display2;
    request.bgcolor = m_privRegs->bgcolor;
    request.vsyncTick = m_privRegs->vsyncTick.load(std::memory_order_acquire);
    request.contextFrames[0] = m_ctx[0].frame;
    request.contextFrames[1] = m_ctx[1].frame;
    request.preferredSource = m_preferredDisplaySourceFrame;
    request.preferredDestFbp = m_preferredDisplayDestFbp;
    request.hasPreferredSource = m_hasPreferredDisplaySource;
    return request;
}

void GS::latchHostPresentationFrame()
{
#if defined(PLATFORM_XBOX)
    std::lock_guard publicationLock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> publicationLock(m_stateMutex);
#endif
    GSPresentationRequest request{};
    {
#if defined(PLATFORM_XBOX)
        std::lock_guard lock(m_stateMutex);
#else
        std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
        if (!m_backend || !m_privRegs)
        {
            std::lock_guard<std::mutex> presentationLock(m_presentationMutex);
            m_hostPresentationFrame.clear();
            m_hasHostPresentationFrame = false;
            m_hostPresentationWidth = m_hostPresentationHeight = 0u;
            return;
        }
        request = buildPresentationRequestUnlocked();
    }

#if defined(PLATFORM_XBOX)
    // Converting a frame for display is costly on the Xbox; while the host has
    // not taken the previous one yet, a newer frame would only replace it.
    {
        std::lock_guard<std::mutex> presentationLock(m_presentationMutex);
        if (m_hasHostPresentationFrame && !m_hostPresentationFrame.empty())
            return;
    }
#endif

    PresentationFrame frame{};
    {
        std::lock_guard<std::mutex> backendLock(m_backendLifetimeMutex);
        if (m_backend)
        {
            m_backend->Flush();
            // Asynchronous backends publish from their own thread once they
            // reach this point of the command stream.
            if (m_backend->PresentAsync(request, [this](PresentationFrame &&ready) {
                    publishHostPresentationFrame(std::move(ready), false);
                }))
                return;
            m_backend->Sync(GSSyncReason::Presentation);
            frame = m_backend->Present(request);
        }
    }
    publishHostPresentationFrame(std::move(frame), true);
}

void GS::publishHostPresentationFrame(PresentationFrame &&frame, bool recordDebugEvent)
{
    const bool hasFrame = static_cast<bool>(frame);
    const uint32_t displayFbp = frame.displayFbp;
    const uint32_t sourceFbp = frame.sourceFbp;
    const uint32_t width = frame.width;
    const uint32_t height = frame.height;
    const bool usedPreferred = frame.usedPreferred;
    {
        std::lock_guard<std::mutex> presentationLock(m_presentationMutex);
        m_hostPresentationFrame = std::move(frame.pixels);
        m_hostPresentationWidth = width;
        m_hostPresentationHeight = height;
        m_hostPresentationDisplayFbp = displayFbp;
        m_hostPresentationSourceFbp = sourceFbp;
        m_hostPresentationUsedPreferred = usedPreferred;
        m_hasHostPresentationFrame = hasFrame;
        m_hostPresentationSequence.fetch_add(1, std::memory_order_release);
    }

    // The asynchronous path runs on the backend thread, which must not take
    // the state mutex (the EE thread may hold it while draining the backend).
    if (hasFrame && recordDebugEvent)
    {
#if defined(PLATFORM_XBOX)
        std::lock_guard lock(m_stateMutex);
#else
        std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
        recordPresentDebugEventUnlocked(displayFbp, sourceFbp, width, height, usedPreferred);
    }
}

bool GS::copyLatchedHostPresentationFrame(std::vector<uint8_t> &outPixels,
                                          uint32_t &outWidth,
                                          uint32_t &outHeight,
                                          uint32_t *outDisplayFbp,
                                          uint32_t *outSourceFbp,
                                          bool *outUsedPreferred) const
{
    std::lock_guard<std::mutex> lock(m_presentationMutex);
    if (!m_hasHostPresentationFrame || m_hostPresentationFrame.empty())
    {
        outPixels.clear();
        outWidth = 0u;
        outHeight = 0u;
        if (outDisplayFbp)
            *outDisplayFbp = 0u;
        if (outSourceFbp)
            *outSourceFbp = 0u;
        if (outUsedPreferred)
            *outUsedPreferred = false;
        return false;
    }

    outWidth = m_hostPresentationWidth;
    outHeight = m_hostPresentationHeight;
    if (outDisplayFbp)
        *outDisplayFbp = m_hostPresentationDisplayFbp;
    if (outSourceFbp)
        *outSourceFbp = m_hostPresentationSourceFbp;
    if (outUsedPreferred)
        *outUsedPreferred = m_hostPresentationUsedPreferred;

    const size_t packedRowBytes = static_cast<size_t>(outWidth) * 4u;
#if defined(PLATFORM_XBOX)
    // 64 MB: hand the frame over instead of copying it. Rows are packed in
    // place, and the caller's previous buffer is released rather than kept.
    // The frame is only taken once per publication, so it is safe to consume.
    {
        auto &frame = const_cast<std::vector<uint8_t> &>(m_hostPresentationFrame);
        const size_t sourceRowBytes = static_cast<size_t>(kHostFrameWidth) * 4u;
        if (outWidth > kHostFrameWidth || static_cast<size_t>(outHeight) * sourceRowBytes > frame.size())
        {
            outPixels.clear();
            outWidth = outHeight = 0u;
            return false;
        }
        for (uint32_t y = 1; y < outHeight && packedRowBytes != sourceRowBytes; ++y)
            std::memmove(frame.data() + y * packedRowBytes, frame.data() + y * sourceRowBytes, packedRowBytes);
        outPixels.swap(frame);
        std::vector<uint8_t>().swap(frame);
        return true;
    }
#endif
    outPixels.resize(packedRowBytes * static_cast<size_t>(outHeight));
    if (outWidth != 0u && outHeight != 0u)
    {
        const size_t sourceRowBytes = static_cast<size_t>(kHostFrameWidth) * 4u;
        for (uint32_t y = 0; y < outHeight; ++y)
        {
            const size_t srcOffset = static_cast<size_t>(y) * sourceRowBytes;
            const size_t dstOffset = static_cast<size_t>(y) * packedRowBytes;
            if (srcOffset + packedRowBytes > m_hostPresentationFrame.size() ||
                dstOffset + packedRowBytes > outPixels.size())
            {
                outPixels.clear();
                outWidth = 0u;
                outHeight = 0u;
                if (outDisplayFbp)
                    *outDisplayFbp = 0u;
                if (outSourceFbp)
                    *outSourceFbp = 0u;
                if (outUsedPreferred)
                    *outUsedPreferred = false;
                return false;
            }

            std::memcpy(outPixels.data() + dstOffset,
                        m_hostPresentationFrame.data() + srcOffset,
                        packedRowBytes);
        }
    }
    return true;
}

#if defined(PLATFORM_XBOX)
#if defined(PLATFORM_XBOX) && TS_MEASURE_PUSHBC
namespace
{
    // The kick histogram (runtime/ps2_measure.h): a PATH1 packet (an
    // XGKICK) by the primitives it drew and what it wrote, counted when the
    // outermost one ends.
    struct MeasureKick
    {
        bool path1, outer;
        uint32_t prims0;
        explicit MeasureKick(GifPathId p)
            : path1(p == GifPathId::Path1), outer(path1 && g_measure.gifDepth == 0u), prims0(g_measure.prims)
        {
            if (path1)
                ++g_measure.gifDepth;
            if (outer)
                g_measure.vtxWrites = g_measure.xyz3Writes = g_measure.imageSeen = 0u;
        }
        ~MeasureKick()
        {
            if (!path1)
                return;
            --g_measure.gifDepth;
            if (!outer)
                return;
            const uint32_t prims = g_measure.prims - prims0;
            ++g_measure.kicks;
            ++g_measure.kickPrims[prims == 0u ? 0u : prims == 1u ? 1u : prims < 4u ? 2u : prims < 16u ? 3u : 4u];
            ++g_measure.kickKinds[g_measure.imageSeen ? 2u : g_measure.vtxWrites == 0u ? 0u : 1u];
            if (g_measure.xyz3Writes)
                ++g_measure.kickKinds[3];
        }
    };
}
#endif

#endif
void GS::processGIFPacket(const uint8_t *data, uint32_t sizeBytes, GifPathId path)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#if defined(PLATFORM_XBOX) && TS_MEASURE_PUSHBC
    MeasureKick measureKick(path);
#endif
#if TS_GS_BULK && TS_GS_BULK_ALL_PATH1
    if (path == GifPathId::Path1)
    {
        bulkPath1Unlocked(data, sizeBytes);
        return;
    }
#endif
    processGIFStreamUnlocked(data, sizeBytes, path, true);
}

void GS::processGIFStreamUnlocked(const uint8_t *data, uint32_t sizeBytes, GifPathId path, bool nativeImage)
{
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    const auto index = static_cast<unsigned>(path);
    if (!data || sizeBytes == 0 || !m_backend || index < 1 || index > 3)
        return;
    auto &stream = m_gifStreams[index - 1];
#if defined(PLATFORM_XBOX)
    if (nativeImage && !stream.remaining && !stream.padding && !stream.unitBytes &&
#else
    if (!stream.remaining && !stream.padding && !stream.unitBytes &&
#endif
        tryProcessNativeImageUploadPacket(data, sizeBytes))
        return;
    uint32_t offset = 0;
    while (offset < sizeBytes) {
        if (stream.remaining && stream.format >= 2) {
            const uint32_t count = std::min(stream.remaining, sizeBytes - offset);
            stream.image.insert(stream.image.end(), data + offset, data + offset + count);
            offset += count;
            stream.remaining -= count;
            if (!stream.remaining) {
                // Do not expose partial CT24 pixels when DMA splits a GIF IMAGE.
                processImageData(stream.image.data(), static_cast<uint32_t>(stream.image.size()));
                stream.image.clear();
#if defined(PLATFORM_XBOX)
                // Xbox: a large gathered image gives its memory back (each
                // of the three paths kept the largest split image of the
                // session); the VIF1 interpreter's block buffer keeps 64 KB
                // by the same rule.
                if (stream.image.capacity() > 64u * 1024u)
                    std::vector<uint8_t>().swap(stream.image);
#endif
            }
            continue;
        }
        if (stream.padding) {
            const uint32_t count = std::min(stream.padding, sizeBytes - offset);
            stream.padding -= count; offset += count; continue;
        }
        const bool tag = stream.remaining == 0;
        const uint32_t needed = (tag || stream.format == GIF_FMT_PACKED) ? 16u : 8u;
        const uint32_t count = std::min(needed - stream.unitBytes, sizeBytes - offset);
        std::memcpy(stream.unit.data() + stream.unitBytes, data + offset, count);
        offset += count; stream.unitBytes += count;
        if (stream.unitBytes < needed) continue;
        const uint64_t lo = loadLE64(stream.unit.data());
        const uint64_t hi = needed == 16 ? loadLE64(stream.unit.data() + 8) : 0;
        stream.unitBytes = 0;
        if (tag) {
            const uint32_t nloop = lo & 0x7fffu;
            stream.format = (lo >> 58) & 3u;
            stream.nreg = (lo >> 60) & 15u;
            if (!stream.nreg) stream.nreg = 16;
            stream.registers = hi; stream.regIndex = 0; stream.q = 1.0f;
            stream.endPadding = stream.format == GIF_FMT_REGLIST && ((nloop * stream.nreg) & 1u) ? 8u : 0u;
            recordGifTagDebugEventUnlocked(sizeBytes, nloop, stream.format, stream.nreg);
            // PRE only applies to PACKED, not REGLIST or IMAGE.
            if (stream.format == GIF_FMT_PACKED && ((lo >> 46) & 1u))
                writeRegisterUnlocked(GS_REG_PRIM, (lo >> 47) & 0x7ffu);
            stream.remaining = nloop * (stream.format >= 2 ? 16u : stream.nreg);
            if (stream.format >= 2) stream.image.clear();
#if defined(PLATFORM_XBOX)
            TS_MEASURE(g_measure.imageSeen |= stream.format >= 2 ? 1u : 0u);
#endif
        } else {
            const uint8_t reg = (stream.registers >> (4u * stream.regIndex)) & 15u;
            if (stream.format == GIF_FMT_PACKED) {
                m_curQ = stream.q;
                writeRegisterPacked(reg, lo, hi);
                stream.q = m_curQ;
            } else {
                writeRegisterUnlocked(reg, lo);
            }
            stream.regIndex = (stream.regIndex + 1) % stream.nreg;
            --stream.remaining;
            if (!stream.remaining) stream.padding = stream.endPadding;
        }
    }
}

bool GS::processNativePackedGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    if (!data || sizeBytes < 16u || !m_backend)
        return false;

    if (!validatePackedGifPacket(data, sizeBytes))
        return false;

    const bool processed = visitPackedGifPacket(data, sizeBytes, [&](const PackedGifPacketTag &tag)
                                                {
        m_curQ = 1.0f;

        recordGifTagDebugEventUnlocked(sizeBytes, tag.nloop, GIF_FMT_PACKED, tag.nreg);

        const bool pre = ((tag.lo >> 46u) & 1u) != 0u;
        if (pre)
            writeRegisterUnlocked(GS_REG_PRIM, (tag.lo >> 47u) & 0x7FFu);

        uint32_t offset = tag.payloadOffset;
        for (uint32_t loop = 0u; loop < tag.nloop; ++loop)
        {
            for (uint32_t r = 0u; r < tag.nreg; ++r)
            {
                const uint64_t lo = loadLE64(data + offset);
                const uint64_t hi = loadLE64(data + offset + 8u);
                offset += 16u;
                writeRegisterPacked(tag.regs[r], lo, hi);
            }
        }

        return true; });

    if (!processed)
        return false;

    ++m_nativePackedGIFPacketCount;
    return true;
}

void GS::uploadImageNative(uint64_t bitbltbuf,
                           uint64_t trxpos,
                           uint64_t trxreg,
                           uint64_t trxdir,
                           const uint8_t *data,
                           uint32_t sizeBytes)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    uploadImageNativeUnlocked(bitbltbuf, trxpos, trxreg, trxdir, data, sizeBytes);
}

void GS::uploadImageNativeUnlocked(uint64_t bitbltbuf,
                                   uint64_t trxpos,
                                   uint64_t trxreg,
                                   uint64_t trxdir,
                                   const uint8_t *data,
                                   uint32_t sizeBytes)
{
    if (!data || sizeBytes == 0 || !m_backend)
        return;

    writeRegisterUnlocked(GS_REG_BITBLTBUF, bitbltbuf);
    writeRegisterUnlocked(GS_REG_TRXPOS, trxpos);
    writeRegisterUnlocked(GS_REG_TRXREG, trxreg);
    writeRegisterUnlocked(GS_REG_TRXDIR, trxdir);
    processImageData(data, sizeBytes);
    ++m_nativeImageUploadCount;
}

bool GS::tryProcessNativeImageUploadPacket(const uint8_t *data, uint32_t sizeBytes)
{
    constexpr uint32_t kSetupRegisters = 4u;
    constexpr uint32_t kPackedAdPayloadBytes = kSetupRegisters * 16u;
    constexpr uint64_t kPackedAdDescriptor = 0x0Eull;

    if (!data || sizeBytes < 16u + kPackedAdPayloadBytes + 16u)
        return false;

    const uint64_t setupTagLo = loadLE64(data);
    const uint64_t setupTagHi = loadLE64(data + 8u);
    const uint32_t setupNloop = static_cast<uint32_t>(setupTagLo & 0x7FFFu);
    const uint8_t setupFlg = static_cast<uint8_t>((setupTagLo >> 58u) & 0x3u);
    uint32_t setupNreg = static_cast<uint32_t>((setupTagLo >> 60u) & 0xFu);
    if (setupNreg == 0u)
        setupNreg = 16u;

    if (setupNloop != kSetupRegisters ||
        setupFlg != GIF_FMT_PACKED ||
        setupNreg != 1u ||
        (setupTagHi & 0xFull) != kPackedAdDescriptor)
    {
        return false;
    }

    uint64_t regs[kSetupRegisters] = {};
    uint32_t offset = 16u;
    constexpr uint8_t expectedRegs[kSetupRegisters] = {
        GS_REG_BITBLTBUF,
        GS_REG_TRXPOS,
        GS_REG_TRXREG,
        GS_REG_TRXDIR,
    };

    for (uint32_t i = 0; i < kSetupRegisters; ++i)
    {
        regs[i] = loadLE64(data + offset);
        const uint64_t reg = loadLE64(data + offset + 8u);
        if ((reg & 0xFFu) != expectedRegs[i])
            return false;
        offset += 16u;
    }

    const uint32_t trxdirMode = static_cast<uint32_t>(regs[3] & 0x3ull);
    const uint32_t rrw = static_cast<uint32_t>(regs[2] & 0xFFFull);
    const uint32_t rrh = static_cast<uint32_t>((regs[2] >> 32u) & 0xFFFull);
    if (trxdirMode != 0u || rrw == 0u || rrh == 0u)
        return false;

    if (offset + 16u > sizeBytes)
        return false;

    const uint64_t imageTagLo = loadLE64(data + offset);
    const uint8_t imageFlg = static_cast<uint8_t>((imageTagLo >> 58u) & 0x3u);
    const uint32_t imageNloop = static_cast<uint32_t>(imageTagLo & 0x7FFFu);
    if (imageFlg != GIF_FMT_IMAGE || imageNloop == 0u)
        return false;

    offset += 16u;
    const uint64_t imageBytes64 = static_cast<uint64_t>(imageNloop) * 16ull;
    if (imageBytes64 > 0xFFFFFFFFull)
        return false;
    const uint32_t imageBytes = static_cast<uint32_t>(imageBytes64);
    if (offset + imageBytes != sizeBytes)
        return false;

    uploadImageNativeUnlocked(regs[0], regs[1], regs[2], regs[3], data + offset, imageBytes);
    return true;
}

void GS::writeRegisterPacked(uint8_t regDesc, uint64_t lo, uint64_t hi)
{
    switch (regDesc)
    {
    case 0x00:
        writeRegisterUnlocked(GS_REG_PRIM, lo & 0x7FF);
        break;
    case 0x01:
        m_curR = static_cast<uint8_t>(lo & 0xFF);
        m_curG = static_cast<uint8_t>((lo >> 32) & 0xFF);
        m_curB = static_cast<uint8_t>(hi & 0xFF);
        m_curA = static_cast<uint8_t>((hi >> 32) & 0xFF);
        break;
    case 0x02:
    {
        uint32_t sBits = static_cast<uint32_t>(lo & 0xFFFFFFFF);
        uint32_t tBits = static_cast<uint32_t>((lo >> 32) & 0xFFFFFFFF);
        uint32_t qBits = static_cast<uint32_t>(hi & 0xFFFFFFFF);
        std::memcpy(&m_curS, &sBits, 4);
        std::memcpy(&m_curT, &tBits, 4);
        std::memcpy(&m_curQ, &qBits, 4);
        if (m_curQ == 0.0f)
            m_curQ = 1.0f;
        break;
    }
    case 0x03:
        m_curU = static_cast<uint16_t>(lo & 0x3FFFu);
        m_curV = static_cast<uint16_t>((lo >> 32) & 0x3FFFu);
        break;
    case 0x04:
    {
        uint16_t x = static_cast<uint16_t>(lo & 0xFFFF);
        uint16_t y = static_cast<uint16_t>((lo >> 32) & 0xFFFF);
        uint32_t z = static_cast<uint32_t>((hi >> 4) & 0xFFFFFF);
        uint8_t f = static_cast<uint8_t>((hi >> 36) & 0xFF);
        bool adk = ((hi >> 47) & 1) != 0;
        PS2_IF_AGRESSIVE_LOGS({
            const uint32_t debugIndex = s_debugGsPackedVertexCount.fetch_add(1, std::memory_order_relaxed);
            if (debugIndex < 64u)
            {
                RUNTIME_LOG("[gs:packed-xyzf] idx=" << debugIndex
                                                    << " x=" << x
                                                    << " y=" << y
                                                    << " z=0x" << std::hex << z
                                                    << std::dec
                                                    << " fog=" << static_cast<uint32_t>(f)
                                                    << " kick=" << static_cast<uint32_t>(!adk ? 1u : 0u)
                                                    << " prim=" << static_cast<uint32_t>(m_prim.type)
                                                    << std::endl);
            }
        });
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(x) / 16.0f;
        vtx.y = static_cast<float>(y) / 16.0f;
        vtx.z = static_cast<float>(z);
        vtx.r = m_curR;
        vtx.g = m_curG;
        vtx.b = m_curB;
        vtx.a = m_curA;
        vtx.q = m_curQ;
        vtx.s = m_curS;
        vtx.t = m_curT;
        vtx.u = m_curU;
        vtx.v = m_curV;
        vtx.fog = f;
        vertexKick(!adk);
        break;
    }
    case 0x05:
    {
        uint16_t x = static_cast<uint16_t>(lo & 0xFFFF);
        uint16_t y = static_cast<uint16_t>((lo >> 32) & 0xFFFF);
        uint32_t z = static_cast<uint32_t>(hi & 0xFFFFFFFF);
        bool adk = ((hi >> 47) & 1) != 0;
        PS2_IF_AGRESSIVE_LOGS({
            const uint32_t debugIndex = s_debugGsPackedVertexCount.fetch_add(1, std::memory_order_relaxed);
            if (debugIndex < 64u)
            {
                RUNTIME_LOG("[gs:packed-xyz] idx=" << debugIndex
                                                   << " x=" << x
                                                   << " y=" << y
                                                   << " z=0x" << std::hex << z
                                                   << std::dec
                                                   << " kick=" << static_cast<uint32_t>(!adk ? 1u : 0u)
                                                   << " prim=" << static_cast<uint32_t>(m_prim.type)
                                                   << std::endl);
            }
        });
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(x) / 16.0f;
        vtx.y = static_cast<float>(y) / 16.0f;
        vtx.z = static_cast<float>(z);
        vtx.r = m_curR;
        vtx.g = m_curG;
        vtx.b = m_curB;
        vtx.a = m_curA;
        vtx.q = m_curQ;
        vtx.s = m_curS;
        vtx.t = m_curT;
        vtx.u = m_curU;
        vtx.v = m_curV;
        vtx.fog = m_curFog;
        vertexKick(!adk);
        break;
    }
    case 0x0A:
        m_curFog = static_cast<uint8_t>((hi >> 36) & 0xFF);
        break;
    case 0x0C:
    {
        PS2_IF_AGRESSIVE_LOGS({
            const uint32_t debugIndex = s_debugGsPackedVertexCount.fetch_add(1, std::memory_order_relaxed);
            if (debugIndex < 64u)
            {
                RUNTIME_LOG("[gs:packed-xyzf3] idx=" << debugIndex
                                                     << " x=" << static_cast<uint32_t>(lo & 0xFFFFu)
                                                     << " y=" << static_cast<uint32_t>((lo >> 32) & 0xFFFFu)
                                                     << " kick=0"
                                                     << " prim=" << static_cast<uint32_t>(m_prim.type)
                                                     << std::endl);
            }
        });
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(lo & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((lo >> 32) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<float>((hi >> 4) & 0xFFFFFF);
        vtx.r = m_curR;
        vtx.g = m_curG;
        vtx.b = m_curB;
        vtx.a = m_curA;
        vtx.q = m_curQ;
        vtx.s = m_curS;
        vtx.t = m_curT;
        vtx.u = m_curU;
        vtx.v = m_curV;
        vtx.fog = static_cast<uint8_t>((hi >> 36) & 0xFF);
        vertexKick(false);
        break;
    }
    case 0x0D:
    {
        PS2_IF_AGRESSIVE_LOGS({
            const uint32_t debugIndex = s_debugGsPackedVertexCount.fetch_add(1, std::memory_order_relaxed);
            if (debugIndex < 64u)
            {
                RUNTIME_LOG("[gs:packed-xyz3] idx=" << debugIndex
                                                    << " x=" << static_cast<uint32_t>(lo & 0xFFFFu)
                                                    << " y=" << static_cast<uint32_t>((lo >> 32) & 0xFFFFu)
                                                    << " kick=0"
                                                    << " prim=" << static_cast<uint32_t>(m_prim.type)
                                                    << std::endl);
            }
        });
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(lo & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((lo >> 32) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<float>(hi & 0xFFFFFFFF);
        vtx.r = m_curR;
        vtx.g = m_curG;
        vtx.b = m_curB;
        vtx.a = m_curA;
        vtx.q = m_curQ;
        vtx.s = m_curS;
        vtx.t = m_curT;
        vtx.u = m_curU;
        vtx.v = m_curV;
        vtx.fog = m_curFog;
        vertexKick(false);
        break;
    }
    case 0x0E:
    {
        uint8_t addr = static_cast<uint8_t>(hi & 0xFF);
        writeRegisterUnlocked(addr, lo);
        break;
    }
    case 0x0F:
        break;
    default:
        writeRegisterUnlocked(regDesc, lo);
        break;
    }
}

void GS::writeRegister(uint8_t regAddr, uint64_t value)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    writeRegisterUnlocked(regAddr, value);
}

void GS::writeRegisterUnlocked(uint8_t regAddr, uint64_t value)
{
    const bool interestingReg =
        regAddr == GS_REG_PRIM ||
        regAddr == GS_REG_RGBAQ ||
        regAddr == GS_REG_ST ||
        regAddr == GS_REG_UV ||
        regAddr == GS_REG_XYZ2 ||
        regAddr == GS_REG_XYZ3 ||
        regAddr == GS_REG_XYZF2 ||
        regAddr == GS_REG_XYZF3 ||
        regAddr == GS_REG_TEX0_1 ||
        regAddr == GS_REG_TEX0_2 ||
        regAddr == GS_REG_TEX2_1 ||
        regAddr == GS_REG_TEX2_2 ||
        regAddr == GS_REG_TEXCLUT ||
        regAddr == GS_REG_TEXA ||
        regAddr == GS_REG_XYOFFSET_1 ||
        regAddr == GS_REG_XYOFFSET_2 ||
        regAddr == GS_REG_SCISSOR_1 ||
        regAddr == GS_REG_SCISSOR_2 ||
        regAddr == GS_REG_FRAME_1 ||
        regAddr == GS_REG_FRAME_2 ||
        regAddr == GS_REG_ALPHA_1 ||
        regAddr == GS_REG_ALPHA_2 ||
        regAddr == GS_REG_TEST_1 ||
        regAddr == GS_REG_TEST_2 ||
        regAddr == GS_REG_BITBLTBUF ||
        regAddr == GS_REG_TRXPOS ||
        regAddr == GS_REG_TRXREG ||
        regAddr == GS_REG_TRXDIR;

    PS2_IF_AGRESSIVE_LOGS({
        if (interestingReg)
        {
            const uint32_t debugIndex = s_debugGsRegisterCount.fetch_add(1, std::memory_order_relaxed);
            if (debugIndex < 128u)
            {
                RUNTIME_LOG("[gs:reg] idx=" << debugIndex
                                            << " reg=0x" << std::hex << static_cast<uint32_t>(regAddr)
                                            << " value=0x" << value
                                            << std::dec
                                            << std::endl);
            }
        }
    });

    const bool isCopyRelevantReg =
        regAddr == GS_REG_PRIM ||
        regAddr == GS_REG_TEX0_2 ||
        regAddr == GS_REG_TEX1_2 ||
        regAddr == GS_REG_ALPHA_2 ||
        regAddr == GS_REG_TEST_2 ||
        regAddr == GS_REG_PABE ||
        regAddr == GS_REG_FRAME_2 ||
        regAddr == GS_REG_XYOFFSET_2 ||
        regAddr == GS_REG_SCISSOR_2;
    PS2_IF_AGRESSIVE_LOGS({
        if (isCopyRelevantReg &&
            s_debugCopyRegCount.fetch_add(1u, std::memory_order_relaxed) < 64u)
        {
            RUNTIME_LOG("[gs:copy-reg] reg=0x"
                        << std::hex << static_cast<uint32_t>(regAddr)
                        << " value=0x" << value
                        << std::dec
                        << " primCtxt=" << static_cast<uint32_t>(m_prim.ctxt)
                        << " ctx0fbp=" << m_ctx[0].frame.fbp
                        << " ctx1fbp=" << m_ctx[1].frame.fbp
                        << std::endl);
        }
    });

#if defined(PLATFORM_XBOX)
    if (kDrawStateRegisters.bits[regAddr])
        noteStateWrite(regAddr, value);

#endif
    switch (regAddr)
    {
    case GS_REG_PRIM:
    {
        m_primRegister = decodePrimRegister(value);
        if (m_prmodecont)
        {
            m_prim = m_primRegister;
        }
        else
        {
            // PRIM always selects the primitive topology. With AC=0, all
            // rendering attributes remain sourced from PRMODE.
            m_prim.type = m_primRegister.type;
        }
        m_vtxCount = 0;
        m_vtxIndex = 0;
        break;
    }
    case GS_REG_RGBAQ:
    {
        m_curR = static_cast<uint8_t>(value & 0xFF);
        m_curG = static_cast<uint8_t>((value >> 8) & 0xFF);
        m_curB = static_cast<uint8_t>((value >> 16) & 0xFF);
        m_curA = static_cast<uint8_t>((value >> 24) & 0xFF);
        uint32_t qBits = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
        std::memcpy(&m_curQ, &qBits, 4);
        if (m_curQ == 0.0f)
            m_curQ = 1.0f;
        break;
    }
    case GS_REG_ST:
    {
        uint32_t sBits = static_cast<uint32_t>(value & 0xFFFFFFFF);
        uint32_t tBits = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
        std::memcpy(&m_curS, &sBits, 4);
        std::memcpy(&m_curT, &tBits, 4);
        break;
    }
    case GS_REG_UV:
    {
        m_curU = static_cast<uint16_t>(value & 0x3FFFu);
        m_curV = static_cast<uint16_t>((value >> 16) & 0x3FFFu);
        break;
    }
    case GS_REG_XYZF2:
    case GS_REG_XYZF3:
    {
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(value & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((value >> 16) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<double>((value >> 32) & 0xFFFFFF);
        vtx.fog = static_cast<uint8_t>((value >> 56) & 0xFF);
        vtx.r = m_curR;
        vtx.g = m_curG;
        vtx.b = m_curB;
        vtx.a = m_curA;
        vtx.q = m_curQ;
        vtx.s = m_curS;
        vtx.t = m_curT;
        vtx.u = m_curU;
        vtx.v = m_curV;
#if defined(PLATFORM_XBOX)
        TS_MEASURE(regAddr == GS_REG_XYZF2 ? ++g_measure.vtxWrites : ++g_measure.xyz3Writes);
#endif
        vertexKick(regAddr == GS_REG_XYZF2);
        break;
    }
    case GS_REG_XYZ2:
    case GS_REG_XYZ3:
    {
        GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
        vtx.x = static_cast<float>(value & 0xFFFF) / 16.0f;
        vtx.y = static_cast<float>((value >> 16) & 0xFFFF) / 16.0f;
        vtx.z = static_cast<double>((value >> 32) & 0xFFFFFFFF);
        vtx.r = m_curR;
        vtx.g = m_curG;
        vtx.b = m_curB;
        vtx.a = m_curA;
        vtx.q = m_curQ;
        vtx.s = m_curS;
        vtx.t = m_curT;
        vtx.u = m_curU;
        vtx.v = m_curV;
        vtx.fog = m_curFog;
#if defined(PLATFORM_XBOX)
        TS_MEASURE(regAddr == GS_REG_XYZ2 ? ++g_measure.vtxWrites : ++g_measure.xyz3Writes);
#endif
        vertexKick(regAddr == GS_REG_XYZ2);
        break;
    }
    case GS_REG_TEX0_1:
    case GS_REG_TEX0_2:
    {
        int ci = (regAddr == GS_REG_TEX0_2) ? 1 : 0;
        auto &t = m_ctx[ci].tex0;
        t.tbp0 = static_cast<uint32_t>(value & 0x3FFF);
        t.tbw = static_cast<uint8_t>((value >> 14) & 0x3F);
        t.psm = static_cast<uint8_t>((value >> 20) & 0x3F);
        t.tw = static_cast<uint8_t>((value >> 26) & 0xF);
        t.th = static_cast<uint8_t>((value >> 30) & 0xF);
        t.tcc = static_cast<uint8_t>((value >> 34) & 0x1);
        t.tfx = static_cast<uint8_t>((value >> 35) & 0x3);
        t.cbp = static_cast<uint32_t>((value >> 37) & 0x3FFF);
        t.cpsm = static_cast<uint8_t>((value >> 51) & 0xF);
        t.csm = static_cast<uint8_t>((value >> 55) & 0x1);
        t.csa = static_cast<uint8_t>((value >> 56) & 0x1F);
        t.cld = static_cast<uint8_t>((value >> 61) & 0x7);
        ++m_textureStateWrites;
        m_backend->LoadClut(t, m_texclut);
        break;
    }
    case GS_REG_CLAMP_1:
    case GS_REG_CLAMP_2:
    {
        int ci = (regAddr == GS_REG_CLAMP_2) ? 1 : 0;
        m_ctx[ci].clamp = value;
        ++m_textureStateWrites;
        break;
    }
    case GS_REG_FOG:
        m_curFog = static_cast<uint8_t>((value >> 56) & 0xFF);
        break;
    case GS_REG_TEX1_1:
    case GS_REG_TEX1_2:
    {
        int ci = (regAddr == GS_REG_TEX1_2) ? 1 : 0;
        m_ctx[ci].tex1 = value;
        ++m_textureStateWrites;
        break;
    }
    case GS_REG_TEX2_1:
    case GS_REG_TEX2_2:
    {
        int ci = (regAddr == GS_REG_TEX2_2) ? 1 : 0;
        auto &t = m_ctx[ci].tex0;
        t.psm = static_cast<uint8_t>((value >> 20) & 0x3F);
        t.cbp = static_cast<uint32_t>((value >> 37) & 0x3FFF);
        t.cpsm = static_cast<uint8_t>((value >> 51) & 0xF);
        t.csm = static_cast<uint8_t>((value >> 55) & 0x1);
        t.csa = static_cast<uint8_t>((value >> 56) & 0x1F);
        t.cld = static_cast<uint8_t>((value >> 61) & 0x7);
        ++m_textureStateWrites;
        m_backend->LoadClut(t, m_texclut);
        break;
    }
    case GS_REG_XYOFFSET_1:
    case GS_REG_XYOFFSET_2:
    {
        int ci = (regAddr == GS_REG_XYOFFSET_2) ? 1 : 0;
        m_ctx[ci].xyoffset.ofx = static_cast<uint16_t>(value & 0xFFFF);
        m_ctx[ci].xyoffset.ofy = static_cast<uint16_t>((value >> 32) & 0xFFFF);
        break;
    }
    case GS_REG_PRMODECONT:
    {
        m_prmodecont = (value & 1) != 0;
        const GSPrimType type = m_primRegister.type;
        m_prim = m_prmodecont ? m_primRegister : m_prmodeRegister;
        m_prim.type = type;
        break;
    }
    case GS_REG_PRMODE:
    {
        m_prmodeRegister = decodePrimRegister(value);
        if (!m_prmodecont)
        {
            const GSPrimType type = m_primRegister.type;
            m_prim = m_prmodeRegister;
            m_prim.type = type;
        }
        break;
    }
    case GS_REG_TEXCLUT:
        m_texclut.cbw = static_cast<uint8_t>(value & 0x3Fu);
        m_texclut.cou = static_cast<uint8_t>((value >> 6) & 0x3Fu);
        m_texclut.cov = static_cast<uint16_t>((value >> 12) & 0x3FFu);
        break;
    case GS_REG_SCISSOR_1:
    case GS_REG_SCISSOR_2:
    {
        int ci = (regAddr == GS_REG_SCISSOR_2) ? 1 : 0;
        m_ctx[ci].scissor.x0 = static_cast<uint16_t>(value & 0x7FF);
        m_ctx[ci].scissor.x1 = static_cast<uint16_t>((value >> 16) & 0x7FF);
        m_ctx[ci].scissor.y0 = static_cast<uint16_t>((value >> 32) & 0x7FF);
        m_ctx[ci].scissor.y1 = static_cast<uint16_t>((value >> 48) & 0x7FF);
        break;
    }
    case GS_REG_ALPHA_1:
    case GS_REG_ALPHA_2:
    {
        int ci = (regAddr == GS_REG_ALPHA_2) ? 1 : 0;
        m_ctx[ci].alpha = value;
        break;
    }
    case GS_REG_TEST_1:
    case GS_REG_TEST_2:
    {
        int ci = (regAddr == GS_REG_TEST_2) ? 1 : 0;
        m_ctx[ci].test = value;
        break;
    }
    case GS_REG_FRAME_1:
    case GS_REG_FRAME_2:
    {
        int ci = (regAddr == GS_REG_FRAME_2) ? 1 : 0;
        m_ctx[ci].frame.fbp = static_cast<uint32_t>(value & 0x1FF);
        m_ctx[ci].frame.fbw = static_cast<uint32_t>((value >> 16) & 0x3F);
        m_ctx[ci].frame.psm = static_cast<uint8_t>((value >> 24) & 0x3F);
        m_ctx[ci].frame.fbmsk = static_cast<uint32_t>((value >> 32) & 0xFFFFFFFF);
        break;
    }
    case GS_REG_ZBUF_1:
    case GS_REG_ZBUF_2:
    {
        int ci = (regAddr == GS_REG_ZBUF_2) ? 1 : 0;
        m_ctx[ci].zbuf.zbp = value & 0x1FF;
        m_ctx[ci].zbuf.psm = ((value >> 24) & 0xF) | 0x30;
        m_ctx[ci].zbuf.zmask = (value >> 32) & 1;
        break;
    }
    case GS_REG_FBA_1:
    case GS_REG_FBA_2:
    {
        int ci = (regAddr == GS_REG_FBA_2) ? 1 : 0;
        m_ctx[ci].fba = value;
        break;
    }
    case GS_REG_BITBLTBUF:
    {
        m_bitbltbuf.sbp = static_cast<uint32_t>(value & 0x3FFF);
        m_bitbltbuf.sbw = static_cast<uint8_t>((value >> 16) & 0x3F);
        m_bitbltbuf.spsm = static_cast<uint8_t>((value >> 24) & 0x3F);
        m_bitbltbuf.dbp = static_cast<uint32_t>((value >> 32) & 0x3FFF);
        m_bitbltbuf.dbw = static_cast<uint8_t>((value >> 48) & 0x3F);
        m_bitbltbuf.dpsm = static_cast<uint8_t>((value >> 56) & 0x3F);
        break;
    }
    case GS_REG_TRXPOS:
    {
        m_trxpos.ssax = static_cast<uint16_t>(value & 0x7FF);
        m_trxpos.ssay = static_cast<uint16_t>((value >> 16) & 0x7FF);
        m_trxpos.dsax = static_cast<uint16_t>((value >> 32) & 0x7FF);
        m_trxpos.dsay = static_cast<uint16_t>((value >> 48) & 0x7FF);
        m_trxpos.dir = static_cast<uint8_t>((value >> 59) & 0x3);
        break;
    }
    case GS_REG_TRXREG:
    {
        m_trxreg.rrw = static_cast<uint16_t>(value & 0xFFF);
        m_trxreg.rrh = static_cast<uint16_t>((value >> 32) & 0xFFF);
        break;
    }
    case GS_REG_TRXDIR:
    {
        m_trxdir = static_cast<uint32_t>(value & 0x3);

        if (m_backend)
        {
            GSTransferCommand command{};
            command.bitbltbuf = m_bitbltbuf;
            command.trxpos = m_trxpos;
            command.trxreg = m_trxreg;
            command.direction = m_trxdir;
            m_backend->BeginTransfer(command);
        }
        recordTransferDebugEventUnlocked();
        break;
    }
    case GS_REG_HWREG:
    {
        uint8_t buf[8];
        std::memcpy(buf, &value, 8);
        processImageData(buf, 8);
        break;
    }
    case GS_REG_PABE:
        m_pabe = (value & 1u) != 0u;
        break;
    case GS_REG_FOGCOL:
        m_fogR = static_cast<uint8_t>(value & 0xFFu);
        m_fogG = static_cast<uint8_t>((value >> 8) & 0xFFu);
        m_fogB = static_cast<uint8_t>((value >> 16) & 0xFFu);
        break;
    case GS_REG_TEXFLUSH:
        if (m_backend)
            m_backend->TextureFlush();
        break;
    case GS_REG_SCANMSK:
        m_scanmsk = value;
        break;
    case GS_REG_DIMX:
        m_dimx = value;
        break;
    case GS_REG_DTHE:
        m_dthe = value;
        break;
    case GS_REG_COLCLAMP:
        m_colclamp = value;
        break;
    case GS_REG_MIPTBP1_1:
    case GS_REG_MIPTBP1_2:
    {
        const int ci = (regAddr == GS_REG_MIPTBP1_2) ? 1 : 0;
        m_ctx[ci].miptbp1 = value;
        ++m_textureStateWrites;
        break;
    }
    case GS_REG_MIPTBP2_1:
    case GS_REG_MIPTBP2_2:
    {
        const int ci = (regAddr == GS_REG_MIPTBP2_2) ? 1 : 0;
        m_ctx[ci].miptbp2 = value;
        ++m_textureStateWrites;
        break;
    }
    case GS_REG_TEXA:
    {
        m_texa.ta0 = static_cast<uint8_t>(value & 0xFFu);
        m_texa.aem = ((value >> 15) & 0x1u) != 0u;
        m_texa.ta1 = static_cast<uint8_t>((value >> 32) & 0xFFu);
        PS2_IF_AGRESSIVE_LOGS({
            const uint32_t texaIndex = s_debugTexaWriteCount.fetch_add(1u, std::memory_order_relaxed);
            if (texaIndex < 24u)
            {
                RUNTIME_LOG("[gs:texa] idx=" << texaIndex
                                             << " value=0x" << std::hex << value
                                             << " ta0=0x" << ((value >> 0) & 0xFFu)
                                             << " aem=" << ((value >> 15) & 0x1u)
                                             << " ta1=0x" << ((value >> 32) & 0xFFu)
                                             << std::dec
                                             << std::endl);
            }
        });
        break;
    }
    case GS_REG_SIGNAL:
    {
        if (hostPresentationMode() == HostPresentationMode::Signal) latchHostPresentationFrame();
        if (m_privRegs)
        {
            uint32_t id = static_cast<uint32_t>(value & 0xFFFFFFFF);
            uint32_t mask = static_cast<uint32_t>(value >> 32);
            uint32_t lo = static_cast<uint32_t>(m_privRegs->siglblid & 0xFFFFFFFF);
            lo = (lo & ~mask) | (id & mask);
            m_privRegs->siglblid = (m_privRegs->siglblid & 0xFFFFFFFF00000000ULL) | lo;
            m_privRegs->csr.fetch_or(0x1);
        }
        break;
    }
    case GS_REG_FINISH:
    {
        if (hostPresentationMode() == HostPresentationMode::Finish) latchHostPresentationFrame();
        if (m_backend)
        {
            m_backend->Flush();
            m_backend->Sync(GSSyncReason::Finish);
        }
        if (m_privRegs)
            m_privRegs->csr.fetch_or(0x2);
        break;
    }
    case GS_REG_LABEL:
    {
        if (m_privRegs)
        {
            uint32_t id = static_cast<uint32_t>(value & 0xFFFFFFFF);
            uint32_t mask = static_cast<uint32_t>(value >> 32);
            uint32_t hi = static_cast<uint32_t>(m_privRegs->siglblid >> 32);
            hi = (hi & ~mask) | (id & mask);
            m_privRegs->siglblid = (static_cast<uint64_t>(hi) << 32) | (m_privRegs->siglblid & 0xFFFFFFFF);
        }
        break;
    }
    case 0x59:
        if (m_privRegs)
            m_privRegs->dispfb1 = value;
        break;
    case 0x5a:
        if (m_privRegs)
            m_privRegs->display1 = value;
        break;
    case 0x5b:
        if (m_privRegs)
            m_privRegs->dispfb2 = value;
        break;
    case 0x5c:
        if (m_privRegs)
            m_privRegs->display2 = value;
        break;
    case 0x5f:
        if (m_privRegs)
            m_privRegs->bgcolor = value;
        break;
    default:
        break;
    }

    if (!m_debugHistoryPaused) // (paused unless a debugger asks: no call per register)
        recordRegisterDebugEventUnlocked(regAddr, value);
}

void GS::vertexKick(bool drawing)
{
    ++m_vtxCount;
    ++m_vtxIndex;

    PS2_IF_AGRESSIVE_LOGS({
        const uint32_t debugIndex = s_debugGsVertexKickCount.fetch_add(1, std::memory_order_relaxed);
        if (debugIndex < 96u)
        {
            RUNTIME_LOG("[gs:kick] idx=" << debugIndex
                                         << " drawing=" << static_cast<uint32_t>(drawing ? 1u : 0u)
                                         << " prim=" << static_cast<uint32_t>(m_prim.type)
                                         << " vtxCount=" << m_vtxCount
                                         << std::endl);
        }
    });

    int needed = 0;
    switch (m_prim.type)
    {
    case GS_PRIM_POINT:
        needed = 1;
        break;
    case GS_PRIM_LINE:
        needed = 2;
        break;
    case GS_PRIM_LINESTRIP:
        needed = 2;
        break;
    case GS_PRIM_TRIANGLE:
        needed = 3;
        break;
    case GS_PRIM_TRISTRIP:
        needed = 3;
        break;
    case GS_PRIM_TRIFAN:
        needed = 3;
        break;
    case GS_PRIM_SPRITE:
        needed = 2;
        break;
    default:
        return;
    }

    if (m_vtxCount < needed)
        return;

    if (drawing && m_backend)
    {
#if defined(PLATFORM_XBOX)
        TS_MEASURE(++g_measure.prims); // a primitive off the native strip / transform paths
        TS_MEASURE(g_measure.primsTextured += m_prim.tme ? 1u : 0u);
#endif
        GSPrimitiveBatch batch = buildDrawBatch(needed);
        adjustWidescreenHud(batch);
        updatePreferredDisplaySourceForDraw(batch);
        m_backend->Submit(batch);
        recordDrawDebugEventUnlocked(needed);
    }

    switch (m_prim.type)
    {
    case GS_PRIM_LINE:
    case GS_PRIM_TRIANGLE:
    case GS_PRIM_SPRITE:
    case GS_PRIM_POINT:
        m_vtxCount = 0;
        break;
    case GS_PRIM_LINESTRIP:
        m_vtxQueue[0] = m_vtxQueue[1];
        m_vtxCount = 1;
        break;
    case GS_PRIM_TRISTRIP:
        m_vtxQueue[0] = m_vtxQueue[1];
        m_vtxQueue[1] = m_vtxQueue[2];
        m_vtxCount = 2;
        break;
    case GS_PRIM_TRIFAN:
        m_vtxQueue[1] = m_vtxQueue[2];
        m_vtxCount = 2;
        break;
    default:
        m_vtxCount = 0;
        break;
    }
}

void GS::submitStrip(uint32_t primRegister, const GSVertex *vertices, uint32_t count)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    writeRegisterUnlocked(GS_REG_PRIM, primRegister & 0x7FFu);
    if (m_backend && count >= 3u)
    {
#if defined(PLATFORM_XBOX)
        // The state by reference (the cached one: no copy per strip).
        if (m_backend->SubmitStrip(drawStateUnlocked(), vertices, count))
#else
        const GSPrimitiveBatch batch = buildDrawBatch(0);
        if (m_backend->SubmitStrip(batch.state, vertices, count))
#endif
        {
            m_vtxCount = 0;
            return;
        }
    }
    for (uint32_t i = 0; i < count; ++i)
    {
        m_vtxQueue[m_vtxCount % kMaxVerts] = vertices[i];
        vertexKick(true);
    }
}

bool GS::beginXfRun(uint32_t primRegister, const GSXfConstants &constants, GSXfCursor &cursor)
{
#if defined(PLATFORM_XBOX)
#if defined(PLATFORM_XBOX) && TS_MEASURE_PUSHBC
    MeasureTimer measureXf(g_measure.gsBeginXfCycles, g_measure.gsBeginXf); // the renderer's BeginXfRun included
#endif
#endif
    // The lock is held until endXfRun (the mutex is recursive; the caller's
    // thread writes the strips in between), as one submit held it before.
    m_stateMutex.lock();
    writeRegisterUnlocked(GS_REG_PRIM, primRegister & 0x7FFu);
#if defined(PLATFORM_XBOX)
    cursor.inPlace = nullptr; // in-place strips are per run (gs_xf_inplace.h)
    cursor.inPlaceTaken = 0u;
#endif
    if (m_backend)
    {
#if defined(PLATFORM_XBOX)
        // The state by reference (the cached one: no copy per run).
        if (m_backend->BeginXfRun(drawStateUnlocked(), constants, cursor))
#else
        const GSPrimitiveBatch batch = buildDrawBatch(0);
        if (m_backend->BeginXfRun(batch.state, constants, cursor))
#endif
        {
            m_vtxCount = 0; // as a PACKED packet with PRE set leaves the vertex queue
            return true;
        }
    }
    m_stateMutex.unlock();
    return false;
}

void GS::endXfRun(GSXfCursor &cursor)
{
    m_backend->EndXfRun(cursor);
    m_stateMutex.unlock();
}

#if defined(PLATFORM_XBOX)
// ---- Push B/C front-end API (gs_frontend.h; src/xbox/PUSH-BC-PLAN.md
// sections 3.2, 3.5 and 5.4).
const GS::Stats &GS::stats()
#else
bool GS::decodeStateBlock(const uint8_t *data, uint32_t sizeBytes, StateBlock &out)
#endif
{
#if defined(PLATFORM_XBOX)
    return s_gsStats;
}

void GS::notePrimNoDraw(uint32_t prim)
{
    (void)prim;
    ++s_gsStats.primsNoDraw;
}

void GS::bumpStateSerial()
{
    if (++m_stateSerialCounter == 0u)
        m_stateSerialCounter = 1u;
    m_stateSerial = m_stateSerialCounter;
    ++s_gsStats.serialBumps;
}

void GS::noteStateWrite(uint8_t regAddr, uint64_t value)
{
    uint64_t &valid = m_rawValid[regAddr >> 6];
    const uint64_t bit = 1ull << (regAddr & 63u);
    if ((valid & bit) != 0u && m_rawReg[regAddr] == value)
        return; // the same value again: the same state
    m_rawReg[regAddr] = value;
    valid |= bit;
    // TEX0 and TEX2 of a context write the same TEX0 fields: after one, the
    // other's last value no longer says what the fields hold.
    switch (regAddr)
    {
    case GS_REG_TEX0_1: m_rawValid[GS_REG_TEX2_1 >> 6] &= ~(1ull << (GS_REG_TEX2_1 & 63u)); break;
    case GS_REG_TEX0_2: m_rawValid[GS_REG_TEX2_2 >> 6] &= ~(1ull << (GS_REG_TEX2_2 & 63u)); break;
    case GS_REG_TEX2_1: m_rawValid[GS_REG_TEX0_1 >> 6] &= ~(1ull << (GS_REG_TEX0_1 & 63u)); break;
    case GS_REG_TEX2_2: m_rawValid[GS_REG_TEX0_2 >> 6] &= ~(1ull << (GS_REG_TEX0_2 & 63u)); break;
    default: break;
    }
    bumpStateSerial();
}

void GS::buildDrawState(GSDrawState &out) const
{
    out.context = m_ctx[m_prim.ctxt ? 1 : 0];
    out.prim = m_prim;
    out.texa = m_texa;
    out.texclut = m_texclut;
    out.pabe = m_pabe;
    out.scanmsk = m_scanmsk;
    out.dimx = m_dimx;
    out.dthe = m_dthe;
    out.colclamp = m_colclamp;
    out.fogR = m_fogR;
    out.fogG = m_fogG;
    out.fogB = m_fogB;
    out.textureWidth = static_cast<uint16_t>(1u << std::min<uint32_t>(out.context.tex0.tw, 10u));
    out.textureHeight = static_cast<uint16_t>(1u << std::min<uint32_t>(out.context.tex0.th, 10u));
    const uint64_t tex1 = out.context.tex1;
    const uint8_t mmag = static_cast<uint8_t>((tex1 >> 5u) & 0x1u);
    const uint8_t mmin = static_cast<uint8_t>((tex1 >> 6u) & 0x7u);
    out.linearFilter = mmag != 0u || mmin == 1u || (mmin & 0x4u) != 0u;
#if TS_GS_DRAWSTATE_CACHE
    out.serial = m_stateSerial;
#else
    out.serial = 0u; // not tracked (the old path)
#endif
}

const GSDrawState &GS::drawState() const
{
    std::lock_guard lock(m_stateMutex);
    return drawStateUnlocked();
}

const GSDrawState &GS::drawStateUnlocked() const
{
#if TS_GS_DRAWSTATE_CACHE
    if (m_drawStateCacheSerial == m_stateSerial)
    {
        ++s_gsStats.drawStateHits;
#if TS_GS_STATE_SELFCHECK
        GSDrawState fresh;
        buildDrawState(fresh);
        ++s_gsStats.stateChecks;
        if (!sameDrawState(fresh, m_drawStateCache))
        {
            if (++s_gsStats.stateDiffs <= 8u)
                std::cout << "[TS:gscheck] drawState " << s_gsStats.stateChecks << ": cached state at serial "
                          << m_stateSerial << " differs from a fresh build (hash " << std::hex
                          << hashDrawState(m_drawStateCache) << " vs " << hashDrawState(fresh) << std::dec << ")"
                          << std::endl;
            m_drawStateCache = fresh; // the fresh one is used
        }
#endif
        return m_drawStateCache;
    }
    ++s_gsStats.drawStateBuilds;
    buildDrawState(m_drawStateCache);
    m_drawStateCacheSerial = m_stateSerial;
    return m_drawStateCache;
#else
    ++s_gsStats.drawStateBuilds;
    buildDrawState(m_drawStateCache);
    return m_drawStateCache;
#endif
}

// ---- Widescreen and display-source tests, pure (adjustWidescreenHud and
// updatePreferredDisplaySourceForDraw keep the decisions; the bulk paths ask
// before they hand primitives on whole).
bool GS::widescreenActive() const
{
    return hostSettings().widescreen && !gsSplitScreen();
}

bool GS::widescreenOverlayState(const GSDrawState &state)
{
    const GSContext &ctx = state.context;
    const uint32_t ztst = static_cast<uint32_t>((ctx.test >> 17) & 3u);
    return ztst == 1u && ctx.zbuf.zmask && !(state.prim.tme && !state.prim.fst);
}

bool GS::displayCopyState(const GSDrawState &state)
{
    const GSContext &ctx = state.context;
    const uint8_t alphaMode = static_cast<uint8_t>(ctx.alpha & 0xFFu);
    const uint8_t alphaFix = static_cast<uint8_t>((ctx.alpha >> 32u) & 0xFFu);
    return state.prim.type == GS_PRIM_SPRITE && state.prim.tme && state.prim.abe && state.prim.fst &&
           state.prim.ctxt && ctx.frame.fbp != ctx.tex0.tbp0 && alphaMode == 0x64u &&
           (alphaFix == 0x60u || alphaFix == 0x80u);
}

bool GS::displayCopySprite(const GSDrawState &state, const GSVertex &v0, const GSVertex &v1)
{
    if (!displayCopyState(state))
#else
    if (!data || sizeBytes < 32u || (sizeBytes & 15u) != 0u)
#endif
        return false;
#if defined(PLATFORM_XBOX)
    const GSContext &ctx = state.context;
    int x0 = static_cast<int>(v0.x) - (ctx.xyoffset.ofx >> 4);
    int y0 = static_cast<int>(v0.y) - (ctx.xyoffset.ofy >> 4);
    int x1 = static_cast<int>(v1.x) - (ctx.xyoffset.ofx >> 4);
    int y1 = static_cast<int>(v1.y) - (ctx.xyoffset.ofy >> 4);
    if (x0 > x1)
        std::swap(x0, x1);
    if (y0 > y1)
        std::swap(y0, y1);
    const int xEnd = x0 + std::max(1, x1 - x0) - 1;
    const int yEnd = y0 + std::max(1, y1 - y0) - 1;
    return x0 <= 0 && y0 <= 0 && xEnd >= 639 && yEnd >= 447;
}

// ---- Primitives handed on whole (submitPrimitives, the GIF bulk path's
// vertex tags). The vertex queue moves exactly as vertexKick moves it; the
// primitives a kick would draw are gathered into a run and given to the
// backend's SubmitPrimitives in one call, or, when it declines, drawn one
// by one as vertexKick draws them.
namespace
{
    constexpr uint32_t kRunVertices = 64u; // per SubmitPrimitives call (strips chunk with an overlap)

    int verticesPerPrimitive(GSPrimType type)
    {
        switch (type)
        {
        case GS_PRIM_POINT: return 1;
        case GS_PRIM_LINE: case GS_PRIM_LINESTRIP: case GS_PRIM_SPRITE: return 2;
        case GS_PRIM_TRIANGLE: case GS_PRIM_TRISTRIP: case GS_PRIM_TRIFAN: return 3;
        default: return 0;
        }
    }
    bool stripType(GSPrimType type) { return type == GS_PRIM_TRISTRIP || type == GS_PRIM_LINESTRIP; }
}

struct GS::PrimitiveRun
{
    GSPrimType type = GS_PRIM_POINT;
    int needed = 0;
    uint32_t prim = 0;  // the PRIM register value handed to the backend
    bool take = false;  // the backend may take runs (else every kick draws at once)
    bool joined = false; // the last kick drew: a strip or fan run goes on from it
    uint32_t count = 0;
    GSVertex vertices[kRunVertices + 2u];

    uint32_t primitives() const
    {
        if (count < static_cast<uint32_t>(needed))
            return 0u;
        if (type == GS_PRIM_TRIFAN)
            return count - 2u;
        if (stripType(type))
            return count - static_cast<uint32_t>(needed - 1);
        return count / static_cast<uint32_t>(needed);
    }
    // The vertices of primitive i, as the queue held them when it drew.
    void primitive(uint32_t i, GSVertex *out) const
    {
        if (type == GS_PRIM_TRIFAN)
        {
            out[0] = vertices[0];
            out[1] = vertices[i + 1u];
            out[2] = vertices[i + 2u];
        }
        else if (stripType(type))
        {
            for (int k = 0; k < needed; ++k)
                out[k] = vertices[i + static_cast<uint32_t>(k)];
        }
        else
        {
            for (int k = 0; k < needed; ++k)
                out[k] = vertices[i * static_cast<uint32_t>(needed) + static_cast<uint32_t>(k)];
        }
    }
};

void GS::flushPrimitiveRun(PrimitiveRun &run)
{
    const uint32_t prims = run.primitives();
    if (prims == 0u)
    {
        run.count = 0;
        return;
    }
    const GSDrawState &state = drawStateUnlocked();
    const int needed = run.needed;
    if (m_backend->SubmitPrimitives(state, run.prim, run.vertices, run.count))
    {
        ++s_gsStats.submitPrimitivesTaken;
        s_gsStats.bulkVertices += run.count;
        // What the kicks' draws would have left: the draw counter (the
        // widescreen gameplay test) and the display-source heuristic's reset.
        // (Overlay states and display copies never come here: takeRun.)
        const uint32_t ztst = static_cast<uint32_t>((state.context.test >> 17) & 3u);
        m_drawCounter += prims;
        if (state.prim.tme && !state.prim.fst && ztst >= 2u)
            m_lastPerspectiveDraw = m_drawCounter;
        if (m_hasPreferredDisplaySource && state.context.frame.fbp == m_preferredDisplayDestFbp)
            m_hasPreferredDisplaySource = false;
    }
    else
    {
        ++s_gsStats.bulkDeclined;
        for (uint32_t i = 0; i < prims; ++i)
        {
            GSPrimitiveBatch batch{};
            batch.vertexCount = static_cast<uint8_t>(std::min(needed, 3));
            GSVertex v[3];
            run.primitive(i, v);
            for (int k = 0; k < batch.vertexCount; ++k)
                batch.vertices[static_cast<size_t>(k)] = v[k];
            batch.state = state;
            adjustWidescreenHud(batch);
            updatePreferredDisplaySourceForDraw(batch);
            m_backend->Submit(batch);
            recordDrawDebugEventUnlocked(needed);
        }
    }
    // A strip or fan longer than one call goes on in the next with its
    // overlap (the last two vertices; a fan's centre and its last).
    if (run.type == GS_PRIM_TRIFAN)
    {
        run.vertices[1] = run.vertices[run.count - 1u];
        run.count = 2u;
    }
    else if (stripType(run.type))
    {
        const uint32_t keep = static_cast<uint32_t>(needed - 1);
        for (uint32_t k = 0; k < keep; ++k)
            run.vertices[k] = run.vertices[run.count - keep + k];
        run.count = keep;
    }
    else
        run.count = 0u;
}

// vertexKick with the draw gathered into the run (run.take) instead of done.
void GS::vertexKickRun(bool drawing, PrimitiveRun &run)
{
    if (!run.take)
    {
        vertexKick(drawing);
        return;
    }
    ++m_vtxCount;
    ++m_vtxIndex;
    const int needed = run.needed;
    if (needed == 0 || m_vtxCount < needed)
        return;
    if (drawing && m_backend)
    {
        TS_MEASURE(++g_measure.prims);
        TS_MEASURE(g_measure.primsTextured += m_prim.tme ? 1u : 0u);
        const bool chained = run.type == GS_PRIM_TRIFAN || stripType(run.type);
        if (chained && run.joined && run.count >= static_cast<uint32_t>(needed - 1))
            run.vertices[run.count++] = m_vtxQueue[needed - 1];
        else
        {
            if (chained || run.count + static_cast<uint32_t>(needed) > kRunVertices)
            {
                flushPrimitiveRun(run);
                run.count = 0u;
            }
            for (int k = 0; k < needed; ++k)
                run.vertices[run.count++] = m_vtxQueue[k];
        }
        run.joined = true;
        if (run.count >= kRunVertices)
            flushPrimitiveRun(run);
    }
    else
    {
        // A kick that does not draw (XYZ3, ADC) breaks a strip or fan run.
        if (run.joined)
            flushPrimitiveRun(run);
        run.count = 0u;
        run.joined = false;
    }
    switch (m_prim.type)
    {
    case GS_PRIM_LINE:
    case GS_PRIM_TRIANGLE:
    case GS_PRIM_SPRITE:
    case GS_PRIM_POINT:
        m_vtxCount = 0;
        break;
    case GS_PRIM_LINESTRIP:
        m_vtxQueue[0] = m_vtxQueue[1];
        m_vtxCount = 1;
        break;
    case GS_PRIM_TRISTRIP:
        m_vtxQueue[0] = m_vtxQueue[1];
        m_vtxQueue[1] = m_vtxQueue[2];
        m_vtxCount = 2;
        break;
    case GS_PRIM_TRIFAN:
        m_vtxQueue[1] = m_vtxQueue[2];
        m_vtxCount = 2;
        break;
    default:
        m_vtxCount = 0;
        break;
    }
}

// Whether a run of the current state may go to the backend whole: it says
// it takes them, and no draw of the state would be narrowed for widescreen,
// be a display copy, or be recorded for a debugger.
bool GS::takeRun() const
{
    if (!m_backend || (m_backend->DrawPaths() & kGSDrawPathSubmitPrimitives) == 0u || !m_debugHistoryPaused)
        return false;
    const GSDrawState &state = drawStateUnlocked();
    if (widescreenActive() && widescreenOverlayState(state))
        return false;
    return !displayCopyState(state);
}

void GS::beginPrimitiveRun(PrimitiveRun &run, uint32_t primRegister) const
{
    run.type = m_prim.type;
    run.needed = verticesPerPrimitive(m_prim.type);
    run.prim = primRegister & 0x7FFu;
    run.count = 0;
    run.joined = false;
    run.take = run.needed != 0 && takeRun();
}

void GS::submitPrimitivesUnlocked(uint32_t primRegister, const GSVertex *vertices, uint32_t count)
{
    writeRegisterUnlocked(GS_REG_PRIM, primRegister & 0x7FFu);
    ++s_gsStats.submitPrimitives;
    if (!m_backend || count == 0u)
        return;
    PrimitiveRun run;
    beginPrimitiveRun(run, primRegister);
    for (uint32_t i = 0; i < count; ++i)
    {
        m_vtxQueue[m_vtxCount % kMaxVerts] = vertices[i];
        vertexKickRun(true, run);
    }
    if (run.take)
        flushPrimitiveRun(run);
    // The colour, texture coordinates and fog a packet of these vertices
    // would have left current.
    const GSVertex &last = vertices[count - 1u];
    m_curR = last.r;
    m_curG = last.g;
    m_curB = last.b;
    m_curA = last.a;
    m_curQ = last.q;
    m_curS = last.s;
    m_curT = last.t;
    m_curU = last.u;
    m_curV = last.v;
    m_curFog = last.fog;
}

void GS::submitPrimitives(uint32_t primRegister, const GSVertex *vertices, uint32_t count)
{
    std::lock_guard lock(m_stateMutex);
    submitPrimitivesUnlocked(primRegister, vertices, count);
}

bool GS::decodePackedVertex(uint8_t regDesc, uint64_t lo, uint64_t hi, GSVertex &out) const
{
    switch (regDesc)
    {
    case 0x04: // XYZF2
    case 0x0C: // XYZF3
        out.x = static_cast<float>(lo & 0xFFFFu) / 16.0f;
        out.y = static_cast<float>((lo >> 32) & 0xFFFFu) / 16.0f;
        out.z = static_cast<float>((hi >> 4) & 0xFFFFFFu);
        out.fog = static_cast<uint8_t>((hi >> 36) & 0xFFu);
        break;
    case 0x05: // XYZ2
    case 0x0D: // XYZ3
        out.x = static_cast<float>(lo & 0xFFFFu) / 16.0f;
        out.y = static_cast<float>((lo >> 32) & 0xFFFFu) / 16.0f;
        out.z = static_cast<float>(hi & 0xFFFFFFFFu);
        out.fog = m_curFog;
        break;
    default:
        return false;
    }
    out.r = m_curR;
    out.g = m_curG;
    out.b = m_curB;
    out.a = m_curA;
    out.q = m_curQ;
    out.s = m_curS;
    out.t = m_curT;
    out.u = m_curU;
    out.v = m_curV;
    return (regDesc == 0x04 || regDesc == 0x05) && ((hi >> 47) & 1u) == 0u;
}

// ---- The GIF bulk path (Tier 0's front half).
namespace
{
    // A PACKED register descriptor a vertex tag may carry for the bulk
    // route: vertex attributes, the vertex registers and NOP (none of them
    // changes drawing state or reaches the backend but by a kick).
    bool bulkVertexDescriptor(uint8_t reg)
    {
        switch (reg)
        {
        case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x0A: case 0x0C: case 0x0D: case 0x0F:
            return true;
        default:
            return false;
        }
    }
}

// The PATH1 stream's fields as the stream leaves them after a whole PACKED
// tag (the next tag sets them again; the self-checks compare them).
void GS::endBulkTag(uint64_t hi, uint32_t nreg, bool wroteRegisters)
{
    GifStreamState &stream = m_gifStreams[0];
    stream.format = GIF_FMT_PACKED;
    stream.nreg = nreg;
    stream.registers = hi;
    stream.regIndex = 0;
    stream.endPadding = 0;
    stream.q = wroteRegisters ? m_curQ : 1.0f;
}

void GS::bulkRegisterTag(uint64_t lo, uint64_t hi, const uint8_t *payload, uint32_t nloop, uint32_t nreg)
{
    if ((lo >> 46) & 1u)
        writeRegisterUnlocked(GS_REG_PRIM, (lo >> 47) & 0x7FFu);
    const uint32_t writes = nloop * nreg;
    if (writes != 0u)
        m_curQ = 1.0f; // each tag's registers start from Q 1.0
    for (uint32_t i = 0, r = 0; i < writes; ++i)
    {
        writeRegisterPacked(static_cast<uint8_t>((hi >> (4u * r)) & 15u), loadLE64(payload + i * 16u),
                            loadLE64(payload + i * 16u + 8u));
        if (++r == nreg)
            r = 0;
    }
    endBulkTag(hi, nreg, writes != 0u);
}

bool GS::bulkVertexTag(uint64_t lo, uint64_t hi, const uint8_t *payload, uint32_t nloop, uint32_t nreg)
{
    if (((lo >> 46) & 1u) == 0u)
        return false; // no PRE: the tag goes on from earlier vertices
    for (uint32_t r = 0; r < nreg; ++r)
        if (!bulkVertexDescriptor(static_cast<uint8_t>((hi >> (4u * r)) & 15u)))
            return false;
    const uint32_t primRegister = static_cast<uint32_t>((lo >> 47) & 0x7FFu);
    writeRegisterUnlocked(GS_REG_PRIM, primRegister);
    const uint32_t writes = nloop * nreg;
    if (writes == 0u)
    {
        endBulkTag(hi, nreg, false);
        return true;
    }
    m_curQ = 1.0f;
    PrimitiveRun run;
    beginPrimitiveRun(run, primRegister);
    for (uint32_t i = 0, r = 0; i < writes; ++i)
    {
        const uint8_t reg = static_cast<uint8_t>((hi >> (4u * r)) & 15u);
        const uint64_t qlo = loadLE64(payload + i * 16u), qhi = loadLE64(payload + i * 16u + 8u);
        if (++r == nreg)
            r = 0;
        if (reg == 0x04 || reg == 0x05 || reg == 0x0C || reg == 0x0D)
        {
            GSVertex &vtx = m_vtxQueue[m_vtxCount % kMaxVerts];
            const bool kick = decodePackedVertex(reg, qlo, qhi, vtx);
            vertexKickRun(kick, run);
        }
        else
            writeRegisterPacked(reg, qlo, qhi);
    }
    if (run.take)
    {
        ++s_gsStats.bulkSubmits;
        flushPrimitiveRun(run);
    }
    endBulkTag(hi, nreg, true);
    return true;
}

void GS::bulkStateTag(const uint8_t *data, uint32_t tagBytes)
{
#endif
    const uint64_t lo = loadLE64(data), hi = loadLE64(data + 8u);
    const uint32_t nloop = static_cast<uint32_t>(lo & 0x7FFFu);
#if defined(PLATFORM_XBOX)
    uint32_t nreg = static_cast<uint32_t>((lo >> 60) & 15u);
    if (nreg == 0u)
        nreg = 16u;
    GSStateBlock block;
    bool textureOnly = false;
    if (!gs_material::decodeStateBlock(data, tagBytes, block, &textureOnly))
#else
    const uint32_t nreg = ((lo >> 60u) & 0xFu) ? static_cast<uint32_t>((lo >> 60u) & 0xFu) : 16u;
    if (((lo >> 58u) & 3u) != GIF_FMT_PACKED || ((lo >> 46u) & 1u) != 0u || nloop == 0u)
        return false;
    for (uint32_t i = 0; i < nreg; ++i)
        if (((hi >> (i * 4u)) & 0xFu) != 0xEu)
            return false;
    const uint32_t writes = nloop * nreg;
    if (writes > StateBlock::kMaxWrites || 16u + writes * 16u != sizeBytes)
        return false;
    out.count = writes;
    out.nloop = nloop;
    out.nreg = nreg;
    out.flushes = false;
    out.idempotent = true;
    uint32_t clutWrites = 0;
    bool textureOnly = true;
    for (uint32_t i = 0; i < writes; ++i)
#endif
    {
#if defined(PLATFORM_XBOX)
        bulkRegisterTag(lo, hi, data + 16u, nloop, nreg);
        return;
#else
        const uint8_t *qword = data + 16u + i * 16u;
        const uint8_t reg = qword[8]; // A+D: the address is the high half's low byte
        if (!isStateRegister(reg))
            return false;
        out.regs[i] = reg;
        out.values[i] = loadLE64(qword);
        if (reg == GS_REG_TEXFLUSH)
            out.flushes = true;
        else if (!isTextureRegister(reg))
            textureOnly = false;
        // Written again, a CLD 1-3 load loads again, and a second CLUT write
        // loads over the first one's CBP.
        if (isClutRegister(reg) && (++clutWrites > 1u || alwaysLoadsClut(out.values[i])))
            out.idempotent = false;
#endif
    }
#if defined(PLATFORM_XBOX)
    block.serial = 0u; // an environment block never repeats
#if TS_GS_MATERIAL_TABLE
    // A texture block is a material: found again by content, its id the
    // serial a repeat is recognised by (the native draw path's ids too).
    if (textureOnly && !m_bulkChecking)
        if (const GSMaterial *m = gsMaterialTable().findBlock(block, true, true))
            block.serial = m->id;
#endif
    applyStateBlockUnlocked(block, false);
    endBulkTag(hi, nreg, true);
}

void GS::bulkPath1Unlocked(const uint8_t *data, uint32_t sizeBytes)
{
    if (!data || sizeBytes == 0u || !m_backend)
        return;
    const GifStreamState &stream = m_gifStreams[0];
    if (stream.remaining || stream.padding || stream.unitBytes)
    {
        // PATH1 inside a tag: the stream goes on with it.
        ++s_gsStats.bulkFallbackPackets;
        processGIFStreamUnlocked(data, sizeBytes, GifPathId::Path1, false);
        return;
    }
    if (tryProcessNativeImageUploadPacket(data, sizeBytes))
        return;
    ++s_gsStats.bulkPackets;
    uint32_t offset = 0;
    while (sizeBytes - offset >= 16u)
    {
        const uint8_t *tag = data + offset;
        const uint64_t lo = loadLE64(tag), hi = loadLE64(tag + 8u);
        if (((lo >> 58) & 3u) != GIF_FMT_PACKED)
            break;
        const uint32_t nloop = static_cast<uint32_t>(lo & 0x7FFFu);
        uint32_t nreg = static_cast<uint32_t>((lo >> 60) & 15u);
        if (nreg == 0u)
            nreg = 16u;
        const uint32_t payload = nloop * nreg * 16u;
        if (payload > sizeBytes - offset - 16u)
            break; // cut by the packet's end: the stream takes it from here
        if (!m_debugHistoryPaused)
            recordGifTagDebugEventUnlocked(sizeBytes, nloop, GIF_FMT_PACKED, nreg);
        ++s_gsStats.bulkTags;
        bool adOnly = ((lo >> 46) & 1u) == 0u;
        for (uint32_t r = 0; adOnly && r < nreg; ++r)
            adOnly = ((hi >> (4u * r)) & 15u) == 0x0Eu;
        if (adOnly && nloop * nreg <= GSStateBlock::kMaxWrites && nloop != 0u)
        {
            ++s_gsStats.bulkStateTags;
            bulkStateTag(tag, 16u + payload);
        }
        else if (bulkVertexTag(lo, hi, tag + 16u, nloop, nreg))
            ++s_gsStats.bulkVertexTags;
        else
            bulkRegisterTag(lo, hi, tag + 16u, nloop, nreg);
        offset += 16u + payload;
    }
    if (offset < sizeBytes)
    {
        ++s_gsStats.bulkFallbackTags;
        processGIFStreamUnlocked(data + offset, sizeBytes - offset, GifPathId::Path1, false);
    }
}

void GS::processPath1Bulk(const uint8_t *data, uint32_t sizeBytes)
{
#if TS_GS_BULK
    std::lock_guard lock(m_stateMutex);
#if defined(PLATFORM_XBOX) && TS_MEASURE_PUSHBC
    MeasureKick measureKick(GifPathId::Path1);
#endif
#if TS_GS_BULK_SELFCHECK
    bulkSelfCheck(data, sizeBytes);
#endif
    bulkPath1Unlocked(data, sizeBytes);
#else
    processGIFPacket(data, sizeBytes, GifPathId::Path1);
#endif
}

#if TS_GS_BULK_SELFCHECK
namespace
{
    // A backend that draws nothing and keeps a hash of every call (the
    // order, the draw states, the vertices), SubmitPrimitives expanded into
    // the per-primitive Submit records it stands for.
    class RecordingBackend final : public GSRasterBackend
    {
    public:
        explicit RecordingBackend(bool takesPrimitives) : m_takes(takesPrimitives) {}
        Fnv hash;
        uint32_t calls = 0;

        uint32_t DrawPaths() const override { return m_takes ? kGSDrawPathSubmitPrimitives : 0u; }
        void Initialize(uint8_t *, uint32_t) override {}
        void Reset() override { note(1); }
        void Submit(const GSPrimitiveBatch &batch) override
        {
            note(2);
            hash.word(hashDrawState(batch.state));
            hash.word(batch.vertexCount);
            for (uint32_t i = 0; i < batch.vertexCount; ++i)
                hashVertex(hash, batch.vertices[i]);
        }
        bool SubmitPrimitives(const GSDrawState &state, uint32_t prim, const GSVertex *v, uint32_t n) override
        {
            if (!m_takes)
                return false;
            const GSPrimType type = static_cast<GSPrimType>(prim & 7u);
            const int needed = verticesPerPrimitive(type);
            if (needed == 0)
                return true;
            const uint32_t per = static_cast<uint32_t>(std::min(needed, 3));
            auto one = [&](const GSVertex &a, const GSVertex &b, const GSVertex &c) {
                note(2);
                hash.word(hashDrawState(state));
                hash.word(per);
                const GSVertex *w[3] = {&a, &b, &c};
                for (uint32_t k = 0; k < per; ++k)
                    hashVertex(hash, *w[k]);
            };
            if (type == GS_PRIM_TRIFAN)
                for (uint32_t i = 2; i < n; ++i)
                    one(v[0], v[i - 1u], v[i]);
            else if (type == GS_PRIM_TRISTRIP)
                for (uint32_t i = 2; i < n; ++i)
                    one(v[i - 2u], v[i - 1u], v[i]);
            else if (type == GS_PRIM_LINESTRIP)
                for (uint32_t i = 1; i < n; ++i)
                    one(v[i - 1u], v[i], v[i]);
            else
                for (uint32_t i = 0; i + static_cast<uint32_t>(needed) <= n; i += static_cast<uint32_t>(needed))
                    one(v[i], v[i + (needed > 1 ? 1u : 0u)], v[i + (needed > 2 ? 2u : 0u)]);
            return true;
        }
        void LoadClut(const GSTex0Reg &t, const GSTexClutReg &c) override
        {
            note(3);
            hash.word(t.tbp0); hash.word(t.psm); hash.word(t.cbp); hash.word(t.cpsm); hash.word(t.csm);
            hash.word(t.csa); hash.word(t.cld);
            hash.word(c.cbw | (c.cou << 8) | (static_cast<uint32_t>(c.cov) << 16));
        }
        void BeginTransfer(const GSTransferCommand &c) override
        {
            note(4);
            hash.word(c.bitbltbuf.dbp); hash.word(c.bitbltbuf.dbw); hash.word(c.bitbltbuf.dpsm);
            hash.word(c.trxpos.dsax | (static_cast<uint32_t>(c.trxpos.dsay) << 16));
            hash.word(c.trxreg.rrw | (static_cast<uint32_t>(c.trxreg.rrh) << 16)); hash.word(c.direction);
        }
        void UploadImage(const uint8_t *data, uint32_t bytes) override
        {
            note(5);
            hash.word(bytes);
            for (uint32_t i = 0; i < bytes; ++i)
                hash.word(data[i]);
        }
        void Flush() override { note(6); }
        void TextureFlush() override { note(7); }
        void Sync(GSSyncReason reason) override { note(8); hash.word(static_cast<uint32_t>(reason)); }
        PresentationFrame Present(const GSPresentationRequest &) override { note(9); return {}; }
        bool ClearFramebuffer(const GSContext &, uint32_t) override { note(10); return false; }
        uint32_t ConsumeLocalToHostBytes(uint8_t *, uint32_t) override { return 0u; }
        uint32_t ReadVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) const override { return 0u; }
        void WriteVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) override { note(11); }
        void SnapshotVram(std::vector<uint8_t> &out) const override { out.clear(); }
        GSTransferSnapshot GetTransferSnapshot() const override { return {}; }

    private:
        void note(uint32_t kind)
        {
            ++calls;
            hash.word(kind);
        }
        bool m_takes;
    };
}

// The front end's own state beyond CheckState that a packet's draws move.
struct GS::BulkCheckExtra
{
    uint64_t hudRunDraw = 0;
    float hudRunY0 = 0.0f, hudRunY1 = 0.0f, hudRunX1 = 0.0f, hudRunAnchor = 0.0f;
    GSFrameReg preferredFrame{};
    uint32_t preferredDestFbp = 0;
    bool hasPreferred = false;
};

bool GS::sameBulkCheckExtra(const BulkCheckExtra &a, const BulkCheckExtra &b)
{
    return a.hudRunDraw == b.hudRunDraw && a.hudRunY0 == b.hudRunY0 && a.hudRunY1 == b.hudRunY1 &&
           a.hudRunX1 == b.hudRunX1 && a.hudRunAnchor == b.hudRunAnchor && a.hasPreferred == b.hasPreferred &&
           (!a.hasPreferred || (a.preferredDestFbp == b.preferredDestFbp && a.preferredFrame.fbp == b.preferredFrame.fbp &&
                                a.preferredFrame.fbw == b.preferredFrame.fbw && a.preferredFrame.psm == b.preferredFrame.psm));
}

void GS::bulkSelfCheck(const uint8_t *data, uint32_t sizeBytes)
{
    static uint32_t s_seen = 0;
    if (m_bulkChecking || m_outerCheck || !m_backend ||
        s_gsStats.bulkChecks >= static_cast<uint32_t>(TS_GS_BULK_SELFCHECK_PACKETS) ||
        (s_seen++ % static_cast<uint32_t>(TS_GS_BULK_SELFCHECK_EVERY)) != 0u)
        return;
    m_bulkChecking = true;
    ++s_gsStats.bulkChecks;
    auto saveExtra = [this](BulkCheckExtra &e) {
        e.hudRunDraw = m_hudRunDraw; e.hudRunY0 = m_hudRunY0; e.hudRunY1 = m_hudRunY1; e.hudRunX1 = m_hudRunX1;
        e.hudRunAnchor = m_hudRunAnchor; e.preferredFrame = m_preferredDisplaySourceFrame;
        e.preferredDestFbp = m_preferredDisplayDestFbp; e.hasPreferred = m_hasPreferredDisplaySource;
    };
    auto restoreExtra = [this](const BulkCheckExtra &e) {
        m_hudRunDraw = e.hudRunDraw; m_hudRunY0 = e.hudRunY0; m_hudRunY1 = e.hudRunY1; m_hudRunX1 = e.hudRunX1;
        m_hudRunAnchor = e.hudRunAnchor; m_preferredDisplaySourceFrame = e.preferredFrame;
        m_preferredDisplayDestFbp = e.preferredDestFbp; m_hasPreferredDisplaySource = e.hasPreferred;
    };
    static CheckState s_start, s_stream, s_bulk; // (fixed storage: the GIF streams' image vectors stay empty for PACKED)
    BulkCheckExtra start, streamExtra, bulkExtra;
    saveCheckState(s_start);
    saveExtra(start);
    std::unique_ptr<GSRasterBackend> real;
    // The per-register stream into one recorder (it declines SubmitPrimitives).
    {
        auto recorder = std::make_unique<RecordingBackend>(false);
        RecordingBackend *rec = recorder.get();
        real = swapBackendForCheck(std::move(recorder));
        processGIFStreamUnlocked(data, sizeBytes, GifPathId::Path1, true);
        saveCheckState(s_stream);
        saveExtra(streamExtra);
        const uint32_t streamHash = rec->hash.h, streamCalls = rec->calls;
        restoreCheckState(s_start);
        restoreExtra(start);
        // The bulk path into another (it takes SubmitPrimitives).
        auto bulkRecorder = std::make_unique<RecordingBackend>(true);
        RecordingBackend *brec = bulkRecorder.get();
        std::unique_ptr<GSRasterBackend> first = swapBackendForCheck(std::move(bulkRecorder));
        bulkPath1Unlocked(data, sizeBytes);
        saveCheckState(s_bulk);
        saveExtra(bulkExtra);
        const uint32_t bulkHash = brec->hash.h, bulkCalls = brec->calls;
        (void)first;
        const char *what = nullptr;
        if (streamHash != bulkHash || streamCalls != bulkCalls)
            what = "backend calls";
        else if (!sameCheckState(s_stream, s_bulk))
            what = "end state";
        else if (!sameBulkCheckExtra(streamExtra, bulkExtra))
            what = "draw bookkeeping";
        if (what && ++s_gsStats.bulkDiffs <= 8u)
            std::cout << "[TS:gscheck] bulk packet " << s_gsStats.bulkChecks << " (" << sizeBytes << " bytes): " << what
                      << " differ (calls " << streamCalls << " vs " << bulkCalls << ")" << std::endl;
    }
    restoreCheckState(s_start);
    restoreExtra(start);
    swapBackendForCheck(std::move(real));
    m_bulkChecking = false;
}
#endif

void GS::saveCheckState(CheckState &out) const
{
    std::lock_guard lock(m_stateMutex);
    out.gifStreams = m_gifStreams;
    out.textureStateWrites = m_textureStateWrites;
    out.lastStateBlock = m_lastStateBlock;
    out.lastStateBlockWrites = m_lastStateBlockWrites;
    out.ctx[0] = m_ctx[0];
    out.ctx[1] = m_ctx[1];
    out.prim = m_prim;
    out.primRegister = m_primRegister;
    out.prmodeRegister = m_prmodeRegister;
    out.curR = m_curR;
    out.curG = m_curG;
    out.curB = m_curB;
    out.curA = m_curA;
    out.curQ = m_curQ;
    out.curS = m_curS;
    out.curT = m_curT;
    out.curU = m_curU;
    out.curV = m_curV;
    out.curFog = m_curFog;
    out.fogR = m_fogR;
    out.fogG = m_fogG;
    out.fogB = m_fogB;
    out.prmodecont = m_prmodecont;
    out.pabe = m_pabe;
    out.scanmsk = m_scanmsk;
    out.dimx = m_dimx;
    out.dthe = m_dthe;
    out.colclamp = m_colclamp;
    out.texa = m_texa;
    out.texclut = m_texclut;
    for (int i = 0; i < kMaxVerts; ++i)
        out.vtxQueue[i] = m_vtxQueue[i];
    out.vtxCount = m_vtxCount;
    out.vtxIndex = m_vtxIndex;
    out.drawCounter = m_drawCounter;
    out.lastPerspectiveDraw = m_lastPerspectiveDraw;
}

void GS::restoreCheckState(const CheckState &state)
{
    std::lock_guard lock(m_stateMutex);
    m_gifStreams = state.gifStreams;
    m_textureStateWrites = state.textureStateWrites;
    m_lastStateBlock = state.lastStateBlock;
    m_lastStateBlockWrites = state.lastStateBlockWrites;
    m_ctx[0] = state.ctx[0];
    m_ctx[1] = state.ctx[1];
    m_prim = state.prim;
    m_primRegister = state.primRegister;
    m_prmodeRegister = state.prmodeRegister;
    m_curR = state.curR;
    m_curG = state.curG;
    m_curB = state.curB;
    m_curA = state.curA;
    m_curQ = state.curQ;
    m_curS = state.curS;
    m_curT = state.curT;
    m_curU = state.curU;
    m_curV = state.curV;
    m_curFog = state.curFog;
    m_fogR = state.fogR;
    m_fogG = state.fogG;
    m_fogB = state.fogB;
    m_prmodecont = state.prmodecont;
    m_pabe = state.pabe;
    m_scanmsk = state.scanmsk;
    m_dimx = state.dimx;
    m_dthe = state.dthe;
    m_colclamp = state.colclamp;
    m_texa = state.texa;
    m_texclut = state.texclut;
    for (int i = 0; i < kMaxVerts; ++i)
        m_vtxQueue[i] = state.vtxQueue[i];
    m_vtxCount = state.vtxCount;
    m_vtxIndex = state.vtxIndex;
    m_drawCounter = state.drawCounter;
    m_lastPerspectiveDraw = state.lastPerspectiveDraw;
    // The shadow no longer says what the registers hold: a new state.
    m_rawValid[0] = m_rawValid[1] = 0u;
    bumpStateSerial();
}

void GS::setOuterCheck(bool on)
{
    std::lock_guard lock(m_stateMutex);
    m_outerCheck = on;
}

std::unique_ptr<GSRasterBackend> GS::swapBackendForCheck(std::unique_ptr<GSRasterBackend> backend)
{
    std::lock_guard lock(m_stateMutex);
    std::lock_guard<std::mutex> backendLock(m_backendLifetimeMutex);
    std::unique_ptr<GSRasterBackend> old = std::move(m_backend);
    m_backend = std::move(backend);
    return old;
}

bool GS::decodeStateBlock(const uint8_t *data, uint32_t sizeBytes, StateBlock &out)
{
    return gs_material::decodeStateBlock(data, sizeBytes, out);
#else
    out.repeatable = out.idempotent && textureOnly;
    return true;
#endif
}

GS::StateBlockResult GS::applyStateBlock(const StateBlock &block)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    const GifStreamState &path1 = m_gifStreams[0];
    if (!m_backend || block.count == 0u || path1.remaining || path1.padding || path1.unitBytes)
        return StateBlockResult::NotApplied;
#if defined(PLATFORM_XBOX)
    return applyStateBlockUnlocked(block, true);
}

// applyStateBlock's body (the PATH1 stream is between tags). recordTag: the
// debugger's tag event is this block's (the bulk path records the packet's).
GS::StateBlockResult GS::applyStateBlockUnlocked(const StateBlock &block, bool recordTag)
{
#endif
    // Each PACKED register write starts from the tag's Q (1.0).
    m_curQ = 1.0f;
#if defined(PLATFORM_XBOX)
    StateBlockResult result = StateBlockResult::Applied;
#endif
    if (block.repeatable && block.serial != 0u && block.serial == m_lastStateBlock &&
#if defined(PLATFORM_XBOX)
        m_textureStateWrites == m_lastStateBlockWrites && m_debugHistoryPaused && !m_bulkChecking)
#else
        m_textureStateWrites == m_lastStateBlockWrites && m_debugHistoryPaused)
#endif
    {
        if (block.flushes)
            m_backend->TextureFlush();
#if defined(PLATFORM_XBOX)
        result = StateBlockResult::Repeated;
        ++s_gsStats.blockRepeats;
#else
        return StateBlockResult::Repeated;
#endif
    }
#if defined(PLATFORM_XBOX)
    else
    {
        if (recordTag && !m_debugHistoryPaused)
            recordGifTagDebugEventUnlocked(16u + block.count * 16u, block.nloop, GIF_FMT_PACKED, block.nreg);
        for (uint32_t i = 0; i < block.count; ++i)
            writeRegisterUnlocked(block.regs[i], block.values[i]);
        m_lastStateBlock = block.serial;
        m_lastStateBlockWrites = m_textureStateWrites;
    }
#if TS_GS_STATE_SELFCHECK
    // One commit in TS_GS_STATE_SELFCHECK_EVERY of an idempotent block: the
    // block processed again as a PATH1 packet must change nothing.
    static uint32_t s_commits = 0;
    if (block.idempotent && !m_bulkChecking && !m_outerCheck &&
        (s_commits++ % static_cast<uint32_t>(TS_GS_STATE_SELFCHECK_EVERY)) == 0u)
    {
        uint8_t bytes[16u + GSStateBlock::kMaxWrites * 16u];
        const uint32_t size = gs_material::encodeStateBlock(block, bytes, sizeof(bytes));
        ++s_gsStats.materialChecks;
        m_bulkChecking = true; // (the packet goes per register, not into these checks again)
        const uint32_t lastBlock = m_lastStateBlock, lastWrites = m_lastStateBlockWrites;
        const GifStreamState path1 = m_gifStreams[0]; // (between tags: no image bytes held)
        const bool same = size != 0u && checkStateBlockUnlocked(bytes, size);
        m_gifStreams[0] = path1;
        m_lastStateBlock = lastBlock;
        m_lastStateBlockWrites = lastWrites;
        m_bulkChecking = false;
        if (!same && ++s_gsStats.materialDiffs <= 8u)
            std::cout << "[TS:gscheck] state block " << block.serial << " ("
                      << (result == StateBlockResult::Repeated ? "repeated" : "applied")
                      << "): processed again as a packet it changed the GS state" << std::endl;
    }
#endif
    return result;
}

GS::StateBlockResult GS::applyMaterial(uint32_t materialId)
{
    std::lock_guard lock(m_stateMutex);
    const GifStreamState &path1 = m_gifStreams[0];
    const GSMaterial *material = gsMaterialTable().entry(materialId);
    if (!material)
    {
        ++s_gsStats.materialMissing;
        return StateBlockResult::NotApplied;
    }
    if (!m_backend || material->block.count == 0u || path1.remaining || path1.padding || path1.unitBytes)
        return StateBlockResult::NotApplied;
    const StateBlockResult result = applyStateBlockUnlocked(material->block, true);
    ++(result == StateBlockResult::Repeated ? s_gsStats.materialRepeated : s_gsStats.materialApplied);
    return result;
#else
    if (!m_debugHistoryPaused)
        recordGifTagDebugEventUnlocked(16u + block.count * 16u, block.nloop, GIF_FMT_PACKED, block.nreg);
    for (uint32_t i = 0; i < block.count; ++i)
        writeRegisterUnlocked(block.regs[i], block.values[i]);
    m_lastStateBlock = block.serial;
    m_lastStateBlockWrites = m_textureStateWrites;
    return StateBlockResult::Applied;
#endif
}

bool GS::checkStateBlock(const uint8_t *data, uint32_t sizeBytes)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
    return checkStateBlockUnlocked(data, sizeBytes);
}

bool GS::checkStateBlockUnlocked(const uint8_t *data, uint32_t sizeBytes)
{
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    if (!m_backend)
        return true;
    const GSContext ctx0 = m_ctx[0], ctx1 = m_ctx[1];
    const GSTexaReg texa = m_texa;
    const GSTexClutReg texclut = m_texclut;
    const uint64_t scanmsk = m_scanmsk, dimx = m_dimx, dthe = m_dthe, colclamp = m_colclamp;
    const bool pabe = m_pabe;
    const uint8_t fog[3] = {m_fogR, m_fogG, m_fogB};
    const float q = m_curQ;
    const uint64_t clut = m_backend->DebugClutState();
    const uint32_t textureWrites = m_textureStateWrites;
#if defined(PLATFORM_XBOX)
    processGIFStreamUnlocked(data, sizeBytes, GifPathId::Path1, true);
#else
    processGIFPacket(data, sizeBytes, GifPathId::Path1);
#endif
    const bool same = sameContext(ctx0, m_ctx[0]) && sameContext(ctx1, m_ctx[1]) && texa.ta0 == m_texa.ta0 &&
                      texa.aem == m_texa.aem && texa.ta1 == m_texa.ta1 && texclut.cbw == m_texclut.cbw &&
                      texclut.cou == m_texclut.cou && texclut.cov == m_texclut.cov && scanmsk == m_scanmsk &&
                      dimx == m_dimx && dthe == m_dthe && colclamp == m_colclamp && pabe == m_pabe &&
                      fog[0] == m_fogR && fog[1] == m_fogG && fog[2] == m_fogB && q == m_curQ &&
                      clut == m_backend->DebugClutState();
    // The same values written again: repeats go on as without the check.
    if (same)
        m_textureStateWrites = textureWrites;
    return same;
}

void GS::processImageData(const uint8_t *data, uint32_t sizeBytes)
{
    if (m_backend)
        m_backend->UploadImage(data, sizeBytes);
}


bool GS::clearFramebufferContext(uint32_t contextIndex, uint32_t rgba)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    return m_backend && m_backend->ClearFramebuffer(m_ctx[(contextIndex != 0u) ? 1 : 0], rgba);
}

bool GS::clearActiveFramebuffer(uint32_t rgba)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    return m_backend && m_backend->ClearFramebuffer(activeContext(), rgba);
}

uint32_t GS::consumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    return m_backend ? m_backend->ConsumeLocalToHostBytes(dst, maxBytes) : 0u;
}

void GS::setRasterBackend(std::unique_ptr<GSRasterBackend> backend)
{
    if (!backend)
        backend = std::make_unique<GSCpuBackend>();

#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    std::lock_guard<std::mutex> backendLock(m_backendLifetimeMutex);
    if (m_backend)
    {
        m_backend->Flush();
        m_backend->Sync(GSSyncReason::Reset);

        // The external 4 MiB GS allocation is the backend hand-off format.
        // This keeps hot backend replacement deterministic even when a future
        // GPU backend keeps a private/mirrored local-memory representation.
        if (m_localMemoryStorage && m_localMemorySize != 0u)
        {
            std::vector<uint8_t> localMemory;
            m_backend->SnapshotVram(localMemory);
            const size_t bytes = std::min<size_t>(localMemory.size(), m_localMemorySize);
            if (bytes != 0u)
                std::memcpy(m_localMemoryStorage, localMemory.data(), bytes);
        }
    }

    m_backend = std::move(backend);
    m_backend->Initialize(m_localMemoryStorage, m_localMemorySize);
    m_lastStateBlock = 0; // a new CLUT
#if defined(PLATFORM_XBOX)
    bumpStateSerial();    // what a backend keeps by serial is the old one's
#endif
}

uint32_t GS::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    return m_backend ? m_backend->ReadVram(psm, base, bw, x, y) : 0u;
}

void GS::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
#if defined(PLATFORM_XBOX)
    std::lock_guard lock(m_stateMutex);
#else
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
#endif
    if (m_backend)
        m_backend->WriteVram(psm, base, bw, x, y, value);
}

// Widescreen (timesplitters.ini): the 3D view is widened and the frame shown
// at 16:9, which would stretch 2D overlays sideways. During gameplay (a
// perspective-textured, depth-tested draw was seen recently), overlay
// primitives - no depth test or write, flat or pixel-addressed texture,
// entirely on screen - are narrowed back to their 4:3 width, pinned to the
// left margin, the right margin or the centre by where they sit.
// Not on a split screen (gsSplitScreen, runtime/gs/gs_backend.h): widescreen
// is off then, and the anchors are one full-screen view's edges.
namespace
{
    std::atomic<bool> s_splitScreen{false};
}
void gsSetSplitScreen(bool split) { s_splitScreen.store(split, std::memory_order_relaxed); }
bool gsSplitScreen() { return s_splitScreen.load(std::memory_order_relaxed); }

void GS::adjustWidescreenHud(GSPrimitiveBatch &batch)
{
    const GSDrawState &state = batch.state;
    const GSContext &ctx = state.context;
    const uint32_t ztst = static_cast<uint32_t>((ctx.test >> 17) & 3u);
    ++m_drawCounter;
    if (state.prim.tme && !state.prim.fst && ztst >= 2u)
        m_lastPerspectiveDraw = m_drawCounter;
    // m_lastPerspectiveDraw stays 0 until the first 3D draw: nothing before it is gameplay.
    if (!hostSettings().widescreen || gsSplitScreen() || m_lastPerspectiveDraw == 0u ||
        m_drawCounter - m_lastPerspectiveDraw > 20000u)
        return;
    if (ztst != 1u || !ctx.zbuf.zmask || (state.prim.tme && !state.prim.fst) || batch.vertexCount == 0u)
        return;
    const float ofx = static_cast<float>(ctx.xyoffset.ofx >> 4);
    const float ofy = static_cast<float>(ctx.xyoffset.ofy >> 4);
    const float width = static_cast<float>(std::max<uint32_t>(ctx.frame.fbw, 1u) * 64u);
    const float height = static_cast<float>(std::max(ctx.scissor.y0, ctx.scissor.y1) + 1);
    float x0 = 1e9f, x1 = -1e9f, y0 = 1e9f, y1 = -1e9f;
    for (uint32_t i = 0; i < batch.vertexCount; ++i)
    {
        const float x = batch.vertices[i].x - ofx, y = batch.vertices[i].y - ofy;
        x0 = std::min(x0, x);
        x1 = std::max(x1, x);
        y0 = std::min(y0, y);
        y1 = std::max(y1, y);
    }
    if (x0 < 0.0f || x1 > width || y0 < 0.0f || y1 > height)
        return; // full-screen effects reach past the edges
    // Text is drawn a glyph at a time. A primitive that continues the row the
    // previous overlay draw started (same line, just to its right) shares that
    // row's anchor; otherwise it starts a new row, pinned to a margin only when
    // it sits near that edge.
    const float rowHeight = std::max(y1 - y0, 1.0f);
    const bool continuesRow = m_hudRunDraw + 1u == m_drawCounter &&
                              std::fabs(y0 - m_hudRunY0) <= 2.0f && std::fabs(y1 - m_hudRunY1) <= 2.0f &&
                              x0 >= m_hudRunX1 - 2.0f && x0 - m_hudRunX1 <= rowHeight * 2.0f;
    float anchor;
    if (continuesRow)
        anchor = m_hudRunAnchor;
    else
    {
        anchor = x0 < width * 0.22f ? 0.0f : x1 > width * 0.78f ? width : width * 0.5f;
        m_hudRunY0 = y0;
        m_hudRunY1 = y1;
        m_hudRunAnchor = anchor;
    }
    m_hudRunDraw = m_drawCounter;
    m_hudRunX1 = x1;
    constexpr float kNarrow = 3.0f / 4.0f;
    for (uint32_t i = 0; i < batch.vertexCount; ++i)
    {
        const float x = batch.vertices[i].x - ofx;
        batch.vertices[i].x = anchor + (x - anchor) * kNarrow + ofx;
    }
}

GSPrimitiveBatch GS::buildDrawBatch(int vertexCount) const
{
    GSPrimitiveBatch batch{};
    batch.vertexCount = static_cast<uint8_t>(std::min(vertexCount, 3));
    for (int i = 0; i < batch.vertexCount; ++i)
        batch.vertices[static_cast<size_t>(i)] = m_vtxQueue[i];
#if defined(PLATFORM_XBOX)
    batch.state = drawStateUnlocked();
#else
    batch.state.context = m_ctx[m_prim.ctxt ? 1 : 0];
    batch.state.prim = m_prim;
    batch.state.texa = m_texa;
    batch.state.texclut = m_texclut;
    batch.state.pabe = m_pabe;
    batch.state.scanmsk = m_scanmsk;
    batch.state.dimx = m_dimx;
    batch.state.dthe = m_dthe;
    batch.state.colclamp = m_colclamp;
    batch.state.fogR = m_fogR;
    batch.state.fogG = m_fogG;
    batch.state.fogB = m_fogB;
    batch.state.textureWidth = static_cast<uint16_t>(1u << std::min<uint32_t>(batch.state.context.tex0.tw, 10u));
    batch.state.textureHeight = static_cast<uint16_t>(1u << std::min<uint32_t>(batch.state.context.tex0.th, 10u));
    const uint64_t tex1 = batch.state.context.tex1;
    const uint8_t mmag = static_cast<uint8_t>((tex1 >> 5u) & 0x1u);
    const uint8_t mmin = static_cast<uint8_t>((tex1 >> 6u) & 0x7u);
    batch.state.linearFilter = mmag != 0u || mmin == 1u || (mmin & 0x4u) != 0u;
#endif
    return batch;
}

void GS::updatePreferredDisplaySourceForDraw(const GSPrimitiveBatch &batch)
{
    const GSDrawState &state = batch.state;
    const GSContext &ctx = state.context;
    if (m_hasPreferredDisplaySource && ctx.frame.fbp == m_preferredDisplayDestFbp)
        m_hasPreferredDisplaySource = false;
    if (state.prim.type != GS_PRIM_SPRITE || batch.vertexCount < 2u)
        return;
#if defined(PLATFORM_XBOX)
    if (displayCopySprite(state, batch.vertices[0], batch.vertices[1]))
#else

    const GSVertex &v0 = batch.vertices[0];
    const GSVertex &v1 = batch.vertices[1];
    int x0 = static_cast<int>(v0.x) - (ctx.xyoffset.ofx >> 4);
    int y0 = static_cast<int>(v0.y) - (ctx.xyoffset.ofy >> 4);
    int x1 = static_cast<int>(v1.x) - (ctx.xyoffset.ofx >> 4);
    int y1 = static_cast<int>(v1.y) - (ctx.xyoffset.ofy >> 4);
    if (x0 > x1) std::swap(x0, x1);
    if (y0 > y1) std::swap(y0, y1);
    const int xEnd = x0 + std::max(1, x1 - x0) - 1;
    const int yEnd = y0 + std::max(1, y1 - y0) - 1;
    const uint8_t alphaMode = static_cast<uint8_t>(ctx.alpha & 0xFFu);
    const uint8_t alphaFix = static_cast<uint8_t>((ctx.alpha >> 32u) & 0xFFu);
    const bool displayCopy = state.prim.tme && state.prim.abe && state.prim.fst && state.prim.ctxt &&
                             ctx.frame.fbp != ctx.tex0.tbp0 && alphaMode == 0x64u &&
                             (alphaFix == 0x60u || alphaFix == 0x80u) &&
                             x0 <= 0 && y0 <= 0 && xEnd >= 639 && yEnd >= 447;
    if (displayCopy)
#endif
    {
        m_preferredDisplaySourceFrame = {ctx.tex0.tbp0, ctx.tex0.tbw, ctx.tex0.psm, 0u};
        m_preferredDisplayDestFbp = ctx.frame.fbp;
        m_hasPreferredDisplaySource = true;
    }
}

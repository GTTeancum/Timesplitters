#pragma once
// Xbox-only direct GIF decoder (TS_GIF_DIRECT=1). GIF packets - sprites,
// triangles, strips and fans with RGBAQ/ST/UV/FOG (HUD, text, fills,
// particles, decals), the state writes between them, IMAGE uploads - go
// from the packet to the renderer without the GS front end's per-register
// calls, per-vertex kicks and per-primitive batches. The primitives of one draw state go to the Xbox
// renderer as one run (xboxNv2aSubmitRun, gs_nv2a_backend.cpp): one frame,
// texture and material lookup and one vertex reservation per run instead of
// per primitive.
//
// The decoder works on the GS's own state, lent by the two patched GS
// methods (tools/patch_gif_direct.py expands XBOX_GIF_DIRECT_GS_ACCESS
// inside them: a local class has its method's access, so the shared header
// stays as it is). It leaves that state as processGIFPacket would: the same
// colour/ST/UV/Q/fog, PRIM, vertex queue, draw counters and display-copy
// source, the same register writes, uploads and draws in the same order,
// and the path's GIF stream (a tag, qword or IMAGE transfer a packet ends
// inside goes on in the next packet of that path, as in the GS's stream).
// Registers without a decode here (CLUT loads, TEXFLUSH, FRAME/ZBUF,
// BITBLTBUF/TRXPOS/TRXREG/TRXDIR, HWREG, SIGNAL/FINISH/LABEL, privileged,
// unknown) end the open run and go to GS::writeRegisterUnlocked in order;
// IMAGE data ends it and goes to the renderer's upload as one piece. The
// original route remains only for a running GS debug history (it records
// every tag, register and draw), a second GS using the run buffer at the
// same time, and, on the native PACKED entry, the packets that method
// itself declines (REGLIST, IMAGE, ending inside a tag).
//
// Not done: a cache of decoded packets by content. Decoding a qword here
// costs about what hashing and comparing it would, and a cached decode is
// exact only while the colour/ST/UV/fog, PRIM and state registers the
// packet inherits are the same too; the per-primitive work saved by runs
// is in the renderer, not in the decode.
#include "runtime/gs/gs_backend.h"
#include "runtime/ps2_host_settings.h"

#include <atomic>
#include <cstdint>
#include <cstring>

#ifndef TS_GIF_DIRECT
#define TS_GIF_DIRECT 0
#endif

// The Xbox renderer's run entry: prims primitives of `per` vertices each
// (1 point, 2 line or sprite, 3 triangle, as GS::vertexKick hands them
// over), all of one draw state, drawn as that many Submit calls would draw
// them. False when backend is not the Xbox renderer (the caller submits
// them one by one).
bool xboxNv2aSubmitRun(GSRasterBackend *backend, const GSDrawState &state, const GSVertex *vertices,
                       uint32_t per, uint32_t prims);

// Counters for the status line (xbox_main.cpp), written under the GS lock.
struct XboxGifDirectStats
{
    enum Decline : uint8_t { None, Format, Partial, Debug, Busy, kDeclines };
    uint32_t packets = 0, runs = 0, gpuRuns = 0, prims = 0;
    uint32_t writes = 0, skipped = 0; // register writes passed to the GS, equal ones skipped
    uint32_t images = 0, carried = 0; // IMAGE uploads; packets ending inside a tag or qword
    uint32_t declined[kDeclines] = {};
    uint32_t deferred = 0; // stores applied inside an open run (deferStores: TS_NATIVE_2D's token packets)
};
extern XboxGifDirectStats g_xboxGifDirectStats;

namespace xbox_gif_direct
{
    constexpr uint32_t kRunPrims = 128u; // a longer run goes on as the next one
    // The decoded run waiting for the renderer (one GS at a time: lease).
    struct Scratch
    {
        GSVertex vertices[kRunPrims * 3u];
        std::atomic_flag busy = ATOMIC_FLAG_INIT;
    };
    Scratch &scratch();

    inline uint64_t load64(const uint8_t *p)
    {
        uint64_t v;
        std::memcpy(&v, p, sizeof(v));
        return v;
    }

    inline float bitsToFloat(uint32_t bits)
    {
        float f;
        std::memcpy(&f, &bits, sizeof(f));
        return f;
    }

    // A register written by address (A+D, REGLIST, a PACKED descriptor that
    // writes its register as it is): Native, decoded here; Store, a plain
    // value the draw state holds (an equal write is skipped); Nop, nothing
    // in the GS; Call, everything else, passed to GS::writeRegisterUnlocked
    // after the open run (CLUT loads, texture flushes, FRAME/ZBUF, transfers,
    // HWREG, SIGNAL/FINISH/LABEL, privileged and unknown registers).
    enum Kind : uint8_t { Call, Nop, Native, Store };
    inline Kind kindOf(uint32_t reg)
    {
        switch (reg)
        {
        case GS_REG_PRIM: case GS_REG_RGBAQ: case GS_REG_ST: case GS_REG_UV: case GS_REG_XYZF2: case GS_REG_XYZ2:
        case GS_REG_FOG: case GS_REG_XYZF3: case GS_REG_XYZ3:
            return Native;
        case 0x0Bu: case 0x0Eu: case 0x0Fu:
            return Nop;
        case GS_REG_ALPHA_1: case GS_REG_ALPHA_2: case GS_REG_TEST_1: case GS_REG_TEST_2: case GS_REG_FBA_1:
        case GS_REG_FBA_2: case GS_REG_PABE: case GS_REG_DIMX: case GS_REG_DTHE: case GS_REG_COLCLAMP:
        case GS_REG_SCANMSK:
            return Store;
        default:
            return Call;
        }
    }

    // GS::writeRegisterUnlocked's decode of PRIM/PRMODE.
    inline GSPrimReg decodePrim(uint64_t value)
    {
        GSPrimReg p{};
        p.type = static_cast<GSPrimType>(value & 7u);
        p.iip = ((value >> 3) & 1u) != 0u;
        p.tme = ((value >> 4) & 1u) != 0u;
        p.fge = ((value >> 5) & 1u) != 0u;
        p.abe = ((value >> 6) & 1u) != 0u;
        p.aa1 = ((value >> 7) & 1u) != 0u;
        p.fst = ((value >> 8) & 1u) != 0u;
        p.ctxt = ((value >> 9) & 1u) != 0u;
        p.fix = ((value >> 10) & 1u) != 0u;
        return p;
    }

    inline bool samePrim(const GSPrimReg &a, const GSPrimReg &b)
    {
        return a.type == b.type && a.iip == b.iip && a.tme == b.tme && a.fge == b.fge && a.abe == b.abe &&
               a.aa1 == b.aa1 && a.fst == b.fst && a.ctxt == b.ctxt && a.fix == b.fix;
    }

    template <class Gs>
    bool sameStore(Gs &a, uint32_t reg, uint64_t v)
    {
        switch (reg)
        {
        case GS_REG_ALPHA_1: case GS_REG_ALPHA_2: return a.ctx()[reg - GS_REG_ALPHA_1].alpha == v;
        case GS_REG_TEST_1: case GS_REG_TEST_2: return a.ctx()[reg - GS_REG_TEST_1].test == v;
        case GS_REG_FBA_1: case GS_REG_FBA_2: return a.ctx()[reg - GS_REG_FBA_1].fba == v;
        case GS_REG_PABE: return a.pabe() == ((v & 1u) != 0u);
        case GS_REG_DIMX: return a.dimx() == v;
        case GS_REG_DTHE: return a.dthe() == v;
        case GS_REG_COLCLAMP: return a.colclamp() == v;
        case GS_REG_SCANMSK: return a.scanmsk() == v;
        default: return false;
        }
    }

    // The native PACKED entry (GS::processNativePackedGIFPacket) takes only
    // complete PACKED packets; it declines the others itself. Read before
    // any effect.
    inline XboxGifDirectStats::Decline admitPacked(const uint8_t *data, uint32_t size)
    {
        uint32_t at = 0;
        while (at < size)
        {
            if (size - at < 16u)
                return XboxGifDirectStats::Partial;
            const uint64_t lo = load64(data + at);
            at += 16u;
            if (((lo >> 58) & 3u) != GIF_FMT_PACKED)
                return XboxGifDirectStats::Format;
            const uint32_t nreg = (uint32_t(lo >> 60) & 15u) ? uint32_t(lo >> 60) & 15u : 16u;
            const uint32_t words = (uint32_t(lo) & 0x7FFFu) * nreg; // at most 32767 * 16
            if (words > (size - at) / 16u)
                return XboxGifDirectStats::Partial;
            at += words * 16u;
        }
        return XboxGifDirectStats::None;
    }

    // Registers whose GS write (GS::writeRegisterUnlocked) only stores the
    // value in the draw state: with deferStores (TS_NATIVE_2D's token
    // packets), a changed one is applied without ending the open run, and the
    // run ends at its next draw only if the draw state differs from the run's.
    inline bool deferrable(uint32_t reg)
    {
        switch (reg)
        {
        case GS_REG_ZBUF_1: case GS_REG_ZBUF_2: case GS_REG_SCISSOR_1: case GS_REG_SCISSOR_2:
        case GS_REG_TEST_1: case GS_REG_TEST_2: case GS_REG_ALPHA_1: case GS_REG_ALPHA_2: case GS_REG_FBA_1:
        case GS_REG_FBA_2: case GS_REG_PABE: case GS_REG_DIMX: case GS_REG_DTHE: case GS_REG_COLCLAMP:
        case GS_REG_SCANMSK:
            return true;
        default:
            return false;
        }
    }

    // The value the GS holds for a deferrable register is `v` already.
    template <class Gs>
    bool sameDeferrable(Gs &a, uint32_t reg, uint64_t v)
    {
        switch (reg)
        {
        case GS_REG_ZBUF_1: case GS_REG_ZBUF_2:
        {
            const GSZbufReg &z = a.ctx()[reg - GS_REG_ZBUF_1].zbuf;
            return z.zbp == (v & 0x1FFu) && z.psm == (((v >> 24) & 0xFu) | 0x30u) && z.zmask == ((v >> 32) & 1u);
        }
        case GS_REG_SCISSOR_1: case GS_REG_SCISSOR_2:
        {
            const GSScissorReg &s = a.ctx()[reg - GS_REG_SCISSOR_1].scissor;
            return s.x0 == (v & 0x7FFu) && s.x1 == ((v >> 16) & 0x7FFu) && s.y0 == ((v >> 32) & 0x7FFu) &&
                   s.y1 == ((v >> 48) & 0x7FFu);
        }
        default:
            return sameStore(a, reg, v);
        }
    }

    template <class Gs>
    struct Decoder
    {
        Gs &a;
        GSVertex *run; // the open run's primitives (scratch)
        GSDrawState state{};
        uint32_t per = 0, prims = 0;
        bool wide = false;
        bool defer = false;   // deferStores (see deferrable)
        bool pending = false; // a deferred store changed the GS since the run's last primitive

        // The open run's draw state is still the GS's: only deferrable
        // registers can have changed since its last primitive.
        bool sameRunState()
        {
            const GSContext &now = a.ctx()[state.prim.ctxt ? 1 : 0];
            const GSContext &was = state.context;
            return now.zbuf.zbp == was.zbuf.zbp && now.zbuf.psm == was.zbuf.psm && now.zbuf.zmask == was.zbuf.zmask &&
                   now.scissor.x0 == was.scissor.x0 && now.scissor.x1 == was.scissor.x1 &&
                   now.scissor.y0 == was.scissor.y0 && now.scissor.y1 == was.scissor.y1 && now.test == was.test &&
                   now.alpha == was.alpha && now.fba == was.fba && a.pabe() == state.pabe &&
                   a.dimx() == state.dimx && a.dthe() == state.dthe && a.colclamp() == state.colclamp &&
                   a.scanmsk() == state.scanmsk;
        }

        // The open run to the renderer: what vertexKick does for each
        // drawing kick after building its batch (widescreen HUD narrowing,
        // the display-copy source), then the primitives in order.
        void flush()
        {
            if (!prims)
                return;
            const GSContext &ctx = state.context;
            const bool perspective = state.prim.tme && !state.prim.fst && ((ctx.test >> 17) & 3u) >= 2u;
            GSPrimitiveBatch batch{}; // vertices past `per` stay as buildDrawBatch leaves them
            if (wide)
            {
                batch.state = state;
                batch.vertexCount = uint8_t(per);
                for (uint32_t p = 0; p < prims; ++p)
                {
                    GSVertex *v = run + p * per;
                    for (uint32_t i = 0; i < per; ++i)
                        batch.vertices[i] = v[i];
                    a.hud(batch);
                    for (uint32_t i = 0; i < per; ++i)
                        v[i] = batch.vertices[i];
                }
            }
            else
            {
                // GS::adjustWidescreenHud with widescreen off: its counters only.
                a.drawCounter() += prims;
                if (perspective)
                    a.lastPerspectiveDraw() = a.drawCounter();
            }
            // GS::updatePreferredDisplaySourceForDraw, per primitive.
            const uint32_t alphaFix = uint32_t(ctx.alpha >> 32) & 0xFFu;
            const bool copy = state.prim.type == GS_PRIM_SPRITE && state.prim.tme && state.prim.abe &&
                              state.prim.fst && state.prim.ctxt && ctx.frame.fbp != ctx.tex0.tbp0 &&
                              (ctx.alpha & 0xFFu) == 0x64u && (alphaFix == 0x60u || alphaFix == 0x80u);
            if (!copy)
            {
                if (a.hasPreferred() && ctx.frame.fbp == a.preferredDest())
                    a.hasPreferred() = false;
            }
            else
                for (uint32_t p = 0; p < prims; ++p)
                {
                    if (a.hasPreferred() && ctx.frame.fbp == a.preferredDest())
                        a.hasPreferred() = false;
                    const GSVertex &v0 = run[p * 2u], &v1 = run[p * 2u + 1u];
                    int x0 = int(v0.x) - (ctx.xyoffset.ofx >> 4), y0 = int(v0.y) - (ctx.xyoffset.ofy >> 4);
                    int x1 = int(v1.x) - (ctx.xyoffset.ofx >> 4), y1 = int(v1.y) - (ctx.xyoffset.ofy >> 4);
                    if (x0 > x1) { const int t = x0; x0 = x1; x1 = t; }
                    if (y0 > y1) { const int t = y0; y0 = y1; y1 = t; }
                    const int xEnd = x0 + (x1 - x0 > 1 ? x1 - x0 : 1) - 1;
                    const int yEnd = y0 + (y1 - y0 > 1 ? y1 - y0 : 1) - 1;
                    if (x0 <= 0 && y0 <= 0 && xEnd >= 639 && yEnd >= 447)
                    {
                        a.preferredFrame() = {ctx.tex0.tbp0, ctx.tex0.tbw, ctx.tex0.psm, 0u};
                        a.preferredDest() = ctx.frame.fbp;
                        a.hasPreferred() = true;
                    }
                }
            ++g_xboxGifDirectStats.runs;
            g_xboxGifDirectStats.prims += prims;
            if (xboxNv2aSubmitRun(a.backend(), state, run, per, prims))
                ++g_xboxGifDirectStats.gpuRuns;
            else
            {
                batch.state = state;
                batch.vertexCount = uint8_t(per);
                for (uint32_t p = 0; p < prims; ++p)
                {
                    for (uint32_t i = 0; i < per; ++i)
                        batch.vertices[i] = run[p * per + i];
                    a.backend()->Submit(batch);
                }
            }
            prims = 0;
        }

        // GS::vertexKick for the vertex just written at the queue's end.
        void kick(bool drawing)
        {
            static constexpr uint8_t kNeeded[8] = {1, 2, 2, 3, 3, 3, 2, 0};
            int &count = a.count();
            ++count;
            ++a.index();
            const GSPrimType type = a.prim().type;
            const int needed = kNeeded[type & 7u];
            if (!needed || count < needed)
                return;
            if (drawing)
            {
                if (pending)
                {
                    if (prims && !sameRunState())
                        flush();
                    pending = false;
                }
                if (prims && uint32_t(needed) != per)
                    flush();
                if (!prims)
                {
                    state = a.state();
                    per = uint32_t(needed);
                }
                GSVertex *out = run + prims * per;
                const GSVertex *queue = a.queue();
                for (int i = 0; i < needed; ++i)
                    out[i] = queue[i];
                if (++prims == kRunPrims)
                    flush();
            }
            GSVertex *queue = a.queue();
            switch (type)
            {
            case GS_PRIM_LINESTRIP:
                queue[0] = queue[1];
                count = 1;
                break;
            case GS_PRIM_TRISTRIP:
                queue[0] = queue[1];
                queue[1] = queue[2];
                count = 2;
                break;
            case GS_PRIM_TRIFAN:
                queue[1] = queue[2];
                count = 2;
                break;
            default:
                count = 0;
                break;
            }
        }

        GSVertex &slot() { return a.queue()[a.count() % a.queueSize()]; }

        void attributes(GSVertex &v)
        {
            v.r = a.r();
            v.g = a.g();
            v.b = a.b();
            v.a = a.a();
            v.q = a.q();
            v.s = a.s();
            v.t = a.t();
            v.u = a.u();
            v.v = a.v();
        }

        void prim(uint64_t value)
        {
            const GSPrimReg p = decodePrim(value);
            GSPrimReg next = a.prmodecont() ? p : a.prim();
            next.type = p.type;
            if (prims && !samePrim(next, a.prim()))
                flush();
            a.primRegister() = p;
            a.prim() = next;
            a.count() = 0;
            a.index() = 0;
        }

        // A register-format write by address (GS::writeRegisterUnlocked).
        void write(uint32_t reg, uint64_t v)
        {
            switch (reg)
            {
            case GS_REG_PRIM:
                prim(v);
                return;
            case GS_REG_RGBAQ:
            {
                a.r() = uint8_t(v);
                a.g() = uint8_t(v >> 8);
                a.b() = uint8_t(v >> 16);
                a.a() = uint8_t(v >> 24);
                const float q = bitsToFloat(uint32_t(v >> 32));
                a.q() = q == 0.0f ? 1.0f : q;
                return;
            }
            case GS_REG_ST:
                a.s() = bitsToFloat(uint32_t(v));
                a.t() = bitsToFloat(uint32_t(v >> 32));
                return;
            case GS_REG_UV:
                a.u() = uint16_t(v & 0x3FFFu);
                a.v() = uint16_t((v >> 16) & 0x3FFFu);
                return;
            case GS_REG_XYZF2:
            case GS_REG_XYZF3:
            {
                GSVertex &vtx = slot();
                vtx.x = float(v & 0xFFFFu) / 16.0f;
                vtx.y = float((v >> 16) & 0xFFFFu) / 16.0f;
                vtx.z = double((v >> 32) & 0xFFFFFFu);
                vtx.fog = uint8_t(v >> 56);
                attributes(vtx);
                kick(reg == GS_REG_XYZF2);
                return;
            }
            case GS_REG_XYZ2:
            case GS_REG_XYZ3:
            {
                GSVertex &vtx = slot();
                vtx.x = float(v & 0xFFFFu) / 16.0f;
                vtx.y = float((v >> 16) & 0xFFFFu) / 16.0f;
                vtx.z = double(v >> 32);
                vtx.fog = a.fog();
                attributes(vtx);
                kick(reg == GS_REG_XYZ2);
                return;
            }
            case GS_REG_FOG:
                a.fog() = uint8_t(v >> 56);
                return;
            default:
                break;
            }
            if (defer && deferrable(reg))
            {
                if (sameDeferrable(a, reg, v))
                {
                    ++g_xboxGifDirectStats.skipped;
                    return;
                }
                ++g_xboxGifDirectStats.writes;
                ++g_xboxGifDirectStats.deferred;
                a.write(uint8_t(reg), v);
                pending = true;
                return;
            }
            switch (kindOf(reg))
            {
            case Nop:
                return;
            case Store:
                if (sameStore(a, reg, v))
                {
                    ++g_xboxGifDirectStats.skipped;
                    return;
                }
                break;
            default:
                break;
            }
            flush();
            ++g_xboxGifDirectStats.writes;
            a.write(uint8_t(reg), v);
        }

        // A PACKED qword (GS::writeRegisterPacked).
        void packed(uint32_t desc, uint64_t lo, uint64_t hi)
        {
            switch (desc)
            {
            case 0x0u:
                prim(lo & 0x7FFu);
                return;
            case 0x1u: // RGBA only; Q comes with ST
                a.r() = uint8_t(lo);
                a.g() = uint8_t(lo >> 32);
                a.b() = uint8_t(hi);
                a.a() = uint8_t(hi >> 32);
                return;
            case 0x2u:
            {
                a.s() = bitsToFloat(uint32_t(lo));
                a.t() = bitsToFloat(uint32_t(lo >> 32));
                const float q = bitsToFloat(uint32_t(hi));
                a.q() = q == 0.0f ? 1.0f : q;
                return;
            }
            case 0x3u:
                a.u() = uint16_t(lo & 0x3FFFu);
                a.v() = uint16_t((lo >> 32) & 0x3FFFu);
                return;
            case 0x4u:
            case 0xCu:
            {
                GSVertex &vtx = slot();
                vtx.x = float(lo & 0xFFFFu) / 16.0f;
                vtx.y = float((lo >> 32) & 0xFFFFu) / 16.0f;
                vtx.z = float(uint32_t(hi >> 4) & 0xFFFFFFu); // as float, as the GS's PACKED path
                vtx.fog = uint8_t(hi >> 36);
                attributes(vtx);
                kick(desc == 0x4u && !((hi >> 47) & 1u));
                return;
            }
            case 0x5u:
            case 0xDu:
            {
                GSVertex &vtx = slot();
                vtx.x = float(lo & 0xFFFFu) / 16.0f;
                vtx.y = float((lo >> 32) & 0xFFFFu) / 16.0f;
                vtx.z = float(uint32_t(hi));
                vtx.fog = a.fog();
                attributes(vtx);
                kick(desc == 0x5u && !((hi >> 47) & 1u));
                return;
            }
            case 0xAu:
                a.fog() = uint8_t(hi >> 36);
                return;
            case 0xEu:
                write(uint32_t(hi & 0xFFu), lo);
                return;
            case 0xBu:
            case 0xFu:
                return; // nothing in the GS
            default: // 6-9: TEX0/CLAMP of a context, written as they are
                write(desc, lo);
                return;
            }
        }
    };

    // Takes one packet of a GIF path through to its end: what the GS's
    // processGIFPacket loop does with it, on the same stream state `st` (a
    // tag, qword, REGLIST padding or IMAGE transfer it ends inside goes on
    // in the path's next packet, by either route). The caller holds the GS
    // lock. False: declined before any effect (the caller goes on the
    // original way). packedOnly, emptyTagResetsQ: the native PACKED entry,
    // which takes only complete PACKED packets (on a fresh stream) and, but
    // with TS_GIF_NATIVE's plans, sets Q at every tag even without writes;
    // the stream sets it at a tag's first write. deferStores: see deferrable
    // (TS_NATIVE_2D's token packets: several kicks' packets in one piece).
    template <class Gs, class Stream>
    bool run(Gs &a, Stream &st, const uint8_t *data, uint32_t size, bool packedOnly, bool emptyTagResetsQ,
             bool deferStores = false)
    {
        XboxGifDirectStats &stats = g_xboxGifDirectStats;
#if defined(AGRESSIVE_LOGS) && AGRESSIVE_LOGS
        (void)st; (void)packedOnly; (void)emptyTagResetsQ; (void)data; (void)size; (void)a; (void)deferStores;
        ++stats.declined[XboxGifDirectStats::Debug];
        return false;
#else
        if (!data || !size || !a.backend())
            return false;
        if (!a.paused())
        {
            ++stats.declined[XboxGifDirectStats::Debug]; // the history records every tag, register and draw
            return false;
        }
        if (packedOnly)
            if (const XboxGifDirectStats::Decline d = admitPacked(data, size))
            {
                ++stats.declined[d];
                return false;
            }
        Scratch &s = scratch();
        if (s.busy.test_and_set(std::memory_order_acquire))
        {
            ++stats.declined[XboxGifDirectStats::Busy];
            return false;
        }
        Decoder<Gs> dec{a, s.vertices};
        dec.wide = hostSettings().widescreen.load(std::memory_order_relaxed) && !gsSplitScreen();
        dec.defer = deferStores;
        uint32_t at = 0;
        while (at < size)
        {
            const uint32_t left = size - at;
            if (st.remaining && st.format >= GIF_FMT_IMAGE)
            {
                // IMAGE (and disabled) data goes up when complete, after the
                // draws before it; a transfer split over packets is gathered.
                const uint32_t n = st.remaining < left ? st.remaining : left;
                if (n == st.remaining && st.image.empty())
                {
                    dec.flush();
                    a.image(data + at, n);
                    ++stats.images;
                }
                else
                {
                    st.image.insert(st.image.end(), data + at, data + at + n);
                    if (n == st.remaining)
                    {
                        dec.flush();
                        a.image(st.image.data(), uint32_t(st.image.size()));
                        st.image.clear();
                        ++stats.images;
                    }
                }
                at += n;
                st.remaining -= n;
                continue;
            }
            if (st.padding)
            {
                const uint32_t n = st.padding < left ? st.padding : left;
                st.padding -= n;
                at += n;
                continue;
            }
            if (st.remaining && !st.unitBytes)
            {
                // The open tag's whole registers in this packet, in one loop.
                const uint32_t unit = st.format == GIF_FMT_PACKED ? 16u : 8u;
                const uint32_t n = left / unit < st.remaining ? left / unit : st.remaining;
                if (n)
                {
                    uint8_t regs[16];
                    for (uint32_t r = 0; r < st.nreg; ++r)
                        regs[r] = uint8_t((st.registers >> (r * 4u)) & 15u);
                    uint32_t r = st.regIndex;
                    if (unit == 16u)
                    {
                        // Each write starts from the stream's Q and leaves its
                        // own; nothing else changes Q between them.
                        a.q() = st.q;
                        for (uint32_t i = 0; i < n; ++i, at += 16u)
                        {
                            dec.packed(regs[r], load64(data + at), load64(data + at + 8u));
                            r = r + 1u == st.nreg ? 0u : r + 1u;
                        }
                        st.q = a.q();
                    }
                    else
                        for (uint32_t i = 0; i < n; ++i, at += 8u)
                        {
                            dec.write(regs[r], load64(data + at));
                            r = r + 1u == st.nreg ? 0u : r + 1u;
                        }
                    st.regIndex = r;
                    st.remaining -= n;
                    if (!st.remaining)
                        st.padding = st.endPadding;
                    continue;
                }
            }
            // One tag, or one register split over packets (st.unit gathers it).
            const bool tag = st.remaining == 0;
            const uint32_t needed = (tag || st.format == GIF_FMT_PACKED) ? 16u : 8u;
            uint64_t lo, hi = 0;
            if (!st.unitBytes && left >= needed)
            {
                lo = load64(data + at);
                if (needed == 16u)
                    hi = load64(data + at + 8u);
                at += needed;
            }
            else
            {
                const uint32_t n = needed - st.unitBytes < left ? needed - st.unitBytes : left;
                std::memcpy(st.unit.data() + st.unitBytes, data + at, n);
                at += n;
                st.unitBytes += n;
                if (st.unitBytes < needed)
                    continue;
                lo = load64(st.unit.data());
                if (needed == 16u)
                    hi = load64(st.unit.data() + 8u);
                st.unitBytes = 0;
            }
            if (tag)
            {
                const uint32_t nloop = uint32_t(lo) & 0x7FFFu;
                st.format = uint8_t((lo >> 58) & 3u);
                st.nreg = uint32_t(lo >> 60) & 15u;
                if (!st.nreg)
                    st.nreg = 16u;
                st.registers = hi;
                st.regIndex = 0;
                st.q = 1.0f;
                st.endPadding = st.format == GIF_FMT_REGLIST && ((nloop * st.nreg) & 1u) ? 8u : 0u;
                if (emptyTagResetsQ)
                    a.q() = 1.0f;
                if (st.format == GIF_FMT_PACKED && ((lo >> 46) & 1u)) // PRE
                    dec.prim((lo >> 47) & 0x7FFu);
                st.remaining = nloop * (st.format >= GIF_FMT_IMAGE ? 16u : st.nreg);
                if (st.format >= GIF_FMT_IMAGE)
                    st.image.clear();
                continue;
            }
            const uint32_t reg = uint32_t(st.registers >> (4u * st.regIndex)) & 15u;
            if (st.format == GIF_FMT_PACKED)
            {
                a.q() = st.q;
                dec.packed(reg, lo, hi);
                st.q = a.q();
            }
            else
                dec.write(reg, lo);
            st.regIndex = (st.regIndex + 1u) % st.nreg;
            if (!--st.remaining)
                st.padding = st.endPadding;
        }
        if (st.remaining || st.padding || st.unitBytes)
            ++stats.carried;
        dec.flush();
        s.busy.clear(std::memory_order_release);
        ++stats.packets;
        return true;
#endif
    }
}

// The GS's state for the decoder, as a local class of the GS method it is
// expanded in (it has the method's access to the GS's private members).
#define XBOX_GIF_DIRECT_GS_ACCESS                                                         \
    struct DirectAccess                                                                   \
    {                                                                                     \
        GS &gs;                                                                           \
        GSContext *ctx() { return gs.m_ctx; }                                             \
        GSPrimReg &prim() { return gs.m_prim; }                                           \
        GSPrimReg &primRegister() { return gs.m_primRegister; }                           \
        bool prmodecont() const { return gs.m_prmodecont; }                               \
        uint8_t &r() { return gs.m_curR; }                                                \
        uint8_t &g() { return gs.m_curG; }                                                \
        uint8_t &b() { return gs.m_curB; }                                                \
        uint8_t &a() { return gs.m_curA; }                                                \
        float &q() { return gs.m_curQ; }                                                  \
        float &s() { return gs.m_curS; }                                                  \
        float &t() { return gs.m_curT; }                                                  \
        uint16_t &u() { return gs.m_curU; }                                               \
        uint16_t &v() { return gs.m_curV; }                                               \
        uint8_t &fog() { return gs.m_curFog; }                                            \
        GSVertex *queue() { return gs.m_vtxQueue; }                                       \
        int queueSize() const { return kMaxVerts; }                                       \
        int &count() { return gs.m_vtxCount; }                                            \
        int &index() { return gs.m_vtxIndex; }                                            \
        bool pabe() const { return gs.m_pabe; }                                           \
        uint64_t scanmsk() const { return gs.m_scanmsk; }                                 \
        uint64_t dimx() const { return gs.m_dimx; }                                       \
        uint64_t dthe() const { return gs.m_dthe; }                                       \
        uint64_t colclamp() const { return gs.m_colclamp; }                               \
        uint64_t &drawCounter() { return gs.m_drawCounter; }                              \
        uint64_t &lastPerspectiveDraw() { return gs.m_lastPerspectiveDraw; }              \
        bool &hasPreferred() { return gs.m_hasPreferredDisplaySource; }                   \
        uint32_t &preferredDest() { return gs.m_preferredDisplayDestFbp; }                \
        GSFrameReg &preferredFrame() { return gs.m_preferredDisplaySourceFrame; }         \
        GSRasterBackend *backend() { return gs.m_backend.get(); }                         \
        bool paused() const { return gs.m_debugHistoryPaused; }                           \
        void write(uint8_t reg, uint64_t value) { gs.writeRegisterUnlocked(reg, value); } \
        void image(const uint8_t *data, uint32_t size) { gs.processImageData(data, size); } \
        GSDrawState state() const { return gs.buildDrawBatch(0).state; }                  \
        void hud(GSPrimitiveBatch &batch) { gs.adjustWidescreenHud(batch); }              \
    }

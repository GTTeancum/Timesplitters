// A GS-level trace of what a packet draws (src/xbox/PUSH-BC-PLAN.md section
// 3.2 item 8, section 5.10; owned by C-EMIT): a raster backend that draws
// nothing and instead folds every call the GS front end makes into a hash,
// one primitive at a time in a canonical form (the state a draw uses and
// its vertices, field by field; a strip or a bulk run expanded into the
// primitives the GS would have kicked), with counts per kind. Two trace
// values are equal when the backend was told to draw the same things in
// the same order.
//
// Used by the emitter self-check (TS_NATIVE_EMIT_SELFCHECK,
// ts_native_dl.cpp): the GS state is saved (GS::saveCheckState), this
// backend swapped in (GS::swapBackendForCheck), the original packet run
// through processGIFPacket, the trace taken; state restored, the op run
// into the same backend, the traces compared, state restored again, and
// the op then runs for real. Also usable by a GIF bulk-path check (B-GS)
// and by frame_bench's recording mode. No allocation after construction:
// the trace is fixed storage, and the backend keeps no vertex memory.
#pragma once

#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_types.h"
#include "runtime/ps2_host_settings.h"

#include <cstdint>
#include <cstring>

namespace ts_gif_trace
{
    // FNV-1a over the canonical words.
    struct Hash
    {
        uint64_t h = 1469598103934665603ull;
        void word(uint64_t w)
        {
            for (int i = 0; i < 8; ++i)
            {
                h ^= (w >> (8 * i)) & 0xFFu;
                h *= 1099511628211ull;
            }
        }
        void f(float v)
        {
            uint32_t b;
            std::memcpy(&b, &v, 4);
            word(b);
        }
        void d(double v)
        {
            uint64_t b;
            std::memcpy(&b, &v, 8);
            word(b);
        }
    };

    inline void hashState(Hash &x, const GSDrawState &s)
    {
        const GSContext &c = s.context;
        x.word(c.frame.fbp);
        x.word(c.frame.fbw);
        x.word(c.frame.psm);
        x.word(c.frame.fbmsk);
        x.word(c.scissor.x0 | (uint64_t(c.scissor.x1) << 16) | (uint64_t(c.scissor.y0) << 32) | (uint64_t(c.scissor.y1) << 48));
        x.word(c.tex0.tbp0);
        x.word(c.tex0.tbw | (uint64_t(c.tex0.psm) << 8) | (uint64_t(c.tex0.tw) << 16) | (uint64_t(c.tex0.th) << 24) |
               (uint64_t(c.tex0.tcc) << 32) | (uint64_t(c.tex0.tfx) << 40));
        x.word(c.tex0.cbp);
        x.word(c.tex0.cpsm | (uint64_t(c.tex0.csm) << 8) | (uint64_t(c.tex0.csa) << 16) | (uint64_t(c.tex0.cld) << 24));
        x.word(c.xyoffset.ofx | (uint64_t(c.xyoffset.ofy) << 16));
        x.word(c.zbuf.zbp | (uint64_t(c.zbuf.psm) << 32) | (uint64_t(c.zbuf.zmask ? 1u : 0u) << 40));
        x.word(c.tex1);
        x.word(c.miptbp1);
        x.word(c.miptbp2);
        x.word(c.clamp);
        x.word(c.alpha);
        x.word(c.test);
        x.word(c.fba);
        const GSPrimReg &p = s.prim;
        x.word(uint64_t(p.type) | (uint64_t(p.iip) << 8) | (uint64_t(p.tme) << 9) | (uint64_t(p.fge) << 10) |
               (uint64_t(p.abe) << 11) | (uint64_t(p.aa1) << 12) | (uint64_t(p.fst) << 13) | (uint64_t(p.ctxt) << 14) |
               (uint64_t(p.fix) << 15));
        x.word(s.texa.ta0 | (uint64_t(s.texa.aem ? 1u : 0u) << 8) | (uint64_t(s.texa.ta1) << 16));
        x.word(s.texclut.cbw | (uint64_t(s.texclut.cou) << 8) | (uint64_t(s.texclut.cov) << 16));
        x.word(s.pabe ? 1u : 0u);
        x.word(s.scanmsk);
        x.word(s.dimx);
        x.word(s.dthe);
        x.word(s.colclamp);
        x.word(s.fogR | (uint64_t(s.fogG) << 8) | (uint64_t(s.fogB) << 16));
        x.word(s.textureWidth | (uint64_t(s.textureHeight) << 16) | (uint64_t(s.linearFilter ? 1u : 0u) << 32));
    }

    inline void hashVertex(Hash &x, const GSVertex &v)
    {
        x.f(v.x);
        x.f(v.y);
        x.d(v.z);
        x.word(v.r | (uint64_t(v.g) << 8) | (uint64_t(v.b) << 16) | (uint64_t(v.a) << 24) | (uint64_t(v.fog) << 32));
        x.f(v.q);
        x.f(v.s);
        x.f(v.t);
        x.word(v.u | (uint64_t(v.v) << 16));
    }

    // What a trace holds: the running hash and counts by kind.
    struct Trace
    {
        uint64_t hash = 0;
        uint32_t prims = 0, vertices = 0, cluts = 0, transfers = 0, imageBytes = 0, flushes = 0, texFlushes = 0, clears = 0,
                 syncs = 0;
        bool operator==(const Trace &) const = default;
    };

    // The recording backend. Submit records one primitive; SubmitStrip and
    // SubmitPrimitives record the primitives the front end would have
    // kicked from the strip (so a bulk run and its per-primitive form give
    // one trace). Everything else draws nothing and answers zeros.
    class RecordingBackend final : public GSRasterBackend
    {
    public:
        Trace trace;
        void reset()
        {
            trace = Trace{};
            m_hash = Hash{};
        }
        void finish() { trace.hash = m_hash.h; }

        uint32_t DrawPaths() const override { return kGSDrawPathSubmitPrimitives; }
        void Initialize(uint8_t *, uint32_t) override {}
        void Reset() override {}
        void Submit(const GSPrimitiveBatch &batch) override
        {
            primitive(batch.state, batch.vertices.data(), batch.vertexCount);
        }
        bool SubmitStrip(const GSDrawState &state, const GSVertex *v, uint32_t count) override
        {
            run(state, GS_PRIM_TRISTRIP, v, count);
            return true;
        }
        bool SubmitPrimitives(const GSDrawState &state, uint32_t, const GSVertex *v, uint32_t count) override
        {
            // Declined where the NV2A backend declines for the front end's
            // widescreen HUD narrowing (gs_nv2a_screen.inl): the front end
            // then kicks the primitives one by one and narrows them, so a
            // bulk run and its per-primitive form still give one trace.
            if (hostSettings().widescreen && !gsSplitScreen())
                return false;
            run(state, state.prim.type, v, count);
            return true;
        }
        void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override
        {
            m_hash.word(0xC1u);
            m_hash.word(tex0.cbp | (uint64_t(tex0.cpsm) << 32) | (uint64_t(tex0.csm) << 40) | (uint64_t(tex0.csa) << 48) |
                        (uint64_t(tex0.cld) << 56));
            m_hash.word(tex0.psm | (uint64_t(texclut.cbw) << 8) | (uint64_t(texclut.cou) << 16) | (uint64_t(texclut.cov) << 24));
            ++trace.cluts;
            finish();
        }
        void BeginTransfer(const GSTransferCommand &t) override
        {
            m_hash.word(0x7Fu);
            m_hash.word(t.bitbltbuf.sbp | (uint64_t(t.bitbltbuf.sbw) << 32) | (uint64_t(t.bitbltbuf.spsm) << 40));
            m_hash.word(t.bitbltbuf.dbp | (uint64_t(t.bitbltbuf.dbw) << 32) | (uint64_t(t.bitbltbuf.dpsm) << 40));
            m_hash.word(t.trxpos.ssax | (uint64_t(t.trxpos.ssay) << 16) | (uint64_t(t.trxpos.dsax) << 32) |
                        (uint64_t(t.trxpos.dsay) << 48));
            m_hash.word(t.trxpos.dir | (uint64_t(t.trxreg.rrw) << 8) | (uint64_t(t.trxreg.rrh) << 24) |
                        (uint64_t(t.direction) << 40));
            ++trace.transfers;
            finish();
        }
        void UploadImage(const uint8_t *data, uint32_t sizeBytes) override
        {
            m_hash.word(0x1Au);
            m_hash.word(sizeBytes);
            for (uint32_t i = 0; i + 8u <= sizeBytes; i += 8u)
            {
                uint64_t w;
                std::memcpy(&w, data + i, 8);
                m_hash.word(w);
            }
            trace.imageBytes += sizeBytes;
            finish();
        }
        void Flush() override
        {
            m_hash.word(0xF1u);
            ++trace.flushes;
            finish();
        }
        void TextureFlush() override
        {
            m_hash.word(0xF2u);
            ++trace.texFlushes;
            finish();
        }
        void Sync(GSSyncReason reason) override
        {
            m_hash.word(0x5Cu | (uint64_t(reason) << 8));
            ++trace.syncs;
            finish();
        }
        PresentationFrame Present(const GSPresentationRequest &) override { return PresentationFrame{}; }
        bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override
        {
            m_hash.word(0xC7u);
            m_hash.word(context.frame.fbp | (uint64_t(context.frame.fbw) << 32) | (uint64_t(context.frame.psm) << 40));
            m_hash.word(rgba);
            ++trace.clears;
            finish();
            return true;
        }
        uint32_t ConsumeLocalToHostBytes(uint8_t *, uint32_t) override { return 0u; }
        uint32_t ReadVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) const override { return 0u; }
        void WriteVram(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) override {}
        void SnapshotVram(std::vector<uint8_t> &) const override {}
        GSTransferSnapshot GetTransferSnapshot() const override { return GSTransferSnapshot{}; }

    private:
        Hash m_hash;

        void primitive(const GSDrawState &state, const GSVertex *v, uint32_t count)
        {
            m_hash.word(0xD0u | (uint64_t(count) << 8));
            hashState(m_hash, state);
            for (uint32_t i = 0; i < count; ++i)
                hashVertex(m_hash, v[i]);
            ++trace.prims;
            trace.vertices += count;
            finish();
        }
        // The primitives the GS front end kicks from a run of vertices of
        // one PRIM (GS::vertexKick's queue).
        void run(const GSDrawState &state, uint32_t type, const GSVertex *v, uint32_t count)
        {
            switch (type)
            {
            case GS_PRIM_POINT:
                for (uint32_t i = 0; i < count; ++i)
                    primitive(state, v + i, 1u);
                break;
            case GS_PRIM_LINE:
            case GS_PRIM_SPRITE:
                for (uint32_t i = 0; i + 1u < count; i += 2u)
                    primitive(state, v + i, 2u);
                break;
            case GS_PRIM_LINESTRIP:
                for (uint32_t i = 1; i < count; ++i)
                    primitive(state, v + i - 1u, 2u);
                break;
            case GS_PRIM_TRIANGLE:
                for (uint32_t i = 0; i + 2u < count; i += 3u)
                    primitive(state, v + i, 3u);
                break;
            case GS_PRIM_TRISTRIP:
                for (uint32_t i = 2; i < count; ++i)
                    primitive(state, v + i - 2u, 3u);
                break;
            case GS_PRIM_TRIFAN:
                for (uint32_t i = 2; i < count; ++i)
                {
                    const GSVertex tri[3] = {v[0], v[i - 1u], v[i]};
                    primitive(state, tri, 3u);
                }
                break;
            default:
                break;
            }
        }
    };
}

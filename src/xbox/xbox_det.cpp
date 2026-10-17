// Deterministic mode, the det harness (src/xbox/PUSH-BC-PLAN.md M0.8;
// B-SCHED). What it pins and writes: xbox_det.h. Built only with TS_DET=1
// (src/xbox/mk/b_sched.mk); without it runtime/ps2_det.h makes every entry
// point an inline no-op and this file is empty.
#include "runtime/ps2_det.h"

#if TS_DET
#include "xbox_det.h"
#include "xbox_perf.h" // XboxReportLine

#include "ps2_runtime.h"
#include "ps2x/exceptions.h" // fatalError: a timed pad script in det mode
#include "runtime/ee_checkpoint_clock.h"
#include "runtime/ee_scheduler.h"
#include "runtime/gs/gs_backend.h"
#include "runtime/ps2_host_time.h"
#include "runtime/ps2_io_stats.h"
#include "runtime/ps2_memory.h"

#include <cstddef>
#include <cstring>
#include <filesystem>
#include <functional>
#include <memory>
#include <system_error>
#include <vector>

namespace
{
    // ---- Hashing: murmur3's 32-bit block mix in four lanes (16 bytes a
    // step, the multiplies independent), folded at the end. Not
    // cryptographic; it only has to tell two runs apart.
    inline uint32_t rotl32(uint32_t v, int r) { return (v << r) | (v >> (32 - r)); }
    inline uint32_t mixK(uint32_t k)
    {
        k *= 0xCC9E2D51u;
        k = rotl32(k, 15);
        return k * 0x1B873593u;
    }
    inline uint32_t mixH(uint32_t h, uint32_t k)
    {
        h ^= mixK(k);
        h = rotl32(h, 13);
        return h * 5u + 0xE6546B64u;
    }
    inline uint32_t fmix(uint32_t h)
    {
        h ^= h >> 16;
        h *= 0x85EBCA6Bu;
        h ^= h >> 13;
        h *= 0xC2B2AE35u;
        return h ^ (h >> 16);
    }

    struct Hasher
    {
        uint32_t lane[4] = {0x9E3779B1u, 0x85EBCA77u, 0xC2B2AE3Du, 0x27D4EB2Fu};
        uint32_t length = 0;
        uint8_t tail[16] = {};
        uint32_t tailBytes = 0;

        void reset() { *this = Hasher{}; }

        void block(const uint8_t *p)
        {
            uint32_t w[4];
            std::memcpy(w, p, 16);
            lane[0] = mixH(lane[0], w[0]);
            lane[1] = mixH(lane[1], w[1]);
            lane[2] = mixH(lane[2], w[2]);
            lane[3] = mixH(lane[3], w[3]);
        }

        void bytes(const void *data, size_t len)
        {
            const uint8_t *p = static_cast<const uint8_t *>(data);
            length += static_cast<uint32_t>(len);
            if (tailBytes != 0u)
            {
                while (len != 0u && tailBytes < 16u)
                {
                    tail[tailBytes++] = *p++;
                    --len;
                }
                if (tailBytes < 16u)
                    return;
                block(tail);
                tailBytes = 0u;
            }
            for (; len >= 16u; p += 16, len -= 16u)
                block(p);
            while (len != 0u)
            {
                tail[tailBytes++] = *p++;
                --len;
            }
        }

        void u32(uint32_t v) { bytes(&v, sizeof(v)); }
        void u64(uint64_t v) { bytes(&v, sizeof(v)); }
        void f32(float v)
        {
            uint32_t bits;
            std::memcpy(&bits, &v, sizeof(bits));
            u32(bits);
        }
        void f64(double v) { bytes(&v, sizeof(v)); }

        uint32_t value() const
        {
            Hasher copy = *this;
            if (copy.tailBytes != 0u)
            {
                std::memset(copy.tail + copy.tailBytes, 0, 16u - copy.tailBytes);
                copy.block(copy.tail);
            }
            uint32_t h = copy.lane[0] ^ rotl32(copy.lane[1], 7) ^ rotl32(copy.lane[2], 14) ^ rotl32(copy.lane[3], 21);
            return fmix(h ^ copy.length);
        }
    };

    // ---- State (fixed storage).
    bool s_active = false;
    EeScheduler *s_scheduler = nullptr;
    PS2Runtime *s_runtime = nullptr;
    Hasher s_stream[kDetStreamCount];
    uint32_t s_frame = 0;
    bool s_frameSinceVblank = false;
    XboxDetCounters s_counters;

    struct Exclusion
    {
        uint32_t addr = 0, end = 0, untilFrame = 0; // [addr, end); untilFrame 0: for good
    };
    constexpr uint32_t kMaxExclusions = 32u;
    Exclusion s_exclusions[kMaxExclusions];
    uint32_t s_exclusionCount = 0;

    alignas(16) uint8_t s_iopPage[4096];

    // ---- Canonical forms (fields, never padding or host pointers).
    void hashContext(Hasher &h, const R5900Context &c)
    {
        h.bytes(c.r, sizeof(c.r));
        h.u32(c.pc);
        h.u64(c.hi);
        h.u64(c.lo);
        h.u64(c.hi1);
        h.u64(c.lo1);
        h.u32(c.sa);
        h.bytes(c.vu0_vf, sizeof(c.vu0_vf));
        h.bytes(c.vi, sizeof(c.vi));
        h.f32(c.vu0_q);
        h.f32(c.vu0_p);
        h.f32(c.vu0_i);
        h.bytes(&c.vu0_acc, sizeof(c.vu0_acc));
        h.u32(c.vu0_status);
        h.u32(c.vu0_mac_flags);
        h.u32(c.vu0_clip_flags);
        h.bytes(c.f, sizeof(c.f));
        h.f32(c.f_acc);
        h.u32(c.fcr31);
        h.u32(c.cop0_status);
        h.u32(c.cop0_epc);
    }

    void hashState(Hasher &h, const GSDrawState &s)
    {
        const GSContext &c = s.context;
        h.u32(c.frame.fbp);
        h.u32(c.frame.fbw);
        h.u32(c.frame.psm);
        h.u32(c.frame.fbmsk);
        h.u32(uint32_t(c.scissor.x0) | uint32_t(c.scissor.x1) << 16);
        h.u32(uint32_t(c.scissor.y0) | uint32_t(c.scissor.y1) << 16);
        h.u32(c.tex0.tbp0);
        h.u32(uint32_t(c.tex0.tbw) | uint32_t(c.tex0.psm) << 8 | uint32_t(c.tex0.tw) << 16 | uint32_t(c.tex0.th) << 24);
        h.u32(uint32_t(c.tex0.tcc) | uint32_t(c.tex0.tfx) << 8 | uint32_t(c.tex0.cpsm) << 16 | uint32_t(c.tex0.csm) << 24);
        h.u32(c.tex0.cbp);
        h.u32(uint32_t(c.tex0.csa) | uint32_t(c.tex0.cld) << 8);
        h.u32(uint32_t(c.xyoffset.ofx) | uint32_t(c.xyoffset.ofy) << 16);
        h.u32(c.zbuf.zbp);
        h.u32(uint32_t(c.zbuf.psm) | uint32_t(c.zbuf.zmask) << 8);
        h.u64(c.tex1);
        h.u64(c.miptbp1);
        h.u64(c.miptbp2);
        h.u64(c.clamp);
        h.u64(c.alpha);
        h.u64(c.test);
        h.u64(c.fba);
        const GSPrimReg &p = s.prim;
        h.u32(uint32_t(p.type) | uint32_t(p.iip) << 8 | uint32_t(p.tme) << 9 | uint32_t(p.fge) << 10 |
              uint32_t(p.abe) << 11 | uint32_t(p.aa1) << 12 | uint32_t(p.fst) << 13 | uint32_t(p.ctxt) << 14 |
              uint32_t(p.fix) << 15);
        h.u32(uint32_t(s.texa.ta0) | uint32_t(s.texa.aem) << 8 | uint32_t(s.texa.ta1) << 16);
        h.u32(uint32_t(s.texclut.cbw) | uint32_t(s.texclut.cou) << 8 | uint32_t(s.texclut.cov) << 16);
        h.u32(s.pabe ? 1u : 0u);
        h.u64(s.scanmsk);
        h.u64(s.dimx);
        h.u64(s.dthe);
        h.u64(s.colclamp);
        h.u32(uint32_t(s.fogR) | uint32_t(s.fogG) << 8 | uint32_t(s.fogB) << 16);
        h.u32(uint32_t(s.textureWidth) | uint32_t(s.textureHeight) << 16);
        h.u32(s.linearFilter ? 1u : 0u);
        // (serial is a cache key, not drawing state: left out.)
    }

    void hashVertex(Hasher &h, const GSVertex &v)
    {
        h.f32(v.x);
        h.f32(v.y);
        h.f64(v.z);
        h.u32(uint32_t(v.r) | uint32_t(v.g) << 8 | uint32_t(v.b) << 16 | uint32_t(v.a) << 24);
        h.f32(v.q);
        h.f32(v.s);
        h.f32(v.t);
        h.u32(uint32_t(v.u) | uint32_t(v.v) << 16);
        h.u32(v.fog);
    }

    // One primitive, the same whichever call carried it.
    void hashPrimitive(const GSDrawState &state, const GSVertex *const *v, uint32_t n)
    {
        Hasher &h = s_stream[kDetDraw];
        h.u32(0x50524D00u | n); // "PRM" + vertex count
        hashState(h, state);
        for (uint32_t i = 0; i < n; ++i)
            hashVertex(h, *v[i]);
    }

    // A PRIM's decoded vertices (SubmitPrimitives / SubmitStrip) split into
    // the primitives the per-vertex kick would have made: GS order
    // (strip: i, i+1, i+2; fan: 0, i+1, i+2; lists in threes or pairs).
    void hashPrimitiveRun(const GSDrawState &state, uint32_t primType, const GSVertex *v, uint32_t n)
    {
        const GSVertex *tri[3];
        switch (primType & 7u)
        {
        case 0: // point
            for (uint32_t i = 0; i < n; ++i)
            {
                tri[0] = &v[i];
                hashPrimitive(state, tri, 1);
            }
            break;
        case 1: // line
        case 6: // sprite
            for (uint32_t i = 0; i + 1 < n; i += 2)
            {
                tri[0] = &v[i];
                tri[1] = &v[i + 1];
                hashPrimitive(state, tri, 2);
            }
            break;
        case 2: // line strip
            for (uint32_t i = 0; i + 1 < n; ++i)
            {
                tri[0] = &v[i];
                tri[1] = &v[i + 1];
                hashPrimitive(state, tri, 2);
            }
            break;
        case 3: // triangle
            for (uint32_t i = 0; i + 2 < n; i += 3)
            {
                tri[0] = &v[i];
                tri[1] = &v[i + 1];
                tri[2] = &v[i + 2];
                hashPrimitive(state, tri, 3);
            }
            break;
        case 4: // triangle strip
            for (uint32_t i = 0; i + 2 < n; ++i)
            {
                tri[0] = &v[i];
                tri[1] = &v[i + 1];
                tri[2] = &v[i + 2];
                hashPrimitive(state, tri, 3);
            }
            break;
        case 5: // triangle fan
            for (uint32_t i = 1; i + 1 < n; ++i)
            {
                tri[0] = &v[0];
                tri[1] = &v[i];
                tri[2] = &v[i + 1];
                hashPrimitive(state, tri, 3);
            }
            break;
        default:
            break;
        }
    }

    // ---- The draw stream: a forwarding wrapper around the renderer. Every
    // GSRasterBackend virtual is forwarded (one added to the interface must
    // be added here, as in xbox_perf.cpp's TimedBackend).
    class DetBackend final : public GSRasterBackend
    {
    public:
        explicit DetBackend(std::unique_ptr<GSRasterBackend> inner) : m_inner(std::move(inner)) {}

        uint32_t DrawPaths() const override { return m_inner->DrawPaths(); }
        void Initialize(uint8_t *vram, uint32_t vramSize) override { m_inner->Initialize(vram, vramSize); }
        void Reset() override { m_inner->Reset(); }
        void Submit(const GSPrimitiveBatch &batch) override
        {
            if (s_active)
            {
                const GSVertex *v[3] = {&batch.vertices[0], &batch.vertices[1], &batch.vertices[2]};
                hashPrimitive(batch.state, v, batch.vertexCount < 3u ? batch.vertexCount : 3u);
            }
            m_inner->Submit(batch);
        }
        bool SubmitStrip(const GSDrawState &state, const GSVertex *vertices, uint32_t count) override
        {
            const bool taken = m_inner->SubmitStrip(state, vertices, count);
            if (taken && s_active) // (declined: the front end submits them one by one, hashed there)
                hashPrimitiveRun(state, 4u, vertices, count);
            return taken;
        }
        bool SubmitPrimitives(const GSDrawState &state, uint32_t prim, const GSVertex *vertices, uint32_t count) override
        {
            const bool taken = m_inner->SubmitPrimitives(state, prim, vertices, count);
            if (taken && s_active)
                hashPrimitiveRun(state, prim, vertices, count);
            return taken;
        }
        bool BeginXfRun(const GSDrawState &state, const GSXfConstants &constants, GSXfCursor &cursor) override
        {
            const bool begun = m_inner->BeginXfRun(state, constants, cursor);
            if (begun && s_active)
            {
                Hasher &h = s_stream[kDetDraw];
                h.u32(0x58460000u); // "XF"
                hashState(h, state);
                h.bytes(&constants, offsetof(GSXfConstants, serial)); // the values, not the cache serial
                m_written = cursor.direct ? cursor.next : nullptr;
            }
            return begun;
        }
        void GrowXfCursor(GSXfCursor &cursor, uint32_t count) override
        {
            hashWritten(cursor);
            m_inner->GrowXfCursor(cursor, count);
            m_written = cursor.next;
        }
        void EmitXfStrip(const GSXfVertex *vertices, uint32_t count) override
        {
            if (s_active)
            {
                Hasher &h = s_stream[kDetDraw];
                h.u32(0x53540000u | count); // "ST"
                h.bytes(vertices, size_t(count) * sizeof(GSXfVertex));
            }
            m_inner->EmitXfStrip(vertices, count);
        }
        void EndXfRun(GSXfCursor &cursor) override
        {
            hashWritten(cursor);
            m_written = nullptr;
            m_inner->EndXfRun(cursor);
        }
        void XfInPlace(GSXfCursor &cursor, const GSXfInPlaceStrip *strips, uint32_t count) override
        {
            m_inner->XfInPlace(cursor, strips, count); // (Push C hashes its own records: kDetRing)
        }
        GSNativeRunResult BeginNativeRun(const GSNativeRun &run, GSXfCursor &cursor) override
        {
            return m_inner->BeginNativeRun(run, cursor);
        }
        void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override { m_inner->LoadClut(tex0, texclut); }
        uint64_t DebugClutState() override { return m_inner->DebugClutState(); }
        void BeginTransfer(const GSTransferCommand &command) override
        {
            if (s_active)
            {
                Hasher &h = s_stream[kDetDraw];
                h.u32(0x54520000u); // "TR"
                h.u32(command.bitbltbuf.sbp);
                h.u32(command.bitbltbuf.dbp);
                h.u32(command.direction);
            }
            m_inner->BeginTransfer(command);
        }
        void UploadImage(const uint8_t *data, uint32_t sizeBytes) override
        {
            if (s_active)
                s_stream[kDetDraw].bytes(data, sizeBytes);
            m_inner->UploadImage(data, sizeBytes);
        }
        void Flush() override { m_inner->Flush(); }
        void TextureFlush() override { m_inner->TextureFlush(); }
        void Sync(GSSyncReason reason) override { m_inner->Sync(reason); }
        PresentationFrame Present(const GSPresentationRequest &request) override { return m_inner->Present(request); }
        bool PresentAsync(const GSPresentationRequest &request, std::function<void(PresentationFrame &&)> done) override
        {
            return m_inner->PresentAsync(request, std::move(done));
        }
        bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override
        {
            if (s_active)
            {
                Hasher &h = s_stream[kDetDraw];
                h.u32(0x434C0000u); // "CL"
                h.u32(context.frame.fbp);
                h.u32(rgba);
            }
            return m_inner->ClearFramebuffer(context, rgba);
        }
        uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override
        {
            return m_inner->ConsumeLocalToHostBytes(dst, maxBytes);
        }
        uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override
        {
            return m_inner->ReadVram(psm, base, bw, x, y);
        }
        void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override
        {
            m_inner->WriteVram(psm, base, bw, x, y, value);
        }
        void SnapshotVram(std::vector<uint8_t> &out) const override { m_inner->SnapshotVram(out); }
        GSTransferSnapshot GetTransferSnapshot() const override { return m_inner->GetTransferSnapshot(); }

    private:
        // A direct run's records written into the renderer's ring since the
        // last look (read back once in det mode; the ring is write-combined).
        void hashWritten(const GSXfCursor &cursor)
        {
            if (s_active && m_written && cursor.next > m_written)
            {
                Hasher &h = s_stream[kDetDraw];
                h.u32(0x52470000u); // "RG"
                h.bytes(m_written, size_t(cursor.next - m_written) * sizeof(GSXfVertex));
            }
        }

        std::unique_ptr<GSRasterBackend> m_inner;
        const GSXfVertex *m_written = nullptr;
    };

    // ---- Streams.
    void hashRam(Hasher &h)
    {
        const uint8_t *rdram = s_runtime->memory().getRDRAM();
        // The live exclusions, in address order (insertion sort; a few).
        Exclusion live[kMaxExclusions];
        uint32_t n = 0;
        for (uint32_t i = 0; i < s_exclusionCount; ++i)
        {
            const Exclusion &e = s_exclusions[i];
            if (e.untilFrame != 0u && s_frame > e.untilFrame)
                continue;
            uint32_t j = n++;
            for (; j > 0 && live[j - 1].addr > e.addr; --j)
                live[j] = live[j - 1];
            live[j] = e;
        }
        s_counters.exclusions = n;
        uint32_t at = 0;
        for (uint32_t i = 0; i < n; ++i)
        {
            if (live[i].addr > at)
                h.bytes(rdram + at, live[i].addr - at);
            if (live[i].end > at)
                at = live[i].end;
        }
        if (at < PS2_RAM_SIZE)
            h.bytes(rdram + at, PS2_RAM_SIZE - at);
    }

    void hashIop(Hasher &h)
    {
        constexpr uint32_t kIopRamBytes = 2u * 1024u * 1024u;
        for (uint32_t page = 0; page < kIopRamBytes; page += sizeof(s_iopPage))
        {
            if (!s_runtime->readIopMemory(page, s_iopPage, sizeof(s_iopPage)))
                std::memset(s_iopPage, 0xEE, sizeof(s_iopPage));
            h.bytes(s_iopPage, sizeof(s_iopPage));
        }
    }

    void hashThreads(Hasher &h)
    {
        s_scheduler->forEachThread([&h](const GuestThread &t) {
            h.u32(static_cast<uint32_t>(t.id));
            h.u32(static_cast<uint32_t>(t.status));
            h.u32(static_cast<uint32_t>(t.currentPriority));
            h.u32(static_cast<uint32_t>(t.suspendCount));
            h.u32(t.wakeupCount);
            h.u32(static_cast<uint32_t>(t.invocations.size()));
            hashContext(h, t.activeContext());
        });
    }

    void hashEe(Hasher &h)
    {
        h.u64(s_scheduler->cycleNow());
        h.u64(s_scheduler->vsyncTick());
    }

    // VBlankStart (the executor, after the vblank's own work): the cheap
    // streams, while no game frame has run since the last one.
    void onVblank(void *, uint64_t vsyncTick)
    {
        if (!s_active)
            return;
#if TS_DET_VBLANK
        if (!s_frameSinceVblank)
        {
            Hasher ctx, ee;
            hashThreads(ctx);
            hashEe(ee);
            XboxReportLine line("[TS:detv]");
            line.add(" v=%u ctx=%08x sched=%08x ee=%08x", unsigned(vsyncTick), ctx.value(),
                     s_stream[kDetSched].value(), ee.value());
            line.write();
            ++s_counters.vblankLines;
        }
#else
        (void)vsyncTick;
#endif
        s_frameSinceVblank = false;
    }
}

void detTrace(uint32_t kind, uint64_t a, uint64_t b)
{
    if (!s_active)
        return;
    Hasher &h = s_stream[kDetSched];
    h.u32(kind);
    h.u64(a);
    h.u64(b);
    ++s_counters.traces;
#if TS_DET_TRACE
    if (s_frame >= TS_DET_TRACE && s_frame < TS_DET_TRACE + 2u)
    {
        XboxReportLine line("[TS:dett]");
        line.add(" f=%u k=%u a=%08x%08x b=%08x%08x", s_frame, kind, unsigned(a >> 32), unsigned(a), unsigned(b >> 32),
                 unsigned(b));
        line.write();
    }
#endif
}

void xboxDetHash(uint32_t stream, const void *ptr, size_t len)
{
    if (s_active && stream < kDetStreamCount)
        s_stream[stream].bytes(ptr, len);
}

void xboxDetExclude(uint32_t addr, uint32_t len, uint32_t untilFrame)
{
    addr &= PS2_RAM_SIZE - 1u;
    const uint32_t end = len > PS2_RAM_SIZE - addr ? PS2_RAM_SIZE : addr + len;
    for (uint32_t i = 0; i < s_exclusionCount; ++i)
    {
        Exclusion &e = s_exclusions[i];
        if (e.addr == addr && e.end == end)
        {
            e.untilFrame = untilFrame; // re-registered: the later expiry
            return;
        }
    }
    if (s_exclusionCount == kMaxExclusions)
    {
        ++s_counters.exclusionsDropped;
        return;
    }
    s_exclusions[s_exclusionCount++] = Exclusion{addr, end, untilFrame};
}

void xboxDetSetup()
{
    s_scheduler = ps2xEeSchedulerInstance();
    if (!s_scheduler)
    {
        XboxReportLine line("[TS:det] no EE scheduler: det mode off");
        line.write();
        return;
    }
    s_runtime = &s_scheduler->runtime();
    ps2xSetEeTimePolicy(EeTimePolicy::Pinned);
    ps2xPinHostTime(static_cast<std::time_t>(TS_DET_INSTANT));
    // The det memory card starts empty (a save from an earlier run would
    // change the boot path).
    {
        const std::string &root = PS2Runtime::getIoPaths().mcRoot;
        if (!root.empty())
        {
            std::error_code ec;
            std::filesystem::remove_all(root, ec);
            std::filesystem::create_directories(root, ec);
        }
    }
    for (Hasher &h : s_stream)
        h.reset();
    s_scheduler->setVblankStartHook(onVblank, nullptr);
    s_active = true;
    XboxReportLine line("[TS:det] on:");
    line.add(" pinned time, instant=%u every=%u vblank=%u dump=%u trace=%u", unsigned(TS_DET_INSTANT),
             unsigned(TS_DET_EVERY), unsigned(TS_DET_VBLANK), unsigned(TS_DET_DUMP), unsigned(TS_DET_TRACE));
    line.write();
}

void xboxDetFrame()
{
    if (!s_active)
        return;
    if (s_frame == 0u && s_runtime->padBackend().scriptTimed())
    {
        // A timed pad script presses buttons by host time, so two runs see
        // different inputs: det mode takes read-count scripts only.
        XboxReportLine line("[TS:det] timed pad script: rejected (det mode needs a read-count script)");
        line.write();
        ps2x::fatalError("det mode: timed pad script");
    }
    ++s_frame;
    s_frameSinceVblank = true;
    const bool heavy = TS_DET_EVERY <= 1 || s_frame % TS_DET_EVERY == 0u;
    if (heavy)
    {
        hashRam(s_stream[kDetRam]);
        hashIop(s_stream[kDetIop]);
        s_stream[kDetVram].bytes(s_runtime->memory().getGSVRAM(), PS2_GS_VRAM_SIZE);
    }
    s_stream[kDetVu].bytes(s_runtime->memory().getVU1Data(), PS2_VU1_DATA_SIZE);
    hashThreads(s_stream[kDetCtx]);
    hashEe(s_stream[kDetEe]);

    uint32_t value[kDetStreamCount];
    Hasher all;
    for (uint32_t s = 0; s < kDetStreamCount; ++s)
    {
        value[s] = s_stream[s].length != 0u ? s_stream[s].value() : 0u;
        all.u32(value[s]);
        s_stream[s].reset();
    }
    XboxReportLine line("[TS:det]");
    line.add(" f=%u ram=%08x iop=%08x spu=%08x vram=%08x vu=%08x ctx=%08x sched=%08x draw=%08x pcm=%08x ee=%08x ring=%08x all=%08x",
             s_frame, value[kDetRam], value[kDetIop], value[kDetSpu], value[kDetVram], value[kDetVu], value[kDetCtx],
             value[kDetSched], value[kDetDraw], value[kDetPcm], value[kDetEe], value[kDetRing], all.value());
    line.write();
    ++s_counters.frames;

#if TS_DET_DUMP
    if (s_frame == TS_DET_DUMP)
    {
        // Guest RAM as 512 blocks of 64 KB, eight to a line (det_diffram.py).
        const uint8_t *rdram = s_runtime->memory().getRDRAM();
        constexpr uint32_t kBlock = 64u * 1024u;
        for (uint32_t base = 0; base < PS2_RAM_SIZE; base += 8u * kBlock)
        {
            XboxReportLine dump("[TS:detram]");
            dump.add(" f=%u at=%08x", s_frame, base);
            for (uint32_t b = 0; b < 8u; ++b)
            {
                Hasher h;
                h.bytes(rdram + base + b * kBlock, kBlock);
                dump.add(" %08x", h.value());
            }
            dump.write();
        }
    }
#endif

    if (s_frame % 60u == 0u)
    {
        const ps2x::EeProtocolStats &ee = ps2x::g_eeProtocolStats;
        XboxReportLine counters("[TS:detc]");
        counters.add(" f=%u hosttime=%u pinnedTime=%u remote=%u catchup=%u pinnedIdle=%u frozen=%u excl=%u dropped=%u",
                     s_frame, ps2xHostTimeRealReads(), ps2xHostTimePinnedReads(), ee.remoteEvents, ee.catchUps,
                     ee.pinnedIdle, ee.frozenCheckpoints, s_counters.exclusions, s_counters.exclusionsDropped);
        counters.write();
    }
}

bool xboxDetActive()
{
    return s_active;
}

bool xboxDetSilentAudio()
{
    return s_active;
}

std::unique_ptr<GSRasterBackend> xboxDetWrapBackend(std::unique_ptr<GSRasterBackend> backend)
{
    if (!backend)
        return backend;
    return std::make_unique<DetBackend>(std::move(backend));
}

const XboxDetCounters &xboxDetCounters()
{
    return s_counters;
}
#endif // TS_DET

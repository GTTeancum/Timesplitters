// Native display-list builders: see ts_native_dl.h.
#include "ts_native_dl.h"
#include "ts_gif_trace.h" // the emit self-check's GS-level trace (TS_NATIVE_EMIT_SELFCHECK)
#include "ts_inplace.h"       // M8's glue, installed from here (below)
#include "ts_knobs.h"
#include "ts_record_direct.h" // R2's direct path, installed from here (below)

#if defined(PLATFORM_XBOX)
#include "../../src/xbox/gs_nv2a_backend.h" // g_nv2aTextureStats: the backend half's counters
#include "../../src/xbox/xbox_perf.h"       // the [TS:emit] report line
#endif

// The Tier 1 op code is compiled in every Xbox build (TS_NATIVE_EMIT_OPS
// only installs it; off, nothing refers to it and the linker drops it).
#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"
#include "runtime/ps2_vif1_reader.h"
#include "runtime/ps2_vif1_records.h"
#include "ts_list_tokens.h"

#include <cstdio>
#include <cstring>
#include <memory>
#include <utility>
#endif

TsEmitKnobs g_tsEmitKnobs;
TsEmitStats g_tsEmitStats;

#if defined(PLATFORM_XBOX)
namespace
{
    // ---- Tier 1 packet ops (TS_NATIVE_EMIT_OPS, ts_native_dl.h).

    // The builders whose list entries become ops (their table entries are
    // wrapped; the natives among them, dlSetClip, dlSetBlend and
    // decalDraw, are wrapped as they are). decalDraw's tail appends the
    // decal's texture kick and its packet: one op.
    struct BuilderInfo
    {
        uint32_t address;
        const char *name;
    };
    constexpr BuilderInfo kBuilders[] = {
        {0x2B7CD0u, "dlSetZB"},
        {0x2B7EA8u, "dlSetBlend"},
        {0x2B7DF0u, "dlSetDitherMatrix"},
        {0x2B8318u, "dlSetFBMSK"},
        {0x2B8050u, "dlSetClip"},
        {0x2B7C98u, "dlSetClipTag"},
        {0x2B7AD0u, "dlSelectTextureKick"},
        {0x2B8C08u, "dlTextureRectangle"},
        {0x2B8DF8u, "dlTextureRectangleFloat"},
        {0x2B8420u, "dlFillRectangle"},
        {0x2B85C8u, "dlFillRectangleFloat"},
        {0x2B8178u, "dlClearFB"},
        {0x2B8A10u, "dlDrawTriangleStrip"},
        {0x2A5B20u, "decalDraw"},
    };
    constexpr uint32_t kBuilderCount = uint32_t(sizeof(kBuilders) / sizeof(kBuilders[0]));
    PS2Runtime::RecompiledFunction s_original[kBuilderCount] = {};

    // The game's display list: the write pointer (16-byte entries: QWC
    // halfword, the tag's top byte, ADDR) and REF's top byte as the
    // builders write it (ID 3, no PCE, no IRQ).
    constexpr uint32_t kGpListPointer = 0x6C60u;
    constexpr uint8_t kRefTopByte = 0x30u;
    constexpr uint32_t kRamBytes = 0x02000000u;

    // An op: the guest spans (the REF payloads, in list order) whose VIF
    // stream the token stands for. Ops live in a ring; a slot is taken again
    // only when its op is kOpAgeFrames game frames old (a list is drawn at
    // most two frames after it is built: the game's two frame slots). With
    // no free slot the builder's entries stay as they are.
    constexpr uint32_t kOpSpans = 12u, kOps = 384u, kOpAgeFrames = 3u;
    constexpr uint32_t kOpScanBytes = 4096u; // the longest stream an op takes (the scan's copy)
    struct Span
    {
        uint32_t addr, bytes;
    };
    struct EmitOp
    {
        uint32_t frame = 0;
        uint32_t spans = 0, bytes = 0;
        bool used = false;
        Span span[kOpSpans];
    };
    EmitOp s_ops[kOps];
    uint32_t s_opNext = 0;
    // The op the last conversion made or extended, where its token tag is
    // and the list position after its entries (a builder appending right
    // there extends it), and the token tag's bytes as written.
    struct LastOp
    {
        EmitOp *op = nullptr;
        uint32_t tagAddr = 0, end = 0;
        uint8_t tag[16] = {};
    };
    LastOp s_last;
    uint32_t s_depth = 0; // wrapped builders in progress (only the outermost converts)
    uint32_t s_ringFull = 0, s_rejected = 0, s_slowOps = 0;

    inline uint8_t *at(uint8_t *rdram, uint32_t addr) { return rdram + (addr & (kRamBytes - 1u)); }
    inline uint32_t rd32(uint8_t *rdram, uint32_t addr)
    {
        uint32_t v;
        std::memcpy(&v, at(rdram, addr), 4);
        return v;
    }
    inline uint16_t rd16(uint8_t *rdram, uint32_t addr)
    {
        uint16_t v;
        std::memcpy(&v, at(rdram, addr), 2);
        return v;
    }
    inline void wr32(uint8_t *rdram, uint32_t addr, uint32_t v) { std::memcpy(at(rdram, addr), &v, 4); }
    inline void wr16(uint8_t *rdram, uint32_t addr, uint16_t v) { std::memcpy(at(rdram, addr), &v, 2); }

    // VIF opcodes (the decoder's, ps2_vif1_interpreter.cpp; the INT bit off).
    enum : uint8_t
    {
        kVifNop = 0x00,
        kVifStcycl = 0x01,
        kVifMark = 0x07,
        kVifFlushE = 0x10,
        kVifFlush = 0x11,
        kVifFlushA = 0x13,
        kVifMscal = 0x14,
        kVifMscalF = 0x15,
        kVifMscnt = 0x17,
        kVifStmask = 0x20,
        kVifStrow = 0x30,
        kVifStcol = 0x31,
    };
    constexpr uint32_t kKickEntry = 0x3FE0u; // the native program's XGKICK entry

    // Walks a VIF stream: true when every command is one the fast replay
    // takes (UNPACK, NOP, the immediates, FLUSHE/FLUSH/FLUSHA,
    // MSCAL/MSCALF/MSCNT, STMASK/STROW/STCOL) and the last one ends exactly
    // at the stream's end. cycle: VIF1 CYCLE at its start (an STCYCL in it
    // moves it); an UNPACK's length follows the decoder's rule.
    bool scanStream(const uint8_t *data, uint32_t bytes, uint32_t cycle)
    {
        uint32_t pos = 0;
        while (pos < bytes)
        {
            if (bytes - pos < 4u)
                return false;
            uint32_t cmd;
            std::memcpy(&cmd, data + pos, 4);
            pos += 4u;
            const uint8_t opcode = (cmd >> 24) & 0x7Fu;
            const uint32_t num = (cmd >> 16) & 0xFFu, imm = cmd & 0xFFFFu;
            if ((opcode & 0x60u) == 0x60u)
            {
                const uint32_t vn = (opcode >> 2) & 3u, vl = opcode & 3u, components = vn + 1u;
                const uint32_t bitsPerComponent = vl == 0u ? 32u : vl == 1u ? 16u : vl == 2u ? 8u : (vn == 3u ? 4u : 16u);
                const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : components * bitsPerComponent;
                const uint32_t bytesPerVector = (bitsPerVector + 7u) / 8u;
                const uint32_t writes = num == 0u ? 256u : num;
                uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8) & 0xFFu;
                cl = cl ? cl : 1u;
                wl = wl ? wl : 1u;
                uint32_t sources = writes;
                if (cl < wl)
                {
                    uint32_t remainder = writes % wl;
                    remainder = remainder > cl ? cl : remainder;
                    sources = (writes / wl) * cl + remainder;
                }
                const uint32_t need = (sources * bytesPerVector + 3u) & ~3u;
                if (need > bytes - pos)
                    return false;
                pos += need;
            }
            else if (opcode <= kVifMark || opcode == kVifFlushE || opcode == kVifFlush || opcode == kVifFlushA ||
                     opcode == kVifMscal || opcode == kVifMscalF || opcode == kVifMscnt)
            {
                if (opcode == kVifStcycl)
                    cycle = imm;
            }
            else if (opcode == kVifStmask)
            {
                if (bytes - pos < 4u)
                    return false;
                pos += 4u;
            }
            else if (opcode == kVifStrow || opcode == kVifStcol)
            {
                if (bytes - pos < 16u)
                    return false;
                pos += 16u;
            }
            else
                return false; // MPG, DIRECT, DIRECTHL, anything else: the decoder's
        }
        return pos == bytes;
    }

    // The op's stream gathered (at most kOpScanBytes) and scanned.
    bool scanOp(uint8_t *rdram, const Span *span, uint32_t spans, uint32_t bytes, uint32_t cycle)
    {
        static uint8_t s_scan[kOpScanBytes];
        if (bytes > kOpScanBytes)
            return false;
        uint32_t pos = 0;
        for (uint32_t i = 0; i < spans; ++i)
        {
            std::memcpy(s_scan + pos, at(rdram, span[i].addr), span[i].bytes);
            pos += span[i].bytes;
        }
        return scanStream(s_scan, bytes, cycle);
    }

    uint32_t makePieces(PS2Memory &memory, const EmitOp &op, PS2Memory::Vif1Piece *pieces)
    {
        uint8_t *rdram = memory.getRDRAM();
        for (uint32_t i = 0; i < op.spans; ++i)
            pieces[i] = {at(rdram, op.span[i].addr), op.span[i].bytes};
        return op.spans;
    }

    // The op at its list position. The fast replay: each command through
    // the decoder's helper for it, with the decoder's bookkeeping (CODE,
    // NUM, INT), and an MSCAL of the kick entry as the kick (the packet the
    // UNPACKs just wrote, read from VU1 memory at the run's TOP, as the
    // program reads it) and its VIF bookkeeping. Anything the fast replay
    // does not take, a dry decode, no native program or GS: the decoder
    // takes the spans whole.
    void runOp(PS2Memory &memory, const EmitOp &op, bool dry)
    {
        PS2Memory::Vif1Piece pieces[kOpSpans];
        const uint32_t count = makePieces(memory, op, pieces);
        GS *gs = memory.vif1NativeGs();
        if (dry || !gs || !memory.vif1NativeActive() ||
            !scanOp(memory.getRDRAM(), op.span, op.spans, op.bytes, memory.vif1_regs.cycle))
        {
            if (!dry)
                ++s_slowOps;
            memory.processVIF1Pieces(pieces, count, op.bytes);
            return;
        }
        Vif1PieceReader in(pieces, count, op.bytes);
        PS2Memory::Vif1UnpackCounts counts;
        uint32_t cmd;
        while (in.word(cmd))
        {
            const uint8_t opcode = (cmd >> 24) & 0x7Fu;
            VIFRegisters &vif = memory.vif1_regs;
            vif.code = cmd;
            vif.num = (cmd >> 16) & 0xFFu;
            if ((cmd & 0x80000000u) != 0u)
                vif.stat |= (1u << 11); // INT
            if ((opcode & 0x60u) == 0x60u)
                memory.vif1Unpack(cmd, in, counts, true);
            else if (opcode == kVifNop || opcode == kVifFlushE || opcode == kVifFlush || opcode == kVifFlushA)
                continue;
            else if (opcode <= kVifMark)
                memory.vif1Immediate(cmd);
            else if ((opcode == kVifMscal || opcode == kVifMscalF) && (cmd & 0xFFFFu) * 8u == kKickEntry)
            {
                // The run's TOP is TOPS now; the kick reads only VU1 memory.
                const uint32_t top = vif.tops & 0x3FFu;
                if (vu1NativeKick(memory.getVU1Data(), top, &memory, *gs))
                    memory.noteNativeMscal(kKickEntry, 1u, cmd);
                else
                    memory.vif1Mscal(cmd); // the program would decline too: the translator runs it
            }
            else if (opcode == kVifMscal || opcode == kVifMscalF || opcode == kVifMscnt)
                memory.vif1Mscal(cmd);
            else
                memory.vif1Stxx(cmd, in);
        }
        g_vif1StreamStats.fastVectors += counts.fast;
        g_vif1StreamStats.slowVectors += counts.slow;
    }

    // The old way and the op's, from one saved state, into a recording
    // backend (ts_native_dl.h). (Compiled in every Xbox build; called only
    // with TS_NATIVE_EMIT_SELFCHECK.)
    struct CheckState
    {
        VIFRegisters vif;
        uint8_t vu[PS2_VU1_DATA_SIZE];
        GS::CheckState gs;
    };
    // Function-local, so a build without the check has neither.
    CheckState &checkState()
    {
        static CheckState s_check;
        return s_check;
    }
    std::unique_ptr<GSRasterBackend> &recorderSlot() // made at registration (no allocation in a match)
    {
        static std::unique_ptr<GSRasterBackend> s_recorder;
        return s_recorder;
    }
    uint32_t s_checkTick = 0;

    uint64_t hashBytes(const uint8_t *p, uint32_t n)
    {
        uint64_t h = 1469598103934665603ull;
        for (uint32_t i = 0; i < n; ++i)
            h = (h ^ p[i]) * 1099511628211ull;
        return h;
    }

    void selfCheck(PS2Memory &memory, const EmitOp &op)
    {
        if (++s_checkTick % TS_NATIVE_EMIT_SELFCHECK_EVERY != 0u)
            return;
        CheckState &s_check = checkState();
        std::unique_ptr<GSRasterBackend> &s_recorder = recorderSlot();
        GS *gs = memory.vif1NativeGs();
        // A queued GIF packet would be delivered after the backend is given
        // back: only with the arbiter empty.
        if (!gs || !s_recorder || (memory.gifArbiter() && !memory.gifArbiter()->empty()))
            return;
        auto *recorder = static_cast<ts_gif_trace::RecordingBackend *>(s_recorder.get());
        uint8_t *vu = memory.getVU1Data();
        s_check.vif = memory.vif1_regs;
        std::memcpy(s_check.vu, vu, PS2_VU1_DATA_SIZE);
        gs->saveCheckState(s_check.gs);
        std::unique_ptr<GSRasterBackend> real = gs->swapBackendForCheck(std::move(s_recorder));
        auto restore = [&] {
            memory.vif1_regs = s_check.vif;
            std::memcpy(vu, s_check.vu, PS2_VU1_DATA_SIZE);
            gs->restoreCheckState(s_check.gs);
        };
        // The old way: the decoder on the spans.
        PS2Memory::Vif1Piece pieces[kOpSpans];
        const uint32_t count = makePieces(memory, op, pieces);
        recorder->reset();
        memory.processVIF1Pieces(pieces, count, op.bytes);
        recorder->finish();
        const ts_gif_trace::Trace oldTrace = recorder->trace;
        const VIFRegisters oldVif = memory.vif1_regs;
        const uint64_t oldVu = hashBytes(vu, PS2_VU1_DATA_SIZE);
        restore();
        // The op's way.
        recorder->reset();
        runOp(memory, op, false);
        recorder->finish();
        const bool traceSame = recorder->trace == oldTrace;
        const bool vifSame = std::memcmp(&oldVif, &memory.vif1_regs, sizeof(VIFRegisters)) == 0;
        const bool vuSame = hashBytes(vu, PS2_VU1_DATA_SIZE) == oldVu;
        restore();
        s_recorder = gs->swapBackendForCheck(std::move(real));
        ++g_tsEmitStats.checked;
        if (!(traceSame && vifSame && vuSame) && ++g_tsEmitStats.diffs <= 8u)
            std::fprintf(stderr, "[TS:emit] emitdiff op spans=%u bytes=%u first=%06x: trace=%d vif=%d vu=%d\n", op.spans,
                         op.bytes, op.span[0].addr, traceSame ? 1 : 0, vifSame ? 1 : 0, vuSame ? 1 : 0);
    }

    // The executor (ts_list_tokens.h) for kTsListKindEmitOps.
    void executeOp(PS2Memory &memory, const Vif1Token &token, bool dry)
    {
        const EmitOp *op = static_cast<const EmitOp *>(token.info);
        if (!op || op->spans == 0u)
            return;
        if (!dry)
            ++g_tsEmitStats.ops;
        if (TS_NATIVE_EMIT_SELFCHECK && !dry)
            selfCheck(memory, *op);
        runOp(memory, *op, dry);
    }

    // Whether the entries from s_last.tagAddr up to s_last.end are still the
    // last conversion's: its token tag as written, then REF tags with QWC 0
    // (a new list in the same buffer has written its own entries there).
    bool lastIntact(uint8_t *rdram)
    {
        if (!s_last.op || std::memcmp(at(rdram, s_last.tagAddr), s_last.tag, 16) != 0)
            return false;
        for (uint32_t a = s_last.tagAddr + 16u; a < s_last.end; a += 16u)
            if (rd16(rdram, a) != 0u || at(rdram, a)[3] != kRefTopByte || rd32(rdram, a + 4u) != 0u)
                return false;
        return true;
    }

    // A builder returned normally having appended the entries [before,
    // after): REF tags to its packets (and to those of the builders it
    // called) become one op token, or extend the last op.
    void convert(uint8_t *rdram, uint32_t gp, uint32_t before)
    {
        const uint32_t after = rd32(rdram, gp - kGpListPointer);
        if (after <= before || ((after - before) & 15u) != 0u || after - before > kOpSpans * 16u)
            return;
        const uint32_t entries = (after - before) / 16u;
        Span span[kOpSpans];
        uint32_t bytes = 0;
        for (uint32_t e = 0; e < entries; ++e)
        {
            const uint32_t tag = before + e * 16u;
            const uint32_t qwc = rd16(rdram, tag), addr = rd32(rdram, tag + 4u);
            if (at(rdram, tag)[3] != kRefTopByte || qwc == 0u || addr == 0u || (addr & 15u) != 0u ||
                addr >= kRamBytes || addr + qwc * 16u > kRamBytes)
            {
                ++s_rejected;
                return;
            }
            span[e] = {addr, qwc * 16u};
            bytes += qwc * 16u;
        }
        // The builder's own stream must parse whole from its first command
        // (the decoder's CYCLE is not known until the list is walked: the
        // packets' rule, one source vector a write, is assumed here and
        // checked again at the token).
        if (!scanOp(rdram, span, entries, bytes, 0x0101u) || !tsListTokensEnabled(rdram, gp))
        {
            ++s_rejected;
            return;
        }
        const uint32_t frame = g_nv2aTextureStats.gameFrames;
        // Right behind the last op, in the same frame: extend it.
        if (s_last.end == before && s_last.op && s_last.op->frame == frame && s_last.op->spans + entries <= kOpSpans &&
            s_last.op->bytes + bytes <= kOpScanBytes && lastIntact(rdram))
        {
            EmitOp &op = *s_last.op;
            for (uint32_t e = 0; e < entries; ++e)
            {
                op.span[op.spans++] = span[e];
                wr16(rdram, before + e * 16u, 0u); // REF, QWC 0: nothing
                wr32(rdram, before + e * 16u + 4u, 0u);
            }
            op.bytes += bytes;
            s_last.end = after;
            ++g_tsEmitStats.packets;
            return;
        }
        EmitOp &op = s_ops[s_opNext];
        if (op.used && frame - op.frame < kOpAgeFrames)
        {
            ++s_ringFull;
            return;
        }
        op.used = true;
        op.frame = frame;
        op.spans = entries;
        op.bytes = bytes;
        for (uint32_t e = 0; e < entries; ++e)
            op.span[e] = span[e];
        // The token takes the first entry; the others become REF tags with
        // QWC 0, so the list keeps its length.
        wr32(rdram, gp - kGpListPointer, before);
        if (tsListTokenWrite(rdram, gp, kTsListKindEmitOps, &op) == UINT32_MAX)
        {
            wr32(rdram, gp - kGpListPointer, after);
            op.used = false;
            ++s_rejected;
            return;
        }
        for (uint32_t e = 1; e < entries; ++e)
        {
            wr16(rdram, before + e * 16u, 0u);
            wr32(rdram, before + e * 16u + 4u, 0u);
        }
        wr32(rdram, gp - kGpListPointer, after);
        s_opNext = (s_opNext + 1u) % kOps;
        s_last.op = &op;
        s_last.tagAddr = before;
        s_last.end = after;
        std::memcpy(s_last.tag, at(rdram, before), 16);
        ++g_tsEmitStats.packets;
    }

    template <uint32_t Index>
    void builderWrapper(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (s_depth != 0u || g_tsEmitKnobs.ops == 0u)
        {
            ++s_depth;
            s_original[Index](rdram, ctx, runtime);
            --s_depth;
            return;
        }
        const uint32_t gp = GPR_U32(ctx, 28), ret = GPR_U32(ctx, 31);
        const uint32_t before = rd32(rdram, gp - kGpListPointer);
        ++s_depth;
        s_original[Index](rdram, ctx, runtime);
        --s_depth;
        if (ctx->pc == ret) // returned to its caller (not unwound to the scheduler)
            convert(rdram, gp, before);
    }

    template <uint32_t... I>
    constexpr void fillWrappers(PS2Runtime::RecompiledFunction (&out)[kBuilderCount], std::integer_sequence<uint32_t, I...>)
    {
        ((out[I] = &builderWrapper<I>), ...);
    }
    struct Wrappers
    {
        PS2Runtime::RecompiledFunction fn[kBuilderCount] = {};
        constexpr Wrappers() { fillWrappers(fn, std::make_integer_sequence<uint32_t, kBuilderCount>{}); }
    };
    constexpr Wrappers kWrappers;

    void installBuilders(PS2Runtime &runtime)
    {
        uint32_t installed = 0;
        for (uint32_t i = 0; i < kBuilderCount; ++i)
        {
            const uint32_t address = kBuilders[i].address;
            if (!runtime.hasFunction(address))
            {
                std::fprintf(stderr, "[TS:emit] %s (%06x): no function\n", kBuilders[i].name, address);
                continue;
            }
            const PS2Runtime::RecompiledFunction current = runtime.lookupFunction(address);
            if (current != kWrappers.fn[i]) // applied before: the game loaded again
            {
                s_original[i] = current;
                runtime.replaceFunction(address, kWrappers.fn[i]);
            }
            installed += runtime.lookupFunction(address) == kWrappers.fn[i] ? 1u : 0u;
        }
        tsListTokenRegisterExecutor(kTsListKindEmitOps, &executeOp);
        if (TS_NATIVE_EMIT_SELFCHECK && !recorderSlot())
            recorderSlot() = std::make_unique<ts_gif_trace::RecordingBackend>();
        std::fprintf(stderr, "[TS:emit] Tier 1 ops: %u of %u builders wrapped (selfcheck=%d every %d)\n", installed,
                     kBuilderCount, TS_NATIVE_EMIT_SELFCHECK, TS_NATIVE_EMIT_SELFCHECK_EVERY);
    }
}
#endif // PLATFORM_XBOX (the Tier 1 ops)

#if defined(PLATFORM_XBOX)
namespace
{
    // [TS:emit] (section 5.10's validation): per frame since the last line,
    // the native program's kicks and their qwords, the share Tier 0 took
    // (t0) and left to the arbiter (busy), the backend's bulk calls, their
    // primitives and the calls it declined (the front end then kicked those
    // one by one), the texture kicks the draw path sent no strip for, and
    // the screen ring's segment hand-overs and waits; then the Tier 1 ops
    // run at their tokens and the builder calls converted, and the emit
    // self-check's totals.
    void emitReportLine(XboxReportLine &line)
    {
        struct Snapshot
        {
            uint32_t frames, kicks, qwords, t0, busy, bulk, prims, declined, texKicks, segments, waits, ops, packets;
        };
        static Snapshot s_prev{};
        const GSNv2aTextureStats &t = g_nv2aTextureStats;
        const TsEmitStats &e = g_tsEmitStats;
        const Snapshot now{t.gameFrames, e.kicks,     e.kickQwords,    e.tier0,    e.tier0Busy,
                           t.bulkCalls,  t.bulkPrims, t.bulkDeclined, t.texKicks, t.screenSegments,
                           t.waitScreen, e.ops,       e.packets};
        const uint32_t frames = now.frames - s_prev.frames;
        line.perFrame("kick", now.kicks - s_prev.kicks, frames);
        line.perFrame("kqw", now.qwords - s_prev.qwords, frames);
        line.perFrame("t0", now.t0 - s_prev.t0, frames);
        line.perFrame("busy", now.busy - s_prev.busy, frames);
        line.perFrame("bulk", now.bulk - s_prev.bulk, frames);
        line.perFrame("prims", now.prims - s_prev.prims, frames);
        line.perFrame("decl", now.declined - s_prev.declined, frames);
        line.perFrame("texkick", now.texKicks - s_prev.texKicks, frames);
        line.add(" seg=%u/%u", now.segments - s_prev.segments, now.waits - s_prev.waits);
        line.perFrame("ops", now.ops - s_prev.ops, frames);
        line.perFrame("conv", now.packets - s_prev.packets, frames);
        if (TS_NATIVE_EMIT_OPS)
            line.add(" opfull=%u oprej=%u opslow=%u", s_ringFull, s_rejected, s_slowOps);
        if (e.checked)
            line.add(" emitdiff=%u/%u", e.diffs, e.checked);
        line.add(" knobs=%u/%u", g_tsEmitKnobs.tier0, g_tsEmitKnobs.ops);
        s_prev = now;
    }
}
#endif

void registerTsNativeDl(PS2Runtime &runtime)
{
    (void)runtime;
    tsKnobRegister("emit.tier0", &g_tsEmitKnobs.tier0, 1u);
    tsKnobRegister("emit.ops", &g_tsEmitKnobs.ops, 1u);
#if TS_NATIVE_EMIT_OPS
    installBuilders(runtime);
#endif
    // C-XF's R2 and M8 parts (ts_record_direct.h, ts_inplace.h) have no
    // registration of their own until C-REC's records engine calls them:
    // their debt settler, writer hooks and report lines go in here, only
    // when switched on.
#if defined(PLATFORM_XBOX) && (TS_RECORD_DIRECT || TS_NATIVE_INPLACE)
    tsRecordDirectInstall(runtime.memory());
#endif
#if defined(PLATFORM_XBOX) && TS_NATIVE_INPLACE
    tsInplaceInstall(runtime);
#endif
#if defined(PLATFORM_XBOX)
    xboxRegisterReportLine("[TS:emit]", &emitReportLine);
#endif
}

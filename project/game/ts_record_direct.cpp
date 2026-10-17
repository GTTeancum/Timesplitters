// R2, the records engine's direct path: see ts_record_direct.h.
#include "ts_record_direct.h"
#include "ts_inplace.h"
#include "ts_record_debt.h"

#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"
#include "vu1_native_draw.h"
#include "vu1_native_material.h"
#include "vu1_native_xf.h"
#if defined(PLATFORM_XBOX)
#include "../../src/xbox/xbox_perf.h" // the [TS:r2] report line; TS_NATIVE_INPLACE
#endif
#ifndef TS_NATIVE_INPLACE
#define TS_NATIVE_INPLACE 0
#endif

#include <cstdint>
#include <cstdio>
#include <cstring>

TsDirectStats g_tsDirectStats;

namespace
{
    using ts_native_xf::kDataQwords;
    using ts_native_xf::Layout;
    constexpr uint32_t kRowMask = kDataQwords - 1u;
    constexpr uint32_t kRamMask = 0x01FFFFFFu;

    // ---- An UNPACK's format, by the decoder's rules
    // (ps2_vif1_interpreter.cpp: vif1Unpack's sizes, unpackFast's lanes).
    uint32_t bytesPerVector(uint8_t format)
    {
        const uint32_t vn = (format >> 2) & 3u, vl = format & 3u, components = vn + 1u;
        const uint32_t bitsPerComponent = vl == 0u ? 32u : vl == 1u ? 16u : vl == 2u ? 8u : (vn == 3u ? 4u : 16u);
        const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : components * bitsPerComponent;
        return (bitsPerVector + 7u) / 8u;
    }
    // The formats unpackFast writes (the others go through the decoder's
    // general path, which the direct path does not take).
    bool formatTaken(uint8_t format) { return (format & 3u) != 3u || format == 0xFu; }
    // Lanes written: S formats fill all four, V2 and V3 leave the rest.
    uint32_t lanesWritten(uint8_t format)
    {
        const uint32_t vn = (format >> 2) & 3u;
        return vn == 0u ? 4u : vn + 1u;
    }
    inline uint32_t ext16(uint16_t raw, bool zero) { return zero ? raw : uint32_t(int32_t(int16_t(raw))); }
    inline uint32_t ext8(uint8_t raw, bool zero) { return zero ? raw : uint32_t(int32_t(int8_t(raw))); }
    inline uint32_t load32(const uint8_t *p)
    {
        uint32_t v;
        std::memcpy(&v, p, 4);
        return v;
    }
    inline uint16_t load16(const uint8_t *p)
    {
        uint16_t v;
        std::memcpy(&v, p, 2);
        return v;
    }
    // Vector `src` of the format onto `lanes` (only the lanes it writes).
    void decodeVector(uint8_t format, bool zero, const uint8_t *s, uint32_t lanes[4])
    {
        switch (format)
        {
        case 0x0: lanes[0] = lanes[1] = lanes[2] = lanes[3] = load32(s); break;           // S-32
        case 0x4: lanes[0] = load32(s); lanes[1] = load32(s + 4); break;                   // V2-32
        case 0x8: lanes[0] = load32(s); lanes[1] = load32(s + 4); lanes[2] = load32(s + 8); break; // V3-32
        case 0xC: std::memcpy(lanes, s, 16); break;                                       // V4-32
        case 0x1: lanes[0] = lanes[1] = lanes[2] = lanes[3] = ext16(load16(s), zero); break; // S-16
        case 0x5:                                                                         // V2-16
            lanes[0] = ext16(load16(s), zero);
            lanes[1] = ext16(load16(s + 2), zero);
            break;
        case 0x9: // V3-16
            lanes[0] = ext16(load16(s), zero);
            lanes[1] = ext16(load16(s + 2), zero);
            lanes[2] = ext16(load16(s + 4), zero);
            break;
        case 0xD: // V4-16
            for (uint32_t i = 0; i < 4u; ++i)
                lanes[i] = ext16(load16(s + 2u * i), zero);
            break;
        case 0x2: lanes[0] = lanes[1] = lanes[2] = lanes[3] = ext8(s[0], zero); break; // S-8
        case 0x6: lanes[0] = ext8(s[0], zero); lanes[1] = ext8(s[1], zero); break;     // V2-8
        case 0xA: // V3-8
            lanes[0] = ext8(s[0], zero);
            lanes[1] = ext8(s[1], zero);
            lanes[2] = ext8(s[2], zero);
            break;
        case 0xE: // V4-8
            for (uint32_t i = 0; i < 4u; ++i)
                lanes[i] = ext8(s[i], zero);
            break;
        case 0xF: // V4-5
        {
            const uint32_t v = load16(s);
            lanes[0] = v & 0x1Fu;
            lanes[1] = (v >> 5) & 0x1Fu;
            lanes[2] = (v >> 10) & 0x1Fu;
            lanes[3] = (v >> 15) & 0x01u;
            break;
        }
        default: break;
        }
    }
    inline uint32_t arrayRows(const TsDirectArray &a) { return a.count == 0u ? 256u : a.count; }
    // Whether `a` writes row q; its vector index there.
    inline bool covers(const TsDirectArray &a, uint32_t q, uint32_t &k)
    {
        k = (q - a.row) & kRowMask;
        return k < arrayRows(a);
    }

    // VU1 row q as it is now, owed rows settled first (an earlier batch's
    // skipped UNPACKs).
    inline void vuRow(const uint8_t *data, uint32_t q, uint32_t lanes[4])
    {
        q &= kRowMask;
        if (tsDebtAny(q, 1u))
            tsDebtSettle(q, 1u, TsDebtReason::Explicit);
        std::memcpy(lanes, data + q * 16u, 16);
    }

    // The batch read where it lies (ts_native_draw::runDrawT's Source).
    struct GuestSource
    {
        uint8_t *data;        // VU1 data memory
        const uint8_t *rdram; // guest RAM
        const TsDirectArray *arrays;
        uint32_t count;
        mutable uint8_t stateRows[32u * 16u]; // rows(): the state block gathered

        const uint8_t *vuData() const { return data; }

        // Row q as the batch's UNPACKs would have left it: the arrays that
        // write it applied in order onto VU1 memory (only from the last one
        // writing every lane on, when there is one).
        void row(uint32_t q, void *out) const
        {
            q &= kRowMask;
            uint32_t lanes[4];
            uint32_t from = 0;
            bool whole = false;
            for (uint32_t i = count; i-- > 0u;)
            {
                uint32_t k;
                if (covers(arrays[i], q, k) && lanesWritten(arrays[i].format) == 4u)
                {
                    from = i;
                    whole = true;
                    break;
                }
            }
            if (!whole)
                vuRow(data, q, lanes);
            for (uint32_t i = from; i < count; ++i)
            {
                const TsDirectArray &a = arrays[i];
                uint32_t k;
                if (covers(a, q, k))
                    decodeVector(a.format, a.zeroExtend,
                                 rdram + ((a.guestAddr + k * bytesPerVector(a.format)) & kRamMask), lanes);
            }
            std::memcpy(out, lanes, 16);
        }
        // Rows q.. in one place (the state block; at most 32 rows).
        const uint8_t *rows(uint32_t q) const
        {
            for (uint32_t i = 0; i < 32u; ++i)
                row(q + i, stateRows + i * 16u);
            return stateRows;
        }

        // Vertex v of the strip at vi, as ts_native_xf::decodeXfVertex
        // decodes it from VU1 memory (the same bytes, field by field).
        void decodeVertex(const Layout &L, uint32_t vi, uint32_t v, GSXfVertex &o) const
        {
            uint32_t r[4];
            row(vi + L.pos + v, r);
            std::memcpy(&o.x, r, 12);
            if (L.lit || L.envMap)
            {
                row(vi + L.normal + v, r);
                std::memcpy(&o.nx, r, 12);
            }
            else
                o.nx = o.ny = o.nz = 0.0f;
            row(vi + L.rgba + v, r);
            o.color = (r[2] & 0xFFu) | ((r[1] & 0xFFu) << 8) | ((r[0] & 0xFFu) << 16) | ((r[3] & 0xFFu) << 24);
            if (L.envMap)
            {
                o.s = o.t = 0.0f;
                o.q = 1.0f;
            }
            else
            {
                row(vi + L.st + v, r);
                std::memcpy(&o.s, r, 8);
                uint32_t q = r[2];
                q = (q & 0x7FFFFFFFu) == 0u ? 0x3F800000u : q; // as the GS treats Q = 0
                std::memcpy(&o.q, &q, 4);
            }
            uint32_t bone = 0;
            if (L.skinned)
            {
                row(vi + L.boneIndex + v, r);
                bone = std::min<uint32_t>(r[0] & 0xFFFFu, 2u);
            }
            o.bone4 = static_cast<float>(bone * 4u);
        }
        // The strip into the renderer's ring (write-combined): each record
        // built in a local and stored whole, front to back, as
        // ts_native_xf::writeJoinedStripKind lays the run out.
        void writeJoinedStrip(uint32_t kind, GSXfCursor &cursor, uint32_t vi, uint32_t n) const
        {
            const Layout &L = ts_native_xf::kLayouts[kind & 3u];
            GSXfVertex *out = cursor.next;
            GSXfVertex v;
            if (cursor.join)
            {
                ts_native_xf::copyXfVertex(out, cursor.last);
                decodeVertex(L, vi, 0u, v);
                ts_native_xf::copyXfVertex(out + 1, v);
                out += 2;
            }
            for (uint32_t i = 0; i + 1u < n; ++i)
            {
                decodeVertex(L, vi, i, v);
                ts_native_xf::copyXfVertex(out + i, v);
            }
            decodeVertex(L, vi, n - 1u, cursor.last);
            ts_native_xf::copyXfVertex(out + n - 1u, cursor.last);
            cursor.next = out + n;
            cursor.join = true;
            ++cursor.strips;
            cursor.vertices += n;
        }
        void decodeStrip(uint32_t kind, uint32_t vi, uint32_t n, GSXfVertex *out) const
        {
            const Layout &L = ts_native_xf::kLayouts[kind & 3u];
            for (uint32_t i = 0; i < n; ++i)
                decodeVertex(L, vi, i, out[i]);
        }
        void decodeReference(const Layout &L, uint32_t vi, uint32_t v, GSXfVertex &out) const
        {
            decodeVertex(L, vi, v, out);
        }

        // M8 (ts_inplace.h): the strip's arrays where they lie, when one
        // array alone writes each attribute's rows of the strip; runDrawT
        // hands an eligible strip to the renderer to fetch in place.
        // (Compiled whatever the switch says; off, the prepare declines.)
        bool inPlaceStrip(uint32_t kind, uint32_t vi, uint32_t n, GSXfInPlaceStrip &out) const
        {
            if (!TS_NATIVE_INPLACE)
                return false;
            const Layout &L = ts_native_xf::kLayouts[kind & 3u];
            const uint32_t offsets[kTsInplaceRoles] = {L.pos, L.normal, L.rgba, L.st, L.boneIndex};
            TsInplaceSource sources[kTsInplaceRoles];
            for (uint32_t role = 0; role < kTsInplaceRoles; ++role)
                sources[role] = sourceOf((vi + offsets[role]) & kRowMask, n);
            if (!tsInplacePrepareStrip(kind, n, sources, out))
                return false;
            if (TS_INPLACE_SELFCHECK && (g_tsInplaceStats.prepared % TS_INPLACE_SELFCHECK_EVERY) == 0u)
            {
                // The fetch the NV2A will make, emulated, against the
                // ring's decode of the same strip.
                ++g_tsInplaceStats.checked;
                for (uint32_t v = 0; v < n; ++v)
                {
                    GSXfVertex fetched, decoded;
                    tsInplaceFetch(out, kind, v, fetched);
                    decodeVertex(L, vi, v, decoded);
                    if (std::memcmp(&fetched, &decoded, sizeof(GSXfVertex)) != 0)
                    {
                        if (++g_tsInplaceStats.diffs <= 8u)
                            std::fprintf(stderr, "[TS:inplace] idiff strip at row %u vertex %u (kind %u)\n", vi, v, kind);
                        return false; // the ring writes it
                    }
                }
            }
            return true;
        }
        // The one array writing rows [row, row + n), from its element there
        // on (none: host null).
        TsInplaceSource sourceOf(uint32_t row, uint32_t n) const
        {
            TsInplaceSource s;
            const TsDirectArray *only = nullptr;
            uint32_t first = 0;
            for (uint32_t i = 0; i < count; ++i)
            {
                const TsDirectArray &a = arrays[i];
                const uint32_t k = (row - a.row) & kRowMask, rows = arrayRows(a);
                const bool overlaps = k < rows || ((a.row - row) & kRowMask) < n;
                if (!overlaps)
                    continue;
                if (only || k >= rows || k + n > rows)
                    return s; // two arrays, or one covering part of the strip
                only = &a;
                first = k;
            }
            if (!only)
                return s;
            s.host = rdram + ((only->guestAddr + first * bytesPerVector(only->format)) & kRamMask);
            s.format = only->format;
            s.elements = arrayRows(*only) - first;
            return s;
        }
    };

    // The debt settler: rows [row, row + count) of a skipped UNPACK
    // (TsDebtWrite: op = format | USN << 4, aux = its guest address)
    // written as it would have written them. dst: VU1 data memory (or the
    // self-check's scratch).
    void writeRows(uint8_t *dst, const uint8_t *rdram, const TsDebtWrite &w, uint32_t row, uint32_t count)
    {
        const uint8_t format = uint8_t(w.op & 0xFu);
        const bool zero = (w.op & 0x10u) != 0u;
        const uint32_t bpv = bytesPerVector(format);
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t q = (row + i) & kRowMask, k = (q - w.row) & kRowMask;
            if (k >= w.count)
                continue;
            uint32_t lanes[4];
            std::memcpy(lanes, dst + q * 16u, 16);
            decodeVector(format, zero, rdram + ((w.aux + k * bpv) & kRamMask), lanes);
            std::memcpy(dst + q * 16u, lanes, 16);
        }
    }
    void settleRows(void *, PS2Memory &memory, const TsDebtWrite &w, uint32_t row, uint32_t count)
    {
        writeRows(memory.getVU1Data(), memory.getRDRAM(), w, row, count);
        g_vu1WatchedRows.note(row, count);
    }
    TsDebtWrite debtOf(const TsDirectArray &a)
    {
        TsDebtWrite w;
        w.op = uint16_t(a.format | (a.zeroExtend ? 0x10u : 0u));
        w.row = uint16_t(a.row & kRowMask);
        w.count = uint16_t(arrayRows(a));
        w.cycle = 0x0101u;
        w.aux = a.guestAddr;
        return w;
    }

    // The R2 check: the batch UNPACKed into a scratch copy of VU1 memory
    // (every older debt settled first), then every row the arrays write and
    // every vertex of the layout compared between the GuestSource and a
    // VuSource on the scratch. (Compiled whatever the switch says; off,
    // nothing calls it and the optimiser drops it with its scratch.)
    uint8_t s_scratch[kDataQwords * 16u];
    uint32_t s_checkTick = 0;
    void selfCheck(PS2Memory &memory, const Layout &L, const GuestSource &src, const TsDirectBatch &batch)
    {
        if (++s_checkTick % TS_RECORD_DIRECT_SELFCHECK_EVERY != 0u)
            return;
        tsDebtSettleAll(TsDebtReason::Explicit);
        std::memcpy(s_scratch, memory.getVU1Data(), sizeof(s_scratch));
        for (uint32_t i = 0; i < batch.arrayCount; ++i)
        {
            const TsDebtWrite w = debtOf(batch.arrays[i]);
            writeRows(s_scratch, memory.getRDRAM(), w, w.row, w.count);
        }
        ++g_tsDirectStats.checked;
        for (uint32_t i = 0; i < batch.arrayCount; ++i)
        {
            const TsDirectArray &a = batch.arrays[i];
            for (uint32_t k = 0; k < arrayRows(a); ++k)
            {
                const uint32_t q = (a.row + k) & kRowMask;
                uint8_t guest[16];
                src.row(q, guest);
                if (std::memcmp(guest, s_scratch + q * 16u, 16) != 0 && ++g_tsDirectStats.rowDiffs <= 8u)
                    std::fprintf(stderr, "[TS:r2] r2diff row %u (array %u, pc %04x)\n", q, i, batch.pc);
            }
        }
        const ts_native_draw::VuSource vu{s_scratch};
        const uint32_t vi = (batch.top & kRowMask) + L.vertexBase;
        for (uint32_t v = 0; v < 64u && vi + v + 144u < kDataQwords; ++v)
        {
            GSXfVertex a, b;
            vu.decodeReference(L, vi, v, a);
            src.decodeReference(L, vi, v, b);
            if (std::memcmp(&a, &b, sizeof(GSXfVertex)) != 0 && ++g_tsDirectStats.vertexDiffs <= 8u)
                std::fprintf(stderr, "[TS:r2] r2diff vertex %u (pc %04x top %u)\n", v, batch.pc, batch.top);
        }
    }

#if defined(PLATFORM_XBOX)
    void r2ReportLine(XboxReportLine &line)
    {
        const TsDirectStats &s = g_tsDirectStats;
        const TsDebtStats &d = g_tsDebtStats;
        line.add(" batches=%u decl=%u rows=%u", s.batches, s.declined, s.rows);
        line.add(" debt noted=%u cleared=%u owed=%u settled=%u/%u/%u/%u/%u calls=%u", d.noted, d.cleared, d.owedNow,
                 d.settled[0], d.settled[1], d.settled[2], d.settled[3], d.settled[4], d.settles);
        if (s.checked)
            line.add(" r2diff=%u/%u/%u", s.rowDiffs, s.vertexDiffs, s.checked);
    }
#endif
}

uint32_t tsDirectArrayRows(const TsDirectArray &array) { return arrayRows(array); }

bool tsDirectArrayTaken(uint8_t opcode, uint32_t mode, uint32_t cycle)
{
    uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8) & 0xFFu;
    cl = cl ? cl : 1u;
    wl = wl ? wl : 1u;
    return (opcode & 0x60u) == 0x60u && (opcode & 0x10u) == 0u && (mode & 3u) == 0u && cl == wl &&
           formatTaken(uint8_t(opcode & 0xFu));
}

void tsRecordDirectInstall(PS2Memory &memory)
{
    tsDebtAttach(&memory);
    tsDebtSetSettler(nullptr, &settleRows);
#if defined(PLATFORM_XBOX)
    xboxRegisterReportLine("[TS:r2]", &r2ReportLine);
#endif
}

bool tsRecordDirectRun(PS2Memory &memory, GS &gs, const TsDirectBatch &batch)
{
    // (Compiled whatever the switch says; off, the optimiser drops it.)
    if (!TS_RECORD_DIRECT)
        return false;
    const Layout *layout = vu1NativeDrawLayout(batch.pc & 0x3FFFu);
    bool taken = layout && batch.arrayCount <= kTsDirectArrays && memory.getVU1Data();
    for (uint32_t i = 0; i < batch.arrayCount && taken; ++i)
        taken = formatTaken(batch.arrays[i].format);
    if (!taken)
    {
        ++g_tsDirectStats.declined;
        return false;
    }
    GuestSource src{memory.getVU1Data(), memory.getRDRAM(), batch.arrays, batch.arrayCount, {}};
    if (TS_RECORD_DIRECT_SELFCHECK)
        selfCheck(memory, *layout, src, batch);
    ts_native_draw::ProductionSink sink;
    if (!ts_native_draw::runDrawT(*layout, src, batch.top & kRowMask, &memory, gs, sink))
    {
        ++g_tsDirectStats.declined;
        return false;
    }
    // The UNPACKs not made: owed (or, with no debt map attached, made now).
    for (uint32_t i = 0; i < batch.arrayCount; ++i)
    {
        const TsDebtWrite w = debtOf(batch.arrays[i]);
        g_vu1WatchedRows.note(w.row, w.count);
        if (!tsDebtNote(w, lanesWritten(batch.arrays[i].format) == 4u))
            settleRows(nullptr, memory, w, w.row, w.count);
        g_tsDirectStats.rows += w.count;
    }
    ++g_tsDirectStats.batches;
    return true;
}

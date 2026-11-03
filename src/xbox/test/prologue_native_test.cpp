// Host test of the native prologue tokens (TS_NATIVE_REPLAY,
// src/xbox/xbox_part_prologue.cpp), built by test_prologue_native.py against
// a small stand-in for runtime/ps2_memory.h (the shim directory it writes).
//
// Each case builds a partGfx record (xboxPrologueRecord: unlit and lit, or a
// hand-made one), asks the walker side for its marker (xboxPrologueNative)
// and runs it (xboxPrologueDecode). The same record's payloads, as the walker
// lists them without the switch (xboxPrologueExpand), are decoded by a
// reference: the commands they hold run step for step as
// ps2_vif1_interpreter.cpp's decodeVIF1Pieces runs them (NOP, STCYCL, UNPACK
// V4-32 into consecutive rows, MSCAL's register steps and run, FLUSH). VU1
// memory, every VIF1 register, the MSCAL runs (pc, TOP, ITOP and the VU1
// rows they saw) and the watched rows' dirty bits and write count must be
// identical, from random BASE/OFST/TOPS/DBF/ITOPS (TOPS near the end of VU1
// memory too: the rows wrap). Also: records the walker must expand (a REF
// loop's batch, data in the scratchpad, an UNPACK header without data), a
// header changed in guest memory and an open capture (both decoded from the
// payloads), and a record overwritten before the decode.
#include "xbox_model_cache.h"
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

Vu1WatchedRows g_vu1WatchedRows;
bool g_xboxModelCaptureOpen = false;
void xboxModelDecodeMarkerForTest(const uint32_t words[4], uint8_t *vu, VIFRegisters &regs, PS2Memory *memory,
                                  const XboxModelVif &vif);

namespace
{
    uint8_t *g_rdram = nullptr;
    uint8_t g_vu[1024 * 16];
    VIFRegisters *g_regs = nullptr;
    int g_failures = 0;

    struct MscalRun
    {
        uint32_t pc, top, itop;
        uint8_t rows[8][16]; // what the program saw at TOP + 4.. and TOPS + 22..
    };
    std::vector<MscalRun> g_runs;

    // A stand-in constant program: records what it sees and writes as the
    // native constant entries do (rows from the batch to fixed slots, noted).
    void fakeMscal(PS2Memory *, uint32_t pc, uint32_t top, uint32_t itop, bool mscnt)
    {
        if (mscnt)
        {
            std::printf("unexpected MSCNT\n");
            ++g_failures;
        }
        MscalRun run{pc, top, itop, {}};
        for (uint32_t r = 0; r < 4; ++r)
        {
            std::memcpy(run.rows[r], g_vu + ((top + 4u + r) & 1023u) * 16u, 16);
            std::memcpy(run.rows[4 + r], g_vu + ((top + 22u + r) & 1023u) * 16u, 16);
        }
        g_runs.push_back(run);
        const uint32_t to = pc == 0x3d40u ? 4u : pc == 0x3b50u ? 110u : 106u;
        const uint32_t from = pc == 0x3d40u ? top + 4u : pc == 0x3b50u ? top + 26u : top + 22u;
        for (uint32_t r = 0; r < 4; ++r)
            std::memmove(g_vu + ((to + r) & 1023u) * 16u, g_vu + ((from + r) & 1023u) * 16u, 16);
        g_vu1WatchedRows.note(to, 4u);
    }
    void fakeAfter(PS2Memory *, uint32_t, uint32_t) {}
    void fakePath3(PS2Memory *, uint32_t) {}
    const XboxModelVif kVif{fakeMscal, fakeAfter, fakePath3};

    std::vector<std::vector<uint8_t>> g_decoded; // what the fallback handed the decoder

    // ps2_vif1_interpreter.cpp's decodeVIF1Pieces for the commands a
    // prologue holds, on the pieces joined.
    void referenceDecode(const uint8_t *data, uint32_t bytes, VIFRegisters &regs)
    {
        uint32_t at = 0;
        auto word = [&](uint32_t &w) {
            if (at + 4u > bytes)
                return false;
            std::memcpy(&w, data + at, 4);
            at += 4u;
            return true;
        };
        for (uint32_t cmd; word(cmd);)
        {
            const uint8_t opcode = (cmd >> 24) & 0x7F;
            const uint16_t imm = cmd & 0xFFFF;
            const uint8_t num = (cmd >> 16) & 0xFF;
            regs.code = cmd;
            regs.num = num;
            if ((cmd & 0x80000000u) != 0u)
                regs.stat |= 1u << 11;
            if ((opcode & 0x60u) == 0x60u)
            {
                if ((opcode & 0x1Fu) != 0x0Cu || (regs.mode & 3u) != 0u)
                {
                    std::printf("reference: unexpected UNPACK %08x mode %u\n", cmd, regs.mode);
                    ++g_failures;
                    return;
                }
                uint32_t cl = regs.cycle & 0xFFu, wl = (regs.cycle >> 8) & 0xFFu;
                cl = cl ? cl : 1u;
                wl = wl ? wl : 1u;
                const uint32_t n = num ? num : 256u;
                if (cl != wl || at + n * 16u > bytes)
                {
                    std::printf("reference: unexpected cycle or length\n");
                    ++g_failures;
                    return;
                }
                uint32_t vuAddr = imm & 0x3FFu;
                if (imm & 0x8000u)
                    vuAddr = (vuAddr + (regs.tops & 0x3FFu)) & 0x3FFu;
                if (g_vu1WatchedRows.ranges != 0u)
                    g_vu1WatchedRows.note(vuAddr, n);
                for (uint32_t i = 0; i < n; ++i)
                    std::memcpy(g_vu + ((vuAddr + i) & 0x3FFu) * 16u, data + at + i * 16u, 16);
                at += n * 16u;
                continue;
            }
            switch (opcode)
            {
            case 0x00: break;                  // NOP
            case 0x01: regs.cycle = imm; break; // STCYCL
            case 0x10: case 0x11: case 0x13: break; // FLUSHE, FLUSH, FLUSHA
            case 0x14: case 0x15:               // MSCAL, MSCALF
            {
                const uint32_t runTop = regs.tops & 0x3FFu, runItop = regs.itops & 0x3FFu;
                regs.top = runTop;
                regs.itop = runItop;
                regs.tops = (regs.stat & (1u << 7)) ? (regs.base & 0x3FFu) : ((regs.base + regs.ofst) & 0x3FFu);
                regs.stat ^= 1u << 7;
                kVif.mscal(nullptr, uint32_t(imm) * 8u, runTop, runItop, false);
                break;
            }
            default:
                std::printf("reference: unexpected command %08x\n", cmd);
                ++g_failures;
                return;
            }
        }
    }

    uint32_t rng = 12345u;
    uint32_t next()
    {
        rng = rng * 1664525u + 1013904223u;
        return rng >> 8;
    }

    void fillMatrix(uint32_t addr)
    {
        for (uint32_t i = 0; i < 64u; i += 4u)
        {
            const uint32_t v = next();
            std::memcpy(g_rdram + (addr & PS2_RAM_MASK) + i, &v, 4);
        }
    }

    void randomRegs(VIFRegisters &r, bool nearEnd)
    {
        std::memset(&r, 0, sizeof(r));
        r.base = next() & 0x3FFu;
        r.ofst = next() & 0x3FFu;
        r.tops = nearEnd ? 1000u + (next() % 24u) : next() & 0x3FFu;
        r.itops = next() & 0x3FFu;
        r.stat = (next() & 1u) << 7 | (next() & 0x40u);
        r.cycle = next() & 0xFFFFu;
        r.mask = next();
        r.mark = next() & 0xFFFFu;
        r.top = next() & 0x3FFu;
        r.itop = next() & 0x3FFu;
        for (int i = 0; i < 4; ++i)
        {
            r.row[i] = next();
            r.col[i] = next();
        }
    }

    struct Outcome
    {
        std::vector<uint8_t> vu;
        VIFRegisters regs;
        std::vector<MscalRun> runs;
        uint64_t dirty;
        uint32_t writes;
    };

    Outcome snapshot(const VIFRegisters &r)
    {
        Outcome o;
        o.vu.assign(g_vu, g_vu + sizeof(g_vu));
        o.regs = r;
        o.runs = g_runs;
        o.dirty = g_vu1WatchedRows.dirty;
        o.writes = g_vu1WatchedRows.writes;
        return o;
    }

    bool same(const Outcome &a, const Outcome &b, const char *what)
    {
        bool ok = a.vu == b.vu && std::memcmp(&a.regs, &b.regs, sizeof(a.regs)) == 0 && a.runs.size() == b.runs.size() &&
                  a.dirty == b.dirty && a.writes == b.writes;
        for (size_t i = 0; ok && i < a.runs.size(); ++i)
            ok = a.runs[i].pc == b.runs[i].pc && a.runs[i].top == b.runs[i].top && a.runs[i].itop == b.runs[i].itop &&
                 std::memcmp(a.runs[i].rows, b.runs[i].rows, sizeof(a.runs[i].rows)) == 0;
        if (!ok)
        {
            std::printf("%s: native and decoded prologues differ (vu %d regs %d runs %zu/%zu dirty %d writes %u/%u)\n", what,
                        a.vu == b.vu, std::memcmp(&a.regs, &b.regs, sizeof(a.regs)) == 0, a.runs.size(), b.runs.size(),
                        a.dirty == b.dirty, a.writes, b.writes);
            ++g_failures;
        }
        return ok;
    }

    void resetVu()
    {
        for (uint32_t i = 0; i < sizeof(g_vu); i += 4u)
        {
            const uint32_t v = next();
            std::memcpy(g_vu + i, &v, 4);
        }
        g_runs.clear();
        g_vu1WatchedRows.dirty = 0;
        g_vu1WatchedRows.writes = 0;
    }

    // The payloads the walker lists for the token, joined.
    std::vector<uint8_t> payloads(uint32_t token)
    {
        uint32_t count = 0;
        const XboxPrologueRef *refs = xboxPrologueExpand(token, count);
        std::vector<uint8_t> out;
        for (uint32_t k = 0; refs && k < count; ++k)
            out.insert(out.end(), g_rdram + (refs[k].addr & PS2_RAM_MASK),
                       g_rdram + (refs[k].addr & PS2_RAM_MASK) + refs[k].qwc * 16u);
        return out;
    }

    // Native and reference from the same start; true when the walker took
    // the token natively.
    bool compare(uint32_t token, const char *what, bool expectNative, bool expectRun = true)
    {
        const uint8_t *marker = xboxPrologueNative(token);
        if ((marker != nullptr) != expectNative)
        {
            std::printf("%s: the walker %s the token\n", what, marker ? "took" : "expanded");
            ++g_failures;
            return false;
        }
        if (!marker)
            return false;
        uint32_t words[4];
        std::memcpy(words, marker, 16);
        if (words[0] != ((kXboxModelMarkerOpcode << 24) | XboxModelPrologue) || words[2] != kXboxModelMagic)
        {
            std::printf("%s: marker words\n", what);
            ++g_failures;
        }
        VIFRegisters start;
        randomRegs(start, (next() & 3u) == 0u);
        resetVu();
        const std::vector<uint8_t> vuStart(g_vu, g_vu + sizeof(g_vu));
        const std::vector<uint8_t> data = payloads(token);
        // Reference.
        VIFRegisters ref = start;
        g_regs = &ref;
        referenceDecode(data.data(), uint32_t(data.size()), ref);
        const Outcome expected = snapshot(ref);
        // Native, from the same VU1 memory and counters.
        std::memcpy(g_vu, vuStart.data(), sizeof(g_vu));
        g_runs.clear();
        g_vu1WatchedRows.dirty = 0;
        g_vu1WatchedRows.writes = 0;
        g_decoded.clear();
        VIFRegisters nat = start;
        g_regs = &nat;
        PS2Memory memory;
        memory.rdram = g_rdram;
        XboxPrologueStats before;
        xboxPrologueGetStats(before);
        xboxModelDecodeMarkerForTest(words, g_vu, nat, &memory, kVif);
        XboxPrologueStats after;
        xboxPrologueGetStats(after);
        if (expectRun && after.nativeDecoded != before.nativeDecoded + 1u)
        {
            std::printf("%s: not run natively\n", what);
            ++g_failures;
        }
        if (!expectRun && after.nativeInline != before.nativeInline + 1u)
        {
            std::printf("%s: not decoded from the payloads\n", what);
            ++g_failures;
        }
        same(snapshot(nat), expected, what);
        return true;
    }
}

// The decoder copy's step for the marker (xbox_model_cache.cpp's dispatch).
void xboxModelDecodeMarkerForTest(const uint32_t words[4], uint8_t *vu, VIFRegisters &regs, PS2Memory *memory,
                                  const XboxModelVif &vif)
{
    xboxPrologueDecode(words, vu, regs, memory, vif);
}

// The fallback's decode: the reference on the pieces joined.
uint32_t PS2Memory::decodeVIF1Pieces(const Vif1Piece *pieces, size_t count, uint32_t, bool)
{
    std::vector<uint8_t> joined;
    for (size_t i = 0; i < count; ++i)
        joined.insert(joined.end(), pieces[i].first, pieces[i].first + pieces[i].second);
    g_decoded.push_back(joined);
    referenceDecode(joined.data(), uint32_t(joined.size()), *g_regs);
    return 0;
}

int main()
{
    g_rdram = static_cast<uint8_t *>(std::calloc(PS2_RAM_SIZE, 1));
    // The static headers, as the game's data section holds them.
    const uint32_t headers[12][4] = {
        {0u, 0u, 0x01000404u, 0x6c04801au}, {0u, 0u, 0x01000404u, 0x6c04801eu}, {0u, 0u, 0x01000404u, 0x6c048022u},
        {0u, 0u, 0x01000404u, 0x6c048016u}, {0x1400075fu, 0u, 0u, 0x11000000u}, {0x1400076au, 0u, 0u, 0x11000000u},
        {0x14000775u, 0u, 0u, 0x11000000u}, {0x14000780u, 0u, 0u, 0x11000000u}, {0u, 0u, 0x01000404u, 0x6c048004u},
        {0u, 0u, 0x01000404u, 0x6c048008u}, {0u, 0u, 0x01000404u, 0x6c04800cu}, {0x140007a8u, 0u, 0u, 0x11000000u}};
    std::memcpy(g_rdram + 0x358F40u, headers, sizeof(headers));
    // transformConstants' rows, as the native program watches them.
    g_vu1WatchedRows.watch(4u, 22u);
    g_vu1WatchedRows.watch(106u, 122u);

    for (int i = 0; i < 400; ++i)
    {
        const uint32_t matrix = 0x100000u + (next() % 0x10000u) * 16u, lightA = 0x200000u + (next() % 0x10000u) * 16u,
                       lightB = (next() & 1u ? 0x20000000u : 0u) | (0x300000u + (next() % 0x10000u) * 16u);
        fillMatrix(matrix);
        fillMatrix(lightA);
        fillMatrix(lightB);
        const bool lit = (i & 1) != 0;
        compare(xboxPrologueRecord(matrix, lit ? lightA : 0u, lit ? lightB : 0u), lit ? "lit prologue" : "unlit prologue",
                true);
    }
    // A hand-made record of every header: bones and lights.
    {
        xboxPrologueOpen();
        const uint32_t order[] = {8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7};
        for (uint32_t h : order)
        {
            xboxPrologueRef(0x358F40u + h * 16u, 1u);
            if (h < 4u || (h >= 8u && h < 11u))
            {
                const uint32_t data = 0x400000u + (next() % 0x1000u) * 16u;
                fillMatrix(data);
                xboxPrologueRef(data, 4u);
            }
        }
        compare(xboxPrologueClose(), "every header", true);
    }
    // Records the walker must expand.
    {
        xboxPrologueOpen();
        xboxPrologueRef(0x500000u, 12u); // a REF loop's batch
        xboxPrologueRef(0x500100u, 3u);
        compare(xboxPrologueClose(), "REF batch", false);
        compare(xboxPrologueRecord(0x70000100u, 0u, 0u), "scratchpad matrix", false);
        xboxPrologueOpen();
        xboxPrologueRef(0x358FC0u, 1u); // UNPACK header, no data
        compare(xboxPrologueClose(), "header without data", false);
        xboxPrologueOpen();
        xboxPrologueRef(0x358FC0u, 1u);
        xboxPrologueRef(0x100000u, 3u); // short data
        xboxPrologueRef(0x358FF0u, 1u);
        compare(xboxPrologueClose(), "short data", false);
        compare(0x12345u, "not a token", false);
    }
    // Decoded from the payloads: a header changed, an open capture.
    {
        const uint32_t token = xboxPrologueRecord(0x100000u, 0u, 0u);
        uint32_t saved;
        std::memcpy(&saved, g_rdram + 0x358FF0u, 4);
        const uint32_t changed = 0x14000000u | (0x3e20u / 8u); // MSCAL 0x3e20
        std::memcpy(g_rdram + 0x358FF0u, &changed, 4);
        compare(token, "changed header", true, false);
        std::memcpy(g_rdram + 0x358FF0u, &saved, 4);
        if (g_decoded.size() != 1u || g_decoded[0].size() != 96u)
        {
            std::printf("changed header: the payloads were not decoded as listed\n");
            ++g_failures;
        }
        g_xboxModelCaptureOpen = true;
        compare(xboxPrologueRecord(0x100000u, 0x200000u, 0x300000u), "open capture", true, false);
        g_xboxModelCaptureOpen = false;
    }
    // A record overwritten before its decode: nothing runs (counted).
    {
        const uint32_t token = xboxPrologueRecord(0x100000u, 0u, 0u);
        const uint8_t *marker = xboxPrologueNative(token);
        uint32_t words[4];
        std::memcpy(words, marker, 16);
        for (int k = 0; k < 20000; ++k)
            xboxPrologueRecord(0x100000u, 0x200000u, 0x300000u);
        XboxPrologueStats before, after;
        xboxPrologueGetStats(before);
        VIFRegisters r{};
        PS2Memory memory;
        memory.rdram = g_rdram;
        g_runs.clear();
        xboxPrologueDecode(words, g_vu, r, &memory, kVif);
        xboxPrologueGetStats(after);
        if (after.nativeLost != before.nativeLost + 1u || !g_runs.empty())
        {
            std::printf("overwritten record: not counted lost\n");
            ++g_failures;
        }
    }
    if (g_failures)
    {
        std::printf("%d failures\n", g_failures);
        return 1;
    }
    std::printf("native prologue host test passed\n");
    return 0;
}

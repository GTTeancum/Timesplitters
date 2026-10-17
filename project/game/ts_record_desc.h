// Native draw records (src/xbox/PUSH-BC-PLAN.md section 3.1, M5 and M6;
// owned by C-REC): the chain registry (partPrecalcDmaData's static chains,
// registered through the dlPushDmaTag / dlPopDmaTag hooks), the descriptor
// builder (a dry parse with the decoder's own size rules), the generational
// arena, the T0 / R1 executors and the record self-check.
//
// How a CALL to a registered chain goes (the spine's half is C-VIF's:
// runtime/ps2_vif1_records.h, ps2_vif1_tokens.h, the walker in
// ps2_memory.cpp and the decoder in ps2_vif1_interpreter.cpp):
//   knob `records` (frame boundaries; default 0)
//     0  walk: every CALL descended into, as before
//     1  splice: the walker appends the chain's cached pieces (its
//        descriptor's piece list) and reproduces CALL+RET on the DMA
//        registers; the decoder is unchanged
//     2  token -> T0: one 16-byte token piece instead; the decoder expands
//        it into the same pieces at that point (the nested decode)
//     3  token -> R1: the decoder runs the descriptor's ops through its own
//        helpers (vif1Unpack, vif1Stxx, vif1Immediate, vif1Mscal), skipping
//        the VIFcode parse and the piece reads; T0 when the descriptor's
//        entry assumption does not hold
//     4  token -> R2 (C-XF; runs as 3 until it lands)
//   knob `records.origins` (default 3): which chains are taken: 1 precalc
//   (partPrecalcDmaData from obInstGfx / partGfx's precalc), 2 Dbuf
//   (partPrecalcDmaData from obPrecalcDbufGfxData), 4 REF, 8 prologue
//   (both later: in-list tokens). A chain the builder cannot splice exactly
//   (a tag other than CNT/NEXT/REF/REFS/RET, an IRQ bit, a payload outside
//   main RAM, too many tags) is walked; one R1 cannot replay (DIRECT, MPG,
//   MSKPATH3, MSCNT, data split between payloads, a stream that does not
//   end on a command boundary) is spliced at every level.
//
// Fixed storage, set up at start-up: the registry (4,096 slots, 32 KB), the
// arena (TS_RECORD_ARENA_KB, two generational halves), a build scratch.
#pragma once
#include <cstddef>
#include <cstdint>

class PS2Runtime;
class PS2Memory;

// Called by applyTimeSplittersOverrides after the transcribed natives:
// registers the knobs, the game hooks and the spine's record hooks.
void registerTsRecords(PS2Runtime &runtime);

#if defined(PLATFORM_XBOX)
#include "runtime/ps2_vif1_records.h"

// TS_NATIVE_RECORD_SELFCHECK 1: every Nth chain token run by R1 (N: the knob
// records.check, default TS_NATIVE_RECORD_SELFCHECK_EVERY) is first run both
// ways dry from the same saved state - T0 (the chain's pieces through the
// decoder) and R1 - with no program run: each MSCAL records {pc, top, itop,
// TOPS, DBF, a hash of VU1 data}, the end the VIF1 registers and VU1 data;
// the two records are compared (recdiff=, must stay 0) and the state put
// back before the real run. Every admission also audits the descriptor
// against a fresh build (in release, one in 256). Development builds only.
#ifndef TS_NATIVE_RECORD_SELFCHECK
#define TS_NATIVE_RECORD_SELFCHECK 0
#endif
#ifndef TS_NATIVE_RECORD_SELFCHECK_EVERY
#define TS_NATIVE_RECORD_SELFCHECK_EVERY 1u
#endif
// The descriptor arena: two halves of half this each.
#ifndef TS_RECORD_ARENA_KB
#define TS_RECORD_ARENA_KB 64u
#endif

namespace ts_record
{
    enum Origin : uint8_t
    {
        kPrecalc = 1,
        kDbuf = 2,
        kRef = 4,
        kPrologue = 8,
    };

    enum DescFlags : uint8_t
    {
        kSpliceable = 1,      // the walk's pieces reproduced exactly (always set in a stored descriptor)
        kReplayable = 2,      // R1 can run it (and a token may stand for it)
        kIntSeen = 4,         // a VIFcode with the interrupt bit: STAT.INT set at the end
        kAssumesCycleGe = 8,  // an UNPACK before any STCYCL: sized for the live CL >= WL
    };

    // One command R1 runs: its VIFcode and where its data lies in guest
    // memory (UNPACK, STMASK, STROW, STCOL; null for the others). NOP and
    // FLUSH* have no effect beyond CODE/NUM (finalCode) and are left out.
    struct RecOp
    {
        uint32_t cmd;
        const uint8_t *data;
    };

    // A chain's descriptor in the arena, followed by its pieces (the walk's,
    // merged where contiguous) and its ops. Relocatable: every pointer in it
    // points into guest memory.
    struct RecDesc
    {
        uint32_t chain;       // the chain's first tag (the registry key)
        uint32_t fingerprint; // FNV-1a of every tag's lower 8 bytes and every VIFcode (the audit)
        uint32_t pieceBytes;  // the pieces' total
        uint32_t finalCode;   // the stream's last VIFcode (VIF1 CODE/NUM after it)
        uint16_t pieceCount;
        uint16_t opCount;
        uint16_t tagCount;
        uint8_t flags;
        uint8_t origin;
        uint32_t bytes;       // this descriptor's size in the arena, pieces and ops included
        uint32_t spare;       // (keeps the pieces 8-aligned)

        const Vif1Piece *pieces() const { return reinterpret_cast<const Vif1Piece *>(this + 1); }
        const RecOp *ops() const { return reinterpret_cast<const RecOp *>(pieces() + pieceCount); }
    };
    static_assert(sizeof(RecDesc) % 8u == 0u, "pieces and ops follow the header aligned");

    // Builder limits (one descriptor at most kMaxBuildBytes).
    constexpr uint32_t kMaxTags = 512u;
    constexpr uint32_t kMaxPieces = 512u;
    constexpr uint32_t kMaxOps = 1024u;
    constexpr size_t kMaxBuildBytes = sizeof(RecDesc) + kMaxPieces * sizeof(Vif1Piece) + kMaxOps * sizeof(RecOp);

    // Builds chain's descriptor into out (kMaxBuildBytes, 8-aligned): the
    // walk of its tags from the first to its RET, then the parse of the VIF
    // stream they make. Returns the descriptor's size, or 0 when the chain
    // cannot be spliced (the walker must take it). ts_record_build.cpp.
    uint32_t buildDescriptor(const uint8_t *rdram, uint32_t chain, uint8_t origin, uint8_t *out);

    // R1 (ts_record_exec.cpp): runs the descriptor's ops through the
    // decoder's helpers; false (nothing done) when its entry assumption does
    // not hold (the caller expands the token: T0).
    bool replayRecord(PS2Memory &memory, const RecDesc &desc);
    bool recordEntryHolds(const PS2Memory &memory, const RecDesc &desc);

    // TS_NATIVE_RECORD_SELFCHECK (ts_record_selfcheck.cpp): T0 and R1 dry
    // from the same state, compared and put back. True: the same.
    bool recordSelfCheck(PS2Memory &memory, const RecDesc &desc);
}

// The D2 debt hooks (C-XF's ts_record_debt.cpp sets them once its map
// exists; the decoder calls them only with TS_VU1_DEBT_SITES). They share
// the records engine's hook owner, which they get back as their first
// argument (ignore it).
void tsRecordsSetDebtHooks(void (*beforeWrite)(void *, uint32_t row, uint32_t count, bool fullLanes),
                           void (*beforeProgram)(void *, uint32_t pc, uint32_t top), void (*listEnd)(void *));
#endif

#pragma once

// Render-origin counters for the Xbox log (rewrite plan M0.3): what the
// game's display lists are made of on their way to the screen, counted
// where each step happens - partGfx's choice of list for a model
// (project/game/ts_native_game2.cpp), the game functions that write the
// lists' data (project/game/ts_render_counters.cpp), the DMA chain walk
// (ps2_memory.cpp), the VIF1 decoder (ps2_vif1_interpreter.cpp) and the
// native VU1 program's draws (project/game/vu1_native_ts.cpp).
// Cumulative; every status interval a [TS:render] line prints what changed
// since the line before (renderCountersReport, ts_render_counters.cpp).
//
// TS_RENDER_COUNTERS 0: nothing counted. 1 (default): the counters that
// cost a few instructions per partGfx level, chain, MSCAL or draw batch.
// 2: also those counted per DMA tag and per VIF command (tags by id, TTE
// halves, pieces, bytes by origin, VIF commands, UNPACK formats), roughly
// 0.1-0.2 ms a frame on the console: measurement builds (make
// TS_RENDER_COUNTERS=2 rebuilds the files that count).
#ifndef TS_RENDER_COUNTERS
#define TS_RENDER_COUNTERS 1
#endif

#if defined(PLATFORM_XBOX)
#include <cstdint>

// Every member a uint32_t (the report takes differences word by word).
struct RenderCounters
{
    // partGfx (native levels only: a part the translated original resumes
    // after a scheduler yield is not counted).
    uint32_t partGfx = 0;          // levels entered
    uint32_t partPrecalc = 0;      // CALL of the part's load-time chain (partPrecalcDmaData)
    uint32_t partDbuf = 0;         // CALL of the instance's relit chain (obPrecalcDbufGfxData)
    uint32_t partRef[3] = {};      // per-frame REF lists, by partGfx's three REF loops (0x261200, 0x261650, 0x261ca8)
    uint32_t partRefBatches = 0;   // ... iterations of those loops (one REF group each)
    // Calls of the game functions that write the lists' data.
    uint32_t vtxlistcolour = 0, obInstLight = 0, obPrecalcDbufGfxData = 0, partPrecalcDmaData = 0;
    // VIF1 DMA chains walked (ps2_memory.cpp), and their tags.
    uint32_t chains = 0, chainTags = 0;
    // Level 2, the walk tag by tag:
    uint32_t tagIds[8] = {};       // refe cnt next ref refs call ret end
    uint32_t tagsCalled = 0;       // tags of CALLed chains (the precalc and Dbuf origins)
    uint32_t tteHalves = 0;        // tag upper halves sent to VIF1 (CHCR.TTE)
    uint32_t tteZero = 0;          // ... all zero (two VIF NOPs)
    uint32_t pieceTteNew = 0, pieceTteJoined = 0;         // a TTE half: a piece of its own / joined to the one before
    uint32_t piecePayloadNew = 0, piecePayloadJoined = 0; // a payload: the same
    uint32_t payloadQw[2] = {};    // payload quadwords of the main list / of CALLed chains
    uint32_t tteSkipped = 0;      // zero halves left out of the pieces (TS_WALK_SKIP_ZERO_TTE, any level)
    // VIF1 decoder, chains only (processVIF1Pieces).
    uint32_t mscal = 0, mscnt = 0;
    struct MscalPc
    {
        uint32_t pc1 = 0; // entry pc + 1 (0: free)
        uint32_t count = 0;
    } mscalPc[32];
    uint32_t mscalPcOther = 0;     // the table was full
    uint32_t mscalFast = 0;        // taken by the fast path (TS_MSCAL_FAST)
    uint32_t mscalChecked = 0, mscalCheckDiffs = 0; // TS_MSCAL_FAST_CHECK
    // Level 2, the decoder command by command:
    uint32_t vifCommands = 0;
    // UNPACK by format (opcode & 0xF: vn << 2 | vl) and destination: TOPS-
    // relative rows 0-23 (strip headers, constant blocks), 24-215 (vertex
    // arrays), 216 up (the render-state block), and absolute addresses.
    uint32_t unpacks[16][4] = {};
    uint32_t unpackMasked = 0;
    // The native VU1 program's draw entries (vu1_native_ts.cpp).
    uint32_t draws = 0, drawStrips = 0, drawVertices = 0;
    uint32_t cpuStrips = 0;        // transformed on the CPU (no PRE, short group, or declined)
    uint32_t gpuRuns = 0;          // runs of one PRIM the renderer transforms (beginXfRun)
    uint32_t flatRuns = 0;         // ... flat shaded: laid out as triangle lists
    uint32_t mergedRuns = 0;       // ... joined to the batch a run before left open
    uint32_t declinedRuns = 0;     // ... refused by the renderer (CPU path instead)
#if defined(PLATFORM_XBOX)
    // The VIF/DMA spine's tokens and splices (src/xbox/PUSH-BC-PLAN.md D1;
    // runtime/ps2_vif1_tokens.h), counted whatever TS_RENDER_COUNTERS says
    // (a few per CALL; the check counters must stay 0).
    uint32_t splices = 0;          // CALLs to registered chains spliced (their cached pieces appended)
    uint32_t tokChain = 0;         // ... replaced by a chain token
    uint32_t tokList = 0;          // in-list token tags admitted (a token piece each)
    uint32_t tokRingFull = 0;      // chain tokens spliced instead: the ring was full
    uint32_t tokRun = 0;           // tokens the decoder ran (the executor said done)
    uint32_t tokExpand = 0;        // ... expanded into their pieces (T0, or a dry decode)
    uint32_t tokNops = 0;          // ... read as four NOPs (no executor, nothing to expand)
    uint32_t tokMid = 0;           // a data read crossed into a token piece (tokmid)
    uint32_t tokMidBad = 0;        // ... that could not be expanded, or a carry inside an expansion (must stay 0)
    uint32_t tokStale = 0;         // token tags the run table refused (must stay 0)
    uint32_t tokDrop = 0;          // tokens taken and never consumed by the decoder (must stay 0)
    uint32_t tokBad = 0;           // tokens the executor rejected (must stay 0)
    uint32_t spliceChecked = 0, spliceDiff = 0; // TS_VIF_SELFCHECK: admitted chains walked again / differing
    // The records engine (project/game/ts_record_cache.cpp).
    uint32_t recRegistered = 0;    // chains registered (dlPopDmaTag)
    uint32_t recRegFull = 0;       // ... refused: the registry was full
    uint32_t recBuilds = 0;        // descriptors built
    uint32_t recUnspliceable = 0;  // ... of chains the walk must take itself (a tag the splice cannot reproduce)
    uint32_t recUnrecordable = 0;  // ... of chains R1 cannot replay (run as T0)
    uint32_t recArenaFull = 0;     // admissions refused: no arena room until the next drain
    uint32_t recAudits = 0, recStale = 0; // fingerprint audits / of them stale (rebuilt)
    uint32_t recR1 = 0, recT0 = 0; // chain tokens run by replay / by expansion
    uint32_t recChecked = 0, recDiff = 0; // TS_NATIVE_RECORD_SELFCHECK: R1 against T0 / differing (must stay 0)
#endif
};
extern RenderCounters g_renderCounters; // ps2_vif1_interpreter.cpp

// One [TS:render] line (two with TS_RENDER_COUNTERS 2; a [TS:rec] line once
// the spine has made a splice or a token) with the changes
// since the last call (the Xbox status hook; ts_render_counters.cpp).
void renderCountersReport();

#if TS_RENDER_COUNTERS >= 1
#define TS_RENDER_COUNT(expr) ((void)(expr))
#else
#define TS_RENDER_COUNT(expr) ((void)0)
#endif
#if TS_RENDER_COUNTERS >= 2
#define TS_RENDER_COUNT2(expr) ((void)(expr))
#else
#define TS_RENDER_COUNT2(expr) ((void)0)
#endif

// An MSCAL by its entry pc: a small open-addressed table (the game's VU1
// program has 16 entries).
static inline void renderCountMscal(uint32_t pc)
{
#if TS_RENDER_COUNTERS >= 1
    RenderCounters &c = g_renderCounters;
    ++c.mscal;
    const uint32_t pc1 = pc + 1u;
    for (uint32_t i = ((pc >> 3) ^ (pc >> 8)) & 31u, n = 0; n < 32u; ++n, i = (i + 1u) & 31u)
    {
        if (c.mscalPc[i].pc1 == pc1)
        {
            ++c.mscalPc[i].count;
            return;
        }
        if (c.mscalPc[i].pc1 == 0u)
        {
            c.mscalPc[i].pc1 = pc1;
            c.mscalPc[i].count = 1u;
            return;
        }
    }
    ++c.mscalPcOther;
#else
    (void)pc;
#endif
}
#endif

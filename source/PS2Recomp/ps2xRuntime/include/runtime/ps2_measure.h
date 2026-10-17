#pragma once
// Push B/C measurement counters (src/xbox/PUSH-BC-PLAN.md section 4, W0-M):
// what the first console session (section 8) has to know before the tracks'
// order is fixed, counted where it happens and written out every status
// interval as the [TS:m-*] lines (src/xbox/xbox_measure.cpp, through the
// report-line registry of src/xbox/xbox_perf.h):
//   [TS:m-kick]   the draw kick split further than [TS:kick]: the chain walk
//                 alone, the VIF decode by piece origin (main list / CALLed
//                 chain), the UNPACK copies, the native VU1 runs by entry
//                 class (draw, constant, XGKICK forward)
//   [TS:m-gs]     per-call time of GS::beginXfRun, the renderer's beginXfRun,
//                 keyFor, texture() and the DrawKey compares; textured
//                 primitives off the native path; primitives per XGKICK and
//                 the kinds of kick
//   [TS:m-ee]     dispatches by pc (the natives' translated resumes among
//                 them) and __aulldiv callers by return address
//   [TS:m-lock]   the lock census: critical sections and SRW locks by return
//                 address and by lock object, contended entries, spins
//   [TS:m-cpy] [TS:m-cmp]  memcpy / memcmp by size and alignment
//   [TS:m-list]   the game's list high-water mark (gp-0x6CA0) against the
//                 list buffers, memdb's per-half high-water mark
//   [TS:m-chain]  partPrecalcDmaData chains since level load, CALLed chains a
//                 frame (all, distinct)
//   [TS:m-fp]     MXCSR DE / UE raised, by tick phase
//   [TS:m-once]   D1_CHCR at the first gsMain kick, the x87 control word at
//                 boot / at lvTickBefore / after a kick, the largest
//                 contiguous block and the physical memory at boot
// Sub-brackets (section 3.6 item 10) are [TS:sub] (TS_PERF_SUBBRACKETS); the
// measurement build turns them and the renderer timing (TS_PERF_BACKEND,
// [TS:kick]) on (src/xbox/Makefile).
//
// make TS_MEASURE_PUSHBC=1 builds all of it; only the files that count see
// the switch. 0 (default): nothing is counted, every hook below is empty
// and those files compile as before. Fixed storage, cumulative, updated by
// the thread where the event happens (the EE executor for nearly all of
// it; memcpy and the locks from any thread, so those counts can be a few
// off) and read by the status hook's thread. Nothing here allocates.
//
// Overhead: a pair of rdtsc (~35 cycles each on the Pentium III, ~70 a
// pair) per walk, UNPACK, native run, beginXfRun, keyFor, texture() and
// DrawKey compare, one per decode-origin change; a few instructions per
// memcpy, lock, dispatch and division; the sample of MXCSR at each phase
// bracket. Every line states its rdtsc pairs a frame (rd=) and their cost
// (ovh=, at 70 cycles a pair), so the times can be corrected.
#ifndef TS_MEASURE_PUSHBC
#define TS_MEASURE_PUSHBC 0
#endif

#if defined(PLATFORM_XBOX) && TS_MEASURE_PUSHBC
#include <cstddef>
#include <cstdint>

#define TS_MEASURE(expr) ((void)(expr))

// A count by 32-bit key (an address), open-addressed; key 0 marks a free
// slot (no address or pc here is 0).
struct MeasureAddrCount
{
    uint32_t key = 0, count = 0;
};

struct MeasureCounters
{
    // ---- 1. the kick split
    uint64_t walkCycles = 0;       // the walker's tag loop (VIF1 chains), less the batches it decoded inside
    uint32_t walks = 0;
    uint64_t decodeCycles[2] = {}; // decodeVIF1Pieces, by the origin of the piece being read: [0] main list, [1] CALLed chain
    uint32_t decodeSwitches = 0;   // origin changes seen (one rdtsc each)
    uint32_t decodes = 0;          // decodeVIF1Pieces calls (two rdtsc each)
    uint64_t unpackCycles = 0;     // inside the decode: the UNPACK commands (vif1Unpack)
    uint32_t unpacks = 0;
    uint64_t vu1Cycles[3] = {};    // native VU1 runs by entry class: [0] draw, [1] constant (or declined), [2] XGKICK forward
    uint32_t vu1Runs[3] = {};
    // The pieces of the batch being walked, by origin (written by the walker
    // as it adds them, read by the decoder): the batch's piece array and,
    // per index, 1 for a piece of a CALLed chain. pieceOriginNow is what
    // the next piece gets.
    const void *pieceBase = nullptr;
    uint8_t pieceOriginNow = 0;
    uint8_t pieceOrigin[4096];

    // ---- 2. the GS front end and the renderer
    uint64_t gsBeginXfCycles = 0, implBeginXfCycles = 0, keyForCycles = 0, textureCycles = 0, keyCmpCycles = 0;
    uint32_t gsBeginXf = 0, implBeginXf = 0, keyFors = 0, textures = 0, keyCmps = 0;
    uint32_t prims = 0, primsTextured = 0; // primitives through vertexKick (not the native strip / transform paths), of them textured
    uint32_t vtxWrites = 0, xyz3Writes = 0, imageSeen = 0; // inside the packet being processed (GS::processGIFPacket)
    uint32_t gifDepth = 0;
    uint32_t kicks = 0;         // PATH1 packets (XGKICK)
    uint32_t kickPrims[5] = {}; // ... by primitives drawn: 0, 1, 2-3, 4-15, 16 or more
    uint32_t kickKinds[4] = {}; // ... [0] state only (no vertex register), [1] vertices, [2] image data, [3] XYZ3/XYZF3 seen (any of the above)

    // ---- 4. the EE scheduler
    MeasureAddrCount dispatch[64]; // dispatcher passes by the pc dispatched (entries and resume labels; the natives' translated resumes are the pcs inside their functions)
    uint32_t dispatches = 0, dispatchOther = 0; // ... all, and those the table had no room for
    MeasureAddrCount divCaller[64]; // __aulldiv (64-bit unsigned division) by return address
    uint32_t divs = 0, divOther = 0;

    // ---- 5. logged once
    uint32_t chcrFirst = 0, chcrLast = 0; // D1_CHCR at the first VIF1 chain walk (gsMain's kick), and the last one that differed from it
    uint32_t chcrWalks = 0, chcrDiffer = 0;
    uint16_t cwBoot = 0, cwTick = 0, cwKick = 0; // the x87 control word at boot, at the first lvTickBefore entry, after the first kick
    uint8_t cwHave = 0;                          // bits 0-2: which of them were taken

    // ---- 6. platform
    MeasureAddrCount lockRet[64]; // EnterCriticalSection / AcquireSRWLock* by return address
    MeasureAddrCount lockObj[32]; // ... by lock object
    uint32_t lockRetOther = 0, lockObjOther = 0;
    uint32_t csEnters = 0, csContended = 0, srwAcquires = 0, srwSpins = 0;
    // memcpy / memcmp by size (0-15, 16-31, 32-63, 64-127, 128-255, 256-511,
    // 512-1023, 1K-4K, 4K-64K, 64K up) and alignment of both pointers
    // ([0] 16-byte, [1] 4-byte, [2] neither); memmove is counted with memcpy.
    uint32_t memcpyHist[10][3] = {}, memcmpHist[10][3] = {};

    // ---- 7. lists and memdb (sampled at memdbTick, read at the report)
    const uint8_t *rdram = nullptr;
    uint32_t memdbHalfHw = 0, memdbHalfSize = 0; // bytes used of the half just closed (high-water), the halves' distance

    // ---- 8. chains
    uint32_t precalcCalls = 0, precalcLevel = 0, levelResets = 0; // partPrecalcDmaData calls: all, since the last memReset; memResets
    struct ChainSlot
    {
        uint32_t addr, gen;
    } chainSet[1024];              // the chains CALLed this frame (addr, frame generation)
    uint32_t chainGen = 1;
    uint32_t chainCallsFrame = 0, chainDistinctFrame = 0, chainSetFull = 0;
    uint64_t chainCallsSum = 0, chainDistinctSum = 0; // over the frames closed
    uint32_t chainFrames = 0, chainDistinctMax = 0;

    // ---- 9. MXCSR by tick phase (xbox_perf.h's XboxPerfPhase, the main six)
    uint32_t phaseFlags[6] = {}, phaseDe[6] = {}, phaseUe[6] = {}; // flags raised (OR), samples with DE, with UE
    uint32_t phaseStack[8] = {};
    uint32_t phaseDepth = 0;

    // ---- 10. memory at boot
    uint32_t largestContiguousKB = 0, physicalKB = 0;
};
extern MeasureCounters g_measure; // src/xbox/xbox_measure.cpp

inline uint64_t measureTsc() { return __builtin_ia32_rdtsc(); }

// Cycles between construction and destruction added to acc, one call to n.
struct MeasureTimer
{
    MeasureTimer(uint64_t &acc, uint32_t &n) : acc(acc), n(n), start(measureTsc()) {}
    ~MeasureTimer()
    {
        acc += measureTsc() - start;
        ++n;
    }
    uint64_t &acc;
    uint32_t &n;
    uint64_t start;
};

// One more for key in an open-addressed table (linear probing); other
// when the table is full.
template <size_t N>
inline void measureCount(MeasureAddrCount (&table)[N], uint32_t key, uint32_t &other)
{
    const uint32_t start = ((key >> 2) ^ (key >> 9)) % N;
    for (uint32_t i = start, n = 0; n < N; ++n, i = (i + 1u) % N)
    {
        if (table[i].key == key)
        {
            ++table[i].count;
            return;
        }
        if (table[i].key == 0u)
        {
            table[i] = {key, 1u};
            return;
        }
    }
    ++other;
}

// The Xbox side (src/xbox/xbox_measure.cpp).
void xboxMeasureInit();                             // at xboxPerfInit: the once-only memory probes and the x87 control word
void xboxMeasureFrame();                            // at gameFrames++: closes the frame's chain set
void xboxMeasurePhase(uint32_t phase, bool open);   // a phase bracket opens / closes: MXCSR attribution, the control word once
void xboxMeasureGameHooks();                        // registers the game-function hooks (partPrecalcDmaData, memReset, memdbTick)
void xboxMeasureChcr(uint32_t chcr);                // a VIF1 chain walk starts with this D1_CHCR
void xboxMeasureChainCall(uint32_t addr);           // the walker met a CALL to addr
extern "C" void xboxMeasureDivCaller(uint32_t ret); // __aulldiv's wrapper: the caller's return address
#else
#define TS_MEASURE(expr) ((void)0)
#endif

// The game-function hook registry (src/xbox/PUSH-BC-PLAN.md section 3.1
// item 12; section 6, I-11; owned by C-REC after Week 0). The game
// functions the records engine, the in-place fetch and the render counters
// watch are wrapped once each, here, through their function-table entries;
// a track registers a callback for a phase of one of them instead of
// wrapping the entry itself, so the wrappers chain in one known order and
// a boot check can tell that every one of them is in place.
//
// A Before callback runs when the function is entered through its own
// table entry (a resume inside the function goes through the resume
// label's entry: a call is seen once). An After callback runs when the
// original has returned to its caller (pc back at the return address the
// call came with); a function that unwound to the scheduler returns
// through the dispatcher instead and its After callbacks are not run.
// Installed by ts_overrides.cpp after the natives, whatever
// TS_RENDER_COUNTERS says. Fixed storage: no allocation.
#pragma once
#include <cstdint>

class PS2Runtime;
struct R5900Context;

enum class TsGameFn : uint8_t
{
    dlPushDmaTag = 0,     // 0x2B9018: partPrecalcDmaData opens a static chain
    dlPopDmaTag,          // 0x2B9028: ... and closes it
    obPrecalcDbufGfxData, // 0x25FC90: an instance's double-buffered chains
    partPrecalcDmaData,   // 0x25F408: a part's load-time chain (precalc origin)
    vtxlistcolour,        // 0x2A7A50: rewrites a chain's colours (roomlightTick)
    obInstLight,          // 0x2A7AB0: builds the Dbuf chains at the first relight
    memReset,             // 0x201BB0: level heap reset (the chain registry's level reset)
    memEnd,               // 0x201C10
    memMake,              // 0x201B38
    memdbTick,            // 0x201F50: the per-frame memdb swap (a list buffer starts: run tables)
    Count
};

enum class TsHookPhase : uint8_t
{
    Before = 0,
    After = 1,
};

using TsGameHookFn = void (*)(void *owner, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

// Registers callback for fn's phase (up to kTsGameHookSlots a phase, run in
// registration order). May be called before or after the hooks are
// installed. False when the phase's slots are full.
constexpr uint32_t kTsGameHookSlots = 4u;
bool tsGameHookOn(TsGameFn fn, TsHookPhase phase, TsGameHookFn callback, void *owner = nullptr);
// Wraps every function's table entry (once; the game may load again) and
// checks that each entry now holds its wrapper (the boot chain assert): a
// mismatch is counted (tsGameHooksMissing; the status block's hooksmissing=),
// logged as [TS:hooks] FATAL and traps at start-up.
void tsGameHooksInstall(PS2Runtime &runtime);
uint32_t tsGameHooksMissing();
uint32_t tsGameFnAddress(TsGameFn fn);
const char *tsGameFnName(TsGameFn fn);

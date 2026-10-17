// The game-logic lockstep (src/xbox/PUSH-BC-PLAN.md section 3.6 item 1;
// owned by B-LOGIC, sub-owner L0). Check builds only: TS_NATIVE_LOCKSTEP=N
// with PS2X_WRITE_JOURNAL=1 (src/xbox/mk/b_logic.mk sets both and adds
// this file).
//
// One call in N of every pure idiomatic entry runs twice on the live game
// state:
//   A  the previous occupant, in the reference mode (every idiomatic entry
//      it reaches forwards to its own previous occupant) and under
//      EeClockFreeze (it charges no cycles), with the journal on; its final
//      bytes and registers are captured, then every store is undone and
//      the context put back;
//   B  the idiomatic entry, journaled.
// Then every byte either run stored is compared (A's final value against
// memory), except the dead stack below the entry $sp, and the registers the
// entry must keep (ts_idiom::compareKept). B's result stays: the game runs
// on the idiomatic path, the lockstep only reports. [TS:idiom] ls.<module>=
// samples/diffs/NaN-only/skipped (skipped: the journal overflowed or saw an
// address it cannot undo). The first differences are logged with the
// entry, the guest address and the two bytes.
//
// Knob lockstep.control=1: the control run. The comparison is made against
// a deliberately altered copy of A's registers (the low bit of $v0 flipped),
// so every sample must report a difference; a control run reporting none
// means the harness is not comparing.
//
// Lockstep is skipped across impure calls (Entry::pure false) and while a
// lockstep is already running (nested entries run on their own path).
#include "ts_native_idiom.h"

#if defined(PLATFORM_XBOX) && PS2X_WRITE_JOURNAL && !TS_NATIVE_LOCKSTEP
// The journal hook without the lockstep: nothing records.
void ps2xJournalTouch(uint32_t, uint32_t) {}
#endif

#if defined(PLATFORM_XBOX) && TS_NATIVE_LOCKSTEP
#include "../ts_knobs.h"
#include "ts_journal.h"

#include <cstdio>

namespace
{
    constexpr uint32_t kRecords = 4096u;           // stores per run (64 KB of pre-images)
    constexpr uint32_t kDeadStackBytes = 0x10000u; // below the entry $sp: frames nobody reads after the return

    ts_journal::Journal<kRecords> g_live;     // the run being recorded
    ts_journal::Journal<kRecords> g_runA;     // A's records, kept while B runs
    uint8_t g_postA[kRecords][16];            // A's final bytes
    uint32_t g_sortScratch[2u * kRecords];
    R5900Context g_entryCtx, g_ctxA;          // (fixed storage: no allocation in a match)
    uint8_t *g_rdram = nullptr;
    bool g_active = false;
    uint32_t g_sample = 0;
    uint32_t g_control = 0; // knob lockstep.control
    uint32_t g_logged = 0;
}

// Every guest store (the runtime's write paths and the idiomatic store
// helpers) while the journal is on.
void ps2xJournalTouch(uint32_t guestAddr, uint32_t size)
{
    if (!g_live.on())
        return;
    uint8_t *host = nullptr;
    if (ps2IsScratchpadAddress(guestAddr))
    {
        const uint32_t off = ps2ScratchpadOffset(guestAddr);
        if (size <= PS2_SCRATCHPAD_SIZE - off)
            host = ps2GetScratchpadHostPtr() + off;
    }
    else if (g_rdram != nullptr)
    {
        const uint32_t off = guestAddr & PS2_RAM_MASK;
        if (size <= PS2_RAM_SIZE - off) // (a store wrapping past the end of RDRAM: not undoable here)
            host = g_rdram + off;
    }
    g_live.touch(host, guestAddr, size);
}

namespace ts_idiom
{
    void lockstepInstall(PS2Runtime &runtime)
    {
        g_rdram = runtime.memory().getRDRAM();
        tsKnobRegister("lockstep.control", &g_control, 0u);
        std::fprintf(stderr, "[TS:lockstep] one call in %u of every pure entry; %u stores per run\n",
                     unsigned(TS_NATIVE_LOCKSTEP), kRecords);
    }

    bool lockstepCall(Entry &e, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (g_active || g_referenceMode)
            return false;
        if (++g_sample % static_cast<uint32_t>(TS_NATIVE_LOCKSTEP) != 0u)
            return false;
        g_active = true;
        g_rdram = rdram;
        ++e.lockstepCalls;
        std::memcpy(&g_entryCtx, ctx, sizeof(g_entryCtx));
        const uint32_t entrySp = GPR_U32(ctx, 29);
        const uint32_t returnPc = GPR_U32(ctx, 31);

        // A: the reference.
        g_live.start();
        g_referenceMode = true;
        {
            EeClockFreeze freeze(*runtime);
            e.previous(rdram, ctx, runtime);
            // (a pure function runs to its return; a translated one that
            // stopped anyway is carried on to it)
            for (uint32_t n = 0; ctx->pc != returnPc && n < 100000u && runtime->hasFunction(ctx->pc); ++n)
                runtime->lookupFunction(ctx->pc)(rdram, ctx, runtime);
        }
        g_referenceMode = false;
        g_live.stop();
        g_runA.copyFrom(g_live);
        g_runA.capture(g_postA);
        std::memcpy(&g_ctxA, ctx, sizeof(g_ctxA));
        g_runA.undo();
        std::memcpy(ctx, &g_entryCtx, sizeof(g_entryCtx));

        // B: the idiomatic entry; its result stays.
        g_live.start();
        ++e.calls;
        e.native(rdram, ctx, runtime);
        g_live.stop();

        if (g_runA.overflow() || g_live.overflow())
        {
            ++e.lockstepSkipped;
            g_active = false;
            return true;
        }
        if (g_control != 0u)
        {
            uint64_t v0;
            std::memcpy(&v0, &g_ctxA.r[2], 8);
            v0 ^= 1u;
            std::memcpy(&g_ctxA.r[2], &v0, 8);
        }
        uint32_t nanRegs = 0, firstReg = 0;
        const uint32_t regDiffs = compareKept(e, g_ctxA, *ctx, nanRegs, firstReg);
        auto dead = [entrySp](uint32_t guest) { return guest < entrySp && entrySp - guest <= kDeadStackBytes; };
        const ts_journal::Outcome mem = ts_journal::compare(g_runA, g_postA, g_live, g_sortScratch, dead);
        if (regDiffs != 0u || mem.bytes != 0u)
        {
            ++e.lockstepDiffs;
            if (g_logged++ < 16u)
                std::fprintf(stderr,
                             "[TS:lockstep] %s: %u register word(s) (first ctx+0x%x), %u byte(s) (first 0x%x want %02x "
                             "got %02x); A stored %u, B %u\n",
                             e.name, regDiffs, firstReg, mem.bytes, mem.firstGuest, mem.want, mem.got, g_runA.count(),
                             g_live.count());
        }
        else if (nanRegs != 0u || mem.nanOnly != 0u)
        {
            ++e.lockstepNan;
        }
        g_active = false;
        return true;
    }
}
#endif

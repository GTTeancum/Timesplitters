// Idiomatic game-logic natives (src/xbox/PUSH-BC-PLAN.md section 3.6, M7;
// owned by B-LOGIC, sub-owner L0): the harness every idiomatic module is
// built on.
//
//   IdiomEntry   one replaced function: its idiomatic version, the previous
//                occupant of its table entry (the fallback, the switch-back
//                target and the lockstep's reference run), its module bit,
//                its contract and whether it is pure.
//   idiomThunk   what the function table holds for an entry: the module's
//                knob bit off, or the reference mode on, sends the call to
//                the previous occupant; TS_NATIVE_LOCKSTEP samples a call
//                into the lockstep (ts_lockstep.cpp); otherwise the
//                idiomatic version runs.
//   GuestView    a structure pointer resolved once (RDRAM or scratchpad);
//                a miss sends the whole call to the old path before any
//                write.
//   store helpers every idiomatic guest store goes through them so that
//                the write journal (PS2X_WRITE_JOURNAL) sees it.
//   NoYield      an RAII no-yield region over B-SCHED's API (M7.0).
//
// Contracts (ts_abi_observed.h): Exact entries leave every register as the
// original does; Abi entries leave the registers the audit marks "keep" as
// the original does and may leave the free ones as they like
// (TS_NATIVE_POISON: poisoned after every call, so a reader shows).
//
// Switches:
//   knob idiom (bitmask of kMod*, default: every module compiled in)
//       one console session can A/B a module (ts_knobs.h).
//   TS_NATIVE_LOCKSTEP=N  check build: one call in N of every pure entry
//       runs twice, the previous occupant first (journaled, then undone),
//       and the two runs' guest writes and observed registers are
//       compared ([TS:lockstep]). Needs PS2X_WRITE_JOURNAL=1.
//   TS_NATIVE_POISON=1  check build: the free registers of every Abi entry
//       are poisoned after the call.
#pragma once
#include <cstdint>

class PS2Runtime;

// Called by applyTimeSplittersOverrides after the transcribed natives.
void registerTsNativeIdiom(PS2Runtime &runtime);

#ifndef TS_NATIVE_LOCKSTEP
#define TS_NATIVE_LOCKSTEP 0
#endif
#ifndef TS_NATIVE_POISON
#define TS_NATIVE_POISON 0
#endif

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ee_checkpoint_clock.h"
#include "ts_abi_observed.h"

#include <cstring>

#if TS_NATIVE_LOCKSTEP && !PS2X_WRITE_JOURNAL
#error "TS_NATIVE_LOCKSTEP needs PS2X_WRITE_JOURNAL=1 (src/xbox/mk/b_logic.mk sets both)"
#endif

namespace ts_idiom
{
    using GuestFunction = PS2Runtime::RecompiledFunction;

    // Module bits (knob idiom).
    enum Module : uint32_t
    {
        kModFpX87 = 1u << 0,     // M7.1: x87 doubles (ts_fp_x87.cpp)
        kModAnim = 1u << 1,      // M7.2: animation kernel, animMtxTick
        kModLight = 1u << 2,     // M7.4: lighting post-tick
        kModCollision = 1u << 3, // M7.3: collision kernel
        kModPortal = 1u << 4,    // M7.3: portal walk
        kModCam = 1u << 5,       // M7.3: camTick (optional)
    };

    enum class Contract : uint8_t
    {
        Exact, // every register as the original leaves it
        Abi,   // the audited "keep" set as the original; the rest free
    };

    struct Entry
    {
        const char *name;
        uint32_t address;
        uint32_t module;
        GuestFunction native; // the idiomatic version
        Contract contract;
        bool pure;            // no blocking call, no indirect call: lockstep-able
        // Filled at registration.
        GuestFunction previous = nullptr; // the table's occupant before (fallback)
        ts_abi::Observed observed{0u, ts_abi::kAllGpr, ts_abi::kAllFpr, ts_abi::Observed::kMiscAll};
        // Counters (cumulative; the report line reads them).
        uint32_t calls = 0, forwarded = 0, fallbacks = 0;
        uint32_t lockstepCalls = 0, lockstepDiffs = 0, lockstepNan = 0, lockstepSkipped = 0;
    };

    // The modules running idiomatically (knob idiom), and the reference
    // mode: while set, every entry forwards to its previous occupant (the
    // lockstep's A run; the boot tests' original).
    extern uint32_t g_idiomMask;
    extern bool g_referenceMode;

    // Registers entry e (its table slot must hold a function): captures the
    // previous occupant and the audited set, installs thunk. False (and
    // nothing installed) when the address has no function or an Abi entry
    // has no audited set.
    bool registerEntry(PS2Runtime &runtime, Entry &e, GuestFunction thunk);

    // The free registers of an Abi entry, poisoned (TS_NATIVE_POISON).
    void poisonFree(const Entry &e, R5900Context *ctx);

    // The registers e must leave as the original does (all of them for an
    // Exact entry; the audited "keep" set for an Abi one), compared: want
    // (the previous occupant's run) against got. Returns the number of
    // differing words; float words where both hold a NaN count in nanOnly
    // instead; firstOffset is the context offset of the first difference.
    // General registers compare their low 64 bits (the upper halves are not
    // audited), the FPU condition as its one bit.
    uint32_t compareKept(const Entry &e, const R5900Context &want, const R5900Context &got, uint32_t &nanOnly,
                         uint32_t &firstOffset);

#if TS_NATIVE_LOCKSTEP
    // ts_lockstep.cpp: at boot, the journal's RDRAM and the control knob;
    // per call, true when this call is sampled (it then runs both paths and
    // leaves the idiomatic one's result in place).
    void lockstepInstall(PS2Runtime &runtime);
    bool lockstepCall(Entry &e, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
#endif

    template <Entry *E>
    void idiomThunk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if ((g_idiomMask & E->module) == 0u || g_referenceMode)
        {
            ++E->forwarded;
            E->previous(rdram, ctx, runtime);
            return;
        }
#if TS_NATIVE_LOCKSTEP
        if (E->pure && lockstepCall(*E, rdram, ctx, runtime))
            return;
#endif
        ++E->calls;
        E->native(rdram, ctx, runtime);
#if TS_NATIVE_POISON
        if (E->contract == Contract::Abi)
            poisonFree(*E, ctx);
#endif
    }

    // ---- Guest memory

    // A structure in guest memory, resolved once: RDRAM (kseg0/1 aliases
    // masked) or the scratchpad. ok() false: the address is elsewhere (I/O,
    // past the end) and the caller must take the old path before writing
    // anything.
    struct GuestView
    {
        uint8_t *host = nullptr;
        uint32_t guest = 0;

        static GuestView resolve(uint8_t *rdram, uint32_t addr, uint32_t bytes)
        {
            GuestView v;
            v.guest = addr;
            if (addr < PS2_RAM_SIZE && bytes <= PS2_RAM_SIZE - addr)
            {
                v.host = rdram + addr;
                return v;
            }
            const uint32_t phys = addr & 0x1FFFFFFFu;
            if ((addr & 0x80000000u) != 0u && phys < PS2_RAM_SIZE && bytes <= PS2_RAM_SIZE - phys)
            {
                v.host = rdram + phys;
                return v;
            }
            if (ps2IsScratchpadAddress(addr))
            {
                const uint32_t off = ps2ScratchpadOffset(addr);
                if (bytes <= PS2_SCRATCHPAD_SIZE - off)
                    v.host = ps2GetScratchpadHostPtr() + off;
            }
            return v;
        }
        bool ok() const { return host != nullptr; }

        uint32_t load32(uint32_t off) const
        {
            uint32_t v;
            std::memcpy(&v, host + off, 4);
            return v;
        }
        uint64_t load64(uint32_t off) const
        {
            uint64_t v;
            std::memcpy(&v, host + off, 8);
            return v;
        }
        float loadF(uint32_t off) const
        {
            float v;
            std::memcpy(&v, host + off, 4);
            return v;
        }
        __m128 loadQ(uint32_t off) const { return _mm_loadu_ps(reinterpret_cast<const float *>(host + off)); }

        // Stores: journaled (PS2X_WRITE_JOURNAL) like the translated code's.
        void store32(uint32_t off, uint32_t v) const
        {
            journal(off, 4u);
            std::memcpy(host + off, &v, 4);
        }
        void store64(uint32_t off, uint64_t v) const
        {
            journal(off, 8u);
            std::memcpy(host + off, &v, 8);
        }
        void storeF(uint32_t off, float v) const
        {
            journal(off, 4u);
            std::memcpy(host + off, &v, 4);
        }
        void storeQ(uint32_t off, __m128 v) const
        {
            journal(off, 16u);
            _mm_storeu_ps(reinterpret_cast<float *>(host + off), v);
        }

    private:
        void journal(uint32_t off, uint32_t size) const
        {
#if PS2X_WRITE_JOURNAL
            ps2xJournalTouch(guest + off, size);
#else
            (void)off;
            (void)size;
#endif
        }
    };

    // ---- No-yield regions (M7.0, over B-SCHED's API in ee_checkpoint_clock.h)

    class NoYield
    {
    public:
        explicit NoYield(uint16_t tag) : m_tag(tag) { ps2xNoYieldEnter(tag); }
        ~NoYield() { ps2xNoYieldLeave(m_tag); }
        NoYield(const NoYield &) = delete;
        NoYield &operator=(const NoYield &) = delete;

    private:
        uint16_t m_tag;
    };

    // ---- Register helpers

    inline void returnToCaller(R5900Context *ctx) { ctx->pc = GPR_U32(ctx, 31); }
}
#endif

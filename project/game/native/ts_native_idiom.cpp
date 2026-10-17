// Idiomatic game-logic natives: the harness (see ts_native_idiom.h) and the
// modules' registration.
#include "ts_native_idiom.h"

#if defined(PLATFORM_XBOX)
#include "../ts_knobs.h"
#include "../../../src/xbox/xbox_perf.h"
#include "ts_fp_x87.h"
#include "ts_pure_functions.h"

#include <cstddef>
#include <cstdio>
#include <cstring>

#ifndef TS_LEAF_BOOTTEST
#define TS_LEAF_BOOTTEST 0
#endif
#if TS_LEAF_BOOTTEST
#include "../ts_native_selftest.h"
#include "ps2_recompiled_functions.h"
#include "ts_leaf.h"
#endif

namespace ts_idiom
{
    // Every module compiled in starts on; the knob turns modules off for
    // an A/B (knob idiom <mask>).
    uint32_t g_idiomMask = 0xFFFFFFFFu;
    bool g_referenceMode = false;

    namespace
    {
        constexpr uint32_t kEntryMax = 64u;
        Entry *g_entries[kEntryMax];
        uint32_t g_entryCount = 0;
        uint32_t g_refused = 0;

        // Callee-saved registers and the ones an Abi entry must keep, as
        // one 32-bit mask per file (the audit's "keep" sets).
        constexpr uint32_t kCallerSavedGpr = 0x0300FFFEu; // $at, $v0-$t7, $t8, $t9
        constexpr uint32_t kCallerSavedFpr = 0x000FFFFFu; // $f0-$f19
    }

    bool registerEntry(PS2Runtime &runtime, Entry &e, GuestFunction thunk)
    {
        if (!runtime.hasFunction(e.address) || g_entryCount >= kEntryMax)
        {
            ++g_refused;
            std::fprintf(stderr, "[TS:idiom] %s (0x%X): no table entry, not replaced\n", e.name, e.address);
            return false;
        }
        if (e.contract == Contract::Abi && !ts_abi::audited(e.address))
        {
            ++g_refused;
            std::fprintf(stderr, "[TS:idiom] %s (0x%X): no audited register set, not replaced\n", e.name,
                         e.address);
            return false;
        }
        e.previous = runtime.lookupFunction(e.address);
        // The lockstep runs an entry twice only if the purity audit agrees
        // (ts_pure_functions.h: no blocking, kernel or indirect call below it).
        e.pure = e.pure && ts_pure::isPure(e.address);
        e.observed = e.contract == Contract::Abi
                         ? ts_abi::observedFor(e.address)
                         : ts_abi::Observed{e.address, ts_abi::kAllGpr, ts_abi::kAllFpr, ts_abi::Observed::kMiscAll};
        runtime.replaceFunction(e.address, thunk);
        g_entries[g_entryCount++] = &e;
        return true;
    }

    void poisonFree(const Entry &e, R5900Context *ctx)
    {
        const uint32_t gpr = ~e.observed.gpr & kCallerSavedGpr;
        const uint32_t fpr = ~e.observed.fpr & kCallerSavedFpr;
        for (int i = 1; i < 32; ++i)
            if ((gpr >> i) & 1u)
                SET_GPR_U64(ctx, i, 0xDEAD0000DEAD0000ull | (static_cast<uint64_t>(i) << 8));
        for (int i = 0; i < 32; ++i)
            if ((fpr >> i) & 1u)
            {
                const uint32_t bits = 0x7FBADD00u | static_cast<uint32_t>(i); // a signalling NaN
                std::memcpy(&ctx->f[i], &bits, 4);
            }
        if ((e.observed.misc & ts_abi::Observed::kMiscHiLo) == 0u)
            ctx->hi = ctx->lo = 0xDEADDEADDEADDEADull;
        if ((e.observed.misc & ts_abi::Observed::kMiscHiLo1) == 0u)
            ctx->hi1 = ctx->lo1 = 0xDEADDEADDEADDEADull;
        if ((e.observed.misc & ts_abi::Observed::kMiscFcc) == 0u)
            ctx->fcr31 ^= 0x800000u;
    }

    uint32_t compareKept(const Entry &e, const R5900Context &want, const R5900Context &got, uint32_t &nanOnly,
                         uint32_t &firstOffset)
    {
        uint32_t differ = 0;
        auto note = [&](size_t offset) {
            if (differ++ == 0u)
                firstOffset = static_cast<uint32_t>(offset);
        };
        auto isNan = [](uint32_t bits) { return (bits & 0x7FFFFFFFu) > 0x7F800000u; };
        for (int i = 1; i < 32; ++i)
        {
            if (((e.observed.gpr >> i) & 1u) == 0u)
                continue;
            uint64_t a, b;
            std::memcpy(&a, &want.r[i], 8);
            std::memcpy(&b, &got.r[i], 8);
            if (a != b)
                note(offsetof(R5900Context, r) + size_t(i) * 16u);
        }
        for (int i = 0; i < 32; ++i)
        {
            if (((e.observed.fpr >> i) & 1u) == 0u)
                continue;
            uint32_t a, b;
            std::memcpy(&a, &want.f[i], 4);
            std::memcpy(&b, &got.f[i], 4);
            if (a == b)
                continue;
            if (isNan(a) && isNan(b))
                ++nanOnly;
            else
                note(offsetof(R5900Context, f) + size_t(i) * 4u);
        }
        const uint32_t misc = e.observed.misc;
        if ((misc & ts_abi::Observed::kMiscHiLo) != 0u && (want.hi != got.hi || want.lo != got.lo))
            note(offsetof(R5900Context, hi));
        if ((misc & ts_abi::Observed::kMiscHiLo1) != 0u && (want.hi1 != got.hi1 || want.lo1 != got.lo1))
            note(offsetof(R5900Context, hi1));
        if ((misc & ts_abi::Observed::kMiscFcc) != 0u && ((want.fcr31 ^ got.fcr31) & 0x800000u) != 0u)
            note(offsetof(R5900Context, fcr31));
        if ((misc & ts_abi::Observed::kMiscFacc) != 0u && std::memcmp(&want.f_acc, &got.f_acc, 4) != 0)
            note(offsetof(R5900Context, f_acc));
        if ((misc & ts_abi::Observed::kMiscVu0) != 0u &&
            (std::memcmp(want.vu0_vf, got.vu0_vf, sizeof(want.vu0_vf)) != 0 ||
             std::memcmp(&want.vu0_acc, &got.vu0_acc, sizeof(want.vu0_acc)) != 0))
            note(offsetof(R5900Context, vu0_vf));
        if (want.pc != got.pc)
            note(offsetof(R5900Context, pc));
        return differ;
    }

    namespace
    {
        // [TS:idiom] mask=<knob> entries=<n> refused=<n>, then per module:
        // calls, calls forwarded (knob off / reference mode), fallbacks
        // (inside an entry: out-of-range inputs sent to the previous
        // occupant), lockstep samples / diffs / NaN-only / skipped.
        void reportLine(XboxReportLine &line)
        {
            line.add(" mask=%x entries=%u refused=%u", g_idiomMask, g_entryCount, g_refused);
            static const struct
            {
                uint32_t bit;
                const char *name;
            } kModules[] = {{kModFpX87, "x87"}, {kModAnim, "anim"},     {kModLight, "light"},
                            {kModCollision, "coll"}, {kModPortal, "portal"}, {kModCam, "cam"}};
            for (const auto &m : kModules)
            {
                uint32_t calls = 0, forwarded = 0, fallbacks = 0, ls = 0, lsDiff = 0, lsNan = 0, lsSkip = 0, n = 0;
                for (uint32_t i = 0; i < g_entryCount; ++i)
                {
                    const Entry &e = *g_entries[i];
                    if (e.module != m.bit)
                        continue;
                    ++n;
                    calls += e.calls;
                    forwarded += e.forwarded;
                    fallbacks += e.fallbacks;
                    ls += e.lockstepCalls;
                    lsDiff += e.lockstepDiffs;
                    lsNan += e.lockstepNan;
                    lsSkip += e.lockstepSkipped;
                }
                if (n == 0u)
                    continue;
                line.add(" %s=%u/%u/%u", m.name, calls, forwarded, fallbacks);
#if TS_NATIVE_LOCKSTEP
                line.add(" ls.%s=%u/%u/%u/%u", m.name, ls, lsDiff, lsNan, lsSkip);
#else
                (void)ls;
                (void)lsDiff;
                (void)lsNan;
                (void)lsSkip;
#endif
            }
#if TS_FP_X87
            ts_fp_x87::addReport(line);
#endif
        }
    }
}

#if TS_LEAF_BOOTTEST
namespace
{
    // TS_LEAF_BOOTTEST: each inline leaf core (ts_leaf.h), wrapped as a
    // function, against its translated original, Exact mode (every register
    // and byte), 10,000 cases. A core that differs must come off
    // src/xbox/tools/leaf_whitelist.txt before TS_LEAF_CALLS is used.
    template <void (*Core)(uint8_t *, R5900Context *)>
    void leafAsFunction(uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        Core(rdram, ctx);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void setupLeafFloat(ts_native_test::TestRng &rng, R5900Context &c, uint8_t *)
    {
        ts_native_test::setFloat(c, 12, ts_native_test::randomFloatBits(rng));
    }

    void setupLeafAngles(ts_native_test::TestRng &rng, R5900Context &c, uint8_t *)
    {
        // Angles in degrees around the wrap points, and any bits now and then.
        for (int reg : {12, 13})
        {
            const uint32_t pick = rng.next();
            const uint32_t bits = (pick & 7u) == 0u ? ts_native_test::randomFloatBits(rng)
                                                    : ts_native_test::bitsOf(static_cast<float>(
                                                          static_cast<int32_t>(pick >> 8) % 720000) / 1000.0f);
            ts_native_test::setFloat(c, reg, bits);
        }
    }

    void setupLeafWords(ts_native_test::TestRng &rng, R5900Context &c, uint8_t *)
    {
        R5900Context *ctx = &c;
        SET_GPR_U64(ctx, 4, ts_native_test::randomWord64(rng));
        SET_GPR_U64(ctx, 5, ts_native_test::randomWord64(rng));
    }

    void leafBootTest(PS2Runtime &runtime)
    {
        using namespace ts_native_test;
        const NativeEntry leaves[] = {
            {"fabsf", 0x2DC5A0u, &fabsf_0x2dc5a0, &leafAsFunction<&ts_leaf::fabsfCore>, &setupLeafFloat, false, nullptr, 0u},
            {"anglediff", 0x284E38u, &anglediff_0x284e38, &leafAsFunction<&ts_leaf::anglediffCore>, &setupLeafAngles,
             true, nullptr, 0u},
            {"__muldi3", 0x2E4648u, &ps2___muldi3_0x2e4648, &leafAsFunction<&ts_leaf::muldi3Core>, &setupLeafWords,
             false, nullptr, 0u},
        };
        uint8_t *rdram = runtime.memory().getRDRAM();
        static uint8_t saved[kScratchBytes];
        std::memcpy(saved, rdram + kScratch, kScratchBytes);
        {
            ClockHold hold(runtime);
            for (const NativeEntry &leaf : leaves)
            {
                const TestOutcome outcome = testFunction(runtime, rdram, leaf, "leaf");
                std::fprintf(stderr, "[TS:leaf] %-10s %s: %d cases, %u differ, %u NaN payload only\n", leaf.name,
                             outcome.mismatches != 0u ? "DIFFERS" : "exact", kTestCases, outcome.mismatches,
                             outcome.nanOnly);
            }
        }
        std::memcpy(rdram + kScratch, saved, kScratchBytes);
    }
}
#endif

void registerTsNativeIdiom(PS2Runtime &runtime)
{
    using namespace ts_idiom;
#if TS_LEAF_BOOTTEST
    leafBootTest(runtime);
#endif
    uint32_t modules = 0;
#if TS_FP_X87
    if (ts_fp_x87::registerModule(runtime))
        modules |= kModFpX87;
#endif
    (void)runtime;
    if (g_entryCount == 0u && g_refused == 0u)
        return; // no module built in: nothing registered, nothing logged (the default build)
#if TS_NATIVE_LOCKSTEP
    lockstepInstall(runtime);
#endif
    tsKnobRegister("idiom", &g_idiomMask, 0xFFFFFFFFu);
    xboxRegisterReportLine("[TS:idiom]", &reportLine);
    std::fprintf(stderr, "[TS:idiom] modules=%x entries=%u refused=%u lockstep=%u poison=%u\n", modules, g_entryCount,
                 g_refused, unsigned(TS_NATIVE_LOCKSTEP), unsigned(TS_NATIVE_POISON));
}
#else
void registerTsNativeIdiom(PS2Runtime &runtime)
{
    (void)runtime; // the idiomatic modules are Xbox-only (the natives they replace are)
}
#endif

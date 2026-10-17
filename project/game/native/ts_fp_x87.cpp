// M7.1, x87 doubles (src/xbox/PUSH-BC-PLAN.md section 3.6; owned by
// B-LOGIC): the soft-double leaves as idiomatic entries over the kernels in
// ts_fp_x87.h. Each entry's previous occupant (the fp-bit transcription,
// ts_native_fp.cpp, or the translated original) is its fallback for every
// input the kernels refuse.
//
// Contract: Abi (ts_abi_observed.h). Each routine writes the result
// register and every other register the audit says a caller reads after it
// and the original writes, with the original's value:
//   dpadd, dpdiv, dptoli, fptodp, __ieee754_sqrt,
//   atan, __ieee754_atan2                          $v0
//   dpsub                                          $v0, $a1 (pack_d's significand)
//   dpmul                                          $v0, $a1, HI/LO (the last partial product)
//   dpcmp                                          $v0, $a1 (the second record's address)
//   dptofp                                         $f0
// Nothing else is written (no guest memory: the originals' stack frames are
// dead below $sp). registerModule checks each routine's audited set against
// what it reproduces and leaves a routine whose set has grown on its
// previous occupant (logged).
//
// Switches (src/xbox/mk/b_logic.mk):
//   TS_FP_X87=1            build and register the module (default 0: the
//                          transcriptions stay, nothing here is linked in)
//   TS_FP_X87_BOOTTEST=1   at boot each routine runs 10,000 cases against
//                          the translated original in Abi mode
//                          (ts_native_selftest.h); one that differs is not
//                          registered ([TS:x87] lines)
//   TS_FP_X87_SELFCHECK=1  every call the kernels accept also runs the
//                          previous occupant on a copy of the context and
//                          compares the kept registers: [TS:idiom] fpdiff=
//                          must stay 0
//   knob idiom, bit 0      the module on (1, default) or off for an A/B
#include "ts_native_idiom.h"

#if defined(PLATFORM_XBOX) // (the x87 kernels' GNU asm: the Xbox build and the host test only)
#include "ts_fp_x87.h"
#include "../ts_native_selftest.h"
#include "../../../src/xbox/xbox_perf.h"
#include "ps2_recompiled_functions.h"

#include <cstdio>

#ifndef TS_FP_X87_BOOTTEST
#define TS_FP_X87_BOOTTEST 0
#endif
#ifndef TS_FP_X87_SELFCHECK
#define TS_FP_X87_SELFCHECK 0
#endif

namespace ts_fp_x87
{
    namespace
    {
        using ts_idiom::Contract;
        using ts_idiom::Entry;
        using ts_idiom::kModFpX87;

#define X87_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define X87_PASS rdram, ctx, runtime

        // Control-word reloads (a kernel found PC/RC/masks not as it needs).
        uint32_t g_cwReloads = 0;

        enum : int
        {
            R_V0 = 2, R_V1 = 3, R_A0 = 4, R_A1 = 5, R_SP = 29, R_RA = 31,
        };

        // The upper 64 bits of src copied into dst (the original's movn).
        inline void copyHigh(R5900Context *ctx, int dst, int src)
        {
            std::memcpy(reinterpret_cast<uint8_t *>(&ctx->r[dst]) + 8, reinterpret_cast<const uint8_t *>(&ctx->r[src]) + 8,
                        8);
        }

        void x87Dpadd(X87_ARGS);
        void x87Dpsub(X87_ARGS);
        void x87Dpmul(X87_ARGS);
        void x87Dpdiv(X87_ARGS);
        void x87Dpcmp(X87_ARGS);
        void x87Fptodp(X87_ARGS);
        void x87Dptofp(X87_ARGS);
        void x87Dptoli(X87_ARGS);
        void x87Sqrt(X87_ARGS);
        void x87Atan(X87_ARGS);
        void x87Atan2(X87_ARGS);

        Entry g_dpadd{"dpadd", 0x2E3180u, kModFpX87, &x87Dpadd, Contract::Abi, true};
        Entry g_dpsub{"dpsub", 0x2E31D8u, kModFpX87, &x87Dpsub, Contract::Abi, true};
        Entry g_dpmul{"dpmul", 0x2E3240u, kModFpX87, &x87Dpmul, Contract::Abi, true};
        Entry g_dpdiv{"dpdiv", 0x2E34E8u, kModFpX87, &x87Dpdiv, Contract::Abi, true};
        Entry g_dpcmp{"dpcmp", 0x2E3768u, kModFpX87, &x87Dpcmp, Contract::Abi, true};
        Entry g_fptodp{"fptodp", 0x2E4608u, kModFpX87, &x87Fptodp, Contract::Abi, true};
        Entry g_dptofp{"dptofp", 0x2E3A10u, kModFpX87, &x87Dptofp, Contract::Abi, true};
        Entry g_dptoli{"dptoli", 0x2E3870u, kModFpX87, &x87Dptoli, Contract::Abi, true};
        Entry g_sqrt{"__ieee754_sqrt", 0x2D9510u, kModFpX87, &x87Sqrt, Contract::Abi, true};
        Entry g_atan{"atan", 0x2D6BA8u, kModFpX87, &x87Atan, Contract::Abi, true};
        Entry g_atan2{"__ieee754_atan2", 0x2D84B0u, kModFpX87, &x87Atan2, Contract::Abi, true};

        // The libm tables in the game's data (fdlibm s_atan.c and
        // e_atan2.c, at the addresses the listings load them from), read
        // for every call (constant data; reading it costs less than a
        // stale copy could).
        constexpr uint32_t kAtanHi = 0x3AA788u, kAtanLo = 0x3AA7A8u, kAtanT = 0x3AA7C8u, kAtanHuge = 0x3AA830u;
        constexpr uint32_t kAtan2BigK = 0x3AA958u, kAtan2PiLo2 = 0x3AA960u, kAtan2Pi2 = 0x3AA968u,
                           kAtan2PiLo3 = 0x3AA970u, kAtan2Pi3 = 0x3AA978u;

        inline uint64_t load64(const uint8_t *rdram, uint32_t addr)
        {
            uint64_t v;
            std::memcpy(&v, rdram + addr, 8);
            return v;
        }

        void loadAtan(const uint8_t *rdram, AtanConsts &c)
        {
            for (uint32_t i = 0; i < 4u; ++i)
            {
                c.atanhi[i] = load64(rdram, kAtanHi + i * 8u);
                c.atanlo[i] = load64(rdram, kAtanLo + i * 8u);
            }
            for (uint32_t i = 0; i < 11u; ++i)
                c.aT[i] = load64(rdram, kAtanT + i * 8u);
            c.huge = load64(rdram, kAtanHuge);
        }

        // ---- TS_FP_X87_SELFCHECK: the previous occupant on a copy

#if TS_FP_X87_SELFCHECK
        uint32_t g_checked = 0, g_fpdiff = 0;
        R5900Context g_entryCtx, g_softCtx; // (fixed storage: no allocation in a match)

        inline void saveEntry(const R5900Context *ctx) { std::memcpy(&g_entryCtx, ctx, sizeof(g_entryCtx)); }

        void checkAgainstPrevious(const Entry &e, X87_ARGS)
        {
            std::memcpy(&g_softCtx, &g_entryCtx, sizeof(g_softCtx));
            e.previous(rdram, &g_softCtx, runtime); // writes only its own (dead) stack frames
            uint32_t nans = 0, first = 0;
            ++g_checked;
            if (ts_idiom::compareKept(e, g_softCtx, *ctx, nans, first) != 0u && g_fpdiff++ < 8u)
            {
                const R5900Context *in = &g_entryCtx;
                const uint64_t a0 = GPR_U64(in, R_A0), a1 = GPR_U64(in, R_A1);
                std::fprintf(stderr, "[TS:x87] fpdiff %s: ctx+0x%x a0=%08x%08x a1=%08x%08x f12=%08x\n", e.name, first,
                             static_cast<uint32_t>(a0 >> 32), static_cast<uint32_t>(a0),
                             static_cast<uint32_t>(a1 >> 32), static_cast<uint32_t>(a1),
                             ts_native_test::bitsOf(in->f[12]));
            }
        }
#define X87_SAVE_ENTRY() saveEntry(ctx)
#define X87_CHECK(e) checkAgainstPrevious((e), X87_PASS)
#else
#define X87_SAVE_ENTRY() ((void)0)
#define X87_CHECK(e) ((void)0)
#endif

        inline void fallback(Entry &e, X87_ARGS)
        {
            ++e.fallbacks;
            e.previous(X87_PASS);
        }

        // ---- The entries

        template <bool kSubtract>
        inline void addSubEntry(Entry &e, X87_ARGS)
        {
            const uint64_t a = GPR_U64(ctx, R_A0), b = GPR_U64(ctx, R_A1);
            uint64_t r;
            bool zero;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!addSub(a, b, kSubtract, r, zero))
                {
                    fallback(e, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            if (kSubtract) // $a1 is read after dpsub (the audit): pack_d leaves the significand there
                SET_GPR_U64(ctx, R_A1, zero ? 0u : significand(r));
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(e);
        }

        void x87Dpadd(X87_ARGS) { addSubEntry<false>(g_dpadd, X87_PASS); }
        void x87Dpsub(X87_ARGS) { addSubEntry<true>(g_dpsub, X87_PASS); }

        void x87Dpmul(X87_ARGS)
        {
            const uint64_t a = GPR_U64(ctx, R_A0), b = GPR_U64(ctx, R_A1);
            uint64_t r;
            bool zero;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!mul(a, b, r, zero))
                {
                    fallback(g_dpmul, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            SET_GPR_U64(ctx, R_A1, zero ? 0u : significand(r));
            if (!zero) // the partial products ran (a zero operand skips them)
                mulHiLo(a, b, ctx->hi, ctx->lo);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_dpmul);
        }

        void x87Dpdiv(X87_ARGS)
        {
            const uint64_t a = GPR_U64(ctx, R_A0), b = GPR_U64(ctx, R_A1);
            uint64_t r;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!div(a, b, r))
                {
                    fallback(g_dpdiv, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_dpdiv);
        }

        void x87Dpcmp(X87_ARGS)
        {
            int32_t result;
            if (!cmp(GPR_U64(ctx, R_A0), GPR_U64(ctx, R_A1), result))
            {
                fallback(g_dpcmp, X87_PASS);
                return;
            }
            X87_SAVE_ENTRY();
            SET_GPR_S32(ctx, R_V0, result);
            // dpcmp hands __fpcmp_parts_d the second record at $sp-0x70+0x20.
            SET_GPR_S32(ctx, R_A1, static_cast<int32_t>(GPR_U32(ctx, R_SP) - 0x50u));
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_dpcmp);
        }

        void x87Fptodp(X87_ARGS)
        {
            uint32_t bits;
            std::memcpy(&bits, &ctx->f[12], 4);
            uint64_t r;
            if (!floatToDouble(bits, r))
            {
                fallback(g_fptodp, X87_PASS);
                return;
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_fptodp);
        }

        void x87Dptofp(X87_ARGS)
        {
            uint32_t r;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!doubleToFloat(GPR_U64(ctx, R_A0), r))
                {
                    fallback(g_dptofp, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            std::memcpy(&ctx->f[0], &r, 4);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_dptofp);
        }

        void x87Dptoli(X87_ARGS)
        {
            X87_SAVE_ENTRY();
            ToIntPath path;
            const uint64_t r = doubleToInt(GPR_U64(ctx, R_A0), path);
            SET_GPR_U64(ctx, R_V0, r);
            // The original's movn: a negated result is $v1's register (upper
            // half included), a negative saturation $a0's; both upper halves
            // are still the caller's there.
            if (path == ToIntPath::Negated)
                copyHigh(ctx, R_V0, R_V1);
            else if (path == ToIntPath::SaturatedNegative)
                copyHigh(ctx, R_V0, R_A0);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_dptoli);
        }

        void x87Sqrt(X87_ARGS)
        {
            uint64_t r;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!sqrt(GPR_U64(ctx, R_A0), r))
                {
                    fallback(g_sqrt, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_sqrt);
        }

        void x87Atan(X87_ARGS)
        {
            AtanConsts c;
            loadAtan(rdram, c);
            uint64_t r;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!atan(c, GPR_U64(ctx, R_A0), r))
                {
                    fallback(g_atan, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_atan);
        }

        void x87Atan2(X87_ARGS)
        {
            Atan2Consts c;
            loadAtan(rdram, c.atan);
            c.bigK = load64(rdram, kAtan2BigK);
            c.piLo2 = load64(rdram, kAtan2PiLo2);
            c.pi2 = load64(rdram, kAtan2Pi2);
            c.piLo3 = load64(rdram, kAtan2PiLo3);
            c.pi3 = load64(rdram, kAtan2Pi3);
            uint64_t r;
            {
                CwScope cw;
                g_cwReloads += cw.changed() ? 1u : 0u;
                if (!atan2(c, GPR_U64(ctx, R_A0), GPR_U64(ctx, R_A1), r))
                {
                    fallback(g_atan2, X87_PASS);
                    return;
                }
            }
            X87_SAVE_ENTRY();
            SET_GPR_U64(ctx, R_V0, r);
            ctx->pc = GPR_U32(ctx, R_RA);
            X87_CHECK(g_atan2);
        }

        // What each routine reproduces beyond the registers it leaves alone
        // (registerModule refuses a routine whose audited set asks for more).
        struct Routine
        {
            Entry *entry;
            PS2Runtime::RecompiledFunction translated; // the boot test's reference
            uint32_t writesGpr;                        // caller-saved registers the original writes
            uint32_t writesMisc;                       // and HI/LO (kMiscHiLo), HI1/LO1, fcc
            uint32_t writesFpr;
            uint32_t reproducedGpr, reproducedMisc, reproducedFpr;
            void (*setup)(ts_native_test::TestRng &, R5900Context &, uint8_t *);
        };

        // The originals' writes (ts_native_fp.cpp's per-routine notes, the
        // helpers included); $s0-$s7, $sp, $ra come back restored.
        constexpr uint32_t kArithWrites = 0x00000FFCu; // $v0-$t3
        constexpr uint32_t kHiLo = ts_abi::Observed::kMiscHiLo, kHiLo1 = ts_abi::Observed::kMiscHiLo1;

        // ---- Boot test inputs

        using ts_native_test::TestRng;

        uint64_t randomDouble(TestRng &rng)
        {
            const uint32_t pick = rng.next() % 16u;
            const uint64_t sign = (rng.next() & 1u) != 0u ? kSign : 0u;
            const uint64_t mant = rng.next64() & kMant;
            switch (pick)
            {
            case 0: return sign;                                                             // zero
            case 1: return sign | 0x7FF0000000000000ull;                                     // infinity
            case 2: return sign | 0x7FF0000000000000ull | mant | 1u;                         // NaN
            case 3: return sign | mant | 1u;                                                 // denormal
            case 4: return sign | (static_cast<uint64_t>(1u + rng.next() % 3u) << 52) | mant;      // the bottom
            case 5: return sign | (static_cast<uint64_t>(0x7FCu + rng.next() % 3u) << 52) | mant;  // the top
            case 6: return rng.next64();                                                    // any bits
            case 7:
            {
                // An everyday value: a small integer over a power of two.
                const double d = static_cast<double>(static_cast<int32_t>(rng.next()) >> 12) / 1024.0;
                uint64_t bits;
                std::memcpy(&bits, &d, 8);
                return bits;
            }
            default: return sign | (static_cast<uint64_t>(1023u - 40u + rng.next() % 80u) << 52) | mant;
            }
        }

        void setGpr(R5900Context &c, int reg, uint64_t value)
        {
            R5900Context *ctx = &c;
            SET_GPR_U64(ctx, reg, value);
        }

        void setupPair(TestRng &rng, R5900Context &c, uint8_t *)
        {
            const uint64_t a = randomDouble(rng);
            uint64_t b = randomDouble(rng);
            switch (rng.next() % 8u)
            {
            case 0: b = a ^ kSign; break;                      // x + -x: cancellation to zero
            case 1: b = (a ^ kSign) ^ (rng.next() & 0xFFu); break; // near-cancellation
            case 2: b = a; break;
            default: break;
            }
            setGpr(c, R_A0, a);
            setGpr(c, R_A1, b);
        }

        void setupOne(TestRng &rng, R5900Context &c, uint8_t *) { setGpr(c, R_A0, randomDouble(rng)); }

        void setupFloat(TestRng &rng, R5900Context &c, uint8_t *)
        {
            ts_native_test::setFloat(c, 12, ts_native_test::randomFloatBits(rng));
        }

        const Routine kRoutines[] = {
            {&g_dpadd, &dpadd_0x2e3180, kArithWrites, 0u, 0u, 0x004u, 0u, 0u, &setupPair},
            {&g_dpsub, &dpsub_0x2e31d8, kArithWrites, 0u, 0u, 0x024u, 0u, 0u, &setupPair},
            {&g_dpmul, &dpmul_0x2e3240, kArithWrites, kHiLo | kHiLo1, 0u, 0x024u, kHiLo, 0u, &setupPair},
            {&g_dpdiv, &dpdiv_0x2e34e8, kArithWrites, 0u, 0u, 0x004u, 0u, 0u, &setupPair},
            {&g_dpcmp, &dpcmp_0x2e3768, 0x000000FCu, 0u, 0u, 0x024u, 0u, 0u, &setupPair},
            {&g_fptodp, &fptodp_0x2e4608, 0x000001FCu, 0u, 0u, 0x004u, 0u, 0u, &setupFloat},
            {&g_dptofp, &dptofp_0x2e3a10, 0x000001FCu, 0u, 0x1u, 0u, 0u, 0x1u, &setupOne},
            {&g_dptoli, &dptoli_0x2e3870, 0x0000003Cu, 0u, 0u, 0x004u, 0u, 0u, &setupOne},
            {&g_sqrt, &ps2___ieee754_sqrt_0x2d9510, kArithWrites, kHiLo | kHiLo1, 0u, 0x004u, 0u, 0u, &setupOne},
            {&g_atan, &atan_0x2d6ba8, kArithWrites, kHiLo | kHiLo1, 0u, 0x004u, 0u, 0u, &setupOne},
            {&g_atan2, &ps2___ieee754_atan2_0x2d84b0, kArithWrites | 0x1002u, kHiLo | kHiLo1, 0u, 0x004u, 0u, 0u,
             &setupPair},
        };

        // The registers the audit says must be the original's, that the
        // original writes and that the routine does not reproduce: none, or
        // the routine stays on its previous occupant.
        bool contractHolds(const Routine &r, const ts_abi::Observed &o, uint32_t &missingGpr, uint32_t &missingMisc,
                           uint32_t &missingFpr)
        {
            missingGpr = o.gpr & r.writesGpr & ~r.reproducedGpr;
            missingMisc = o.misc & r.writesMisc & ~r.reproducedMisc;
            missingFpr = o.fpr & r.writesFpr & ~r.reproducedFpr;
            return missingGpr == 0u && missingMisc == 0u && missingFpr == 0u;
        }

#if TS_FP_X87_BOOTTEST
        // 10,000 cases against the translated original, Abi mode.
        bool bootTest(PS2Runtime &runtime, const Routine &r, const ts_abi::Observed &o)
        {
            using namespace ts_native_test;
            uint8_t *rdram = runtime.memory().getRDRAM();
            static uint8_t saved[kScratchBytes];
            std::memcpy(saved, rdram + kScratch, kScratchBytes);
            const NativeEntry fn{r.entry->name, r.entry->address, r.translated, r.entry->native, r.setup, false,
                                 nullptr, 0u};
            const AbiMask mask{o.gpr, o.fpr, o.misc, 0x300u};
            TestOutcome outcome;
            {
                ClockHold hold(runtime);
                outcome = testFunction(runtime, rdram, fn, "x87", 0u, &mask);
            }
            std::memcpy(rdram + kScratch, saved, kScratchBytes);
            std::fprintf(stderr, "[TS:x87] %-16s %s: %d cases, %u differ, %u NaN payload only\n", r.entry->name,
                         outcome.mismatches != 0u ? "PREVIOUS" : "x87", kTestCases, outcome.mismatches, outcome.nanOnly);
            return outcome.mismatches == 0u;
        }
#endif

        template <Entry *E>
        constexpr PS2Runtime::RecompiledFunction thunkFor()
        {
            return &ts_idiom::idiomThunk<E>;
        }

        const PS2Runtime::RecompiledFunction kThunks[] = {
            thunkFor<&g_dpadd>(), thunkFor<&g_dpsub>(),  thunkFor<&g_dpmul>(),
            thunkFor<&g_dpdiv>(), thunkFor<&g_dpcmp>(),  thunkFor<&g_fptodp>(),
            thunkFor<&g_dptofp>(), thunkFor<&g_dptoli>(), thunkFor<&g_sqrt>(),
            thunkFor<&g_atan>(),  thunkFor<&g_atan2>(),
        };
        static_assert(sizeof(kThunks) / sizeof(kThunks[0]) == sizeof(kRoutines) / sizeof(kRoutines[0]),
                      "one thunk per routine");
    }

    bool registerModule(PS2Runtime &runtime)
    {
        uint32_t registered = 0;
        for (size_t i = 0; i < sizeof(kRoutines) / sizeof(kRoutines[0]); ++i)
        {
            const Routine &r = kRoutines[i];
            Entry &e = *r.entry;
            if (!ts_abi::audited(e.address))
            {
                std::fprintf(stderr, "[TS:x87] %s: no audited register set, left as it is\n", e.name);
                continue;
            }
            const ts_abi::Observed o = ts_abi::observedFor(e.address);
            uint32_t missingGpr, missingMisc, missingFpr;
            if (!contractHolds(r, o, missingGpr, missingMisc, missingFpr))
            {
                std::fprintf(stderr,
                             "[TS:x87] %s: the audit says callers read gpr %08x misc %x fpr %08x after it, which "
                             "this routine does not reproduce; left as it is\n",
                             e.name, missingGpr, missingMisc, missingFpr);
                continue;
            }
            if (!runtime.hasFunction(e.address))
                continue;
            e.previous = runtime.lookupFunction(e.address); // the fallback, also inside the boot test
#if TS_FP_X87_BOOTTEST
            if (!bootTest(runtime, r, o))
                continue;
#endif
            if (ts_idiom::registerEntry(runtime, e, kThunks[i]))
                ++registered;
        }
        std::fprintf(stderr, "[TS:x87] %u of %u routines on x87 (boot test %s, self-check %s)\n", registered,
                     unsigned(sizeof(kRoutines) / sizeof(kRoutines[0])), TS_FP_X87_BOOTTEST ? "on" : "off",
                     TS_FP_X87_SELFCHECK ? "on" : "off");
        return registered != 0u;
    }

    void addReport(XboxReportLine &line)
    {
        line.add(" cw=%u", g_cwReloads);
#if TS_FP_X87_SELFCHECK
        line.add(" fpcheck=%u fpdiff=%u", g_checked, g_fpdiff);
#endif
    }
}
#endif

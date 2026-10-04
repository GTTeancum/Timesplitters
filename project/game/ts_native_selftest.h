// The boot-time differential test shared by the native game routines (Xbox
// only): the pieces of ts_native_math.cpp's harness that do not depend on
// the function under test. A test case is a random context and random guest
// scratch memory; the original runs on one copy, the native version on
// another from the same memory, then every context word and every scratch
// byte are compared. Float words where both sides hold a NaN count
// separately and do not fail a function (which operand's NaN an SSE
// operation returns depends on the operand order the compiler chose, and
// the recompiled originals get no fixed order either).
//
// Header-only so that a host harness can include the native file alone.
#pragma once

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "runtime/ee_scheduler.h"

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>

namespace ts_native_test
{
    using GuestFunction = PS2Runtime::RecompiledFunction;

    struct TestRng
    {
        uint32_t state;
        uint32_t next()
        {
            state ^= state << 13;
            state ^= state >> 17;
            state ^= state << 5;
            return state;
        }
        uint64_t next64() { return static_cast<uint64_t>(next()) << 32 | next(); }
    };

    // Guest scratch: the HLE kernel's callback-stack arena, unused before the
    // game runs; saved and restored around the test. Operand slots at the
    // bottom, each test's structures above them, the stack ($sp at the top)
    // above those.
    constexpr uint32_t kScratch = 0x000C0000u;
    constexpr uint32_t kScratchBytes = 0x1A00u;
    constexpr uint32_t kOperandBytes = 0x180u;    // five 64-byte slots, plus room to shift one
    constexpr uint32_t kTestReturn = 0x00012340u; // $ra: no function there, so a run ends on it
    constexpr uint32_t kGameGp = 0x003B47F0u;
    constexpr uint32_t kLibVersion = 0x003AB118u; // fdlibm _LIB_VERSION
    constexpr int kTestCases = 10000;

    inline uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }

    inline float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    inline uint64_t sext32(uint32_t value) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(value))); }

    inline void writeTestWord(uint8_t *rdram, uint32_t address, uint32_t value) { std::memcpy(rdram + address, &value, sizeof(value)); }

    inline uint32_t readTestWord(const uint8_t *rdram, uint32_t address)
    {
        uint32_t value;
        std::memcpy(&value, rdram + address, sizeof(value));
        return value;
    }

    inline void setFloat(R5900Context &c, int reg, uint32_t bits) { std::memcpy(&c.f[reg], &bits, sizeof(bits)); }

    inline uint32_t randomFloatBits(TestRng &rng)
    {
        const uint32_t pick = rng.next();
        if ((pick & 3u) != 0u) // everyday values, three times in four
            return bitsOf(static_cast<float>(static_cast<int32_t>(pick >> 16) - 32768) * (1.0f / 1024.0f));
        const uint32_t sign = pick & 0x80000000u, bits = rng.next();
        switch ((pick >> 2) & 7u)
        {
        case 0: return sign;                                                         // +-0
        case 1: return sign | 0x7F800000u;                                           // +-Inf
        case 2: return sign | 0x7F800000u | (bits & 0x7FFFFFu) | 1u;                 // NaN, quiet or signalling
        case 3: return sign | (bits & 0x7FFFFFu) | 1u;                               // subnormal
        case 4: return sign | ((0xF0u + (bits >> 23) % 15u) << 23) | (bits & 0x7FFFFFu); // huge
        case 5: return sign | ((1u + (bits >> 23) % 16u) << 23) | (bits & 0x7FFFFFu);    // tiny
        default: return bits;                                                        // any bits
        }
    }

    // An everyday value (no NaN, Inf or denormal), for inputs the game keeps
    // sane: about -32 to 32 in 1/1024 steps, or a unit-range fraction.
    inline uint32_t randomSaneFloatBits(TestRng &rng)
    {
        const uint32_t pick = rng.next();
        if ((pick & 1u) != 0u)
            return bitsOf(static_cast<float>(static_cast<int32_t>(pick >> 16) - 32768) * (1.0f / 1024.0f));
        return bitsOf(static_cast<float>(static_cast<int32_t>(pick >> 8) & 0xFFFF) * (1.0f / 32768.0f) - 1.0f);
    }

    inline uint64_t randomWord64(TestRng &rng)
    {
        static const uint64_t kSpecial[] = {0u, 1u, ~0ull, 0x7FFFFFFFu, 0x80000000u, 0xFFFFFFFFu,
                                            0x100000000ull, 0x8000000000000000ull, 0x7FFFFFFFFFFFFFFFull,
                                            0xFFFFFFFF80000000ull};
        const uint32_t pick = rng.next() % 32u;
        if (pick < 10u)
            return kSpecial[pick];
        const uint64_t value = static_cast<uint64_t>(rng.next()) << 32 | rng.next();
        return pick < 20u ? sext32(static_cast<uint32_t>(value)) : value;
    }

    // Pointer arguments: one of five slots, now and then a word or three off
    // (partly overlapping operands) or with junk above bit 31, which the
    // originals' 32-bit address arithmetic drops.
    inline void setOperand(TestRng &rng, R5900Context &c, int reg)
    {
        R5900Context *ctx = &c;
        uint32_t address = kScratch + (rng.next() % 5u) * 64u;
        if ((rng.next() & 7u) == 0u)
            address += (1u + rng.next() % 3u) * 4u;
        const uint64_t high = (rng.next() & 7u) == 0u ? static_cast<uint64_t>(rng.next()) << 32 : 0u;
        SET_GPR_U64(ctx, reg, high | address);
    }

    // A pointer to a scratch structure, with junk above bit 31 now and then.
    inline void setPointer(TestRng &rng, R5900Context &c, int reg, uint32_t address)
    {
        R5900Context *ctx = &c;
        const uint64_t high = (rng.next() & 7u) == 0u ? static_cast<uint64_t>(rng.next()) << 32 : 0u;
        SET_GPR_U64(ctx, reg, high | address);
    }

    inline __m128 randomVector(TestRng &rng)
    {
        return _mm_castsi128_ps(
            _mm_set_epi32(randomFloatBits(rng), randomFloatBits(rng), randomFloatBits(rng), randomFloatBits(rng)));
    }

    // The registers the tested functions read or save, new for every case.
    // The rest of the context is randomised once per function: a stray
    // write shows against it just the same.
    inline void randomInputs(TestRng &rng, R5900Context &c)
    {
        for (int i : {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 16, 17, 18, 19, 20, 21, 22, 23, 30})
            c.r[i] = _mm_set_epi32(rng.next(), rng.next(), rng.next(), rng.next());
        for (int i : {12, 13, 14, 20, 21, 22})
            setFloat(c, i, randomFloatBits(rng));
        c.vu0_vf[0] = (rng.next() & 7u) != 0u ? _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f) // as the hardware has it
                                               : randomVector(rng);
        c.vu0_acc = randomVector(rng);
        c.fcr31 = rng.next();
        c.hi = rng.next64();
        c.lo = rng.next64();
    }

    inline void randomContext(TestRng &rng, R5900Context &c)
    {
        for (int i = 1; i < 32; ++i)
            c.r[i] = _mm_set_epi32(rng.next(), rng.next(), rng.next(), rng.next());
        c.hi1 = rng.next64();
        c.lo1 = rng.next64();
        for (__m128 &vf : c.vu0_vf)
            vf = randomVector(rng);
        for (int i = 0; i < 32; ++i)
            setFloat(c, i, randomFloatBits(rng));
        c.branch_pc = rng.next();
        R5900Context *ctx = &c;
        SET_GPR_U32(ctx, 28, kGameGp);
        SET_GPR_U32(ctx, 29, kScratch + kScratchBytes);
        SET_GPR_U32(ctx, 31, kTestReturn);
        randomInputs(rng, c);
    }

    enum : uint8_t
    {
        kWordExact,
        kWordFloat,
        kWordIgnored,
        kWordGprLow,  // the low word of a general register: a NaN moved into it is a float
        kWordGprHigh, // its sign extension
    };

    // How each 32-bit word of R5900Context is compared.
    inline const uint8_t *contextWordKinds()
    {
        static uint8_t kinds[sizeof(R5900Context) / 4u];
        static bool built = false;
        if (!built)
        {
            auto mark = [](size_t offset, size_t bytes, uint8_t kind) {
                for (size_t word = offset / 4u; word < (offset + bytes) / 4u; ++word)
                    kinds[word] = kind;
            };
            for (size_t reg = 0; reg < 32u; ++reg)
            {
                mark(offsetof(R5900Context, r) + reg * 16u, 4u, kWordGprLow);
                mark(offsetof(R5900Context, r) + reg * 16u + 4u, 4u, kWordGprHigh);
            }
            mark(offsetof(R5900Context, vu0_vf), sizeof(R5900Context::vu0_vf), kWordFloat);
            mark(offsetof(R5900Context, vu0_acc), sizeof(R5900Context::vu0_acc), kWordFloat);
            mark(offsetof(R5900Context, f), sizeof(R5900Context::f), kWordFloat);
            // Read only for an exception raised in a delay slot; the original
            // leaves its last branch there, the native code nothing.
            mark(offsetof(R5900Context, branch_pc), sizeof(R5900Context::branch_pc), kWordIgnored);
            built = true;
        }
        return kinds;
    }

    struct Difference
    {
        uint32_t words = 0; // words that differ (NaN payloads aside)
        uint32_t nans = 0;  // float words holding different NaNs
        uint32_t where = 0, want = 0, got = 0;
    };

    inline bool isNanBits(uint32_t bits) { return (bits & 0x7FFFFFFFu) > 0x7F800000u; }
    inline uint32_t signWord(uint32_t bits) { return (bits & 0x80000000u) != 0u ? 0xFFFFFFFFu : 0u; }

    inline void compareWords(const uint8_t *want, const uint8_t *got, uint32_t bytes, const uint8_t *kinds, bool floats,
                             Difference &difference)
    {
        if (std::memcmp(want, got, bytes) == 0)
            return;
        bool nanHigh = false; // the previous word was a NaN in a general register
        for (uint32_t word = 0; word < bytes / 4u; ++word)
        {
            uint32_t a, b;
            std::memcpy(&a, want + word * 4u, sizeof(a));
            std::memcpy(&b, got + word * 4u, sizeof(b));
            const bool skipHigh = nanHigh;
            nanHigh = false;
            if (a == b)
                continue;
            const uint8_t kind = kinds ? kinds[word] : kWordFloat;
            if (kind == kWordIgnored || (kind == kWordGprHigh && skipHigh))
                continue;
            if (floats && kind == kWordFloat && isNanBits(a) && isNanBits(b))
            {
                ++difference.nans;
                continue;
            }
            if (floats && kind == kWordGprLow && isNanBits(a) && isNanBits(b) && word + 1u < bytes / 4u)
            {
                // A NaN moved into an integer register (mfc1, or a load of a
                // float), sign-extended: only its payload differs.
                uint32_t highA, highB;
                std::memcpy(&highA, want + word * 4u + 4u, sizeof(highA));
                std::memcpy(&highB, got + word * 4u + 4u, sizeof(highB));
                if (highA == signWord(a) && highB == signWord(b))
                {
                    ++difference.nans;
                    nanHigh = true;
                    continue;
                }
            }
            if (difference.words++ == 0u)
            {
                difference.where = word * 4u;
                difference.want = a;
                difference.got = b;
            }
        }
    }

    // Runs one guest call to its return. An original stopped at a checkpoint
    // (none should be: the clock is held) carries on where it stopped.
    inline void runGuest(PS2Runtime &runtime, uint8_t *rdram, R5900Context &ctx, GuestFunction function, uint32_t entry)
    {
        ctx.pc = entry;
        function(rdram, &ctx, &runtime);
        for (uint32_t n = 0; ctx.pc != kTestReturn && n < 100000u && runtime.hasFunction(ctx.pc); ++n)
            runtime.lookupFunction(ctx.pc)(rdram, &ctx, &runtime);
    }

    // The originals' loops and calls run scheduler checkpoints. Before the
    // game starts none may come due or charge cycles (that would run the
    // IOP and the EE timers): the fast path's bound is lifted for the test
    // and the clock put back afterwards. The base class is protected; a
    // C-style cast is the one conversion that may name it.
    class ClockHold
    {
    public:
        explicit ClockHold(PS2Runtime &runtime)
            : m_clock((EeCheckpointClock &)runtime.eeScheduler()), m_cycle(m_clock.m_eeCycle),
              m_fastUntil(m_clock.m_fastUntil),
              m_pending(m_clock.m_checkpointPending.exchange(false, std::memory_order_acq_rel))
        {
            m_clock.m_fastUntil = UINT64_MAX;
        }

        ~ClockHold()
        {
            m_clock.m_eeCycle = m_cycle;
            m_clock.m_fastUntil = m_fastUntil;
            if (m_pending)
                m_clock.m_checkpointPending.store(true, std::memory_order_release);
        }

    private:
        EeCheckpointClock &m_clock;
        uint64_t m_cycle, m_fastUntil;
        bool m_pending;
    };

    struct SavedRegion
    {
        uint32_t address, bytes;
    };

    // A function under test: its original, its native version, the setup
    // that lays out its inputs, and the static memory (outside the scratch)
    // it writes, compared like the scratch.
    struct NativeEntry
    {
        const char *name;
        uint32_t address;
        GuestFunction original, native;
        void (*setup)(TestRng &, R5900Context &, uint8_t *rdram);
        bool floats;              // float results: NaN payloads may differ (see above)
        const SavedRegion *extra; // static memory the function writes
        uint32_t extraCount;
    };

    struct TestOutcome
    {
        uint32_t mismatches = 0, nanOnly = 0;
    };

    constexpr uint32_t kExtraBytesMax = 0x400u;

    // The extra regions, gathered into one buffer.
    inline uint32_t gatherExtra(const NativeEntry &fn, const uint8_t *rdram, uint8_t *buffer)
    {
        uint32_t used = 0;
        for (uint32_t i = 0; i < fn.extraCount; ++i)
        {
            if (used + fn.extra[i].bytes > kExtraBytesMax)
                break;
            std::memcpy(buffer + used, rdram + fn.extra[i].address, fn.extra[i].bytes);
            used += fn.extra[i].bytes;
        }
        return used;
    }

    inline void scatterExtra(const NativeEntry &fn, uint8_t *rdram, const uint8_t *buffer)
    {
        uint32_t used = 0;
        for (uint32_t i = 0; i < fn.extraCount; ++i)
        {
            if (used + fn.extra[i].bytes > kExtraBytesMax)
                break;
            std::memcpy(rdram + fn.extra[i].address, buffer + used, fn.extra[i].bytes);
            used += fn.extra[i].bytes;
        }
    }

    inline uint32_t extraAddress(const NativeEntry &fn, uint32_t offset)
    {
        for (uint32_t i = 0; i < fn.extraCount; ++i)
        {
            if (offset < fn.extra[i].bytes)
                return fn.extra[i].address + offset;
            offset -= fn.extra[i].bytes;
        }
        return 0u;
    }

    inline TestOutcome testFunction(PS2Runtime &runtime, uint8_t *rdram, const NativeEntry &fn, const char *tag,
                                    uint32_t seed = 0u)
    {
        static R5900Context base, want, got;
        static uint8_t before[kScratchBytes], wantMemory[kScratchBytes];
        static uint8_t beforeExtra[kExtraBytesMax], wantExtra[kExtraBytesMax], gotExtra[kExtraBytesMax];
        TestRng rng{0x2545F491u ^ fn.address ^ seed};
        TestOutcome outcome;
        for (uint32_t offset = 0; offset < kScratchBytes; offset += 4u)
            writeTestWord(rdram, kScratch + offset, rng.next());
        randomContext(rng, base);
        for (int i = 0; i < kTestCases; ++i)
        {
            randomInputs(rng, base);
            for (uint32_t offset = 0; offset < kOperandBytes; offset += 4u)
                writeTestWord(rdram, kScratch + offset, randomFloatBits(rng));
            fn.setup(rng, base, rdram);
            std::memcpy(before, rdram + kScratch, kScratchBytes);
            const uint32_t extraBytes = gatherExtra(fn, rdram, beforeExtra);
            std::memcpy(&want, &base, sizeof(base));
            std::memcpy(&got, &base, sizeof(base));
            runGuest(runtime, rdram, want, fn.original, fn.address);
            std::memcpy(wantMemory, rdram + kScratch, kScratchBytes);
            gatherExtra(fn, rdram, wantExtra);
            std::memcpy(rdram + kScratch, before, kScratchBytes);
            scatterExtra(fn, rdram, beforeExtra);
            runGuest(runtime, rdram, got, fn.native, fn.address);
            gatherExtra(fn, rdram, gotExtra);

            Difference regs, memory, extra;
            compareWords(reinterpret_cast<const uint8_t *>(&want), reinterpret_cast<const uint8_t *>(&got),
                         sizeof(R5900Context), contextWordKinds(), fn.floats, regs);
            compareWords(wantMemory, rdram + kScratch, kScratchBytes, nullptr, fn.floats, memory);
            compareWords(wantExtra, gotExtra, extraBytes, nullptr, fn.floats, extra);
            if (regs.words != 0u || memory.words != 0u || extra.words != 0u)
            {
                if (outcome.mismatches++ == 0u)
                {
                    const Difference &first = regs.words != 0u ? regs : memory.words != 0u ? memory : extra;
                    const uint32_t where = regs.words != 0u ? first.where
                                           : memory.words != 0u ? kScratch + first.where
                                                                : extraAddress(fn, first.where);
                    uint32_t f12, f13;
                    std::memcpy(&f12, &base.f[12], sizeof(f12));
                    std::memcpy(&f13, &base.f[13], sizeof(f13));
                    R5900Context *in = &base;
                    std::fprintf(stderr,
                                 "[TS:%s] %s case %d: %s0x%x want %08x got %08x (a0=%08x a1=%08x a2=%08x "
                                 "f12=%08x f13=%08x)\n",
                                 tag, fn.name, i, regs.words != 0u ? "ctx+" : "mem ", where, first.want, first.got,
                                 GPR_U32(in, 4), GPR_U32(in, 5), GPR_U32(in, 6), f12, f13);
#if TS_NATIVE_MATH_VERBOSE
                    auto dump = [&](const char *what, const uint8_t *a, const uint8_t *b, uint32_t bytes, uint32_t at) {
                        for (uint32_t word = 0; word < bytes / 4u; ++word)
                        {
                            uint32_t x, y;
                            std::memcpy(&x, a + word * 4u, sizeof(x));
                            std::memcpy(&y, b + word * 4u, sizeof(y));
                            if (x != y)
                                std::fprintf(stderr, "[TS:%s]   %s+0x%x want %08x got %08x\n", tag, what, at + word * 4u, x, y);
                        }
                    };
                    dump("ctx", reinterpret_cast<const uint8_t *>(&want), reinterpret_cast<const uint8_t *>(&got),
                         sizeof(R5900Context), 0u);
                    dump("mem", wantMemory, rdram + kScratch, kScratchBytes, kScratch);
                    dump("extra", wantExtra, gotExtra, extraBytes, 0u);
#endif
                }
            }
            else if (regs.nans != 0u || memory.nans != 0u || extra.nans != 0u)
            {
                ++outcome.nanOnly;
            }
        }
        return outcome;
    }
}
#endif

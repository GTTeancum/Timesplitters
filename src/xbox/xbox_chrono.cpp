// std::chrono clocks, replacing nxdk's libc++ versions (which are then never
// linked: this file defines every function of libc++'s chrono.cpp).
//
// nxdk's steady_clock::now() computes counter * 1e9 / frequency from the
// processor's 733 MHz time-stamp counter. counter * 1e9 overflows 64 bits
// once the Xbox has been on for about 12.6 seconds, after which the clock
// jumps back about 25 seconds every 25 seconds, and every timed wait lasts
// until the clock catches up again. Here the counter is split into whole
// seconds and a remainder first, which cannot overflow.
//
// TS_CHRONO_MULT 1 (default; src/xbox/PUSH-BC-PLAN.md section 3.4 item 10,
// B-PLATFORM): that form costs a 64-bit division, a 64-bit remainder and a
// second division (three __aulldiv/__aullrem calls) at every now(). Instead
// the nanoseconds per tick are precomputed once as a whole part and a 64-bit
// binary fraction, and now() is counter * whole + (counter * fraction) >> 64
// in 32-bit multiplies. The fraction is truncated, so the result is the old
// one or, at most once in 2^64 / counter ticks, one nanosecond less; it
// never goes backwards and never drifts. 0: the division form, as before
// (also used when the counter frequency is 2^32 Hz or more).
#include <chrono>
#include <cstdint>
#include <ctime>

#include <windows.h>

#include "runtime/ps2_host_time.h" // det mode's real-clock read counter

#ifndef TS_CHRONO_MULT
#define TS_CHRONO_MULT 1
#endif

namespace
{
#if TS_CHRONO_MULT
    struct TickScale
    {
        uint64_t frequency = 0;
        uint64_t whole = 0;    // floor(1e9 / frequency)
        uint64_t fraction = 0; // floor(frac(1e9 / frequency) * 2^64)
        bool usable = false;
    };

    TickScale makeTickScale(uint64_t frequency)
    {
        TickScale scale;
        scale.frequency = frequency;
        if (frequency == 0u || frequency >= (1ull << 32))
            return scale;
        constexpr uint64_t kNs = 1000000000ull;
        scale.whole = kNs / frequency;
        const uint64_t rest = kNs % frequency; // < frequency < 2^32: rest << 32 fits
        const uint64_t high = (rest << 32) / frequency;
        const uint64_t rest2 = (rest << 32) % frequency;
        const uint64_t low = (rest2 << 32) / frequency;
        scale.fraction = (high << 32) | low;
        scale.usable = true;
        return scale;
    }

    // floor(counter * fraction / 2^64), from the four 32x32 products.
    inline uint64_t mulHigh64(uint64_t counter, uint64_t fraction)
    {
        const uint64_t c0 = static_cast<uint32_t>(counter), c1 = counter >> 32;
        const uint64_t f0 = static_cast<uint32_t>(fraction), f1 = fraction >> 32;
        const uint64_t p00 = c0 * f0, p01 = c0 * f1, p10 = c1 * f0, p11 = c1 * f1;
        const uint64_t middle = (p00 >> 32) + static_cast<uint32_t>(p01) + static_cast<uint32_t>(p10);
        return p11 + (p01 >> 32) + (p10 >> 32) + (middle >> 32);
    }
#endif
}

_LIBCPP_BEGIN_NAMESPACE_STD
namespace chrono
{
    steady_clock::time_point steady_clock::now() _NOEXCEPT
    {
        static const long long frequency = [] {
            LARGE_INTEGER value;
            QueryPerformanceFrequency(&value);
            return value.QuadPart;
        }();
        LARGE_INTEGER counter;
        QueryPerformanceCounter(&counter);
#if TS_CHRONO_MULT
        static const TickScale scale = makeTickScale(static_cast<uint64_t>(frequency));
        if (scale.usable)
        {
            const uint64_t ticks = static_cast<uint64_t>(counter.QuadPart);
            return time_point(duration(static_cast<long long>(ticks * scale.whole + mulHigh64(ticks, scale.fraction))));
        }
#endif
        const long long seconds = counter.QuadPart / frequency;
        const long long remainder = counter.QuadPart % frequency;
        return time_point(duration(seconds * 1000000000LL + remainder * 1000000000LL / frequency));
    }

    system_clock::time_point system_clock::now() _NOEXCEPT
    {
        // FILETIME counts 100 ns units since 1601; the Unix epoch is 1970.
        constexpr long long kUnixEpochIn100ns = 116444736000000000LL;
        // Det mode: every guest-visible calendar time is pinned
        // (runtime/ps2_host_time.h); a read of the real one is counted
        // ([TS:detc] hosttime=, must stay 0).
        if (ps2xHostTimePinned())
            ps2xHostTimeNoteRealRead();
        FILETIME ft;
        GetSystemTimeAsFileTime(&ft);
        const long long ticks = (static_cast<long long>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
        return time_point(duration((ticks - kUnixEpochIn100ns) / 10));
    }

    time_t system_clock::to_time_t(const time_point &t) _NOEXCEPT
    {
        return static_cast<time_t>(duration_cast<seconds>(t.time_since_epoch()).count());
    }

    system_clock::time_point system_clock::from_time_t(time_t t) _NOEXCEPT
    {
        return system_clock::time_point(seconds(t));
    }
}
_LIBCPP_END_NAMESPACE_STD

// Platform boot self-test (src/xbox/xbox_platform_selftest.cpp): the
// multiplier form against the division form for `cases` increasing counters
// at the real frequency and two others. Returns the cases off by more than
// the one nanosecond the truncated fraction allows, or that went backwards
// (0 expected).
uint32_t xboxChronoSelfTest(uint32_t cases)
{
#if TS_CHRONO_MULT
    LARGE_INTEGER value;
    QueryPerformanceFrequency(&value);
    const uint64_t frequencies[3] = {static_cast<uint64_t>(value.QuadPart), 733333333ull, 3579545ull};
    uint32_t bad = 0;
    for (const uint64_t frequency : frequencies)
    {
        const TickScale scale = makeTickScale(frequency);
        if (!scale.usable)
            continue;
        uint64_t x = 0x9E3779B97F4A7C15ull, lastTicks = 0, lastNs = 0;
        for (uint32_t i = 0; i < cases; ++i)
        {
            x ^= x << 13;
            x ^= x >> 7;
            x ^= x << 17;
            const uint64_t ticks = lastTicks + (x & 0xFFFFFFFFFull); // increasing, up to 2^36 a step
            const uint64_t fast = ticks * scale.whole + mulHigh64(ticks, scale.fraction);
            const uint64_t slow = (ticks / frequency) * 1000000000ull + (ticks % frequency) * 1000000000ull / frequency;
            if (fast > slow || slow - fast > 1u || fast < lastNs)
                ++bad;
            lastTicks = ticks;
            lastNs = fast;
        }
    }
    return bad;
#else
    (void)cases;
    return 0;
#endif
}

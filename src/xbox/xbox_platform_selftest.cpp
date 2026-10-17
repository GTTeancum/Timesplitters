// Platform boot self-tests and the [TS:plat] status line (src/xbox/
// PUSH-BC-PLAN.md section 5.3, B-PLATFORM). Called once from
// xboxInstallBackend (xbox_perf.cpp), before the game runs.
//
// make TS_PLATFORM_SELFTEST=1 (src/xbox/mk/b_platform.mk; 0 by default):
//   libc    memcpy / memmove / memset / memcmp (xbox_string.cpp, every size
//           class and alignment) against byte loops, random sizes 0..4200
//   locks   two threads x 200k std::mutex (SRW, TS_UP_LOCKS) increments,
//           an exact count; recursive_mutex nesting; condition-variable
//           ping-pong (1000 round trips)
//   timers  the EE timers' divl forms against the 64-bit operators (100k)
//   chrono  steady_clock's multiplier against the division form (20k)
// writing
//   [TS:plat] selftest libc=<bad> locks=<bad> timers=<bad> chrono=<bad> ms=<time>
// with every count 0 expected. The [TS:plat] status line (TS_PERF) carries
// the platform switches' counters:
//   gsforeign  TS_LOCK_CHECK: GS state-lock calls from another thread than
//              the previous one (start-up makes one or two; must not move
//              during a match)
//   iop        TS_IOP_IDLE: device batches / answered by the idle fast path /
//              checked in full / misses (TS_IOP_IDLE_CHECK; must stay 0)
//   cue        TS_TIMER_CUE_CHECK: EE-timer CUE mask differences (must stay 0)
#include "xbox_platform.h"
#include "xbox_perf.h"

#include "ps2x/iop_idle_stats.h"
#include "runtime/ps2_host_lock.h"
#include "runtime/ps2_platform_selftest.h"

#include <condition_variable>
#include <cstring>
#include <mutex>
#include <thread>

#include <windows.h>

#ifndef TS_PLATFORM_SELFTEST
#define TS_PLATFORM_SELFTEST 0
#endif

uint32_t xboxChronoSelfTest(uint32_t cases); // xbox_chrono.cpp

// The self-test's results for a debugger (gdb on xemu reads them from
// main.map's ?g_platformSelfTest@@): ran (1), libc, locks, timers, chrono,
// milliseconds. The log line may have scrolled out of the rings by then.
uint32_t g_platformSelfTest[6] = {};

namespace
{
#if TS_PLATFORM_SELFTEST
    struct Rng
    {
        uint32_t x = 0x12345678u;
        uint32_t next()
        {
            x ^= x << 13;
            x ^= x >> 17;
            x ^= x << 5;
            return x;
        }
    };

    // Kept out of line and opaque, so the compiler cannot fold the libc
    // calls under test into its own inline expansions.
    __attribute__((noinline)) void *callMemcpy(void *d, const void *s, size_t n) { return std::memcpy(d, s, n); }
    __attribute__((noinline)) void *callMemmove(void *d, const void *s, size_t n) { return std::memmove(d, s, n); }
    __attribute__((noinline)) void *callMemset(void *d, int v, size_t n) { return std::memset(d, v, n); }
    __attribute__((noinline)) int callMemcmp(const void *a, const void *b, size_t n) { return std::memcmp(a, b, n); }

    // Static buffers: no allocation (the self-test runs before the match,
    // but it keeps to the rule anyway).
    constexpr size_t kBuf = 4608u;
    alignas(16) uint8_t g_a[kBuf], g_b[kBuf], g_ref[kBuf];

    void fill(uint8_t *p, size_t n, Rng &rng)
    {
        for (size_t i = 0; i < n; ++i)
            p[i] = static_cast<uint8_t>(rng.next());
    }

    uint32_t libcTest()
    {
        Rng rng;
        uint32_t bad = 0u;
        for (uint32_t round = 0; round < 6000u; ++round)
        {
            const uint32_t pick = rng.next();
            const size_t n = (pick & 3u) == 0u ? rng.next() % 4200u : rng.next() % 140u;
            const size_t da = rng.next() & 15u, sa = rng.next() & 15u;
            fill(g_a, kBuf, rng);
            fill(g_b, kBuf, rng);
            switch (round % 4u)
            {
            case 0: // memcpy (disjoint)
            {
                std::memcpy(g_ref, g_a, kBuf);
                for (size_t i = 0; i < n; ++i)
                    g_ref[da + i] = g_b[sa + i];
                if (callMemcpy(g_a + da, g_b + sa, n) != g_a + da || std::memcmp(g_a, g_ref, kBuf) != 0)
                    ++bad;
                break;
            }
            case 1: // memmove inside one buffer, either direction
            {
                const size_t from = rng.next() % 300u, to = rng.next() % 300u;
                std::memcpy(g_ref, g_a, kBuf);
                uint8_t *tmp = g_b; // a copy of the source first: the reference
                for (size_t i = 0; i < n; ++i)
                    tmp[i] = g_ref[from + i];
                for (size_t i = 0; i < n; ++i)
                    g_ref[to + i] = tmp[i];
                if (callMemmove(g_a + to, g_a + from, n) != g_a + to || std::memcmp(g_a, g_ref, kBuf) != 0)
                    ++bad;
                break;
            }
            case 2: // memset
            {
                const int value = static_cast<int>(rng.next());
                std::memcpy(g_ref, g_a, kBuf);
                for (size_t i = 0; i < n; ++i)
                    g_ref[da + i] = static_cast<uint8_t>(value);
                if (callMemset(g_a + da, value, n) != g_a + da || std::memcmp(g_a, g_ref, kBuf) != 0)
                    ++bad;
                break;
            }
            default: // memcmp: equal, then one byte changed
            {
                std::memcpy(g_b + sa, g_a + da, n);
                if (callMemcmp(g_a + da, g_b + sa, n) != 0)
                    ++bad;
                if (n != 0u)
                {
                    const size_t at = rng.next() % n;
                    const uint8_t was = g_b[sa + at];
                    g_b[sa + at] = static_cast<uint8_t>(was + 1u + rng.next() % 255u);
                    const int expect = g_a[da + at] < g_b[sa + at] ? -1 : 1;
                    const int got = callMemcmp(g_a + da, g_b + sa, n);
                    if ((got < 0 ? -1 : got > 0 ? 1 : 0) != expect)
                        ++bad;
                }
                break;
            }
            }
        }
        return bad;
    }

    uint32_t lockTest()
    {
        uint32_t bad = 0u;
        // Two threads x 200k increments under std::mutex: an exact count.
        {
            std::mutex m;
            uint32_t counter = 0u;
            auto work = [&]() {
                for (uint32_t i = 0; i < 200000u; ++i)
                {
                    std::lock_guard lock(m);
                    ++counter;
                }
            };
            std::thread other(work);
            work();
            other.join();
            if (counter != 400000u)
                ++bad;
        }
        // recursive_mutex nesting.
        {
            std::recursive_mutex m;
            uint32_t depth = 0u;
            for (uint32_t i = 0; i < 16u; ++i)
            {
                m.lock();
                ++depth;
            }
            if (!m.try_lock())
                ++bad;
            else
                m.unlock();
            for (; depth != 0u; --depth)
                m.unlock();
            std::thread probe([&]() {
                if (!m.try_lock())
                    ++bad;
                else
                    m.unlock();
            });
            probe.join();
        }
        // Condition-variable ping-pong.
        {
            std::mutex m;
            std::condition_variable cv;
            uint32_t turn = 0u;
            constexpr uint32_t kTrips = 1000u;
            std::thread other([&]() {
                for (uint32_t i = 0; i < kTrips; ++i)
                {
                    std::unique_lock lock(m);
                    cv.wait(lock, [&] { return (turn & 1u) == 1u; });
                    ++turn;
                    cv.notify_all();
                }
            });
            for (uint32_t i = 0; i < kTrips; ++i)
            {
                std::unique_lock lock(m);
                ++turn;
                cv.notify_all();
                cv.wait(lock, [&] { return (turn & 1u) == 0u; });
            }
            other.join();
            if (turn != 2u * kTrips)
                ++bad;
        }
        return bad;
    }
#endif

#if TS_PERF
    void platformLine(XboxReportLine &line)
    {
        const ps2x::iop::IopIdleStats &iop = ps2x::iop::g_iopIdleStats;
        line.add(" gsforeign=%u locks=%u iop=%u/%u/%u/%u cue=%u", ps2x::g_hostLockStats.switches,
                 ps2x::g_hostLockStats.locks, iop.batches, iop.skipped, iop.checked, iop.miss, g_ps2xEeTimerCueMiss);
    }
#endif
}

void xboxPlatformStart()
{
#if TS_PERF
    xboxRegisterReportLine("[TS:plat]", &platformLine);
#endif
#if TS_PLATFORM_SELFTEST
    const DWORD start = GetTickCount();
    const uint32_t libc = libcTest();
    const uint32_t locks = lockTest();
    const uint32_t timers = ps2xEeTimerSelfTest(100000u);
    const uint32_t chrono = xboxChronoSelfTest(20000u);
    g_platformSelfTest[0] = 1u;
    g_platformSelfTest[1] = libc;
    g_platformSelfTest[2] = locks;
    g_platformSelfTest[3] = timers;
    g_platformSelfTest[4] = chrono;
    g_platformSelfTest[5] = unsigned(GetTickCount() - start);
    XboxReportLine line("[TS:plat] selftest");
    line.add(" libc=%u locks=%u timers=%u chrono=%u ms=%u", libc, locks, timers, chrono,
             unsigned(GetTickCount() - start));
    line.write();
#endif
}

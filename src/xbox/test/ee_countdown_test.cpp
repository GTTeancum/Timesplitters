// Host test of the EE checkpoint countdown (src/xbox/PUSH-BC-PLAN.md M3.1,
// B-SCHED; ps2_runtime.h EeCheckpointClock with PS2X_EE_COUNTDOWN=1).
// `make host-tests` (src/xbox/test/host_tests.mk; listed by
// src/xbox/mk/b_sched.mk) builds it with the host clang and runs it.
//
// The countdown is checked against the 64-bit clock it replaces, the way the
// scheduler drives it: random charges on the fast path; at every slow
// checkpoint the true clock must equal the 64-bit sum, the fast path must
// have gone slow exactly when the old one would have (or earlier, only when
// the room was clamped to 2^31-1), then a new bound and a reload. Also:
// charges in small steps (accountCycles' pattern), the pending flag set by
// the executor (budget zeroed) and by another thread (flag only, seen at the
// next bound), and more than 2^31 cycles charged under a lifted bound
// (EeClockFreeze's UINT64_MAX).
#define PS2X_EE_COUNTDOWN 1
#include "ps2_runtime.h"

#include <cstdio>
#include <cstdlib>
#include <random>

int32_t g_ps2xEeBudget = 0;

namespace
{
    int failures = 0;

    void expect(bool ok, const char *what, uint64_t a, uint64_t b)
    {
        if (!ok && failures++ < 20)
            std::printf("FAIL %s: %llu vs %llu\n", what, (unsigned long long)a, (unsigned long long)b);
    }

    struct Clock : EeCheckpointClock
    {
    };

    // The old fast path's answer for the same state.
    bool oldFast(uint64_t cycle, uint64_t fastUntil, bool pending) { return cycle < fastUntil && !pending; }

    void randomCharges(uint32_t seed, uint32_t maxStep, uint64_t maxRoom, uint32_t rounds)
    {
        std::mt19937 rng(seed);
        Clock clock;
        uint64_t ref = 0;
        clock.m_fastUntil = 1000;
        clock.reloadBudget();
        uint32_t slow = 0, early = 0;
        for (uint32_t r = 0; r < rounds; ++r)
        {
            const uint32_t n = 1u + rng() % maxStep;
            ref += n;
            const bool fast = clock.chargeCyclesFast(n);
            const bool oldAnswer = oldFast(ref, clock.m_fastUntil, clock.m_checkpointPending.load());
            if (fast)
            {
                expect(oldAnswer, "fast path said not due where the old one went slow", ref, clock.m_fastUntil);
                continue;
            }
            ++slow;
            // The slow checkpoint: the true clock first.
            clock.syncCycle();
            expect(clock.m_eeCycle == ref, "clock after sync", clock.m_eeCycle, ref);
            if (oldAnswer)
            {
                // Early only when the room had been clamped.
                ++early;
                expect(clock.m_fastUntil - (clock.m_eeCycle - 0) > 0, "early slow path", ref, clock.m_fastUntil);
            }
            // A new bound, now and then a pending flag (executor or remote).
            clock.m_checkpointPending.store(false);
            const uint32_t pick = rng() % 16u;
            clock.m_fastUntil = ref + 1u + (rng() % (maxRoom ? maxRoom : 1u));
            clock.reloadBudget();
            if (pick == 0u)
            {
                clock.setPendingLocal(); // the next charge goes slow
                ref += 1u;
                const bool f = clock.chargeCyclesFast(1u);
                expect(!f, "executor pending not seen at once", ref, 0);
                clock.syncCycle();
                expect(clock.m_eeCycle == ref, "clock after local pending", clock.m_eeCycle, ref);
                clock.m_checkpointPending.store(false);
                clock.reloadBudget();
            }
            else if (pick == 1u)
            {
                clock.setPendingRemote(); // seen at the bound at the latest
                uint64_t guard = 0;
                for (;;)
                {
                    ref += 1u;
                    if (!clock.chargeCyclesFast(1u))
                        break;
                    if (++guard > maxRoom + 2u)
                    {
                        expect(false, "remote pending never seen", guard, maxRoom);
                        break;
                    }
                }
                clock.syncCycle();
                expect(clock.m_eeCycle == ref, "clock after remote pending", clock.m_eeCycle, ref);
                expect(clock.m_eeCycle >= clock.m_fastUntil || guard == 0u, "remote seen before the bound", clock.m_eeCycle,
                       clock.m_fastUntil);
                clock.m_checkpointPending.store(false);
                clock.reloadBudget();
            }
        }
        clock.syncCycle();
        expect(clock.m_eeCycle == ref, "clock at the end", clock.m_eeCycle, ref);
        std::printf("ee_countdown_test: seed %u: %u rounds, %u slow checkpoints (%u early), %llu cycles\n", seed, rounds,
                    slow, early, (unsigned long long)ref);
    }

    // accountCycles' pattern: sync, add to m_eeCycle directly, reload.
    void directCharges()
    {
        Clock clock;
        uint64_t ref = 0;
        clock.m_fastUntil = 5000;
        clock.reloadBudget();
        for (uint32_t i = 0; i < 100000; ++i)
        {
            if (i % 3u == 0u)
            {
                ref += 7u;
                if (!clock.chargeCyclesFast(7u))
                {
                    clock.syncCycle();
                    clock.m_fastUntil = clock.m_eeCycle + 5000u;
                    clock.reloadBudget();
                }
            }
            else
            {
                clock.syncCycle();
                clock.m_eeCycle += 3u; // accountCycles
                ref += 3u;
                clock.reloadBudget();
            }
            expect(clock.cycleNow() == ref, "accountCycles interleave", clock.cycleNow(), ref);
        }
    }

    // More than 2^31 cycles under a lifted bound (EeClockFreeze).
    void frozenLongRun()
    {
        Clock clock;
        clock.setCycle(123456789u);
        clock.m_fastUntil = UINT64_MAX;
        clock.reloadBudget();
        expect(g_ps2xEeBudget == INT32_MAX, "lifted bound clamps the budget", uint64_t(g_ps2xEeBudget), INT32_MAX);
        uint64_t ref = 123456789u, slow = 0;
        const uint64_t total = 5ull << 31; // ten times past 2^31
        for (uint64_t charged = 0; charged < total; charged += 1000003u)
        {
            ref += 1000003u;
            if (!clock.chargeCyclesFast(1000003u))
            {
                ++slow; // the frozen slow path: re-arm only
                clock.syncCycle();
                clock.reloadBudget();
            }
        }
        expect(clock.cycleNow() == ref, "clock after 2^31+ frozen cycles", clock.cycleNow(), ref);
        expect(slow >= 4u, "the clamped budget ran out and re-armed", slow, 4u);
        std::printf("ee_countdown_test: frozen run: %llu cycles, %llu re-arms\n", (unsigned long long)ref,
                    (unsigned long long)slow);
    }
}

int main()
{
    randomCharges(1u, 64u, 4096u, 2000000u);
    randomCharges(2u, 2048u, 1u << 20, 2000000u);
    randomCharges(3u, 8u, 8u, 500000u);
    directCharges();
    frozenLongRun();
    if (failures)
    {
        std::printf("ee_countdown_test: %d failures\n", failures);
        return 1;
    }
    std::printf("ee_countdown_test: ok\n");
    return 0;
}

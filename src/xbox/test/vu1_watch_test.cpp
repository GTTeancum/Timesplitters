// Host test of the watched VU1 rows' dirty bits (source/PS2Recomp/
// ps2xRuntime/include/runtime/ps2_vu1_watch.h), which the native pipeline's
// transform constants copy only the written rows by (TS_XF_DIRTY_ROWS,
// project/game/vu1_native_ts.cpp). After any mix of writes - quadword runs
// (UNPACK, the constant entries) that may wrap at the end of VU1 memory,
// byte stores (EE), whole-memory writes (a microprogram) - takeDirty must
// report every watched row written, and nothing else except after a
// whole-memory write; `writes` counts the writes that touched a watched row.
// Also with more watched rows than dirty bits (those rows: every bit).
//
//   clang++ -std=c++20 -O2 -I source/PS2Recomp/ps2xRuntime/include \
//       src/xbox/test/vu1_watch_test.cpp -o vu1_watch_test && ./vu1_watch_test
#include "runtime/ps2_vu1_watch.h"

#include <algorithm>
#include <cstdio>
#include <random>

Vu1WatchedRows g_vu1WatchedRows; // (the runtime's is in ps2_memory.cpp)

namespace
{
    int failures = 0;
    void fail(const char *what, uint32_t step, uint64_t got, uint64_t want)
    {
        if (++failures <= 20)
            std::printf("FAIL %s at step %u: dirty %016llx, want %016llx\n", what, step, (unsigned long long)got,
                        (unsigned long long)want);
    }

    // One watcher against a plain row-by-row model.
    void run(const uint32_t (*ranges)[2], uint32_t count, uint32_t seed)
    {
        Vu1WatchedRows w;
        for (uint32_t i = 0; i < count; ++i)
            w.watch(ranges[i][0], ranges[i][1]);
        // The bit a watched row is reported by (64: every bit).
        uint32_t bitOf[1024];
        for (uint32_t &b : bitOf)
            b = UINT32_MAX;
        for (uint32_t i = 0, bit = 0; i < count; ++i)
            for (uint32_t q = ranges[i][0]; q < ranges[i][1]; ++q, ++bit)
                bitOf[q] = bit < 64u ? bit : 64u;
        for (uint32_t q = 0; q < 1024u; ++q)
            if (w.rowBit(q) != (bitOf[q] == UINT32_MAX ? 0u : bitOf[q] == 64u ? w.allRows() : 1ull << bitOf[q]))
                fail("rowBit", q, w.rowBit(q), 0);

        std::mt19937 random(seed);
        uint64_t want = 0;
        bool all = false;
        uint32_t writes = 0;
        for (uint32_t step = 0; step < 200000u; ++step)
        {
            const uint32_t kind = random() % 16u;
            bool touched = false;
            auto mark = [&](uint32_t q) {
                q &= 1023u;
                if (bitOf[q] == UINT32_MAX)
                    return;
                touched = true;
                if (bitOf[q] == 64u)
                    all = true;
                else
                    want |= 1ull << bitOf[q];
            };
            if (kind == 0u)
            {
                w.noteAll();
                all = true;
                touched = true;
            }
            else if (kind < 5u)
            {
                const uint32_t offset = random() % 16384u, bytes = 1u << (random() % 5u); // 1-16 bytes
                const uint32_t o = std::min(offset, 16384u - bytes);
                w.noteBytes(o, bytes);
                for (uint32_t q = o / 16u; q <= (o + bytes - 1u) / 16u; ++q)
                    mark(q);
            }
            else
            {
                // Runs near the watched rows and the end of memory, some long.
                const uint32_t q = kind < 8u ? 1000u + random() % 24u : random() % 1024u;
                const uint32_t n = kind == 15u ? 1000u + random() % 60u : 1u + random() % 40u;
                w.note(q, n);
                if (n >= 1024u)
                {
                    all = true;
                    touched = true;
                }
                else
                    for (uint32_t k = 0; k < n; ++k)
                        mark(q + k);
            }
            if (touched)
                ++writes;
            if (w.writes != writes)
            {
                fail("writes", step, w.writes, writes);
                writes = w.writes;
            }
            if (random() % 8u == 0u)
            {
                const uint64_t got = w.takeDirty();
                if (all ? got != w.allRows() : got != want)
                    fail("takeDirty", step, got, all ? w.allRows() : want);
                if (w.takeDirty() != 0u)
                    fail("takeDirty twice", step, 1, 0);
                want = 0;
                all = false;
            }
        }
    }
}

int main()
{
    // The native pipeline's: rows 4-21 and 106-121 (34 bits).
    const uint32_t game[2][2] = {{4u, 22u}, {106u, 122u}};
    run(game, 2u, 1u);
    // Watched rows at both ends of memory, and more than 64 in all.
    const uint32_t ends[3][2] = {{0u, 10u}, {1000u, 1024u}, {500u, 540u}};
    run(ends, 3u, 2u);
    const uint32_t many[4][2] = {{0u, 30u}, {100u, 130u}, {200u, 230u}, {1010u, 1024u}};
    run(many, 4u, 3u);
    std::printf("watched rows: %s (%d failures)\n", failures ? "FAILED" : "ok", failures);
    return failures ? 1 : 0;
}

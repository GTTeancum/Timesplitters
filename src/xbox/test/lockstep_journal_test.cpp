// Host test of the lockstep's write journal (project/game/native/ts_journal.h;
// B-LOGIC, src/xbox/PUSH-BC-PLAN.md section 3.6 item 1). `make host-tests`
// (src/xbox/test/host_tests.mk, listed by src/xbox/mk/b_logic.mk) builds it
// with -I project/game/native and runs it.
//
// On a stand-in for guest memory: a run's stores are recorded and undone
// exactly (overlapping stores included); two identical runs compare equal;
// a byte one run stores differently, or a byte only one run stores with a
// new value, is a difference, while a byte only one run stores with the
// value it already had is not; two different NaNs in an aligned word are a
// NaN-only difference; the dead-stack filter hides what it should; a run
// beyond the journal's capacity reports an overflow. Exit status 1 on any
// failure.
#include "ts_journal.h"

#include <cstdio>
#include <cstring>

namespace
{
    constexpr uint32_t kRecords = 64u;
    using Journal = ts_journal::Journal<kRecords>;

    uint8_t g_memory[1024];
    uint8_t g_original[1024];
    Journal g_a, g_b;
    uint8_t g_postA[kRecords][16];
    uint32_t g_scratch[2u * kRecords];
    uint32_t g_failures = 0;

    void expect(bool ok, const char *what)
    {
        if (!ok && g_failures++ < 20u)
            std::printf("FAIL %s\n", what);
    }

    // A store of size bytes of value v (repeated) at offset, journaled.
    void store(Journal &j, uint32_t offset, uint32_t size, uint8_t v)
    {
        j.touch(g_memory + offset, 0x1000u + offset, size);
        std::memset(g_memory + offset, v, size);
    }

    void storeWord(Journal &j, uint32_t offset, uint32_t word)
    {
        j.touch(g_memory + offset, 0x1000u + offset, 4u);
        std::memcpy(g_memory + offset, &word, 4);
    }

    // Runs A (then undoes it), resets memory checks, runs B; returns the outcome.
    template <class RunA, class RunB, class Skip>
    ts_journal::Outcome lockstep(RunA runA, RunB runB, Skip skip)
    {
        std::memcpy(g_memory, g_original, sizeof(g_memory));
        g_a.start();
        runA(g_a);
        g_a.stop();
        g_a.capture(g_postA);
        g_a.undo();
        expect(std::memcmp(g_memory, g_original, sizeof(g_memory)) == 0, "undo restores memory");
        g_b.start();
        runB(g_b);
        g_b.stop();
        return ts_journal::compare(g_a, g_postA, g_b, g_scratch, skip);
    }

    bool noSkip(uint32_t) { return false; }
}

int main()
{
    for (uint32_t i = 0; i < sizeof(g_original); ++i)
        g_original[i] = static_cast<uint8_t>(i * 37u + 11u);

    auto same = [](Journal &j) {
        store(j, 16, 8, 0xAA);
        store(j, 20, 16, 0xBB); // overlaps the first
        store(j, 100, 1, 0xCC);
    };
    {
        const ts_journal::Outcome o = lockstep(same, same, noSkip);
        expect(o.bytes == 0u && o.nanOnly == 0u, "identical runs compare equal");
    }
    {
        auto other = [](Journal &j) {
            store(j, 16, 8, 0xAA);
            store(j, 20, 16, 0xBB);
            store(j, 100, 1, 0xCD); // one byte differs
        };
        const ts_journal::Outcome o = lockstep(same, other, noSkip);
        expect(o.bytes == 1u && o.firstGuest == 0x1000u + 100u && o.want == 0xCC && o.got == 0xCD,
               "a byte stored differently is one difference");
    }
    {
        auto extraNew = [](Journal &j) {
            store(j, 16, 8, 0xAA);
            store(j, 20, 16, 0xBB);
            store(j, 100, 1, 0xCC);
            store(j, 200, 1, static_cast<uint8_t>(g_original[200] ^ 0xFFu)); // only B, new value
        };
        const ts_journal::Outcome o = lockstep(same, extraNew, noSkip);
        expect(o.bytes == 1u && o.firstGuest == 0x1000u + 200u, "a byte only B stores with a new value differs");
    }
    {
        auto extraSame = [](Journal &j) {
            store(j, 16, 8, 0xAA);
            store(j, 20, 16, 0xBB);
            store(j, 100, 1, 0xCC);
            store(j, 300, 1, g_original[300]); // only B, the value it had
        };
        const ts_journal::Outcome o = lockstep(same, extraSame, noSkip);
        expect(o.bytes == 0u, "a byte only B stores with its old value does not differ");
    }
    {
        auto missing = [](Journal &j) {
            store(j, 16, 8, 0xAA);
            store(j, 20, 16, 0xBB); // no store at 100
        };
        const ts_journal::Outcome o = lockstep(same, missing, noSkip);
        expect(o.bytes == 1u && o.firstGuest == 0x1000u + 100u, "a byte only A stores is a difference");
    }
    {
        auto nanA = [](Journal &j) { storeWord(j, 400, 0x7FC00001u); };
        auto nanB = [](Journal &j) { storeWord(j, 400, 0xFFC12345u); };
        const ts_journal::Outcome o = lockstep(nanA, nanB, noSkip);
        expect(o.bytes == 0u && o.nanOnly == 1u, "two NaNs in one word are a NaN-only difference");
    }
    {
        auto deadA = [](Journal &j) { store(j, 500, 16, 0x11); };
        auto deadB = [](Journal &j) { store(j, 500, 16, 0x22); };
        auto dead = [](uint32_t guest) { return guest >= 0x1000u + 500u && guest < 0x1000u + 516u; };
        const ts_journal::Outcome o = lockstep(deadA, deadB, dead);
        expect(o.bytes == 0u, "the dead-stack filter hides its bytes");
    }
    {
        g_a.start();
        for (uint32_t i = 0; i < kRecords + 1u; ++i)
            store(g_a, i % 512u, 1, 0x55);
        g_a.stop();
        expect(g_a.overflow(), "a run beyond the capacity overflows");
        g_a.undo();
        g_b.start();
        g_b.touch(nullptr, 0x10000000u, 4u);
        g_b.stop();
        expect(g_b.overflow(), "an address the journal cannot undo overflows");
    }
    std::printf("lockstep_journal_test: %u failure(s)\n", g_failures);
    return g_failures == 0u ? 0 : 1;
}

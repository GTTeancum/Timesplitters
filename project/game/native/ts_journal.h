// The write journal of the game-logic lockstep (src/xbox/PUSH-BC-PLAN.md
// section 3.6 item 1; owned by B-LOGIC, sub-owner L0): every guest store of
// a run is recorded with the bytes it overwrote, so the run can be undone
// and two runs of one call compared byte for byte.
//
// Header-only and free of the runtime (src/xbox/test/lockstep_journal_test.cpp
// runs it on the host). Fixed storage: Records records of at most 16 bytes;
// a run that writes more overflows and is not compared.
#pragma once
#include <algorithm>
#include <cstdint>
#include <cstring>

namespace ts_journal
{
    struct Record
    {
        uint8_t *host;   // where the bytes live (RDRAM or the scratchpad)
        uint32_t guest;  // the guest address, for the dead-stack test and the log
        uint32_t size;   // 1..16
        uint8_t pre[16]; // the bytes before the store
    };

    template <uint32_t Records>
    class Journal
    {
    public:
        void start()
        {
            m_count = 0;
            m_overflow = false;
            m_on = true;
        }
        void stop() { m_on = false; }
        bool on() const { return m_on; }
        bool overflow() const { return m_overflow; }
        uint32_t count() const { return m_count; }
        const Record &at(uint32_t i) const { return m_records[i]; }

        // A store of size bytes at host (guest address guest) is about to
        // happen. host null: an address the journal cannot undo (the run is
        // then not compared).
        void touch(uint8_t *host, uint32_t guest, uint32_t size)
        {
            if (!m_on)
                return;
            if (host == nullptr || size == 0u || size > 16u || m_count >= Records)
            {
                m_overflow = true;
                return;
            }
            Record &r = m_records[m_count++];
            r.host = host;
            r.guest = guest;
            r.size = size;
            std::memcpy(r.pre, host, size);
        }

        // Puts every recorded byte back, last store first.
        void undo() const
        {
            for (uint32_t i = m_count; i-- > 0u;)
                std::memcpy(m_records[i].host, m_records[i].pre, m_records[i].size);
        }

        // The current bytes of every record (a run's final values).
        void capture(uint8_t (*post)[16]) const
        {
            for (uint32_t i = 0; i < m_count; ++i)
                std::memcpy(post[i], m_records[i].host, m_records[i].size);
        }

        // Copies the records from another journal (stopped).
        void copyFrom(const Journal &other)
        {
            m_count = other.m_count;
            m_overflow = other.m_overflow;
            m_on = false;
            std::memcpy(m_records, other.m_records, sizeof(Record) * m_count);
        }

    private:
        Record m_records[Records];
        uint32_t m_count = 0;
        bool m_overflow = false;
        bool m_on = false;
    };

    // What one comparison found.
    struct Outcome
    {
        uint32_t bytes = 0;   // bytes that differ (NaN payloads aside)
        uint32_t nanOnly = 0; // aligned words where both runs hold different NaNs
        uint32_t firstGuest = 0;
        uint8_t want = 0, got = 0;
    };

    inline bool isNanWord(uint32_t w) { return (w & 0x7FFFFFFFu) > 0x7F800000u; }

    // Records sorted by host address, and the lookup of the records that
    // cover one byte (a record starts at most 15 bytes before it).
    template <uint32_t Records>
    struct SortedIndex
    {
        const Journal<Records> *j = nullptr;
        uint32_t *order = nullptr;

        void build(const Journal<Records> &journal, uint32_t *scratch)
        {
            j = &journal;
            order = scratch;
            for (uint32_t i = 0; i < journal.count(); ++i)
                order[i] = i;
            std::sort(order, order + journal.count(), [&](uint32_t x, uint32_t y) {
                return journal.at(x).host != journal.at(y).host ? journal.at(x).host < journal.at(y).host : x < y;
            });
        }

        // The first (earliest) record covering host, or -1.
        int32_t earliest(const uint8_t *host) const
        {
            uint32_t lo = 0, hi = j->count();
            while (lo < hi)
            {
                const uint32_t mid = (lo + hi) / 2u;
                if (j->at(order[mid]).host + 16 <= host)
                    lo = mid + 1u;
                else
                    hi = mid;
            }
            int32_t best = -1;
            for (uint32_t k = lo; k < j->count() && j->at(order[k]).host <= host; ++k)
            {
                const Record &r = j->at(order[k]);
                if (host < r.host + r.size && (best < 0 || order[k] < static_cast<uint32_t>(best)))
                    best = static_cast<int32_t>(order[k]);
            }
            return best;
        }
    };

    // Compares run A (the reference: recorded in a, its stores' final bytes
    // in aPost, captured right after it ran, then undone) with run B
    // (recorded in b, its results in memory now). For every byte either
    // run stored, A's final value (aPost where A stored it, else the value
    // before both runs: B's earliest pre-image) is compared with memory.
    // A difference inside an aligned word that holds a NaN on both sides
    // counts once in nanOnly instead. skip(guest) true: a byte nobody may
    // read (dead stack). scratch: 2 x Records entries.
    template <uint32_t Records, class Skip>
    Outcome compare(const Journal<Records> &a, const uint8_t (*aPost)[16], const Journal<Records> &b, uint32_t *scratch,
                    Skip skip)
    {
        Outcome out;
        SortedIndex<Records> ia, ib;
        ia.build(a, scratch);
        ib.build(b, scratch + Records);
        auto want = [&](const uint8_t *host) -> uint8_t {
            const int32_t ra = ia.earliest(host);
            if (ra >= 0)
                return aPost[ra][host - a.at(static_cast<uint32_t>(ra)).host];
            const int32_t rb = ib.earliest(host);
            if (rb >= 0)
                return b.at(static_cast<uint32_t>(rb)).pre[host - b.at(static_cast<uint32_t>(rb)).host];
            return *host;
        };
        uintptr_t lastNanWord = 0;
        auto check = [&](const uint8_t *host, uint32_t guest) {
            if (skip(guest))
                return;
            const uint8_t w = want(host), g = *host;
            if (w == g)
                return;
            const uint8_t *base = reinterpret_cast<const uint8_t *>(reinterpret_cast<uintptr_t>(host) & ~uintptr_t(3));
            uint32_t ww = 0, gw = 0;
            for (uint32_t k = 0; k < 4u; ++k)
            {
                ww |= static_cast<uint32_t>(want(base + k)) << (8u * k);
                gw |= static_cast<uint32_t>(base[k]) << (8u * k);
            }
            if (isNanWord(ww) && isNanWord(gw))
            {
                if (reinterpret_cast<uintptr_t>(base) != lastNanWord)
                    ++out.nanOnly;
                lastNanWord = reinterpret_cast<uintptr_t>(base);
                return;
            }
            if (out.bytes++ == 0u)
            {
                out.firstGuest = guest;
                out.want = w;
                out.got = g;
            }
        };
        for (uint32_t i = 0; i < a.count(); ++i)
        {
            const Record &r = a.at(i);
            for (uint32_t k = 0; k < r.size; ++k)
                check(r.host + k, r.guest + k);
        }
        for (uint32_t i = 0; i < b.count(); ++i)
        {
            const Record &r = b.at(i);
            for (uint32_t k = 0; k < r.size; ++k)
                if (ia.earliest(r.host + k) < 0) // (bytes A stored were checked above)
                    check(r.host + k, r.guest + k);
        }
        return out;
    }
}

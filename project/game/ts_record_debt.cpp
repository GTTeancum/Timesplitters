// The VU1 debt map: see ts_record_debt.h.
#include "ts_record_debt.h"

#include <cstring>

// vu1_native_ts.cpp (vu1_native_draw.h): the rows a program entry reads.
void vu1NativeReadWindow(uint32_t pc, uint32_t top, uint32_t *first, uint32_t *count);

TsDebtStats g_tsDebtStats;

namespace
{
    constexpr uint32_t kRows = 1024u, kRowMask = kRows - 1u, kLog = 1024u;

    // The map (22.5 KB): made when an engine attaches (start-up, with R2 or
    // M8 switched on), so a build without them carries none of it.
    struct DebtMap
    {
        uint32_t owed[kRows];       // per row: the log entry it owes + 1 (0: none)
        uint32_t bits[kRows / 32u]; // per row: owed
        TsDebtWrite log[kLog];
        uint16_t refs[kLog]; // rows owing each entry
        uint32_t head = 0;
    };
    DebtMap *s_map = nullptr;
    PS2Memory *s_memory = nullptr;
    void *s_owner = nullptr;
    TsDebtSettleFn s_settle = nullptr;

    // (Rows are owed only once the map exists: owedNow != 0 implies s_map.)
    inline bool isOwed(uint32_t r) { return ((s_map->bits[r >> 5] >> (r & 31u)) & 1u) != 0u; }
    inline void markOwed(uint32_t r, uint32_t entry)
    {
        s_map->owed[r] = entry + 1u;
        s_map->bits[r >> 5] |= 1u << (r & 31u);
        ++s_map->refs[entry];
        ++g_tsDebtStats.owedNow;
    }
    inline void clearRow(uint32_t r)
    {
        --s_map->refs[s_map->owed[r] - 1u];
        s_map->owed[r] = 0u;
        s_map->bits[r >> 5] &= ~(1u << (r & 31u));
        --g_tsDebtStats.owedNow;
    }

    // Rows [row, row + count) (count <= 1024, wrapping): each run of rows
    // owing one entry settled with one settler call.
    void settleRange(uint32_t row, uint32_t count, TsDebtReason why)
    {
        if (g_tsDebtStats.owedNow == 0u)
            return;
        count = count > kRows ? kRows : count;
        for (uint32_t i = 0; i < count;)
        {
            const uint32_t r = (row + i) & kRowMask;
            if ((r & 31u) == 0u && s_map->bits[r >> 5] == 0u && count - i >= 32u)
            {
                i += 32u; // a word of rows owing nothing
                continue;
            }
            if (!isOwed(r))
            {
                ++i;
                continue;
            }
            const uint32_t entry = s_map->owed[r] - 1u;
            uint32_t n = 1u;
            while (i + n < count)
            {
                const uint32_t next = (row + i + n) & kRowMask;
                if (!isOwed(next) || s_map->owed[next] - 1u != entry)
                    break;
                ++n;
            }
            for (uint32_t k = 0; k < n; ++k)
                clearRow((r + k) & kRowMask);
            if (s_settle && s_memory)
                s_settle(s_owner, *s_memory, s_map->log[entry], r, n);
            ++g_tsDebtStats.settles;
            g_tsDebtStats.settled[uint32_t(why)] += n;
            i += n;
        }
    }
}

void tsDebtAttach(PS2Memory *memory)
{
    s_memory = memory;
    if (!s_map)
        s_map = new DebtMap{};
}

void tsDebtSetSettler(void *owner, TsDebtSettleFn fn)
{
    s_owner = owner;
    s_settle = fn;
}

bool tsDebtNote(const TsDebtWrite &write, bool fullLanes)
{
    if (!s_settle || !s_memory || !s_map || write.count == 0u)
        return false;
    // The log entry: one still owed by rows is settled first.
    const uint32_t entry = s_map->head;
    if (s_map->refs[entry] != 0u)
        for (uint32_t r = 0; r < kRows && s_map->refs[entry] != 0u; ++r)
            if (s_map->owed[r] == entry + 1u)
                settleRange(r, 1u, TsDebtReason::Reused);
    s_map->log[entry] = write;
    s_map->head = (s_map->head + 1u) % kLog;
    const uint32_t count = write.count > kRows ? kRows : write.count;
    for (uint32_t i = 0; i < count; ++i)
    {
        const uint32_t r = (write.row + i) & kRowMask;
        if (isOwed(r))
        {
            if (fullLanes)
            {
                clearRow(r); // replaced whole: the older write is never needed
                ++g_tsDebtStats.cleared;
            }
            else
                settleRange(r, 1u, TsDebtReason::PartialWrite); // its lanes under this write's
        }
        markOwed(r, entry);
    }
    g_tsDebtStats.noted += count;
    return true;
}

void tsDebtSettle(uint32_t row, uint32_t count, TsDebtReason reason) { settleRange(row, count, reason); }

void tsDebtSettleAll(TsDebtReason reason) { settleRange(0u, kRows, reason); }

bool tsDebtAny(uint32_t row, uint32_t count)
{
    if (g_tsDebtStats.owedNow == 0u)
        return false;
    count = count > kRows ? kRows : count;
    for (uint32_t i = 0; i < count; ++i)
        if (isOwed((row + i) & kRowMask))
            return true;
    return false;
}

void tsDebtBeforeWrite(uint32_t row, uint32_t count, bool fullLanes)
{
    if (g_tsDebtStats.owedNow == 0u)
        return;
    if (!fullLanes)
    {
        settleRange(row, count, TsDebtReason::PartialWrite);
        return;
    }
    count = count > kRows ? kRows : count;
    for (uint32_t i = 0; i < count; ++i)
    {
        const uint32_t r = (row + i) & kRowMask;
        if (isOwed(r))
        {
            clearRow(r);
            ++g_tsDebtStats.cleared;
        }
    }
}

void tsDebtBeforeProgram(uint32_t pc, uint32_t top)
{
    if (g_tsDebtStats.owedNow == 0u)
        return;
    uint32_t first = 0, count = kRows;
    vu1NativeReadWindow(pc, top, &first, &count);
    settleRange(first, count, TsDebtReason::Program);
}

void tsDebtListEnd() { tsDebtSettleAll(TsDebtReason::ListEnd); }

void tsDebtHookBeforeWrite(void *, uint32_t row, uint32_t count, bool fullLanes) { tsDebtBeforeWrite(row, count, fullLanes); }
void tsDebtHookBeforeProgram(void *, uint32_t pc, uint32_t top) { tsDebtBeforeProgram(pc, top); }
void tsDebtHookListEnd(void *) { tsDebtListEnd(); }

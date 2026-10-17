// The VU1 debt map (src/xbox/PUSH-BC-PLAN.md section 2, D2; owned by C-XF):
// VU1 data rows that are owed but not yet written. A records engine's direct
// path (R2, ts_record_direct.h) and the in-place fetch (M8) skip a batch's
// UNPACKs into VU1 memory: the draw reads the game's arrays where they lie.
// The rows those UNPACKs would have written are noted here as owed, each
// with the write it owes (a log entry), and written for real ("settled")
// only when something reads them:
//   - an UNPACK into an owed row that writes only some lanes (a partial-lane,
//     masked or MODE != 0 UNPACK): those rows first (tsDebtBeforeWrite);
//   - a VU1 program that is not part of a record: its read window
//     (vu1NativeReadWindow; an interpreted or unknown program settles
//     everything) (tsDebtBeforeProgram);
//   - MSCNT and processVIF1Data (tsDebtSettleAll);
//   - the list's end (tsDebtListEnd), so VU1 memory is exact at every frame
//     boundary and in the det `vu` stream.
// A full-lane UNPACK into an owed row clears its debt (nothing to write).
//
// Structure: owed[1024] (per row, the log entry it owes, 0: none), a 1,024
// bit bitmap for fast window tests, and a ring of 1,024 log entries (the
// write: descriptor, op, CYCLE, first row and rows). A log entry about to be
// reused while rows still owe it is settled first. 22.5 KB (Xbox; pointers
// are 4 bytes), allocated once by tsDebtAttach at start-up (only with R2 or
// M8 on: nothing in a build without them), never during a match.
//
// The writes themselves are the engine's: one settler, registered by the
// engine that notes debts (tsDebtSetSettler), writes rows [row, row + count)
// of a log entry exactly as the skipped UNPACK would have (the other rows of
// the entry no longer owe it). Hook glue: the Vif1RecordHooks members
// debtBeforeWrite, debtBeforeProgram and listEnd (runtime/ps2_vif1_records.h)
// take the tsDebtHook* functions as they are (their owner argument is
// unused; tsDebtAttach names the PS2Memory).
//
// Inert until an engine notes a debt (R2: TS_RECORD_DIRECT, ts_record_
// direct.h; M8: TS_NATIVE_INPLACE): with nothing owed, every site is one
// bitmap test.
#pragma once
#include <cstdint>

class PS2Memory;

// One skipped UNPACK.
struct TsDebtWrite
{
    const void *desc = nullptr; // the engine's descriptor of the record
    uint16_t op = 0;            // which UNPACK of it
    uint16_t row = 0;           // the first VU1 row it writes (TOPS applied)
    uint16_t count = 0;         // the rows it spans (wrapping at 1024)
    uint16_t cycle = 0;         // VIF1 CYCLE (CL | WL << 8) when it would have run
    uint32_t aux = 0;           // the engine's (e.g. the source address)
};

// Writes rows [row, row + count) (absolute VU1 rows, inside write's span,
// count >= 1, wrapping at 1024) exactly as the skipped UNPACK would have.
using TsDebtSettleFn = void (*)(void *owner, PS2Memory &memory, const TsDebtWrite &write, uint32_t row, uint32_t count);

// Why rows were settled (counters, [TS:debt]).
enum class TsDebtReason : uint8_t
{
    PartialWrite = 0, // an UNPACK writing only some lanes of an owed row
    Program,          // a program outside the records read them
    ListEnd,          // the list ended
    Reused,           // their log entry was needed again
    Explicit,         // the engine asked (tsDebtSettle)
    Count
};

struct TsDebtStats
{
    uint32_t noted = 0;   // rows noted owed
    uint32_t cleared = 0; // owed rows a full-lane UNPACK overwrote
    uint32_t settled[uint32_t(TsDebtReason::Count)] = {};
    uint32_t settles = 0; // settler calls
    uint32_t owedNow = 0; // rows owed now
};
extern TsDebtStats g_tsDebtStats;

void tsDebtAttach(PS2Memory *memory);
void tsDebtSetSettler(void *owner, TsDebtSettleFn fn);
// The engine skipped `write`: its rows are owed. fullLanes: it writes every
// lane of every row it touches (rows owed by an older write are then
// replaced; otherwise those are settled first, so its lanes land on top of
// the older write's). False (no settler, no memory attached): nothing was
// noted, and the caller writes the rows itself.
bool tsDebtNote(const TsDebtWrite &write, bool fullLanes);
// Rows [row, row + count) settled now (the engine is about to read them).
void tsDebtSettle(uint32_t row, uint32_t count, TsDebtReason reason = TsDebtReason::Explicit);
void tsDebtSettleAll(TsDebtReason reason);
// Whether any of rows [row, row + count) is owed (the bitmap).
bool tsDebtAny(uint32_t row, uint32_t count);
// The decoder's sites (section 2, D2).
void tsDebtBeforeWrite(uint32_t row, uint32_t count, bool fullLanes);
void tsDebtBeforeProgram(uint32_t pc, uint32_t top);
void tsDebtListEnd();
// The same with the Vif1RecordHooks signatures.
void tsDebtHookBeforeWrite(void *owner, uint32_t row, uint32_t count, bool fullLanes);
void tsDebtHookBeforeProgram(void *owner, uint32_t pc, uint32_t top);
void tsDebtHookListEnd(void *owner);

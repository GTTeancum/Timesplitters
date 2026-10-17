// R2, the records engine's direct path (src/xbox/PUSH-BC-PLAN.md section
// 3.1 "three execution levels", section 5.9 item 2; owned by C-XF): a draw
// batch's vertex arrays are read where they lie in guest memory instead of
// being UNPACKed into VU1 data memory first. runDrawT (vu1_native_draw.h)
// runs over a GuestSource: a batch row is decoded from the guest array that
// would have written it, by the UNPACK's own format rules, lanes the format
// does not write read through from VU1 memory (settled first); a row no
// array writes is read from VU1 memory. The UNPACKs not made are owed rows
// in the debt map (ts_record_debt.h), written when something reads them
// (this module is their settler).
//
// The records engine (C-REC) describes a batch: the draw entry's MSCAL (pc,
// TOP) and the UNPACKs into the batch area it skips, each with its data in
// guest memory. Only unmasked UNPACKs in MODE 0 with CL == WL may be given
// (the engine replays any other through the decoder as R1 does), and none
// that writes the constant rows (4-21, 106-121) the program's constant
// entries read: those stay real.
//
// Switches:
//   TS_RECORD_DIRECT 1           tsRecordDirectRun takes batches (knob
//                                records = 4, C-REC). 0 (default, gated on
//                                the console's post-R1 phase split, plan
//                                section 8): it declines every batch and
//                                the engine runs R1.
//   TS_RECORD_DIRECT_SELFCHECK 1 every TS_RECORD_DIRECT_SELFCHECK_EVERY-th
//                                batch is also UNPACKed into a scratch copy
//                                of VU1 memory and every row and every
//                                vertex of the layout compared between the
//                                GuestSource and a VuSource on the scratch
//                                (the R2 check: GSXfVertex level, no
//                                backend); r2diff in [TS:r2].
#pragma once
#include <cstdint>

class PS2Memory;
class GS;

#ifndef TS_RECORD_DIRECT
#define TS_RECORD_DIRECT 0
#endif
#ifndef TS_RECORD_DIRECT_SELFCHECK
#define TS_RECORD_DIRECT_SELFCHECK 0
#endif
#ifndef TS_RECORD_DIRECT_SELFCHECK_EVERY
#define TS_RECORD_DIRECT_SELFCHECK_EVERY 8
#endif

// One skipped UNPACK of a batch.
struct TsDirectArray
{
    uint32_t guestAddr = 0; // its data in guest memory (RDRAM)
    uint16_t row = 0;       // the first VU1 row it writes (TOPS applied)
    uint16_t count = 0;     // the vectors it writes (NUM; 0 means 256)
    uint8_t format = 0;     // the UNPACK opcode's low four bits (vn << 2 | vl)
    bool zeroExtend = false; // USN
};

// A draw batch: the draw entry and the UNPACKs into its batch area.
struct TsDirectBatch
{
    uint32_t pc = 0;  // the draw entry's MSCAL target
    uint32_t top = 0; // the run's TOP
    const TsDirectArray *arrays = nullptr;
    uint32_t arrayCount = 0; // at most kTsDirectArrays
};
constexpr uint32_t kTsDirectArrays = 8u;

// Counters ([TS:r2]).
struct TsDirectStats
{
    uint32_t batches = 0, declined = 0, rows = 0;
    uint32_t checked = 0, rowDiffs = 0, vertexDiffs = 0;
};
extern TsDirectStats g_tsDirectStats;

// Once, with the runtime's memory: registers the debt settler.
void tsRecordDirectInstall(PS2Memory &memory);
// The batch drawn from guest memory, its UNPACKs owed. False (switch off,
// no native layout for the entry, an array the direct path does not take,
// or the draw declined before any side effect): nothing was done; the
// engine makes the UNPACKs and the MSCAL as R1 does.
bool tsRecordDirectRun(PS2Memory &memory, GS &gs, const TsDirectBatch &batch);
// The rows an array writes (a VU1 row map for the engine's prescan).
uint32_t tsDirectArrayRows(const TsDirectArray &array);
// Whether the direct path takes this UNPACK (format, no mask, MODE, CYCLE
// as the engine saw them when it built the descriptor).
bool tsDirectArrayTaken(uint8_t opcode, uint32_t mode, uint32_t cycle);

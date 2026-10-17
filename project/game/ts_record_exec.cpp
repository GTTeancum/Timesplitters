// R1, the records engine's replay (ts_record_desc.h; src/xbox/PUSH-BC-PLAN.md
// section 3.1; owned by C-REC). A chain token the decoder reaches at a
// command boundary runs its descriptor's ops through the decoder's own
// helpers (PS2Memory::vif1Unpack, vif1Stxx, vif1Immediate, vif1Mscal; the
// W0-C seams): every register and VU1-memory write is the decoder's code,
// so the result is the T0 decode's by construction. What it skips is the
// decoder's per-command work on the chain: reading the pieces, parsing the
// VIFcodes, the NOP and FLUSH commands. The ops' sources are asked for one
// batch ahead: while batch b's program runs (its MSCAL), the first lines of
// batch b+1's data are on their way.
#if defined(PLATFORM_XBOX)
#include "ts_record_desc.h"

#include "runtime/ps2_memory.h"
#include "runtime/ps2_vif1_reader.h"

#include <xmmintrin.h>

namespace
{
    enum : uint8_t
    {
        kMark = 0x07,
        kMscal = 0x14,
        kMscalf = 0x15,
    };
    // An UNPACK reads at most 256 vectors of 16 bytes: its span reader is
    // given that much (it reads only what the command's size says; the
    // builder checked the bytes lie in one payload).
    constexpr uint32_t kUnpackSpan = 256u * 16u;

    // The first lines of each op's data up to the next MSCAL.
    inline void prefetchBatch(const ts_record::RecOp *op, const ts_record::RecOp *end)
    {
        for (; op < end; ++op)
        {
            const uint8_t opcode = (op->cmd >> 24) & 0x7F;
            if (opcode == kMscal || opcode == kMscalf)
                return;
            if (op->data)
            {
                _mm_prefetch(reinterpret_cast<const char *>(op->data), _MM_HINT_T0);
                _mm_prefetch(reinterpret_cast<const char *>(op->data) + 32, _MM_HINT_T0);
            }
        }
    }
}

namespace ts_record
{
    bool recordEntryHolds(const PS2Memory &memory, const RecDesc &desc)
    {
        if ((desc.flags & kReplayable) == 0u)
            return false;
        if ((desc.flags & kAssumesCycleGe) != 0u)
        {
            // An UNPACK before the chain's first STCYCL was sized for CL >= WL.
            uint32_t cl = memory.vif1_regs.cycle & 0xFFu;
            uint32_t wl = (memory.vif1_regs.cycle >> 8) & 0xFFu;
            if (cl == 0u)
                cl = 1u;
            if (wl == 0u)
                wl = 1u;
            if (cl < wl)
                return false;
        }
        return true;
    }

    bool replayRecord(PS2Memory &memory, const RecDesc &desc)
    {
        if (!recordEntryHolds(memory, desc))
            return false;
        const RecOp *op = desc.ops();
        const RecOp *const end = op + desc.opCount;
        PS2Memory::Vif1UnpackCounts counts;
        prefetchBatch(op, end);
        for (; op < end; ++op)
        {
            const uint32_t cmd = op->cmd;
            const uint8_t opcode = (cmd >> 24) & 0x7F;
            if ((opcode & 0x60u) == 0x60u)
            {
                Vif1SpanReader in(op->data, kUnpackSpan);
                memory.vif1Unpack(cmd, in, counts, true);
            }
            else if (opcode <= kMark)
                memory.vif1Immediate(cmd);
            else if (opcode == kMscal || opcode == kMscalf)
            {
                prefetchBatch(op + 1, end); // the next batch's sources, while this one's program runs
                memory.vif1Mscal(cmd);
            }
            else // STMASK, STROW, STCOL
            {
                Vif1SpanReader in(op->data, 16u);
                memory.vif1Stxx(cmd, in);
            }
        }
        // CODE/NUM from the stream's last VIFcode, INT if any had the bit:
        // what the decoder leaves after reading the chain command by command.
        VIFRegisters &regs = memory.vif1_regs;
        regs.code = desc.finalCode;
        regs.num = (desc.finalCode >> 16) & 0xFFu;
        if ((desc.flags & kIntSeen) != 0u)
            regs.stat |= (1u << 11);
        g_vif1StreamStats.fastVectors += counts.fast;
        g_vif1StreamStats.slowVectors += counts.slow;
        return true;
    }
}
#endif

#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: findlink
// Address: 0x2648e0 - 0x264978
void findlink_0x2648e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findlink_0x2648e0");
#endif

    switch (ctx->pc) {
        case 0x264918u: goto label_264918;
        default: break;
    }

    ctx->pc = 0x2648e0u;

    // 0x2648e0: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x2648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2648e4: 0x3c02b6db  lui         $v0, 0xB6DB
    ctx->pc = 0x2648e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46811 << 16));
    // 0x2648e8: 0x34426db7  ori         $v0, $v0, 0x6DB7
    ctx->pc = 0x2648e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28087);
    // 0x2648ec: 0x8f89a34c  lw          $t1, -0x5CB4($gp)
    ctx->pc = 0x2648ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x2648f0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2648f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2648f4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2648f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2648f8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2648f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2648fc: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x2648fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x264900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264904: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x264904u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x264908: 0x19200019  blez        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x264908u;
    {
        const bool branch_taken_0x264908 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x26490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264908u;
        // 0x26490c: 0x52883  sra         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264908) {
            ctx->pc = 0x264970u;
            goto label_264970;
        }
    }
    ctx->pc = 0x264910u;
    // 0x264910: 0x8f88a2f0  lw          $t0, -0x5D10($gp)
    ctx->pc = 0x264910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x264914: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x264914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_264918:
    // 0x264918: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x264918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26491c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x26491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x264920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264928: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x264928u;
    {
        const bool branch_taken_0x264928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264928) {
            ctx->pc = 0x26492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264928u;
            // 0x26492c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264964u;
            goto label_264964;
        }
    }
    ctx->pc = 0x264930u;
    // 0x264930: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x264930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x264934: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264934u;
    {
        const bool branch_taken_0x264934 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x264934) {
            ctx->pc = 0x264948u;
            goto label_264948;
        }
    }
    ctx->pc = 0x26493Cu;
    // 0x26493c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x26493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264940: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264940u;
    {
        const bool branch_taken_0x264940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x264940) {
            ctx->pc = 0x26495Cu;
            goto label_26495c;
        }
    }
    ctx->pc = 0x264948u;
label_264948:
    // 0x264948: 0x14c50006  bne         $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264948u;
    {
        const bool branch_taken_0x264948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x26494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264948u;
        // 0x26494c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264948) {
            ctx->pc = 0x264964u;
            goto label_264964;
        }
    }
    ctx->pc = 0x264950u;
    // 0x264950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x264950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264954: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264954u;
    {
        const bool branch_taken_0x264954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x264958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264954u;
        // 0x264958: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264954) {
            ctx->pc = 0x264968u;
            goto label_264968;
        }
    }
    ctx->pc = 0x26495Cu;
label_26495c:
    // 0x26495c: 0x3e00008  jr          $ra
    ctx->pc = 0x26495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26495Cu;
        // 0x264960: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26495Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264964u;
label_264964:
    // 0x264964: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x264964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_264968:
    // 0x264968: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x264968u;
    {
        const bool branch_taken_0x264968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264968u;
        // 0x26496c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264968) {
            ctx->pc = 0x264918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264918;
        }
    }
    ctx->pc = 0x264970u;
label_264970:
    // 0x264970: 0x3e00008  jr          $ra
    ctx->pc = 0x264970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264970u;
        // 0x264974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264978u;
}

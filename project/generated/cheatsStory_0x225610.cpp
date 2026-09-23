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

// Function: cheatsStory
// Address: 0x225610 - 0x22566c
void cheatsStory_0x225610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cheatsStory_0x225610");
#endif

    switch (ctx->pc) {
        case 0x225630u: goto label_225630;
        default: break;
    }

    ctx->pc = 0x225610u;

    // 0x225610: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x225614: 0x8f869f4c  lw          $a2, -0x60B4($gp)
    ctx->pc = 0x225614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x225618: 0x24423868  addiu       $v0, $v0, 0x3868
    ctx->pc = 0x225618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14440));
    // 0x22561c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225620: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x225620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225624: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x225624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225628: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22562c: 0x0  nop
    ctx->pc = 0x22562cu;
    // NOP
label_225630:
    // 0x225630: 0x661007  srav        $v0, $a2, $v1
    ctx->pc = 0x225630u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x225634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x225634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225638: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x225638u;
    {
        const bool branch_taken_0x225638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225638) {
            ctx->pc = 0x22563Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225638u;
            // 0x22563c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225658u;
            goto label_225658;
        }
    }
    ctx->pc = 0x225640u;
    // 0x225640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225644: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x225644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225648: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225648u;
    {
        const bool branch_taken_0x225648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225648u;
        // 0x22564c: 0x671004  sllv        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225648) {
            ctx->pc = 0x225654u;
            goto label_225654;
        }
    }
    ctx->pc = 0x225650u;
    // 0x225650: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x225650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_225654:
    // 0x225654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x225654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_225658:
    // 0x225658: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x225658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x22565c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22565Cu;
    {
        const bool branch_taken_0x22565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22565Cu;
        // 0x225660: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22565c) {
            ctx->pc = 0x225630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225630;
        }
    }
    ctx->pc = 0x225664u;
    // 0x225664: 0x3e00008  jr          $ra
    ctx->pc = 0x225664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225664u;
        // 0x225668: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22566Cu;
}

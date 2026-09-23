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

// Function: vibration_onchange
// Address: 0x20f838 - 0x20f86c
void vibration_onchange_0x20f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vibration_onchange_0x20f838");
#endif

    ctx->pc = 0x20f838u;

    // 0x20f838: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F83Cu;
    {
        const bool branch_taken_0x20f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F83Cu;
        // 0x20f840: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f83c) {
            ctx->pc = 0x20F858u;
            goto label_20f858;
        }
    }
    ctx->pc = 0x20F844u;
    // 0x20f844: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f848: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x20f848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f84c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x20f84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x20f850: 0x3e00008  jr          $ra
    ctx->pc = 0x20F850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F850u;
        // 0x20f854: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F858u;
label_20f858:
    // 0x20f858: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x20f858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20f85c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x20f85cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20f860: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x20f860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x20f864: 0x3e00008  jr          $ra
    ctx->pc = 0x20F864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F864u;
        // 0x20f868: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F86Cu;
}

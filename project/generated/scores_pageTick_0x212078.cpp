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

// Function: scores_pageTick
// Address: 0x212078 - 0x2120b4
void scores_pageTick_0x212078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scores_pageTick_0x212078");
#endif

    ctx->pc = 0x212078u;

    // 0x212078: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21207c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212080: 0x8c44c4f0  lw          $a0, -0x3B10($v0)
    ctx->pc = 0x212080u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x212084: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212084u;
    {
        const bool branch_taken_0x212084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x212088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212084u;
        // 0x212088: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212084) {
            ctx->pc = 0x212094u;
            goto label_212094;
        }
    }
    ctx->pc = 0x21208Cu;
    // 0x21208c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21208Cu;
    {
        const bool branch_taken_0x21208c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21208c) {
            ctx->pc = 0x2120ACu;
            goto label_2120ac;
        }
    }
    ctx->pc = 0x212094u;
label_212094:
    // 0x212094: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x212094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x212098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x212098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21209c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21209Cu;
    {
        const bool branch_taken_0x21209c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21209c) {
            ctx->pc = 0x2120ACu;
            goto label_2120ac;
        }
    }
    ctx->pc = 0x2120A4u;
    // 0x2120a4: 0x808422e  j           func_2108B8
    ctx->pc = 0x2120A4u;
    ctx->pc = 0x2108B8u;
    tickRetryQuit_0x2108b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2120ACu;
label_2120ac:
    // 0x2120ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2120ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120B4u;
}

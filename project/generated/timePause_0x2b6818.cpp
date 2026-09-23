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

// Function: timePause
// Address: 0x2b6818 - 0x2b6850
void timePause_0x2b6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timePause_0x2b6818");
#endif

    ctx->pc = 0x2b6818u;

    // 0x2b6818: 0x8f82b47c  lw          $v0, -0x4B84($gp)
    ctx->pc = 0x2b6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947964)));
    // 0x2b681c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B681Cu;
    {
        const bool branch_taken_0x2b681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b681c) {
            ctx->pc = 0x2B683Cu;
            goto label_2b683c;
        }
    }
    ctx->pc = 0x2B6824u;
    // 0x2b6824: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6824u;
    {
        const bool branch_taken_0x2b6824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6824) {
            ctx->pc = 0x2B6834u;
            goto label_2b6834;
        }
    }
    ctx->pc = 0x2B682Cu;
    // 0x2b682c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6830: 0xaf82b47c  sw          $v0, -0x4B84($gp)
    ctx->pc = 0x2b6830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947964), GPR_U32(ctx, 2));
label_2b6834:
    // 0x2b6834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6834u;
    {
        const bool branch_taken_0x2b6834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6834) {
            ctx->pc = 0x2B6848u;
            goto label_2b6848;
        }
    }
    ctx->pc = 0x2B683Cu;
label_2b683c:
    // 0x2b683c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B683Cu;
    {
        const bool branch_taken_0x2b683c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B683Cu;
        // 0x2b6840: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b683c) {
            ctx->pc = 0x2B6848u;
            goto label_2b6848;
        }
    }
    ctx->pc = 0x2B6844u;
    // 0x2b6844: 0xaf82b47c  sw          $v0, -0x4B84($gp)
    ctx->pc = 0x2b6844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947964), GPR_U32(ctx, 2));
label_2b6848:
    // 0x2b6848: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6850u;
}

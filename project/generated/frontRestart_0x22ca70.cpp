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

// Function: frontRestart
// Address: 0x22ca70 - 0x22caa4
void frontRestart_0x22ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontRestart_0x22ca70");
#endif

    switch (ctx->pc) {
        case 0x22ca80u: goto label_22ca80;
        default: break;
    }

    ctx->pc = 0x22ca70u;

    // 0x22ca70: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22ca74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ca78: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x22ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x22ca7c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x22ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_22ca80:
    // 0x22ca80: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x22ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x22ca84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ca88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ca8c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x22ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x22ca90: 0x0  nop
    ctx->pc = 0x22ca90u;
    // NOP
    // 0x22ca94: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22CA94u;
    {
        const bool branch_taken_0x22ca94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22ca94) {
            ctx->pc = 0x22CA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ca80;
        }
    }
    ctx->pc = 0x22CA9Cu;
    // 0x22ca9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CAA4u;
}

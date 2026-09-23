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

// Function: frontEnd
// Address: 0x22ce78 - 0x22ceac
void frontEnd_0x22ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontEnd_0x22ce78");
#endif

    switch (ctx->pc) {
        case 0x22ce88u: goto label_22ce88;
        default: break;
    }

    ctx->pc = 0x22ce78u;

    // 0x22ce78: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22ce7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ce80: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x22ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x22ce84: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x22ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_22ce88:
    // 0x22ce88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22ce8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ce90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ce94: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x22ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x22ce98: 0x0  nop
    ctx->pc = 0x22ce98u;
    // NOP
    // 0x22ce9c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22CE9Cu;
    {
        const bool branch_taken_0x22ce9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22ce9c) {
            ctx->pc = 0x22CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ce88;
        }
    }
    ctx->pc = 0x22CEA4u;
    // 0x22cea4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CEACu;
}

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

// Function: bulletGfx
// Address: 0x28d000 - 0x28d02c
void bulletGfx_0x28d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletGfx_0x28d000");
#endif

    switch (ctx->pc) {
        case 0x28d008u: goto label_28d008;
        default: break;
    }

    ctx->pc = 0x28d000u;

    // 0x28d000: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28d004: 0x0  nop
    ctx->pc = 0x28d004u;
    // NOP
label_28d008:
    // 0x28d008: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28d00c: 0x0  nop
    ctx->pc = 0x28d00cu;
    // NOP
    // 0x28d010: 0x0  nop
    ctx->pc = 0x28d010u;
    // NOP
    // 0x28d014: 0x0  nop
    ctx->pc = 0x28d014u;
    // NOP
    // 0x28d018: 0x0  nop
    ctx->pc = 0x28d018u;
    // NOP
    // 0x28d01c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28D01Cu;
    {
        const bool branch_taken_0x28d01c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28d01c) {
            ctx->pc = 0x28D008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d008;
        }
    }
    ctx->pc = 0x28D024u;
    // 0x28d024: 0x3e00008  jr          $ra
    ctx->pc = 0x28D024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D02Cu;
}

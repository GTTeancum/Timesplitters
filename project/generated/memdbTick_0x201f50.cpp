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

// Function: memdbTick
// Address: 0x201f50 - 0x201f74
void memdbTick_0x201f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memdbTick_0x201f50");
#endif

    ctx->pc = 0x201f50u;

    // 0x201f50: 0x8f829a84  lw          $v0, -0x657C($gp)
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
    // 0x201f54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x201F54u;
    {
        const bool branch_taken_0x201f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F54u;
        // 0x201f58: 0x8f83b61c  lw          $v1, -0x49E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f54) {
            ctx->pc = 0x201F60u;
            goto label_201f60;
        }
    }
    ctx->pc = 0x201F5Cu;
    // 0x201f5c: 0xaf809a84  sw          $zero, -0x657C($gp)
    ctx->pc = 0x201f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941316), GPR_U32(ctx, 0));
label_201f60:
    // 0x201f60: 0x8f82b620  lw          $v0, -0x49E0($gp)
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948384)));
    // 0x201f64: 0xaf83b620  sw          $v1, -0x49E0($gp)
    ctx->pc = 0x201f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948384), GPR_U32(ctx, 3));
    // 0x201f68: 0xaf82b624  sw          $v0, -0x49DC($gp)
    ctx->pc = 0x201f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948388), GPR_U32(ctx, 2));
    // 0x201f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x201F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F6Cu;
        // 0x201f70: 0xaf82b61c  sw          $v0, -0x49E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F74u;
}

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

// Function: getinvincible
// Address: 0x20d778 - 0x20d794
void getinvincible_0x20d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getinvincible_0x20d778");
#endif

    ctx->pc = 0x20d778u;

    // 0x20d778: 0x8f829ce8  lw          $v0, -0x6318($gp)
    ctx->pc = 0x20d778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941928)));
    // 0x20d77c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D77Cu;
    {
        const bool branch_taken_0x20d77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D77Cu;
        // 0x20d780: 0x8f829c84  lw          $v0, -0x637C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d77c) {
            ctx->pc = 0x20D78Cu;
            goto label_20d78c;
        }
    }
    ctx->pc = 0x20D784u;
    // 0x20d784: 0x3e00008  jr          $ra
    ctx->pc = 0x20D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D784u;
        // 0x20d788: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D78Cu;
label_20d78c:
    // 0x20d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D794u;
}

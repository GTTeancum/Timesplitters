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

// Function: getdisplayrooms
// Address: 0x20d898 - 0x20d8b4
void getdisplayrooms_0x20d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getdisplayrooms_0x20d898");
#endif

    ctx->pc = 0x20d898u;

    // 0x20d898: 0x8f829d10  lw          $v0, -0x62F0($gp)
    ctx->pc = 0x20d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941968)));
    // 0x20d89c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D89Cu;
    {
        const bool branch_taken_0x20d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D89Cu;
        // 0x20d8a0: 0x8f829c84  lw          $v0, -0x637C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d89c) {
            ctx->pc = 0x20D8ACu;
            goto label_20d8ac;
        }
    }
    ctx->pc = 0x20D8A4u;
    // 0x20d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x20D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8A4u;
        // 0x20d8a8: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D8ACu;
label_20d8ac:
    // 0x20d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x20D8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D8B4u;
}

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

// Function: getviewfloors
// Address: 0x20d940 - 0x20d95c
void getviewfloors_0x20d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getviewfloors_0x20d940");
#endif

    ctx->pc = 0x20d940u;

    // 0x20d940: 0x8f829ca4  lw          $v0, -0x635C($gp)
    ctx->pc = 0x20d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941860)));
    // 0x20d944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D944u;
    {
        const bool branch_taken_0x20d944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D944u;
        // 0x20d948: 0x8f829c84  lw          $v0, -0x637C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d944) {
            ctx->pc = 0x20D954u;
            goto label_20d954;
        }
    }
    ctx->pc = 0x20D94Cu;
    // 0x20d94c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D94Cu;
        // 0x20d950: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D954u;
label_20d954:
    // 0x20d954: 0x3e00008  jr          $ra
    ctx->pc = 0x20D954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D95Cu;
}

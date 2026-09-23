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

// Function: getviewguns
// Address: 0x20d9e8 - 0x20da04
void getviewguns_0x20d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getviewguns_0x20d9e8");
#endif

    ctx->pc = 0x20d9e8u;

    // 0x20d9e8: 0x8f829cb0  lw          $v0, -0x6350($gp)
    ctx->pc = 0x20d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941872)));
    // 0x20d9ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D9ECu;
    {
        const bool branch_taken_0x20d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9ECu;
        // 0x20d9f0: 0x8f829c84  lw          $v0, -0x637C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9ec) {
            ctx->pc = 0x20D9FCu;
            goto label_20d9fc;
        }
    }
    ctx->pc = 0x20D9F4u;
    // 0x20d9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9F4u;
        // 0x20d9f8: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D9FCu;
label_20d9fc:
    // 0x20d9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x20D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA04u;
}

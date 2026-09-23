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

// Function: getturtlegs
// Address: 0x20dad0 - 0x20daec
void getturtlegs_0x20dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getturtlegs_0x20dad0");
#endif

    ctx->pc = 0x20dad0u;

    // 0x20dad0: 0x8f829cc0  lw          $v0, -0x6340($gp)
    ctx->pc = 0x20dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941888)));
    // 0x20dad4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DAD4u;
    {
        const bool branch_taken_0x20dad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAD4u;
        // 0x20dad8: 0x8f829c84  lw          $v0, -0x637C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dad4) {
            ctx->pc = 0x20DAE4u;
            goto label_20dae4;
        }
    }
    ctx->pc = 0x20DADCu;
    // 0x20dadc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DADCu;
        // 0x20dae0: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DAE4u;
label_20dae4:
    // 0x20dae4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DAECu;
}

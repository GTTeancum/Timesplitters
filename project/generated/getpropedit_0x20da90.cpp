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

// Function: getpropedit
// Address: 0x20da90 - 0x20daac
void getpropedit_0x20da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getpropedit_0x20da90");
#endif

    ctx->pc = 0x20da90u;

    // 0x20da90: 0x8f829c98  lw          $v0, -0x6368($gp)
    ctx->pc = 0x20da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941848)));
    // 0x20da94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DA94u;
    {
        const bool branch_taken_0x20da94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA94u;
        // 0x20da98: 0x8f829c84  lw          $v0, -0x637C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da94) {
            ctx->pc = 0x20DAA4u;
            goto label_20daa4;
        }
    }
    ctx->pc = 0x20DA9Cu;
    // 0x20da9c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA9Cu;
        // 0x20daa0: 0x8f829c90  lw          $v0, -0x6370($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DAA4u;
label_20daa4:
    // 0x20daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DAACu;
}

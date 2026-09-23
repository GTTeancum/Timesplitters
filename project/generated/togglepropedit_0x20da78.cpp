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

// Function: togglepropedit
// Address: 0x20da78 - 0x20da90
void togglepropedit_0x20da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("togglepropedit_0x20da78");
#endif

    ctx->pc = 0x20da78u;

    // 0x20da78: 0x8f839c98  lw          $v1, -0x6368($gp)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941848)));
    // 0x20da7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20da80: 0xaf809c94  sw          $zero, -0x636C($gp)
    ctx->pc = 0x20da80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941844), GPR_U32(ctx, 0));
    // 0x20da84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20da88: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA88u;
        // 0x20da8c: 0xaf829c98  sw          $v0, -0x6368($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA90u;
}

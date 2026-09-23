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

// Function: loadingReset
// Address: 0x22a0b0 - 0x22a0c0
void loadingReset_0x22a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadingReset_0x22a0b0");
#endif

    ctx->pc = 0x22a0b0u;

    // 0x22a0b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a0b4: 0xaf80b71c  sw          $zero, -0x48E4($gp)
    ctx->pc = 0x22a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948636), GPR_U32(ctx, 0));
    // 0x22a0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0B8u;
        // 0x22a0bc: 0xaf82b718  sw          $v0, -0x48E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A0C0u;
}

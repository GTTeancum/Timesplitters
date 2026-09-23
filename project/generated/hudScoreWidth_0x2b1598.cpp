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

// Function: hudScoreWidth
// Address: 0x2b1598 - 0x2b15b4
void hudScoreWidth_0x2b1598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hudScoreWidth_0x2b1598");
#endif

    ctx->pc = 0x2b1598u;

    // 0x2b1598: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b159c: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x2b159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2b15a0: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2b15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2b15a4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b15a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b15a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2b15ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B15ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15ACu;
        // 0x2b15b0: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B15ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B15B4u;
}

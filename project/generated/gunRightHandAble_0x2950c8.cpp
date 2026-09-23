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

// Function: gunRightHandAble
// Address: 0x2950c8 - 0x2950ec
void gunRightHandAble_0x2950c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunRightHandAble_0x2950c8");
#endif

    ctx->pc = 0x2950c8u;

    // 0x2950c8: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x2950c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x2950cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2950CCu;
    {
        const bool branch_taken_0x2950cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950CCu;
        // 0x2950d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950cc) {
            ctx->pc = 0x2950E4u;
            goto label_2950e4;
        }
    }
    ctx->pc = 0x2950D4u;
    // 0x2950d4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2950d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2950d8: 0x8c62c4f8  lw          $v0, -0x3B08($v1)
    ctx->pc = 0x2950d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x2950dc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2950dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2950e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2950e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2950e4:
    // 0x2950e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2950E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2950E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2950ECu;
}

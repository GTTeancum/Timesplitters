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

// Function: enemyGetBase
// Address: 0x2c7ed8 - 0x2c7ef0
void enemyGetBase_0x2c7ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyGetBase_0x2c7ed8");
#endif

    ctx->pc = 0x2c7ed8u;

    // 0x2c7ed8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c7edc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2c7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c7ee0: 0x24632488  addiu       $v1, $v1, 0x2488
    ctx->pc = 0x2c7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9352));
    // 0x2c7ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c7ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EE8u;
        // 0x2c7eec: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7EF0u;
}

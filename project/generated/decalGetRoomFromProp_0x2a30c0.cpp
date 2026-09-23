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

// Function: decalGetRoomFromProp
// Address: 0x2a30c0 - 0x2a30e0
void decalGetRoomFromProp_0x2a30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalGetRoomFromProp_0x2a30c0");
#endif

    ctx->pc = 0x2a30c0u;

    // 0x2a30c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a30c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a30c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A30C8u;
    {
        const bool branch_taken_0x2a30c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a30c8) {
            ctx->pc = 0x2A30D8u;
            goto label_2a30d8;
        }
    }
    ctx->pc = 0x2A30D0u;
    // 0x2a30d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A30D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30D0u;
        // 0x2a30d4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A30D8u;
label_2a30d8:
    // 0x2a30d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A30D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30D8u;
        // 0x2a30dc: 0x8f82b30c  lw          $v0, -0x4CF4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947596)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A30E0u;
}

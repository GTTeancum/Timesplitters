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

// Function: freehead
// Address: 0x2686c0 - 0x2686f8
void freehead_0x2686c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("freehead_0x2686c0");
#endif

    switch (ctx->pc) {
        case 0x2686d0u: goto label_2686d0;
        default: break;
    }

    ctx->pc = 0x2686c0u;

    // 0x2686c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2686c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2686c4: 0x8f83b09c  lw          $v1, -0x4F64($gp)
    ctx->pc = 0x2686c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946972)));
    // 0x2686c8: 0x2446dec0  addiu       $a2, $v0, -0x2140
    ctx->pc = 0x2686c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
    // 0x2686cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2686ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2686d0:
    // 0x2686d0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2686D0u;
    {
        const bool branch_taken_0x2686d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2686D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686D0u;
        // 0x2686d4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686d0) {
            ctx->pc = 0x2686E0u;
            goto label_2686e0;
        }
    }
    ctx->pc = 0x2686D8u;
    // 0x2686d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2686D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2686DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686D8u;
        // 0x2686dc: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686E0u;
label_2686e0:
    // 0x2686e0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2686e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2686e4: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x2686e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2686e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2686E8u;
    {
        const bool branch_taken_0x2686e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2686ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686E8u;
        // 0x2686ec: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686e8) {
            ctx->pc = 0x2686D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2686d0;
        }
    }
    ctx->pc = 0x2686F0u;
    // 0x2686f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2686F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686F8u;
}

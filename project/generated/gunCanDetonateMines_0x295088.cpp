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

// Function: gunCanDetonateMines
// Address: 0x295088 - 0x2950b8
void gunCanDetonateMines_0x295088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunCanDetonateMines_0x295088");
#endif

    switch (ctx->pc) {
        case 0x295090u: goto label_295090;
        default: break;
    }

    ctx->pc = 0x295088u;

    // 0x295088: 0x248411c0  addiu       $a0, $a0, 0x11C0
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4544));
    // 0x29508c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29508cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295090:
    // 0x295090: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295094u;
    {
        const bool branch_taken_0x295094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295094u;
        // 0x295098: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295094) {
            ctx->pc = 0x2950A4u;
            goto label_2950a4;
        }
    }
    ctx->pc = 0x29509Cu;
    // 0x29509c: 0x3e00008  jr          $ra
    ctx->pc = 0x29509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2950A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29509Cu;
        // 0x2950a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2950A4u;
label_2950a4:
    // 0x2950a4: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x2950a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2950a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2950A8u;
    {
        const bool branch_taken_0x2950a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950A8u;
        // 0x2950ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950a8) {
            ctx->pc = 0x295090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295090;
        }
    }
    ctx->pc = 0x2950B0u;
    // 0x2950b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2950B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2950B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950B0u;
        // 0x2950b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2950B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2950B8u;
}

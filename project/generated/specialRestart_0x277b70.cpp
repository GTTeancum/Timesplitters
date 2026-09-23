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

// Function: specialRestart
// Address: 0x277b70 - 0x277ba4
void specialRestart_0x277b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialRestart_0x277b70");
#endif

    switch (ctx->pc) {
        case 0x277b80u: goto label_277b80;
        default: break;
    }

    ctx->pc = 0x277b70u;

    // 0x277b70: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x277b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x277b74: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x277b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x277b78: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x277b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x277b7c: 0x244200c4  addiu       $v0, $v0, 0xC4
    ctx->pc = 0x277b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_277b80:
    // 0x277b80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x277b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x277b84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x277b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x277b88: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x277b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x277b8c: 0x0  nop
    ctx->pc = 0x277b8cu;
    // NOP
    // 0x277b90: 0x0  nop
    ctx->pc = 0x277b90u;
    // NOP
    // 0x277b94: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x277B94u;
    {
        const bool branch_taken_0x277b94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x277b94) {
            ctx->pc = 0x277B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277b80;
        }
    }
    ctx->pc = 0x277B9Cu;
    // 0x277b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x277B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B9Cu;
        // 0x277ba0: 0xaf80b184  sw          $zero, -0x4E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277BA4u;
}

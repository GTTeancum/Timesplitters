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

// Function: profileTick
// Address: 0x2b6028 - 0x2b6058
void profileTick_0x2b6028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("profileTick_0x2b6028");
#endif

    switch (ctx->pc) {
        case 0x2b6038u: goto label_2b6038;
        default: break;
    }

    ctx->pc = 0x2b6028u;

    // 0x2b6028: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b6028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b602c: 0x244359c0  addiu       $v1, $v0, 0x59C0
    ctx->pc = 0x2b602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x2b6030: 0x24640230  addiu       $a0, $v1, 0x230
    ctx->pc = 0x2b6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x2b6034: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6034u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3759C0u));
label_2b6038:
    // 0x2b6038: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6038u;
    {
        const bool branch_taken_0x2b6038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6038) {
            ctx->pc = 0x2B603Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6038u;
            // 0x2b603c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6040u;
            goto label_2b6040;
        }
    }
    ctx->pc = 0x2B6040u;
label_2b6040:
    // 0x2b6040: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2b6040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2b6044: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2b6044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b6048: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B6048u;
    {
        const bool branch_taken_0x2b6048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6048) {
            ctx->pc = 0x2B604Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6048u;
            // 0x2b604c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6038;
        }
    }
    ctx->pc = 0x2B6050u;
    // 0x2b6050: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6058u;
}

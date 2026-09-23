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

// Function: matrixPrintf
// Address: 0x2b5690 - 0x2b56d4
void matrixPrintf_0x2b5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixPrintf_0x2b5690");
#endif

    switch (ctx->pc) {
        case 0x2b5698u: goto label_2b5698;
        case 0x2b56a0u: goto label_2b56a0;
        default: break;
    }

    ctx->pc = 0x2b5690u;

    // 0x2b5690: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b5690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5694: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2b5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b5698:
    // 0x2b5698: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b569c: 0x0  nop
    ctx->pc = 0x2b569cu;
    // NOP
label_2b56a0:
    // 0x2b56a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b56a4: 0x0  nop
    ctx->pc = 0x2b56a4u;
    // NOP
    // 0x2b56a8: 0x0  nop
    ctx->pc = 0x2b56a8u;
    // NOP
    // 0x2b56ac: 0x0  nop
    ctx->pc = 0x2b56acu;
    // NOP
    // 0x2b56b0: 0x0  nop
    ctx->pc = 0x2b56b0u;
    // NOP
    // 0x2b56b4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B56B4u;
    {
        const bool branch_taken_0x2b56b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b56b4) {
            ctx->pc = 0x2B56A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b56a0;
        }
    }
    ctx->pc = 0x2B56BCu;
    // 0x2b56bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b56bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56c0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2b56c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b56c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B56C4u;
    {
        const bool branch_taken_0x2b56c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56C4u;
        // 0x2b56c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56c4) {
            ctx->pc = 0x2B5698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5698;
        }
    }
    ctx->pc = 0x2B56CCu;
    // 0x2b56cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B56CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B56CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B56D4u;
}

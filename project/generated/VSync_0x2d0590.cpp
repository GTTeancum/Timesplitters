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

// Function: VSync
// Address: 0x2d0590 - 0x2d05c8
void VSync_0x2d0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync_0x2d0590");
#endif

    switch (ctx->pc) {
        case 0x2d05a0u: goto label_2d05a0;
        default: break;
    }

    ctx->pc = 0x2d0590u;

    // 0x2d0590: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d0590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d0594: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d0594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d0598: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x2d0598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x2d059c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d059cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 2));
label_2d05a0:
    // 0x2d05a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d05a4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d05a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d05a8: 0x0  nop
    ctx->pc = 0x2d05a8u;
    // NOP
    // 0x2d05ac: 0x0  nop
    ctx->pc = 0x2d05acu;
    // NOP
    // 0x2d05b0: 0x0  nop
    ctx->pc = 0x2d05b0u;
    // NOP
    // 0x2d05b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D05B4u;
    {
        const bool branch_taken_0x2d05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05B4u;
        // 0x2d05b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05b4) {
            ctx->pc = 0x2D05A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d05a0;
        }
    }
    ctx->pc = 0x2D05BCu;
    // 0x2d05bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d05c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D05C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D05C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D05C8u;
}

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

// Function: QueuePeekWriteDone
// Address: 0x2d0ee0 - 0x2d0f1c
void QueuePeekWriteDone_0x2d0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueuePeekWriteDone_0x2d0ee0");
#endif

    ctx->pc = 0x2d0ee0u;

    // 0x2d0ee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d0ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ee4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d0ee8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d0eec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d0eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d0ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0ef4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d0ef8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2d0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2d0efc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d0f00: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d0f04: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0F04u;
    {
        const bool branch_taken_0x2d0f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F04u;
        // 0x2d0f08: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f04) {
            ctx->pc = 0x2D0F14u;
            goto label_2d0f14;
        }
    }
    ctx->pc = 0x2D0F0Cu;
    // 0x2d0f0c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2d0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d0f10: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2d0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_2d0f14:
    // 0x2d0f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0F1Cu;
}

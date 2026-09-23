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

// Function: BuffRemoveu16
// Address: 0x204140 - 0x20416c
void BuffRemoveu16_0x204140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuffRemoveu16_0x204140");
#endif

    ctx->pc = 0x204140u;

    // 0x204140: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x204140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204148: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20414c: 0x80450001  lb          $a1, 0x1($v0)
    ctx->pc = 0x20414cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x204150: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x204150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x204154: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x204154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x204158: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x20415c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20415cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x204160: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x204160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204164: 0x3e00008  jr          $ra
    ctx->pc = 0x204164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204164u;
        // 0x204168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20416Cu;
}

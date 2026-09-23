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

// Function: BuffAddu8
// Address: 0x204060 - 0x204088
void BuffAddu8_0x204060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuffAddu8_0x204060");
#endif

    ctx->pc = 0x204060u;

    // 0x204060: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x204060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x204064: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20406c: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x20406cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x204070: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x204070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x204074: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x204074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204078: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20407c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20407cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x204080: 0x3e00008  jr          $ra
    ctx->pc = 0x204080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204080u;
        // 0x204084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204088u;
}

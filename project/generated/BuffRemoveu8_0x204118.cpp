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

// Function: BuffRemoveu8
// Address: 0x204118 - 0x20413c
void BuffRemoveu8_0x204118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuffRemoveu8_0x204118");
#endif

    ctx->pc = 0x204118u;

    // 0x204118: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x204118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20411c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204120: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x204120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204128: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x204128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20412c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20412cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x204130: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x204130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x204134: 0x3e00008  jr          $ra
    ctx->pc = 0x204134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204134u;
        // 0x204138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20413Cu;
}

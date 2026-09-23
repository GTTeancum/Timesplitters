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

// Function: mcseqWindowClose
// Address: 0x244a60 - 0x244a80
void mcseqWindowClose_0x244a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqWindowClose_0x244a60");
#endif

    ctx->pc = 0x244a60u;

    // 0x244a60: 0x9382b7c8  lbu         $v0, -0x4838($gp)
    ctx->pc = 0x244a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948808)));
    // 0x244a64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244A64u;
    {
        const bool branch_taken_0x244a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A64u;
        // 0x244a68: 0x8f83a004  lw          $v1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a64) {
            ctx->pc = 0x244A78u;
            goto label_244a78;
        }
    }
    ctx->pc = 0x244A6Cu;
    // 0x244a6c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x244a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x244a70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x244a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x244a74: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x244a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_244a78:
    // 0x244a78: 0x3e00008  jr          $ra
    ctx->pc = 0x244A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A78u;
        // 0x244a7c: 0xa380b7c8  sb          $zero, -0x4838($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294948808), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244A80u;
}

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

// Function: menuStartMessage
// Address: 0x20d418 - 0x20d444
void menuStartMessage_0x20d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menuStartMessage_0x20d418");
#endif

    ctx->pc = 0x20d418u;

    // 0x20d418: 0x8f829c74  lw          $v0, -0x638C($gp)
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941812)));
    // 0x20d41c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D41Cu;
    {
        const bool branch_taken_0x20d41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D41Cu;
        // 0x20d420: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d41c) {
            ctx->pc = 0x20D43Cu;
            goto label_20d43c;
        }
    }
    ctx->pc = 0x20D424u;
    // 0x20d424: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20d428: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x20d428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d42c: 0xaf849c74  sw          $a0, -0x638C($gp)
    ctx->pc = 0x20d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941812), GPR_U32(ctx, 4));
    // 0x20d430: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20d430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d434: 0x8080e7a  j           func_2039E8
    ctx->pc = 0x20D434u;
    ctx->pc = 0x20D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D434u;
    // 0x20d438: 0xaf839c78  sw          $v1, -0x6388($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941816), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    joyClearButs_0x2039e8(rdram, ctx, runtime); return;
    ctx->pc = 0x20D43Cu;
label_20d43c:
    // 0x20d43c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D444u;
}

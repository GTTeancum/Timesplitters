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

// Function: timeTickRetrace
// Address: 0x2b6650 - 0x2b6688
void timeTickRetrace_0x2b6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("timeTickRetrace_0x2b6650");
#endif

    ctx->pc = 0x2b6650u;

    // 0x2b6650: 0x8f82b454  lw          $v0, -0x4BAC($gp)
    ctx->pc = 0x2b6650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
    // 0x2b6654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6658: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x2b6658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2b665c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B665Cu;
    {
        const bool branch_taken_0x2b665c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B665Cu;
        // 0x2b6660: 0xaf82b454  sw          $v0, -0x4BAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b665c) {
            ctx->pc = 0x2B6680u;
            goto label_2b6680;
        }
    }
    ctx->pc = 0x2B6664u;
    // 0x2b6664: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b6664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2b6668: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x2b6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2b666c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x2b666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x2b6670: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b6674: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2b6674u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 4));
    // 0x2b6678: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2b6678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2b667c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b667cu;
    runtime->Store32(rdram, ctx, 0x10000800u, GPR_U32(ctx, 0));
label_2b6680:
    // 0x2b6680: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6688u;
}

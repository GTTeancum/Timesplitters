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

// Function: replayReset
// Address: 0x202d58 - 0x202d90
void replayReset_0x202d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("replayReset_0x202d58");
#endif

    ctx->pc = 0x202d58u;

    // 0x202d58: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x202D58u;
    {
        const bool branch_taken_0x202d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D58u;
        // 0x202d5c: 0xaf849ae4  sw          $a0, -0x651C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d58) {
            ctx->pc = 0x202D88u;
            goto label_202d88;
        }
    }
    ctx->pc = 0x202D60u;
    // 0x202d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202d64: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202D64u;
    {
        const bool branch_taken_0x202d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x202D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D64u;
        // 0x202d68: 0x24c20070  addiu       $v0, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d64) {
            ctx->pc = 0x202D88u;
            goto label_202d88;
        }
    }
    ctx->pc = 0x202D6Cu;
    // 0x202d6c: 0xaf879ae0  sw          $a3, -0x6520($gp)
    ctx->pc = 0x202d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941408), GPR_U32(ctx, 7));
    // 0x202d70: 0xaf82b62c  sw          $v0, -0x49D4($gp)
    ctx->pc = 0x202d70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948396), GPR_U32(ctx, 2));
    // 0x202d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202d78: 0xaf859ae8  sw          $a1, -0x6518($gp)
    ctx->pc = 0x202d78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941416), GPR_U32(ctx, 5));
    // 0x202d7c: 0xaf869adc  sw          $a2, -0x6524($gp)
    ctx->pc = 0x202d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941404), GPR_U32(ctx, 6));
    // 0x202d80: 0x80ada3e  j           func_2B68F8
    ctx->pc = 0x202D80u;
    ctx->pc = 0x202D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D80u;
    // 0x202d84: 0xaf809aec  sw          $zero, -0x6514($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941420), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68F8u;
    newrndseed_0x2b68f8(rdram, ctx, runtime); return;
    ctx->pc = 0x202D88u;
label_202d88:
    // 0x202d88: 0x3e00008  jr          $ra
    ctx->pc = 0x202D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D90u;
}

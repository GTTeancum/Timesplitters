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

// Function: mcseqPollLoop
// Address: 0x244d18 - 0x244d48
void mcseqPollLoop_0x244d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqPollLoop_0x244d18");
#endif

    ctx->pc = 0x244d18u;

    // 0x244d18: 0x8f83b818  lw          $v1, -0x47E8($gp)
    ctx->pc = 0x244d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x244d1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x244d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244d20: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x244D20u;
    {
        const bool branch_taken_0x244d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D20u;
        // 0x244d24: 0xaf80b7dc  sw          $zero, -0x4824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d20) {
            ctx->pc = 0x244D3Cu;
            goto label_244d3c;
        }
    }
    ctx->pc = 0x244D28u;
    // 0x244d28: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x244d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x244d2c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x244d30: 0xaf82a0a8  sw          $v0, -0x5F58($gp)
    ctx->pc = 0x244d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
    // 0x244d34: 0x3e00008  jr          $ra
    ctx->pc = 0x244D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D34u;
        // 0x244d38: 0xaf83b7e0  sw          $v1, -0x4820($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D3Cu;
label_244d3c:
    // 0x244d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244d40: 0x3e00008  jr          $ra
    ctx->pc = 0x244D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D40u;
        // 0x244d44: 0xaf82b7dc  sw          $v0, -0x4824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D48u;
}

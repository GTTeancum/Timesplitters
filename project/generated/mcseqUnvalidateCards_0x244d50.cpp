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

// Function: mcseqUnvalidateCards
// Address: 0x244d50 - 0x244da0
void mcseqUnvalidateCards_0x244d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqUnvalidateCards_0x244d50");
#endif

    switch (ctx->pc) {
        case 0x244d68u: goto label_244d68;
        default: break;
    }

    ctx->pc = 0x244d50u;

    // 0x244d50: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x244d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x244d54: 0x8f84a0c8  lw          $a0, -0x5F38($gp)
    ctx->pc = 0x244d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x244d58: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x244d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x244d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x244d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244d60: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x244d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x244d64: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x244d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_244d68:
    // 0x244d68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x244d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x244d6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x244d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x244d70: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x244d74: 0x0  nop
    ctx->pc = 0x244d74u;
    // NOP
    // 0x244d78: 0x0  nop
    ctx->pc = 0x244d78u;
    // NOP
    // 0x244d7c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x244D7Cu;
    {
        const bool branch_taken_0x244d7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x244d7c) {
            ctx->pc = 0x244D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244d68;
        }
    }
    ctx->pc = 0x244D84u;
    // 0x244d84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x244d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x244d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x244d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244d8c: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x244d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x244d90: 0xaf83b818  sw          $v1, -0x47E8($gp)
    ctx->pc = 0x244d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 3));
    // 0x244d94: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x244d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x244d98: 0x3e00008  jr          $ra
    ctx->pc = 0x244D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D98u;
        // 0x244d9c: 0xaf84a0c8  sw          $a0, -0x5F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244DA0u;
}

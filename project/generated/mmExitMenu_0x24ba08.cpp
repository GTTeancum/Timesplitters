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

// Function: mmExitMenu
// Address: 0x24ba08 - 0x24ba78
void mmExitMenu_0x24ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmExitMenu_0x24ba08");
#endif

    ctx->pc = 0x24ba08u;

    // 0x24ba08: 0x8f86a004  lw          $a2, -0x5FFC($gp)
    ctx->pc = 0x24ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24ba0c: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x24ba0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ba10: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x24ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x24ba14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ba18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ba1c: 0xa4650008  sh          $a1, 0x8($v1)
    ctx->pc = 0x24ba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x24ba20: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24BA20u;
    {
        const bool branch_taken_0x24ba20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA20u;
        // 0x24ba24: 0xacc20014  sw          $v0, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba20) {
            ctx->pc = 0x24BA54u;
            goto label_24ba54;
        }
    }
    ctx->pc = 0x24BA28u;
    // 0x24ba28: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x24ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24ba2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24ba30: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x24ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24ba34: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x24ba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x24ba38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x24ba38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24ba3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24ba40: 0xaf84a0d8  sw          $a0, -0x5F28($gp)
    ctx->pc = 0x24ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 4));
    // 0x24ba44: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x24ba44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x24ba48: 0x2463fe68  addiu       $v1, $v1, -0x198
    ctx->pc = 0x24ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966888));
    // 0x24ba4c: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x24ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x24ba50: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x24ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
label_24ba54:
    // 0x24ba54: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24ba58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24ba58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24ba5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BA5Cu;
    {
        const bool branch_taken_0x24ba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA5Cu;
        // 0x24ba60: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba5c) {
            ctx->pc = 0x24BA70u;
            goto label_24ba70;
        }
    }
    ctx->pc = 0x24BA64u;
    // 0x24ba64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x24ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24ba68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24ba6c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x24ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_24ba70:
    // 0x24ba70: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA78u;
}

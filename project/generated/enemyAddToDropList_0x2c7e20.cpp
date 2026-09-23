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

// Function: enemyAddToDropList
// Address: 0x2c7e20 - 0x2c7e58
void enemyAddToDropList_0x2c7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAddToDropList_0x2c7e20");
#endif

    ctx->pc = 0x2c7e20u;

    // 0x2c7e20: 0x8f88b4f0  lw          $t0, -0x4B10($gp)
    ctx->pc = 0x2c7e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
    // 0x2c7e24: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c7e28: 0x246323e8  addiu       $v1, $v1, 0x23E8
    ctx->pc = 0x2c7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9192));
    // 0x2c7e2c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2c7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2c7e30: 0x29070014  slti        $a3, $t0, 0x14
    ctx->pc = 0x2c7e30u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c7e34: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2c7e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7e3c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2c7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2c7e40: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7E40u;
    {
        const bool branch_taken_0x2c7e40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E40u;
        // 0x2c7e44: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e40) {
            ctx->pc = 0x2C7E50u;
            goto label_2c7e50;
        }
    }
    ctx->pc = 0x2C7E48u;
    // 0x2c7e48: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c7e4c: 0xaf82b4f0  sw          $v0, -0x4B10($gp)
    ctx->pc = 0x2c7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948080), GPR_U32(ctx, 2));
label_2c7e50:
    // 0x2c7e50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7E58u;
}

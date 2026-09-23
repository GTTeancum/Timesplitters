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

// Function: enemyAddToEscortList
// Address: 0x2c7ef0 - 0x2c7f20
void enemyAddToEscortList_0x2c7ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAddToEscortList_0x2c7ef0");
#endif

    ctx->pc = 0x2c7ef0u;

    // 0x2c7ef0: 0x8f86b4f8  lw          $a2, -0x4B08($gp)
    ctx->pc = 0x2c7ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948088)));
    // 0x2c7ef4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c7ef8: 0x24422010  addiu       $v0, $v0, 0x2010
    ctx->pc = 0x2c7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
    // 0x2c7efc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2c7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c7f00: 0x28c50005  slti        $a1, $a2, 0x5
    ctx->pc = 0x2c7f00u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c7f04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7f08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7F08u;
    {
        const bool branch_taken_0x2c7f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F08u;
        // 0x2c7f0c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f08) {
            ctx->pc = 0x2C7F18u;
            goto label_2c7f18;
        }
    }
    ctx->pc = 0x2C7F10u;
    // 0x2c7f10: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2c7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c7f14: 0xaf82b4f8  sw          $v0, -0x4B08($gp)
    ctx->pc = 0x2c7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948088), GPR_U32(ctx, 2));
label_2c7f18:
    // 0x2c7f18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7F20u;
}

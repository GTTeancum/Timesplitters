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

// Function: enemyAddToBagList
// Address: 0x2c7db0 - 0x2c7de8
void enemyAddToBagList_0x2c7db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAddToBagList_0x2c7db0");
#endif

    ctx->pc = 0x2c7db0u;

    // 0x2c7db0: 0x8f88b4e8  lw          $t0, -0x4B18($gp)
    ctx->pc = 0x2c7db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948072)));
    // 0x2c7db4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2c7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2c7db8: 0x24632028  addiu       $v1, $v1, 0x2028
    ctx->pc = 0x2c7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8232));
    // 0x2c7dbc: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2c7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2c7dc0: 0x29070006  slti        $a3, $t0, 0x6
    ctx->pc = 0x2c7dc0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c7dc4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2c7dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7dcc: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2c7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2c7dd0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7DD0u;
    {
        const bool branch_taken_0x2c7dd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DD0u;
        // 0x2c7dd4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7dd0) {
            ctx->pc = 0x2C7DE0u;
            goto label_2c7de0;
        }
    }
    ctx->pc = 0x2C7DD8u;
    // 0x2c7dd8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2c7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c7ddc: 0xaf82b4e8  sw          $v0, -0x4B18($gp)
    ctx->pc = 0x2c7ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948072), GPR_U32(ctx, 2));
label_2c7de0:
    // 0x2c7de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7DE8u;
}

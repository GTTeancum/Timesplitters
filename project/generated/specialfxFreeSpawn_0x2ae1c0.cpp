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

// Function: specialfxFreeSpawn
// Address: 0x2ae1c0 - 0x2ae1d4
void specialfxFreeSpawn_0x2ae1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxFreeSpawn_0x2ae1c0");
#endif

    ctx->pc = 0x2ae1c0u;

    // 0x2ae1c0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE1C0u;
    {
        const bool branch_taken_0x2ae1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1C0u;
        // 0x2ae1c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1c0) {
            ctx->pc = 0x2AE1CCu;
            goto label_2ae1cc;
        }
    }
    ctx->pc = 0x2AE1C8u;
    // 0x2ae1c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ae1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2ae1cc:
    // 0x2ae1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE1D4u;
}

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

// Function: mcseqAddOption
// Address: 0x244cf8 - 0x244d18
void mcseqAddOption_0x244cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqAddOption_0x244cf8");
#endif

    ctx->pc = 0x244cf8u;

    // 0x244cf8: 0x8f82b7e4  lw          $v0, -0x481C($gp)
    ctx->pc = 0x244cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948836)));
    // 0x244cfc: 0x2785b7e8  addiu       $a1, $gp, -0x4818
    ctx->pc = 0x244cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948840));
    // 0x244d00: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x244d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244d04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x244d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x244d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x244d0c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x244d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x244d10: 0x3e00008  jr          $ra
    ctx->pc = 0x244D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D10u;
        // 0x244d14: 0xaf82b7e4  sw          $v0, -0x481C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D18u;
}

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

// Function: ipIsFisheyeOn
// Address: 0x2965f0 - 0x296610
void ipIsFisheyeOn_0x2965f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipIsFisheyeOn_0x2965f0");
#endif

    ctx->pc = 0x2965f0u;

    // 0x2965f0: 0x8f84b234  lw          $a0, -0x4DCC($gp)
    ctx->pc = 0x2965f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2965f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2965f8: 0x244296c0  addiu       $v0, $v0, -0x6940
    ctx->pc = 0x2965f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x2965fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2965fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x296600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x296604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296608: 0x3e00008  jr          $ra
    ctx->pc = 0x296608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296608u;
        // 0x29660c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296610u;
}

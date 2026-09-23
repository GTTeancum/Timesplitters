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

// Function: anim_PopModelview
// Address: 0x2157e8 - 0x2157fc
void anim_PopModelview_0x2157e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anim_PopModelview_0x2157e8");
#endif

    ctx->pc = 0x2157e8u;

    // 0x2157e8: 0x8f829d48  lw          $v0, -0x62B8($gp)
    ctx->pc = 0x2157e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942024)));
    // 0x2157ec: 0xaf809d4c  sw          $zero, -0x62B4($gp)
    ctx->pc = 0x2157ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942028), GPR_U32(ctx, 0));
    // 0x2157f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2157f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2157f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2157F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157F4u;
        // 0x2157f8: 0xaf829d48  sw          $v0, -0x62B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2157FCu;
}

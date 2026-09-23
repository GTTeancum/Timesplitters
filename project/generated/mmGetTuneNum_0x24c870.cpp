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

// Function: mmGetTuneNum
// Address: 0x24c870 - 0x24c88c
void mmGetTuneNum_0x24c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmGetTuneNum_0x24c870");
#endif

    ctx->pc = 0x24c870u;

    // 0x24c870: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24c874: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24c874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24c878: 0x8c446800  lw          $a0, 0x6800($v0)
    ctx->pc = 0x24c878u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x356800u));
    // 0x24c87c: 0x246366f8  addiu       $v1, $v1, 0x66F8
    ctx->pc = 0x24c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26360));
    // 0x24c880: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24c884: 0x3e00008  jr          $ra
    ctx->pc = 0x24C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C884u;
        // 0x24c888: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C88Cu;
}

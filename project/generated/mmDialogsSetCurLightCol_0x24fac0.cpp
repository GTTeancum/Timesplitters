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

// Function: mmDialogsSetCurLightCol
// Address: 0x24fac0 - 0x24fae0
void mmDialogsSetCurLightCol_0x24fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDialogsSetCurLightCol_0x24fac0");
#endif

    ctx->pc = 0x24fac0u;

    // 0x24fac0: 0x8f82a224  lw          $v0, -0x5DDC($gp)
    ctx->pc = 0x24fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943268)));
    // 0x24fac4: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x24fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x24fac8: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x24fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
    // 0x24facc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24faccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24fad0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24fad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24fad8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAD8u;
        // 0x24fadc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FAE0u;
}

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

// Function: mmDialogsGetCurLightColRGB
// Address: 0x24fae0 - 0x24fb00
void mmDialogsGetCurLightColRGB_0x24fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmDialogsGetCurLightColRGB_0x24fae0");
#endif

    ctx->pc = 0x24fae0u;

    // 0x24fae0: 0x8f83a224  lw          $v1, -0x5DDC($gp)
    ctx->pc = 0x24fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943268)));
    // 0x24fae4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x24fae8: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x24fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x24faec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24faecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x24faf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24faf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24faf8: 0x3e00008  jr          $ra
    ctx->pc = 0x24FAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAF8u;
        // 0x24fafc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FB00u;
}

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

// Function: guiGetImageWidth
// Address: 0x22e4e8 - 0x22e518
void guiGetImageWidth_0x22e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiGetImageWidth_0x22e4e8");
#endif

    ctx->pc = 0x22e4e8u;

    // 0x22e4e8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22e4ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22e4f0: 0x24420910  addiu       $v0, $v0, 0x910
    ctx->pc = 0x22e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2320));
    // 0x22e4f4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x22e4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22e4f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e4fc: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x22e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22e500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e504: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22e508: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x22e508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e50c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e510: 0x3e00008  jr          $ra
    ctx->pc = 0x22E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E510u;
        // 0x22e514: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E518u;
}

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

// Function: guiGetImageHeight
// Address: 0x22e518 - 0x22e548
void guiGetImageHeight_0x22e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("guiGetImageHeight_0x22e518");
#endif

    ctx->pc = 0x22e518u;

    // 0x22e518: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22e518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22e51c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22e520: 0x24420910  addiu       $v0, $v0, 0x910
    ctx->pc = 0x22e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2320));
    // 0x22e524: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22e528: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e52c: 0x8f85b498  lw          $a1, -0x4B68($gp)
    ctx->pc = 0x22e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
    // 0x22e530: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e534: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22e538: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x22e538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e53c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e540: 0x3e00008  jr          $ra
    ctx->pc = 0x22E540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E540u;
        // 0x22e544: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E548u;
}

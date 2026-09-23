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

// Function: stringeditSet
// Address: 0x22fed8 - 0x22fef4
void stringeditSet_0x22fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stringeditSet_0x22fed8");
#endif

    ctx->pc = 0x22fed8u;

    // 0x22fed8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22fedc: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22fee0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x22fee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22fee4: 0x244209a8  addiu       $v0, $v0, 0x9A8
    ctx->pc = 0x22fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2472));
    // 0x22fee8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22feec: 0x3e00008  jr          $ra
    ctx->pc = 0x22FEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEECu;
        // 0x22fef0: 0xaf84a034  sw          $a0, -0x5FCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FEF4u;
}

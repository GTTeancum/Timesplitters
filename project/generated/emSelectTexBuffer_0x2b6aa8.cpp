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

// Function: emSelectTexBuffer
// Address: 0x2b6aa8 - 0x2b6ac4
void emSelectTexBuffer_0x2b6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emSelectTexBuffer_0x2b6aa8");
#endif

    ctx->pc = 0x2b6aa8u;

    // 0x2b6aa8: 0x24031a18  addiu       $v1, $zero, 0x1A18
    ctx->pc = 0x2b6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6680));
    // 0x2b6aac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b6ab0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b6ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6ab4: 0x24428150  addiu       $v0, $v0, -0x7EB0
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
    // 0x2b6ab8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6abc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6ABCu;
        // 0x2b6ac0: 0xaf84b498  sw          $a0, -0x4B68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294947992), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6AC4u;
}

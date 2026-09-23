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

// Function: dlSetClipTag
// Address: 0x2b7c98 - 0x2b7cd0
void dlSetClipTag_0x2b7c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSetClipTag_0x2b7c98");
#endif

    ctx->pc = 0x2b7c98u;

    // 0x2b7c98: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b7c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7c9c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7ca0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2b7ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b7ca4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b7ca8: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x2b7ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b7cac: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x2b7cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x2b7cb0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b7cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7cb4: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7cb8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b7cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b7cbc: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2b7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7cc0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2b7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2b7cc4: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x2b7cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b7cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CC8u;
        // 0x2b7ccc: 0xaf8593a0  sw          $a1, -0x6C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7CD0u;
}

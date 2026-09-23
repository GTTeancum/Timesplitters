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

// Function: linkDisable
// Address: 0x264e68 - 0x264e90
void linkDisable_0x264e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("linkDisable_0x264e68");
#endif

    ctx->pc = 0x264e68u;

    // 0x264e68: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x264e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x264e6c: 0x8f85a2f0  lw          $a1, -0x5D10($gp)
    ctx->pc = 0x264e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x264e70: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x264e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x264e74: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x264e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x264e78: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x264e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x264e7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x264e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x264e80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x264e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264e84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x264e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x264e88: 0x3e00008  jr          $ra
    ctx->pc = 0x264E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E88u;
        // 0x264e8c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264E90u;
}

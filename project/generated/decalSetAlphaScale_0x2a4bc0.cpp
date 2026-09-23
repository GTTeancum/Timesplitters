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

// Function: decalSetAlphaScale
// Address: 0x2a4bc0 - 0x2a4bd8
void decalSetAlphaScale_0x2a4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalSetAlphaScale_0x2a4bc0");
#endif

    ctx->pc = 0x2a4bc0u;

    // 0x2a4bc0: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2a4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a4bc4: 0x8f83b300  lw          $v1, -0x4D00($gp)
    ctx->pc = 0x2a4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947584)));
    // 0x2a4bc8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a4bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a4bcc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BD0u;
        // 0x2a4bd4: 0xe48c00dc  swc1        $f12, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4BD8u;
}

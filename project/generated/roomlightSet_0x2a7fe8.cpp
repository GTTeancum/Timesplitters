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

// Function: roomlightSet
// Address: 0x2a7fe8 - 0x2a8010
void roomlightSet_0x2a7fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("roomlightSet_0x2a7fe8");
#endif

    ctx->pc = 0x2a7fe8u;

    // 0x2a7fe8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2a7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a7fec: 0x8f82b32c  lw          $v0, -0x4CD4($gp)
    ctx->pc = 0x2a7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947628)));
    // 0x2a7ff0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2a7ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a7ff4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a7ff8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x2a7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x2a7ffc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a8000: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x2a8000u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a8004: 0xe44d0008  swc1        $f13, 0x8($v0)
    ctx->pc = 0x2a8004u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a8008: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8008u;
        // 0x2a800c: 0xac460010  sw          $a2, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8010u;
}

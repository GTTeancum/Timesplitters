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

// Function: gunSetPlayerZoom
// Address: 0x2922b0 - 0x2922d8
void gunSetPlayerZoom_0x2922b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunSetPlayerZoom_0x2922b0");
#endif

    ctx->pc = 0x2922b0u;

    // 0x2922b0: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x2922b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2922b4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2922b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2922b8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2922b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2922bc: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x2922c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2922c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2922c4: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2922c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2922c8: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x2922c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x2922cc: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2922ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2922d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2922D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2922D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922D0u;
        // 0x2922d4: 0xe4810110  swc1        $f1, 0x110($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2922D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2922D8u;
}

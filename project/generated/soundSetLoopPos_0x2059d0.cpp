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

// Function: soundSetLoopPos
// Address: 0x2059d0 - 0x205a08
void soundSetLoopPos_0x2059d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundSetLoopPos_0x2059d0");
#endif

    ctx->pc = 0x2059d0u;

    // 0x2059d0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2059d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2059d4: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x2059d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x2059d8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2059d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2059dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2059dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2059e0: 0x24421768  addiu       $v0, $v0, 0x1768
    ctx->pc = 0x2059e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5992));
    // 0x2059e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2059e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2059e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2059e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2059ec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2059ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2059f0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2059f4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2059f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2059f8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2059f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2059fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2059fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205a00: 0x3e00008  jr          $ra
    ctx->pc = 0x205A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A00u;
        // 0x205a04: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A08u;
}

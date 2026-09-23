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

// Function: quaternionInvert
// Address: 0x2b4780 - 0x2b47b0
void quaternionInvert_0x2b4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionInvert_0x2b4780");
#endif

    ctx->pc = 0x2b4780u;

    // 0x2b4780: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4784: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b4784u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b4788: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b4788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b478c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4790: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2b4790u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2b4794: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b4794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b4798: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b4798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b479c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b479cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b47a0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b47a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b47a4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2b47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b47a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B47A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47A8u;
        // 0x2b47ac: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B47A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B47B0u;
}

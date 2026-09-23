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

// Function: matrixDoScaleX
// Address: 0x2b4ee8 - 0x2b4f1c
void matrixDoScaleX_0x2b4ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixDoScaleX_0x2b4ee8");
#endif

    ctx->pc = 0x2b4ee8u;

    // 0x2b4ee8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2b4ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4eec: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2b4eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4ef0: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2b4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4ef4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2b4ef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2b4ef8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2b4ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4efc: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x2b4efcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2b4f00: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x2b4f00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x2b4f04: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2b4f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2b4f08: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2b4f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b4f0c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b4f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b4f10: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x2b4f10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2b4f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F14u;
        // 0x2b4f18: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F1Cu;
}

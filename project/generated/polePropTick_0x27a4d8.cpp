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

// Function: polePropTick
// Address: 0x27a4d8 - 0x27a518
void polePropTick_0x27a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("polePropTick_0x27a4d8");
#endif

    ctx->pc = 0x27a4d8u;

    // 0x27a4d8: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x27a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a4dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27a4e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a4e4: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x27a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27a4e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27a4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27a4ec: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27a4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a4f4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x27a4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27a4f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a4fc: 0x0  nop
    ctx->pc = 0x27a4fcu;
    // NOP
    // 0x27a500: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A500u;
    {
        const bool branch_taken_0x27a500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A500u;
        // 0x27a504: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a500) {
            ctx->pc = 0x27A510u;
            goto label_27a510;
        }
    }
    ctx->pc = 0x27A508u;
    // 0x27a508: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27a508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27a50c: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x27a50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_27a510:
    // 0x27a510: 0x3e00008  jr          $ra
    ctx->pc = 0x27A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A518u;
}

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

// Function: mallfan2PropTick
// Address: 0x2791f8 - 0x27923c
void mallfan2PropTick_0x2791f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mallfan2PropTick_0x2791f8");
#endif

    ctx->pc = 0x2791f8u;

    // 0x2791f8: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2791f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2791fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2791fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x279200: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279204: 0xc4830058  lwc1        $f3, 0x58($a0)
    ctx->pc = 0x279204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x279208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27920c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27920cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279210: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x279210u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x279214: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x279214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279218: 0x0  nop
    ctx->pc = 0x279218u;
    // NOP
    // 0x27921c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27921Cu;
    {
        const bool branch_taken_0x27921c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27921Cu;
        // 0x279220: 0xe4830058  swc1        $f3, 0x58($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27921c) {
            ctx->pc = 0x279234u;
            goto label_279234;
        }
    }
    ctx->pc = 0x279224u;
    // 0x279224: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x279224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x279228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27922c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27922cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x279230: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x279230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_279234:
    // 0x279234: 0x3e00008  jr          $ra
    ctx->pc = 0x279234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27923Cu;
}

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

// Function: mallfan1PropTick
// Address: 0x2791b0 - 0x2791f4
void mallfan1PropTick_0x2791b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mallfan1PropTick_0x2791b0");
#endif

    ctx->pc = 0x2791b0u;

    // 0x2791b0: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2791b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2791b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2791b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2791b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2791b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2791bc: 0xc4830058  lwc1        $f3, 0x58($a0)
    ctx->pc = 0x2791bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2791c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2791c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2791c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2791c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2791c8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2791c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2791cc: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2791ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2791d0: 0x0  nop
    ctx->pc = 0x2791d0u;
    // NOP
    // 0x2791d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2791D4u;
    {
        const bool branch_taken_0x2791d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2791D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791D4u;
        // 0x2791d8: 0xe4830058  swc1        $f3, 0x58($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791d4) {
            ctx->pc = 0x2791ECu;
            goto label_2791ec;
        }
    }
    ctx->pc = 0x2791DCu;
    // 0x2791dc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2791dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2791e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2791e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2791e4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2791e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2791e8: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2791e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_2791ec:
    // 0x2791ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2791ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2791ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791F4u;
}

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

// Function: scannerPropTick
// Address: 0x279058 - 0x2790a0
void scannerPropTick_0x279058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scannerPropTick_0x279058");
#endif

    ctx->pc = 0x279058u;

    // 0x279058: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x279058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27905c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279060: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x279060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x279064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279068: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x279068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27906c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27906cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279070: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x279070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x279074: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x279074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x279078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27907c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x27907cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x279080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x279080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279084: 0x0  nop
    ctx->pc = 0x279084u;
    // NOP
    // 0x279088: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x279088u;
    {
        const bool branch_taken_0x279088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279088u;
        // 0x27908c: 0xe4800048  swc1        $f0, 0x48($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279088) {
            ctx->pc = 0x279098u;
            goto label_279098;
        }
    }
    ctx->pc = 0x279090u;
    // 0x279090: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x279090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x279094: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x279094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_279098:
    // 0x279098: 0x3e00008  jr          $ra
    ctx->pc = 0x279098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2790A0u;
}

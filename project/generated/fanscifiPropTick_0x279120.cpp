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

// Function: fanscifiPropTick
// Address: 0x279120 - 0x279164
void fanscifiPropTick_0x279120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fanscifiPropTick_0x279120");
#endif

    ctx->pc = 0x279120u;

    // 0x279120: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x279120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279124: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x279124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x279128: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27912c: 0xc4830048  lwc1        $f3, 0x48($a0)
    ctx->pc = 0x27912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x279130: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279134: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x279134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279138: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x279138u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x27913c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x27913cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279140: 0x0  nop
    ctx->pc = 0x279140u;
    // NOP
    // 0x279144: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x279144u;
    {
        const bool branch_taken_0x279144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279144u;
        // 0x279148: 0xe4830048  swc1        $f3, 0x48($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279144) {
            ctx->pc = 0x27915Cu;
            goto label_27915c;
        }
    }
    ctx->pc = 0x27914Cu;
    // 0x27914c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x279150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279154: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x279154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x279158: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x279158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_27915c:
    // 0x27915c: 0x3e00008  jr          $ra
    ctx->pc = 0x27915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279164u;
}

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

// Function: fanChinesePropTick
// Address: 0x279168 - 0x2791ac
void fanChinesePropTick_0x279168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fanChinesePropTick_0x279168");
#endif

    ctx->pc = 0x279168u;

    // 0x279168: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x279168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27916c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x27916cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x279170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279174: 0xc483004c  lwc1        $f3, 0x4C($a0)
    ctx->pc = 0x279174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x279178: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27917c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27917cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279180: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x279180u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x279184: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x279184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279188: 0x0  nop
    ctx->pc = 0x279188u;
    // NOP
    // 0x27918c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27918Cu;
    {
        const bool branch_taken_0x27918c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27918Cu;
        // 0x279190: 0xe483004c  swc1        $f3, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27918c) {
            ctx->pc = 0x2791A4u;
            goto label_2791a4;
        }
    }
    ctx->pc = 0x279194u;
    // 0x279194: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x279194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x279198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27919c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27919cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2791a0: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x2791a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_2791a4:
    // 0x2791a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2791A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2791A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791ACu;
}

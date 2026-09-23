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

// Function: quaternionLerp
// Address: 0x2b4608 - 0x2b4678
void quaternionLerp_0x2b4608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionLerp_0x2b4608");
#endif

    ctx->pc = 0x2b4608u;

    // 0x2b4608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b460c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b460cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b4610: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b4610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4614: 0x460c18c1  sub.s       $f3, $f3, $f12
    ctx->pc = 0x2b4614u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x2b4618: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b4618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b461c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2b461cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b4620: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b4620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b4624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4628: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b4628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b462c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4630: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b4630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4634: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b4634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b4638: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b4638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b463c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b463cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b4640: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2b4640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b4644: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2b4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4648: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b464c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b464cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b4650: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b4650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b4654: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b4654u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b4658: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x2b4658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2b465c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2b465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4660: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2b4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4664: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b4664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b4668: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2b4668u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2b466c: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x2b466cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x2b4670: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4670u;
        // 0x2b4674: 0xe4c3000c  swc1        $f3, 0xC($a2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4678u;
}

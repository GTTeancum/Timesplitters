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

// Function: quaternionToMatrix
// Address: 0x2b3f90 - 0x2b4080
void quaternionToMatrix_0x2b3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionToMatrix_0x2b3f90");
#endif

    ctx->pc = 0x2b3f90u;

    // 0x2b3f90: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2b3f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b3f94: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x2b3f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b3f98: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2b3f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b3f9c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2b3f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3fa0: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x2b3fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2b3fa4: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x2b3fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b3fa8: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2b3fa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b3fac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b3facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b3fb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b3fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b3fb4: 0x460631c2  mul.s       $f7, $f6, $f6
    ctx->pc = 0x2b3fb4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2b3fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3fbc: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2b3fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2b3fc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b3fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b3fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3fc8: 0xe48a003c  swc1        $f10, 0x3C($a0)
    ctx->pc = 0x2b3fc8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2b3fcc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2b3fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2b3fd0: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2b3fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2b3fd4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2b3fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2b3fd8: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2b3fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2b3fdc: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2b3fdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2b3fe0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2b3fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b3fe4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x2b3fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2b3fe8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2b3fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2b3fec: 0x0  nop
    ctx->pc = 0x2b3fecu;
    // NOP
    // 0x2b3ff0: 0x0  nop
    ctx->pc = 0x2b3ff0u;
    // NOP
    // 0x2b3ff4: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x2b3ff4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x2b3ff8: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x2b3ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b3ffc: 0x46034042  mul.s       $f1, $f8, $f3
    ctx->pc = 0x2b3ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x2b4000: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2b4000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b4004: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b4004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b4008: 0x46014142  mul.s       $f5, $f8, $f1
    ctx->pc = 0x2b4008u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2b400c: 0x460321c2  mul.s       $f7, $f4, $f3
    ctx->pc = 0x2b400cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b4010: 0x460032c2  mul.s       $f11, $f6, $f0
    ctx->pc = 0x2b4010u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b4014: 0x46002242  mul.s       $f9, $f4, $f0
    ctx->pc = 0x2b4014u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b4018: 0x46053b00  add.s       $f12, $f7, $f5
    ctx->pc = 0x2b4018u;
    ctx->f[12] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x2b401c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2b401cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2b4020: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2b4020u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2b4024: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2b4024u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2b4028: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2b4028u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2b402c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2b402cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2b4030: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x2b4030u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2b4034: 0x46064800  add.s       $f0, $f9, $f6
    ctx->pc = 0x2b4034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x2b4038: 0x460b2041  sub.s       $f1, $f4, $f11
    ctx->pc = 0x2b4038u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x2b403c: 0x46034081  sub.s       $f2, $f8, $f3
    ctx->pc = 0x2b403cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x2b4040: 0x46055141  sub.s       $f5, $f10, $f5
    ctx->pc = 0x2b4040u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x2b4044: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b4044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2b4048: 0x460751c1  sub.s       $f7, $f10, $f7
    ctx->pc = 0x2b4048u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x2b404c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2b404cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b4050: 0x460c5281  sub.s       $f10, $f10, $f12
    ctx->pc = 0x2b4050u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[12]);
    // 0x2b4054: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x2b4054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2b4058: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x2b4058u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x2b405c: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x2b405cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b4060: 0x46064a41  sub.s       $f9, $f9, $f6
    ctx->pc = 0x2b4060u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x2b4064: 0xe4870014  swc1        $f7, 0x14($a0)
    ctx->pc = 0x2b4064u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b4068: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x2b4068u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x2b406c: 0xe48a0028  swc1        $f10, 0x28($a0)
    ctx->pc = 0x2b406cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2b4070: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2b4070u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b4074: 0xe4890008  swc1        $f9, 0x8($a0)
    ctx->pc = 0x2b4074u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b4078: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4078u;
        // 0x2b407c: 0xe4880018  swc1        $f8, 0x18($a0) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4080u;
}

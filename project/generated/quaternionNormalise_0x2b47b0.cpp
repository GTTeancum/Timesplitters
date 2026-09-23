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

// Function: quaternionNormalise
// Address: 0x2b47b0 - 0x2b4864
void quaternionNormalise_0x2b47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionNormalise_0x2b47b0");
#endif

    switch (ctx->pc) {
        case 0x2b480cu: goto label_2b480c;
        default: break;
    }

    ctx->pc = 0x2b47b0u;

    // 0x2b47b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b47b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b47b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b47b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b47b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b47b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b47bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b47bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47c0: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x2b47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b47c4: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2b47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b47c8: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x2b47c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2b47cc: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2b47ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b47d0: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x2b47d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2b47d4: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x2b47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b47d8: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2b47d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2b47dc: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2b47dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b47e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b47e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b47e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b47e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b47e8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2b47e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b47ec: 0x0  nop
    ctx->pc = 0x2b47ecu;
    // NOP
    // 0x2b47f0: 0x0  nop
    ctx->pc = 0x2b47f0u;
    // NOP
    // 0x2b47f4: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2b47f4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2b47f8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2b47f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b47fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2B47FCu;
    {
        const bool branch_taken_0x2b47fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b47fc) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B4804u;
    // 0x2b4804: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2B4804u;
    SET_GPR_U32(ctx, 31, 0x2B480Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2B4804u, 0x2B480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B480Cu;
label_2b480c:
    // 0x2b480c: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x2b480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b4810: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2b4810u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4814: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2b4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b4818: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2b4818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b481c: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x2b481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2b4820:
    // 0x2b4820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b482c: 0x0  nop
    ctx->pc = 0x2b482cu;
    // NOP
    // 0x2b4830: 0x0  nop
    ctx->pc = 0x2b4830u;
    // NOP
    // 0x2b4834: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b4834u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2b4838: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x2b4838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b483c: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x2b483cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2b4840: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2b4840u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b4844: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2b4844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b4848: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2b4848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b484c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2b484cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2b4850: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2b4850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b4854: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b4854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b4858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b485c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B485Cu;
        // 0x2b4860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4864u;
}

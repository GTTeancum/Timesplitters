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

// Function: playerAutoAimCalc
// Address: 0x280780 - 0x280858
void playerAutoAimCalc_0x280780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerAutoAimCalc_0x280780");
#endif

    switch (ctx->pc) {
        case 0x2807e0u: goto label_2807e0;
        default: break;
    }

    ctx->pc = 0x280780u;

    // 0x280780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280784: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x280784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x280788: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x280788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28078c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28078cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280790: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x280790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x280794: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x280794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x280798: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x280798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28079c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x28079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2807a0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2807a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2807a4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2807a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2807a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2807a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2807ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2807acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2807b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2807b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2807b4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2807b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2807b8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2807b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2807bc: 0x0  nop
    ctx->pc = 0x2807bcu;
    // NOP
    // 0x2807c0: 0x0  nop
    ctx->pc = 0x2807c0u;
    // NOP
    // 0x2807c4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2807c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2807c8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2807c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2807cc: 0x0  nop
    ctx->pc = 0x2807ccu;
    // NOP
    // 0x2807d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2807D0u;
    {
        const bool branch_taken_0x2807d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2807D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807D0u;
        // 0x2807d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807d0) {
            ctx->pc = 0x2807E0u;
            goto label_2807e0;
        }
    }
    ctx->pc = 0x2807D8u;
    // 0x2807d8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2807D8u;
    SET_GPR_U32(ctx, 31, 0x2807E0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2807D8u, 0x2807E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807E0u;
label_2807e0:
    // 0x2807e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2807e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2807e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2807e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2807e8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2807e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2807ec: 0x0  nop
    ctx->pc = 0x2807ecu;
    // NOP
    // 0x2807f0: 0x0  nop
    ctx->pc = 0x2807f0u;
    // NOP
    // 0x2807f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2807f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2807f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2807f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2807fc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2807fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280800: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x280800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280804: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x280804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280808: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x280808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28080c: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x28080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x280810: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x280810u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x280814: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x280814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280818: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x280818u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28081c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28081cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280820: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x280820u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x280824: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x280824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280828: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x280828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28082c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x28082cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x280830: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x280830u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x280834: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x280834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x280838: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x280838u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x28083c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x28083cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x280840: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x280840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x280844: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x280844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x280848: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x280848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x28084c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28084cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280850: 0x3e00008  jr          $ra
    ctx->pc = 0x280850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280850u;
        // 0x280854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280858u;
}

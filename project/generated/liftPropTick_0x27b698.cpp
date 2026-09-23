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

// Function: liftPropTick
// Address: 0x27b698 - 0x27b9e0
void liftPropTick_0x27b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("liftPropTick_0x27b698");
#endif

    switch (ctx->pc) {
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b800u: goto label_27b800;
        case 0x27b808u: goto label_27b808;
        case 0x27b810u: goto label_27b810;
        case 0x27b898u: goto label_27b898;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b930u: goto label_27b930;
        case 0x27b994u: goto label_27b994;
        default: break;
    }

    ctx->pc = 0x27b698u;

    // 0x27b698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27b69c: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x27b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b6a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b6a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27b6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6ac: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27b6b0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27b6b4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27b6b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b6bc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x27b6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27b6c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b6c4: 0x8e110160  lw          $s1, 0x160($s0)
    ctx->pc = 0x27b6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x27b6c8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27b6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27b6cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27b6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b6d0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x27b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27b6d4: 0x0  nop
    ctx->pc = 0x27b6d4u;
    // NOP
    // 0x27b6d8: 0x0  nop
    ctx->pc = 0x27b6d8u;
    // NOP
    // 0x27b6dc: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x27b6dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x27b6e0: 0x5040008b  beql        $v0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x27B6E0u;
    {
        const bool branch_taken_0x27b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6e0) {
            ctx->pc = 0x27B6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B6E0u;
            // 0x27b6e4: 0x8f849f74  lw          $a0, -0x608C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B910u;
            goto label_27b910;
        }
    }
    ctx->pc = 0x27B6E8u;
    // 0x27b6e8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x27b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b6ec: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x27b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b6f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27b6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27b6f4: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x27b6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x27b6f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27b6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27b6fc: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x27b6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x27b700: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x27b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b704: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x27b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b708: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27b708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27b70c: 0xc604002c  lwc1        $f4, 0x2C($s0)
    ctx->pc = 0x27b70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b710: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27b710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27b714: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x27b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b718: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27b718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27b71c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x27b71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27b720: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x27b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b724: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x27b724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x27b728: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x27b728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27b72c: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x27b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b730: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x27b730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b734: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27B734u;
    {
        const bool branch_taken_0x27b734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b734) {
            ctx->pc = 0x27B74Cu;
            goto label_27b74c;
        }
    }
    ctx->pc = 0x27B73Cu;
    // 0x27b73c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x27b73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x27b740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b744: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x27b744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x27b748: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27b748u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27b74c:
    // 0x27b74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b754: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27B754u;
    {
        const bool branch_taken_0x27b754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b754) {
            ctx->pc = 0x27B778u;
            goto label_27b778;
        }
    }
    ctx->pc = 0x27B75Cu;
    // 0x27b75c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x27b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b760: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x27b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b764: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x27b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b768: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x27b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27b76c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x27b76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27b770: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x27B770u;
    {
        const bool branch_taken_0x27b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B770u;
        // 0x27b774: 0xe6020034  swc1        $f2, 0x34($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b770) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B778u;
label_27b778:
    // 0x27b778: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27b778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27b77c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b780: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b784: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x27B784u;
    {
        const bool branch_taken_0x27b784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b784) {
            ctx->pc = 0x27B7BCu;
            goto label_27b7bc;
        }
    }
    ctx->pc = 0x27B78Cu;
    // 0x27b78c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x27b790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b794: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b798: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27B798u;
    {
        const bool branch_taken_0x27b798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b798) {
            ctx->pc = 0x27B7BCu;
            goto label_27b7bc;
        }
    }
    ctx->pc = 0x27B7A0u;
    // 0x27b7a0: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x27b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b7a4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x27b7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27b7a8: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x27b7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b7ac: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x27b7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x27b7b0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x27b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b7b4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x27B7B4u;
    {
        const bool branch_taken_0x27b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7B4u;
        // 0x27b7b8: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7b4) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B7BCu;
label_27b7bc:
    // 0x27b7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b7c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b7c4: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x27B7C4u;
    {
        const bool branch_taken_0x27b7c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b7c4) {
            ctx->pc = 0x27B86Cu;
            goto label_27b86c;
        }
    }
    ctx->pc = 0x27B7CCu;
    // 0x27b7cc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27b7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27b7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b7d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b7d8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x27B7D8u;
    {
        const bool branch_taken_0x27b7d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b7d8) {
            ctx->pc = 0x27B86Cu;
            goto label_27b86c;
        }
    }
    ctx->pc = 0x27B7E0u;
    // 0x27b7e0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27b7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27b7e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b7e8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27B7E8u;
    SET_GPR_U32(ctx, 31, 0x27B7F0u);
    ctx->pc = 0x27B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7E8u;
    // 0x27b7ec: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27B7E8u, 0x27B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B7F0u;
label_27b7f0:
    // 0x27b7f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27b7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27b7f4: 0xdc258610  ld          $a1, -0x79F0($at)
    ctx->pc = 0x27b7f4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8610u));
    // 0x27b7f8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27B7F8u;
    SET_GPR_U32(ctx, 31, 0x27B800u);
    ctx->pc = 0x27B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B7F8u;
    // 0x27b7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27B7F8u, 0x27B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B800u;
label_27b800:
    // 0x27b800: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27B800u;
    SET_GPR_U32(ctx, 31, 0x27B808u);
    ctx->pc = 0x27B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B800u;
    // 0x27b804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27B800u, 0x27B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B808u;
label_27b808:
    // 0x27b808: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27B808u;
    SET_GPR_U32(ctx, 31, 0x27B810u);
    ctx->pc = 0x27B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B808u;
    // 0x27b80c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27B808u, 0x27B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B810u;
label_27b810:
    // 0x27b810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27b814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b818: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27b81c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27b81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27b820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b824: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x27b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27b828: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x27b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27b82c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x27b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b830: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27b830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27b834: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x27b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b838: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x27b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27b83c: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x27b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b840: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27b844: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x27b844u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x27b848: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x27b848u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x27b84c: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x27b84cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x27b850: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x27b850u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x27b854: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x27b854u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x27b858: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x27b858u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x27b85c: 0xe6020038  swc1        $f2, 0x38($s0)
    ctx->pc = 0x27b85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27b860: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x27b860u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27b864: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x27B864u;
    {
        const bool branch_taken_0x27b864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B864u;
        // 0x27b868: 0xe6050034  swc1        $f5, 0x34($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b864) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B86Cu;
label_27b86c:
    // 0x27b86c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x27b86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x27b870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b874: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b878: 0x0  nop
    ctx->pc = 0x27b878u;
    // NOP
    // 0x27b87c: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x27B87Cu;
    {
        const bool branch_taken_0x27b87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B87Cu;
        // 0x27b880: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b87c) {
            ctx->pc = 0x27B9BCu;
            goto label_27b9bc;
        }
    }
    ctx->pc = 0x27B884u;
    // 0x27b884: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27b884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27b888: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27b888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27b88c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b890: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x27B890u;
    SET_GPR_U32(ctx, 31, 0x27B898u);
    ctx->pc = 0x27B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B890u;
    // 0x27b894: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x27B890u, 0x27B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B898u;
label_27b898:
    // 0x27b898: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x27b898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27b89c: 0xdc258618  ld          $a1, -0x79E8($at)
    ctx->pc = 0x27b89cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A8618u));
    // 0x27b8a0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x27B8A0u;
    SET_GPR_U32(ctx, 31, 0x27B8A8u);
    ctx->pc = 0x27B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8A0u;
    // 0x27b8a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x27B8A0u, 0x27B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8A8u;
label_27b8a8:
    // 0x27b8a8: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x27B8A8u;
    SET_GPR_U32(ctx, 31, 0x27B8B0u);
    ctx->pc = 0x27B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8A8u;
    // 0x27b8ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x27B8A8u, 0x27B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8B0u;
label_27b8b0:
    // 0x27b8b0: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27B8B0u;
    SET_GPR_U32(ctx, 31, 0x27B8B8u);
    ctx->pc = 0x27B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B8B0u;
    // 0x27b8b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27B8B0u, 0x27B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8B8u;
label_27b8b8:
    // 0x27b8b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b8bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27b8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b8c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27b8c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27b8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27b8c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27b8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b8cc: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x27b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27b8d0: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x27b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27b8d4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x27b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b8d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27b8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27b8dc: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x27b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b8e0: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x27b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27b8e4: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x27b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b8e8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27b8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27b8ec: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x27b8ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x27b8f0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x27b8f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x27b8f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27b8f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27b8f8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x27b8f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x27b8fc: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x27b8fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x27b900: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x27b900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27b904: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x27b904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27b908: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27B908u;
    {
        const bool branch_taken_0x27b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B908u;
        // 0x27b90c: 0xe6040034  swc1        $f4, 0x34($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b908) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B910u;
label_27b910:
    // 0x27b910: 0x18800029  blez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27B910u;
    {
        const bool branch_taken_0x27b910 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x27B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B910u;
        // 0x27b914: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b910) {
            ctx->pc = 0x27B9B8u;
            goto label_27b9b8;
        }
    }
    ctx->pc = 0x27B918u;
    // 0x27b918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b91c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27b91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27b920: 0x24152000  addiu       $s5, $zero, 0x2000
    ctx->pc = 0x27b920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x27b924: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x27b924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27b928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b92c: 0x0  nop
    ctx->pc = 0x27b92cu;
    // NOP
label_27b930:
    // 0x27b930: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x27b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x27b934: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x27b934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x27b938: 0x8c620a9c  lw          $v0, 0xA9C($v1)
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x27b93c: 0x5055001b  beql        $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x27B93Cu;
    {
        const bool branch_taken_0x27b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x27b93c) {
            ctx->pc = 0x27B940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B93Cu;
            // 0x27b940: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B9ACu;
            goto label_27b9ac;
        }
    }
    ctx->pc = 0x27B944u;
    // 0x27b944: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x27B944u;
    {
        const bool branch_taken_0x27b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b944) {
            ctx->pc = 0x27B948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B944u;
            // 0x27b948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B9ACu;
            goto label_27b9ac;
        }
    }
    ctx->pc = 0x27B94Cu;
    // 0x27b94c: 0x8c620bcc  lw          $v0, 0xBCC($v1)
    ctx->pc = 0x27b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3020)));
    // 0x27b950: 0xc6030030  lwc1        $f3, 0x30($s0)
    ctx->pc = 0x27b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27b954: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x27b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b958: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x27b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b95c: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x27b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27b960: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27b960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27b964: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27b964u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27b968: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27b968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27b96c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x27b96cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27b970: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x27b970u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b974: 0x0  nop
    ctx->pc = 0x27b974u;
    // NOP
    // 0x27b978: 0x0  nop
    ctx->pc = 0x27b978u;
    // NOP
    // 0x27b97c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x27b97cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x27b980: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x27b980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b984: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x27B984u;
    {
        const bool branch_taken_0x27b984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b984) {
            ctx->pc = 0x27B994u;
            goto label_27b994;
        }
    }
    ctx->pc = 0x27B98Cu;
    // 0x27b98c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27B98Cu;
    SET_GPR_U32(ctx, 31, 0x27B994u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27B98Cu, 0x27B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B994u;
label_27b994:
    // 0x27b994: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27b994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b998: 0x0  nop
    ctx->pc = 0x27b998u;
    // NOP
    // 0x27b99c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27B99Cu;
    {
        const bool branch_taken_0x27b99c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b99c) {
            ctx->pc = 0x27B9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B99Cu;
            // 0x27b9a0: 0xae340048  sw          $s4, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B9A4u;
            goto label_27b9a4;
        }
    }
    ctx->pc = 0x27B9A4u;
label_27b9a4:
    // 0x27b9a4: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x27b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x27b9a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27b9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27b9ac:
    // 0x27b9ac: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x27b9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27b9b0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x27B9B0u;
    {
        const bool branch_taken_0x27b9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9B0u;
        // 0x27b9b4: 0x26731210  addiu       $s3, $s3, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9b0) {
            ctx->pc = 0x27B930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b930;
        }
    }
    ctx->pc = 0x27B9B8u;
label_27b9b8:
    // 0x27b9b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27b9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27b9bc:
    // 0x27b9bc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27b9bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b9c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27b9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b9c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27b9c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b9c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b9c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b9cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b9ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b9d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b9d4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9D8u;
        // 0x27b9dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B9E0u;
}

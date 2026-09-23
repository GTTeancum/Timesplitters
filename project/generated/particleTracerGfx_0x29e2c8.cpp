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

// Function: particleTracerGfx
// Address: 0x29e2c8 - 0x29e968
void particleTracerGfx_0x29e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleTracerGfx_0x29e2c8");
#endif

    switch (ctx->pc) {
        case 0x29e374u: goto label_29e374;
        case 0x29e384u: goto label_29e384;
        case 0x29e598u: goto label_29e598;
        case 0x29e660u: goto label_29e660;
        default: break;
    }

    ctx->pc = 0x29e2c8u;

    // 0x29e2c8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x29e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x29e2cc: 0xc7808d4c  lwc1        $f0, -0x72B4($gp)
    ctx->pc = 0x29e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e2d0: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x29e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x29e2d4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x29e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x29e2d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2dc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x29e2dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29e2e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29e2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2e4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x29e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x29e2e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2ec: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x29e2ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29e2f0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29e2f4: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x29e2f4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x29e2f8: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x29e2f8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x29e2fc: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x29e2fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x29e300: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x29e300u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29e304: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x29e304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x29e308: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29e30c: 0xc48303b4  lwc1        $f3, 0x3B4($a0)
    ctx->pc = 0x29e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e310: 0xc48103ac  lwc1        $f1, 0x3AC($a0)
    ctx->pc = 0x29e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e314: 0xc48203b0  lwc1        $f2, 0x3B0($a0)
    ctx->pc = 0x29e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e318: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x29e318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29e31c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29e31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29e320: 0xc48703a0  lwc1        $f7, 0x3A0($a0)
    ctx->pc = 0x29e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29e324: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29e324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29e328: 0xc48503a4  lwc1        $f5, 0x3A4($a0)
    ctx->pc = 0x29e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29e32c: 0xc48603a8  lwc1        $f6, 0x3A8($a0)
    ctx->pc = 0x29e32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29e330: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x29e330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x29e334: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x29e334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e338: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x29e338u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x29e33c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29e33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29e340: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29e340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29e344: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x29e344u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x29e348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e34c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29e34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29e350: 0x0  nop
    ctx->pc = 0x29e350u;
    // NOP
    // 0x29e354: 0x0  nop
    ctx->pc = 0x29e354u;
    // NOP
    // 0x29e358: 0x46002503  div.s       $f20, $f4, $f0
    ctx->pc = 0x29e358u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[20] = ctx->f[4] / ctx->f[0];
    // 0x29e35c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x29e35cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29e360: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x29e360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29e364: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x29e364u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29e368: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x29e368u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29e36c: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29E36Cu;
    SET_GPR_U32(ctx, 31, 0x29E374u);
    ctx->pc = 0x29E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E36Cu;
    // 0x29e370: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29E36Cu, 0x29E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E374u;
label_29e374:
    // 0x29e374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e378: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29e378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29e37c: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29E37Cu;
    SET_GPR_U32(ctx, 31, 0x29E384u);
    ctx->pc = 0x29E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E37Cu;
    // 0x29e380: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29E37Cu, 0x29E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E384u;
label_29e384:
    // 0x29e384: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x29e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e388: 0xc7ae0020  lwc1        $f14, 0x20($sp)
    ctx->pc = 0x29e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29e38c: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x29e38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x29e390: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x29e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e394: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x29e394u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x29e398: 0x460e0836  c.le.s      $f1, $f14
    ctx->pc = 0x29e398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e39c: 0x0  nop
    ctx->pc = 0x29e39cu;
    // NOP
    // 0x29e3a0: 0x45000165  bc1f        . + 4 + (0x165 << 2)
    ctx->pc = 0x29E3A0u;
    {
        const bool branch_taken_0x29e3a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3A0u;
        // 0x29e3a4: 0x46031900  add.s       $f4, $f3, $f3 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3a0) {
            ctx->pc = 0x29E938u;
            goto label_29e938;
        }
    }
    ctx->pc = 0x29E3A8u;
    // 0x29e3a8: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x29e3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e3ac: 0x0  nop
    ctx->pc = 0x29e3acu;
    // NOP
    // 0x29e3b0: 0x45000161  bc1f        . + 4 + (0x161 << 2)
    ctx->pc = 0x29E3B0u;
    {
        const bool branch_taken_0x29e3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3B0u;
        // 0x29e3b4: 0xc7a80024  lwc1        $f8, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3b0) {
            ctx->pc = 0x29E938u;
            goto label_29e938;
        }
    }
    ctx->pc = 0x29E3B8u;
    // 0x29e3b8: 0x46080836  c.le.s      $f1, $f8
    ctx->pc = 0x29e3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e3bc: 0x0  nop
    ctx->pc = 0x29e3bcu;
    // NOP
    // 0x29e3c0: 0x4500015e  bc1f        . + 4 + (0x15E << 2)
    ctx->pc = 0x29E3C0u;
    {
        const bool branch_taken_0x29e3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3C0u;
        // 0x29e3c4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3c0) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E3C8u;
    // 0x29e3c8: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x29e3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e3cc: 0x0  nop
    ctx->pc = 0x29e3ccu;
    // NOP
    // 0x29e3d0: 0x4500015a  bc1f        . + 4 + (0x15A << 2)
    ctx->pc = 0x29E3D0u;
    {
        const bool branch_taken_0x29e3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3D0u;
        // 0x29e3d4: 0xc7af0028  lwc1        $f15, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3d0) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E3D8u;
    // 0x29e3d8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x29e3d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x29e3dc: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x29e3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e3e0: 0x0  nop
    ctx->pc = 0x29e3e0u;
    // NOP
    // 0x29e3e4: 0x45020156  bc1fl       . + 4 + (0x156 << 2)
    ctx->pc = 0x29E3E4u;
    {
        const bool branch_taken_0x29e3e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e3e4) {
            ctx->pc = 0x29E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E3E4u;
            // 0x29e3e8: 0xdfb100b0  ld          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E940u;
            goto label_29e940;
        }
    }
    ctx->pc = 0x29E3ECu;
    // 0x29e3ec: 0x46027836  c.le.s      $f15, $f2
    ctx->pc = 0x29e3ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e3f0: 0x0  nop
    ctx->pc = 0x29e3f0u;
    // NOP
    // 0x29e3f4: 0x45000151  bc1f        . + 4 + (0x151 << 2)
    ctx->pc = 0x29E3F4u;
    {
        const bool branch_taken_0x29e3f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3F4u;
        // 0x29e3f8: 0xc7a60030  lwc1        $f6, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3f4) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E3FCu;
    // 0x29e3fc: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x29e3fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x29e400: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x29e400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e404: 0x0  nop
    ctx->pc = 0x29e404u;
    // NOP
    // 0x29e408: 0x4502014d  bc1fl       . + 4 + (0x14D << 2)
    ctx->pc = 0x29E408u;
    {
        const bool branch_taken_0x29e408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e408) {
            ctx->pc = 0x29E40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E408u;
            // 0x29e40c: 0xdfb100b0  ld          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E940u;
            goto label_29e940;
        }
    }
    ctx->pc = 0x29E410u;
    // 0x29e410: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x29e410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e414: 0x0  nop
    ctx->pc = 0x29e414u;
    // NOP
    // 0x29e418: 0x45000148  bc1f        . + 4 + (0x148 << 2)
    ctx->pc = 0x29E418u;
    {
        const bool branch_taken_0x29e418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E418u;
        // 0x29e41c: 0xc7a70034  lwc1        $f7, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e418) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E420u;
    // 0x29e420: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x29e420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e424: 0x0  nop
    ctx->pc = 0x29e424u;
    // NOP
    // 0x29e428: 0x45020145  bc1fl       . + 4 + (0x145 << 2)
    ctx->pc = 0x29E428u;
    {
        const bool branch_taken_0x29e428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e428) {
            ctx->pc = 0x29E42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E428u;
            // 0x29e42c: 0xdfb100b0  ld          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E940u;
            goto label_29e940;
        }
    }
    ctx->pc = 0x29E430u;
    // 0x29e430: 0x46043836  c.le.s      $f7, $f4
    ctx->pc = 0x29e430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e434: 0x0  nop
    ctx->pc = 0x29e434u;
    // NOP
    // 0x29e438: 0x45000140  bc1f        . + 4 + (0x140 << 2)
    ctx->pc = 0x29E438u;
    {
        const bool branch_taken_0x29e438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E438u;
        // 0x29e43c: 0xc7ad0038  lwc1        $f13, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e438) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E440u;
    // 0x29e440: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x29e440u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x29e444: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x29e444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e448: 0x0  nop
    ctx->pc = 0x29e448u;
    // NOP
    // 0x29e44c: 0x4502013c  bc1fl       . + 4 + (0x13C << 2)
    ctx->pc = 0x29E44Cu;
    {
        const bool branch_taken_0x29e44c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e44c) {
            ctx->pc = 0x29E450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E44Cu;
            // 0x29e450: 0xdfb100b0  ld          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E940u;
            goto label_29e940;
        }
    }
    ctx->pc = 0x29E454u;
    // 0x29e454: 0x46036836  c.le.s      $f13, $f3
    ctx->pc = 0x29e454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e458: 0x0  nop
    ctx->pc = 0x29e458u;
    // NOP
    // 0x29e45c: 0x45000137  bc1f        . + 4 + (0x137 << 2)
    ctx->pc = 0x29E45Cu;
    {
        const bool branch_taken_0x29e45c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E45Cu;
        // 0x29e460: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e45c) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E464u;
    // 0x29e464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29e464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29e468: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x29e468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x29e46c: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x29e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x29e470: 0xc78c8d50  lwc1        $f12, -0x72B0($gp)
    ctx->pc = 0x29e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e474: 0x0  nop
    ctx->pc = 0x29e474u;
    // NOP
    // 0x29e478: 0x0  nop
    ctx->pc = 0x29e478u;
    // NOP
    // 0x29e47c: 0x4602d643  div.s       $f25, $f26, $f2
    ctx->pc = 0x29e47cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[25] = ctx->f[26] / ctx->f[2];
    // 0x29e480: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x29e484: 0x0  nop
    ctx->pc = 0x29e484u;
    // NOP
    // 0x29e488: 0x0  nop
    ctx->pc = 0x29e488u;
    // NOP
    // 0x29e48c: 0x4603d603  div.s       $f24, $f26, $f3
    ctx->pc = 0x29e48cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[24] = ctx->f[26] / ctx->f[3];
    // 0x29e490: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x29e490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x29e494: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x29e494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x29e498: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x29e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e49c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29e49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29e4a0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29e4a4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x29e4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e4a8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x29e4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29e4ac: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29e4b0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x29e4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x29e4b4: 0xc464001c  lwc1        $f4, 0x1C($v1)
    ctx->pc = 0x29e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29e4b8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x29e4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x29e4bc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x29e4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x29e4c0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x29e4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x29e4c4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x29e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29e4c8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x29e4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x29e4cc: 0x46197082  mul.s       $f2, $f14, $f25
    ctx->pc = 0x29e4ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[25]);
    // 0x29e4d0: 0x461839c2  mul.s       $f7, $f7, $f24
    ctx->pc = 0x29e4d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[24]);
    // 0x29e4d4: 0x46183182  mul.s       $f6, $f6, $f24
    ctx->pc = 0x29e4d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x29e4d8: 0x46194202  mul.s       $f8, $f8, $f25
    ctx->pc = 0x29e4d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[25]);
    // 0x29e4dc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x29e4dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29e4e0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x29e4e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29e4e4: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x29e4e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29e4e8: 0x46072842  mul.s       $f1, $f5, $f7
    ctx->pc = 0x29e4e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x29e4ec: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x29e4ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29e4f0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x29e4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x29e4f4: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x29e4f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29e4f8: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x29e4f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x29e4fc: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x29e4fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x29e500: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x29e500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29e504: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x29e504u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29e508: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x29e508u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x29e50c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x29e50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29e510: 0x46197882  mul.s       $f2, $f15, $f25
    ctx->pc = 0x29e510u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[25]);
    // 0x29e514: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x29e514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29e518: 0x460305c1  sub.s       $f23, $f0, $f3
    ctx->pc = 0x29e518u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29e51c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x29e51cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29e520: 0x46040d81  sub.s       $f22, $f1, $f4
    ctx->pc = 0x29e520u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x29e524: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x29e524u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29e528: 0x46186842  mul.s       $f1, $f13, $f24
    ctx->pc = 0x29e528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[24]);
    // 0x29e52c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x29e52cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29e530: 0x4617b902  mul.s       $f4, $f23, $f23
    ctx->pc = 0x29e530u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x29e534: 0x4616b0c2  mul.s       $f3, $f22, $f22
    ctx->pc = 0x29e534u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x29e538: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x29e538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x29e53c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x29e53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29e540: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x29e540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x29e544: 0x46032300  add.s       $f12, $f4, $f3
    ctx->pc = 0x29e544u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x29e548: 0x460a6840  add.s       $f1, $f13, $f10
    ctx->pc = 0x29e548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x29e54c: 0x4609a242  mul.s       $f9, $f20, $f9
    ctx->pc = 0x29e54cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x29e550: 0x0  nop
    ctx->pc = 0x29e550u;
    // NOP
    // 0x29e554: 0x0  nop
    ctx->pc = 0x29e554u;
    // NOP
    // 0x29e558: 0x460c01c4  c1          0xC01C4
    ctx->pc = 0x29e558u;
    ctx->f[7] = FPU_SQRT_S(ctx->f[12]);
    // 0x29e55c: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x29e55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x29e560: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x29e560u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x29e564: 0x460a7a80  add.s       $f10, $f15, $f10
    ctx->pc = 0x29e564u;
    ctx->f[10] = FPU_ADD_S(ctx->f[15], ctx->f[10]);
    // 0x29e568: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x29e568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29e56c: 0x0  nop
    ctx->pc = 0x29e56cu;
    // NOP
    // 0x29e570: 0x0  nop
    ctx->pc = 0x29e570u;
    // NOP
    // 0x29e574: 0x46014d43  div.s       $f21, $f9, $f1
    ctx->pc = 0x29e574u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[21] = ctx->f[9] / ctx->f[1];
    // 0x29e578: 0x46073832  c.eq.s      $f7, $f7
    ctx->pc = 0x29e578u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e57c: 0x0  nop
    ctx->pc = 0x29e57cu;
    // NOP
    // 0x29e580: 0x0  nop
    ctx->pc = 0x29e580u;
    // NOP
    // 0x29e584: 0x460a4d03  div.s       $f20, $f9, $f10
    ctx->pc = 0x29e584u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[20] = ctx->f[9] / ctx->f[10];
    // 0x29e588: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29E588u;
    {
        const bool branch_taken_0x29e588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E588u;
        // 0x29e58c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e588) {
            ctx->pc = 0x29E59Cu;
            goto label_29e59c;
        }
    }
    ctx->pc = 0x29E590u;
    // 0x29e590: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x29E590u;
    SET_GPR_U32(ctx, 31, 0x29E598u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x29E590u, 0x29E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E598u;
label_29e598:
    // 0x29e598: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x29e598u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
label_29e59c:
    // 0x29e59c: 0x0  nop
    ctx->pc = 0x29e59cu;
    // NOP
    // 0x29e5a0: 0x0  nop
    ctx->pc = 0x29e5a0u;
    // NOP
    // 0x29e5a4: 0x4607d003  div.s       $f0, $f26, $f7
    ctx->pc = 0x29e5a4u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[0] = ctx->f[26] / ctx->f[7];
    // 0x29e5a8: 0xc7ab0040  lwc1        $f11, 0x40($sp)
    ctx->pc = 0x29e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x29e5ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29e5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29e5b0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x29e5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29e5b4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x29e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29e5b8: 0xc7aa0044  lwc1        $f10, 0x44($sp)
    ctx->pc = 0x29e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29e5bc: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x29e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e5c0: 0xc7a90054  lwc1        $f9, 0x54($sp)
    ctx->pc = 0x29e5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29e5c4: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x29e5c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x29e5c8: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x29e5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x29e5cc: 0x460010c7  neg.s       $f3, $f2
    ctx->pc = 0x29e5ccu;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
    // 0x29e5d0: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x29e5d0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
    // 0x29e5d4: 0x46020200  add.s       $f8, $f0, $f2
    ctx->pc = 0x29e5d4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29e5d8: 0x46001840  add.s       $f1, $f3, $f0
    ctx->pc = 0x29e5d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29e5dc: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->pc = 0x29e5dcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29e5e0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x29e5e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29e5e4: 0x46022901  sub.s       $f4, $f5, $f2
    ctx->pc = 0x29e5e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x29e5e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29e5e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29e5ec: 0x4608aa02  mul.s       $f8, $f21, $f8
    ctx->pc = 0x29e5ecu;
    ctx->f[8] = FPU_MUL_S(ctx->f[21], ctx->f[8]);
    // 0x29e5f0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x29e5f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x29e5f4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x29e5f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x29e5f8: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x29e5f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x29e5fc: 0x4606a982  mul.s       $f6, $f21, $f6
    ctx->pc = 0x29e5fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[21], ctx->f[6]);
    // 0x29e600: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x29e600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29e604: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x29e604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x29e608: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x29e608u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x29e60c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x29e60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x29e610: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x29e610u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x29e614: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x29e614u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x29e618: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x29e618u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x29e61c: 0x46045900  add.s       $f4, $f11, $f4
    ctx->pc = 0x29e61cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x29e620: 0x46015040  add.s       $f1, $f10, $f1
    ctx->pc = 0x29e620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x29e624: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x29e624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x29e628: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x29e628u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x29e62c: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x29e62cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29e630: 0x46055ac0  add.s       $f11, $f11, $f5
    ctx->pc = 0x29e630u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x29e634: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x29e634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29e638: 0x46035280  add.s       $f10, $f10, $f3
    ctx->pc = 0x29e638u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x29e63c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x29e63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29e640: 0x46064a40  add.s       $f9, $f9, $f6
    ctx->pc = 0x29e640u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x29e644: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x29e644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x29e648: 0x46086300  add.s       $f12, $f12, $f8
    ctx->pc = 0x29e648u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x29e64c: 0xe7ab0060  swc1        $f11, 0x60($sp)
    ctx->pc = 0x29e64cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29e650: 0xe7aa0064  swc1        $f10, 0x64($sp)
    ctx->pc = 0x29e650u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x29e654: 0xe7a90084  swc1        $f9, 0x84($sp)
    ctx->pc = 0x29e654u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x29e658: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29E658u;
    SET_GPR_U32(ctx, 31, 0x29E660u);
    ctx->pc = 0x29E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E658u;
    // 0x29e65c: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29E658u, 0x29E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E660u;
label_29e660:
    // 0x29e660: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29e660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29e664: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29e664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29e668: 0x3c036c0b  lui         $v1, 0x6C0B
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27659 << 16));
    // 0x29e66c: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x29e66cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x29e670: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x29e670u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e674: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29e674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29e678: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29e678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29e67c: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29e680: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29e680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29e684: 0x3c03a02e  lui         $v1, 0xA02E
    ctx->pc = 0x29e684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41006 << 16));
    // 0x29e688: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29e688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29e68c: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29e68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29e690: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x29e690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x29e694: 0x240700ee  addiu       $a3, $zero, 0xEE
    ctx->pc = 0x29e694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x29e698: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e69c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x29e69cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x29e6a0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e6a4: 0x2284025  or          $t0, $s1, $t0
    ctx->pc = 0x29e6a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x29e6a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6ac: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x29e6acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e6b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29e6b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e6b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x29e6bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29e6c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e6c4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29e6c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6cc: 0x4603c882  mul.s       $f2, $f25, $f3
    ctx->pc = 0x29e6ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[3]);
    // 0x29e6d0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29e6d4: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x29e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x29e6d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6dc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x29e6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e6e0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29e6e4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x29e6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e6e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6ec: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x29e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x29e6f0: 0xe4590000  swc1        $f25, 0x0($v0)
    ctx->pc = 0x29e6f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e6f4: 0x4603c0c2  mul.s       $f3, $f24, $f3
    ctx->pc = 0x29e6f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x29e6f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e6fc: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x29e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x29e700: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29e700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29e704: 0x34a507fc  ori         $a1, $a1, 0x7FC
    ctx->pc = 0x29e704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    // 0x29e708: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e70c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x29e70cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x29e710: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e714: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e718: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29e718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e71c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e720: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29e720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e724: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e728: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x29e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e72c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x29e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e730: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x29e734: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x29e734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e738: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e73c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e73cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e740: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29e740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e744: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e748: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e74c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e750: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e754: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e758: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e75c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e760: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e764: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e768: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e76c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e770: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e774: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e778: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e77c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29e77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e780: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e784: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29e784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29e788: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e78c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e790: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e794: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29e794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e798: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e79c: 0xe4590000  swc1        $f25, 0x0($v0)
    ctx->pc = 0x29e79cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e7a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e7a4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x29e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e7a8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e7ac: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e7acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29e7b0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29e7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e7b4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e7b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e7b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e7bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29e7bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e7c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e7c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e7c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e7cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e7d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e7d4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e7d8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e7dc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e7e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e7e4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e7e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e7ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e7f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e7f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e7f8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29e7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e7fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e800: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29e804: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e808: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e80c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e810: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29e810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29e814: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e818: 0xe4580000  swc1        $f24, 0x0($v0)
    ctx->pc = 0x29e818u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e81c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e820: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29e820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29e824: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e828: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e82c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e830: 0xe4580000  swc1        $f24, 0x0($v0)
    ctx->pc = 0x29e830u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e834: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e838: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x29e838u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e83c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e840: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x29e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e844: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x29e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e848: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29e84c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29e84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e850: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e854: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e858: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29e858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e85c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e860: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e864: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e868: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e86c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e870: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e874: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e878: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e87c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e880: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e884: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e888: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e88c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e890: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e894: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29e894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e898: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e89c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29e8a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e8a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e8a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e8ac: 0xe4580000  swc1        $f24, 0x0($v0)
    ctx->pc = 0x29e8acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e8b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e8b4: 0xe4580000  swc1        $f24, 0x0($v0)
    ctx->pc = 0x29e8b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e8b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e8bc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e8c0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x29e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e8c4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e8c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e8c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29e8cc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29e8ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e8d0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e8d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29e8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e8d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e8dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e8e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e8e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e8e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e8ec: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e8f0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e8f4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e8f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e8fc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e900: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e904: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e908: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e90c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e90cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e910: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29e910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e914: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e918: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29e918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29e91c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e920: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e924: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e928: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29e928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29e92c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e930: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29e930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29e934: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29e934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29e938:
    // 0x29e938: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x29e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_29e93c:
    // 0x29e93c: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x29e93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_29e940:
    // 0x29e940: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x29e940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e944: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x29e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29e948: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x29e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29e94c: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x29e94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29e950: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x29e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29e954: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x29e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29e958: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x29e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29e95c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x29e95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29e960: 0x3e00008  jr          $ra
    ctx->pc = 0x29E960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E960u;
        // 0x29e964: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E968u;
}

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

// Function: bgTick
// Address: 0x25a3b8 - 0x25a5b4
void bgTick_0x25a3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgTick_0x25a3b8");
#endif

    switch (ctx->pc) {
        case 0x25a418u: goto label_25a418;
        case 0x25a448u: goto label_25a448;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a51cu: goto label_25a51c;
        case 0x25a534u: goto label_25a534;
        default: break;
    }

    ctx->pc = 0x25a3b8u;

    // 0x25a3b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25a3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25a3bc: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x25a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a3c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x25a3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25a3c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a3c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3cc: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x25a3ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x25a3d0: 0x8f85a264  lw          $a1, -0x5D9C($gp)
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x25a3d4: 0x0  nop
    ctx->pc = 0x25a3d4u;
    // NOP
    // 0x25a3d8: 0x0  nop
    ctx->pc = 0x25a3d8u;
    // NOP
    // 0x25a3dc: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x25a3dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
    // 0x25a3e0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x25a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25a3e4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25a3e8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25a3ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25a3f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25a3f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25a3f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a400: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x25a400u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25a404: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x25a404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25a408: 0x18a0005c  blez        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x25A408u;
    {
        const bool branch_taken_0x25a408 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x25A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A408u;
        // 0x25a40c: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a408) {
            ctx->pc = 0x25A57Cu;
            goto label_25a57c;
        }
    }
    ctx->pc = 0x25A410u;
    // 0x25a410: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x25a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x25a414: 0x0  nop
    ctx->pc = 0x25a414u;
    // NOP
label_25a418:
    // 0x25a418: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x25a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x25a41c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x25a41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25a420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a424: 0x8c55003c  lw          $s5, 0x3C($v0)
    ctx->pc = 0x25a424u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x25a428: 0x12a00050  beqz        $s5, . + 4 + (0x50 << 2)
    ctx->pc = 0x25A428u;
    {
        const bool branch_taken_0x25a428 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A428u;
        // 0x25a42c: 0x24960001  addiu       $s6, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a428) {
            ctx->pc = 0x25A56Cu;
            goto label_25a56c;
        }
    }
    ctx->pc = 0x25A430u;
    // 0x25a430: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25a434: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x25A434u;
    {
        const bool branch_taken_0x25a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A434u;
        // 0x25a438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a434) {
            ctx->pc = 0x25A56Cu;
            goto label_25a56c;
        }
    }
    ctx->pc = 0x25A43Cu;
    // 0x25a43c: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x25a43cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25a440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25a440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a444: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x25a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_25a448:
    // 0x25a448: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x25a448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25a44c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a450: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x25a450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a454: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x25a454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a458: 0x0  nop
    ctx->pc = 0x25a458u;
    // NOP
    // 0x25a45c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x25A45Cu;
    {
        const bool branch_taken_0x25a45c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A45Cu;
        // 0x25a460: 0x24f30001  addiu       $s3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a45c) {
            ctx->pc = 0x25A54Cu;
            goto label_25a54c;
        }
    }
    ctx->pc = 0x25A464u;
    // 0x25a464: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x25a464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25a468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a46c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25a46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25a470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25a470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a474: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x25a474u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25a478: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x25a478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a47c: 0x0  nop
    ctx->pc = 0x25a47cu;
    // NOP
    // 0x25a480: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x25A480u;
    {
        const bool branch_taken_0x25a480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a480) {
            ctx->pc = 0x25A484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A480u;
            // 0x25a484: 0x46171000  add.s       $f0, $f2, $f23 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A4B4u;
            goto label_25a4b4;
        }
    }
    ctx->pc = 0x25A488u;
    // 0x25a488: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x25a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x25a48c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x25a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25a490: 0x2442c4a8  addiu       $v0, $v0, -0x3B58
    ctx->pc = 0x25a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x25a494: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x25a494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x25a498: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x25A498u;
    {
        const bool branch_taken_0x25a498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x25a498) {
            ctx->pc = 0x25A4C8u;
            goto label_25a4c8;
        }
    }
    ctx->pc = 0x25A4A0u;
    // 0x25a4a0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x25a4a4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25a4a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A4A8u;
    {
        const bool branch_taken_0x25a4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a4a8) {
            ctx->pc = 0x25A4C8u;
            goto label_25a4c8;
        }
    }
    ctx->pc = 0x25A4B0u;
    // 0x25a4b0: 0x46171000  add.s       $f0, $f2, $f23
    ctx->pc = 0x25a4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_25a4b4:
    // 0x25a4b4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x25a4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a4b8: 0x0  nop
    ctx->pc = 0x25a4b8u;
    // NOP
    // 0x25a4bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25A4BCu;
    {
        const bool branch_taken_0x25a4bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4BCu;
        // 0x25a4c0: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4bc) {
            ctx->pc = 0x25A4C8u;
            goto label_25a4c8;
        }
    }
    ctx->pc = 0x25A4C4u;
    // 0x25a4c4: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x25a4c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25a4c8:
    // 0x25a4c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25a4cc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x25a4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x25a4d0: 0x24f30001  addiu       $s3, $a3, 0x1
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25a4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a4d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25a4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25a4dc: 0xd59021  addu        $s2, $a2, $s5
    ctx->pc = 0x25a4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x25a4e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25a4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4e4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x25a4e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a4e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25a4ec: 0x0  nop
    ctx->pc = 0x25a4ecu;
    // NOP
label_25a4f0:
    // 0x25a4f0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x25a4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25a4f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a4f8: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x25a4fc: 0x5094000e  beql        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x25A4FCu;
    {
        const bool branch_taken_0x25a4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x25a4fc) {
            ctx->pc = 0x25A500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A4FCu;
            // 0x25a500: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A538u;
            goto label_25a538;
        }
    }
    ctx->pc = 0x25A504u;
    // 0x25a504: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x25a504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a508: 0x0  nop
    ctx->pc = 0x25a508u;
    // NOP
    // 0x25a50c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x25A50Cu;
    {
        const bool branch_taken_0x25a50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a50c) {
            ctx->pc = 0x25A510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A50Cu;
            // 0x25a510: 0x4614a300  add.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A52Cu;
            goto label_25a52c;
        }
    }
    ctx->pc = 0x25A514u;
    // 0x25a514: 0xc0a92b2  jal         func_2A4AC8
    ctx->pc = 0x25A514u;
    SET_GPR_U32(ctx, 31, 0x25A51Cu);
    ctx->pc = 0x25A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A514u;
    // 0x25a518: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4AC8u, 0x25A514u, 0x25A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A51Cu;
label_25a51c:
    // 0x25a51c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25a520: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25a520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25a524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25A524u;
    {
        const bool branch_taken_0x25a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A524u;
        // 0x25a528: 0xac5400b0  sw          $s4, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a524) {
            ctx->pc = 0x25A538u;
            goto label_25a538;
        }
    }
    ctx->pc = 0x25A52Cu;
label_25a52c:
    // 0x25a52c: 0xc0a92f0  jal         func_2A4BC0
    ctx->pc = 0x25A52Cu;
    SET_GPR_U32(ctx, 31, 0x25A534u);
    ctx->pc = 0x25A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A52Cu;
    // 0x25a530: 0x460cab01  sub.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4BC0u, 0x25A52Cu, 0x25A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A534u;
label_25a534:
    // 0x25a534: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25a538:
    // 0x25a538: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x25a538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a53c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x25A53Cu;
    {
        const bool branch_taken_0x25a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a53c) {
            ctx->pc = 0x25A540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A53Cu;
            // 0x25a540: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a4f0;
        }
    }
    ctx->pc = 0x25A544u;
    // 0x25a544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A544u;
    {
        const bool branch_taken_0x25a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A544u;
        // 0x25a548: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a544) {
            ctx->pc = 0x25A550u;
            goto label_25a550;
        }
    }
    ctx->pc = 0x25A54Cu;
label_25a54c:
    // 0x25a54c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25a54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a550:
    // 0x25a550: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x25a550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25a554: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25a554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a558: 0xd51821  addu        $v1, $a2, $s5
    ctx->pc = 0x25a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x25a55c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a560: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x25A560u;
    {
        const bool branch_taken_0x25a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A560u;
        // 0x25a564: 0xd51021  addu        $v0, $a2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a560) {
            ctx->pc = 0x25A448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a448;
        }
    }
    ctx->pc = 0x25A568u;
    // 0x25a568: 0x8f85a264  lw          $a1, -0x5D9C($gp)
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
label_25a56c:
    // 0x25a56c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a570: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x25a570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25a574: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x25A574u;
    {
        const bool branch_taken_0x25a574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A574u;
        // 0x25a578: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a574) {
            ctx->pc = 0x25A418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a418;
        }
    }
    ctx->pc = 0x25A57Cu;
label_25a57c:
    // 0x25a57c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25a57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a580: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25a580u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a584: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25a584u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a588: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25a588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a58c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25a58cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a590: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25a590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a594: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25a594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a59c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x25a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25a5a0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x25a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a5a4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x25a5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a5a8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x25a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5ACu;
        // 0x25a5b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5B4u;
}

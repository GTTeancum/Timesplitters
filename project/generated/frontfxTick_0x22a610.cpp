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

// Function: frontfxTick
// Address: 0x22a610 - 0x22ab8c
void frontfxTick_0x22a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxTick_0x22a610");
#endif

    switch (ctx->pc) {
        case 0x22a68cu: goto label_22a68c;
        case 0x22a694u: goto label_22a694;
        case 0x22a6a8u: goto label_22a6a8;
        case 0x22a754u: goto label_22a754;
        case 0x22a768u: goto label_22a768;
        case 0x22a774u: goto label_22a774;
        case 0x22a780u: goto label_22a780;
        case 0x22a78cu: goto label_22a78c;
        case 0x22a798u: goto label_22a798;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7e0u: goto label_22a7e0;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7f8u: goto label_22a7f8;
        case 0x22a804u: goto label_22a804;
        case 0x22a810u: goto label_22a810;
        case 0x22a81cu: goto label_22a81c;
        case 0x22a824u: goto label_22a824;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8c0u: goto label_22a8c0;
        case 0x22a8ccu: goto label_22a8cc;
        case 0x22a8d8u: goto label_22a8d8;
        case 0x22a8e0u: goto label_22a8e0;
        case 0x22a904u: goto label_22a904;
        case 0x22a910u: goto label_22a910;
        case 0x22a91cu: goto label_22a91c;
        case 0x22a928u: goto label_22a928;
        case 0x22a934u: goto label_22a934;
        case 0x22a940u: goto label_22a940;
        case 0x22a948u: goto label_22a948;
        case 0x22a978u: goto label_22a978;
        case 0x22a984u: goto label_22a984;
        case 0x22a990u: goto label_22a990;
        case 0x22a9a0u: goto label_22a9a0;
        case 0x22a9acu: goto label_22a9ac;
        case 0x22a9b8u: goto label_22a9b8;
        case 0x22a9c0u: goto label_22a9c0;
        case 0x22aa2cu: goto label_22aa2c;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa54u: goto label_22aa54;
        case 0x22aa60u: goto label_22aa60;
        case 0x22aa6cu: goto label_22aa6c;
        case 0x22aa74u: goto label_22aa74;
        case 0x22aa98u: goto label_22aa98;
        case 0x22aaa4u: goto label_22aaa4;
        case 0x22aab0u: goto label_22aab0;
        case 0x22aabcu: goto label_22aabc;
        case 0x22aac8u: goto label_22aac8;
        case 0x22aad4u: goto label_22aad4;
        case 0x22aadcu: goto label_22aadc;
        default: break;
    }

    ctx->pc = 0x22a610u;

    // 0x22a610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22a614: 0x8f839f94  lw          $v1, -0x606C($gp)
    ctx->pc = 0x22a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
    // 0x22a618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a61c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22a620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a624: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22a628: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22a62c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a634: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a638: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x22a638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x22a63c: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22A63Cu;
    {
        const bool branch_taken_0x22a63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x22A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A63Cu;
        // 0x22a640: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a63c) {
            ctx->pc = 0x22A68Cu;
            goto label_22a68c;
        }
    }
    ctx->pc = 0x22A644u;
    // 0x22a644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a648: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A648u;
    {
        const bool branch_taken_0x22a648 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A648u;
        // 0x22a64c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a648) {
            ctx->pc = 0x22A67Cu;
            goto label_22a67c;
        }
    }
    ctx->pc = 0x22A650u;
    // 0x22a650: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a654: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A654u;
    {
        const bool branch_taken_0x22a654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A654u;
        // 0x22a658: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a654) {
            ctx->pc = 0x22A67Cu;
            goto label_22a67c;
        }
    }
    ctx->pc = 0x22A65Cu;
    // 0x22a65c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x22a660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a664: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x22a664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x22a668: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a66c: 0xc78280f0  lwc1        $f2, -0x7F10($gp)
    ctx->pc = 0x22a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22a670: 0xe7809fa4  swc1        $f0, -0x605C($gp)
    ctx->pc = 0x22a670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), bits); }
    // 0x22a674: 0xe7819fa8  swc1        $f1, -0x6058($gp)
    ctx->pc = 0x22a674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), bits); }
    // 0x22a678: 0xe7829fac  swc1        $f2, -0x6054($gp)
    ctx->pc = 0x22a678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942636), bits); }
label_22a67c:
    // 0x22a67c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A67Cu;
    {
        const bool branch_taken_0x22a67c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a67c) {
            ctx->pc = 0x22A68Cu;
            goto label_22a68c;
        }
    }
    ctx->pc = 0x22A684u;
    // 0x22a684: 0xc08af96  jal         func_22BE58
    ctx->pc = 0x22A684u;
    SET_GPR_U32(ctx, 31, 0x22A68Cu);
    ctx->pc = 0x22BE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE58u, 0x22A684u, 0x22A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A68Cu;
label_22a68c:
    // 0x22a68c: 0xc08ad80  jal         func_22B600
    ctx->pc = 0x22A68Cu;
    SET_GPR_U32(ctx, 31, 0x22A694u);
    ctx->pc = 0x22A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A68Cu;
    // 0x22a690: 0xaf909f94  sw          $s0, -0x606C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942612), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B600u, 0x22A68Cu, 0x22A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A694u;
label_22a694:
    // 0x22a694: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a698: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A698u;
    {
        const bool branch_taken_0x22a698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A698u;
        // 0x22a69c: 0xc7809fa0  lwc1        $f0, -0x6060($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a698) {
            ctx->pc = 0x22A6ACu;
            goto label_22a6ac;
        }
    }
    ctx->pc = 0x22A6A0u;
    // 0x22a6a0: 0xc08afa6  jal         func_22BE98
    ctx->pc = 0x22A6A0u;
    SET_GPR_U32(ctx, 31, 0x22A6A8u);
    ctx->pc = 0x22BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE98u, 0x22A6A0u, 0x22A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6A8u;
label_22a6a8:
    // 0x22a6a8: 0xc7809fa0  lwc1        $f0, -0x6060($gp)
    ctx->pc = 0x22a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6ac:
    // 0x22a6ac: 0xc78580f4  lwc1        $f5, -0x7F0C($gp)
    ctx->pc = 0x22a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22a6b0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x22a6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x22a6b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22a6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x22a6b8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x22a6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x22a6bc: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x22a6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a6c0: 0x0  nop
    ctx->pc = 0x22a6c0u;
    // NOP
    // 0x22a6c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22A6C4u;
    {
        const bool branch_taken_0x22a6c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6C4u;
        // 0x22a6c8: 0xe7809fa0  swc1        $f0, -0x6060($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6c4) {
            ctx->pc = 0x22A6D4u;
            goto label_22a6d4;
        }
    }
    ctx->pc = 0x22A6CCu;
    // 0x22a6cc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22a6ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22a6d0: 0xe7809fa0  swc1        $f0, -0x6060($gp)
    ctx->pc = 0x22a6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942624), bits); }
label_22a6d4:
    // 0x22a6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a6d8: 0x1602010f  bne         $s0, $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x22A6D8u;
    {
        const bool branch_taken_0x22a6d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6D8u;
        // 0x22a6dc: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6d8) {
            ctx->pc = 0x22AB18u;
            goto label_22ab18;
        }
    }
    ctx->pc = 0x22A6E0u;
    // 0x22a6e0: 0xc7809fa4  lwc1        $f0, -0x605C($gp)
    ctx->pc = 0x22a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a6e4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x22a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x22a6e8: 0xc79580f8  lwc1        $f21, -0x7F08($gp)
    ctx->pc = 0x22a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22a6ec: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x22a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x22a6f0: 0x46050500  add.s       $f20, $f0, $f5
    ctx->pc = 0x22a6f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x22a6f4: 0xaf839fb8  sw          $v1, -0x6048($gp)
    ctx->pc = 0x22a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942648), GPR_U32(ctx, 3));
    // 0x22a6f8: 0xaf829fbc  sw          $v0, -0x6044($gp)
    ctx->pc = 0x22a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942652), GPR_U32(ctx, 2));
    // 0x22a6fc: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x22a6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a700: 0x0  nop
    ctx->pc = 0x22a700u;
    // NOP
    // 0x22a704: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x22A704u;
    {
        const bool branch_taken_0x22a704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A704u;
        // 0x22a708: 0xe7949fa4  swc1        $f20, -0x605C($gp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a704) {
            ctx->pc = 0x22A840u;
            goto label_22a840;
        }
    }
    ctx->pc = 0x22A70Cu;
    // 0x22a70c: 0x0  nop
    ctx->pc = 0x22a70cu;
    // NOP
    // 0x22a710: 0x0  nop
    ctx->pc = 0x22a710u;
    // NOP
    // 0x22a714: 0x4615a543  div.s       $f21, $f20, $f21
    ctx->pc = 0x22a714u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[21] = ctx->f[20] / ctx->f[21];
    // 0x22a718: 0xc78080fc  lwc1        $f0, -0x7F04($gp)
    ctx->pc = 0x22a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a71c: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x22a71cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x22a720: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22a720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22a724: 0xdc331860  ld          $s3, 0x1860($at)
    ctx->pc = 0x22a724u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x3A1860u));
    // 0x22a728: 0x26525c60  addiu       $s2, $s2, 0x5C60
    ctx->pc = 0x22a728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23648));
    // 0x22a72c: 0xe7809fac  swc1        $f0, -0x6054($gp)
    ctx->pc = 0x22a72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942636), bits); }
    // 0x22a730: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x22a730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
    // 0x22a734: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x22a734u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x22a738: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x22a738u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x22a73c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22a740: 0xdc341868  ld          $s4, 0x1868($at)
    ctx->pc = 0x22a740u;
    SET_GPR_U64(ctx, 20, FAST_READ64(0x3A1868u));
    // 0x22a744: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22a744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22a748: 0xdc351870  ld          $s5, 0x1870($at)
    ctx->pc = 0x22a748u;
    SET_GPR_U64(ctx, 21, FAST_READ64(0x3A1870u));
    // 0x22a74c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22A74Cu;
    SET_GPR_U32(ctx, 31, 0x22A754u);
    ctx->pc = 0x22A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A74Cu;
    // 0x22a750: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22A74Cu, 0x22A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A754u;
label_22a754:
    // 0x22a754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a758: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a75c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a760: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A760u;
    SET_GPR_U32(ctx, 31, 0x22A768u);
    ctx->pc = 0x22A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A760u;
    // 0x22a764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A760u, 0x22A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A768u;
label_22a768:
    // 0x22a768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a76c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A76Cu;
    SET_GPR_U32(ctx, 31, 0x22A774u);
    ctx->pc = 0x22A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A76Cu;
    // 0x22a770: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A76Cu, 0x22A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A774u;
label_22a774:
    // 0x22a774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a778: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A778u;
    SET_GPR_U32(ctx, 31, 0x22A780u);
    ctx->pc = 0x22A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A778u;
    // 0x22a77c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A778u, 0x22A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A780u;
label_22a780:
    // 0x22a780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a784: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A784u;
    SET_GPR_U32(ctx, 31, 0x22A78Cu);
    ctx->pc = 0x22A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A784u;
    // 0x22a788: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A784u, 0x22A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A78Cu;
label_22a78c:
    // 0x22a78c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a790: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A790u;
    SET_GPR_U32(ctx, 31, 0x22A798u);
    ctx->pc = 0x22A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A790u;
    // 0x22a794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A790u, 0x22A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A798u;
label_22a798:
    // 0x22a798: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22A798u;
    SET_GPR_U32(ctx, 31, 0x22A7A0u);
    ctx->pc = 0x22A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A798u;
    // 0x22a79c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22A798u, 0x22A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7A0u;
label_22a7a0:
    // 0x22a7a0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22a7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22a7a4: 0xc7818100  lwc1        $f1, -0x7F00($gp)
    ctx->pc = 0x22a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a7a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a7ac: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22a7b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22a7b4: 0x24702b28  addiu       $s0, $v1, 0x2B28
    ctx->pc = 0x22a7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11048));
    // 0x22a7b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a7bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a7bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22a7c0: 0xe7819fb4  swc1        $f1, -0x604C($gp)
    ctx->pc = 0x22a7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942644), bits); }
    // 0x22a7c4: 0xe7809fb0  swc1        $f0, -0x6050($gp)
    ctx->pc = 0x22a7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942640), bits); }
    // 0x22a7c8: 0xe4742b28  swc1        $f20, 0x2B28($v1)
    ctx->pc = 0x22a7c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x352B28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x352B28u, _value); } while (0); }
    // 0x22a7cc: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x22a7ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x352B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x352B2Cu, _value); } while (0); }
    // 0x22a7d0: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x22a7d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x352B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x352B34u, _value); } while (0); }
    // 0x22a7d4: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x22a7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x352B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x352B38u, _value); } while (0); }
    // 0x22a7d8: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22A7D8u;
    SET_GPR_U32(ctx, 31, 0x22A7E0u);
    ctx->pc = 0x22A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7D8u;
    // 0x22a7dc: 0xe6140014  swc1        $f20, 0x14($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22A7D8u, 0x22A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7E0u;
label_22a7e0:
    // 0x22a7e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7e4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A7E4u;
    SET_GPR_U32(ctx, 31, 0x22A7ECu);
    ctx->pc = 0x22A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7E4u;
    // 0x22a7e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A7E4u, 0x22A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7ECu;
label_22a7ec:
    // 0x22a7ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7f0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A7F0u;
    SET_GPR_U32(ctx, 31, 0x22A7F8u);
    ctx->pc = 0x22A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7F0u;
    // 0x22a7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A7F0u, 0x22A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7F8u;
label_22a7f8:
    // 0x22a7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7fc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A7FCu;
    SET_GPR_U32(ctx, 31, 0x22A804u);
    ctx->pc = 0x22A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7FCu;
    // 0x22a800: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A7FCu, 0x22A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A804u;
label_22a804:
    // 0x22a804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a808: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A808u;
    SET_GPR_U32(ctx, 31, 0x22A810u);
    ctx->pc = 0x22A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A808u;
    // 0x22a80c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A808u, 0x22A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A810u;
label_22a810:
    // 0x22a810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a814: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A814u;
    SET_GPR_U32(ctx, 31, 0x22A81Cu);
    ctx->pc = 0x22A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A814u;
    // 0x22a818: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A814u, 0x22A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A81Cu;
label_22a81c:
    // 0x22a81c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22A81Cu;
    SET_GPR_U32(ctx, 31, 0x22A824u);
    ctx->pc = 0x22A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A81Cu;
    // 0x22a820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22A81Cu, 0x22A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A824u;
label_22a824:
    // 0x22a824: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22a828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a82c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22a830: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a834: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22a834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22a838: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x22A838u;
    {
        const bool branch_taken_0x22a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A838u;
        // 0x22a83c: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a838) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22A840u;
label_22a840:
    // 0x22a840: 0xc7818104  lwc1        $f1, -0x7EFC($gp)
    ctx->pc = 0x22a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a844: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x22a844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a848: 0x0  nop
    ctx->pc = 0x22a848u;
    // NOP
    // 0x22a84c: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x22A84Cu;
    {
        const bool branch_taken_0x22a84c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A84Cu;
        // 0x22a850: 0xc7829fa8  lwc1        $f2, -0x6058($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a84c) {
            ctx->pc = 0x22A9D8u;
            goto label_22a9d8;
        }
    }
    ctx->pc = 0x22A854u;
    // 0x22a854: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x22a854u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x22a858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a85c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22a85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a860: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x22a860u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x22a864: 0xc7838108  lwc1        $f3, -0x7EF8($gp)
    ctx->pc = 0x22a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22a868: 0x26735c60  addiu       $s3, $s3, 0x5C60
    ctx->pc = 0x22a868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23648));
    // 0x22a86c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x22a86cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x22a870: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22a874: 0xdc321878  ld          $s2, 0x1878($at)
    ctx->pc = 0x22a874u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x3A1878u));
    // 0x22a878: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a87c: 0x3411ff80  ori         $s1, $zero, 0xFF80
    ctx->pc = 0x22a87cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x22a880: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x22a880u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x22a884: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22a884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22a888: 0xdc341880  ld          $s4, 0x1880($at)
    ctx->pc = 0x22a888u;
    SET_GPR_U64(ctx, 20, FAST_READ64(0x3A1880u));
    // 0x22a88c: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x22a88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x22a890: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x22a890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x22a894: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x22a894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x22a898: 0xe7819fac  swc1        $f1, -0x6054($gp)
    ctx->pc = 0x22a898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942636), bits); }
    // 0x22a89c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x22a89cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22a8a0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22A8A0u;
    SET_GPR_U32(ctx, 31, 0x22A8A8u);
    ctx->pc = 0x22A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8A0u;
    // 0x22a8a4: 0xe7829fa8  swc1        $f2, -0x6058($gp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22A8A0u, 0x22A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8A8u;
label_22a8a8:
    // 0x22a8a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8ac: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A8ACu;
    SET_GPR_U32(ctx, 31, 0x22A8B4u);
    ctx->pc = 0x22A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8ACu;
    // 0x22a8b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A8ACu, 0x22A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8B4u;
label_22a8b4:
    // 0x22a8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8b8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A8B8u;
    SET_GPR_U32(ctx, 31, 0x22A8C0u);
    ctx->pc = 0x22A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8B8u;
    // 0x22a8bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A8B8u, 0x22A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8C0u;
label_22a8c0:
    // 0x22a8c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8c4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A8C4u;
    SET_GPR_U32(ctx, 31, 0x22A8CCu);
    ctx->pc = 0x22A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8C4u;
    // 0x22a8c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A8C4u, 0x22A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8CCu;
label_22a8cc:
    // 0x22a8cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8d0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A8D0u;
    SET_GPR_U32(ctx, 31, 0x22A8D8u);
    ctx->pc = 0x22A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D0u;
    // 0x22a8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A8D0u, 0x22A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8D8u;
label_22a8d8:
    // 0x22a8d8: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22A8D8u;
    SET_GPR_U32(ctx, 31, 0x22A8E0u);
    ctx->pc = 0x22A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D8u;
    // 0x22a8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22A8D8u, 0x22A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8E0u;
label_22a8e0:
    // 0x22a8e0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22a8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22a8e4: 0xc781810c  lwc1        $f1, -0x7EF4($gp)
    ctx->pc = 0x22a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a8e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a8ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a8ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a8f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x22a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22a8f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a8f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22a8fc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22A8FCu;
    SET_GPR_U32(ctx, 31, 0x22A904u);
    ctx->pc = 0x22A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8FCu;
    // 0x22a900: 0xe7809fb0  swc1        $f0, -0x6050($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22A8FCu, 0x22A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A904u;
label_22a904:
    // 0x22a904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a908: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A908u;
    SET_GPR_U32(ctx, 31, 0x22A910u);
    ctx->pc = 0x22A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A908u;
    // 0x22a90c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A908u, 0x22A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A910u;
label_22a910:
    // 0x22a910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a914: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A914u;
    SET_GPR_U32(ctx, 31, 0x22A91Cu);
    ctx->pc = 0x22A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A914u;
    // 0x22a918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A914u, 0x22A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A91Cu;
label_22a91c:
    // 0x22a91c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a920: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A920u;
    SET_GPR_U32(ctx, 31, 0x22A928u);
    ctx->pc = 0x22A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A920u;
    // 0x22a924: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A920u, 0x22A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A928u;
label_22a928:
    // 0x22a928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a92c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A92Cu;
    SET_GPR_U32(ctx, 31, 0x22A934u);
    ctx->pc = 0x22A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A92Cu;
    // 0x22a930: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A92Cu, 0x22A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A934u;
label_22a934:
    // 0x22a934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a938: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A938u;
    SET_GPR_U32(ctx, 31, 0x22A940u);
    ctx->pc = 0x22A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A938u;
    // 0x22a93c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A938u, 0x22A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A940u;
label_22a940:
    // 0x22a940: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22A940u;
    SET_GPR_U32(ctx, 31, 0x22A948u);
    ctx->pc = 0x22A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A940u;
    // 0x22a944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22A940u, 0x22A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A948u;
label_22a948:
    // 0x22a948: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22a94c: 0xc7818110  lwc1        $f1, -0x7EF0($gp)
    ctx->pc = 0x22a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a954: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x22a958: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22a95c: 0x26102b28  addiu       $s0, $s0, 0x2B28
    ctx->pc = 0x22a95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11048));
    // 0x22a960: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a964: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a968: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22a968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22a96c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22a96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22a970: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22A970u;
    SET_GPR_U32(ctx, 31, 0x22A978u);
    ctx->pc = 0x22A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A970u;
    // 0x22a974: 0xe7809fb4  swc1        $f0, -0x604C($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942644), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22A970u, 0x22A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A978u;
label_22a978:
    // 0x22a978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a97c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A97Cu;
    SET_GPR_U32(ctx, 31, 0x22A984u);
    ctx->pc = 0x22A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A97Cu;
    // 0x22a980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A97Cu, 0x22A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A984u;
label_22a984:
    // 0x22a984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a988: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A988u;
    SET_GPR_U32(ctx, 31, 0x22A990u);
    ctx->pc = 0x22A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A988u;
    // 0x22a98c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A988u, 0x22A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A990u;
label_22a990:
    // 0x22a990: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22a990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22a994: 0xdc251888  ld          $a1, 0x1888($at)
    ctx->pc = 0x22a994u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A1888u));
    // 0x22a998: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A998u;
    SET_GPR_U32(ctx, 31, 0x22A9A0u);
    ctx->pc = 0x22A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A998u;
    // 0x22a99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A998u, 0x22A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9A0u;
label_22a9a0:
    // 0x22a9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9a4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22A9A4u;
    SET_GPR_U32(ctx, 31, 0x22A9ACu);
    ctx->pc = 0x22A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9A4u;
    // 0x22a9a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22A9A4u, 0x22A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9ACu;
label_22a9ac:
    // 0x22a9ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9b0: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22A9B0u;
    SET_GPR_U32(ctx, 31, 0x22A9B8u);
    ctx->pc = 0x22A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9B0u;
    // 0x22a9b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22A9B0u, 0x22A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9B8u;
label_22a9b8:
    // 0x22a9b8: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22A9B8u;
    SET_GPR_U32(ctx, 31, 0x22A9C0u);
    ctx->pc = 0x22A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9B8u;
    // 0x22a9bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22A9B8u, 0x22A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9C0u;
label_22a9c0:
    // 0x22a9c0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22a9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22a9c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a9c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x22a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22a9cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a9d0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x22A9D0u;
    {
        const bool branch_taken_0x22a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9D0u;
        // 0x22a9d4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9d0) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22A9D8u;
label_22a9d8:
    // 0x22a9d8: 0xc7808114  lwc1        $f0, -0x7EEC($gp)
    ctx->pc = 0x22a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a9dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22a9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a9e0: 0x0  nop
    ctx->pc = 0x22a9e0u;
    // NOP
    // 0x22a9e4: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x22A9E4u;
    {
        const bool branch_taken_0x22a9e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9E4u;
        // 0x22a9e8: 0x3c120037  lui         $s2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9e4) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22A9ECu;
    // 0x22a9ec: 0x4601a541  sub.s       $f21, $f20, $f1
    ctx->pc = 0x22a9ecu;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x22a9f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22a9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22a9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22a9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a9f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22a9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22a9fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22a9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22aa00: 0x26525c60  addiu       $s2, $s2, 0x5C60
    ctx->pc = 0x22aa00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23648));
    // 0x22aa04: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22aa08: 0xdc311890  ld          $s1, 0x1890($at)
    ctx->pc = 0x22aa08u;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x3A1890u));
    // 0x22aa0c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x22aa0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x22aa10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22aa10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22aa14: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x22aa14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x22aa18: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x22aa18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x22aa1c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22aa20: 0xdc331898  ld          $s3, 0x1898($at)
    ctx->pc = 0x22aa20u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x3A1898u));
    // 0x22aa24: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22AA24u;
    SET_GPR_U32(ctx, 31, 0x22AA2Cu);
    ctx->pc = 0x22AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA24u;
    // 0x22aa28: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22AA24u, 0x22AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA2Cu;
label_22aa2c:
    // 0x22aa2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa30: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22AA30u;
    SET_GPR_U32(ctx, 31, 0x22AA38u);
    ctx->pc = 0x22AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA30u;
    // 0x22aa34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22AA30u, 0x22AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA38u;
label_22aa38:
    // 0x22aa38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa3c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22AA3Cu;
    SET_GPR_U32(ctx, 31, 0x22AA44u);
    ctx->pc = 0x22AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA3Cu;
    // 0x22aa40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22AA3Cu, 0x22AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA44u;
label_22aa44:
    // 0x22aa44: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22aa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22aa48: 0xdc2518a0  ld          $a1, 0x18A0($at)
    ctx->pc = 0x22aa48u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A18A0u));
    // 0x22aa4c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22AA4Cu;
    SET_GPR_U32(ctx, 31, 0x22AA54u);
    ctx->pc = 0x22AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA4Cu;
    // 0x22aa50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22AA4Cu, 0x22AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA54u;
label_22aa54:
    // 0x22aa54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa58: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22AA58u;
    SET_GPR_U32(ctx, 31, 0x22AA60u);
    ctx->pc = 0x22AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA58u;
    // 0x22aa5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22AA58u, 0x22AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA60u;
label_22aa60:
    // 0x22aa60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa64: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22AA64u;
    SET_GPR_U32(ctx, 31, 0x22AA6Cu);
    ctx->pc = 0x22AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA64u;
    // 0x22aa68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22AA64u, 0x22AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA6Cu;
label_22aa6c:
    // 0x22aa6c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22AA6Cu;
    SET_GPR_U32(ctx, 31, 0x22AA74u);
    ctx->pc = 0x22AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA6Cu;
    // 0x22aa70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22AA6Cu, 0x22AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA74u;
label_22aa74:
    // 0x22aa74: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22aa78: 0xc7818118  lwc1        $f1, -0x7EE8($gp)
    ctx->pc = 0x22aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aa7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22aa80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22aa80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22aa84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22aa88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aa8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22aa8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22aa90: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22AA90u;
    SET_GPR_U32(ctx, 31, 0x22AA98u);
    ctx->pc = 0x22AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA90u;
    // 0x22aa94: 0xe7809fb0  swc1        $f0, -0x6050($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22AA90u, 0x22AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA98u;
label_22aa98:
    // 0x22aa98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa9c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22AA9Cu;
    SET_GPR_U32(ctx, 31, 0x22AAA4u);
    ctx->pc = 0x22AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA9Cu;
    // 0x22aaa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22AA9Cu, 0x22AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAA4u;
label_22aaa4:
    // 0x22aaa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aaa8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22AAA8u;
    SET_GPR_U32(ctx, 31, 0x22AAB0u);
    ctx->pc = 0x22AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAA8u;
    // 0x22aaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22AAA8u, 0x22AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAB0u;
label_22aab0:
    // 0x22aab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aab4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22AAB4u;
    SET_GPR_U32(ctx, 31, 0x22AABCu);
    ctx->pc = 0x22AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAB4u;
    // 0x22aab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22AAB4u, 0x22AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AABCu;
label_22aabc:
    // 0x22aabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aac0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22AAC0u;
    SET_GPR_U32(ctx, 31, 0x22AAC8u);
    ctx->pc = 0x22AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAC0u;
    // 0x22aac4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22AAC0u, 0x22AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAC8u;
label_22aac8:
    // 0x22aac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22aac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aacc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22AACCu;
    SET_GPR_U32(ctx, 31, 0x22AAD4u);
    ctx->pc = 0x22AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AACCu;
    // 0x22aad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22AACCu, 0x22AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAD4u;
label_22aad4:
    // 0x22aad4: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22AAD4u;
    SET_GPR_U32(ctx, 31, 0x22AADCu);
    ctx->pc = 0x22AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAD4u;
    // 0x22aad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22AAD4u, 0x22AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AADCu;
label_22aadc:
    // 0x22aadc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22aae0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x22aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x22aae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22aae8: 0xc781811c  lwc1        $f1, -0x7EE4($gp)
    ctx->pc = 0x22aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aaec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22aaf0: 0x24832b28  addiu       $v1, $a0, 0x2B28
    ctx->pc = 0x22aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11048));
    // 0x22aaf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22aaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aaf8: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x22aaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22aafc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22aafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ab00: 0xe4942b28  swc1        $f20, 0x2B28($a0)
    ctx->pc = 0x22ab00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11048), bits); }
    // 0x22ab04: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x22ab04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22ab08: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x22ab08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22ab0c: 0xe7809fb4  swc1        $f0, -0x604C($gp)
    ctx->pc = 0x22ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942644), bits); }
    // 0x22ab10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22AB10u;
    {
        const bool branch_taken_0x22ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB10u;
        // 0x22ab14: 0xe4740010  swc1        $f20, 0x10($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab10) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22AB18u;
label_22ab18:
    // 0x22ab18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22ab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22ab1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab20: 0xc7818120  lwc1        $f1, -0x7EE0($gp)
    ctx->pc = 0x22ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ab24: 0x24a22b28  addiu       $v0, $a1, 0x2B28
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 11048));
    // 0x22ab28: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22ab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x22ab2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22ab2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22ab30: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x22ab34: 0xe7809fa8  swc1        $f0, -0x6058($gp)
    ctx->pc = 0x22ab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), bits); }
    // 0x22ab38: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22ab3c: 0xe7819fac  swc1        $f1, -0x6054($gp)
    ctx->pc = 0x22ab3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942636), bits); }
    // 0x22ab40: 0xe7829fa4  swc1        $f2, -0x605C($gp)
    ctx->pc = 0x22ab40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), bits); }
    // 0x22ab44: 0xaca02b28  sw          $zero, 0x2B28($a1)
    ctx->pc = 0x22ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11048), GPR_U32(ctx, 0));
    // 0x22ab48: 0xaf839fb8  sw          $v1, -0x6048($gp)
    ctx->pc = 0x22ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942648), GPR_U32(ctx, 3));
    // 0x22ab4c: 0xaf849fbc  sw          $a0, -0x6044($gp)
    ctx->pc = 0x22ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942652), GPR_U32(ctx, 4));
    // 0x22ab50: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x22ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x22ab54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22ab58: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x22ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x22ab5c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x22ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_22ab60:
    // 0x22ab60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ab64: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22ab64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ab68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22ab68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ab6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22ab6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ab70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22ab70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ab74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22ab74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ab78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ab78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ab7c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x22ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22ab80: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x22ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x22AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB84u;
        // 0x22ab88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AB8Cu;
}

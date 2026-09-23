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

// Function: particleManualGfx
// Address: 0x2a0728 - 0x2a0f64
void particleManualGfx_0x2a0728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleManualGfx_0x2a0728");
#endif

    switch (ctx->pc) {
        case 0x2a07e4u: goto label_2a07e4;
        case 0x2a07ecu: goto label_2a07ec;
        case 0x2a07fcu: goto label_2a07fc;
        case 0x2a0840u: goto label_2a0840;
        case 0x2a088cu: goto label_2a088c;
        case 0x2a092cu: goto label_2a092c;
        case 0x2a09a8u: goto label_2a09a8;
        case 0x2a0b84u: goto label_2a0b84;
        default: break;
    }

    ctx->pc = 0x2a0728u;

    // 0x2a0728: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2a0728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2a072c: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x2a072cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a0730: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x2a0730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x2a0734: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a0738: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2a0738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2a073c: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x2a073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x2a0740: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x2a0740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x2a0744: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a0744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0748: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2a0748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2a074c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a074cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0750: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x2a0750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2a0754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0758: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2a0758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2a075c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a075cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a0760: 0xe7ba0180  swc1        $f26, 0x180($sp)
    ctx->pc = 0x2a0760u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2a0764: 0x24849810  addiu       $a0, $a0, -0x67F0
    ctx->pc = 0x2a0764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    // 0x2a0768: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2a0768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2a076c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a076cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0770: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x2a0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2a0774: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0778: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2a0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2a077c: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x2a077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2a0780: 0xe7b90178  swc1        $f25, 0x178($sp)
    ctx->pc = 0x2a0780u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2a0784: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x2a0784u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2a0788: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x2a0788u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2a078c: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x2a078cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2a0790: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2a0790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2a0794: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2a0794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2a0798: 0x8f86b234  lw          $a2, -0x4DCC($gp)
    ctx->pc = 0x2a0798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a079c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2a079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a07a0: 0xc4c10104  lwc1        $f1, 0x104($a2)
    ctx->pc = 0x2a07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a07a4: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2a07a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a07a8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a07a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a07ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a07acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a07b0: 0x0  nop
    ctx->pc = 0x2a07b0u;
    // NOP
    // 0x2a07b4: 0x0  nop
    ctx->pc = 0x2a07b4u;
    // NOP
    // 0x2a07b8: 0x46010683  div.s       $f26, $f0, $f1
    ctx->pc = 0x2a07b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[26] = ctx->f[0] / ctx->f[1];
    // 0x2a07bc: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x2a07bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a07c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2a07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a07c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a07c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2a07c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a07cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2a07ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a07d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07d4: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x2a07d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a07d8: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x2a07d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a07dc: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2A07DCu;
    SET_GPR_U32(ctx, 31, 0x2A07E4u);
    ctx->pc = 0x2A07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07DCu;
    // 0x2a07e0: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2A07DCu, 0x2A07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07E4u;
label_2a07e4:
    // 0x2a07e4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2A07E4u;
    SET_GPR_U32(ctx, 31, 0x2A07ECu);
    ctx->pc = 0x2A07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07E4u;
    // 0x2a07e8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2A07E4u, 0x2A07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07ECu;
label_2a07ec:
    // 0x2a07ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a07ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a07f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07f4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A07F4u;
    SET_GPR_U32(ctx, 31, 0x2A07FCu);
    ctx->pc = 0x2A07F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07F4u;
    // 0x2a07f8: 0x264603a0  addiu       $a2, $s2, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A07F4u, 0x2A07FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07FCu;
label_2a07fc:
    // 0x2a07fc: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2a0800: 0x1880019e  blez        $a0, . + 4 + (0x19E << 2)
    ctx->pc = 0x2A0800u;
    {
        const bool branch_taken_0x2a0800 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0800u;
        // 0x2a0804: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0800) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A0808u;
    // 0x2a0808: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x2a0808u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2a080c: 0x139d00  sll         $s3, $s3, 20
    ctx->pc = 0x2a080cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x2a0810: 0x245e99f0  addiu       $fp, $v0, -0x6610
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2a0814: 0x2931025  or          $v0, $s4, $s3
    ctx->pc = 0x2a0814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 19));
    // 0x2a0818: 0xafb400a4  sw          $s4, 0xA4($sp)
    ctx->pc = 0x2a0818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 20));
    // 0x2a081c: 0xafb300a0  sw          $s3, 0xA0($sp)
    ctx->pc = 0x2a081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 19));
    // 0x2a0820: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2a0820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a0824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0828: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2a0828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2a082c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a0830: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2a0830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2a0834: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2a0834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2a0838: 0xc656000c  lwc1        $f22, 0xC($s2)
    ctx->pc = 0x2a0838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a083c: 0x0  nop
    ctx->pc = 0x2a083cu;
    // NOP
label_2a0840:
    // 0x2a0840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0844: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2a0844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0848: 0x0  nop
    ctx->pc = 0x2a0848u;
    // NOP
    // 0x2a084c: 0x45020188  bc1fl       . + 4 + (0x188 << 2)
    ctx->pc = 0x2A084Cu;
    {
        const bool branch_taken_0x2a084c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a084c) {
            ctx->pc = 0x2A0850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A084Cu;
            // 0x2a0850: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E70u;
            goto label_2a0e70;
        }
    }
    ctx->pc = 0x2A0854u;
    // 0x2a0854: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x2a0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0858: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2a0858u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2a085c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2a085cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0860: 0x0  nop
    ctx->pc = 0x2a0860u;
    // NOP
    // 0x2a0864: 0x45000181  bc1f        . + 4 + (0x181 << 2)
    ctx->pc = 0x2A0864u;
    {
        const bool branch_taken_0x2a0864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0864u;
        // 0x2a0868: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0864) {
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A086Cu;
    // 0x2a086c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0870: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a0870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a0874: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2a0874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a0878: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a0878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a087c: 0xc4740a20  lwc1        $f20, 0xA20($v1)
    ctx->pc = 0x2a087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0880: 0xc44c0890  lwc1        $f12, 0x890($v0)
    ctx->pc = 0x2a0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0884: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x2A0884u;
    SET_GPR_U32(ctx, 31, 0x2A088Cu);
    ctx->pc = 0x2A0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0884u;
    // 0x2a0888: 0x4616a502  mul.s       $f20, $f20, $f22 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x2A0884u, 0x2A088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A088Cu;
label_2a088c:
    // 0x2a088c: 0xc7808d90  lwc1        $f0, -0x7270($gp)
    ctx->pc = 0x2a088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0890: 0xc6a30018  lwc1        $f3, 0x18($s5)
    ctx->pc = 0x2a0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0894: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a0894u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a0898: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2a0898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2a089c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a089cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a08a0: 0x4603b034  c.lt.s      $f22, $f3
    ctx->pc = 0x2a08a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a08a4: 0x0  nop
    ctx->pc = 0x2a08a4u;
    // NOP
    // 0x2a08a8: 0x0  nop
    ctx->pc = 0x2a08a8u;
    // NOP
    // 0x2a08ac: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x2a08acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x2a08b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A08B0u;
    {
        const bool branch_taken_0x2a08b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08B0u;
        // 0x2a08b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08b0) {
            ctx->pc = 0x2A08CCu;
            goto label_2a08cc;
        }
    }
    ctx->pc = 0x2A08B8u;
    // 0x2a08b8: 0x0  nop
    ctx->pc = 0x2a08b8u;
    // NOP
    // 0x2a08bc: 0x0  nop
    ctx->pc = 0x2a08bcu;
    // NOP
    // 0x2a08c0: 0x4603b5c3  div.s       $f23, $f22, $f3
    ctx->pc = 0x2a08c0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[23] = ctx->f[22] / ctx->f[3];
    // 0x2a08c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A08C4u;
    {
        const bool branch_taken_0x2a08c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08C4u;
        // 0x2a08c8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08c4) {
            ctx->pc = 0x2A08F4u;
            goto label_2a08f4;
        }
    }
    ctx->pc = 0x2A08CCu;
label_2a08cc:
    // 0x2a08cc: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x2a08ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a08d0: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x2a08d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x2a08d4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2a08d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a08d8: 0x0  nop
    ctx->pc = 0x2a08d8u;
    // NOP
    // 0x2a08dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A08DCu;
    {
        const bool branch_taken_0x2a08dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08DCu;
        // 0x2a08e0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08dc) {
            ctx->pc = 0x2A08F4u;
            goto label_2a08f4;
        }
    }
    ctx->pc = 0x2A08E4u;
    // 0x2a08e4: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x2a08e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x2a08e8: 0x0  nop
    ctx->pc = 0x2a08e8u;
    // NOP
    // 0x2a08ec: 0x0  nop
    ctx->pc = 0x2a08ecu;
    // NOP
    // 0x2a08f0: 0x460105c3  div.s       $f23, $f0, $f1
    ctx->pc = 0x2a08f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[23] = ctx->f[0] / ctx->f[1];
label_2a08f4:
    // 0x2a08f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a08f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08f8: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x2a08f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a08fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0900: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a0900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0904: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a0908: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2a0908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a090c: 0xc4e203e8  lwc1        $f2, 0x3E8($a3)
    ctx->pc = 0x2a090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0910: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a0910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0914: 0xc46003e0  lwc1        $f0, 0x3E0($v1)
    ctx->pc = 0x2a0914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0918: 0xc44103e4  lwc1        $f1, 0x3E4($v0)
    ctx->pc = 0x2a0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a091c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a091cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a0920: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2a0920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a0924: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x2A0924u;
    SET_GPR_U32(ctx, 31, 0x2A092Cu);
    ctx->pc = 0x2A0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0924u;
    // 0x2a0928: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x2A0924u, 0x2A092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A092Cu;
label_2a092c:
    // 0x2a092c: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2a092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0930: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x2a0930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a0934: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2a0934u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2a0938: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2a0938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a093c: 0x0  nop
    ctx->pc = 0x2a093cu;
    // NOP
    // 0x2a0940: 0x4502014a  bc1fl       . + 4 + (0x14A << 2)
    ctx->pc = 0x2A0940u;
    {
        const bool branch_taken_0x2a0940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0940) {
            ctx->pc = 0x2A0944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0940u;
            // 0x2a0944: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A0948u;
    // 0x2a0948: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x2a0948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a094c: 0x0  nop
    ctx->pc = 0x2a094cu;
    // NOP
    // 0x2a0950: 0x45000145  bc1f        . + 4 + (0x145 << 2)
    ctx->pc = 0x2A0950u;
    {
        const bool branch_taken_0x2a0950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0950u;
        // 0x2a0954: 0xc7a90054  lwc1        $f9, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0950) {
            ctx->pc = 0x2A0E68u;
            goto label_2a0e68;
        }
    }
    ctx->pc = 0x2A0958u;
    // 0x2a0958: 0x46090036  c.le.s      $f0, $f9
    ctx->pc = 0x2a0958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a095c: 0x0  nop
    ctx->pc = 0x2a095cu;
    // NOP
    // 0x2a0960: 0x45020142  bc1fl       . + 4 + (0x142 << 2)
    ctx->pc = 0x2A0960u;
    {
        const bool branch_taken_0x2a0960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0960) {
            ctx->pc = 0x2A0964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0960u;
            // 0x2a0964: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A0968u;
    // 0x2a0968: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x2a0968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a096c: 0x0  nop
    ctx->pc = 0x2a096cu;
    // NOP
    // 0x2a0970: 0x4500013d  bc1f        . + 4 + (0x13D << 2)
    ctx->pc = 0x2A0970u;
    {
        const bool branch_taken_0x2a0970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0970u;
        // 0x2a0974: 0xc7a40058  lwc1        $f4, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0970) {
            ctx->pc = 0x2A0E68u;
            goto label_2a0e68;
        }
    }
    ctx->pc = 0x2A0978u;
    // 0x2a0978: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2a0978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a097c: 0x0  nop
    ctx->pc = 0x2a097cu;
    // NOP
    // 0x2a0980: 0x4502013a  bc1fl       . + 4 + (0x13A << 2)
    ctx->pc = 0x2A0980u;
    {
        const bool branch_taken_0x2a0980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0980) {
            ctx->pc = 0x2A0984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0980u;
            // 0x2a0984: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A0988u;
    // 0x2a0988: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x2a0988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a098c: 0x0  nop
    ctx->pc = 0x2a098cu;
    // NOP
    // 0x2a0990: 0x45020136  bc1fl       . + 4 + (0x136 << 2)
    ctx->pc = 0x2A0990u;
    {
        const bool branch_taken_0x2a0990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0990) {
            ctx->pc = 0x2A0994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0990u;
            // 0x2a0994: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A0998u;
    // 0x2a0998: 0x56c00012  bnel        $s6, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A0998u;
    {
        const bool branch_taken_0x2a0998 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0998) {
            ctx->pc = 0x2A099Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0998u;
            // 0x2a099c: 0xc6a10028  lwc1        $f1, 0x28($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A09E4u;
            goto label_2a09e4;
        }
    }
    ctx->pc = 0x2A09A0u;
    // 0x2a09a0: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A09A0u;
    SET_GPR_U32(ctx, 31, 0x2A09A8u);
    ctx->pc = 0x2A09A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A09A0u;
    // 0x2a09a4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A09A0u, 0x2A09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09A8u;
label_2a09a8:
    // 0x2a09a8: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x2a09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a09ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a09b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a09b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09b4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x2a09b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a09b8: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a09bc: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2a09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a09c0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2a09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a09c4: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x2a09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x2a09c8: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2a09cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a09ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a09d0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2a09d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a09d4: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x2a09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a09d8: 0xc7a90054  lwc1        $f9, 0x54($sp)
    ctx->pc = 0x2a09d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a09dc: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x2a09dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a09e0: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x2a09e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a09e4:
    // 0x2a09e4: 0x0  nop
    ctx->pc = 0x2a09e4u;
    // NOP
    // 0x2a09e8: 0x0  nop
    ctx->pc = 0x2a09e8u;
    // NOP
    // 0x2a09ec: 0x4602c983  div.s       $f6, $f25, $f2
    ctx->pc = 0x2a09ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[6] = ctx->f[25] / ctx->f[2];
    // 0x2a09f0: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x2a09f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a09f4: 0xc7c80010  lwc1        $f8, 0x10($fp)
    ctx->pc = 0x2a09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a09f8: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2a09f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2a09fc: 0x0  nop
    ctx->pc = 0x2a09fcu;
    // NOP
    // 0x2a0a00: 0x0  nop
    ctx->pc = 0x2a0a00u;
    // NOP
    // 0x2a0a04: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2a0a04u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x2a0a08: 0xc6a3002c  lwc1        $f3, 0x2C($s5)
    ctx->pc = 0x2a0a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0a0c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2a0a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2a0a10: 0xc7828d94  lwc1        $f2, -0x726C($gp)
    ctx->pc = 0x2a0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0a14: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x2a0a14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x2a0a18: 0x8fc50024  lw          $a1, 0x24($fp)
    ctx->pc = 0x2a0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a0a1c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2a0a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2a0a20: 0xc78a8d98  lwc1        $f10, -0x7268($gp)
    ctx->pc = 0x2a0a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a0a24: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x2a0a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x2a0a28: 0x52823  negu        $a1, $a1
    ctx->pc = 0x2a0a28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2a0a2c: 0x461918c0  add.s       $f3, $f3, $f25
    ctx->pc = 0x2a0a2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[25]);
    // 0x2a0a30: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2a0a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2a0a34: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2a0a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a0a38: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x2a0a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x2a0a3c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2a0a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2a0a40: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2a0a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2a0a44: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x2a0a44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x2a0a48: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0a4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a0a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0a50: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2a0a50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2a0a54: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2a0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2a0a58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0a5c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a0a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2a0a60: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a0a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a0a64: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0a64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a0a68: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2a0a68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0a6c: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x2a0a6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a0a70: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0a70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a0a74: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x2a0a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a0a78: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x2a0a78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x2a0a7c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a0a80: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2a0a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2a0a84: 0x25085c60  addiu       $t0, $t0, 0x5C60
    ctx->pc = 0x2a0a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23648));
    // 0x2a0a88: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2a0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2a0a8c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a0a8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a0a90: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2a0a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2a0a94: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2a0a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2a0a98: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x2a0a98u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x2a0a9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0aa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0aa4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a0aa8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a0aac: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2a0aacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a0ab0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a0ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a0ab4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a0ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0ab8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2a0ab8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a0abc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a0abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a0ac0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0ac4: 0x44864800  mtc1        $a2, $f9
    ctx->pc = 0x2a0ac4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2a0ac8: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2a0ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2a0acc: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x2a0accu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a0ad0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a0ad0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a0ad4: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x2a0ad4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a0ad8: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2a0ad8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2a0adc: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2a0adcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2a0ae0: 0xc7c1001c  lwc1        $f1, 0x1C($fp)
    ctx->pc = 0x2a0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0ae4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a0ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a0ae8: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x2a0ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a0aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a0af0: 0x46054202  mul.s       $f8, $f8, $f5
    ctx->pc = 0x2a0af0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2a0af4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a0af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a0af8: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x2a0af8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2a0afc: 0x4607b9c2  mul.s       $f7, $f23, $f7
    ctx->pc = 0x2a0afcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[23], ctx->f[7]);
    // 0x2a0b00: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2a0b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2a0b04: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2a0b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a0b08: 0x461848c2  mul.s       $f3, $f9, $f24
    ctx->pc = 0x2a0b08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x2a0b0c: 0x46181282  mul.s       $f10, $f2, $f24
    ctx->pc = 0x2a0b0cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x2a0b10: 0x46003964  .word       0x46003964                   # cvt.w.s     $f5, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x2a0b14: 0x44102800  mfc1        $s0, $f5
    ctx->pc = 0x2a0b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2a0b18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a0b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a0b1c: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x2a0b1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x2a0b20: 0x46020141  sub.s       $f5, $f0, $f2
    ctx->pc = 0x2a0b20u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a0b24: 0x46030981  sub.s       $f6, $f1, $f3
    ctx->pc = 0x2a0b24u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a0b28: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x2a0b28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2a0b2c: 0x460901c1  sub.s       $f7, $f0, $f9
    ctx->pc = 0x2a0b2cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2a0b30: 0x2708025  or          $s0, $s3, $s0
    ctx->pc = 0x2a0b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
    // 0x2a0b34: 0x460a0a00  add.s       $f8, $f1, $f10
    ctx->pc = 0x2a0b34u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2a0b38: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x2a0b38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a0b3c: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2a0b3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a0b40: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x2a0b40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a0b44: 0x460308c0  add.s       $f3, $f1, $f3
    ctx->pc = 0x2a0b44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a0b48: 0xe7a70080  swc1        $f7, 0x80($sp)
    ctx->pc = 0x2a0b48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a0b4c: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x2a0b4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x2a0b50: 0xe7a80084  swc1        $f8, 0x84($sp)
    ctx->pc = 0x2a0b50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a0b54: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2a0b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2a0b58: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2a0b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a0b5c: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x2a0b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x2a0b60: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x2a0b60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a0b64: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x2a0b64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a0b68: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a0b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a0b6c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2a0b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a0b70: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2a0b70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a0b74: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x2a0b74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a0b78: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x2a0b78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a0b7c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A0B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B84u);
    ctx->pc = 0x2A0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B7Cu;
    // 0x2a0b80: 0xe7a40088  swc1        $f4, 0x88($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A0B7Cu, 0x2A0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B84u;
label_2a0b84:
    // 0x2a0b84: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0b88: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x2a0b88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a0b8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0b90: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a0b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0b94: 0xa0690003  sb          $t1, 0x3($v1)
    ctx->pc = 0x2a0b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a0b98: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2a0b9c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2a0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2a0ba0: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x2a0ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0ba4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a0ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0ba8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2a0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2a0bac: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x2a0bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2a0bb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0bb4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a0bb8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2a0bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a0bbc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a0bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0bc0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a0bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a0bc4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0bc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0bc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a0bcc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a0bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0bd0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2a0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2a0bd4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a0bd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0bdc: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a0be0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0be4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a0be8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0bec: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a0bf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0bf4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a0bf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0bfc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a0bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a0c00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0c04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a0c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a0c08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c0c: 0xaf8893a0  sw          $t0, -0x6C60($gp)
    ctx->pc = 0x2a0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 8));
    // 0x2a0c10: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2a0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2a0c14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c18: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2a0c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0c1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0c20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c24: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x2a0c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0c28: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a0c2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c30: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2a0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0c34: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0c34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a0c38: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2a0c38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a0c3c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0c3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a0c40: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2a0c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a0c44: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2a0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0c48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c4c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2a0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a0c50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a0c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a0c54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a0c58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a0c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0c5c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0c64: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a0c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a0c68: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x2a0c68u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a0c6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c70: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2a0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0c74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a0c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a0c78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a0c7c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a0c80: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a0c84: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a0c88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a0c90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0c94: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a0c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a0c98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0c9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a0c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a0ca0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2a0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2a0ca4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0ca8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0cac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0cb0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a0cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a0cb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0cb8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0cb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a0cbc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a0cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a0cc0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2a0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a0cc4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0cc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a0ccc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0cd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0cd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0cd8: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2a0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2a0cdc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a0ce0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0ce4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0ce8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2a0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0cec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0cf0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2a0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0cf4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0cf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a0cf8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2a0cf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a0cfc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2a0cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2a0d00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0d00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a0d04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a0d04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0d08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0d10: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a0d14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a0d1c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a0d20: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a0d24: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a0d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a0d28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a0d2c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2a0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d30: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x2a0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0d34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a0d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a0d38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a0d3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d40: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2a0d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0d44: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a0d48: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2a0d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a0d4c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a0d50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a0d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a0d54: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2a0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0d58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0d60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a0d64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d68: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a0d6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a0d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a0d70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0d74: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a0d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a0d78: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d7c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a0d80: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a0d84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a0d88: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a0d8c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a0d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a0d90: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a0d94: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a0d98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0d9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a0d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a0da0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0da4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0da8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2a0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2a0dac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0db0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a0db4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0db8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a0db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a0dbc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0dc0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a0dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a0dc4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a0dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a0dc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a0dcc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0dd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a0dd4: 0x16c70024  bne         $s6, $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A0DD4u;
    {
        const bool branch_taken_0x2a0dd4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 7));
        ctx->pc = 0x2A0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DD4u;
        // 0x2a0dd8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0dd4) {
            ctx->pc = 0x2A0E68u;
            goto label_2a0e68;
        }
    }
    ctx->pc = 0x2A0DDCu;
    // 0x2a0ddc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a0de0: 0x3c036cd0  lui         $v1, 0x6CD0
    ctx->pc = 0x2a0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27856 << 16));
    // 0x2a0de4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0de8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a0de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a0dec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a0decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a0df0: 0x34058017  ori         $a1, $zero, 0x8017
    ctx->pc = 0x2a0df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32791);
    // 0x2a0df4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0df8: 0x3c0490ae  lui         $a0, 0x90AE
    ctx->pc = 0x2a0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37038 << 16));
    // 0x2a0dfc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a0e00: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x2a0e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2a0e04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e08: 0x3c02eeee  lui         $v0, 0xEEEE
    ctx->pc = 0x2a0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61166 << 16));
    // 0x2a0e0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a0e10: 0x3442eeee  ori         $v0, $v0, 0xEEEE
    ctx->pc = 0x2a0e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x2a0e14: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2a0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a0e1c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2a0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2a0e20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a0e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e24: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a0e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a0e2c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2a0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2a0e30: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x2a0e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x2a0e34: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a0e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a0e3c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a0e44: 0xa1090003  sb          $t1, 0x3($t0)
    ctx->pc = 0x2a0e44u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a0e48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e4c: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0e50: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2a0e54: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2a0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a0e58: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x2a0e58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2a0e5c: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2a0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2a0e60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0E60u;
    {
        const bool branch_taken_0x2a0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E60u;
        // 0x2a0e64: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e60) {
            ctx->pc = 0x2A0E6Cu;
            goto label_2a0e6c;
        }
    }
    ctx->pc = 0x2A0E68u;
label_2a0e68:
    // 0x2a0e68: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2a0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2a0e6c:
    // 0x2a0e6c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a0e6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2a0e70:
    // 0x2a0e70: 0x2e4102a  slt         $v0, $s7, $a0
    ctx->pc = 0x2a0e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a0e74: 0x5440fe72  bnel        $v0, $zero, . + 4 + (-0x18E << 2)
    ctx->pc = 0x2A0E74u;
    {
        const bool branch_taken_0x2a0e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e74) {
            ctx->pc = 0x2A0E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0E74u;
            // 0x2a0e78: 0xc656000c  lwc1        $f22, 0xC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0840;
        }
    }
    ctx->pc = 0x2A0E7Cu;
label_2a0e7c:
    // 0x2a0e7c: 0x12c00026  beqz        $s6, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A0E7Cu;
    {
        const bool branch_taken_0x2a0e7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E7Cu;
        // 0x2a0e80: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e7c) {
            ctx->pc = 0x2A0F18u;
            goto label_2a0f18;
        }
    }
    ctx->pc = 0x2A0E84u;
    // 0x2a0e84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a0e88: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e8c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2a0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2a0e90: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a0e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a0e98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0e9c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x2a0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x2a0ea0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a0ea4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a0ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a0ea8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a0eac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a0eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a0eb4: 0x36c58000  ori         $a1, $s6, 0x8000
    ctx->pc = 0x2a0eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32768);
    // 0x2a0eb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a0ebc: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x2a0ec0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0ec4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2a0ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2a0ec8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2a0ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2a0ecc: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x2a0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x2a0ed0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0ed4: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x2a0ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0ed8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a0edc: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x2a0edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x2a0ee0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a0ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a0ee4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2a0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a0ee8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2a0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2a0eec: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a0ef0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2a0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2a0ef4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a0ef8: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x2a0ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a0efc: 0x24639700  addiu       $v1, $v1, -0x6900
    ctx->pc = 0x2a0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940416));
    // 0x2a0f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0f04: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2a0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a0f08: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2a0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a0f0c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a0f10: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2a0f10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a0f14: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2a0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_2a0f18:
    // 0x2a0f18: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2a0f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a0f1c: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2a0f1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a0f20: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x2a0f20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a0f24: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2a0f24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a0f28: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x2a0f28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a0f2c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2a0f2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a0f30: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2a0f30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a0f34: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2a0f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a0f38: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2a0f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0f3c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2a0f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0f40: 0xc7ba0180  lwc1        $f26, 0x180($sp)
    ctx->pc = 0x2a0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a0f44: 0xc7b90178  lwc1        $f25, 0x178($sp)
    ctx->pc = 0x2a0f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a0f48: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x2a0f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a0f4c: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x2a0f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a0f50: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x2a0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a0f54: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2a0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a0f58: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2a0f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F5Cu;
        // 0x2a0f60: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0F64u;
}

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

// Function: bgSmashGlass
// Address: 0x259780 - 0x2599bc
void bgSmashGlass_0x259780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgSmashGlass_0x259780");
#endif

    switch (ctx->pc) {
        case 0x2597c8u: goto label_2597c8;
        case 0x259900u: goto label_259900;
        case 0x259954u: goto label_259954;
        case 0x259968u: goto label_259968;
        case 0x25997cu: goto label_25997c;
        case 0x259990u: goto label_259990;
        default: break;
    }

    ctx->pc = 0x259780u;

    // 0x259780: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x259784: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x259784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x259788: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x259788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x25978c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25978cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259790: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x259790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x259794: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x259794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259798: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x259798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x25979c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25979cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597a0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2597a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2597a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2597a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597a8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2597a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2597ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2597acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597b0: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2597b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2597b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2597b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2597b8: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2597b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2597bc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2597bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2597c0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2597C0u;
    SET_GPR_U32(ctx, 31, 0x2597C8u);
    ctx->pc = 0x2597C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597C0u;
    // 0x2597c4: 0x26160010  addiu       $s6, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2597C0u, 0x2597C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597C8u;
label_2597c8:
    // 0x2597c8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2597c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2597cc: 0x30550003  andi        $s5, $v0, 0x3
    ctx->pc = 0x2597ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2597d0: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2597d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2597d4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2597d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2597d8: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x2597d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2597dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2597dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2597e0: 0xc6070014  lwc1        $f7, 0x14($s0)
    ctx->pc = 0x2597e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2597e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2597e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597e8: 0xc6080060  lwc1        $f8, 0x60($s0)
    ctx->pc = 0x2597e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2597ec: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2597ecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2597f0: 0xc6090064  lwc1        $f9, 0x64($s0)
    ctx->pc = 0x2597f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2597f4: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x2597f4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2597f8: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x2597f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2597fc: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x2597fcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x259800: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x259800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x259804: 0x46014a41  sub.s       $f9, $f9, $f1
    ctx->pc = 0x259804u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x259808: 0x46005ac1  sub.s       $f11, $f11, $f0
    ctx->pc = 0x259808u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x25980c: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x25980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x259810: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x259810u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x259814: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x259814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259818: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x259818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25981c: 0x46063382  mul.s       $f14, $f6, $f6
    ctx->pc = 0x25981cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x259820: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x259820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x259824: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x259824u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x259828: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x259828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25982c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25982cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x259830: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x259830u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x259834: 0x8f83a23c  lw          $v1, -0x5DC4($gp)
    ctx->pc = 0x259834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x259838: 0x460d3942  mul.s       $f5, $f7, $f13
    ctx->pc = 0x259838u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x25983c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x25983cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x259840: 0x460b3002  mul.s       $f0, $f6, $f11
    ctx->pc = 0x259840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x259844: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x259844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x259848: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x259848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x25984c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25984cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259850: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x259850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
    // 0x259854: 0x46073c42  mul.s       $f17, $f7, $f7
    ctx->pc = 0x259854u;
    ctx->f[17] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x259858: 0x460b4082  mul.s       $f2, $f8, $f11
    ctx->pc = 0x259858u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x25985c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259860: 0x460d4bc2  mul.s       $f15, $f9, $f13
    ctx->pc = 0x259860u;
    ctx->f[15] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x259864: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x259864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259868: 0x46084102  mul.s       $f4, $f8, $f8
    ctx->pc = 0x259868u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x25986c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x25986cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x259870: 0x46094c02  mul.s       $f16, $f9, $f9
    ctx->pc = 0x259870u;
    ctx->f[16] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x259874: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x259874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x259878: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x259878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x25987c: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x25987cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x259880: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x259880u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x259884: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x259884u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x259888: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x259888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25988c: 0x46117380  add.s       $f14, $f14, $f17
    ctx->pc = 0x25988cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[17]);
    // 0x259890: 0x460f1080  add.s       $f2, $f2, $f15
    ctx->pc = 0x259890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x259894: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x259894u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x259898: 0x46102100  add.s       $f4, $f4, $f16
    ctx->pc = 0x259898u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[16]);
    // 0x25989c: 0xe7a90034  swc1        $f9, 0x34($sp)
    ctx->pc = 0x25989cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2598a0: 0x460a1982  mul.s       $f6, $f3, $f10
    ctx->pc = 0x2598a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2598a4: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2598a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2598a8: 0x460319c2  mul.s       $f7, $f3, $f3
    ctx->pc = 0x2598a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2598ac: 0xe7ab0040  swc1        $f11, 0x40($sp)
    ctx->pc = 0x2598acu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2598b0: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x2598b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2598b4: 0xe7ad0044  swc1        $f13, 0x44($sp)
    ctx->pc = 0x2598b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2598b8: 0x46057380  add.s       $f14, $f14, $f5
    ctx->pc = 0x2598b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
    // 0x2598bc: 0xe7aa0048  swc1        $f10, 0x48($sp)
    ctx->pc = 0x2598bcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2598c0: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2598c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2598c4: 0x26080038  addiu       $t0, $s0, 0x38
    ctx->pc = 0x2598c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x2598c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2598c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2598cc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2598ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598d0: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2598d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2598d4: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x2598d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2598d8: 0x260b0088  addiu       $t3, $s0, 0x88
    ctx->pc = 0x2598d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2598dc: 0x0  nop
    ctx->pc = 0x2598dcu;
    // NOP
    // 0x2598e0: 0x0  nop
    ctx->pc = 0x2598e0u;
    // NOP
    // 0x2598e4: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x2598e4u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    // 0x2598e8: 0x0  nop
    ctx->pc = 0x2598e8u;
    // NOP
    // 0x2598ec: 0x0  nop
    ctx->pc = 0x2598ecu;
    // NOP
    // 0x2598f0: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2598f0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2598f4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2598f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2598f8: 0xc0a665c  jal         func_299970
    ctx->pc = 0x2598F8u;
    SET_GPR_U32(ctx, 31, 0x259900u);
    ctx->pc = 0x2598FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598F8u;
    // 0x2598fc: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x299970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299970u, 0x2598F8u, 0x259900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259900u;
label_259900:
    // 0x259900: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x259900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x259904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25990c: 0x12a20013  beq         $s5, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25990Cu;
    {
        const bool branch_taken_0x25990c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x259910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25990Cu;
        // 0x259910: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25990c) {
            ctx->pc = 0x25995Cu;
            goto label_25995c;
        }
    }
    ctx->pc = 0x259914u;
    // 0x259914: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x259914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x259918: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259918u;
    {
        const bool branch_taken_0x259918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259918) {
            ctx->pc = 0x25991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259918u;
            // 0x25991c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259930u;
            goto label_259930;
        }
    }
    ctx->pc = 0x259920u;
    // 0x259920: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x259920u;
    {
        const bool branch_taken_0x259920 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x259924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259920u;
        // 0x259924: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259920) {
            ctx->pc = 0x259948u;
            goto label_259948;
        }
    }
    ctx->pc = 0x259928u;
    // 0x259928: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x259928u;
    {
        const bool branch_taken_0x259928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259928u;
        // 0x25992c: 0xdfb600c0  ld          $s6, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259928) {
            ctx->pc = 0x259998u;
            goto label_259998;
        }
    }
    ctx->pc = 0x259930u;
label_259930:
    // 0x259930: 0x12a2000f  beq         $s5, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x259930u;
    {
        const bool branch_taken_0x259930 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x259934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259930u;
        // 0x259934: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259930) {
            ctx->pc = 0x259970u;
            goto label_259970;
        }
    }
    ctx->pc = 0x259938u;
    // 0x259938: 0x12a20012  beq         $s5, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x259938u;
    {
        const bool branch_taken_0x259938 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x25993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259938u;
        // 0x25993c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259938) {
            ctx->pc = 0x259984u;
            goto label_259984;
        }
    }
    ctx->pc = 0x259940u;
    // 0x259940: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x259940u;
    {
        const bool branch_taken_0x259940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259940u;
        // 0x259944: 0xdfb600c0  ld          $s6, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259940) {
            ctx->pc = 0x259998u;
            goto label_259998;
        }
    }
    ctx->pc = 0x259948u;
label_259948:
    // 0x259948: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x259948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25994c: 0xc081546  jal         func_205518
    ctx->pc = 0x25994Cu;
    SET_GPR_U32(ctx, 31, 0x259954u);
    ctx->pc = 0x259950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25994Cu;
    // 0x259950: 0x240400c9  addiu       $a0, $zero, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x25994Cu, 0x259954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259954u;
label_259954:
    // 0x259954: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x259954u;
    {
        const bool branch_taken_0x259954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259954u;
        // 0x259958: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259954) {
            ctx->pc = 0x259994u;
            goto label_259994;
        }
    }
    ctx->pc = 0x25995Cu;
label_25995c:
    // 0x25995c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25995cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259960: 0xc081546  jal         func_205518
    ctx->pc = 0x259960u;
    SET_GPR_U32(ctx, 31, 0x259968u);
    ctx->pc = 0x259964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259960u;
    // 0x259964: 0x240400ca  addiu       $a0, $zero, 0xCA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x259960u, 0x259968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259968u;
label_259968:
    // 0x259968: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259968u;
    {
        const bool branch_taken_0x259968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259968u;
        // 0x25996c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259968) {
            ctx->pc = 0x259994u;
            goto label_259994;
        }
    }
    ctx->pc = 0x259970u;
label_259970:
    // 0x259970: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x259970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259974: 0xc081546  jal         func_205518
    ctx->pc = 0x259974u;
    SET_GPR_U32(ctx, 31, 0x25997Cu);
    ctx->pc = 0x259978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259974u;
    // 0x259978: 0x240400cb  addiu       $a0, $zero, 0xCB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x259974u, 0x25997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25997Cu;
label_25997c:
    // 0x25997c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25997Cu;
    {
        const bool branch_taken_0x25997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25997Cu;
        // 0x259980: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25997c) {
            ctx->pc = 0x259994u;
            goto label_259994;
        }
    }
    ctx->pc = 0x259984u;
label_259984:
    // 0x259984: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x259984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259988: 0xc081546  jal         func_205518
    ctx->pc = 0x259988u;
    SET_GPR_U32(ctx, 31, 0x259990u);
    ctx->pc = 0x25998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259988u;
    // 0x25998c: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x259988u, 0x259990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259990u;
label_259990:
    // 0x259990: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x259990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_259994:
    // 0x259994: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x259994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_259998:
    // 0x259998: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x259998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25999c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x25999cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2599a0: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2599a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2599a4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2599a8: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2599a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2599ac: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2599acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2599b0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2599b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2599b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2599B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2599B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599B4u;
        // 0x2599b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2599B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2599BCu;
}

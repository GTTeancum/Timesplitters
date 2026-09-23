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

// Function: specialfxTimeSplitterHandsGfx
// Address: 0x2ab870 - 0x2abd04
void specialfxTimeSplitterHandsGfx_0x2ab870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxTimeSplitterHandsGfx_0x2ab870");
#endif

    switch (ctx->pc) {
        case 0x2ab8c4u: goto label_2ab8c4;
        case 0x2ab8d0u: goto label_2ab8d0;
        case 0x2ab9e4u: goto label_2ab9e4;
        case 0x2aba50u: goto label_2aba50;
        case 0x2abaa8u: goto label_2abaa8;
        case 0x2abab8u: goto label_2abab8;
        case 0x2abac8u: goto label_2abac8;
        case 0x2abb6cu: goto label_2abb6c;
        case 0x2abcb4u: goto label_2abcb4;
        case 0x2abcc8u: goto label_2abcc8;
        case 0x2abcd0u: goto label_2abcd0;
        default: break;
    }

    ctx->pc = 0x2ab870u;

    // 0x2ab870: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2ab870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2ab874: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ab874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ab878: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2ab878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2ab87c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2ab87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2ab880: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab884: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x2ab884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ab888: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x2ab888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x2ab88c: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x2ab88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x2ab890: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x2ab890u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x2ab894: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2ab894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2ab898: 0x2671c268  addiu       $s1, $s3, -0x3D98
    ctx->pc = 0x2ab898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2ab89c: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x2ab89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x2ab8a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ab8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab8a4: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2ab8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2ab8a8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ab8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ab8ac: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x2ab8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x2ab8b0: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2ab8b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2ab8b4: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2ab8b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2ab8b8: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2ab8b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2ab8bc: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2AB8BCu;
    SET_GPR_U32(ctx, 31, 0x2AB8C4u);
    ctx->pc = 0x2AB8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8BCu;
    // 0x2ab8c0: 0xc4540034  lwc1        $f20, 0x34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2AB8BCu, 0x2AB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8C4u;
label_2ab8c4:
    // 0x2ab8c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ab8c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8c8: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2AB8C8u;
    SET_GPR_U32(ctx, 31, 0x2AB8D0u);
    ctx->pc = 0x2AB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8C8u;
    // 0x2ab8cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2AB8C8u, 0x2AB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8D0u;
label_2ab8d0:
    // 0x2ab8d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ab8d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8d4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ab8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ab8d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab8dc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ab8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ab8e0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2ab8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab8e4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2ab8e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab8e8: 0x0  nop
    ctx->pc = 0x2ab8e8u;
    // NOP
    // 0x2ab8ec: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x2AB8ECu;
    {
        const bool branch_taken_0x2ab8ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab8ec) {
            ctx->pc = 0x2AB8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB8ECu;
            // 0x2ab8f0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB9E8u;
            goto label_2ab9e8;
        }
    }
    ctx->pc = 0x2AB8F4u;
    // 0x2ab8f4: 0xc7808ec4  lwc1        $f0, -0x713C($gp)
    ctx->pc = 0x2ab8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab8f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ab8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab8fc: 0x0  nop
    ctx->pc = 0x2ab8fcu;
    // NOP
    // 0x2ab900: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x2AB900u;
    {
        const bool branch_taken_0x2ab900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB900u;
        // 0x2ab904: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab900) {
            ctx->pc = 0x2AB9E4u;
            goto label_2ab9e4;
        }
    }
    ctx->pc = 0x2AB908u;
    // 0x2ab908: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2ab908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ab90c: 0xc7848ec8  lwc1        $f4, -0x7138($gp)
    ctx->pc = 0x2ab90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab910: 0xc7818ecc  lwc1        $f1, -0x7134($gp)
    ctx->pc = 0x2ab910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab918: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab91c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ab91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab920: 0x0  nop
    ctx->pc = 0x2ab920u;
    // NOP
    // 0x2ab924: 0x0  nop
    ctx->pc = 0x2ab924u;
    // NOP
    // 0x2ab928: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ab928u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ab92c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ab92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ab930: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2ab930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2ab934: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2ab934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ab938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab93c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2ab93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ab940: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x2ab944: 0xc4630028  lwc1        $f3, 0x28($v1)
    ctx->pc = 0x2ab944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab948: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x2ab948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32639);
    // 0x2ab94c: 0x460d0a40  add.s       $f9, $f1, $f13
    ctx->pc = 0x2ab94cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x2ab950: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x2ab950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ab954: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2ab954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2ab958: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x2ab958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ab95c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ab95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ab960: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x2ab960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ab964: 0x46041940  add.s       $f5, $f3, $f4
    ctx->pc = 0x2ab964u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2ab968: 0x8f8bb234  lw          $t3, -0x4DCC($gp)
    ctx->pc = 0x2ab968u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2ab96c: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x2ab96cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2ab970: 0x8f84b998  lw          $a0, -0x4668($gp)
    ctx->pc = 0x2ab970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
    // 0x2ab974: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2ab974u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ab978: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ab978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ab97c: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x2ab97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab980: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2ab980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ab984: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ab984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ab988: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2ab988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab98c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2ab98cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2ab990: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2ab990u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ab994: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2ab994u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ab998: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ab99c: 0xe7a90034  swc1        $f9, 0x34($sp)
    ctx->pc = 0x2ab99cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ab9a0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab9a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab9a4: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x2ab9a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2ab9a8: 0xe7a80038  swc1        $f8, 0x38($sp)
    ctx->pc = 0x2ab9a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ab9ac: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x2ab9acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ab9b0: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2ab9b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ab9b4: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2ab9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2ab9b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2ab9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ab9bc: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x2ab9bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x2ab9c0: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2ab9c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ab9c4: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2ab9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2ab9c8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2ab9c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab9cc: 0x8d6506e4  lw          $a1, 0x6E4($t3)
    ctx->pc = 0x2ab9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1764)));
    // 0x2ab9d0: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2ab9d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab9d4: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x2ab9d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ab9d8: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x2ab9d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ab9dc: 0xc0aabfe  jal         func_2AAFF8
    ctx->pc = 0x2AB9DCu;
    SET_GPR_U32(ctx, 31, 0x2AB9E4u);
    ctx->pc = 0x2AB9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9DCu;
    // 0x2ab9e0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAFF8u, 0x2AB9DCu, 0x2AB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9E4u;
label_2ab9e4:
    // 0x2ab9e4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ab9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ab9e8:
    // 0x2ab9e8: 0x2671c268  addiu       $s1, $s3, -0x3D98
    ctx->pc = 0x2ab9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2ab9ec: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x2ab9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ab9f0: 0xc7828ed0  lwc1        $f2, -0x7130($gp)
    ctx->pc = 0x2ab9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab9f4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2ab9f8: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2ab9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab9fc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2ab9fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aba00: 0x450000af  bc1f        . + 4 + (0xAF << 2)
    ctx->pc = 0x2ABA00u;
    {
        const bool branch_taken_0x2aba00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aba00) {
            ctx->pc = 0x2ABCC0u;
            goto label_2abcc0;
        }
    }
    ctx->pc = 0x2ABA08u;
    // 0x2aba08: 0xc7808ed4  lwc1        $f0, -0x712C($gp)
    ctx->pc = 0x2aba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aba0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aba0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aba10: 0x0  nop
    ctx->pc = 0x2aba10u;
    // NOP
    // 0x2aba14: 0x450000aa  bc1f        . + 4 + (0xAA << 2)
    ctx->pc = 0x2ABA14u;
    {
        const bool branch_taken_0x2aba14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA14u;
        // 0x2aba18: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba14) {
            ctx->pc = 0x2ABCC0u;
            goto label_2abcc0;
        }
    }
    ctx->pc = 0x2ABA1Cu;
    // 0x2aba1c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2aba1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2aba20: 0xc7808ed8  lwc1        $f0, -0x7128($gp)
    ctx->pc = 0x2aba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aba24: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2aba24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2aba28: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x2aba28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x2aba2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba30: 0x8c4506e0  lw          $a1, 0x6E0($v0)
    ctx->pc = 0x2aba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    // 0x2aba34: 0x0  nop
    ctx->pc = 0x2aba34u;
    // NOP
    // 0x2aba38: 0x0  nop
    ctx->pc = 0x2aba38u;
    // NOP
    // 0x2aba3c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x2aba3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x2aba40: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2aba40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2aba44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2aba44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2aba48: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2ABA48u;
    SET_GPR_U32(ctx, 31, 0x2ABA50u);
    ctx->pc = 0x2ABA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA48u;
    // 0x2aba4c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2ABA48u, 0x2ABA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA50u;
label_2aba50:
    // 0x2aba50: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2aba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2aba54: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2aba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2aba58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aba58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aba5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aba5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba60: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2aba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aba64: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2aba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aba68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aba6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2aba70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2aba74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2aba78: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x2aba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aba7c: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x2aba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aba80: 0xc4650020  lwc1        $f5, 0x20($v1)
    ctx->pc = 0x2aba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aba84: 0xc4a2002c  lwc1        $f2, 0x2C($a1)
    ctx->pc = 0x2aba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aba88: 0x8f84b99c  lw          $a0, -0x4664($gp)
    ctx->pc = 0x2aba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949276)));
    // 0x2aba8c: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2aba8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2aba90: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2aba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2aba94: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x2aba94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2aba98: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2aba98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2aba9c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2aba9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2abaa0: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x2ABAA0u;
    SET_GPR_U32(ctx, 31, 0x2ABAA8u);
    ctx->pc = 0x2ABAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABAA0u;
    // 0x2abaa4: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x2ABAA0u, 0x2ABAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAA8u;
label_2abaa8:
    // 0x2abaa8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2abaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2abaac: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x2abaacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2abab0: 0x245199f0  addiu       $s1, $v0, -0x6610
    ctx->pc = 0x2abab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x2abab4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2abab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2abab8:
    // 0x2abab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ababc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ababcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abac0: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x2ABAC0u;
    SET_GPR_U32(ctx, 31, 0x2ABAC8u);
    ctx->pc = 0x2ABAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABAC0u;
    // 0x2abac4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x2ABAC0u, 0x2ABAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAC8u;
label_2abac8:
    // 0x2abac8: 0xc7a600bc  lwc1        $f6, 0xBC($sp)
    ctx->pc = 0x2abac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2abacc: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x2abaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2abad0: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2abad0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2abad4: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2abad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abad8: 0x0  nop
    ctx->pc = 0x2abad8u;
    // NOP
    // 0x2abadc: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
    ctx->pc = 0x2ABADCu;
    {
        const bool branch_taken_0x2abadc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abadc) {
            ctx->pc = 0x2ABAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABADCu;
            // 0x2abae0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABCB8u;
            goto label_2abcb8;
        }
    }
    ctx->pc = 0x2ABAE4u;
    // 0x2abae4: 0x46062836  c.le.s      $f5, $f6
    ctx->pc = 0x2abae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abae8: 0x0  nop
    ctx->pc = 0x2abae8u;
    // NOP
    // 0x2abaec: 0x45000071  bc1f        . + 4 + (0x71 << 2)
    ctx->pc = 0x2ABAECu;
    {
        const bool branch_taken_0x2abaec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAECu;
        // 0x2abaf0: 0xc7ad00b4  lwc1        $f13, 0xB4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abaec) {
            ctx->pc = 0x2ABCB4u;
            goto label_2abcb4;
        }
    }
    ctx->pc = 0x2ABAF4u;
    // 0x2abaf4: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2abaf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abaf8: 0x0  nop
    ctx->pc = 0x2abaf8u;
    // NOP
    // 0x2abafc: 0x4502006e  bc1fl       . + 4 + (0x6E << 2)
    ctx->pc = 0x2ABAFCu;
    {
        const bool branch_taken_0x2abafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abafc) {
            ctx->pc = 0x2ABB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAFCu;
            // 0x2abb00: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABCB8u;
            goto label_2abcb8;
        }
    }
    ctx->pc = 0x2ABB04u;
    // 0x2abb04: 0x46066836  c.le.s      $f13, $f6
    ctx->pc = 0x2abb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abb08: 0x0  nop
    ctx->pc = 0x2abb08u;
    // NOP
    // 0x2abb0c: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x2ABB0Cu;
    {
        const bool branch_taken_0x2abb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB0Cu;
        // 0x2abb10: 0xc7a400b8  lwc1        $f4, 0xB8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb0c) {
            ctx->pc = 0x2ABCB4u;
            goto label_2abcb4;
        }
    }
    ctx->pc = 0x2ABB14u;
    // 0x2abb14: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x2abb14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abb18: 0x0  nop
    ctx->pc = 0x2abb18u;
    // NOP
    // 0x2abb1c: 0x45020066  bc1fl       . + 4 + (0x66 << 2)
    ctx->pc = 0x2ABB1Cu;
    {
        const bool branch_taken_0x2abb1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abb1c) {
            ctx->pc = 0x2ABB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB1Cu;
            // 0x2abb20: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABCB8u;
            goto label_2abcb8;
        }
    }
    ctx->pc = 0x2ABB24u;
    // 0x2abb24: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x2abb24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abb28: 0x0  nop
    ctx->pc = 0x2abb28u;
    // NOP
    // 0x2abb2c: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x2ABB2Cu;
    {
        const bool branch_taken_0x2abb2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ABB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB2Cu;
        // 0x2abb30: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb2c) {
            ctx->pc = 0x2ABCB4u;
            goto label_2abcb4;
        }
    }
    ctx->pc = 0x2ABB34u;
    // 0x2abb34: 0x0  nop
    ctx->pc = 0x2abb34u;
    // NOP
    // 0x2abb38: 0x0  nop
    ctx->pc = 0x2abb38u;
    // NOP
    // 0x2abb3c: 0x461500c4  c1          0x1500C4
    ctx->pc = 0x2abb3cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[21]);
    // 0x2abb40: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2abb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2abb44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2abb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abb48: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x2abb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abb4c: 0x0  nop
    ctx->pc = 0x2abb4cu;
    // NOP
    // 0x2abb50: 0x0  nop
    ctx->pc = 0x2abb50u;
    // NOP
    // 0x2abb54: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2abb54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2abb58: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x2abb58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abb5c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABB5Cu;
    {
        const bool branch_taken_0x2abb5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abb5c) {
            ctx->pc = 0x2ABB80u;
            goto label_2abb80;
        }
    }
    ctx->pc = 0x2ABB64u;
    // 0x2abb64: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2ABB64u;
    SET_GPR_U32(ctx, 31, 0x2ABB6Cu);
    ctx->pc = 0x2ABB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB64u;
    // 0x2abb68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2ABB64u, 0x2ABB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB6Cu;
label_2abb6c:
    // 0x2abb6c: 0xc7a600bc  lwc1        $f6, 0xBC($sp)
    ctx->pc = 0x2abb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2abb70: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2abb70u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2abb74: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x2abb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2abb78: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x2abb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2abb7c: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x2abb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2abb80:
    // 0x2abb80: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2abb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2abb84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2abb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2abb88: 0xc6290010  lwc1        $f9, 0x10($s1)
    ctx->pc = 0x2abb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2abb8c: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2abb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2abb90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2abb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2abb94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2abb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abb98: 0x4616aa82  mul.s       $f10, $f21, $f22
    ctx->pc = 0x2abb98u;
    ctx->f[10] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2abb9c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2abb9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2abba0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2abba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2abba4: 0x0  nop
    ctx->pc = 0x2abba4u;
    // NOP
    // 0x2abba8: 0x0  nop
    ctx->pc = 0x2abba8u;
    // NOP
    // 0x2abbac: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2abbacu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x2abbb0: 0xc7818edc  lwc1        $f1, -0x7124($gp)
    ctx->pc = 0x2abbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2abbb4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2abbb8: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x2abbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2abbbc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2abbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2abbc0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2abbc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2abbc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2abbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2abbc8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2abbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2abbcc: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2abbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2abbd0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2abbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2abbd4: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2abbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2abbd8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2abbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2abbdc: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x2abbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2abbe0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2abbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2abbe4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2abbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2abbe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2abbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2abbec: 0x0  nop
    ctx->pc = 0x2abbecu;
    // NOP
    // 0x2abbf0: 0x0  nop
    ctx->pc = 0x2abbf0u;
    // NOP
    // 0x2abbf4: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2abbf4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2abbf8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2abbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x2abbfc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2abbfcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2abc00: 0x34423f3f  ori         $v0, $v0, 0x3F3F
    ctx->pc = 0x2abc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16191);
    // 0x2abc04: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2abc04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2abc08: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2abc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2abc0c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2abc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2abc10: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2abc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2abc14: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2abc14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2abc18: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x2abc18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2abc1c: 0x46054a42  mul.s       $f9, $f9, $f5
    ctx->pc = 0x2abc1cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x2abc20: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x2abc20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2abc24: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2abc24u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2abc28: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2abc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2abc2c: 0x460ab281  sub.s       $f10, $f22, $f10
    ctx->pc = 0x2abc2cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[22], ctx->f[10]);
    // 0x2abc30: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2abc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2abc34: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x2abc34u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x2abc38: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x2abc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2abc3c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2abc3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2abc40: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x2abc40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2abc44: 0x46081202  mul.s       $f8, $f2, $f8
    ctx->pc = 0x2abc44u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2abc48: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x2abc48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2abc4c: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2abc4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2abc50: 0xe7a600c0  swc1        $f6, 0xC0($sp)
    ctx->pc = 0x2abc50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2abc54: 0x46005024  .word       0x46005024                   # cvt.w.s     $f0, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abc54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2abc58: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2abc58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2abc5c: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x2abc5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2abc60: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x2abc60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2abc64: 0x46081900  add.s       $f4, $f3, $f8
    ctx->pc = 0x2abc64u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2abc68: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2abc68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2abc6c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2abc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2abc70: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2abc70u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2abc74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2abc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2abc78: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x2abc78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2abc7c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2abc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2abc80: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x2abc80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2abc84: 0xe7a600f0  swc1        $f6, 0xF0($sp)
    ctx->pc = 0x2abc84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2abc88: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x2abc88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2abc8c: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2abc8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2abc90: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2abc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2abc94: 0xe7a600d0  swc1        $f6, 0xD0($sp)
    ctx->pc = 0x2abc94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2abc98: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2abc98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2abc9c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2abc9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2abca0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2abca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2abca4: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x2abca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2abca8: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x2abca8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2abcac: 0xc0a83da  jal         func_2A0F68
    ctx->pc = 0x2ABCACu;
    SET_GPR_U32(ctx, 31, 0x2ABCB4u);
    ctx->pc = 0x2ABCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCACu;
    // 0x2abcb0: 0xe7a100f8  swc1        $f1, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F68u, 0x2ABCACu, 0x2ABCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCB4u;
label_2abcb4:
    // 0x2abcb4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2abcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2abcb8:
    // 0x2abcb8: 0x661ff7f  bgez        $s3, . + 4 + (-0x81 << 2)
    ctx->pc = 0x2ABCB8u;
    {
        const bool branch_taken_0x2abcb8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCB8u;
        // 0x2abcbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcb8) {
            ctx->pc = 0x2ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abab8;
        }
    }
    ctx->pc = 0x2ABCC0u;
label_2abcc0:
    // 0x2abcc0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2ABCC0u;
    SET_GPR_U32(ctx, 31, 0x2ABCC8u);
    ctx->pc = 0x2ABCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCC0u;
    // 0x2abcc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2ABCC0u, 0x2ABCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCC8u;
label_2abcc8:
    // 0x2abcc8: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2ABCC8u;
    SET_GPR_U32(ctx, 31, 0x2ABCD0u);
    ctx->pc = 0x2ABCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCC8u;
    // 0x2abccc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2ABCC8u, 0x2ABCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCD0u;
label_2abcd0:
    // 0x2abcd0: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2abcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2abcd4: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x2abcd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2abcd8: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x2abcd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2abcdc: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x2abcdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2abce0: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x2abce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2abce4: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x2abce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2abce8: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x2abce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2abcec: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x2abcecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2abcf0: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2abcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2abcf4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2abcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2abcf8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2abcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2abcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCFCu;
        // 0x2abd00: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD04u;
}

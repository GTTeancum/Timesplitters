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

// Function: deergunDamage
// Address: 0x274fe0 - 0x27516c
void deergunDamage_0x274fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deergunDamage_0x274fe0");
#endif

    switch (ctx->pc) {
        case 0x275074u: goto label_275074;
        case 0x275084u: goto label_275084;
        case 0x2750d8u: goto label_2750d8;
        case 0x2750f0u: goto label_2750f0;
        case 0x27511cu: goto label_27511c;
        case 0x275124u: goto label_275124;
        case 0x275144u: goto label_275144;
        default: break;
    }

    ctx->pc = 0x274fe0u;

    // 0x274fe0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x274fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x274fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274fe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274fec: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x274fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x274ff0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x274ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x274ff4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x274ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ff8: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x274ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x274ffc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x274ffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275000: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x275000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x275004: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x275004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275008: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x275008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x27500c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x27500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x275010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275014: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x275014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x275018: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x275018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27501c: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x27501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275020: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275024: 0x0  nop
    ctx->pc = 0x275024u;
    // NOP
    // 0x275028: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x275028u;
    {
        const bool branch_taken_0x275028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275028u;
        // 0x27502c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275028) {
            ctx->pc = 0x275144u;
            goto label_275144;
        }
    }
    ctx->pc = 0x275030u;
    // 0x275030: 0xc62d004c  lwc1        $f13, 0x4C($s1)
    ctx->pc = 0x275030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x275034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275038: 0xc78085bc  lwc1        $f0, -0x7A44($gp)
    ctx->pc = 0x275038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27503c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27503cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x275040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275044: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x275044u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x275048: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x275048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x27504c: 0xc78085c0  lwc1        $f0, -0x7A40($gp)
    ctx->pc = 0x27504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275050: 0xc7b40044  lwc1        $f20, 0x44($sp)
    ctx->pc = 0x275050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275054: 0x0  nop
    ctx->pc = 0x275054u;
    // NOP
    // 0x275058: 0x0  nop
    ctx->pc = 0x275058u;
    // NOP
    // 0x27505c: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x27505cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x275060: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x275060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x275064: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x275064u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x275068: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x275068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x27506c: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x27506Cu;
    SET_GPR_U32(ctx, 31, 0x275074u);
    ctx->pc = 0x275070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27506Cu;
    // 0x275070: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x27506Cu, 0x275074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275074u;
label_275074:
    // 0x275074: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27507c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x27507Cu;
    SET_GPR_U32(ctx, 31, 0x275084u);
    ctx->pc = 0x275080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27507Cu;
    // 0x275080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x27507Cu, 0x275084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275084u;
label_275084:
    // 0x275084: 0xc6250030  lwc1        $f5, 0x30($s1)
    ctx->pc = 0x275084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275088: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x275088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27508c: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x27508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275090: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x275090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275094: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x275094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275098: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x275098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27509c: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x27509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2750a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2750a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750a4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2750a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2750a8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2750a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2750acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2750b0: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2750b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2750b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2750b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2750b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2750b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2750bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2750c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2750c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2750c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750c8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2750c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2750cc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2750ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2750d0: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x2750D0u;
    SET_GPR_U32(ctx, 31, 0x2750D8u);
    ctx->pc = 0x2750D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750D0u;
    // 0x2750d4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x2750D0u, 0x2750D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750D8u;
label_2750d8:
    // 0x2750d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2750d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2750dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2750dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2750e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2750e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2750e8: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x2750E8u;
    SET_GPR_U32(ctx, 31, 0x2750F0u);
    ctx->pc = 0x2750ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750E8u;
    // 0x2750ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x2750E8u, 0x2750F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750F0u;
label_2750f0:
    // 0x2750f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2750f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2750f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2750f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2750f8: 0x3442ffde  ori         $v0, $v0, 0xFFDE
    ctx->pc = 0x2750f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65502);
    // 0x2750fc: 0x8e250218  lw          $a1, 0x218($s1)
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x275100: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x275100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x275104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275108: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x275108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x27510c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x275110: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x275110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x275114: 0xc0a92c4  jal         func_2A4B10
    ctx->pc = 0x275114u;
    SET_GPR_U32(ctx, 31, 0x27511Cu);
    ctx->pc = 0x275118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275114u;
    // 0x275118: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B10u, 0x275114u, 0x27511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27511Cu;
label_27511c:
    // 0x27511c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x27511Cu;
    SET_GPR_U32(ctx, 31, 0x275124u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x27511Cu, 0x275124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275124u;
label_275124:
    // 0x275124: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x275124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x275128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27512c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x27512cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x275130: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x275130u;
    {
        const bool branch_taken_0x275130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x275130) {
            ctx->pc = 0x275134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275130u;
            // 0x275134: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275138u;
            goto label_275138;
        }
    }
    ctx->pc = 0x275138u;
label_275138:
    // 0x275138: 0x2010  mfhi        $a0
    ctx->pc = 0x275138u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x27513c: 0xc081546  jal         func_205518
    ctx->pc = 0x27513Cu;
    SET_GPR_U32(ctx, 31, 0x275144u);
    ctx->pc = 0x275140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27513Cu;
    // 0x275140: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x27513Cu, 0x275144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275144u;
label_275144:
    // 0x275144: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x275144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275148: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x275148u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27514c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x27514cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275150: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x275150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275154: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x275154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275158: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x275158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27515c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x27515cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275160: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x275160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275164: 0x3e00008  jr          $ra
    ctx->pc = 0x275164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275164u;
        // 0x275168: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27516Cu;
}

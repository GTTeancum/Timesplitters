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

// Function: creditsCalcTextWave
// Address: 0x2b00e8 - 0x2b0300
void creditsCalcTextWave_0x2b00e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsCalcTextWave_0x2b00e8");
#endif

    switch (ctx->pc) {
        case 0x2b01b0u: goto label_2b01b0;
        case 0x2b01b4u: goto label_2b01b4;
        case 0x2b0218u: goto label_2b0218;
        case 0x2b0228u: goto label_2b0228;
        case 0x2b0230u: goto label_2b0230;
        case 0x2b0238u: goto label_2b0238;
        case 0x2b0284u: goto label_2b0284;
        case 0x2b0294u: goto label_2b0294;
        case 0x2b02a4u: goto label_2b02a4;
        case 0x2b02acu: goto label_2b02ac;
        case 0x2b02b4u: goto label_2b02b4;
        default: break;
    }

    ctx->pc = 0x2b00e8u;

    // 0x2b00e8: 0xc786b364  lwc1        $f6, -0x4C9C($gp)
    ctx->pc = 0x2b00e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b00ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2b00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2b00f0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b00f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2b00f4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2b00f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2b00f8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b00f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b00fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b00fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0100: 0xc783b360  lwc1        $f3, -0x4CA0($gp)
    ctx->pc = 0x2b0100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0104: 0xc4419a10  lwc1        $f1, -0x65F0($v0)
    ctx->pc = 0x2b0104u;
    { uint32_t bits = FAST_READ32(0x329A10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b0108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b010c: 0x46083140  add.s       $f5, $f6, $f8
    ctx->pc = 0x2b010cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2b0110: 0xc780b368  lwc1        $f0, -0x4C98($gp)
    ctx->pc = 0x2b0110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0114: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x2b0114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b0118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b011c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b0120: 0x460019c6  mov.s       $f7, $f3
    ctx->pc = 0x2b0120u;
    ctx->f[7] = FPU_MOV_S(ctx->f[3]);
    // 0x2b0124: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b0128: 0x0  nop
    ctx->pc = 0x2b0128u;
    // NOP
    // 0x2b012c: 0x0  nop
    ctx->pc = 0x2b012cu;
    // NOP
    // 0x2b0130: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2b0130u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x2b0134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b0138: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2B0138u;
    {
        const bool branch_taken_0x2b0138 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0138u;
        // 0x2b013c: 0x46002900  add.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0138) {
            ctx->pc = 0x2B016Cu;
            goto label_2b016c;
        }
    }
    ctx->pc = 0x2B0140u;
    // 0x2b0140: 0x46082000  add.s       $f0, $f4, $f8
    ctx->pc = 0x2b0140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2b0144: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2b0144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0148: 0x0  nop
    ctx->pc = 0x2b0148u;
    // NOP
    // 0x2b014c: 0x45030067  bc1tl       . + 4 + (0x67 << 2)
    ctx->pc = 0x2B014Cu;
    {
        const bool branch_taken_0x2b014c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b014c) {
            ctx->pc = 0x2B0150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B014Cu;
            // 0x2b0150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B02ECu;
            goto label_2b02ec;
        }
    }
    ctx->pc = 0x2B0154u;
    // 0x2b0154: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x2b0154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0158: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0158u;
    {
        const bool branch_taken_0x2b0158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0158) {
            ctx->pc = 0x2B0174u;
            goto label_2b0174;
        }
    }
    ctx->pc = 0x2B0160u;
    // 0x2b0160: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2b0160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0164: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0164u;
    {
        const bool branch_taken_0x2b0164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0164) {
            ctx->pc = 0x2B0174u;
            goto label_2b0174;
        }
    }
    ctx->pc = 0x2B016Cu;
label_2b016c:
    // 0x2b016c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2B016Cu;
    {
        const bool branch_taken_0x2b016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B016Cu;
        // 0x2b0170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b016c) {
            ctx->pc = 0x2B02ECu;
            goto label_2b02ec;
        }
    }
    ctx->pc = 0x2B0174u;
label_2b0174:
    // 0x2b0174: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x2b0174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0178: 0x0  nop
    ctx->pc = 0x2b0178u;
    // NOP
    // 0x2b017c: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
    ctx->pc = 0x2B017Cu;
    {
        const bool branch_taken_0x2b017c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b017c) {
            ctx->pc = 0x2B0180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B017Cu;
            // 0x2b0180: 0x46041801  sub.s       $f0, $f3, $f4 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0250u;
            goto label_2b0250;
        }
    }
    ctx->pc = 0x2B0184u;
    // 0x2b0184: 0x46061801  sub.s       $f0, $f3, $f6
    ctx->pc = 0x2b0184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2b0188: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b018c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b018cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0190: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x2b0190u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b0194: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x2b0194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0198: 0x0  nop
    ctx->pc = 0x2b0198u;
    // NOP
    // 0x2b019c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2B019Cu;
    {
        const bool branch_taken_0x2b019c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B019Cu;
        // 0x2b01a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b019c) {
            ctx->pc = 0x2B0248u;
            goto label_2b0248;
        }
    }
    ctx->pc = 0x2B01A4u;
    // 0x2b01a4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2b01a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2b01a8: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x2b01a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x2b01ac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b01acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b01b0:
    // 0x2b01b0: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x2b01b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2b01b4:
    // 0x2b01b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01b8: 0x24c3ec58  addiu       $v1, $a2, -0x13A8
    ctx->pc = 0x2b01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962264));
    // 0x2b01bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b01c0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2b01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b01c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b01c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2b01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b01cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b01d0: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x2b01d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2b01d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b01d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b01d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b01d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b01dc: 0x0  nop
    ctx->pc = 0x2b01dcu;
    // NOP
    // 0x2b01e0: 0x0  nop
    ctx->pc = 0x2b01e0u;
    // NOP
    // 0x2b01e4: 0x46001b03  div.s       $f12, $f3, $f0
    ctx->pc = 0x2b01e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[12] = ctx->f[3] / ctx->f[0];
    // 0x2b01e8: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x2b01e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b01ec: 0x0  nop
    ctx->pc = 0x2b01ecu;
    // NOP
    // 0x2b01f0: 0x4500ffef  bc1f        . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B01F0u;
    {
        const bool branch_taken_0x2b01f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01F0u;
        // 0x2b01f4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01f0) {
            ctx->pc = 0x2B01B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b01b0;
        }
    }
    ctx->pc = 0x2B01F8u;
    // 0x2b01f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b01f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b01fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b01fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0200: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2b0200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0204: 0x0  nop
    ctx->pc = 0x2b0204u;
    // NOP
    // 0x2b0208: 0x4502ffea  bc1fl       . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B0208u;
    {
        const bool branch_taken_0x2b0208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0208) {
            ctx->pc = 0x2B020Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0208u;
            // 0x2b020c: 0x58080  sll         $s0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B01B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b01b4;
        }
    }
    ctx->pc = 0x2B0210u;
    // 0x2b0210: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B0210u;
    SET_GPR_U32(ctx, 31, 0x2B0218u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B0210u, 0x2B0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0218u;
label_2b0218:
    // 0x2b0218: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2b0218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2b021c: 0xdc2598b0  ld          $a1, -0x6750($at)
    ctx->pc = 0x2b021cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A98B0u));
    // 0x2b0220: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B0220u;
    SET_GPR_U32(ctx, 31, 0x2B0228u);
    ctx->pc = 0x2B0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0220u;
    // 0x2b0224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B0220u, 0x2B0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0228u;
label_2b0228:
    // 0x2b0228: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2B0228u;
    SET_GPR_U32(ctx, 31, 0x2B0230u);
    ctx->pc = 0x2B022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0228u;
    // 0x2b022c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2B0228u, 0x2B0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0230u;
label_2b0230:
    // 0x2b0230: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B0230u;
    SET_GPR_U32(ctx, 31, 0x2B0238u);
    ctx->pc = 0x2B0234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0230u;
    // 0x2b0234: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B0230u, 0x2B0238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0238u;
label_2b0238:
    // 0x2b0238: 0x2622ec70  addiu       $v0, $s1, -0x1390
    ctx->pc = 0x2b0238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962288));
    // 0x2b023c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b0240: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B0240u;
    {
        const bool branch_taken_0x2b0240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0240u;
        // 0x2b0244: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0240) {
            ctx->pc = 0x2B02BCu;
            goto label_2b02bc;
        }
    }
    ctx->pc = 0x2B0248u;
label_2b0248:
    // 0x2b0248: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B0248u;
    {
        const bool branch_taken_0x2b0248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0248u;
        // 0x2b024c: 0x240202bc  addiu       $v0, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0248) {
            ctx->pc = 0x2B02ECu;
            goto label_2b02ec;
        }
    }
    ctx->pc = 0x2B0250u;
label_2b0250:
    // 0x2b0250: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b0254: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b0254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0258: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2b0258u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b025c: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x2b025cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0260: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2B0260u;
    {
        const bool branch_taken_0x2b0260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0260) {
            ctx->pc = 0x2B02D0u;
            goto label_2b02d0;
        }
    }
    ctx->pc = 0x2B0268u;
    // 0x2b0268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b026c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b026cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0270: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2b0270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0274: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2B0274u;
    {
        const bool branch_taken_0x2b0274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0274) {
            ctx->pc = 0x2B02D8u;
            goto label_2b02d8;
        }
    }
    ctx->pc = 0x2B027Cu;
    // 0x2b027c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2B027Cu;
    SET_GPR_U32(ctx, 31, 0x2B0284u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2B027Cu, 0x2B0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0284u;
label_2b0284:
    // 0x2b0284: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2b0284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2b0288: 0xdc2598b8  ld          $a1, -0x6748($at)
    ctx->pc = 0x2b0288u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A98B8u));
    // 0x2b028c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B028Cu;
    SET_GPR_U32(ctx, 31, 0x2B0294u);
    ctx->pc = 0x2B0290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B028Cu;
    // 0x2b0290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B028Cu, 0x2B0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0294u;
label_2b0294:
    // 0x2b0294: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2b0294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2b0298: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2b0298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2b029c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2B029Cu;
    SET_GPR_U32(ctx, 31, 0x2B02A4u);
    ctx->pc = 0x2B02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B029Cu;
    // 0x2b02a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2B029Cu, 0x2B02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02A4u;
label_2b02a4:
    // 0x2b02a4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2B02A4u;
    SET_GPR_U32(ctx, 31, 0x2B02ACu);
    ctx->pc = 0x2B02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02A4u;
    // 0x2b02a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2B02A4u, 0x2B02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02ACu;
label_2b02ac:
    // 0x2b02ac: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B02ACu;
    SET_GPR_U32(ctx, 31, 0x2B02B4u);
    ctx->pc = 0x2B02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02ACu;
    // 0x2b02b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B02ACu, 0x2B02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02B4u;
label_2b02b4:
    // 0x2b02b4: 0x3c01c496  lui         $at, 0xC496
    ctx->pc = 0x2b02b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50326 << 16));
    // 0x2b02b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b02b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b02bc:
    // 0x2b02bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b02bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b02c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b02c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b02c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b02c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b02c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B02C8u;
    {
        const bool branch_taken_0x2b02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02C8u;
        // 0x2b02cc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02c8) {
            ctx->pc = 0x2B02F0u;
            goto label_2b02f0;
        }
    }
    ctx->pc = 0x2B02D0u;
label_2b02d0:
    // 0x2b02d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b02d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b02d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b02d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b02d8:
    // 0x2b02d8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2b02d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b02dc: 0x0  nop
    ctx->pc = 0x2b02dcu;
    // NOP
    // 0x2b02e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B02E0u;
    {
        const bool branch_taken_0x2b02e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02E0u;
        // 0x2b02e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02e0) {
            ctx->pc = 0x2B02ECu;
            goto label_2b02ec;
        }
    }
    ctx->pc = 0x2B02E8u;
    // 0x2b02e8: 0x2402fd44  addiu       $v0, $zero, -0x2BC
    ctx->pc = 0x2b02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966596));
label_2b02ec:
    // 0x2b02ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b02ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b02f0:
    // 0x2b02f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b02f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b02f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b02f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b02f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B02F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02F8u;
        // 0x2b02fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B02F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0300u;
}

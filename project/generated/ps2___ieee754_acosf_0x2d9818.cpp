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

// Function: __ieee754_acosf
// Address: 0x2d9818 - 0x2d9c48
void ps2___ieee754_acosf_0x2d9818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_acosf_0x2d9818");
#endif

    switch (ctx->pc) {
        case 0x2d9ab8u: goto label_2d9ab8;
        case 0x2d9b18u: goto label_2d9b18;
        default: break;
    }

    ctx->pc = 0x2d9818u;

    // 0x2d9818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d981c: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x2d981cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9824: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2d9824u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d9828: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2d9828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d982c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x2d982cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d9830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9834: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2d9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2d9838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d983c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2d983cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9840: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x2d9840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2d9844: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9844u;
    {
        const bool branch_taken_0x2d9844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9844u;
        // 0x2d9848: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9844) {
            ctx->pc = 0x2D9870u;
            goto label_2d9870;
        }
    }
    ctx->pc = 0x2D984Cu;
    // 0x2d984c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d984cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9850: 0x1c8000f8  bgtz        $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2D9850u;
    {
        const bool branch_taken_0x2d9850 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2D9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9850u;
        // 0x2d9854: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9850) {
            ctx->pc = 0x2D9C34u;
            goto label_2d9c34;
        }
    }
    ctx->pc = 0x2D9858u;
    // 0x2d9858: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2d9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2d985c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d985cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d9860: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9864: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x2D9864u;
    {
        const bool branch_taken_0x2d9864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9864u;
        // 0x2d9868: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9864) {
            ctx->pc = 0x2D9C38u;
            goto label_2d9c38;
        }
    }
    ctx->pc = 0x2D986Cu;
    // 0x2d986c: 0x0  nop
    ctx->pc = 0x2d986cu;
    // NOP
label_2d9870:
    // 0x2d9870: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2d9870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d9874: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9874u;
    {
        const bool branch_taken_0x2d9874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9874u;
        // 0x2d9878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9874) {
            ctx->pc = 0x2D9894u;
            goto label_2d9894;
        }
    }
    ctx->pc = 0x2D987Cu;
    // 0x2d987c: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x2d987cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x2d9880: 0x0  nop
    ctx->pc = 0x2d9880u;
    // NOP
    // 0x2d9884: 0x0  nop
    ctx->pc = 0x2d9884u;
    // NOP
    // 0x2d9888: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x2d9888u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x2d988c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x2D988Cu;
    {
        const bool branch_taken_0x2d988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D988Cu;
        // 0x2d9890: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d988c) {
            ctx->pc = 0x2D9C38u;
            goto label_2d9c38;
        }
    }
    ctx->pc = 0x2D9894u;
label_2d9894:
    // 0x2d9894: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x2d9894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x2d9898: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d989c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2d989cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d98a0: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D98A0u;
    {
        const bool branch_taken_0x2d98a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98A0u;
        // 0x2d98a4: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d98a0) {
            ctx->pc = 0x2D99CCu;
            goto label_2d99cc;
        }
    }
    ctx->pc = 0x2D98A8u;
    // 0x2d98a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2d98a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d98ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D98ACu;
    {
        const bool branch_taken_0x2d98ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d98ac) {
            ctx->pc = 0x2D98B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D98ACu;
            // 0x2d98b0: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98C8u;
            goto label_2d98c8;
        }
    }
    ctx->pc = 0x2D98B4u;
    // 0x2d98b4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2d98b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2d98b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d98b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d98bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d98bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d98c0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2D98C0u;
    {
        const bool branch_taken_0x2d98c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98C0u;
        // 0x2d98c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d98c0) {
            ctx->pc = 0x2D9C34u;
            goto label_2d9c34;
        }
    }
    ctx->pc = 0x2D98C8u;
label_2d98c8:
    // 0x2d98c8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2d98c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2d98cc: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2d98ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2d98d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d98d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d98d4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2d98d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2d98d8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2d98d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2d98dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d98dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d98e0: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2d98e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2d98e4: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2d98e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2d98e8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d98e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d98ec: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d98ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d98f0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x2d98f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x2d98f4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x2d98f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x2d98f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d98f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d98fc: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x2d98fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x2d9900: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x2d9900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x2d9904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9908: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2d9908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d990c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x2d990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x2d9910: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x2d9910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x2d9914: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2d9914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d9918: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d9918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d991c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x2d991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x2d9920: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x2d9920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x2d9924: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d9924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d9928: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x2d9928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x2d992c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x2d992cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x2d9930: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2d9930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2d9934: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d9934u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d9938: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x2d9938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x2d993c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x2d993cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x2d9940: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9944: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9948: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2d9948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2d994c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2d994cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2d9950: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2d9950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d9954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9958: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d9958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d995c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2d995cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d9960: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2d9960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2d9964: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2d9964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2d9968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d996c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2d996cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2d9970: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2d9970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2d9974: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2d9974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2d9978: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2d9978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2d997c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d997cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2d9980: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9984: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2d9984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d9988: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2d9988u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2d998c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d998cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d9990: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9994: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2d9994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d9998: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x2d9998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x2d999c: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x2d999cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2d99a0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d99a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d99a4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x2d99a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x2d99a8: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x2d99a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d99ac: 0x0  nop
    ctx->pc = 0x2d99acu;
    // NOP
    // 0x2d99b0: 0x0  nop
    ctx->pc = 0x2d99b0u;
    // NOP
    // 0x2d99b4: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x2d99b4u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x2d99b8: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x2d99b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x2d99bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d99bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d99c0: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x2d99c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x2d99c4: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2D99C4u;
    {
        const bool branch_taken_0x2d99c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99C4u;
        // 0x2d99c8: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99c4) {
            ctx->pc = 0x2D9C30u;
            goto label_2d9c30;
        }
    }
    ctx->pc = 0x2D99CCu;
label_2d99cc:
    // 0x2d99cc: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D99CCu;
    {
        const bool branch_taken_0x2d99cc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2d99cc) {
            ctx->pc = 0x2D9AF8u;
            goto label_2d9af8;
        }
    }
    ctx->pc = 0x2D99D4u;
    // 0x2d99d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d99d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d99d8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2d99d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2d99dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d99dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d99e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d99e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d99e4: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x2d99e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x2d99e8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2d99e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2d99ec: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2d99ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2d99f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d99f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d99f4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2d99f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2d99f8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2d99f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2d99fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d99fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d9a00: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2d9a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2d9a04: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2d9a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2d9a08: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2d9a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d9a0c: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x2d9a0cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d9a10: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x2d9a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x2d9a14: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x2d9a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x2d9a18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9a1c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x2d9a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x2d9a20: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x2d9a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x2d9a24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9a28: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x2d9a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x2d9a2c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x2d9a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x2d9a30: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2d9a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d9a34: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9a38: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x2d9a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x2d9a3c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x2d9a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x2d9a40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9a44: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9a48: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x2d9a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x2d9a4c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x2d9a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x2d9a50: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2d9a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2d9a54: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x2d9a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x2d9a58: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x2d9a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x2d9a5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d9a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d9a60: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d9a60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d9a64: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d9a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d9a68: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2d9a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2d9a6c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2d9a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2d9a70: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d9a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d9a74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d9a74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d9a78: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9a7c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9a80: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2d9a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2d9a84: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d9a84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d9a88: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9a8c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9a90: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2d9a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2d9a94: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2d9a94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2d9a98: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9a9c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9a9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9aa0: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2d9aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2d9aa4: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x2d9aa4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2d9aa8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9aac: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d9aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d9ab0: 0xc0b6bd0  jal         func_2DAF40
    ctx->pc = 0x2D9AB0u;
    SET_GPR_U32(ctx, 31, 0x2D9AB8u);
    ctx->pc = 0x2D9AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9AB0u;
    // 0x2d9ab4: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF40u, 0x2D9AB0u, 0x2D9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AB8u;
label_2d9ab8:
    // 0x2d9ab8: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2d9ab8u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2d9abc: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2d9abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2d9ac0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2d9ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2d9ac4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9ac8: 0x0  nop
    ctx->pc = 0x2d9ac8u;
    // NOP
    // 0x2d9acc: 0x0  nop
    ctx->pc = 0x2d9accu;
    // NOP
    // 0x2d9ad0: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x2d9ad0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x2d9ad4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2d9ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2d9ad8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2d9ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2d9adc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9ae0: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x2d9ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x2d9ae4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d9ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d9ae8: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x2d9ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2d9aec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d9aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d9af0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2D9AF0u;
    {
        const bool branch_taken_0x2d9af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AF0u;
        // 0x2d9af4: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9af0) {
            ctx->pc = 0x2D9C30u;
            goto label_2d9c30;
        }
    }
    ctx->pc = 0x2D9AF8u;
label_2d9af8:
    // 0x2d9af8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9afc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d9afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d9b00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d9b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d9b04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9b08: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x2d9b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x2d9b0c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2d9b0cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d9b10: 0xc0b6bd0  jal         func_2DAF40
    ctx->pc = 0x2D9B10u;
    SET_GPR_U32(ctx, 31, 0x2D9B18u);
    ctx->pc = 0x2D9B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B10u;
    // 0x2d9b14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF40u, 0x2D9B10u, 0x2D9B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B18u;
label_2d9b18:
    // 0x2d9b18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d9b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d9b1c: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x2d9b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2d9b20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d9b24: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2d9b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2d9b28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d9b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d9b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d9b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9b30: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x2d9b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d9b34: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2d9b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2d9b38: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2d9b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2d9b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9b40: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2d9b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2d9b44: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2d9b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2d9b48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d9b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d9b4c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9b50: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x2d9b54: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x2d9b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x2d9b58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9b5c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2d9b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2d9b60: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2d9b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2d9b64: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2d9b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2d9b68: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x2d9b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2d9b6c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9b70: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x2d9b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x2d9b74: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x2d9b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x2d9b78: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d9b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d9b7c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d9b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d9b80: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x2d9b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x2d9b84: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x2d9b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x2d9b88: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2d9b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d9b8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x2d9b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d9b90: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2d9b90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2d9b94: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x2d9b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x2d9b98: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x2d9b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x2d9b9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d9b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d9ba0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9ba4: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2d9ba8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2d9ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2d9bac: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2d9bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d9bb0: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x2d9bb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x2d9bb4: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x2d9bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x2d9bb8: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x2d9bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x2d9bbc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d9bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d9bc0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9bc4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2d9bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2d9bc8: 0x0  nop
    ctx->pc = 0x2d9bc8u;
    // NOP
    // 0x2d9bcc: 0x0  nop
    ctx->pc = 0x2d9bccu;
    // NOP
    // 0x2d9bd0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2d9bd0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x2d9bd4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d9bd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2d9bd8: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x2d9bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x2d9bdc: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x2d9bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x2d9be0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9be4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9be8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9bec: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d9becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d9bf0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d9bf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d9bf4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9bf8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2d9bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d9bfc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2d9bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2d9c00: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x2d9c00u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2d9c04: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2d9c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9c08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d9c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9c0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2d9c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2d9c10: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x2d9c10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d9c14: 0x0  nop
    ctx->pc = 0x2d9c14u;
    // NOP
    // 0x2d9c18: 0x0  nop
    ctx->pc = 0x2d9c18u;
    // NOP
    // 0x2d9c1c: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x2d9c1cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x2d9c20: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x2d9c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x2d9c24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d9c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d9c28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d9c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d9c2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d9c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d9c30:
    // 0x2d9c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9c34:
    // 0x2d9c34: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2d9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2d9c38:
    // 0x2d9c38: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2d9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d9c3c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2d9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d9c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C40u;
        // 0x2d9c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9C48u;
}

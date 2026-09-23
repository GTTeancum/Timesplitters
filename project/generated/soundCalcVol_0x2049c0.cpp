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

// Function: soundCalcVol
// Address: 0x2049c0 - 0x204c74
void soundCalcVol_0x2049c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundCalcVol_0x2049c0");
#endif

    switch (ctx->pc) {
        case 0x204a28u: goto label_204a28;
        case 0x204abcu: goto label_204abc;
        case 0x204b8cu: goto label_204b8c;
        case 0x204bc0u: goto label_204bc0;
        default: break;
    }

    ctx->pc = 0x2049c0u;

    // 0x2049c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2049c4: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2049c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2049c8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2049c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2049cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2049ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2049d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2049d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2049d4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2049d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2049d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2049d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2049dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2049e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2049e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2049e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2049e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2049e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2049ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2049f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2049f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2049f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2049f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2049f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049fc: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2049FCu;
    {
        const bool branch_taken_0x2049fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049FCu;
        // 0x204a00: 0xc52ce300  lwc1        $f12, -0x1D00($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294959872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049fc) {
            ctx->pc = 0x204B18u;
            goto label_204b18;
        }
    }
    ctx->pc = 0x204A04u;
    // 0x204a04: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x204a08: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x204A08u;
    {
        const bool branch_taken_0x204a08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x204A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A08u;
        // 0x204a0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a08) {
            ctx->pc = 0x204A88u;
            goto label_204a88;
        }
    }
    ctx->pc = 0x204A10u;
    // 0x204a10: 0x8f84b230  lw          $a0, -0x4DD0($gp)
    ctx->pc = 0x204a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x204a14: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x204a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x204a18: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x204a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x204a1c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x204a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x204a20: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x204a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x204a24: 0x0  nop
    ctx->pc = 0x204a24u;
    // NOP
label_204a28:
    // 0x204a28: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x204a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x204a2c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x204a30: 0xc4420098  lwc1        $f2, 0x98($v0)
    ctx->pc = 0x204a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x204a34: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x204a34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x204a38: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x204a38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x204a3c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x204a3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x204a40: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x204a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204a44: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x204a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x204a48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x204a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x204a4c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x204a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x204a50: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x204a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x204a54: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x204a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x204a58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x204a58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x204a5c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x204a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x204a60: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x204a60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x204a64: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x204a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204a68: 0x0  nop
    ctx->pc = 0x204a68u;
    // NOP
    // 0x204a6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x204A6Cu;
    {
        const bool branch_taken_0x204a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A6Cu;
        // 0x204a70: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a6c) {
            ctx->pc = 0x204A78u;
            goto label_204a78;
        }
    }
    ctx->pc = 0x204A74u;
    // 0x204a74: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x204a74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_204a78:
    // 0x204a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204a7c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x204a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x204a80: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x204A80u;
    {
        const bool branch_taken_0x204a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A80u;
        // 0x204a84: 0x2402071c  addiu       $v0, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a80) {
            ctx->pc = 0x204A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204a28;
        }
    }
    ctx->pc = 0x204A88u;
label_204a88:
    // 0x204a88: 0xc520e300  lwc1        $f0, -0x1D00($t1)
    ctx->pc = 0x204a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294959872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204a8c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x204a8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204a90: 0x0  nop
    ctx->pc = 0x204a90u;
    // NOP
    // 0x204a94: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
    ctx->pc = 0x204A94u;
    {
        const bool branch_taken_0x204a94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x204A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A94u;
        // 0x204a98: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a94) {
            ctx->pc = 0x204C54u;
            goto label_204c54;
        }
    }
    ctx->pc = 0x204A9Cu;
    // 0x204a9c: 0x0  nop
    ctx->pc = 0x204a9cu;
    // NOP
    // 0x204aa0: 0x0  nop
    ctx->pc = 0x204aa0u;
    // NOP
    // 0x204aa4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x204aa4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x204aa8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x204aa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204aac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x204AACu;
    {
        const bool branch_taken_0x204aac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204aac) {
            ctx->pc = 0x204ABCu;
            goto label_204abc;
        }
    }
    ctx->pc = 0x204AB4u;
    // 0x204ab4: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x204AB4u;
    SET_GPR_U32(ctx, 31, 0x204ABCu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x204AB4u, 0x204ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204ABCu;
label_204abc:
    // 0x204abc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x204abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204ac0: 0x0  nop
    ctx->pc = 0x204ac0u;
    // NOP
    // 0x204ac4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x204AC4u;
    {
        const bool branch_taken_0x204ac4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204ac4) {
            ctx->pc = 0x204AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204AC4u;
            // 0x204ac8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204ACCu;
            goto label_204acc;
        }
    }
    ctx->pc = 0x204ACCu;
label_204acc:
    // 0x204acc: 0x96830014  lhu         $v1, 0x14($s4)
    ctx->pc = 0x204accu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x204ad0: 0x4600a081  sub.s       $f2, $f20, $f0
    ctx->pc = 0x204ad0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x204ad4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x204ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x204ad8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x204ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x204adc: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x204ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x204ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204ae8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x204ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x204aec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204af0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x204af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x204af4: 0x0  nop
    ctx->pc = 0x204af4u;
    // NOP
    // 0x204af8: 0x0  nop
    ctx->pc = 0x204af8u;
    // NOP
    // 0x204afc: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x204afcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[20];
    // 0x204b00: 0x0  nop
    ctx->pc = 0x204b00u;
    // NOP
    // 0x204b04: 0x0  nop
    ctx->pc = 0x204b04u;
    // NOP
    // 0x204b08: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x204b08u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x204b0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x204b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x204b10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x204B10u;
    {
        const bool branch_taken_0x204b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B10u;
        // 0x204b14: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b10) {
            ctx->pc = 0x204B4Cu;
            goto label_204b4c;
        }
    }
    ctx->pc = 0x204B18u;
label_204b18:
    // 0x204b18: 0x96830014  lhu         $v1, 0x14($s4)
    ctx->pc = 0x204b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x204b1c: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x204b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x204b20: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x204b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x204b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x204b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x204b28: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x204b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x204b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x204b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204b30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204b38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x204b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x204b3c: 0x0  nop
    ctx->pc = 0x204b3cu;
    // NOP
    // 0x204b40: 0x0  nop
    ctx->pc = 0x204b40u;
    // NOP
    // 0x204b44: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x204b44u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x204b48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x204b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_204b4c:
    // 0x204b4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204b4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204b50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x204b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x204b54: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x204b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x204b58: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x204b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x204b5c: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x204B5Cu;
    {
        const bool branch_taken_0x204b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B5Cu;
        // 0x204b60: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b5c) {
            ctx->pc = 0x204C24u;
            goto label_204c24;
        }
    }
    ctx->pc = 0x204B64u;
    // 0x204b64: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x204b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204b6c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x204B6Cu;
    {
        const bool branch_taken_0x204b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B6Cu;
        // 0x204b70: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b6c) {
            ctx->pc = 0x204C28u;
            goto label_204c28;
        }
    }
    ctx->pc = 0x204B74u;
    // 0x204b74: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x204b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x204b78: 0x8c4406e4  lw          $a0, 0x6E4($v0)
    ctx->pc = 0x204b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x204b7c: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x204B7Cu;
    {
        const bool branch_taken_0x204b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b7c) {
            ctx->pc = 0x204B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204B7Cu;
            // 0x204b80: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204C28u;
            goto label_204c28;
        }
    }
    ctx->pc = 0x204B84u;
    // 0x204b84: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x204B84u;
    SET_GPR_U32(ctx, 31, 0x204B8Cu);
    ctx->pc = 0x204B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B84u;
    // 0x204b88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x204B84u, 0x204B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B8Cu;
label_204b8c:
    // 0x204b8c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x204b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x204b90: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x204b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204b94: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x204b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x204b98: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x204b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x204b9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x204b9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x204ba0: 0x0  nop
    ctx->pc = 0x204ba0u;
    // NOP
    // 0x204ba4: 0x0  nop
    ctx->pc = 0x204ba4u;
    // NOP
    // 0x204ba8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x204ba8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x204bac: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x204bacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204bb0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x204BB0u;
    {
        const bool branch_taken_0x204bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204bb0) {
            ctx->pc = 0x204BC4u;
            goto label_204bc4;
        }
    }
    ctx->pc = 0x204BB8u;
    // 0x204bb8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x204BB8u;
    SET_GPR_U32(ctx, 31, 0x204BC0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x204BB8u, 0x204BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BC0u;
label_204bc0:
    // 0x204bc0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x204bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204bc4:
    // 0x204bc4: 0x0  nop
    ctx->pc = 0x204bc4u;
    // NOP
    // 0x204bc8: 0x0  nop
    ctx->pc = 0x204bc8u;
    // NOP
    // 0x204bcc: 0x460010c3  div.s       $f3, $f2, $f0
    ctx->pc = 0x204bccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[0];
    // 0x204bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204bd4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x204bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204bd8: 0x0  nop
    ctx->pc = 0x204bd8u;
    // NOP
    // 0x204bdc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x204BDCu;
    {
        const bool branch_taken_0x204bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BDCu;
        // 0x204be0: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bdc) {
            ctx->pc = 0x204C0Cu;
            goto label_204c0c;
        }
    }
    ctx->pc = 0x204BE4u;
    // 0x204be4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x204be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x204be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x204be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204bec: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x204becu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204bf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x204bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x204bf4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x204bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x204bf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x204bfc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x204c00: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x204c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x204c04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x204C04u;
    {
        const bool branch_taken_0x204c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C04u;
        // 0x204c08: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c04) {
            ctx->pc = 0x204C2Cu;
            goto label_204c2c;
        }
    }
    ctx->pc = 0x204C0Cu;
label_204c0c:
    // 0x204c0c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x204c0cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204c10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x204c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x204c14: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x204c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x204c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x204c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204c1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204c1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x204c20: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x204c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_204c24:
    // 0x204c24: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x204c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_204c28:
    // 0x204c28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_204c2c:
    // 0x204c2c: 0x8c8337e8  lw          $v1, 0x37E8($a0)
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14312)));
    // 0x204c30: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x204c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x204c34: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x204c34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x204c38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x204c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x204c3c: 0x8c8337e8  lw          $v1, 0x37E8($a0)
    ctx->pc = 0x204c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14312)));
    // 0x204c40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x204c44: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x204c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x204c48: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x204c48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x204c4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x204c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x204c50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x204c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_204c54:
    // 0x204c54: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x204c54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204c58: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x204c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204c5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x204c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204c60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x204c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204c64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x204c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204c68: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x204c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x204C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C6Cu;
        // 0x204c70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204C74u;
}

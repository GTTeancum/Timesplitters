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

// Function: doorPropTick
// Address: 0x26be78 - 0x26c138
void doorPropTick_0x26be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("doorPropTick_0x26be78");
#endif

    switch (ctx->pc) {
        case 0x26c07cu: goto label_26c07c;
        case 0x26c0a8u: goto label_26c0a8;
        default: break;
    }

    ctx->pc = 0x26be78u;

    // 0x26be78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26be78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26be7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26be7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26be80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26be84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26be84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26be8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26be90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26be94: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x26be94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26be98: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x26be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x26be9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26bea0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BEA0u;
    {
        const bool branch_taken_0x26bea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEA0u;
        // 0x26bea4: 0x8e720160  lw          $s2, 0x160($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bea0) {
            ctx->pc = 0x26BEC4u;
            goto label_26bec4;
        }
    }
    ctx->pc = 0x26BEA8u;
    // 0x26bea8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x26beac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BEACu;
    {
        const bool branch_taken_0x26beac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26beac) {
            ctx->pc = 0x26BEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BEACu;
            // 0x26beb0: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BEC8u;
            goto label_26bec8;
        }
    }
    ctx->pc = 0x26BEB4u;
    // 0x26beb4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x26beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x26beb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bebc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26bec0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x26bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_26bec4:
    // 0x26bec4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x26bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_26bec8:
    // 0x26bec8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26BEC8u;
    {
        const bool branch_taken_0x26bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEC8u;
        // 0x26becc: 0xc6420020  lwc1        $f2, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bec8) {
            ctx->pc = 0x26BF14u;
            goto label_26bf14;
        }
    }
    ctx->pc = 0x26BED0u;
    // 0x26bed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26bed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26bed4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26bed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26bed8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x26bed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bedc: 0x0  nop
    ctx->pc = 0x26bedcu;
    // NOP
    // 0x26bee0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26BEE0u;
    {
        const bool branch_taken_0x26bee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEE0u;
        // 0x26bee4: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bee0) {
            ctx->pc = 0x26BEFCu;
            goto label_26befc;
        }
    }
    ctx->pc = 0x26BEE8u;
    // 0x26bee8: 0xc781843c  lwc1        $f1, -0x7BC4($gp)
    ctx->pc = 0x26bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26beec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26beecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26bef0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x26bef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26bef4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x26bef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x26bef8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x26bef8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26befc:
    // 0x26befc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x26befcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bf00: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x26BF00u;
    {
        const bool branch_taken_0x26bf00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bf00) {
            ctx->pc = 0x26BF50u;
            goto label_26bf50;
        }
    }
    ctx->pc = 0x26BF08u;
    // 0x26bf08: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x26bf08u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x26bf0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26BF0Cu;
    {
        const bool branch_taken_0x26bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF0Cu;
        // 0x26bf10: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf0c) {
            ctx->pc = 0x26BF50u;
            goto label_26bf50;
        }
    }
    ctx->pc = 0x26BF14u;
label_26bf14:
    // 0x26bf14: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x26bf14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26bf18: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x26bf18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bf1c: 0x0  nop
    ctx->pc = 0x26bf1cu;
    // NOP
    // 0x26bf20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26BF20u;
    {
        const bool branch_taken_0x26bf20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF20u;
        // 0x26bf24: 0xc780b468  lwc1        $f0, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf20) {
            ctx->pc = 0x26BF3Cu;
            goto label_26bf3c;
        }
    }
    ctx->pc = 0x26BF28u;
    // 0x26bf28: 0xc7818440  lwc1        $f1, -0x7BC0($gp)
    ctx->pc = 0x26bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bf2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26bf2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26bf30: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x26bf30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26bf34: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x26bf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x26bf38: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x26bf38u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26bf3c:
    // 0x26bf3c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x26bf3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bf40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26BF40u;
    {
        const bool branch_taken_0x26bf40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bf40) {
            ctx->pc = 0x26BF50u;
            goto label_26bf50;
        }
    }
    ctx->pc = 0x26BF48u;
    // 0x26bf48: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x26bf48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x26bf4c: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x26bf4cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_26bf50:
    // 0x26bf50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26bf54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bf54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bf58: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x26bf58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bf5c: 0x0  nop
    ctx->pc = 0x26bf5cu;
    // NOP
    // 0x26bf60: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x26BF60u;
    {
        const bool branch_taken_0x26bf60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bf60) {
            ctx->pc = 0x26BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BF60u;
            // 0x26bf64: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BF98u;
            goto label_26bf98;
        }
    }
    ctx->pc = 0x26BF68u;
    // 0x26bf68: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x26bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x26bf6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BF6Cu;
    {
        const bool branch_taken_0x26bf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF6Cu;
        // 0x26bf70: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf6c) {
            ctx->pc = 0x26BF84u;
            goto label_26bf84;
        }
    }
    ctx->pc = 0x26BF74u;
    // 0x26bf74: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x26bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x26bf78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26bf7c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x26bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x26bf80: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x26bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_26bf84:
    // 0x26bf84: 0x284200b5  slti        $v0, $v0, 0xB5
    ctx->pc = 0x26bf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x26bf88: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BF88u;
    {
        const bool branch_taken_0x26bf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf88) {
            ctx->pc = 0x26BF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BF88u;
            // 0x26bf8c: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BF98u;
            goto label_26bf98;
        }
    }
    ctx->pc = 0x26BF90u;
    // 0x26bf90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26BF90u;
    {
        const bool branch_taken_0x26bf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF90u;
        // 0x26bf94: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf90) {
            ctx->pc = 0x26BF9Cu;
            goto label_26bf9c;
        }
    }
    ctx->pc = 0x26BF98u;
label_26bf98:
    // 0x26bf98: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_26bf9c:
    // 0x26bf9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bfa0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26BFA0u;
    {
        const bool branch_taken_0x26bfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFA0u;
        // 0x26bfa4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfa0) {
            ctx->pc = 0x26C010u;
            goto label_26c010;
        }
    }
    ctx->pc = 0x26BFA8u;
    // 0x26bfa8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BFA8u;
    {
        const bool branch_taken_0x26bfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfa8) {
            ctx->pc = 0x26BFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BFA8u;
            // 0x26bfac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BFC0u;
            goto label_26bfc0;
        }
    }
    ctx->pc = 0x26BFB0u;
    // 0x26bfb0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26BFB0u;
    {
        const bool branch_taken_0x26bfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFB0u;
        // 0x26bfb4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfb0) {
            ctx->pc = 0x26BFD8u;
            goto label_26bfd8;
        }
    }
    ctx->pc = 0x26BFB8u;
    // 0x26bfb8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x26BFB8u;
    {
        const bool branch_taken_0x26bfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFB8u;
        // 0x26bfbc: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfb8) {
            ctx->pc = 0x26C120u;
            goto label_26c120;
        }
    }
    ctx->pc = 0x26BFC0u;
label_26bfc0:
    // 0x26bfc0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26BFC0u;
    {
        const bool branch_taken_0x26bfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFC0u;
        // 0x26bfc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfc0) {
            ctx->pc = 0x26C048u;
            goto label_26c048;
        }
    }
    ctx->pc = 0x26BFC8u;
    // 0x26bfc8: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x26BFC8u;
    {
        const bool branch_taken_0x26bfc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFC8u;
        // 0x26bfcc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfc8) {
            ctx->pc = 0x26C0ECu;
            goto label_26c0ec;
        }
    }
    ctx->pc = 0x26BFD0u;
    // 0x26bfd0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x26BFD0u;
    {
        const bool branch_taken_0x26bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFD0u;
        // 0x26bfd4: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfd0) {
            ctx->pc = 0x26C120u;
            goto label_26c120;
        }
    }
    ctx->pc = 0x26BFD8u;
label_26bfd8:
    // 0x26bfd8: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x26bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26bfdc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26bfe0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26bfe0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26bfe4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26bfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26bfe8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26bfec: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x26bfecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x26bff0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26bff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bff4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26bff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bff8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x26bff8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x26bffc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26bffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c004: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c008: 0x80ad390  j           func_2B4E40
    ctx->pc = 0x26C008u;
    ctx->pc = 0x26C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C008u;
    // 0x26c00c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    matrixTrans_0x2b4e40(rdram, ctx, runtime); return;
    ctx->pc = 0x26C010u;
label_26c010:
    // 0x26c010: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x26c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c014: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x26c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26c018: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26c018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26c01c: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x26c01cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x26c020: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c024: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c028: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x26c028u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x26c02c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26c02cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26c034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c03c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c040: 0x80ad390  j           func_2B4E40
    ctx->pc = 0x26C040u;
    ctx->pc = 0x26C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C040u;
    // 0x26c044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    matrixTrans_0x2b4e40(rdram, ctx, runtime); return;
    ctx->pc = 0x26C048u;
label_26c048:
    // 0x26c048: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x26c048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26c04c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x26c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26c050: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26c050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26c054: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26c054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26c058: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26c05c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c060: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x26c060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26c064: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26c064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c068: 0x80700003  lb          $s0, 0x3($v1)
    ctx->pc = 0x26c068u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x26c06c: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x26c06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26c070: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c074: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26C074u;
    SET_GPR_U32(ctx, 31, 0x26C07Cu);
    ctx->pc = 0x26C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C074u;
    // 0x26c078: 0x80b10004  lb          $s1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26C074u, 0x26C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C07Cu;
label_26c07c:
    // 0x26c07c: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x26c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c080: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26c084: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26c088: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26c088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26c08c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x26c08cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x26c090: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x26c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c094: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c098: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x26c098u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x26c09c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26c09cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26c0a0: 0xc0ad390  jal         func_2B4E40
    ctx->pc = 0x26C0A0u;
    SET_GPR_U32(ctx, 31, 0x26C0A8u);
    ctx->pc = 0x26C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C0A0u;
    // 0x26c0a4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4E40u, 0x26C0A0u, 0x26C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0A8u;
label_26c0a8:
    // 0x26c0a8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x26c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26c0ac: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x26c0acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x26c0b0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x26c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26c0b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26c0b8: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x26c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c0bc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x26c0bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x26c0c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c0c4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26c0c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26c0c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26c0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c0cc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x26c0d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26c0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c0d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c0d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c0d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26c0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c0dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c0e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c0e4: 0x80ad390  j           func_2B4E40
    ctx->pc = 0x26C0E4u;
    ctx->pc = 0x26C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C0E4u;
    // 0x26c0e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    matrixTrans_0x2b4e40(rdram, ctx, runtime); return;
    ctx->pc = 0x26C0ECu;
label_26c0ec:
    // 0x26c0ec: 0xc64d0024  lwc1        $f13, 0x24($s2)
    ctx->pc = 0x26c0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26c0f0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26c0f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26c0f8: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x26c0f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x26c0fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c100: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x26c100u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x26c104: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26c104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c108: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c10c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26c10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c114: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c118: 0x80ad390  j           func_2B4E40
    ctx->pc = 0x26C118u;
    ctx->pc = 0x26C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C118u;
    // 0x26c11c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4E40u;
    matrixTrans_0x2b4e40(rdram, ctx, runtime); return;
    ctx->pc = 0x26C120u;
label_26c120:
    // 0x26c120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c124: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26c124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c12c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c130: 0x3e00008  jr          $ra
    ctx->pc = 0x26C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C130u;
        // 0x26c134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C138u;
}

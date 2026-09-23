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

// Function: pathPosUpdateRel
// Address: 0x275b88 - 0x27626c
void pathPosUpdateRel_0x275b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pathPosUpdateRel_0x275b88");
#endif

    switch (ctx->pc) {
        case 0x275bd0u: goto label_275bd0;
        case 0x275cbcu: goto label_275cbc;
        case 0x275d60u: goto label_275d60;
        case 0x275e8cu: goto label_275e8c;
        case 0x275f88u: goto label_275f88;
        case 0x275fb8u: goto label_275fb8;
        case 0x276228u: goto label_276228;
        default: break;
    }

    ctx->pc = 0x275b88u;

    // 0x275b88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x275b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x275b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275b90: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x275b90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x275b94: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x275b94u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x275b98: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x275b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x275b9c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x275b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x275ba0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x275ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275ba4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x275ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x275ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bac: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x275bacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x275bb0: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x275bb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x275bb4: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x275bb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x275bb8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x275bb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x275bbc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x275bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x275bc0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x275bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x275bc4: 0x4500019d  bc1f        . + 4 + (0x19D << 2)
    ctx->pc = 0x275BC4u;
    {
        const bool branch_taken_0x275bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BC4u;
        // 0x275bc8: 0x8e300160  lw          $s0, 0x160($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bc4) {
            ctx->pc = 0x27623Cu;
            goto label_27623c;
        }
    }
    ctx->pc = 0x275BCCu;
    // 0x275bcc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x275bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_275bd0:
    // 0x275bd0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x275bd0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x275bd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x275bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bd8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x275bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x275bdc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275be0: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x275BE0u;
    {
        const bool branch_taken_0x275be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BE0u;
        // 0x275be4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275be0) {
            ctx->pc = 0x276000u;
            goto label_276000;
        }
    }
    ctx->pc = 0x275BE8u;
    // 0x275be8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x275bec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x275becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275bf0: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x275bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x275bf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275bf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x275bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275bfc: 0x800008  jr          $a0
    ctx->pc = 0x275BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275C04u: goto label_275c04;
            case 0x275DA0u: goto label_275da0;
            case 0x275DACu: goto label_275dac;
            case 0x275EA8u: goto label_275ea8;
            case 0x275FD0u: goto label_275fd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275BFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275C04u;
label_275c04:
    // 0x275c04: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x275c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c08: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x275c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275c0c: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x275c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275c10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x275c14: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x275c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275c18: 0xc6250038  lwc1        $f5, 0x38($s1)
    ctx->pc = 0x275c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275c1c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x275c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x275c20: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x275c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275c24: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x275c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x275c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x275c2c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x275c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x275c30: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x275c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c34: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x275c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275c38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x275c3c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x275c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x275c40: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x275c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c44: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x275c44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x275c48: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x275c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x275c4c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x275c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c50: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x275c50u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x275c54: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x275c54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x275c58: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x275c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c5c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x275c5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x275c60: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x275c60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x275c64: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x275c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275c68: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x275c68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x275c6c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x275c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275c70: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x275c70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x275c74: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x275c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c78: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x275c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x275c7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x275c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275c80: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x275c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x275c84: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x275c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275c88: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x275c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x275c8c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x275c8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x275c90: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x275c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x275c94: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x275c94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x275c98: 0x0  nop
    ctx->pc = 0x275c98u;
    // NOP
    // 0x275c9c: 0x0  nop
    ctx->pc = 0x275c9cu;
    // NOP
    // 0x275ca0: 0x460c0504  c1          0xC0504
    ctx->pc = 0x275ca0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[12]);
    // 0x275ca4: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x275ca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275ca8: 0x0  nop
    ctx->pc = 0x275ca8u;
    // NOP
    // 0x275cac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x275CACu;
    {
        const bool branch_taken_0x275cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CACu;
        // 0x275cb0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cac) {
            ctx->pc = 0x275CC0u;
            goto label_275cc0;
        }
    }
    ctx->pc = 0x275CB4u;
    // 0x275cb4: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x275CB4u;
    SET_GPR_U32(ctx, 31, 0x275CBCu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x275CB4u, 0x275CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CBCu;
label_275cbc:
    // 0x275cbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x275cbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_275cc0:
    // 0x275cc0: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x275cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275cc4: 0x0  nop
    ctx->pc = 0x275cc4u;
    // NOP
    // 0x275cc8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x275CC8u;
    {
        const bool branch_taken_0x275cc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CC8u;
        // 0x275ccc: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cc8) {
            ctx->pc = 0x275CFCu;
            goto label_275cfc;
        }
    }
    ctx->pc = 0x275CD0u;
    // 0x275cd0: 0x4614bdc1  sub.s       $f23, $f23, $f20
    ctx->pc = 0x275cd0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x275cd4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x275cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275cd8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x275cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275cdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x275cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275ce0: 0xe6220030  swc1        $f2, 0x30($s1)
    ctx->pc = 0x275ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x275ce4: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x275ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x275ce8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x275ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x275cec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275cf0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x275cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x275cf4: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x275CF4u;
    {
        const bool branch_taken_0x275cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CF4u;
        // 0x275cf8: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cf4) {
            ctx->pc = 0x275FFCu;
            goto label_275ffc;
        }
    }
    ctx->pc = 0x275CFCu;
label_275cfc:
    // 0x275cfc: 0x0  nop
    ctx->pc = 0x275cfcu;
    // NOP
    // 0x275d00: 0x0  nop
    ctx->pc = 0x275d00u;
    // NOP
    // 0x275d04: 0x4614b883  div.s       $f2, $f23, $f20
    ctx->pc = 0x275d04u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[2] = ctx->f[23] / ctx->f[20];
    // 0x275d08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x275d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275d0c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x275d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275d10: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x275d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275d14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x275d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x275d18: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x275d18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x275d1c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x275d1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x275d20: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x275d20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x275d24: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x275d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x275d28: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x275d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x275d2c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x275d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x275d30: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x275d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x275d34: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x275d34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x275d38: 0x46002300  add.s       $f12, $f4, $f0
    ctx->pc = 0x275d38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x275d3c: 0x0  nop
    ctx->pc = 0x275d3cu;
    // NOP
    // 0x275d40: 0x0  nop
    ctx->pc = 0x275d40u;
    // NOP
    // 0x275d44: 0x460c0004  c1          0xC0004
    ctx->pc = 0x275d44u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x275d48: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x275d48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275d4c: 0x0  nop
    ctx->pc = 0x275d4cu;
    // NOP
    // 0x275d50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x275D50u;
    {
        const bool branch_taken_0x275d50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D50u;
        // 0x275d54: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d50) {
            ctx->pc = 0x275D60u;
            goto label_275d60;
        }
    }
    ctx->pc = 0x275D58u;
    // 0x275d58: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x275D58u;
    SET_GPR_U32(ctx, 31, 0x275D60u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x275D58u, 0x275D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D60u;
label_275d60:
    // 0x275d60: 0x0  nop
    ctx->pc = 0x275d60u;
    // NOP
    // 0x275d64: 0x0  nop
    ctx->pc = 0x275d64u;
    // NOP
    // 0x275d68: 0x46140643  div.s       $f25, $f0, $f20
    ctx->pc = 0x275d68u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[20];
    // 0x275d6c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x275d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275d70: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x275d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275d74: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x275d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275d78: 0xc6240030  lwc1        $f4, 0x30($s1)
    ctx->pc = 0x275d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275d7c: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x275d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275d80: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x275d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275d84: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x275d84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x275d88: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x275d88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x275d8c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x275d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x275d90: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x275d90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x275d94: 0xe6240030  swc1        $f4, 0x30($s1)
    ctx->pc = 0x275d94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x275d98: 0xe6220034  swc1        $f2, 0x34($s1)
    ctx->pc = 0x275d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x275d9c: 0xe6230038  swc1        $f3, 0x38($s1)
    ctx->pc = 0x275d9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_275da0:
    // 0x275da0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x275da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x275da4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x275DA4u;
    {
        const bool branch_taken_0x275da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DA4u;
        // 0x275da8: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275da4) {
            ctx->pc = 0x276000u;
            goto label_276000;
        }
    }
    ctx->pc = 0x275DACu;
label_275dac:
    // 0x275dac: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x275dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275db0: 0xc6040048  lwc1        $f4, 0x48($s0)
    ctx->pc = 0x275db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275db4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x275db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x275db8: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x275db8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x275dbc: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x275dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275dc0: 0x0  nop
    ctx->pc = 0x275dc0u;
    // NOP
    // 0x275dc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x275DC4u;
    {
        const bool branch_taken_0x275dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DC4u;
        // 0x275dc8: 0xc4b80014  lwc1        $f24, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dc4) {
            ctx->pc = 0x275DD8u;
            goto label_275dd8;
        }
    }
    ctx->pc = 0x275DCCu;
    // 0x275dcc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x275dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x275dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275dd4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x275dd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_275dd8:
    // 0x275dd8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x275dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x275ddc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x275ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x275de0: 0xc78085f8  lwc1        $f0, -0x7A08($gp)
    ctx->pc = 0x275de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275de4: 0x0  nop
    ctx->pc = 0x275de4u;
    // NOP
    // 0x275de8: 0x0  nop
    ctx->pc = 0x275de8u;
    // NOP
    // 0x275dec: 0x46061043  div.s       $f1, $f2, $f6
    ctx->pc = 0x275decu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[6];
    // 0x275df0: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x275df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x275df4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x275df4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275df8: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x275df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275dfc: 0x0  nop
    ctx->pc = 0x275dfcu;
    // NOP
    // 0x275e00: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x275E00u;
    {
        const bool branch_taken_0x275e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275e00) {
            ctx->pc = 0x275E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275E00u;
            // 0x275e04: 0x46171002  mul.s       $f0, $f2, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275E20u;
            goto label_275e20;
        }
    }
    ctx->pc = 0x275E08u;
    // 0x275e08: 0xe6030048  swc1        $f3, 0x48($s0)
    ctx->pc = 0x275e08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x275e0c: 0x4601bdc1  sub.s       $f23, $f23, $f1
    ctx->pc = 0x275e0cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x275e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275e14: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x275e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x275e18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x275E18u;
    {
        const bool branch_taken_0x275e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E18u;
        // 0x275e1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e18) {
            ctx->pc = 0x275E58u;
            goto label_275e58;
        }
    }
    ctx->pc = 0x275E20u;
label_275e20:
    // 0x275e20: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x275e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275e24: 0x0  nop
    ctx->pc = 0x275e24u;
    // NOP
    // 0x275e28: 0x0  nop
    ctx->pc = 0x275e28u;
    // NOP
    // 0x275e2c: 0x4601be43  div.s       $f25, $f23, $f1
    ctx->pc = 0x275e2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[25] = ctx->f[23] / ctx->f[1];
    // 0x275e30: 0x0  nop
    ctx->pc = 0x275e30u;
    // NOP
    // 0x275e34: 0x0  nop
    ctx->pc = 0x275e34u;
    // NOP
    // 0x275e38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x275e38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x275e3c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x275e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275e40: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x275e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x275e44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x275E44u;
    {
        const bool branch_taken_0x275e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E44u;
        // 0x275e48: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e44) {
            ctx->pc = 0x275E54u;
            goto label_275e54;
        }
    }
    ctx->pc = 0x275E4Cu;
    // 0x275e4c: 0x46061000  add.s       $f0, $f2, $f6
    ctx->pc = 0x275e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x275e50: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x275e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_275e54:
    // 0x275e54: 0x46002dc6  mov.s       $f23, $f5
    ctx->pc = 0x275e54u;
    ctx->f[23] = FPU_MOV_S(ctx->f[5]);
label_275e58:
    // 0x275e58: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x275e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275e5c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x275e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x275e60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x275e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275e64: 0xc79685fc  lwc1        $f22, -0x7A04($gp)
    ctx->pc = 0x275e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x275e68: 0x46156300  add.s       $f12, $f12, $f21
    ctx->pc = 0x275e68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x275e6c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x275e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x275e70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x275e74: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x275e74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x275e78: 0x0  nop
    ctx->pc = 0x275e78u;
    // NOP
    // 0x275e7c: 0x0  nop
    ctx->pc = 0x275e7cu;
    // NOP
    // 0x275e80: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x275e80u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x275e84: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x275E84u;
    SET_GPR_U32(ctx, 31, 0x275E8Cu);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x275E84u, 0x275E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E8Cu;
label_275e8c:
    // 0x275e8c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x275e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x275e90: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x275e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275e94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x275e98: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x275e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x275e9c: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x275e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275ea0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x275EA0u;
    {
        const bool branch_taken_0x275ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EA0u;
        // 0x275ea4: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ea0) {
            ctx->pc = 0x275FA0u;
            goto label_275fa0;
        }
    }
    ctx->pc = 0x275EA8u;
label_275ea8:
    // 0x275ea8: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x275ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275eac: 0xc6050048  lwc1        $f5, 0x48($s0)
    ctx->pc = 0x275eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275eb0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x275eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x275eb4: 0x46052081  sub.s       $f2, $f4, $f5
    ctx->pc = 0x275eb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x275eb8: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x275eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275ebc: 0x0  nop
    ctx->pc = 0x275ebcu;
    // NOP
    // 0x275ec0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x275EC0u;
    {
        const bool branch_taken_0x275ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EC0u;
        // 0x275ec4: 0xc4b80014  lwc1        $f24, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ec0) {
            ctx->pc = 0x275ED4u;
            goto label_275ed4;
        }
    }
    ctx->pc = 0x275EC8u;
    // 0x275ec8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x275ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x275ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275ed0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x275ed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_275ed4:
    // 0x275ed4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x275ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x275ed8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x275ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x275edc: 0xc7808600  lwc1        $f0, -0x7A00($gp)
    ctx->pc = 0x275edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275ee0: 0x0  nop
    ctx->pc = 0x275ee0u;
    // NOP
    // 0x275ee4: 0x0  nop
    ctx->pc = 0x275ee4u;
    // NOP
    // 0x275ee8: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x275ee8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
    // 0x275eec: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x275eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x275ef0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x275ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275ef4: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x275ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275ef8: 0x0  nop
    ctx->pc = 0x275ef8u;
    // NOP
    // 0x275efc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x275EFCu;
    {
        const bool branch_taken_0x275efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275efc) {
            ctx->pc = 0x275F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275EFCu;
            // 0x275f00: 0x46171002  mul.s       $f0, $f2, $f23 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F1Cu;
            goto label_275f1c;
        }
    }
    ctx->pc = 0x275F04u;
    // 0x275f04: 0xe6040048  swc1        $f4, 0x48($s0)
    ctx->pc = 0x275f04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x275f08: 0x4601bdc1  sub.s       $f23, $f23, $f1
    ctx->pc = 0x275f08u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x275f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275f10: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x275f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x275f14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x275F14u;
    {
        const bool branch_taken_0x275f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F14u;
        // 0x275f18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f14) {
            ctx->pc = 0x275F54u;
            goto label_275f54;
        }
    }
    ctx->pc = 0x275F1Cu;
label_275f1c:
    // 0x275f1c: 0x0  nop
    ctx->pc = 0x275f1cu;
    // NOP
    // 0x275f20: 0x0  nop
    ctx->pc = 0x275f20u;
    // NOP
    // 0x275f24: 0x4601be43  div.s       $f25, $f23, $f1
    ctx->pc = 0x275f24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[25] = ctx->f[23] / ctx->f[1];
    // 0x275f28: 0x0  nop
    ctx->pc = 0x275f28u;
    // NOP
    // 0x275f2c: 0x0  nop
    ctx->pc = 0x275f2cu;
    // NOP
    // 0x275f30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x275f30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x275f34: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x275f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x275f38: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x275f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275f3c: 0x0  nop
    ctx->pc = 0x275f3cu;
    // NOP
    // 0x275f40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x275F40u;
    {
        const bool branch_taken_0x275f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F40u;
        // 0x275f44: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f40) {
            ctx->pc = 0x275F50u;
            goto label_275f50;
        }
    }
    ctx->pc = 0x275F48u;
    // 0x275f48: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x275f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x275f4c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x275f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_275f50:
    // 0x275f50: 0x460035c6  mov.s       $f23, $f6
    ctx->pc = 0x275f50u;
    ctx->f[23] = FPU_MOV_S(ctx->f[6]);
label_275f54:
    // 0x275f54: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x275f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275f58: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x275f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x275f5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x275f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275f60: 0xc7968604  lwc1        $f22, -0x79FC($gp)
    ctx->pc = 0x275f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x275f64: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x275f64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x275f68: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x275f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x275f6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x275f70: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x275f70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x275f74: 0x0  nop
    ctx->pc = 0x275f74u;
    // NOP
    // 0x275f78: 0x0  nop
    ctx->pc = 0x275f78u;
    // NOP
    // 0x275f7c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x275f7cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x275f80: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x275F80u;
    SET_GPR_U32(ctx, 31, 0x275F88u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x275F80u, 0x275F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F88u;
label_275f88:
    // 0x275f88: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x275f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x275f8c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x275f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275f90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x275f94: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x275f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x275f98: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x275f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275f9c: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x275f9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
label_275fa0:
    // 0x275fa0: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x275fa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x275fa4: 0x0  nop
    ctx->pc = 0x275fa4u;
    // NOP
    // 0x275fa8: 0x0  nop
    ctx->pc = 0x275fa8u;
    // NOP
    // 0x275fac: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x275facu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x275fb0: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x275FB0u;
    SET_GPR_U32(ctx, 31, 0x275FB8u);
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x275FB0u, 0x275FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FB8u;
label_275fb8:
    // 0x275fb8: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x275fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x275fbc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x275fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275fc0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x275fc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x275fc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x275fc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275FC8u;
    {
        const bool branch_taken_0x275fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FC8u;
        // 0x275fcc: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fc8) {
            ctx->pc = 0x275FFCu;
            goto label_275ffc;
        }
    }
    ctx->pc = 0x275FD0u;
label_275fd0:
    // 0x275fd0: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x275fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275fd4: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x275fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275fd8: 0x0  nop
    ctx->pc = 0x275fd8u;
    // NOP
    // 0x275fdc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x275FDCu;
    {
        const bool branch_taken_0x275fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275fdc) {
            ctx->pc = 0x275FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275FDCu;
            // 0x275fe0: 0x46170001  sub.s       $f0, $f0, $f23 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FF4u;
            goto label_275ff4;
        }
    }
    ctx->pc = 0x275FE4u;
    // 0x275fe4: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x275fe4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x275fe8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x275fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x275fec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275FECu;
    {
        const bool branch_taken_0x275fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FECu;
        // 0x275ff0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fec) {
            ctx->pc = 0x275FFCu;
            goto label_275ffc;
        }
    }
    ctx->pc = 0x275FF4u;
label_275ff4:
    // 0x275ff4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x275ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x275ff8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x275ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_275ffc:
    // 0x275ffc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_276000:
    // 0x276000: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x276000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276004: 0x50620083  beql        $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x276004u;
    {
        const bool branch_taken_0x276004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x276004) {
            ctx->pc = 0x276008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276004u;
            // 0x276008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276214u;
            goto label_276214;
        }
    }
    ctx->pc = 0x27600Cu;
    // 0x27600c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x27600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276010: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x276010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276014: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x276014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276018: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x276018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27601c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27601cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x276020: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x276020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x276024: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x276024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276028: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x276028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x27602c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27602cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276030: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x276030u;
    {
        const bool branch_taken_0x276030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276030u;
        // 0x276034: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276030) {
            ctx->pc = 0x276044u;
            goto label_276044;
        }
    }
    ctx->pc = 0x276038u;
    // 0x276038: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x276038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27603c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27603cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276040: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x276040u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_276044:
    // 0x276044: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x276044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276048: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x276048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27604c: 0x0  nop
    ctx->pc = 0x27604cu;
    // NOP
    // 0x276050: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x276050u;
    {
        const bool branch_taken_0x276050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276050) {
            ctx->pc = 0x276054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276050u;
            // 0x276054: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x276068u;
            goto label_276068;
        }
    }
    ctx->pc = 0x276058u;
    // 0x276058: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x276058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27605c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27605cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276060: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x276060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276064: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x276064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_276068:
    // 0x276068: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x276068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27606c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x27606cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x276070: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x276070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276074: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x276074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276078: 0x0  nop
    ctx->pc = 0x276078u;
    // NOP
    // 0x27607c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27607Cu;
    {
        const bool branch_taken_0x27607c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27607Cu;
        // 0x276080: 0xe601003c  swc1        $f1, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27607c) {
            ctx->pc = 0x276094u;
            goto label_276094;
        }
    }
    ctx->pc = 0x276084u;
    // 0x276084: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x276084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x276088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27608c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27608cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276090: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x276090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_276094:
    // 0x276094: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x276094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276098: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x276098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27609c: 0x0  nop
    ctx->pc = 0x27609cu;
    // NOP
    // 0x2760a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2760A0u;
    {
        const bool branch_taken_0x2760a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2760A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760A0u;
        // 0x2760a4: 0xc4c10024  lwc1        $f1, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760a0) {
            ctx->pc = 0x2760B4u;
            goto label_2760b4;
        }
    }
    ctx->pc = 0x2760A8u;
    // 0x2760a8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2760a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2760ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2760acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760b0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2760b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2760b4:
    // 0x2760b4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2760b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2760b8: 0x0  nop
    ctx->pc = 0x2760b8u;
    // NOP
    // 0x2760bc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2760BCu;
    {
        const bool branch_taken_0x2760bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2760bc) {
            ctx->pc = 0x2760C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2760BCu;
            // 0x2760c0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x2760C4u;
    // 0x2760c4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2760c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2760c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2760c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2760ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2760d0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2760d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2760d4:
    // 0x2760d4: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x2760d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x2760d8: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x2760d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2760dc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2760dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2760e0: 0x0  nop
    ctx->pc = 0x2760e0u;
    // NOP
    // 0x2760e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2760E4u;
    {
        const bool branch_taken_0x2760e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2760E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760E4u;
        // 0x2760e8: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760e4) {
            ctx->pc = 0x2760FCu;
            goto label_2760fc;
        }
    }
    ctx->pc = 0x2760ECu;
    // 0x2760ec: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2760ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2760f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2760f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2760f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2760f8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2760f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2760fc:
    // 0x2760fc: 0xc602004c  lwc1        $f2, 0x4C($s0)
    ctx->pc = 0x2760fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276100: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x276100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276104: 0x0  nop
    ctx->pc = 0x276104u;
    // NOP
    // 0x276108: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x276108u;
    {
        const bool branch_taken_0x276108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276108u;
        // 0x27610c: 0xc4c10028  lwc1        $f1, 0x28($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276108) {
            ctx->pc = 0x27611Cu;
            goto label_27611c;
        }
    }
    ctx->pc = 0x276110u;
    // 0x276110: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x276110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x276114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276118: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x276118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27611c:
    // 0x27611c: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x27611cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276120: 0x0  nop
    ctx->pc = 0x276120u;
    // NOP
    // 0x276124: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x276124u;
    {
        const bool branch_taken_0x276124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276124) {
            ctx->pc = 0x276128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276124u;
            // 0x276128: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27613Cu;
            goto label_27613c;
        }
    }
    ctx->pc = 0x27612Cu;
    // 0x27612c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x276130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276134: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x276134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276138: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x276138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27613c:
    // 0x27613c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x27613cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x276140: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x276140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276144: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x276144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276148: 0x0  nop
    ctx->pc = 0x276148u;
    // NOP
    // 0x27614c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27614Cu;
    {
        const bool branch_taken_0x27614c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27614Cu;
        // 0x276150: 0xe601004c  swc1        $f1, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27614c) {
            ctx->pc = 0x276164u;
            goto label_276164;
        }
    }
    ctx->pc = 0x276154u;
    // 0x276154: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x276154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x276158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27615c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27615cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276160: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x276160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_276164:
    // 0x276164: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x276164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276168: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x276168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27616c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x276170: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x276170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x276174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276178: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x276178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27617c: 0x0  nop
    ctx->pc = 0x27617cu;
    // NOP
    // 0x276180: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x276180u;
    {
        const bool branch_taken_0x276180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276180u;
        // 0x276184: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276180) {
            ctx->pc = 0x276190u;
            goto label_276190;
        }
    }
    ctx->pc = 0x276188u;
    // 0x276188: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x276188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27618c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x27618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_276190:
    // 0x276190: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x276190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x276194: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x276194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x276198: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x276198u;
    {
        const bool branch_taken_0x276198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276198u;
        // 0x27619c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276198) {
            ctx->pc = 0x276214u;
            goto label_276214;
        }
    }
    ctx->pc = 0x2761A0u;
    // 0x2761a0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2761a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2761a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2761a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2761a8: 0xc7818608  lwc1        $f1, -0x79F8($gp)
    ctx->pc = 0x2761a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2761ac: 0xc782860c  lwc1        $f2, -0x79F4($gp)
    ctx->pc = 0x2761acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2761b0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2761b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2761b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2761b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2761b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2761bc: 0x24635c60  addiu       $v1, $v1, 0x5C60
    ctx->pc = 0x2761bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x2761c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2761c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2761c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2761c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2761c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2761cc: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2761ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2761d0: 0xc7858610  lwc1        $f5, -0x79F0($gp)
    ctx->pc = 0x2761d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2761d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2761d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2761d8: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2761d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2761dc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2761dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2761e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2761e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2761e4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2761e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2761e8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2761e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2761ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2761ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2761f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2761f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2761f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2761f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2761f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2761fc: 0x0  nop
    ctx->pc = 0x2761fcu;
    // NOP
    // 0x276200: 0x0  nop
    ctx->pc = 0x276200u;
    // NOP
    // 0x276204: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x276204u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x276208: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x276208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27620c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x27620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x276210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276214:
    // 0x276214: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276214u;
    {
        const bool branch_taken_0x276214 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x276218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276214u;
        // 0x276218: 0x24c2002c  addiu       $v0, $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276214) {
            ctx->pc = 0x276228u;
            goto label_276228;
        }
    }
    ctx->pc = 0x27621Cu;
    // 0x27621c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276220: 0xc09d89c  jal         func_276270
    ctx->pc = 0x276220u;
    SET_GPR_U32(ctx, 31, 0x276228u);
    ctx->pc = 0x276224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276220u;
    // 0x276224: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276270u, 0x276220u, 0x276228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276228u;
label_276228:
    // 0x276228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27622c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x27622cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276230: 0x0  nop
    ctx->pc = 0x276230u;
    // NOP
    // 0x276234: 0x4503fe66  bc1tl       . + 4 + (-0x19A << 2)
    ctx->pc = 0x276234u;
    {
        const bool branch_taken_0x276234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276234) {
            ctx->pc = 0x276238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276234u;
            // 0x276238: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275bd0;
        }
    }
    ctx->pc = 0x27623Cu;
label_27623c:
    // 0x27623c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27623cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276240: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x276240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276244: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x276244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276248: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x276248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27624c: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x27624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x276250: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x276250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x276254: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x276254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x276258: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x276258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27625c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x27625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x276260: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x276260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276264: 0x3e00008  jr          $ra
    ctx->pc = 0x276264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276264u;
        // 0x276268: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27626Cu;
}

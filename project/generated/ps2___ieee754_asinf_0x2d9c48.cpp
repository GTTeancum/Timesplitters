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

// Function: __ieee754_asinf
// Address: 0x2d9c48 - 0x2d9fe4
void ps2___ieee754_asinf_0x2d9c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_asinf_0x2d9c48");
#endif

    switch (ctx->pc) {
        case 0x2d9e08u: goto label_2d9e08;
        case 0x2d9eecu: goto label_2d9eec;
        default: break;
    }

    ctx->pc = 0x2d9c48u;

    // 0x2d9c48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d9c4c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x2d9c4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d9c50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d9c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d9c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d9c60: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2d9c60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d9c64: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2d9c64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d9c68: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2d9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2d9c6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9c74: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x2d9c74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2d9c78: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9C78u;
    {
        const bool branch_taken_0x2d9c78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C78u;
        // 0x2d9c7c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c78) {
            ctx->pc = 0x2D9CA8u;
            goto label_2d9ca8;
        }
    }
    ctx->pc = 0x2D9C80u;
    // 0x2d9c80: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2d9c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2d9c84: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2d9c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2d9c88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9c8c: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2d9c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2d9c90: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2d9c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2d9c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c98: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2d9c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2d9c9c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2d9c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2d9ca0: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2D9CA0u;
    {
        const bool branch_taken_0x2d9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CA0u;
        // 0x2d9ca4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ca0) {
            ctx->pc = 0x2D9FC4u;
            goto label_2d9fc4;
        }
    }
    ctx->pc = 0x2D9CA8u;
label_2d9ca8:
    // 0x2d9ca8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2d9ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d9cac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9CACu;
    {
        const bool branch_taken_0x2d9cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CACu;
        // 0x2d9cb0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cac) {
            ctx->pc = 0x2D9CCCu;
            goto label_2d9ccc;
        }
    }
    ctx->pc = 0x2D9CB4u;
    // 0x2d9cb4: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x2d9cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x2d9cb8: 0x0  nop
    ctx->pc = 0x2d9cb8u;
    // NOP
    // 0x2d9cbc: 0x0  nop
    ctx->pc = 0x2d9cbcu;
    // NOP
    // 0x2d9cc0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x2d9cc0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x2d9cc4: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2D9CC4u;
    {
        const bool branch_taken_0x2d9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CC4u;
        // 0x2d9cc8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cc4) {
            ctx->pc = 0x2D9FCCu;
            goto label_2d9fcc;
        }
    }
    ctx->pc = 0x2D9CCCu;
label_2d9ccc:
    // 0x2d9ccc: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x2d9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x2d9cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9cd4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d9cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d9cd8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D9CD8u;
    {
        const bool branch_taken_0x2d9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD8u;
        // 0x2d9cdc: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cd8) {
            ctx->pc = 0x2D9E00u;
            goto label_2d9e00;
        }
    }
    ctx->pc = 0x2D9CE0u;
    // 0x2d9ce0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d9ce4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d9ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d9ce8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9CE8u;
    {
        const bool branch_taken_0x2d9ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ce8) {
            ctx->pc = 0x2D9CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9CE8u;
            // 0x2d9cec: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D1Cu;
            goto label_2d9d1c;
        }
    }
    ctx->pc = 0x2D9CF0u;
    // 0x2d9cf0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2d9cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2d9cf4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2d9cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2d9cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9d04: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2d9d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d9d08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d9d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d9d0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9D0Cu;
    {
        const bool branch_taken_0x2d9d0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9d0c) {
            ctx->pc = 0x2D9D1Cu;
            goto label_2d9d1c;
        }
    }
    ctx->pc = 0x2D9D14u;
    // 0x2d9d14: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2D9D14u;
    {
        const bool branch_taken_0x2d9d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D14u;
        // 0x2d9d18: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d14) {
            ctx->pc = 0x2D9FC4u;
            goto label_2d9fc4;
        }
    }
    ctx->pc = 0x2D9D1Cu;
label_2d9d1c:
    // 0x2d9d1c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2d9d20: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2d9d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2d9d24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9d28: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2d9d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2d9d2c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2d9d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2d9d30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9d34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9d38: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2d9d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2d9d3c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2d9d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2d9d40: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d9d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d9d44: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x2d9d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x2d9d48: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x2d9d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x2d9d4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9d50: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x2d9d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x2d9d54: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x2d9d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x2d9d58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9d5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d9d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d9d60: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x2d9d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x2d9d64: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x2d9d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x2d9d68: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d9d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d9d6c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9d70: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x2d9d74: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x2d9d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x2d9d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9d7c: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x2d9d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x2d9d80: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x2d9d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x2d9d84: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2d9d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d9d88: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9d8c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x2d9d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x2d9d90: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x2d9d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x2d9d94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d9d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d9d98: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d9d98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d9d9c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2d9d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2d9da0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2d9da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2d9da4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2d9da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d9da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9dac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9db0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2d9db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2d9db4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9db8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9dbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d9dbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d9dc0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d9dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d9dc4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9dc8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9dcc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2d9dccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2d9dd0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2d9dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2d9dd4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9dd8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9ddc: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x2d9ddcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d9de0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2d9de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2d9de4: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x2d9de4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9de8: 0x0  nop
    ctx->pc = 0x2d9de8u;
    // NOP
    // 0x2d9dec: 0x0  nop
    ctx->pc = 0x2d9decu;
    // NOP
    // 0x2d9df0: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x2d9df0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[8] = ctx->f[21] / ctx->f[22];
    // 0x2d9df4: 0x46086002  mul.s       $f0, $f12, $f8
    ctx->pc = 0x2d9df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x2d9df8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2D9DF8u;
    {
        const bool branch_taken_0x2d9df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DF8u;
        // 0x2d9dfc: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9df8) {
            ctx->pc = 0x2D9FC4u;
            goto label_2d9fc4;
        }
    }
    ctx->pc = 0x2D9E00u;
label_2d9e00:
    // 0x2d9e00: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2D9E00u;
    SET_GPR_U32(ctx, 31, 0x2D9E08u);
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2D9E00u, 0x2D9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E08u;
label_2d9e08:
    // 0x2d9e08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9e0c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2d9e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2d9e10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d9e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d9e14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9e18: 0x46005201  sub.s       $f8, $f10, $f0
    ctx->pc = 0x2d9e18u;
    ctx->f[8] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x2d9e1c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x2d9e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x2d9e20: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x2d9e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x2d9e24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d9e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d9e28: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x2d9e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x2d9e2c: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x2d9e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x2d9e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9e34: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x2d9e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x2d9e38: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x2d9e38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x2d9e3c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2d9e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d9e40: 0x46024502  mul.s       $f20, $f8, $f2
    ctx->pc = 0x2d9e40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2d9e44: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x2d9e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x2d9e48: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x2d9e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x2d9e4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9e50: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x2d9e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x2d9e54: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x2d9e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x2d9e58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9e5c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x2d9e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x2d9e60: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x2d9e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x2d9e64: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2d9e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d9e68: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9e6c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x2d9e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x2d9e70: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x2d9e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x2d9e74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9e78: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9e7c: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x2d9e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x2d9e80: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x2d9e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x2d9e84: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2d9e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2d9e88: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x2d9e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x2d9e8c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x2d9e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x2d9e90: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d9e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d9e94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d9e94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d9e98: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d9e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d9e9c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2d9e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2d9ea0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2d9ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2d9ea4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d9ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d9ea8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d9ea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d9eac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9eb0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9eb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9eb4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2d9eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2d9eb8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d9eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d9ebc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9ec0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9ec4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2d9ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2d9ec8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2d9ec8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2d9ecc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9ed0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2d9ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2d9ed4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2d9ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2d9ed8: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x2d9ed8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2d9edc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2d9edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d9ee0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d9ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d9ee4: 0xc0b6bd0  jal         func_2DAF40
    ctx->pc = 0x2D9EE4u;
    SET_GPR_U32(ctx, 31, 0x2D9EECu);
    ctx->pc = 0x2D9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9EE4u;
    // 0x2d9ee8: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAF40u, 0x2D9EE4u, 0x2D9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EECu;
label_2d9eec:
    // 0x2d9eec: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2d9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2d9ef0: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x2d9ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x2d9ef4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d9ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d9ef8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D9EF8u;
    {
        const bool branch_taken_0x2d9ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EF8u;
        // 0x2d9efc: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ef8) {
            ctx->pc = 0x2D9F3Cu;
            goto label_2d9f3c;
        }
    }
    ctx->pc = 0x2D9F00u;
    // 0x2d9f00: 0x0  nop
    ctx->pc = 0x2d9f00u;
    // NOP
    // 0x2d9f04: 0x0  nop
    ctx->pc = 0x2d9f04u;
    // NOP
    // 0x2d9f08: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->pc = 0x2d9f08u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[8] = ctx->f[21] / ctx->f[22];
    // 0x2d9f0c: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2d9f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2d9f10: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2d9f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2d9f14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f18: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2d9f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2d9f1c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2d9f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2d9f20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9f24: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x2d9f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2d9f28: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x2d9f28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2d9f2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d9f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2d9f30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d9f30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d9f34: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D9F34u;
    {
        const bool branch_taken_0x2d9f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F34u;
        // 0x2d9f38: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f34) {
            ctx->pc = 0x2D9FB8u;
            goto label_2d9fb8;
        }
    }
    ctx->pc = 0x2D9F3Cu;
label_2d9f3c:
    // 0x2d9f3c: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x2d9f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d9f40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d9f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d9f48: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2d9f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2d9f4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d9f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d9f50: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x2d9f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2d9f54: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x2d9f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2d9f58: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x2d9f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x2d9f5c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2d9f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2d9f60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9f64: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2d9f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x2d9f68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d9f6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d9f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d9f70: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2d9f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2d9f74: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x2d9f74u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x2d9f78: 0x0  nop
    ctx->pc = 0x2d9f78u;
    // NOP
    // 0x2d9f7c: 0x0  nop
    ctx->pc = 0x2d9f7cu;
    // NOP
    // 0x2d9f80: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->pc = 0x2d9f80u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[5] = ctx->f[21] / ctx->f[22];
    // 0x2d9f84: 0x46073840  add.s       $f1, $f7, $f7
    ctx->pc = 0x2d9f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2d9f88: 0x0  nop
    ctx->pc = 0x2d9f88u;
    // NOP
    // 0x2d9f8c: 0x0  nop
    ctx->pc = 0x2d9f8cu;
    // NOP
    // 0x2d9f90: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2d9f90u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2d9f94: 0x46084080  add.s       $f2, $f8, $f8
    ctx->pc = 0x2d9f94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x2d9f98: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2d9f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2d9f9c: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->pc = 0x2d9f9cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2d9fa0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d9fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d9fa4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d9fa4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d9fa8: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x2d9fa8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d9fac: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x2d9facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x2d9fb0: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->pc = 0x2d9fb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2d9fb4: 0x0  nop
    ctx->pc = 0x2d9fb4u;
    // NOP
label_2d9fb8:
    // 0x2d9fb8: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9FB8u;
    {
        const bool branch_taken_0x2d9fb8 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2D9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FB8u;
        // 0x2d9fbc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fb8) {
            ctx->pc = 0x2D9FC4u;
            goto label_2d9fc4;
        }
    }
    ctx->pc = 0x2D9FC0u;
    // 0x2d9fc0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2d9fc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_2d9fc4:
    // 0x2d9fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d9fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9fc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d9fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9fcc:
    // 0x2d9fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9fd0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2d9fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d9fd4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2d9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d9fd8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2d9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d9fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FDCu;
        // 0x2d9fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9FE4u;
}

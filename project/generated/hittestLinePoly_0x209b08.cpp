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

// Function: hittestLinePoly
// Address: 0x209b08 - 0x209dc8
void hittestLinePoly_0x209b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestLinePoly_0x209b08");
#endif

    switch (ctx->pc) {
        case 0x209bc0u: goto label_209bc0;
        case 0x209ca0u: goto label_209ca0;
        default: break;
    }

    ctx->pc = 0x209b08u;

    // 0x209b08: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x209b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x209b0c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x209b10: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x209b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x209b14: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x209b14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b18: 0xc5260004  lwc1        $f6, 0x4($t1)
    ctx->pc = 0x209b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x209b1c: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x209b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x209b20: 0x460d3802  mul.s       $f0, $f7, $f13
    ctx->pc = 0x209b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x209b24: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x209b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x209b28: 0x460a3082  mul.s       $f2, $f6, $f10
    ctx->pc = 0x209b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x209b2c: 0xc5250008  lwc1        $f5, 0x8($t1)
    ctx->pc = 0x209b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x209b30: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x209b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x209b34: 0x460e2842  mul.s       $f1, $f5, $f14
    ctx->pc = 0x209b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x209b38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x209b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x209b3c: 0x46010200  add.s       $f8, $f0, $f1
    ctx->pc = 0x209b3cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209b40: 0x46087836  c.le.s      $f15, $f8
    ctx->pc = 0x209b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209b44: 0x0  nop
    ctx->pc = 0x209b44u;
    // NOP
    // 0x209b48: 0x4501009d  bc1t        . + 4 + (0x9D << 2)
    ctx->pc = 0x209B48u;
    {
        const bool branch_taken_0x209b48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B48u;
        // 0x209b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b48) {
            ctx->pc = 0x209DC0u;
            goto label_209dc0;
        }
    }
    ctx->pc = 0x209B50u;
    // 0x209b50: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x209b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x209b54: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x209b54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209b58: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x209b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209b5c: 0x4d1018  mult        $v0, $v0, $t5
    ctx->pc = 0x209b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x209b60: 0xc48b0004  lwc1        $f11, 0x4($a0)
    ctx->pc = 0x209b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x209b64: 0x460c38c2  mul.s       $f3, $f7, $f12
    ctx->pc = 0x209b64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x209b68: 0xc4890008  lwc1        $f9, 0x8($a0)
    ctx->pc = 0x209b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x209b6c: 0x460b3042  mul.s       $f1, $f6, $f11
    ctx->pc = 0x209b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x209b70: 0x46092902  mul.s       $f4, $f5, $f9
    ctx->pc = 0x209b70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x209b74: 0x1c23021  addu        $a2, $t6, $v0
    ctx->pc = 0x209b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x209b78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x209b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209b7c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x209b7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x209b80: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x209b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209b84: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x209b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x209b88: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x209b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209b8c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x209b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x209b90: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x209b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x209b94: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x209b94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x209b98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x209b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x209b9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209ba0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x209ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x209ba4: 0x0  nop
    ctx->pc = 0x209ba4u;
    // NOP
    // 0x209ba8: 0x0  nop
    ctx->pc = 0x209ba8u;
    // NOP
    // 0x209bac: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x209bacu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x209bb0: 0x460f0034  c.lt.s      $f0, $f15
    ctx->pc = 0x209bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209bb4: 0x0  nop
    ctx->pc = 0x209bb4u;
    // NOP
    // 0x209bb8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x209BB8u;
    {
        const bool branch_taken_0x209bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209bb8) {
            ctx->pc = 0x209BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209BB8u;
            // 0x209bbc: 0x460e0042  mul.s       $f1, $f0, $f14 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BC8u;
            goto label_209bc8;
        }
    }
    ctx->pc = 0x209BC0u;
label_209bc0:
    // 0x209bc0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x209BC0u;
    {
        const bool branch_taken_0x209bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BC0u;
        // 0x209bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bc0) {
            ctx->pc = 0x209DC0u;
            goto label_209dc0;
        }
    }
    ctx->pc = 0x209BC8u;
label_209bc8:
    // 0x209bc8: 0x1c22821  addu        $a1, $t6, $v0
    ctx->pc = 0x209bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x209bcc: 0x460d0082  mul.s       $f2, $f0, $f13
    ctx->pc = 0x209bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x209bd0: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x209bd4: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x209bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x209bd8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209bdc: 0x46014a80  add.s       $f10, $f9, $f1
    ctx->pc = 0x209bdcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x209be0: 0x188202a  slt         $a0, $t4, $t0
    ctx->pc = 0x209be0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x209be4: 0x46026200  add.s       $f8, $f12, $f2
    ctx->pc = 0x209be4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x209be8: 0x46005a40  add.s       $f9, $f11, $f0
    ctx->pc = 0x209be8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x209bec: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x209becu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x209bf0: 0xe7a80020  swc1        $f8, 0x20($sp)
    ctx->pc = 0x209bf0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x209bf4: 0xe7a90024  swc1        $f9, 0x24($sp)
    ctx->pc = 0x209bf4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x209bf8: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x209bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x209bfc: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x209bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x209c00: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x209c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209c04: 0x6e3021  addu        $a2, $v1, $t6
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x209c08: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x209c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209c0c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x209c0cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x209c10: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x209c10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209c14: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x209c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209c18: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x209c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x209c1c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x209c1cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x209c20: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x209c20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x209c24: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x209c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209c28: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x209c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x209c2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x209c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c30: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x209c30u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x209c34: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x209c34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x209c38: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x209c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x209c3c: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x209c3cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x209c40: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x209c40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209c44: 0x460329c2  mul.s       $f7, $f5, $f3
    ctx->pc = 0x209c44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x209c48: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x209c48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x209c4c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x209c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209c50: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x209c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x209c54: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x209c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x209c58: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x209c58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x209c5c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x209c5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x209c60: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x209c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209c64: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x209c64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x209c68: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x209c68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x209c6c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x209c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x209c70: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x209c70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x209c74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x209c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x209c78: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x209c78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x209c7c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x209c7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x209c80: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x209c80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x209c84: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x209c84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x209c88: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x209C88u;
    {
        const bool branch_taken_0x209c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C88u;
        // 0x209c8c: 0xe7a50030  swc1        $f5, 0x30($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c88) {
            ctx->pc = 0x209D84u;
            goto label_209d84;
        }
    }
    ctx->pc = 0x209C90u;
    // 0x209c90: 0x46004346  mov.s       $f13, $f8
    ctx->pc = 0x209c90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[8]);
    // 0x209c94: 0x46004b06  mov.s       $f12, $f9
    ctx->pc = 0x209c94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[9]);
    // 0x209c98: 0x460052c6  mov.s       $f11, $f10
    ctx->pc = 0x209c98u;
    ctx->f[11] = FPU_MOV_S(ctx->f[10]);
    // 0x209c9c: 0x0  nop
    ctx->pc = 0x209c9cu;
    // NOP
label_209ca0:
    // 0x209ca0: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x209ca4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x209ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209ca8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x209ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209cac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x209cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209cb0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x209cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x209cb4: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x209cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x209cb8: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x209cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x209cbc: 0xc7a80038  lwc1        $f8, 0x38($sp)
    ctx->pc = 0x209cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x209cc0: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x209cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x209cc4: 0x4e2821  addu        $a1, $v0, $t6
    ctx->pc = 0x209cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x209cc8: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x209cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x209ccc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x209cccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x209cd0: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x209cd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209cd4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x209cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209cd8: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x209cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x209cdc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x209cdcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x209ce0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x209ce0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x209ce4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x209ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209ce8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x209ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x209cec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x209cecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x209cf0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x209cf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x209cf4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x209cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209cf8: 0x460d1081  sub.s       $f2, $f2, $f13
    ctx->pc = 0x209cf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x209cfc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x209cfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209d00: 0x46021a42  mul.s       $f9, $f3, $f2
    ctx->pc = 0x209d00u;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x209d04: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x209d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x209d08: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x209d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209d0c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x209d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x209d10: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x209d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x209d14: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x209d14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x209d18: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x209d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x209d1c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x209d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209d20: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x209d20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x209d24: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x209d24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x209d28: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x209d28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x209d2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x209d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x209d30: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x209d30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x209d34: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x209d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x209d38: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x209d38u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x209d3c: 0x46054a41  sub.s       $f9, $f9, $f5
    ctx->pc = 0x209d3cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x209d40: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x209d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x209d44: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x209d44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x209d48: 0xe7a90044  swc1        $f9, 0x44($sp)
    ctx->pc = 0x209d48u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x209d4c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x209d4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x209d50: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x209d50u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x209d54: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x209d54u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x209d58: 0x460a3034  c.lt.s      $f6, $f10
    ctx->pc = 0x209d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209d5c: 0x0  nop
    ctx->pc = 0x209d5cu;
    // NOP
    // 0x209d60: 0x4501ff97  bc1t        . + 4 + (-0x69 << 2)
    ctx->pc = 0x209D60u;
    {
        const bool branch_taken_0x209d60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D60u;
        // 0x209d64: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d60) {
            ctx->pc = 0x209BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209bc0;
        }
    }
    ctx->pc = 0x209D68u;
    // 0x209d68: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x209d68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x209d6c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x209d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x209d70: 0xe7a90034  swc1        $f9, 0x34($sp)
    ctx->pc = 0x209d70u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x209d74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x209d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d78: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x209d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x209d7c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x209D7Cu;
    {
        const bool branch_taken_0x209d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D7Cu;
        // 0x209d80: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d7c) {
            ctx->pc = 0x209CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209D84u;
label_209d84:
    // 0x209d84: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x209D84u;
    {
        const bool branch_taken_0x209d84 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D84u;
        // 0x209d88: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d84) {
            ctx->pc = 0x209DA0u;
            goto label_209da0;
        }
    }
    ctx->pc = 0x209D8Cu;
    // 0x209d8c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x209d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209d90: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x209d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209d94: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x209d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x209d98: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x209d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x209d9c: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x209d9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_209da0:
    // 0x209da0: 0x11600007  beqz        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x209DA0u;
    {
        const bool branch_taken_0x209da0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DA0u;
        // 0x209da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209da0) {
            ctx->pc = 0x209DC0u;
            goto label_209dc0;
        }
    }
    ctx->pc = 0x209DA8u;
    // 0x209da8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x209da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209dac: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x209dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x209db0: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x209db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209db4: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x209db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x209db8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x209db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209dbc: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x209dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_209dc0:
    // 0x209dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x209DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DC0u;
        // 0x209dc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209DC8u;
}

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

// Function: frontfxLogoGfx
// Address: 0x22ae40 - 0x22b33c
void frontfxLogoGfx_0x22ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxLogoGfx_0x22ae40");
#endif

    switch (ctx->pc) {
        case 0x22ae98u: goto label_22ae98;
        case 0x22b000u: goto label_22b000;
        case 0x22b04cu: goto label_22b04c;
        case 0x22b064u: goto label_22b064;
        case 0x22b06cu: goto label_22b06c;
        case 0x22b08cu: goto label_22b08c;
        case 0x22b094u: goto label_22b094;
        case 0x22b148u: goto label_22b148;
        case 0x22b154u: goto label_22b154;
        case 0x22b160u: goto label_22b160;
        case 0x22b16cu: goto label_22b16c;
        case 0x22b174u: goto label_22b174;
        case 0x22b1a4u: goto label_22b1a4;
        case 0x22b1b0u: goto label_22b1b0;
        case 0x22b1bcu: goto label_22b1bc;
        case 0x22b1c8u: goto label_22b1c8;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1dcu: goto label_22b1dc;
        case 0x22b1fcu: goto label_22b1fc;
        case 0x22b208u: goto label_22b208;
        case 0x22b210u: goto label_22b210;
        case 0x22b21cu: goto label_22b21c;
        case 0x22b228u: goto label_22b228;
        case 0x22b230u: goto label_22b230;
        case 0x22b254u: goto label_22b254;
        case 0x22b25cu: goto label_22b25c;
        case 0x22b268u: goto label_22b268;
        case 0x22b270u: goto label_22b270;
        case 0x22b27cu: goto label_22b27c;
        case 0x22b288u: goto label_22b288;
        case 0x22b290u: goto label_22b290;
        case 0x22b2b0u: goto label_22b2b0;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b2d8u: goto label_22b2d8;
        case 0x22b2e0u: goto label_22b2e0;
        default: break;
    }

    ctx->pc = 0x22ae40u;

    // 0x22ae40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22ae44: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22ae48: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22ae4c: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x22ae4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x22ae50: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22ae50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22ae54: 0x269325c8  addiu       $s3, $s4, 0x25C8
    ctx->pc = 0x22ae54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 9672));
    // 0x22ae58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ae5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22ae60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22ae60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ae68: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x22ae68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ae70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22ae70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae74: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x22ae74u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22ae78: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x22ae78u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22ae7c: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x22ae7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22ae80: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x22ae80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x22ae84: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x22ae84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22ae88: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x22ae88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22ae8c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x22ae90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22ae90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22ae94: 0x0  nop
    ctx->pc = 0x22ae94u;
    // NOP
label_22ae98:
    // 0x22ae98: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae9c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22aea0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x22aea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22aea4: 0x0  nop
    ctx->pc = 0x22aea4u;
    // NOP
    // 0x22aea8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22AEA8u;
    {
        const bool branch_taken_0x22aea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEA8u;
        // 0x22aeac: 0xc4430004  lwc1        $f3, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aea8) {
            ctx->pc = 0x22AED4u;
            goto label_22aed4;
        }
    }
    ctx->pc = 0x22AEB0u;
    // 0x22aeb0: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x22aeb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x22aeb4: 0xc7819fa0  lwc1        $f1, -0x6060($gp)
    ctx->pc = 0x22aeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aeb8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x22aeb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22aebc: 0x0  nop
    ctx->pc = 0x22aebcu;
    // NOP
    // 0x22aec0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x22AEC0u;
    {
        const bool branch_taken_0x22aec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22aec0) {
            ctx->pc = 0x22AEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AEC0u;
            // 0x22aec4: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AEDCu;
            goto label_22aedc;
        }
    }
    ctx->pc = 0x22AEC8u;
    // 0x22aec8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x22aec8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x22aecc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22AECCu;
    {
        const bool branch_taken_0x22aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AECCu;
        // 0x22aed0: 0x461418c1  sub.s       $f3, $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aecc) {
            ctx->pc = 0x22AED8u;
            goto label_22aed8;
        }
    }
    ctx->pc = 0x22AED4u;
label_22aed4:
    // 0x22aed4: 0xc7819fa0  lwc1        $f1, -0x6060($gp)
    ctx->pc = 0x22aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22aed8:
    // 0x22aed8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x22aed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_22aedc:
    // 0x22aedc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22aedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22aee0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22aee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22aee4: 0x0  nop
    ctx->pc = 0x22aee4u;
    // NOP
    // 0x22aee8: 0x0  nop
    ctx->pc = 0x22aee8u;
    // NOP
    // 0x22aeec: 0x46000c83  div.s       $f18, $f1, $f0
    ctx->pc = 0x22aeecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[18] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[18] = ctx->f[1] / ctx->f[0];
    // 0x22aef0: 0x46121036  c.le.s      $f2, $f18
    ctx->pc = 0x22aef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22aef4: 0x0  nop
    ctx->pc = 0x22aef4u;
    // NOP
    // 0x22aef8: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x22AEF8u;
    {
        const bool branch_taken_0x22aef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22aef8) {
            ctx->pc = 0x22AEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AEF8u;
            // 0x22aefc: 0x2631003c  addiu       $s1, $s1, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B004u;
            goto label_22b004;
        }
    }
    ctx->pc = 0x22AF00u;
    // 0x22af00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22af04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22af04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af08: 0x46009034  c.lt.s      $f18, $f0
    ctx->pc = 0x22af08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22af0c: 0x0  nop
    ctx->pc = 0x22af0cu;
    // NOP
    // 0x22af10: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x22AF10u;
    {
        const bool branch_taken_0x22af10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF10u;
        // 0x22af14: 0x268f25c8  addiu       $t7, $s4, 0x25C8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 9672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af10) {
            ctx->pc = 0x22B000u;
            goto label_22b000;
        }
    }
    ctx->pc = 0x22AF18u;
    // 0x22af18: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22af1c: 0x1f03821  addu        $a3, $t7, $s0
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x22af20: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22af20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af24: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x22af24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af2c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x22af2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22af30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x22af34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af38: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x22af38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af3c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x22af3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22af40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af44: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x22af44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af48: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x22af48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af4c: 0xc4e6000c  lwc1        $f6, 0xC($a3)
    ctx->pc = 0x22af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22af50: 0xc4c70010  lwc1        $f7, 0x10($a2)
    ctx->pc = 0x22af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22af54: 0xc4a8001c  lwc1        $f8, 0x1C($a1)
    ctx->pc = 0x22af54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x22af58: 0xc4890020  lwc1        $f9, 0x20($a0)
    ctx->pc = 0x22af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22af5c: 0xc46a0024  lwc1        $f10, 0x24($v1)
    ctx->pc = 0x22af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x22af60: 0xc44b0028  lwc1        $f11, 0x28($v0)
    ctx->pc = 0x22af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x22af64: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x22af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22af68: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x22af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22af6c: 0xc505002c  lwc1        $f5, 0x2C($t0)
    ctx->pc = 0x22af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22af70: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x22af70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x22af74: 0xc5240030  lwc1        $f4, 0x30($t1)
    ctx->pc = 0x22af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22af78: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x22af78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x22af7c: 0xc5430034  lwc1        $f3, 0x34($t2)
    ctx->pc = 0x22af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22af80: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x22af80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x22af84: 0xc5620038  lwc1        $f2, 0x38($t3)
    ctx->pc = 0x22af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22af88: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x22af88u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x22af8c: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x22af8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x22af90: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x22af90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x22af94: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x22af94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x22af98: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x22af98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x22af9c: 0x46121082  mul.s       $f2, $f2, $f18
    ctx->pc = 0x22af9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x22afa0: 0x46122942  mul.s       $f5, $f5, $f18
    ctx->pc = 0x22afa0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[18]);
    // 0x22afa4: 0x46122102  mul.s       $f4, $f4, $f18
    ctx->pc = 0x22afa4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[18]);
    // 0x22afa8: 0x461218c2  mul.s       $f3, $f3, $f18
    ctx->pc = 0x22afa8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[18]);
    // 0x22afac: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x22afacu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x22afb0: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x22afb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x22afb4: 0x46054380  add.s       $f14, $f8, $f5
    ctx->pc = 0x22afb4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x22afb8: 0x46044bc0  add.s       $f15, $f9, $f4
    ctx->pc = 0x22afb8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x22afbc: 0x46035400  add.s       $f16, $f10, $f3
    ctx->pc = 0x22afbcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x22afc0: 0x124e0009  beq         $s2, $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x22AFC0u;
    {
        const bool branch_taken_0x22afc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 14));
        ctx->pc = 0x22AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFC0u;
        // 0x22afc4: 0x46025c40  add.s       $f17, $f11, $f2 (Delay Slot)
        ctx->f[17] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afc0) {
            ctx->pc = 0x22AFE8u;
            goto label_22afe8;
        }
    }
    ctx->pc = 0x22AFC8u;
    // 0x22afc8: 0x20f1021  addu        $v0, $s0, $t7
    ctx->pc = 0x22afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x22afcc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22afd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22afd4: 0xc7808124  lwc1        $f0, -0x7EDC($gp)
    ctx->pc = 0x22afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22afd8: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AFD8u;
    {
        const bool branch_taken_0x22afd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22afd8) {
            ctx->pc = 0x22AFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AFD8u;
            // 0x22afdc: 0x46008c42  mul.s       $f17, $f17, $f0 (Delay Slot)
            ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AFE8u;
            goto label_22afe8;
        }
    }
    ctx->pc = 0x22AFE0u;
    // 0x22afe0: 0xc7808128  lwc1        $f0, -0x7ED8($gp)
    ctx->pc = 0x22afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22afe4: 0x46008c42  mul.s       $f17, $f17, $f0
    ctx->pc = 0x22afe4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
label_22afe8:
    // 0x22afe8: 0xc78c9fa8  lwc1        $f12, -0x6058($gp)
    ctx->pc = 0x22afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22afec: 0xc78d9fac  lwc1        $f13, -0x6054($gp)
    ctx->pc = 0x22afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22aff0: 0x460c3302  mul.s       $f12, $f6, $f12
    ctx->pc = 0x22aff0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x22aff4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22aff8: 0xc08acd0  jal         func_22B340
    ctx->pc = 0x22AFF8u;
    SET_GPR_U32(ctx, 31, 0x22B000u);
    ctx->pc = 0x22AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFF8u;
    // 0x22affc: 0x460d3b42  mul.s       $f13, $f7, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B340u, 0x22AFF8u, 0x22B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B000u;
label_22b000:
    // 0x22b000: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x22b000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_22b004:
    // 0x22b004: 0x266204b0  addiu       $v0, $s3, 0x4B0
    ctx->pc = 0x22b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1200));
    // 0x22b008: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x22b008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22b00c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x22B00Cu;
    {
        const bool branch_taken_0x22b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B00Cu;
        // 0x22b010: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b00c) {
            ctx->pc = 0x22AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ae98;
        }
    }
    ctx->pc = 0x22B014u;
    // 0x22b014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b018: 0x12420034  beq         $s2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B018u;
        // 0x22b01c: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B0ECu;
            goto label_22b0ec;
        }
    }
    ctx->pc = 0x22B020u;
    // 0x22b020: 0xc78c9da8  lwc1        $f12, -0x6258($gp)
    ctx->pc = 0x22b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b024: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22b024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22b028: 0xc794812c  lwc1        $f20, -0x7ED4($gp)
    ctx->pc = 0x22b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b02c: 0xc7958130  lwc1        $f21, -0x7ED0($gp)
    ctx->pc = 0x22b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b030: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22b034: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x22b034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x22b038: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x22b038u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x22b03c: 0xc7978134  lwc1        $f23, -0x7ECC($gp)
    ctx->pc = 0x22b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22b040: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x22b040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x22b044: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B044u;
    SET_GPR_U32(ctx, 31, 0x22B04Cu);
    ctx->pc = 0x22B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B044u;
    // 0x22b048: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B044u, 0x22B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B04Cu;
label_22b04c:
    // 0x22b04c: 0xc78c9da8  lwc1        $f12, -0x6258($gp)
    ctx->pc = 0x22b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b050: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22b050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22b054: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x22b054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x22b058: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x22b058u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x22b05c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B05Cu;
    SET_GPR_U32(ctx, 31, 0x22B064u);
    ctx->pc = 0x22B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B05Cu;
    // 0x22b060: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B05Cu, 0x22B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B064u;
label_22b064:
    // 0x22b064: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22B064u;
    SET_GPR_U32(ctx, 31, 0x22B06Cu);
    ctx->pc = 0x22B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B064u;
    // 0x22b068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22B064u, 0x22B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B06Cu;
label_22b06c:
    // 0x22b06c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x22b06cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x22b070: 0xc78c9fa8  lwc1        $f12, -0x6058($gp)
    ctx->pc = 0x22b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b074: 0xc78d9fac  lwc1        $f13, -0x6054($gp)
    ctx->pc = 0x22b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22b078: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x22b078u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x22b07c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b080: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x22b080u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x22b084: 0xc08acd0  jal         func_22B340
    ctx->pc = 0x22B084u;
    SET_GPR_U32(ctx, 31, 0x22B08Cu);
    ctx->pc = 0x22B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B084u;
    // 0x22b088: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B340u, 0x22B084u, 0x22B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B08Cu;
label_22b08c:
    // 0x22b08c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22B08Cu;
    SET_GPR_U32(ctx, 31, 0x22B094u);
    ctx->pc = 0x22B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B08Cu;
    // 0x22b090: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22B08Cu, 0x22B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B094u;
label_22b094:
    // 0x22b094: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22b094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22b098: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x22b098u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x22b09c: 0xc78c9fa8  lwc1        $f12, -0x6058($gp)
    ctx->pc = 0x22b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b0a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b0a4: 0xc78d9fac  lwc1        $f13, -0x6054($gp)
    ctx->pc = 0x22b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22b0a8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x22b0a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x22b0ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b0b0: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x22b0b0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x22b0b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22b0b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b0b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22b0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b0bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b0c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b0c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b0c8: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x22b0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22b0cc: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x22b0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22b0d0: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x22b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x22b0d4: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x22b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22b0d8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x22b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22b0dc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x22b0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b0e0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b0e4: 0x808acd0  j           func_22B340
    ctx->pc = 0x22B0E4u;
    ctx->pc = 0x22B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0E4u;
    // 0x22b0e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    frontfxRenderLayer_0x22b340(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0ECu;
label_22b0ec:
    // 0x22b0ec: 0xc78c9da8  lwc1        $f12, -0x6258($gp)
    ctx->pc = 0x22b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b0f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22b0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22b0f4: 0xc7958138  lwc1        $f21, -0x7EC8($gp)
    ctx->pc = 0x22b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b0f8: 0xc796813c  lwc1        $f22, -0x7EC4($gp)
    ctx->pc = 0x22b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22b0fc: 0x26315c60  addiu       $s1, $s1, 0x5C60
    ctx->pc = 0x22b0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23648));
    // 0x22b100: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22b104: 0xdc3018a8  ld          $s0, 0x18A8($at)
    ctx->pc = 0x22b104u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3A18A8u));
    // 0x22b108: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x22b108u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x22b10c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22b10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22b110: 0xdc3318b0  ld          $s3, 0x18B0($at)
    ctx->pc = 0x22b110u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x3A18B0u));
    // 0x22b114: 0x3414ff80  ori         $s4, $zero, 0xFF80
    ctx->pc = 0x22b114u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x22b118: 0x14a3bc  dsll32      $s4, $s4, 14
    ctx->pc = 0x22b118u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x22b11c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22b120: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x22b120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x22b124: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x22b124u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x22b128: 0xc7998140  lwc1        $f25, -0x7EC0($gp)
    ctx->pc = 0x22b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22b12c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x22b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x22b130: 0xdc3218b8  ld          $s2, 0x18B8($at)
    ctx->pc = 0x22b130u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x3A18B8u));
    // 0x22b134: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x22b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x22b138: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x22b138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x22b13c: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x22b13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x22b140: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B140u;
    SET_GPR_U32(ctx, 31, 0x22B148u);
    ctx->pc = 0x22B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B140u;
    // 0x22b144: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B140u, 0x22B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B148u;
label_22b148:
    // 0x22b148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b14c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B14Cu;
    SET_GPR_U32(ctx, 31, 0x22B154u);
    ctx->pc = 0x22B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B14Cu;
    // 0x22b150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B14Cu, 0x22B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B154u;
label_22b154:
    // 0x22b154: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b158: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B158u;
    SET_GPR_U32(ctx, 31, 0x22B160u);
    ctx->pc = 0x22B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B158u;
    // 0x22b15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B158u, 0x22B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B160u;
label_22b160:
    // 0x22b160: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22b160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b164: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22B164u;
    SET_GPR_U32(ctx, 31, 0x22B16Cu);
    ctx->pc = 0x22B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B164u;
    // 0x22b168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22B164u, 0x22B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B16Cu;
label_22b16c:
    // 0x22b16c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22B16Cu;
    SET_GPR_U32(ctx, 31, 0x22B174u);
    ctx->pc = 0x22B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B16Cu;
    // 0x22b170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22B16Cu, 0x22B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B174u;
label_22b174:
    // 0x22b174: 0xc78c9da8  lwc1        $f12, -0x6258($gp)
    ctx->pc = 0x22b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b178: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x22b178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22b17c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22b180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b184: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22b188: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x22b188u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x22b18c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x22b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b190: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x22b190u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x22b194: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x22b194u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x22b198: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x22b198u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x22b19c: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B19Cu;
    SET_GPR_U32(ctx, 31, 0x22B1A4u);
    ctx->pc = 0x22B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B19Cu;
    // 0x22b1a0: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B19Cu, 0x22B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1A4u;
label_22b1a4:
    // 0x22b1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1a8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B1A8u;
    SET_GPR_U32(ctx, 31, 0x22B1B0u);
    ctx->pc = 0x22B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1A8u;
    // 0x22b1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B1A8u, 0x22B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1B0u;
label_22b1b0:
    // 0x22b1b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1b4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22B1B4u;
    SET_GPR_U32(ctx, 31, 0x22B1BCu);
    ctx->pc = 0x22B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1B4u;
    // 0x22b1b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22B1B4u, 0x22B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1BCu;
label_22b1bc:
    // 0x22b1bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1c0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B1C0u;
    SET_GPR_U32(ctx, 31, 0x22B1C8u);
    ctx->pc = 0x22B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1C0u;
    // 0x22b1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B1C0u, 0x22B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1C8u;
label_22b1c8:
    // 0x22b1c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22b1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1cc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x22B1CCu;
    SET_GPR_U32(ctx, 31, 0x22B1D4u);
    ctx->pc = 0x22B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1CCu;
    // 0x22b1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x22B1CCu, 0x22B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1D4u;
label_22b1d4:
    // 0x22b1d4: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x22B1D4u;
    SET_GPR_U32(ctx, 31, 0x22B1DCu);
    ctx->pc = 0x22B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1D4u;
    // 0x22b1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x22B1D4u, 0x22B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1DCu;
label_22b1dc:
    // 0x22b1dc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x22b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x22b1e0: 0xc78c9fa8  lwc1        $f12, -0x6058($gp)
    ctx->pc = 0x22b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b1e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22b1ec: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x22b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b1f0: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x22b1f0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x22b1f4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B1F4u;
    SET_GPR_U32(ctx, 31, 0x22B1FCu);
    ctx->pc = 0x22B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1F4u;
    // 0x22b1f8: 0x4619ad40  add.s       $f21, $f21, $f25 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B1F4u, 0x22B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1FCu;
label_22b1fc:
    // 0x22b1fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b200: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B200u;
    SET_GPR_U32(ctx, 31, 0x22B208u);
    ctx->pc = 0x22B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B200u;
    // 0x22b204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B200u, 0x22B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B208u;
label_22b208:
    // 0x22b208: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x22B208u;
    SET_GPR_U32(ctx, 31, 0x22B210u);
    ctx->pc = 0x22B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B208u;
    // 0x22b20c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x22B208u, 0x22B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B210u;
label_22b210:
    // 0x22b210: 0xc78c9fac  lwc1        $f12, -0x6054($gp)
    ctx->pc = 0x22b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b214: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B214u;
    SET_GPR_U32(ctx, 31, 0x22B21Cu);
    ctx->pc = 0x22B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B214u;
    // 0x22b218: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B214u, 0x22B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B21Cu;
label_22b21c:
    // 0x22b21c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b220: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B220u;
    SET_GPR_U32(ctx, 31, 0x22B228u);
    ctx->pc = 0x22B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B220u;
    // 0x22b224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B220u, 0x22B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B228u;
label_22b228:
    // 0x22b228: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x22B228u;
    SET_GPR_U32(ctx, 31, 0x22B230u);
    ctx->pc = 0x22B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B228u;
    // 0x22b22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x22B228u, 0x22B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B230u;
label_22b230:
    // 0x22b230: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x22b230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x22b234: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x22b234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22b238: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x22b238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x22b23c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x22b23cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x22b240: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x22b240u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x22b244: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x22b244u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x22b248: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x22b248u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x22b24c: 0xc08acd0  jal         func_22B340
    ctx->pc = 0x22B24Cu;
    SET_GPR_U32(ctx, 31, 0x22B254u);
    ctx->pc = 0x22B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B24Cu;
    // 0x22b250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B340u, 0x22B24Cu, 0x22B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B254u;
label_22b254:
    // 0x22b254: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B254u;
    SET_GPR_U32(ctx, 31, 0x22B25Cu);
    ctx->pc = 0x22B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B254u;
    // 0x22b258: 0xc78c9fa8  lwc1        $f12, -0x6058($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B254u, 0x22B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B25Cu;
label_22b25c:
    // 0x22b25c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b260: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B260u;
    SET_GPR_U32(ctx, 31, 0x22B268u);
    ctx->pc = 0x22B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B260u;
    // 0x22b264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B260u, 0x22B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B268u;
label_22b268:
    // 0x22b268: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x22B268u;
    SET_GPR_U32(ctx, 31, 0x22B270u);
    ctx->pc = 0x22B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B268u;
    // 0x22b26c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x22B268u, 0x22B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B270u;
label_22b270:
    // 0x22b270: 0xc78c9fac  lwc1        $f12, -0x6054($gp)
    ctx->pc = 0x22b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b274: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x22B274u;
    SET_GPR_U32(ctx, 31, 0x22B27Cu);
    ctx->pc = 0x22B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B274u;
    // 0x22b278: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x22B274u, 0x22B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B27Cu;
label_22b27c:
    // 0x22b27c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b280: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x22B280u;
    SET_GPR_U32(ctx, 31, 0x22B288u);
    ctx->pc = 0x22B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B280u;
    // 0x22b284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x22B280u, 0x22B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B288u;
label_22b288:
    // 0x22b288: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x22B288u;
    SET_GPR_U32(ctx, 31, 0x22B290u);
    ctx->pc = 0x22B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B288u;
    // 0x22b28c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x22B288u, 0x22B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B290u;
label_22b290:
    // 0x22b290: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b294: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x22b294u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x22b298: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x22b298u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x22b29c: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x22b29cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x22b2a0: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x22b2a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x22b2a4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x22b2a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x22b2a8: 0xc08acd0  jal         func_22B340
    ctx->pc = 0x22B2A8u;
    SET_GPR_U32(ctx, 31, 0x22B2B0u);
    ctx->pc = 0x22B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2A8u;
    // 0x22b2ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B340u, 0x22B2A8u, 0x22B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2B0u;
label_22b2b0:
    // 0x22b2b0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22B2B0u;
    SET_GPR_U32(ctx, 31, 0x22B2B8u);
    ctx->pc = 0x22B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2B0u;
    // 0x22b2b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22B2B0u, 0x22B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2B8u;
label_22b2b8:
    // 0x22b2b8: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x22b2b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x22b2bc: 0xc78c9fa8  lwc1        $f12, -0x6058($gp)
    ctx->pc = 0x22b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b2c0: 0xc78d9fac  lwc1        $f13, -0x6054($gp)
    ctx->pc = 0x22b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22b2c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2c8: 0xc7918144  lwc1        $f17, -0x7EBC($gp)
    ctx->pc = 0x22b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x22b2cc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x22b2ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x22b2d0: 0xc08acd0  jal         func_22B340
    ctx->pc = 0x22B2D0u;
    SET_GPR_U32(ctx, 31, 0x22B2D8u);
    ctx->pc = 0x22B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2D0u;
    // 0x22b2d4: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B340u, 0x22B2D0u, 0x22B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2D8u;
label_22b2d8:
    // 0x22b2d8: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22B2D8u;
    SET_GPR_U32(ctx, 31, 0x22B2E0u);
    ctx->pc = 0x22B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2D8u;
    // 0x22b2dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22B2D8u, 0x22B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2E0u;
label_22b2e0:
    // 0x22b2e0: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x22b2e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x22b2e4: 0xc78c9fa8  lwc1        $f12, -0x6058($gp)
    ctx->pc = 0x22b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b2e8: 0xc78d9fac  lwc1        $f13, -0x6054($gp)
    ctx->pc = 0x22b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22b2ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b2f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b2f4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x22b2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x22b2f8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x22b2f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x22b2fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22b2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b300: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x22b300u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x22b304: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22b304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22b308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b30c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b310: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b318: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x22b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x22b31c: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x22b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x22b320: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x22b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x22b324: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x22b324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22b328: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x22b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22b32c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x22b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22b330: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b334: 0x808acd0  j           func_22B340
    ctx->pc = 0x22B334u;
    ctx->pc = 0x22B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B334u;
    // 0x22b338: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B340u;
    frontfxRenderLayer_0x22b340(rdram, ctx, runtime); return;
    ctx->pc = 0x22B33Cu;
}

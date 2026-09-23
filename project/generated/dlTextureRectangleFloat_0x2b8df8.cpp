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

// Function: dlTextureRectangleFloat
// Address: 0x2b8df8 - 0x2b9014
void dlTextureRectangleFloat_0x2b8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlTextureRectangleFloat_0x2b8df8");
#endif

    switch (ctx->pc) {
        case 0x2b8e54u: goto label_2b8e54;
        case 0x2b8e60u: goto label_2b8e60;
        default: break;
    }

    ctx->pc = 0x2b8df8u;

    // 0x2b8df8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b8df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b8dfc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b8dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b8e00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b8e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b8e04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b8e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b8e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b8e0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2b8e0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b8e14: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b8e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b8e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b8e1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b8e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e20: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x2b8e20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b8e24: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2b8e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e28: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2b8e28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b8e2c: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2b8e2cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2b8e30: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2b8e30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b8e34: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2b8e34u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2b8e38: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2b8e38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b8e3c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2b8e3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2b8e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8e44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b8e44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b8e48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b8e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b8e4c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2B8E4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8E54u);
    ctx->pc = 0x2B8E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E4Cu;
    // 0x2b8e50: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2B8E4Cu, 0x2B8E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E54u;
label_2b8e54:
    // 0x2b8e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e58: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x2B8E58u;
    SET_GPR_U32(ctx, 31, 0x2B8E60u);
    ctx->pc = 0x2B8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8E58u;
    // 0x2b8e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x2B8E58u, 0x2B8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8E60u;
label_2b8e60:
    // 0x2b8e60: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8e64: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2b8e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8e68: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b8e6c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2b8e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8e70: 0xa06b0003  sb          $t3, 0x3($v1)
    ctx->pc = 0x2b8e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x2b8e74: 0x248408f0  addiu       $a0, $a0, 0x8F0
    ctx->pc = 0x2b8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2288));
    // 0x2b8e78: 0x114e02  srl         $t1, $s1, 24
    ctx->pc = 0x2b8e78u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x2b8e7c: 0x113403  sra         $a2, $s1, 16
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2b8e80: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8e84: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2b8e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b8e88: 0x113a03  sra         $a3, $s1, 8
    ctx->pc = 0x2b8e88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 8));
    // 0x2b8e8c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2b8e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8e94: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2b8e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b8e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2b8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2b8e9c: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x2b8e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b8ea0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2b8ea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2b8ea4: 0xaf8593a0  sw          $a1, -0x6C60($gp)
    ctx->pc = 0x2b8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 5));
    // 0x2b8ea8: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x2b8ea8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2b8eac: 0xa0ab0003  sb          $t3, 0x3($a1)
    ctx->pc = 0x2b8eacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x2b8eb0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2b8eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2b8eb4: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2b8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x2b8eb8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2b8eb8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b8ebc: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x2b8ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8ec0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2b8ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2b8ec4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2b8ec4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2b8ec8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2b8ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x2b8ecc: 0xad300004  sw          $s0, 0x4($t1)
    ctx->pc = 0x2b8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 16));
    // 0x2b8ed0: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8ed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8ed4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b8ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b8ed8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8edc: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2b8edcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2b8ee0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2b8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2b8ee4: 0x4600a864  .word       0x4600A864                   # cvt.w.s     $f1, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8ee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8ee8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2b8ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b8eec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8ef0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2b8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2b8ef4: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2b8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2b8ef8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2b8ef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2b8efc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f00: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x2b8f04: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2b8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2b8f08: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2b8f08u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2b8f0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f10: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2b8f10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2b8f14: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x2b8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x2b8f18: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x2b8f18u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2b8f1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f20: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b8f24: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b8f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b8f28: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b8f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b8f2c: 0x252c0010  addiu       $t4, $t1, 0x10
    ctx->pc = 0x2b8f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2b8f30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f34: 0x4600b824  .word       0x4600B824                   # cvt.w.s     $f0, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b8f38: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2b8f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2b8f3c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8f40: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x2b8f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
    // 0x2b8f44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8f4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8f50: 0x25087900  addiu       $t0, $t0, 0x7900
    ctx->pc = 0x2b8f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
    // 0x2b8f54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f58: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x2b8f58u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b8f5c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2b8f60: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x2b8f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x2b8f64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f68: 0xaf8c93a0  sw          $t4, -0x6C60($gp)
    ctx->pc = 0x2b8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 12));
    // 0x2b8f6c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2b8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2b8f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f78: 0x24c60910  addiu       $a2, $a2, 0x910
    ctx->pc = 0x2b8f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2320));
    // 0x2b8f7c: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x2b8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x2b8f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8f84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8f8c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f90: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2b8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2b8f94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8f98: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x2b8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x2b8f9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8fa0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8fa4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8fa8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b8fac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8fb0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2b8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2b8fb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8fb8: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2b8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2b8fbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b8fc0: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x2b8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x2b8fc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b8fc8: 0xa18b0003  sb          $t3, 0x3($t4)
    ctx->pc = 0x2b8fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x2b8fcc: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b8fd0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2b8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2b8fd4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b8fd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b8fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8fdc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b8fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8fe0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b8fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8fe4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b8fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8fe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b8fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8fec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b8fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8ff4: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x2b8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b8ff8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2b8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b8ffc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2b8ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b9000: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2b9000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b9004: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2b9004u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b9008: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x2b9008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x2b900c: 0x80adf34  j           func_2B7CD0
    ctx->pc = 0x2B900Cu;
    ctx->pc = 0x2B9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B900Cu;
    // 0x2b9010: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    dlSetZB_0x2b7cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9014u;
}

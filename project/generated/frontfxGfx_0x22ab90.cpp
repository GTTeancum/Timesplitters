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

// Function: frontfxGfx
// Address: 0x22ab90 - 0x22ae3c
void frontfxGfx_0x22ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontfxGfx_0x22ab90");
#endif

    switch (ctx->pc) {
        case 0x22abecu: goto label_22abec;
        case 0x22abf4u: goto label_22abf4;
        case 0x22ac00u: goto label_22ac00;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac2cu: goto label_22ac2c;
        case 0x22ac34u: goto label_22ac34;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22acd8u: goto label_22acd8;
        case 0x22ace4u: goto label_22ace4;
        case 0x22acf4u: goto label_22acf4;
        case 0x22ad00u: goto label_22ad00;
        case 0x22ad9cu: goto label_22ad9c;
        case 0x22adc4u: goto label_22adc4;
        case 0x22ade8u: goto label_22ade8;
        case 0x22adf0u: goto label_22adf0;
        case 0x22adf8u: goto label_22adf8;
        default: break;
    }

    ctx->pc = 0x22ab90u;

    // 0x22ab90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22ab94: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22ab98: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x22ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x22ab9c: 0x246299f0  addiu       $v0, $v1, -0x6610
    ctx->pc = 0x22ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x22aba0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22aba4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22aba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aba8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22abac: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22abacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22abb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22abb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22abb8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22abbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22abbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22abc0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22abc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22abc8: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x22abc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x22abcc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x22abccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x22abd0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x22abd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x22abd4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22abd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22abd8: 0x8c6499f0  lw          $a0, -0x6610($v1)
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F0u));
    // 0x22abdc: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x22abdcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x329A08u));
    // 0x22abe0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x22abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329A04u));
    // 0x22abe4: 0xc0ae014  jal         func_2B8050
    ctx->pc = 0x22ABE4u;
    SET_GPR_U32(ctx, 31, 0x22ABECu);
    ctx->pc = 0x22ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABE4u;
    // 0x22abe8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8050u, 0x22ABE4u, 0x22ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABECu;
label_22abec:
    // 0x22abec: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22ABECu;
    SET_GPR_U32(ctx, 31, 0x22ABF4u);
    ctx->pc = 0x22ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABECu;
    // 0x22abf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22ABECu, 0x22ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABF4u;
label_22abf4:
    // 0x22abf4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x22abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x22abf8: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x22ABF8u;
    SET_GPR_U32(ctx, 31, 0x22AC00u);
    ctx->pc = 0x22ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABF8u;
    // 0x22abfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x22ABF8u, 0x22AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC00u;
label_22ac00:
    // 0x22ac00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22ac04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ac08: 0x12e20073  beq         $s7, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x22AC08u;
    {
        const bool branch_taken_0x22ac08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC08u;
        // 0x22ac0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac08) {
            ctx->pc = 0x22ADD8u;
            goto label_22add8;
        }
    }
    ctx->pc = 0x22AC10u;
    // 0x22ac10: 0xc08af44  jal         func_22BD10
    ctx->pc = 0x22AC10u;
    SET_GPR_U32(ctx, 31, 0x22AC18u);
    ctx->pc = 0x22BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BD10u, 0x22AC10u, 0x22AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC18u;
label_22ac18:
    // 0x22ac18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ac1c: 0x12e2006e  beq         $s7, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x22AC1Cu;
    {
        const bool branch_taken_0x22ac1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC1Cu;
        // 0x22ac20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac1c) {
            ctx->pc = 0x22ADD8u;
            goto label_22add8;
        }
    }
    ctx->pc = 0x22AC24u;
    // 0x22ac24: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22AC24u;
    SET_GPR_U32(ctx, 31, 0x22AC2Cu);
    ctx->pc = 0x22AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC24u;
    // 0x22ac28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x22AC24u, 0x22AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC2Cu;
label_22ac2c:
    // 0x22ac2c: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22AC2Cu;
    SET_GPR_U32(ctx, 31, 0x22AC34u);
    ctx->pc = 0x22AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC2Cu;
    // 0x22ac30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22AC2Cu, 0x22AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC34u;
label_22ac34:
    // 0x22ac34: 0xc7809fb0  lwc1        $f0, -0x6050($gp)
    ctx->pc = 0x22ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac38: 0xc7819fb4  lwc1        $f1, -0x604C($gp)
    ctx->pc = 0x22ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ac3c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22ac3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22ac40: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x22ac40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x22ac44: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22ac44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22ac48: 0x0  nop
    ctx->pc = 0x22ac48u;
    // NOP
    // 0x22ac4c: 0x0  nop
    ctx->pc = 0x22ac4cu;
    // NOP
    // 0x22ac50: 0x460c0084  c1          0xC0084
    ctx->pc = 0x22ac50u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x22ac54: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x22ac54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ac58: 0x0  nop
    ctx->pc = 0x22ac58u;
    // NOP
    // 0x22ac5c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x22AC5Cu;
    {
        const bool branch_taken_0x22ac5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC5Cu;
        // 0x22ac60: 0x3c160035  lui         $s6, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac5c) {
            ctx->pc = 0x22AC6Cu;
            goto label_22ac6c;
        }
    }
    ctx->pc = 0x22AC64u;
    // 0x22ac64: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x22AC64u;
    SET_GPR_U32(ctx, 31, 0x22AC6Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x22AC64u, 0x22AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC6Cu;
label_22ac6c:
    // 0x22ac6c: 0x8ec22a90  lw          $v0, 0x2A90($s6)
    ctx->pc = 0x22ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10896)));
    // 0x22ac70: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x22AC70u;
    {
        const bool branch_taken_0x22ac70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC70u;
        // 0x22ac74: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac70) {
            ctx->pc = 0x22ADD4u;
            goto label_22add4;
        }
    }
    ctx->pc = 0x22AC78u;
    // 0x22ac78: 0x3c1e01fc  lui         $fp, 0x1FC
    ctx->pc = 0x22ac78u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)508 << 16));
    // 0x22ac7c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22ac80:
    // 0x22ac80: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x22ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x22ac84: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x22ac84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22ac88: 0x159880  sll         $s3, $s5, 2
    ctx->pc = 0x22ac88u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x22ac8c: 0x24822b28  addiu       $v0, $a0, 0x2B28
    ctx->pc = 0x22ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11048));
    // 0x22ac90: 0x26d02a90  addiu       $s0, $s6, 0x2A90
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 10896));
    // 0x22ac94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x22ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22ac98: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x22ac9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ac9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aca0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x22aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22aca4: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x22aca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aca8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x22aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22acac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22acacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22acb0: 0xc455004c  lwc1        $f21, 0x4C($v0)
    ctx->pc = 0x22acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22acb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22acb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acbc: 0xc4940054  lwc1        $f20, 0x54($a0)
    ctx->pc = 0x22acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22acc0: 0xc4760050  lwc1        $f22, 0x50($v1)
    ctx->pc = 0x22acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22acc4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x22acc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22acc8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x22acc8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x22accc: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x22acccu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x22acd0: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22ACD0u;
    SET_GPR_U32(ctx, 31, 0x22ACD8u);
    ctx->pc = 0x22ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACD0u;
    // 0x22acd4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22ACD0u, 0x22ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACD8u;
label_22acd8:
    // 0x22acd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22acd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acdc: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22ACDCu;
    SET_GPR_U32(ctx, 31, 0x22ACE4u);
    ctx->pc = 0x22ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACDCu;
    // 0x22ace0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22ACDCu, 0x22ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACE4u;
label_22ace4:
    // 0x22ace4: 0x29600  sll         $s2, $v0, 24
    ctx->pc = 0x22ace4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22ace8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22ace8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22acec: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22ACECu;
    SET_GPR_U32(ctx, 31, 0x22ACF4u);
    ctx->pc = 0x22ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACECu;
    // 0x22acf0: 0x2519025  or          $s2, $s2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22ACECu, 0x22ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACF4u;
label_22acf4:
    // 0x22acf4: 0x28a00  sll         $s1, $v0, 8
    ctx->pc = 0x22acf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22acf8: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x22ACF8u;
    SET_GPR_U32(ctx, 31, 0x22AD00u);
    ctx->pc = 0x22ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACF8u;
    // 0x22acfc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x22ACF8u, 0x22AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD00u;
label_22ad00:
    // 0x22ad00: 0xc7809fb4  lwc1        $f0, -0x604C($gp)
    ctx->pc = 0x22ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad04: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x22ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x22ad08: 0x248399f0  addiu       $v1, $a0, -0x6610
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x22ad0c: 0xc7849fb0  lwc1        $f4, -0x6050($gp)
    ctx->pc = 0x22ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22ad10: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x22ad10u;
    { uint32_t bits = FAST_READ32(0x329A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22ad14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22ad14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22ad18: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x22ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x22ad1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22ad1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22ad20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22ad20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad24: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x22ad24u;
    { uint32_t bits = FAST_READ32(0x329A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ad28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ad28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22ad2c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x22ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22ad30: 0xc4b5001c  lwc1        $f21, 0x1C($a1)
    ctx->pc = 0x22ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22ad34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ad34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x22ad38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22ad3c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x22ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x22ad40: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x22ad40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x22ad44: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x22ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x22ad48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ad48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad4c: 0xc7969fb8  lwc1        $f22, -0x6048($gp)
    ctx->pc = 0x22ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22ad50: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x22ad50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x22ad54: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22ad58: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x22ad58u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x22ad5c: 0x27c3d1b8  addiu       $v1, $fp, -0x2E48
    ctx->pc = 0x22ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955448));
    // 0x22ad60: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x22ad60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x22ad64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22ad64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22ad68: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x22ad68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x22ad6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22ad6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x22ad70: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22ad74: 0xc7949fbc  lwc1        $f20, -0x6044($gp)
    ctx->pc = 0x22ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22ad78: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x22ad78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22ad7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22ad80: 0x4617adc2  mul.s       $f23, $f21, $f23
    ctx->pc = 0x22ad80u;
    ctx->f[23] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x22ad84: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x22ad84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x22ad88: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x22ad88u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x22ad8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x22ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22ad90: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x22ad90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x22ad94: 0xc0adeb4  jal         func_2B7AD0
    ctx->pc = 0x22AD94u;
    SET_GPR_U32(ctx, 31, 0x22AD9Cu);
    ctx->pc = 0x22AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD94u;
    // 0x22ad98: 0x2519025  or          $s2, $s2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AD0u, 0x22AD94u, 0x22AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD9Cu;
label_22ad9c:
    // 0x22ad9c: 0x4615b380  add.s       $f14, $f22, $f21
    ctx->pc = 0x22ad9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x22ada0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22ada0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ada4: 0x4617a3c0  add.s       $f15, $f20, $f23
    ctx->pc = 0x22ada4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x22ada8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22adac: 0x4615b301  sub.s       $f12, $f22, $f21
    ctx->pc = 0x22adacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x22adb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22adb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22adb4: 0x4617a341  sub.s       $f13, $f20, $f23
    ctx->pc = 0x22adb4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x22adb8: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x22adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x22adbc: 0xc0ae37e  jal         func_2B8DF8
    ctx->pc = 0x22ADBCu;
    SET_GPR_U32(ctx, 31, 0x22ADC4u);
    ctx->pc = 0x22ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADBCu;
    // 0x22adc0: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8DF8u, 0x22ADBCu, 0x22ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADC4u;
label_22adc4:
    // 0x22adc4: 0x8e822a90  lw          $v0, 0x2A90($s4)
    ctx->pc = 0x22adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10896)));
    // 0x22adc8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x22adc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22adcc: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x22ADCCu;
    {
        const bool branch_taken_0x22adcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADCCu;
        // 0x22add0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adcc) {
            ctx->pc = 0x22AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ac80;
        }
    }
    ctx->pc = 0x22ADD4u;
label_22add4:
    // 0x22add4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22add8:
    // 0x22add8: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ADD8u;
    {
        const bool branch_taken_0x22add8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x22add8) {
            ctx->pc = 0x22ADF0u;
            goto label_22adf0;
        }
    }
    ctx->pc = 0x22ADE0u;
    // 0x22ade0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22ADE0u;
    SET_GPR_U32(ctx, 31, 0x22ADE8u);
    ctx->pc = 0x22ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADE0u;
    // 0x22ade4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22ADE0u, 0x22ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADE8u;
label_22ade8:
    // 0x22ade8: 0xc08b01a  jal         func_22C068
    ctx->pc = 0x22ADE8u;
    SET_GPR_U32(ctx, 31, 0x22ADF0u);
    ctx->pc = 0x22C068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C068u, 0x22ADE8u, 0x22ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADF0u;
label_22adf0:
    // 0x22adf0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x22ADF0u;
    SET_GPR_U32(ctx, 31, 0x22ADF8u);
    ctx->pc = 0x22ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADF0u;
    // 0x22adf4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x22ADF0u, 0x22ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADF8u;
label_22adf8:
    // 0x22adf8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22adfc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22adfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22ae00: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22ae00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ae04: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22ae04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ae08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22ae08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ae0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22ae0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ae10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22ae10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ae14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22ae14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ae18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22ae18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ae1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22ae1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ae20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22ae20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ae24: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x22ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22ae28: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x22ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22ae2c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x22ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22ae30: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22ae34: 0x80adf7c  j           func_2B7DF0
    ctx->pc = 0x22AE34u;
    ctx->pc = 0x22AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE34u;
    // 0x22ae38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DF0u;
    dlSetDitherMatrix_0x2b7df0(rdram, ctx, runtime); return;
    ctx->pc = 0x22AE3Cu;
}

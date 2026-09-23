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

// Function: enemyAIFutureLastStandHandler
// Address: 0x2cc958 - 0x2cd248
void enemyAIFutureLastStandHandler_0x2cc958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAIFutureLastStandHandler_0x2cc958");
#endif

    switch (ctx->pc) {
        case 0x2cc9a0u: goto label_2cc9a0;
        case 0x2cc9f8u: goto label_2cc9f8;
        case 0x2cca90u: goto label_2cca90;
        case 0x2ccb38u: goto label_2ccb38;
        case 0x2ccb80u: goto label_2ccb80;
        case 0x2ccb98u: goto label_2ccb98;
        case 0x2ccbb0u: goto label_2ccbb0;
        case 0x2ccbccu: goto label_2ccbcc;
        case 0x2ccc14u: goto label_2ccc14;
        case 0x2ccc3cu: goto label_2ccc3c;
        case 0x2ccca4u: goto label_2ccca4;
        case 0x2cccf0u: goto label_2cccf0;
        case 0x2ccde8u: goto label_2ccde8;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf2cu: goto label_2ccf2c;
        case 0x2ccf40u: goto label_2ccf40;
        case 0x2ccf6cu: goto label_2ccf6c;
        case 0x2cd070u: goto label_2cd070;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd0c0u: goto label_2cd0c0;
        case 0x2cd0c8u: goto label_2cd0c8;
        case 0x2cd120u: goto label_2cd120;
        case 0x2cd1ccu: goto label_2cd1cc;
        case 0x2cd208u: goto label_2cd208;
        default: break;
    }

    ctx->pc = 0x2cc958u;

    // 0x2cc958: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cc95c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2cc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2cc960: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2cc960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2cc964: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc968: 0x8c44c4f0  lw          $a0, -0x3B10($v0)
    ctx->pc = 0x2cc968u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2cc96c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cc96cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc970: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cc970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2cc974: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2cc974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2cc978: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2cc978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2cc97c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2cc97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2cc980: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2cc980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2cc984: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2cc984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2cc988: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2cc988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2cc98c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cc98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cc990: 0x14830221  bne         $a0, $v1, . + 4 + (0x221 << 2)
    ctx->pc = 0x2CC990u;
    {
        const bool branch_taken_0x2cc990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC990u;
        // 0x2cc994: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc990) {
            ctx->pc = 0x2CD218u;
            goto label_2cd218;
        }
    }
    ctx->pc = 0x2CC998u;
    // 0x2cc998: 0xc089de4  jal         func_227790
    ctx->pc = 0x2CC998u;
    SET_GPR_U32(ctx, 31, 0x2CC9A0u);
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x2CC998u, 0x2CC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9A0u;
label_2cc9a0:
    // 0x2cc9a0: 0xc781b9d0  lwc1        $f1, -0x4630($gp)
    ctx->pc = 0x2cc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc9a4: 0xc780928c  lwc1        $f0, -0x6D74($gp)
    ctx->pc = 0x2cc9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cc9a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc9ac: 0x0  nop
    ctx->pc = 0x2cc9acu;
    // NOP
    // 0x2cc9b0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC9B0u;
    {
        const bool branch_taken_0x2cc9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B0u;
        // 0x2cc9b4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9b0) {
            ctx->pc = 0x2CC9D8u;
            goto label_2cc9d8;
        }
    }
    ctx->pc = 0x2CC9B8u;
    // 0x2cc9b8: 0x8f88b9c0  lw          $t0, -0x4640($gp)
    ctx->pc = 0x2cc9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x2cc9bc: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC9BCu;
    {
        const bool branch_taken_0x2cc9bc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9BCu;
        // 0x2cc9c0: 0x8f82b9f0  lw          $v0, -0x4610($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9bc) {
            ctx->pc = 0x2CC9CCu;
            goto label_2cc9cc;
        }
    }
    ctx->pc = 0x2CC9C4u;
    // 0x2cc9c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC9C4u;
    {
        const bool branch_taken_0x2cc9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9C4u;
        // 0x2cc9c8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9c4) {
            ctx->pc = 0x2CC9D4u;
            goto label_2cc9d4;
        }
    }
    ctx->pc = 0x2CC9CCu;
label_2cc9cc:
    // 0x2cc9cc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2cc9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2cc9d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cc9d4:
    // 0x2cc9d4: 0xe780b9d0  swc1        $f0, -0x4630($gp)
    ctx->pc = 0x2cc9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949328), bits); }
label_2cc9d8:
    // 0x2cc9d8: 0xc781b9dc  lwc1        $f1, -0x4624($gp)
    ctx->pc = 0x2cc9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc9dc: 0xc7809290  lwc1        $f0, -0x6D70($gp)
    ctx->pc = 0x2cc9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cc9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc9e4: 0x0  nop
    ctx->pc = 0x2cc9e4u;
    // NOP
    // 0x2cc9e8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2CC9E8u;
    {
        const bool branch_taken_0x2cc9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9E8u;
        // 0x2cc9ec: 0xc782b468  lwc1        $f2, -0x4B98($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9e8) {
            ctx->pc = 0x2CCA50u;
            goto label_2cca50;
        }
    }
    ctx->pc = 0x2CC9F0u;
    // 0x2cc9f0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CC9F0u;
    SET_GPR_U32(ctx, 31, 0x2CC9F8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CC9F0u, 0x2CC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9F8u;
label_2cc9f8:
    // 0x2cc9f8: 0x8f84b9f4  lw          $a0, -0x460C($gp)
    ctx->pc = 0x2cc9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
    // 0x2cc9fc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2cc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cca00: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2cca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCA04u;
    {
        const bool branch_taken_0x2cca04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA04u;
        // 0x2cca08: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca04) {
            ctx->pc = 0x2CCA18u;
            goto label_2cca18;
        }
    }
    ctx->pc = 0x2CCA0Cu;
    // 0x2cca0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cca0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cca10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCA10u;
    {
        const bool branch_taken_0x2cca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA10u;
        // 0x2cca14: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca10) {
            ctx->pc = 0x2CCA30u;
            goto label_2cca30;
        }
    }
    ctx->pc = 0x2CCA18u;
label_2cca18:
    // 0x2cca18: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2cca18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2cca1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cca20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cca20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cca24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cca24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cca28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cca28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cca2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cca2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cca30:
    // 0x2cca30: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2cca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2cca34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cca34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cca38: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2cca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cca3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2cca3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cca40: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2cca40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cca44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cca44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cca48: 0xe780b9dc  swc1        $f0, -0x4624($gp)
    ctx->pc = 0x2cca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), bits); }
    // 0x2cca4c: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x2cca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cca50:
    // 0x2cca50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cca50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca54: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2cca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2cca58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cca58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2cca5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca60: 0xc780b9d4  lwc1        $f0, -0x462C($gp)
    ctx->pc = 0x2cca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca64: 0x0  nop
    ctx->pc = 0x2cca64u;
    // NOP
    // 0x2cca68: 0x0  nop
    ctx->pc = 0x2cca68u;
    // NOP
    // 0x2cca6c: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x2cca6cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[1];
    // 0x2cca70: 0x8f8ab59c  lw          $t2, -0x4A64($gp)
    ctx->pc = 0x2cca70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2cca74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2cca74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2cca78: 0x19400011  blez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CCA78u;
    {
        const bool branch_taken_0x2cca78 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2CCA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA78u;
        // 0x2cca7c: 0xe780b9d4  swc1        $f0, -0x462C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca78) {
            ctx->pc = 0x2CCAC0u;
            goto label_2ccac0;
        }
    }
    ctx->pc = 0x2CCA80u;
    // 0x2cca80: 0x8f88b9c0  lw          $t0, -0x4640($gp)
    ctx->pc = 0x2cca80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x2cca84: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2cca84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cca88: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2cca88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cca8c: 0x0  nop
    ctx->pc = 0x2cca8cu;
    // NOP
label_2cca90:
    // 0x2cca90: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x2cca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2cca94: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2cca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cca98: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2cca98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cca9c: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x2cca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ccaa0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ccaa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ccaa4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2ccaa8: 0x8c620a9c  lw          $v0, 0xA9C($v1)
    ctx->pc = 0x2ccaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x2ccaac: 0x12a202a  slt         $a0, $t1, $t2
    ctx->pc = 0x2ccaacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2ccab0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CCAB0u;
    {
        const bool branch_taken_0x2ccab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAB0u;
        // 0x2ccab4: 0xa2a80b  movn        $s5, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccab0) {
            ctx->pc = 0x2CCA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cca90;
        }
    }
    ctx->pc = 0x2CCAB8u;
    // 0x2ccab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCAB8u;
    {
        const bool branch_taken_0x2ccab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccab8) {
            ctx->pc = 0x2CCAC4u;
            goto label_2ccac4;
        }
    }
    ctx->pc = 0x2CCAC0u;
label_2ccac0:
    // 0x2ccac0: 0x8f88b9c0  lw          $t0, -0x4640($gp)
    ctx->pc = 0x2ccac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
label_2ccac4:
    // 0x2ccac4: 0x1900014b  blez        $t0, . + 4 + (0x14B << 2)
    ctx->pc = 0x2CCAC4u;
    {
        const bool branch_taken_0x2ccac4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAC4u;
        // 0x2ccac8: 0x8f82b9ec  lw          $v0, -0x4614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccac4) {
            ctx->pc = 0x2CCFF4u;
            goto label_2ccff4;
        }
    }
    ctx->pc = 0x2CCACCu;
    // 0x2ccacc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2ccaccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ccad0: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
    ctx->pc = 0x2CCAD0u;
    {
        const bool branch_taken_0x2ccad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAD0u;
        // 0x2ccad4: 0xc780b9d0  lwc1        $f0, -0x4630($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccad0) {
            ctx->pc = 0x2CCFF4u;
            goto label_2ccff4;
        }
    }
    ctx->pc = 0x2CCAD8u;
    // 0x2ccad8: 0xc781b9d8  lwc1        $f1, -0x4628($gp)
    ctx->pc = 0x2ccad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ccadc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ccadcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ccae0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ccae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ccae4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2ccae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2ccae8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2ccae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccaec: 0xe780b9d0  swc1        $f0, -0x4630($gp)
    ctx->pc = 0x2ccaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949328), bits); }
    // 0x2ccaf0: 0x45000140  bc1f        . + 4 + (0x140 << 2)
    ctx->pc = 0x2CCAF0u;
    {
        const bool branch_taken_0x2ccaf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAF0u;
        // 0x2ccaf4: 0xe781b9d8  swc1        $f1, -0x4628($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccaf0) {
            ctx->pc = 0x2CCFF4u;
            goto label_2ccff4;
        }
    }
    ctx->pc = 0x2CCAF8u;
    // 0x2ccaf8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2ccaf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccafc: 0x0  nop
    ctx->pc = 0x2ccafcu;
    // NOP
    // 0x2ccb00: 0x4500013c  bc1f        . + 4 + (0x13C << 2)
    ctx->pc = 0x2CCB00u;
    {
        const bool branch_taken_0x2ccb00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB00u;
        // 0x2ccb04: 0x8f90b9c8  lw          $s0, -0x4638($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb00) {
            ctx->pc = 0x2CCFF4u;
            goto label_2ccff4;
        }
    }
    ctx->pc = 0x2CCB08u;
    // 0x2ccb08: 0x60000a8  bltz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2CCB08u;
    {
        const bool branch_taken_0x2ccb08 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB08u;
        // 0x2ccb0c: 0x8f82b9e4  lw          $v0, -0x461C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb08) {
            ctx->pc = 0x2CCDACu;
            goto label_2ccdac;
        }
    }
    ctx->pc = 0x2CCB10u;
    // 0x2ccb10: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2ccb14: 0x8f83b9c4  lw          $v1, -0x463C($gp)
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
    // 0x2ccb18: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccb1c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2ccb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ccb20: 0x8f84b9f0  lw          $a0, -0x4610($gp)
    ctx->pc = 0x2ccb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x2ccb24: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2ccb24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ccb28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ccb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccb30: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x2CCB30u;
    SET_GPR_U32(ctx, 31, 0x2CCB38u);
    ctx->pc = 0x2CCB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB30u;
    // 0x2ccb34: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F00u, 0x2CCB30u, 0x2CCB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB38u;
label_2ccb38:
    // 0x2ccb38: 0x8f90b9c8  lw          $s0, -0x4638($gp)
    ctx->pc = 0x2ccb38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949320)));
    // 0x2ccb3c: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CCB3Cu;
    {
        const bool branch_taken_0x2ccb3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB3Cu;
        // 0x2ccb40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb3c) {
            ctx->pc = 0x2CCBE0u;
            goto label_2ccbe0;
        }
    }
    ctx->pc = 0x2CCB44u;
    // 0x2ccb44: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x2ccb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
    // 0x2ccb48: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CCB48u;
    {
        const bool branch_taken_0x2ccb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB48u;
        // 0x2ccb4c: 0x8f82b9cc  lw          $v0, -0x4634($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb48) {
            ctx->pc = 0x2CCBE0u;
            goto label_2ccbe0;
        }
    }
    ctx->pc = 0x2CCB50u;
    // 0x2ccb50: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CCB50u;
    {
        const bool branch_taken_0x2ccb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB50u;
        // 0x2ccb54: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb50) {
            ctx->pc = 0x2CCBE0u;
            goto label_2ccbe0;
        }
    }
    ctx->pc = 0x2CCB58u;
    // 0x2ccb58: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x2ccb58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x2ccb5c: 0x25622c18  addiu       $v0, $t3, 0x2C18
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x2ccb60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2ccb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2ccb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ccb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ccb68: 0x8f86b9e8  lw          $a2, -0x4618($gp)
    ctx->pc = 0x2ccb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
    // 0x2ccb6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccb70: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x2ccb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x2ccb74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ccb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ccb78: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2CCB78u;
    SET_GPR_U32(ctx, 31, 0x2CCB80u);
    ctx->pc = 0x2CCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB78u;
    // 0x2ccb7c: 0x8c4501ac  lw          $a1, 0x1AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2CCB78u, 0x2CCB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB80u;
label_2ccb80:
    // 0x2ccb80: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x2ccb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2ccb84: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCB84u;
    {
        const bool branch_taken_0x2ccb84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB84u;
        // 0x2ccb88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb84) {
            ctx->pc = 0x2CCB98u;
            goto label_2ccb98;
        }
    }
    ctx->pc = 0x2CCB8Cu;
    // 0x2ccb8c: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x2ccb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2ccb90: 0xc081546  jal         func_205518
    ctx->pc = 0x2CCB90u;
    SET_GPR_U32(ctx, 31, 0x2CCB98u);
    ctx->pc = 0x2CCB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB90u;
    // 0x2ccb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CCB90u, 0x2CCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB98u;
label_2ccb98:
    // 0x2ccb98: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2ccb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ccb9c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2ccb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ccba0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CCBA0u;
    {
        const bool branch_taken_0x2ccba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBA0u;
        // 0x2ccba4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccba0) {
            ctx->pc = 0x2CCBE0u;
            goto label_2ccbe0;
        }
    }
    ctx->pc = 0x2CCBA8u;
    // 0x2ccba8: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ccbac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ccbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccbb0:
    // 0x2ccbb0: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2ccbb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ccbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ccbb8: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2ccbbc: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCBBCu;
    {
        const bool branch_taken_0x2ccbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2CCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBBCu;
        // 0x2ccbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbbc) {
            ctx->pc = 0x2CCBD0u;
            goto label_2ccbd0;
        }
    }
    ctx->pc = 0x2CCBC4u;
    // 0x2ccbc4: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x2CCBC4u;
    SET_GPR_U32(ctx, 31, 0x2CCBCCu);
    ctx->pc = 0x2CCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBC4u;
    // 0x2ccbc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x2CCBC4u, 0x2CCBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBCCu;
label_2ccbcc:
    // 0x2ccbcc: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2ccbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_2ccbd0:
    // 0x2ccbd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ccbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ccbd4: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2ccbd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ccbd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CCBD8u;
    {
        const bool branch_taken_0x2ccbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBD8u;
        // 0x2ccbdc: 0x2610071c  addiu       $s0, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbd8) {
            ctx->pc = 0x2CCBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccbb0;
        }
    }
    ctx->pc = 0x2CCBE0u;
label_2ccbe0:
    // 0x2ccbe0: 0x12600071  beqz        $s3, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CCBE0u;
    {
        const bool branch_taken_0x2ccbe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBE0u;
        // 0x2ccbe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbe0) {
            ctx->pc = 0x2CCDA8u;
            goto label_2ccda8;
        }
    }
    ctx->pc = 0x2CCBE8u;
    // 0x2ccbe8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2ccbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2ccbec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCBECu;
    {
        const bool branch_taken_0x2ccbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBECu;
        // 0x2ccbf0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbec) {
            ctx->pc = 0x2CCC00u;
            goto label_2ccc00;
        }
    }
    ctx->pc = 0x2CCBF4u;
    // 0x2ccbf4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2ccbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2ccbf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCBF8u;
    {
        const bool branch_taken_0x2ccbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBF8u;
        // 0x2ccbfc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbf8) {
            ctx->pc = 0x2CCC04u;
            goto label_2ccc04;
        }
    }
    ctx->pc = 0x2CCC00u;
label_2ccc00:
    // 0x2ccc00: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2ccc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ccc04:
    // 0x2ccc04: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2ccc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2ccc08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ccc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc0c: 0xc089d92  jal         func_227648
    ctx->pc = 0x2CCC0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC14u);
    ctx->pc = 0x2CCC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC0Cu;
    // 0x2ccc10: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227648u, 0x2CCC0Cu, 0x2CCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC14u;
label_2ccc14:
    // 0x2ccc14: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x2ccc14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ccc18: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ccc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ccc1c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2ccc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ccc20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc24: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ccc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ccc28: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2ccc28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2ccc2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ccc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccc30: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ccc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccc34: 0xc0b3144  jal         func_2CC510
    ctx->pc = 0x2CCC34u;
    SET_GPR_U32(ctx, 31, 0x2CCC3Cu);
    ctx->pc = 0x2CCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC34u;
    // 0x2ccc38: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC510u, 0x2CCC34u, 0x2CCC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC3Cu;
label_2ccc3c:
    // 0x2ccc3c: 0x8f83b4f4  lw          $v1, -0x4B0C($gp)
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2ccc40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ccc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc44: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CCC44u;
    {
        const bool branch_taken_0x2ccc44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC44u;
        // 0x2ccc48: 0x8f88b9e4  lw          $t0, -0x461C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc44) {
            ctx->pc = 0x2CCC9Cu;
            goto label_2ccc9c;
        }
    }
    ctx->pc = 0x2CCC4Cu;
    // 0x2ccc4c: 0x240300d8  addiu       $v1, $zero, 0xD8
    ctx->pc = 0x2ccc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2ccc50: 0x8f89b9c4  lw          $t1, -0x463C($gp)
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
    // 0x2ccc54: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2ccc54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ccc58: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ccc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccc5c: 0x1263018  mult        $a2, $t1, $a2
    ctx->pc = 0x2ccc5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ccc60: 0x8f8ab9f0  lw          $t2, -0x4610($gp)
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x2ccc64: 0x24041210  addiu       $a0, $zero, 0x1210
    ctx->pc = 0x2ccc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2ccc68: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2ccc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2ccc6c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2ccc6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ccc70: 0x24a52488  addiu       $a1, $a1, 0x2488
    ctx->pc = 0x2ccc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9352));
    // 0x2ccc74: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2ccc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ccc78: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2ccc7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ccc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ccc80: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ccc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ccc84: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2ccc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2ccc88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ccc8c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ccc90: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2ccc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ccc94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2CCC94u;
    {
        const bool branch_taken_0x2ccc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC94u;
        // 0x2ccc98: 0xac830ae4  sw          $v1, 0xAE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc94) {
            ctx->pc = 0x2CCD14u;
            goto label_2ccd14;
        }
    }
    ctx->pc = 0x2CCC9Cu;
label_2ccc9c:
    // 0x2ccc9c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CCC9Cu;
    SET_GPR_U32(ctx, 31, 0x2CCCA4u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CCC9Cu, 0x2CCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCA4u;
label_2ccca4:
    // 0x2ccca4: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x2ccca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ccca8: 0x2407071c  addiu       $a3, $zero, 0x71C
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2cccac: 0x24051210  addiu       $a1, $zero, 0x1210
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cccb0: 0x8f86b238  lw          $a2, -0x4DC8($gp)
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cccb4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2cccb4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cccb8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CCCB8u;
    {
        const bool branch_taken_0x2cccb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cccb8) {
            ctx->pc = 0x2CCCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCCB8u;
            // 0x2cccbc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCCC0u;
            goto label_2cccc0;
        }
    }
    ctx->pc = 0x2CCCC0u;
label_2cccc0:
    // 0x2cccc0: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x2cccc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cccc4: 0x1810  mfhi        $v1
    ctx->pc = 0x2cccc4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cccc8: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2cccc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ccccc: 0x2258018  mult        $s0, $s1, $a1
    ctx->pc = 0x2cccccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2cccd0: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2cccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2cccd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cccd8: 0x8c620180  lw          $v0, 0x180($v1)
    ctx->pc = 0x2cccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2cccdc: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2cccdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2ccce0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CCCE0u;
    {
        const bool branch_taken_0x2ccce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCE0u;
        // 0x2ccce4: 0xacc20ae4  sw          $v0, 0xAE4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccce0) {
            ctx->pc = 0x2CCD08u;
            goto label_2ccd08;
        }
    }
    ctx->pc = 0x2CCCE8u;
    // 0x2ccce8: 0xc0b368a  jal         func_2CDA28
    ctx->pc = 0x2CCCE8u;
    SET_GPR_U32(ctx, 31, 0x2CCCF0u);
    ctx->pc = 0x2CCCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCE8u;
    // 0x2cccec: 0x8cc40bcc  lw          $a0, 0xBCC($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x2CCCE8u, 0x2CCCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCF0u;
label_2cccf0:
    // 0x2cccf0: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x2cccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cccf4: 0x8f8ab9f0  lw          $t2, -0x4610($gp)
    ctx->pc = 0x2cccf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x2cccf8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2cccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cccfc: 0x8f88b9e4  lw          $t0, -0x461C($gp)
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949348)));
    // 0x2ccd00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCD00u;
    {
        const bool branch_taken_0x2ccd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD00u;
        // 0x2ccd04: 0xac620ae4  sw          $v0, 0xAE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd00) {
            ctx->pc = 0x2CCD10u;
            goto label_2ccd10;
        }
    }
    ctx->pc = 0x2CCD08u;
label_2ccd08:
    // 0x2ccd08: 0x8f8ab9f0  lw          $t2, -0x4610($gp)
    ctx->pc = 0x2ccd08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x2ccd0c: 0x8f88b9e4  lw          $t0, -0x461C($gp)
    ctx->pc = 0x2ccd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949348)));
label_2ccd10:
    // 0x2ccd10: 0x8f89b9c4  lw          $t1, -0x463C($gp)
    ctx->pc = 0x2ccd10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
label_2ccd14:
    // 0x2ccd14: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ccd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ccd18: 0x240300d8  addiu       $v1, $zero, 0xD8
    ctx->pc = 0x2ccd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2ccd1c: 0x1222818  mult        $a1, $t1, $v0
    ctx->pc = 0x2ccd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ccd20: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x2ccd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ccd24: 0x4a3021  addu        $a2, $v0, $t2
    ctx->pc = 0x2ccd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ccd28: 0x8f82b9cc  lw          $v0, -0x4634($gp)
    ctx->pc = 0x2ccd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949324)));
    // 0x2ccd2c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2ccd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ccd30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2ccd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ccd34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ccd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ccd38: 0xaf82b9cc  sw          $v0, -0x4634($gp)
    ctx->pc = 0x2ccd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949324), GPR_U32(ctx, 2));
    // 0x2ccd3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ccd3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ccd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCD40u;
    {
        const bool branch_taken_0x2ccd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD40u;
        // 0x2ccd44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd40) {
            ctx->pc = 0x2CCD5Cu;
            goto label_2ccd5c;
        }
    }
    ctx->pc = 0x2CCD48u;
    // 0x2ccd48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ccd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd4c: 0x8f90b9c8  lw          $s0, -0x4638($gp)
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949320)));
    // 0x2ccd50: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CCD54u;
    {
        const bool branch_taken_0x2ccd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD54u;
        // 0x2ccd58: 0xe780b9d8  swc1        $f0, -0x4628($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd54) {
            ctx->pc = 0x2CCDACu;
            goto label_2ccdac;
        }
    }
    ctx->pc = 0x2CCD5Cu;
label_2ccd5c:
    // 0x2ccd5c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2ccd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ccd60: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x2ccd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x2ccd64: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2ccd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2ccd68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ccd6c: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x2ccd6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ccd70: 0xaf80b9cc  sw          $zero, -0x4634($gp)
    ctx->pc = 0x2ccd70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949324), GPR_U32(ctx, 0));
    // 0x2ccd74: 0xe780b9d8  swc1        $f0, -0x4628($gp)
    ctx->pc = 0x2ccd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949336), bits); }
    // 0x2ccd78: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CCD78u;
    {
        const bool branch_taken_0x2ccd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD78u;
        // 0x2ccd7c: 0xaf89b9c4  sw          $t1, -0x463C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949316), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd78) {
            ctx->pc = 0x2CCDA8u;
            goto label_2ccda8;
        }
    }
    ctx->pc = 0x2CCD80u;
    // 0x2ccd80: 0x8f90b9c8  lw          $s0, -0x4638($gp)
    ctx->pc = 0x2ccd80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949320)));
    // 0x2ccd84: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ccd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ccd88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ccd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ccd8c: 0xaf80b9c4  sw          $zero, -0x463C($gp)
    ctx->pc = 0x2ccd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949316), GPR_U32(ctx, 0));
    // 0x2ccd90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ccd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ccd94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCD94u;
    {
        const bool branch_taken_0x2ccd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD94u;
        // 0x2ccd98: 0xaf90b9c8  sw          $s0, -0x4638($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949320), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd94) {
            ctx->pc = 0x2CCDACu;
            goto label_2ccdac;
        }
    }
    ctx->pc = 0x2CCD9Cu;
    // 0x2ccd9c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2ccd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccda0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCDA0u;
    {
        const bool branch_taken_0x2ccda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDA0u;
        // 0x2ccda4: 0xaf90b9c8  sw          $s0, -0x4638($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949320), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccda0) {
            ctx->pc = 0x2CCDACu;
            goto label_2ccdac;
        }
    }
    ctx->pc = 0x2CCDA8u;
label_2ccda8:
    // 0x2ccda8: 0x8f90b9c8  lw          $s0, -0x4638($gp)
    ctx->pc = 0x2ccda8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949320)));
label_2ccdac:
    // 0x2ccdac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ccdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccdb0: 0x56020091  bnel        $s0, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2CCDB0u;
    {
        const bool branch_taken_0x2ccdb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccdb0) {
            ctx->pc = 0x2CCDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCDB0u;
            // 0x2ccdb4: 0x8f82b9f4  lw          $v0, -0x460C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFF8u;
            goto label_2ccff8;
        }
    }
    ctx->pc = 0x2CCDB8u;
    // 0x2ccdb8: 0x5ea0008f  bgtzl       $s5, . + 4 + (0x8F << 2)
    ctx->pc = 0x2CCDB8u;
    {
        const bool branch_taken_0x2ccdb8 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x2ccdb8) {
            ctx->pc = 0x2CCDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCDB8u;
            // 0x2ccdbc: 0x8f82b9f4  lw          $v0, -0x460C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFF8u;
            goto label_2ccff8;
        }
    }
    ctx->pc = 0x2CCDC0u;
    // 0x2ccdc0: 0x8f88b4f4  lw          $t0, -0x4B0C($gp)
    ctx->pc = 0x2ccdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2ccdc4: 0x19000021  blez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CCDC4u;
    {
        const bool branch_taken_0x2ccdc4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDC4u;
        // 0x2ccdc8: 0x8f82b9e4  lw          $v0, -0x461C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdc4) {
            ctx->pc = 0x2CCE4Cu;
            goto label_2cce4c;
        }
    }
    ctx->pc = 0x2CCDCCu;
    // 0x2ccdcc: 0x19000019  blez        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CCDCCu;
    {
        const bool branch_taken_0x2ccdcc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDCCu;
        // 0x2ccdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdcc) {
            ctx->pc = 0x2CCE34u;
            goto label_2cce34;
        }
    }
    ctx->pc = 0x2CCDD4u;
    // 0x2ccdd4: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2ccdd8: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x2ccdd8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x2ccddc: 0x8f87b9e8  lw          $a3, -0x4618($gp)
    ctx->pc = 0x2ccddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
    // 0x2ccde0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x2ccde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x2ccde4: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
label_2ccde8:
    // 0x2ccde8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2ccde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2ccdec: 0x24a22488  addiu       $v0, $a1, 0x2488
    ctx->pc = 0x2ccdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 9352));
    // 0x2ccdf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ccdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccdf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ccdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ccdf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ccdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccdfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ccdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cce00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cce04: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2cce04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2cce08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cce08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cce0c: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x2cce0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cce10: 0xc4600214  lwc1        $f0, 0x214($v1)
    ctx->pc = 0x2cce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cce14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cce18: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cce18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cce1c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cce1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2cce20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2cce20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cce24: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2CCE24u;
    {
        const bool branch_taken_0x2cce24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE24u;
        // 0x2cce28: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce24) {
            ctx->pc = 0x2CCDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCE2Cu;
    // 0x2cce2c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2CCE2Cu;
    {
        const bool branch_taken_0x2cce2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE2Cu;
        // 0x2cce30: 0x2c7b018  mult        $s6, $s6, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce2c) {
            ctx->pc = 0x2CCEE4u;
            goto label_2ccee4;
        }
    }
    ctx->pc = 0x2CCE34u;
label_2cce34:
    // 0x2cce34: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x2cce34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2cce38: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x2cce38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x2cce3c: 0x8f87b9e8  lw          $a3, -0x4618($gp)
    ctx->pc = 0x2cce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
    // 0x2cce40: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2cce40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x2cce44: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2CCE44u;
    {
        const bool branch_taken_0x2cce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE44u;
        // 0x2cce48: 0x2c7b018  mult        $s6, $s6, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce44) {
            ctx->pc = 0x2CCEE4u;
            goto label_2ccee4;
        }
    }
    ctx->pc = 0x2CCE4Cu;
label_2cce4c:
    // 0x2cce4c: 0x240300d8  addiu       $v1, $zero, 0xD8
    ctx->pc = 0x2cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2cce50: 0x8f84b9f0  lw          $a0, -0x4610($gp)
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x2cce54: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2cce54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cce58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2cce58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cce5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cce60: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cce64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2cce64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cce68: 0x0  nop
    ctx->pc = 0x2cce68u;
    // NOP
    // 0x2cce6c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2CCE6Cu;
    {
        const bool branch_taken_0x2cce6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE6Cu;
        // 0x2cce70: 0xc780b9d4  lwc1        $f0, -0x462C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce6c) {
            ctx->pc = 0x2CCED4u;
            goto label_2cced4;
        }
    }
    ctx->pc = 0x2CCE74u;
    // 0x2cce74: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2cce74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cce78: 0x0  nop
    ctx->pc = 0x2cce78u;
    // NOP
    // 0x2cce7c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2CCE7Cu;
    {
        const bool branch_taken_0x2cce7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE7Cu;
        // 0x2cce80: 0x8f899354  lw          $t1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce7c) {
            ctx->pc = 0x2CCED8u;
            goto label_2cced8;
        }
    }
    ctx->pc = 0x2CCE84u;
    // 0x2cce84: 0x0  nop
    ctx->pc = 0x2cce84u;
    // NOP
    // 0x2cce88: 0x0  nop
    ctx->pc = 0x2cce88u;
    // NOP
    // 0x2cce8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2cce8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2cce90: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2cce90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2cce94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cce94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cce98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cce98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cce9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cce9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ccea0: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x2ccea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x2ccea4: 0x0  nop
    ctx->pc = 0x2ccea4u;
    // NOP
    // 0x2ccea8: 0x1ac00006  blez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCEA8u;
    {
        const bool branch_taken_0x2ccea8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2CCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEA8u;
        // 0x2cceac: 0x8f82b9e8  lw          $v0, -0x4618($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccea8) {
            ctx->pc = 0x2CCEC4u;
            goto label_2ccec4;
        }
    }
    ctx->pc = 0x2CCEB0u;
    // 0x2cceb0: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x2cceb0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x2cceb4: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x2cceb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2cceb8: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2cceb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x2ccebc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CCEBCu;
    {
        const bool branch_taken_0x2ccebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEBCu;
        // 0x2ccec0: 0x2c2b018  mult        $s6, $s6, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccebc) {
            ctx->pc = 0x2CCEE4u;
            goto label_2ccee4;
        }
    }
    ctx->pc = 0x2CCEC4u;
label_2ccec4:
    // 0x2ccec4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ccec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccec8: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x2ccec8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x2ccecc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCECCu;
    {
        const bool branch_taken_0x2ccecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCECCu;
        // 0x2cced0: 0x8f899354  lw          $t1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccecc) {
            ctx->pc = 0x2CCEE0u;
            goto label_2ccee0;
        }
    }
    ctx->pc = 0x2CCED4u;
label_2cced4:
    // 0x2cced4: 0x8f899354  lw          $t1, -0x6CAC($gp)
    ctx->pc = 0x2cced4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
label_2cced8:
    // 0x2cced8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cced8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccedc: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x2ccedcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
label_2ccee0:
    // 0x2ccee0: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2ccee0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
label_2ccee4:
    // 0x2ccee4: 0x25632c18  addiu       $v1, $t3, 0x2C18
    ctx->pc = 0x2ccee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 11288));
    // 0x2ccee8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2ccee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2cceec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccef0: 0x25449fb8  addiu       $a0, $t2, -0x6048
    ctx->pc = 0x2ccef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942648));
    // 0x2ccef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ccef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccef8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccefc: 0x8f86b9e8  lw          $a2, -0x4618($gp)
    ctx->pc = 0x2ccefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
    // 0x2ccf00: 0x8c6a01b8  lw          $t2, 0x1B8($v1)
    ctx->pc = 0x2ccf00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x2ccf04: 0x8c6501ac  lw          $a1, 0x1AC($v1)
    ctx->pc = 0x2ccf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x2ccf08: 0x8c6701b0  lw          $a3, 0x1B0($v1)
    ctx->pc = 0x2ccf08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2ccf0c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF14u);
    ctx->pc = 0x2CCF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF0Cu;
    // 0x2ccf10: 0x8c6801b4  lw          $t0, 0x1B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2CCF0Cu, 0x2CCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF14u;
label_2ccf14:
    // 0x2ccf14: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x2ccf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2ccf18: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCF18u;
    {
        const bool branch_taken_0x2ccf18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF18u;
        // 0x2ccf1c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf18) {
            ctx->pc = 0x2CCF2Cu;
            goto label_2ccf2c;
        }
    }
    ctx->pc = 0x2CCF20u;
    // 0x2ccf20: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x2ccf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2ccf24: 0xc081546  jal         func_205518
    ctx->pc = 0x2CCF24u;
    SET_GPR_U32(ctx, 31, 0x2CCF2Cu);
    ctx->pc = 0x2CCF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF24u;
    // 0x2ccf28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CCF24u, 0x2CCF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF2Cu;
label_2ccf2c:
    // 0x2ccf2c: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2ccf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ccf30: 0x18c0001b  blez        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CCF30u;
    {
        const bool branch_taken_0x2ccf30 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2CCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF30u;
        // 0x2ccf34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf30) {
            ctx->pc = 0x2CCFA0u;
            goto label_2ccfa0;
        }
    }
    ctx->pc = 0x2CCF38u;
    // 0x2ccf38: 0x8f87b230  lw          $a3, -0x4DD0($gp)
    ctx->pc = 0x2ccf38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2ccf3c: 0x2403071c  addiu       $v1, $zero, 0x71C
    ctx->pc = 0x2ccf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
label_2ccf40:
    // 0x2ccf40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ccf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ccf44: 0x2238018  mult        $s0, $s1, $v1
    ctx->pc = 0x2ccf44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ccf48: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x2ccf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2ccf4c: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x2ccf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2ccf50: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCF50u;
    {
        const bool branch_taken_0x2ccf50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF50u;
        // 0x2ccf54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf50) {
            ctx->pc = 0x2CCF64u;
            goto label_2ccf64;
        }
    }
    ctx->pc = 0x2CCF58u;
    // 0x2ccf58: 0x8f82b4f4  lw          $v0, -0x4B0C($gp)
    ctx->pc = 0x2ccf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2ccf5c: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CCF5Cu;
    {
        const bool branch_taken_0x2ccf5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ccf5c) {
            ctx->pc = 0x2CCF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCF5Cu;
            // 0x2ccf60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF94u;
            goto label_2ccf94;
        }
    }
    ctx->pc = 0x2CCF64u;
label_2ccf64:
    // 0x2ccf64: 0xc0ac264  jal         func_2B0990
    ctx->pc = 0x2CCF64u;
    SET_GPR_U32(ctx, 31, 0x2CCF6Cu);
    ctx->pc = 0x2CCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF64u;
    // 0x2ccf68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0990u, 0x2CCF64u, 0x2CCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF6Cu;
label_2ccf6c:
    // 0x2ccf6c: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x2ccf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2ccf70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ccf70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf74: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2ccf78: 0x8c640180  lw          $a0, 0x180($v1)
    ctx->pc = 0x2ccf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x2ccf7c: 0x8c850160  lw          $a1, 0x160($a0)
    ctx->pc = 0x2ccf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2ccf80: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x2ccf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x2ccf84: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2ccf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2ccf88: 0xaca200f8  sw          $v0, 0xF8($a1)
    ctx->pc = 0x2ccf88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 2));
    // 0x2ccf8c: 0x8f869f74  lw          $a2, -0x608C($gp)
    ctx->pc = 0x2ccf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2ccf90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ccf90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ccf94:
    // 0x2ccf94: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2ccf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ccf98: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2CCF98u;
    {
        const bool branch_taken_0x2ccf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF98u;
        // 0x2ccf9c: 0x2403071c  addiu       $v1, $zero, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf98) {
            ctx->pc = 0x2CCF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccf40;
        }
    }
    ctx->pc = 0x2CCFA0u;
label_2ccfa0:
    // 0x2ccfa0: 0x8f88b9e4  lw          $t0, -0x461C($gp)
    ctx->pc = 0x2ccfa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949348)));
    // 0x2ccfa4: 0x8f83b9e8  lw          $v1, -0x4618($gp)
    ctx->pc = 0x2ccfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
    // 0x2ccfa8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2ccfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfac: 0x8f82b9c0  lw          $v0, -0x4640($gp)
    ctx->pc = 0x2ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x2ccfb0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ccfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ccfb4: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2ccfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ccfb8: 0xaf87b9e8  sw          $a3, -0x4618($gp)
    ctx->pc = 0x2ccfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949352), GPR_U32(ctx, 7));
    // 0x2ccfbc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2ccfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ccfc0: 0xaf80b9c8  sw          $zero, -0x4638($gp)
    ctx->pc = 0x2ccfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949320), GPR_U32(ctx, 0));
    // 0x2ccfc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCFC4u;
    {
        const bool branch_taken_0x2ccfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFC4u;
        // 0x2ccfc8: 0xaf88b9e4  sw          $t0, -0x461C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949348), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfc4) {
            ctx->pc = 0x2CCFD4u;
            goto label_2ccfd4;
        }
    }
    ctx->pc = 0x2CCFCCu;
    // 0x2ccfcc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2ccfccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfd0: 0xaf88b9e4  sw          $t0, -0x461C($gp)
    ctx->pc = 0x2ccfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949348), GPR_U32(ctx, 8));
label_2ccfd4:
    // 0x2ccfd4: 0x240200d8  addiu       $v0, $zero, 0xD8
    ctx->pc = 0x2ccfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2ccfd8: 0x8f83b9f0  lw          $v1, -0x4610($gp)
    ctx->pc = 0x2ccfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
    // 0x2ccfdc: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2ccfdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ccfe0: 0xaf80b9d4  sw          $zero, -0x462C($gp)
    ctx->pc = 0x2ccfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949332), GPR_U32(ctx, 0));
    // 0x2ccfe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccfe8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ccfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccfec: 0xaf80b9d8  sw          $zero, -0x4628($gp)
    ctx->pc = 0x2ccfecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949336), GPR_U32(ctx, 0));
    // 0x2ccff0: 0xe780b9d0  swc1        $f0, -0x4630($gp)
    ctx->pc = 0x2ccff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949328), bits); }
label_2ccff4:
    // 0x2ccff4: 0x8f82b9f4  lw          $v0, -0x460C($gp)
    ctx->pc = 0x2ccff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
label_2ccff8:
    // 0x2ccff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ccff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccffc: 0x4800086  bltz        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2CCFFCu;
    {
        const bool branch_taken_0x2ccffc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2CD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFFCu;
        // 0x2cd000: 0x8f82b9c8  lw          $v0, -0x4638($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccffc) {
            ctx->pc = 0x2CD218u;
            goto label_2cd218;
        }
    }
    ctx->pc = 0x2CD004u;
    // 0x2cd004: 0x4400084  bltz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2CD004u;
    {
        const bool branch_taken_0x2cd004 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD004u;
        // 0x2cd008: 0xc780b9d0  lwc1        $f0, -0x4630($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd004) {
            ctx->pc = 0x2CD218u;
            goto label_2cd218;
        }
    }
    ctx->pc = 0x2CD00Cu;
    // 0x2cd00c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cd00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd010: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd014: 0x0  nop
    ctx->pc = 0x2cd014u;
    // NOP
    // 0x2cd018: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD018u;
    {
        const bool branch_taken_0x2cd018 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD018u;
        // 0x2cd01c: 0xc780b9dc  lwc1        $f0, -0x4624($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd018) {
            ctx->pc = 0x2CD030u;
            goto label_2cd030;
        }
    }
    ctx->pc = 0x2CD020u;
    // 0x2cd020: 0x8f82b9c0  lw          $v0, -0x4640($gp)
    ctx->pc = 0x2cd020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x2cd024: 0x1c40007d  bgtz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2CD024u;
    {
        const bool branch_taken_0x2cd024 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD024u;
        // 0x2cd028: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd024) {
            ctx->pc = 0x2CD21Cu;
            goto label_2cd21c;
        }
    }
    ctx->pc = 0x2CD02Cu;
    // 0x2cd02c: 0xc780b9dc  lwc1        $f0, -0x4624($gp)
    ctx->pc = 0x2cd02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cd030:
    // 0x2cd030: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2cd030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2cd034: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cd034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd038: 0x0  nop
    ctx->pc = 0x2cd038u;
    // NOP
    // 0x2cd03c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD03Cu;
    {
        const bool branch_taken_0x2cd03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD03Cu;
        // 0x2cd040: 0xe780b9dc  swc1        $f0, -0x4624($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd03c) {
            ctx->pc = 0x2CD04Cu;
            goto label_2cd04c;
        }
    }
    ctx->pc = 0x2CD044u;
    // 0x2cd044: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2cd044u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2cd048: 0xe780b9dc  swc1        $f0, -0x4624($gp)
    ctx->pc = 0x2cd048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), bits); }
label_2cd04c:
    // 0x2cd04c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2cd04cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd050: 0x0  nop
    ctx->pc = 0x2cd050u;
    // NOP
    // 0x2cd054: 0x45000070  bc1f        . + 4 + (0x70 << 2)
    ctx->pc = 0x2CD054u;
    {
        const bool branch_taken_0x2cd054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD054u;
        // 0x2cd058: 0x8f82b9ec  lw          $v0, -0x4614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd054) {
            ctx->pc = 0x2CD218u;
            goto label_2cd218;
        }
    }
    ctx->pc = 0x2CD05Cu;
    // 0x2cd05c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2cd05cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd060: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2CD060u;
    {
        const bool branch_taken_0x2cd060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd060) {
            ctx->pc = 0x2CD210u;
            goto label_2cd210;
        }
    }
    ctx->pc = 0x2CD068u;
    // 0x2cd068: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x2CD068u;
    SET_GPR_U32(ctx, 31, 0x2CD070u);
    ctx->pc = 0x227F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F00u, 0x2CD068u, 0x2CD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD070u;
label_2cd070:
    // 0x2cd070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd074: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2CD074u;
    {
        const bool branch_taken_0x2cd074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD074u;
        // 0x2cd078: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd074) {
            ctx->pc = 0x2CD210u;
            goto label_2cd210;
        }
    }
    ctx->pc = 0x2CD07Cu;
    // 0x2cd07c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cd080: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2cd080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cd084: 0x37a6000c  ori         $a2, $sp, 0xC
    ctx->pc = 0x2cd084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x2cd088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cd08c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2cd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2cd090: 0xc089d92  jal         func_227648
    ctx->pc = 0x2CD090u;
    SET_GPR_U32(ctx, 31, 0x2CD098u);
    ctx->pc = 0x2CD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD090u;
    // 0x2cd094: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227648u, 0x2CD090u, 0x2CD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD098u;
label_2cd098:
    // 0x2cd098: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cd09c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2cd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2cd0a0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2cd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cd0a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cd0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0a8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2cd0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2cd0ac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2cd0acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2cd0b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cd0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cd0b4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cd0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd0b8: 0xc0b3144  jal         func_2CC510
    ctx->pc = 0x2CD0B8u;
    SET_GPR_U32(ctx, 31, 0x2CD0C0u);
    ctx->pc = 0x2CD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0B8u;
    // 0x2cd0bc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC510u, 0x2CD0B8u, 0x2CD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0C0u;
label_2cd0c0:
    // 0x2cd0c0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2CD0C0u;
    SET_GPR_U32(ctx, 31, 0x2CD0C8u);
    ctx->pc = 0x2CD0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0C0u;
    // 0x2cd0c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2CD0C0u, 0x2CD0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0C8u;
label_2cd0c8:
    // 0x2cd0c8: 0x8f86b4f4  lw          $a2, -0x4B0C($gp)
    ctx->pc = 0x2cd0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948084)));
    // 0x2cd0cc: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2cd0ccu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cd0d0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CD0D0u;
    {
        const bool branch_taken_0x2cd0d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd0d0) {
            ctx->pc = 0x2CD0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD0D0u;
            // 0x2cd0d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0D8u;
            goto label_2cd0d8;
        }
    }
    ctx->pc = 0x2CD0D8u;
label_2cd0d8:
    // 0x2cd0d8: 0x2810  mfhi        $a1
    ctx->pc = 0x2cd0d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cd0dc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2cd0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2cd0e0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CD0E0u;
    {
        const bool branch_taken_0x2cd0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0E0u;
        // 0x2cd0e4: 0xaf85b9e0  sw          $a1, -0x4620($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0e0) {
            ctx->pc = 0x2CD18Cu;
            goto label_2cd18c;
        }
    }
    ctx->pc = 0x2CD0E8u;
    // 0x2cd0e8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x2cd0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x2cd0ec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2cd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cd0f0: 0x25022488  addiu       $v0, $t0, 0x2488
    ctx->pc = 0x2cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 9352));
    // 0x2cd0f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd0f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd0fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cd100: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd104: 0xc4600214  lwc1        $f0, 0x214($v1)
    ctx->pc = 0x2cd104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cd108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd10c: 0x0  nop
    ctx->pc = 0x2cd10cu;
    // NOP
    // 0x2cd110: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2CD110u;
    {
        const bool branch_taken_0x2cd110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD110u;
        // 0x2cd114: 0x8f87b238  lw          $a3, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd110) {
            ctx->pc = 0x2CD168u;
            goto label_2cd168;
        }
    }
    ctx->pc = 0x2CD118u;
    // 0x2cd118: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cd118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cd11c: 0x0  nop
    ctx->pc = 0x2cd11cu;
    // NOP
label_2cd120:
    // 0x2cd120: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2cd120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2cd124: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD124u;
    {
        const bool branch_taken_0x2cd124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD124u;
        // 0x2cd128: 0xaf85b9e0  sw          $a1, -0x4620($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd124) {
            ctx->pc = 0x2CD134u;
            goto label_2cd134;
        }
    }
    ctx->pc = 0x2CD12Cu;
    // 0x2cd12c: 0xaf80b9e0  sw          $zero, -0x4620($gp)
    ctx->pc = 0x2cd12cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949344), GPR_U32(ctx, 0));
    // 0x2cd130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd134:
    // 0x2cd134: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2cd134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cd138: 0x25032488  addiu       $v1, $t0, 0x2488
    ctx->pc = 0x2cd138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 9352));
    // 0x2cd13c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cd13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cd140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd148: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2cd148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cd14c: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2cd14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cd150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd154: 0x0  nop
    ctx->pc = 0x2cd154u;
    // NOP
    // 0x2cd158: 0x4503fff1  bc1tl       . + 4 + (-0xF << 2)
    ctx->pc = 0x2CD158u;
    {
        const bool branch_taken_0x2cd158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd158) {
            ctx->pc = 0x2CD15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD158u;
            // 0x2cd15c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd120;
        }
    }
    ctx->pc = 0x2CD160u;
    // 0x2cd160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD160u;
    {
        const bool branch_taken_0x2cd160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD160u;
        // 0x2cd164: 0x24041210  addiu       $a0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd160) {
            ctx->pc = 0x2CD16Cu;
            goto label_2cd16c;
        }
    }
    ctx->pc = 0x2CD168u;
label_2cd168:
    // 0x2cd168: 0x24041210  addiu       $a0, $zero, 0x1210
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
label_2cd16c:
    // 0x2cd16c: 0x25022488  addiu       $v0, $t0, 0x2488
    ctx->pc = 0x2cd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 9352));
    // 0x2cd170: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x2cd170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd174: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2cd174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cd178: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cd178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd17c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x2cd17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cd180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd184: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD184u;
    {
        const bool branch_taken_0x2cd184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD184u;
        // 0x2cd188: 0xac830ae4  sw          $v1, 0xAE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd184) {
            ctx->pc = 0x2CD1D8u;
            goto label_2cd1d8;
        }
    }
    ctx->pc = 0x2CD18Cu;
label_2cd18c:
    // 0x2cd18c: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x2cd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2cd190: 0x2402071c  addiu       $v0, $zero, 0x71C
    ctx->pc = 0x2cd190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x2cd194: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2cd194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cd198: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2cd198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cd19c: 0x2238018  mult        $s0, $s1, $v1
    ctx->pc = 0x2cd19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2cd1a0: 0x8f85b230  lw          $a1, -0x4DD0($gp)
    ctx->pc = 0x2cd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x2cd1a4: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2cd1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cd1a8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2cd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2cd1ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cd1b0: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x2cd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2cd1b4: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x2cd1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2cd1b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2cd1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cd1bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD1BCu;
    {
        const bool branch_taken_0x2cd1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1BCu;
        // 0x2cd1c0: 0xaca30ae4  sw          $v1, 0xAE4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1bc) {
            ctx->pc = 0x2CD1D8u;
            goto label_2cd1d8;
        }
    }
    ctx->pc = 0x2CD1C4u;
    // 0x2cd1c4: 0xc0b368a  jal         func_2CDA28
    ctx->pc = 0x2CD1C4u;
    SET_GPR_U32(ctx, 31, 0x2CD1CCu);
    ctx->pc = 0x2CD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1C4u;
    // 0x2cd1c8: 0x8ca40bcc  lw          $a0, 0xBCC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x2CD1C4u, 0x2CD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1CCu;
label_2cd1cc:
    // 0x2cd1cc: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2cd1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2cd1d0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2cd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2cd1d4: 0xac620ae4  sw          $v0, 0xAE4($v1)
    ctx->pc = 0x2cd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2788), GPR_U32(ctx, 2));
label_2cd1d8:
    // 0x2cd1d8: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2cd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2cd1dc: 0xc7809294  lwc1        $f0, -0x6D6C($gp)
    ctx->pc = 0x2cd1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd1e0: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2cd1e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cd1e4: 0x8f84b460  lw          $a0, -0x4BA0($gp)
    ctx->pc = 0x2cd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cd1e8: 0xe780b9dc  swc1        $f0, -0x4624($gp)
    ctx->pc = 0x2cd1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), bits); }
    // 0x2cd1ec: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2cd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cd1f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd1f4: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD1F4u;
    {
        const bool branch_taken_0x2cd1f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2CD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1F4u;
        // 0x2cd1f8: 0xac430ad4  sw          $v1, 0xAD4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1f4) {
            ctx->pc = 0x2CD218u;
            goto label_2cd218;
        }
    }
    ctx->pc = 0x2CD1FCu;
    // 0x2cd1fc: 0x240400dd  addiu       $a0, $zero, 0xDD
    ctx->pc = 0x2cd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x2cd200: 0xc081546  jal         func_205518
    ctx->pc = 0x2CD200u;
    SET_GPR_U32(ctx, 31, 0x2CD208u);
    ctx->pc = 0x2CD204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD200u;
    // 0x2cd204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CD200u, 0x2CD208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD208u;
label_2cd208:
    // 0x2cd208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD208u;
    {
        const bool branch_taken_0x2cd208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD208u;
        // 0x2cd20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd208) {
            ctx->pc = 0x2CD21Cu;
            goto label_2cd21c;
        }
    }
    ctx->pc = 0x2CD210u;
label_2cd210:
    // 0x2cd210: 0xc7809298  lwc1        $f0, -0x6D68($gp)
    ctx->pc = 0x2cd210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd214: 0xe780b9dc  swc1        $f0, -0x4624($gp)
    ctx->pc = 0x2cd214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949340), bits); }
label_2cd218:
    // 0x2cd218: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cd218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cd21c:
    // 0x2cd21c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2cd21cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cd220: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2cd220u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cd224: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2cd224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd228: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2cd228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd22c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2cd22cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd230: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2cd230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd234: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2cd234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cd238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd23c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2cd23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd240: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD240u;
        // 0x2cd244: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD248u;
}

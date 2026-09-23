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

// Function: frontMouseTick
// Address: 0x22c868 - 0x22c9e4
void frontMouseTick_0x22c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontMouseTick_0x22c868");
#endif

    switch (ctx->pc) {
        case 0x22c890u: goto label_22c890;
        case 0x22c8a0u: goto label_22c8a0;
        default: break;
    }

    ctx->pc = 0x22c868u;

    // 0x22c868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c86c: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x22c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22c870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c874: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x22c874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22c878: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22c87c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22c87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22c880: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x22C880u;
    {
        const bool branch_taken_0x22c880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C880u;
        // 0x22c884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c880) {
            ctx->pc = 0x22C9D4u;
            goto label_22c9d4;
        }
    }
    ctx->pc = 0x22C888u;
    // 0x22c888: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x22C888u;
    SET_GPR_U32(ctx, 31, 0x22C890u);
    ctx->pc = 0x22C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C888u;
    // 0x22c88c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x22C888u, 0x22C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C890u;
label_22c890:
    // 0x22c890: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22c890u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22c894: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c898: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x22C898u;
    SET_GPR_U32(ctx, 31, 0x22C8A0u);
    ctx->pc = 0x22C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C898u;
    // 0x22c89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x22C898u, 0x22C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8A0u;
label_22c8a0:
    // 0x22c8a0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x22c8a0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x22c8a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c8a8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22c8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c8ac: 0x0  nop
    ctx->pc = 0x22c8acu;
    // NOP
    // 0x22c8b0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x22C8B0u;
    {
        const bool branch_taken_0x22c8b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c8b0) {
            ctx->pc = 0x22C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C8B0u;
            // 0x22c8b4: 0x4600a047  neg.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C8D4u;
            goto label_22c8d4;
        }
    }
    ctx->pc = 0x22C8B8u;
    // 0x22c8b8: 0xc780817c  lwc1        $f0, -0x7E84($gp)
    ctx->pc = 0x22c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c8bc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22c8bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c8c0: 0x0  nop
    ctx->pc = 0x22c8c0u;
    // NOP
    // 0x22c8c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C8C4u;
    {
        const bool branch_taken_0x22c8c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8C4u;
        // 0x22c8c8: 0xc783b720  lwc1        $f3, -0x48E0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8c4) {
            ctx->pc = 0x22C8E8u;
            goto label_22c8e8;
        }
    }
    ctx->pc = 0x22C8CCu;
    // 0x22c8cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22C8CCu;
    {
        const bool branch_taken_0x22c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8cc) {
            ctx->pc = 0x22C908u;
            goto label_22c908;
        }
    }
    ctx->pc = 0x22C8D4u;
label_22c8d4:
    // 0x22c8d4: 0xc7808180  lwc1        $f0, -0x7E80($gp)
    ctx->pc = 0x22c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c8d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22c8d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c8dc: 0x0  nop
    ctx->pc = 0x22c8dcu;
    // NOP
    // 0x22c8e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22C8E0u;
    {
        const bool branch_taken_0x22c8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8E0u;
        // 0x22c8e4: 0xc783b720  lwc1        $f3, -0x48E0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8e0) {
            ctx->pc = 0x22C908u;
            goto label_22c908;
        }
    }
    ctx->pc = 0x22C8E8u;
label_22c8e8:
    // 0x22c8e8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x22c8ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c8f0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x22c8f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c8f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22C8F4u;
    {
        const bool branch_taken_0x22c8f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c8f4) {
            ctx->pc = 0x22C914u;
            goto label_22c914;
        }
    }
    ctx->pc = 0x22C8FCu;
    // 0x22c8fc: 0xc7808184  lwc1        $f0, -0x7E7C($gp)
    ctx->pc = 0x22c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22C900u;
    {
        const bool branch_taken_0x22c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C900u;
        // 0x22c904: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c900) {
            ctx->pc = 0x22C910u;
            goto label_22c910;
        }
    }
    ctx->pc = 0x22C908u;
label_22c908:
    // 0x22c908: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22c908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22c90c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22c90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22c910:
    // 0x22c910: 0xe783b720  swc1        $f3, -0x48E0($gp)
    ctx->pc = 0x22c910u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294948640), bits); }
label_22c914:
    // 0x22c914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c918: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x22c918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c91c: 0x0  nop
    ctx->pc = 0x22c91cu;
    // NOP
    // 0x22c920: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x22C920u;
    {
        const bool branch_taken_0x22c920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c920) {
            ctx->pc = 0x22C924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C920u;
            // 0x22c924: 0x46002047  neg.s       $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C944u;
            goto label_22c944;
        }
    }
    ctx->pc = 0x22C928u;
    // 0x22c928: 0xc7808188  lwc1        $f0, -0x7E78($gp)
    ctx->pc = 0x22c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c92c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x22c92cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c930: 0x0  nop
    ctx->pc = 0x22c930u;
    // NOP
    // 0x22c934: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C934u;
    {
        const bool branch_taken_0x22c934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C934u;
        // 0x22c938: 0xc782b724  lwc1        $f2, -0x48DC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c934) {
            ctx->pc = 0x22C958u;
            goto label_22c958;
        }
    }
    ctx->pc = 0x22C93Cu;
    // 0x22c93c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22C93Cu;
    {
        const bool branch_taken_0x22c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c93c) {
            ctx->pc = 0x22C97Cu;
            goto label_22c97c;
        }
    }
    ctx->pc = 0x22C944u;
label_22c944:
    // 0x22c944: 0xc780818c  lwc1        $f0, -0x7E74($gp)
    ctx->pc = 0x22c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c948: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22c948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c94c: 0x0  nop
    ctx->pc = 0x22c94cu;
    // NOP
    // 0x22c950: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22C950u;
    {
        const bool branch_taken_0x22c950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C950u;
        // 0x22c954: 0xc782b724  lwc1        $f2, -0x48DC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c950) {
            ctx->pc = 0x22C97Cu;
            goto label_22c97c;
        }
    }
    ctx->pc = 0x22C958u;
label_22c958:
    // 0x22c958: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x22c958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x22c95c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c960: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x22c960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c964: 0x0  nop
    ctx->pc = 0x22c964u;
    // NOP
    // 0x22c968: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x22C968u;
    {
        const bool branch_taken_0x22c968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c968) {
            ctx->pc = 0x22C96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C968u;
            // 0x22c96c: 0x4603a042  mul.s       $f1, $f20, $f3 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C98Cu;
            goto label_22c98c;
        }
    }
    ctx->pc = 0x22C970u;
    // 0x22c970: 0xc7808190  lwc1        $f0, -0x7E70($gp)
    ctx->pc = 0x22c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22C974u;
    {
        const bool branch_taken_0x22c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C974u;
        // 0x22c978: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c974) {
            ctx->pc = 0x22C984u;
            goto label_22c984;
        }
    }
    ctx->pc = 0x22C97Cu;
label_22c97c:
    // 0x22c97c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22c97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22c980: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22c980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c984:
    // 0x22c984: 0xe782b724  swc1        $f2, -0x48DC($gp)
    ctx->pc = 0x22c984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294948644), bits); }
    // 0x22c988: 0x4603a042  mul.s       $f1, $f20, $f3
    ctx->pc = 0x22c988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_22c98c:
    // 0x22c98c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x22c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22c990: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x22c990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x22c994: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x22c994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x22c998: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22c998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22c99c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x22c99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x22c9a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22c9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22c9a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22c9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x22c9a8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x22c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x22c9ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22c9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22c9b0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x22c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x22c9b4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22c9b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x22c9b8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x22c9b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x22c9bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22c9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22c9c0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x22c9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x22c9c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22c9c8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x22c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22c9cc: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x22c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x22c9d0: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x22c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_22c9d4:
    // 0x22c9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c9d8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x22c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9DCu;
        // 0x22c9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C9E4u;
}

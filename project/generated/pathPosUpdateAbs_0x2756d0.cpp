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

// Function: pathPosUpdateAbs
// Address: 0x2756d0 - 0x275b84
void pathPosUpdateAbs_0x2756d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pathPosUpdateAbs_0x2756d0");
#endif

    switch (ctx->pc) {
        case 0x275748u: goto label_275748;
        case 0x2757e8u: goto label_2757e8;
        case 0x2758fcu: goto label_2758fc;
        case 0x27591cu: goto label_27591c;
        case 0x275994u: goto label_275994;
        case 0x275a4cu: goto label_275a4c;
        case 0x275a6cu: goto label_275a6c;
        case 0x275ae0u: goto label_275ae0;
        case 0x275b14u: goto label_275b14;
        default: break;
    }

    ctx->pc = 0x2756d0u;

    // 0x2756d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2756d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2756d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2756d8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2756d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2756dc: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2756dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2756e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2756e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2756e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2756e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2756e8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2756e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2756ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2756ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2756f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2756f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756f4: 0xe7bf00a8  swc1        $f31, 0xA8($sp)
    ctx->pc = 0x2756f4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2756f8: 0xe7be00a0  swc1        $f30, 0xA0($sp)
    ctx->pc = 0x2756f8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2756fc: 0xe7bd0098  swc1        $f29, 0x98($sp)
    ctx->pc = 0x2756fcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x275700: 0xe7bc0090  swc1        $f28, 0x90($sp)
    ctx->pc = 0x275700u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x275704: 0xe7bb0088  swc1        $f27, 0x88($sp)
    ctx->pc = 0x275704u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x275708: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x275708u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27570c: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x27570cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x275710: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x275710u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x275714: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x275714u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x275718: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x275718u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27571c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x27571cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x275720: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x275720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x275724: 0x45000105  bc1f        . + 4 + (0x105 << 2)
    ctx->pc = 0x275724u;
    {
        const bool branch_taken_0x275724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275724u;
        // 0x275728: 0x8e510160  lw          $s1, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275724) {
            ctx->pc = 0x275B3Cu;
            goto label_275b3c;
        }
    }
    ctx->pc = 0x27572Cu;
    // 0x27572c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x27572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x275730: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x275730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x275734: 0x460007c6  mov.s       $f31, $f0
    ctx->pc = 0x275734u;
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    // 0x275738: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x275738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27573c: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x27573cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x275740: 0xc79d85ec  lwc1        $f29, -0x7A14($gp)
    ctx->pc = 0x275740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x275744: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x275744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_275748:
    // 0x275748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27574c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275750: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x275750u;
    {
        const bool branch_taken_0x275750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x275754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275750u;
        // 0x275754: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275750) {
            ctx->pc = 0x27588Cu;
            goto label_27588c;
        }
    }
    ctx->pc = 0x275758u;
    // 0x275758: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x275758u;
    {
        const bool branch_taken_0x275758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275758) {
            ctx->pc = 0x27575Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275758u;
            // 0x27575c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275770u;
            goto label_275770;
        }
    }
    ctx->pc = 0x275760u;
    // 0x275760: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x275760u;
    {
        const bool branch_taken_0x275760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x275760) {
            ctx->pc = 0x275764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275760u;
            // 0x275764: 0xc6400030  lwc1        $f0, 0x30($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x275788u;
            goto label_275788;
        }
    }
    ctx->pc = 0x275768u;
    // 0x275768: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x275768u;
    {
        const bool branch_taken_0x275768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275768) {
            ctx->pc = 0x275B2Cu;
            goto label_275b2c;
        }
    }
    ctx->pc = 0x275770u;
label_275770:
    // 0x275770: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x275770u;
    {
        const bool branch_taken_0x275770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x275774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275770u;
        // 0x275774: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275770) {
            ctx->pc = 0x2759B4u;
            goto label_2759b4;
        }
    }
    ctx->pc = 0x275778u;
    // 0x275778: 0x106200eb  beq         $v1, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x275778u;
    {
        const bool branch_taken_0x275778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x275778) {
            ctx->pc = 0x275B28u;
            goto label_275b28;
        }
    }
    ctx->pc = 0x275780u;
    // 0x275780: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x275780u;
    {
        const bool branch_taken_0x275780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275780) {
            ctx->pc = 0x275B2Cu;
            goto label_275b2c;
        }
    }
    ctx->pc = 0x275788u;
label_275788:
    // 0x275788: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x275788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27578c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x27578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275790: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x275790u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x275794: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x275794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275798: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x275798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27579c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27579cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2757a0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2757a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2757a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2757a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2757a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2757a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2757ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2757acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2757b0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2757b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2757b4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2757b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2757b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2757b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2757bc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2757bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2757c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2757c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2757c4: 0x0  nop
    ctx->pc = 0x2757c4u;
    // NOP
    // 0x2757c8: 0x0  nop
    ctx->pc = 0x2757c8u;
    // NOP
    // 0x2757cc: 0x46020304  c1          0x20304
    ctx->pc = 0x2757ccu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[2]);
    // 0x2757d0: 0x460c6032  c.eq.s      $f12, $f12
    ctx->pc = 0x2757d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2757d4: 0x0  nop
    ctx->pc = 0x2757d4u;
    // NOP
    // 0x2757d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2757D8u;
    {
        const bool branch_taken_0x2757d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2757DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757D8u;
        // 0x2757dc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757d8) {
            ctx->pc = 0x2757ECu;
            goto label_2757ec;
        }
    }
    ctx->pc = 0x2757E0u;
    // 0x2757e0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2757E0u;
    SET_GPR_U32(ctx, 31, 0x2757E8u);
    ctx->pc = 0x2757E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757E0u;
    // 0x2757e4: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2757E0u, 0x2757E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757E8u;
label_2757e8:
    // 0x2757e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2757e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2757ec:
    // 0x2757ec: 0x46166034  c.lt.s      $f12, $f22
    ctx->pc = 0x2757ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2757f0: 0x0  nop
    ctx->pc = 0x2757f0u;
    // NOP
    // 0x2757f4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2757F4u;
    {
        const bool branch_taken_0x2757f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2757F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757F4u;
        // 0x2757f8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757f4) {
            ctx->pc = 0x275828u;
            goto label_275828;
        }
    }
    ctx->pc = 0x2757FCu;
    // 0x2757fc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2757fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275800: 0x460cb581  sub.s       $f22, $f22, $f12
    ctx->pc = 0x275800u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x275804: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x275804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275808: 0x2462002c  addiu       $v0, $v1, 0x2C
    ctx->pc = 0x275808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x27580c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x27580cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x275810: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x275810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x275814: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x275814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275818: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x275818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x27581c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x27581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275820: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x275820u;
    {
        const bool branch_taken_0x275820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275820u;
        // 0x275824: 0xe6410038  swc1        $f1, 0x38($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275820) {
            ctx->pc = 0x275B2Cu;
            goto label_275b2c;
        }
    }
    ctx->pc = 0x275828u;
label_275828:
    // 0x275828: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x275828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27582c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x27582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275830: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x275830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x275834: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x275834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x275838: 0xc6450030  lwc1        $f5, 0x30($s2)
    ctx->pc = 0x275838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27583c: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x27583cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x275840: 0xc6440034  lwc1        $f4, 0x34($s2)
    ctx->pc = 0x275840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275844: 0x0  nop
    ctx->pc = 0x275844u;
    // NOP
    // 0x275848: 0x0  nop
    ctx->pc = 0x275848u;
    // NOP
    // 0x27584c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x27584cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x275850: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x275850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275854: 0x0  nop
    ctx->pc = 0x275854u;
    // NOP
    // 0x275858: 0x0  nop
    ctx->pc = 0x275858u;
    // NOP
    // 0x27585c: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x27585cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[12];
    // 0x275860: 0x0  nop
    ctx->pc = 0x275860u;
    // NOP
    // 0x275864: 0x0  nop
    ctx->pc = 0x275864u;
    // NOP
    // 0x275868: 0x460c1083  div.s       $f2, $f2, $f12
    ctx->pc = 0x275868u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[12];
    // 0x27586c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x27586cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x275870: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x275870u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x275874: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x275874u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x275878: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x275878u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x27587c: 0xe6450030  swc1        $f5, 0x30($s2)
    ctx->pc = 0x27587cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x275880: 0xe6440034  swc1        $f4, 0x34($s2)
    ctx->pc = 0x275880u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x275884: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x275884u;
    {
        const bool branch_taken_0x275884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275884u;
        // 0x275888: 0xe6430038  swc1        $f3, 0x38($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275884) {
            ctx->pc = 0x275B2Cu;
            goto label_275b2c;
        }
    }
    ctx->pc = 0x27588Cu;
label_27588c:
    // 0x27588c: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x27588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275890: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x275890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275894: 0x46006541  sub.s       $f21, $f12, $f0
    ctx->pc = 0x275894u;
    ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x275898: 0x461fa834  c.lt.s      $f21, $f31
    ctx->pc = 0x275898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[31])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27589c: 0x0  nop
    ctx->pc = 0x27589cu;
    // NOP
    // 0x2758a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2758A0u;
    {
        const bool branch_taken_0x2758a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2758a0) {
            ctx->pc = 0x2758A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2758A0u;
            // 0x2758a4: 0x461ead40  add.s       $f21, $f21, $f30 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2758A8u;
            goto label_2758a8;
        }
    }
    ctx->pc = 0x2758A8u;
label_2758a8:
    // 0x2758a8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2758a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2758ac: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2758acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2758b0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2758b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2758b4: 0x0  nop
    ctx->pc = 0x2758b4u;
    // NOP
    // 0x2758b8: 0x0  nop
    ctx->pc = 0x2758b8u;
    // NOP
    // 0x2758bc: 0x461aa843  div.s       $f1, $f21, $f26
    ctx->pc = 0x2758bcu;
    if (ctx->f[26] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[26];
    // 0x2758c0: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x2758c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x2758c4: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x2758c4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2758c8: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x2758c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2758cc: 0x0  nop
    ctx->pc = 0x2758ccu;
    // NOP
    // 0x2758d0: 0x4503004c  bc1tl       . + 4 + (0x4C << 2)
    ctx->pc = 0x2758D0u;
    {
        const bool branch_taken_0x2758d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2758d0) {
            ctx->pc = 0x2758D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2758D0u;
            // 0x2758d4: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A04u;
            goto label_275a04;
        }
    }
    ctx->pc = 0x2758D8u;
    // 0x2758d8: 0xc79885f0  lwc1        $f24, -0x7A10($gp)
    ctx->pc = 0x2758d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2758dc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2758dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2758e0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2758e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2758e4: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x2758e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x2758e8: 0x0  nop
    ctx->pc = 0x2758e8u;
    // NOP
    // 0x2758ec: 0x0  nop
    ctx->pc = 0x2758ecu;
    // NOP
    // 0x2758f0: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x2758f0u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x2758f4: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2758F4u;
    SET_GPR_U32(ctx, 31, 0x2758FCu);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2758F4u, 0x2758FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758FCu;
label_2758fc:
    // 0x2758fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2758fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275900: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x275900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275904: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x275904u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x275908: 0x0  nop
    ctx->pc = 0x275908u;
    // NOP
    // 0x27590c: 0x0  nop
    ctx->pc = 0x27590cu;
    // NOP
    // 0x275910: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x275910u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x275914: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x275914u;
    SET_GPR_U32(ctx, 31, 0x27591Cu);
    ctx->pc = 0x275918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275914u;
    // 0x275918: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x275914u, 0x27591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27591Cu;
label_27591c:
    // 0x27591c: 0x4615b0c2  mul.s       $f3, $f22, $f21
    ctx->pc = 0x27591cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x275920: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x275920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275924: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x275924u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x275928: 0xc6250038  lwc1        $f5, 0x38($s1)
    ctx->pc = 0x275928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27592c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x27592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275930: 0x0  nop
    ctx->pc = 0x275930u;
    // NOP
    // 0x275934: 0x0  nop
    ctx->pc = 0x275934u;
    // NOP
    // 0x275938: 0x461718c3  div.s       $f3, $f3, $f23
    ctx->pc = 0x275938u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[23];
    // 0x27593c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x27593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275940: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x275940u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x275944: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x275944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275948: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x275948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27594c: 0x46141540  add.s       $f21, $f2, $f20
    ctx->pc = 0x27594cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x275950: 0x46012500  add.s       $f20, $f4, $f1
    ctx->pc = 0x275950u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x275954: 0x46032800  add.s       $f0, $f5, $f3
    ctx->pc = 0x275954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x275958: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x275958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27595c: 0x0  nop
    ctx->pc = 0x27595cu;
    // NOP
    // 0x275960: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x275960u;
    {
        const bool branch_taken_0x275960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275960u;
        // 0x275964: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275960) {
            ctx->pc = 0x275970u;
            goto label_275970;
        }
    }
    ctx->pc = 0x275968u;
    // 0x275968: 0x461a0001  sub.s       $f0, $f0, $f26
    ctx->pc = 0x275968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x27596c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x27596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_275970:
    // 0x275970: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x275970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275974: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x275974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x275978: 0x461c6301  sub.s       $f12, $f12, $f28
    ctx->pc = 0x275978u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[28]);
    // 0x27597c: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x27597cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x275980: 0x0  nop
    ctx->pc = 0x275980u;
    // NOP
    // 0x275984: 0x0  nop
    ctx->pc = 0x275984u;
    // NOP
    // 0x275988: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x275988u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x27598c: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27598Cu;
    SET_GPR_U32(ctx, 31, 0x275994u);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27598Cu, 0x275994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275994u;
label_275994:
    // 0x275994: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x275994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275998: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x275998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27599c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27599cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2759a0: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x2759a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2759a4: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x2759a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2759a8: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x2759a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2759ac: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2759ACu;
    {
        const bool branch_taken_0x2759ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759ACu;
        // 0x2759b0: 0x461c6301  sub.s       $f12, $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759ac) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x2759B4u;
label_2759b4:
    // 0x2759b4: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2759b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2759b8: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x2759b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2759bc: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x2759bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2759c0: 0x460c0541  sub.s       $f21, $f0, $f12
    ctx->pc = 0x2759c0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2759c4: 0x461aa834  c.lt.s      $f21, $f26
    ctx->pc = 0x2759c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2759c8: 0x0  nop
    ctx->pc = 0x2759c8u;
    // NOP
    // 0x2759cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2759CCu;
    {
        const bool branch_taken_0x2759cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2759cc) {
            ctx->pc = 0x2759D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2759CCu;
            // 0x2759d0: 0x461ead40  add.s       $f21, $f21, $f30 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2759D4u;
            goto label_2759d4;
        }
    }
    ctx->pc = 0x2759D4u;
label_2759d4:
    // 0x2759d4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2759d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2759d8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x2759d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x2759dc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2759dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2759e0: 0x0  nop
    ctx->pc = 0x2759e0u;
    // NOP
    // 0x2759e4: 0x0  nop
    ctx->pc = 0x2759e4u;
    // NOP
    // 0x2759e8: 0x461ba843  div.s       $f1, $f21, $f27
    ctx->pc = 0x2759e8u;
    if (ctx->f[27] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[27];
    // 0x2759ec: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x2759ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x2759f0: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x2759f0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2759f4: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x2759f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2759f8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2759F8u;
    {
        const bool branch_taken_0x2759f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2759f8) {
            ctx->pc = 0x275A28u;
            goto label_275a28;
        }
    }
    ctx->pc = 0x275A00u;
    // 0x275a00: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x275a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275a04:
    // 0x275a04: 0x2482002c  addiu       $v0, $a0, 0x2C
    ctx->pc = 0x275a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x275a08: 0x4617b581  sub.s       $f22, $f22, $f23
    ctx->pc = 0x275a08u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x275a0c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x275a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x275a10: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x275a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x275a14: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x275a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a18: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x275a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x275a1c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x275a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a20: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x275A20u;
    {
        const bool branch_taken_0x275a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A20u;
        // 0x275a24: 0xe6410038  swc1        $f1, 0x38($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a20) {
            ctx->pc = 0x275B2Cu;
            goto label_275b2c;
        }
    }
    ctx->pc = 0x275A28u;
label_275a28:
    // 0x275a28: 0xc79885f4  lwc1        $f24, -0x7A0C($gp)
    ctx->pc = 0x275a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x275a2c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x275a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x275a30: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x275a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x275a34: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x275a34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x275a38: 0x0  nop
    ctx->pc = 0x275a38u;
    // NOP
    // 0x275a3c: 0x0  nop
    ctx->pc = 0x275a3cu;
    // NOP
    // 0x275a40: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x275a40u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x275a44: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x275A44u;
    SET_GPR_U32(ctx, 31, 0x275A4Cu);
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x275A44u, 0x275A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A4Cu;
label_275a4c:
    // 0x275a4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x275a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275a50: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x275a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275a54: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x275a54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x275a58: 0x0  nop
    ctx->pc = 0x275a58u;
    // NOP
    // 0x275a5c: 0x0  nop
    ctx->pc = 0x275a5cu;
    // NOP
    // 0x275a60: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x275a60u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x275a64: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x275A64u;
    SET_GPR_U32(ctx, 31, 0x275A6Cu);
    ctx->pc = 0x275A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A64u;
    // 0x275a68: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x275A64u, 0x275A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A6Cu;
label_275a6c:
    // 0x275a6c: 0x4615b0c2  mul.s       $f3, $f22, $f21
    ctx->pc = 0x275a6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x275a70: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x275a70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275a74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x275a74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x275a78: 0xc6250038  lwc1        $f5, 0x38($s1)
    ctx->pc = 0x275a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275a7c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x275a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a80: 0x0  nop
    ctx->pc = 0x275a80u;
    // NOP
    // 0x275a84: 0x0  nop
    ctx->pc = 0x275a84u;
    // NOP
    // 0x275a88: 0x461718c3  div.s       $f3, $f3, $f23
    ctx->pc = 0x275a88u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[23];
    // 0x275a8c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x275a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275a90: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x275a90u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x275a94: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x275a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275a98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x275a98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275a9c: 0x46141540  add.s       $f21, $f2, $f20
    ctx->pc = 0x275a9cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x275aa0: 0x46012500  add.s       $f20, $f4, $f1
    ctx->pc = 0x275aa0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x275aa4: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x275aa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x275aa8: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x275aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275aac: 0x0  nop
    ctx->pc = 0x275aacu;
    // NOP
    // 0x275ab0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x275AB0u;
    {
        const bool branch_taken_0x275ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AB0u;
        // 0x275ab4: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ab0) {
            ctx->pc = 0x275AC0u;
            goto label_275ac0;
        }
    }
    ctx->pc = 0x275AB8u;
    // 0x275ab8: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x275ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x275abc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x275abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_275ac0:
    // 0x275ac0: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x275ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275ac4: 0x461c6300  add.s       $f12, $f12, $f28
    ctx->pc = 0x275ac4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
    // 0x275ac8: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x275ac8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x275acc: 0x0  nop
    ctx->pc = 0x275accu;
    // NOP
    // 0x275ad0: 0x0  nop
    ctx->pc = 0x275ad0u;
    // NOP
    // 0x275ad4: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x275ad4u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x275ad8: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x275AD8u;
    SET_GPR_U32(ctx, 31, 0x275AE0u);
    ctx->pc = 0x275ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275AD8u;
    // 0x275adc: 0x4600d586  mov.s       $f22, $f26 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x275AD8u, 0x275AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AE0u;
label_275ae0:
    // 0x275ae0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x275ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275ae4: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x275ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x275ae8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x275ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275aec: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x275aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x275af0: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x275af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x275af4: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x275af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275af8: 0x461c6300  add.s       $f12, $f12, $f28
    ctx->pc = 0x275af8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[28]);
label_275afc:
    // 0x275afc: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x275afcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x275b00: 0x0  nop
    ctx->pc = 0x275b00u;
    // NOP
    // 0x275b04: 0x0  nop
    ctx->pc = 0x275b04u;
    // NOP
    // 0x275b08: 0x46196303  div.s       $f12, $f12, $f25
    ctx->pc = 0x275b08u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[25];
    // 0x275b0c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x275B0Cu;
    SET_GPR_U32(ctx, 31, 0x275B14u);
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x275B0Cu, 0x275B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B14u;
label_275b14:
    // 0x275b14: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x275b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x275b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275b1c: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x275b1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x275b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275B20u;
    {
        const bool branch_taken_0x275b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B20u;
        // 0x275b24: 0xe6410038  swc1        $f1, 0x38($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b20) {
            ctx->pc = 0x275B2Cu;
            goto label_275b2c;
        }
    }
    ctx->pc = 0x275B28u;
label_275b28:
    // 0x275b28: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x275b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_275b2c:
    // 0x275b2c: 0x4616f834  c.lt.s      $f31, $f22
    ctx->pc = 0x275b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[31], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275b30: 0x0  nop
    ctx->pc = 0x275b30u;
    // NOP
    // 0x275b34: 0x4503ff04  bc1tl       . + 4 + (-0xFC << 2)
    ctx->pc = 0x275B34u;
    {
        const bool branch_taken_0x275b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275b34) {
            ctx->pc = 0x275B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275B34u;
            // 0x275b38: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275748;
        }
    }
    ctx->pc = 0x275B3Cu;
label_275b3c:
    // 0x275b3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x275b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275b40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x275b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275b44: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x275b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275b48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x275b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275b4c: 0xc7bf00a8  lwc1        $f31, 0xA8($sp)
    ctx->pc = 0x275b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x275b50: 0xc7be00a0  lwc1        $f30, 0xA0($sp)
    ctx->pc = 0x275b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x275b54: 0xc7bd0098  lwc1        $f29, 0x98($sp)
    ctx->pc = 0x275b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x275b58: 0xc7bc0090  lwc1        $f28, 0x90($sp)
    ctx->pc = 0x275b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x275b5c: 0xc7bb0088  lwc1        $f27, 0x88($sp)
    ctx->pc = 0x275b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x275b60: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x275b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x275b64: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x275b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x275b68: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x275b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x275b6c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x275b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x275b70: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x275b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x275b74: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x275b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x275b78: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x275b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x275B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B7Cu;
        // 0x275b80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275B84u;
}

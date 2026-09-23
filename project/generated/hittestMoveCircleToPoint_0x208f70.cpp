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

// Function: hittestMoveCircleToPoint
// Address: 0x208f70 - 0x20914c
void hittestMoveCircleToPoint_0x208f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestMoveCircleToPoint_0x208f70");
#endif

    switch (ctx->pc) {
        case 0x20900cu: goto label_20900c;
        case 0x2090f4u: goto label_2090f4;
        default: break;
    }

    ctx->pc = 0x208f70u;

    // 0x208f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208f74: 0x460c8881  sub.s       $f2, $f17, $f12
    ctx->pc = 0x208f74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[17], ctx->f[12]);
    // 0x208f78: 0x460d9481  sub.s       $f18, $f18, $f13
    ctx->pc = 0x208f78u;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[13]);
    // 0x208f7c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x208f7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x208f80: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x208f80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x208f84: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x208f84u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x208f88: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x208f88u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x208f8c: 0x46181042  mul.s       $f1, $f2, $f24
    ctx->pc = 0x208f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x208f90: 0x46179002  mul.s       $f0, $f18, $f23
    ctx->pc = 0x208f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[23]);
    // 0x208f94: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x208f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x208f98: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x208f98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x208f9c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x208f9cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x208fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208fa4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x208fa4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x208fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208fac: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x208facu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x208fb0: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x208fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208fb4: 0x0  nop
    ctx->pc = 0x208fb4u;
    // NOP
    // 0x208fb8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x208FB8u;
    {
        const bool branch_taken_0x208fb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FB8u;
        // 0x208fbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fb8) {
            ctx->pc = 0x209088u;
            goto label_209088;
        }
    }
    ctx->pc = 0x208FC0u;
    // 0x208fc0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x208fc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x208fc4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x208fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208fc8: 0x0  nop
    ctx->pc = 0x208fc8u;
    // NOP
    // 0x208fcc: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x208FCCu;
    {
        const bool branch_taken_0x208fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FCCu;
        // 0x208fd0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fcc) {
            ctx->pc = 0x20908Cu;
            goto label_20908c;
        }
    }
    ctx->pc = 0x208FD4u;
    // 0x208fd4: 0x4614b041  sub.s       $f1, $f22, $f20
    ctx->pc = 0x208fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x208fd8: 0x4614b0c0  add.s       $f3, $f22, $f20
    ctx->pc = 0x208fd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x208fdc: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x208fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x208fe0: 0x46189002  mul.s       $f0, $f18, $f24
    ctx->pc = 0x208fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[24]);
    // 0x208fe4: 0x46011b02  mul.s       $f12, $f3, $f1
    ctx->pc = 0x208fe4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x208fe8: 0x0  nop
    ctx->pc = 0x208fe8u;
    // NOP
    // 0x208fec: 0x0  nop
    ctx->pc = 0x208fecu;
    // NOP
    // 0x208ff0: 0x460c0044  c1          0xC0044
    ctx->pc = 0x208ff0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x208ff4: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x208ff4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208ff8: 0x0  nop
    ctx->pc = 0x208ff8u;
    // NOP
    // 0x208ffc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x208FFCu;
    {
        const bool branch_taken_0x208ffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FFCu;
        // 0x209000: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ffc) {
            ctx->pc = 0x209010u;
            goto label_209010;
        }
    }
    ctx->pc = 0x209004u;
    // 0x209004: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x209004u;
    SET_GPR_U32(ctx, 31, 0x20900Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x209004u, 0x20900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20900Cu;
label_20900c:
    // 0x20900c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x20900cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_209010:
    // 0x209010: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x209010u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x209014: 0xc7808018  lwc1        $f0, -0x7FE8($gp)
    ctx->pc = 0x209014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209018: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x209018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20901c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20901Cu;
    {
        const bool branch_taken_0x20901c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20901c) {
            ctx->pc = 0x209038u;
            goto label_209038;
        }
    }
    ctx->pc = 0x209024u;
    // 0x209024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209028: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x209028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20902c: 0x0  nop
    ctx->pc = 0x20902cu;
    // NOP
    // 0x209030: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x209030u;
    {
        const bool branch_taken_0x209030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209030) {
            ctx->pc = 0x209034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209030u;
            // 0x209034: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209038u;
            goto label_209038;
        }
    }
    ctx->pc = 0x209038u;
label_209038:
    // 0x209038: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x209038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20903c: 0x4604a834  c.lt.s      $f21, $f4
    ctx->pc = 0x20903cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209040: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x209040u;
    {
        const bool branch_taken_0x209040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209040) {
            ctx->pc = 0x209094u;
            goto label_209094;
        }
    }
    ctx->pc = 0x209048u;
    // 0x209048: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x209048u;
    {
        const bool branch_taken_0x209048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x209048) {
            ctx->pc = 0x20904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209048u;
            // 0x20904c: 0x4615a842  mul.s       $f1, $f21, $f21 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x209064u;
            goto label_209064;
        }
    }
    ctx->pc = 0x209050u;
    // 0x209050: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x209050u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
    // 0x209054: 0x4600c047  neg.s       $f1, $f24
    ctx->pc = 0x209054u;
    ctx->f[1] = FPU_NEG_S(ctx->f[24]);
    // 0x209058: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x209058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20905c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x20905cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x209060: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x209060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_209064:
    // 0x209064: 0xc783801c  lwc1        $f3, -0x7FE4($gp)
    ctx->pc = 0x209064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x209068: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x209068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x20906c: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x20906cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x209070: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x209070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x209074: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x209074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x209078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20907c: 0x0  nop
    ctx->pc = 0x20907cu;
    // NOP
    // 0x209080: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x209080u;
    {
        const bool branch_taken_0x209080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209080u;
        // 0x209084: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209080) {
            ctx->pc = 0x209128u;
            goto label_209128;
        }
    }
    ctx->pc = 0x209088u;
label_209088:
    // 0x209088: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_20908c:
    // 0x20908c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20908Cu;
    {
        const bool branch_taken_0x20908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20908Cu;
        // 0x209090: 0xc440e440  lwc1        $f0, -0x1BC0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20908c) {
            ctx->pc = 0x209128u;
            goto label_209128;
        }
    }
    ctx->pc = 0x209094u;
label_209094:
    // 0x209094: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x209094u;
    {
        const bool branch_taken_0x209094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209094u;
        // 0x209098: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209094) {
            ctx->pc = 0x209128u;
            goto label_209128;
        }
    }
    ctx->pc = 0x20909Cu;
    // 0x20909c: 0x46180802  mul.s       $f0, $f1, $f24
    ctx->pc = 0x20909cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2090a0: 0x4600b887  neg.s       $f2, $f23
    ctx->pc = 0x2090a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[23]);
    // 0x2090a4: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2090a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2090a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2090a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2090ac: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2090acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2090b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2090b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2090b4: 0x4618a0c2  mul.s       $f3, $f20, $f24
    ctx->pc = 0x2090b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2090b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2090b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2090bc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2090bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2090c0: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x2090c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2090c4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2090c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2090c8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2090c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2090cc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2090ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2090d0: 0x46041300  add.s       $f12, $f2, $f4
    ctx->pc = 0x2090d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2090d4: 0x0  nop
    ctx->pc = 0x2090d4u;
    // NOP
    // 0x2090d8: 0x0  nop
    ctx->pc = 0x2090d8u;
    // NOP
    // 0x2090dc: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2090dcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2090e0: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2090e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2090e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2090E4u;
    {
        const bool branch_taken_0x2090e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2090e4) {
            ctx->pc = 0x2090F8u;
            goto label_2090f8;
        }
    }
    ctx->pc = 0x2090ECu;
    // 0x2090ec: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2090ECu;
    SET_GPR_U32(ctx, 31, 0x2090F4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2090ECu, 0x2090F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090F4u;
label_2090f4:
    // 0x2090f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2090f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2090f8:
    // 0x2090f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2090f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2090fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2090fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209100: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x209100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209104: 0x0  nop
    ctx->pc = 0x209104u;
    // NOP
    // 0x209108: 0x0  nop
    ctx->pc = 0x209108u;
    // NOP
    // 0x20910c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20910cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x209110: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x209110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209114: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x209114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x209118: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x209118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20911c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x20911cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x209120: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x209120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x209124: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x209124u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_209128:
    // 0x209128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20912c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20912cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209130: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x209130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x209134: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x209134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x209138: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x209138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20913c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x20913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209140: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x209140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209144: 0x3e00008  jr          $ra
    ctx->pc = 0x209144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209144u;
        // 0x209148: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20914Cu;
}

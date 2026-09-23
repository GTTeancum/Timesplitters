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

// Function: enemyCheckHealth
// Address: 0x2c5140 - 0x2c537c
void enemyCheckHealth_0x2c5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyCheckHealth_0x2c5140");
#endif

    switch (ctx->pc) {
        case 0x2c51acu: goto label_2c51ac;
        case 0x2c5210u: goto label_2c5210;
        case 0x2c528cu: goto label_2c528c;
        default: break;
    }

    ctx->pc = 0x2c5140u;

    // 0x2c5140: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c5140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c5144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5148: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c5148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c514c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2c514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c5150: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c5150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c5154: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2c5154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2c5158: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c5158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c515c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2c515cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c5160: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c5160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c5164: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2c5164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c5168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c5168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c516c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c5170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c5170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5174: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c5178: 0x8e740160  lw          $s4, 0x160($s3)
    ctx->pc = 0x2c5178u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x2c517c: 0xc6620208  lwc1        $f2, 0x208($s3)
    ctx->pc = 0x2c517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5180: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2c5180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5184: 0xc781917c  lwc1        $f1, -0x6E84($gp)
    ctx->pc = 0x2c5184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5188: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c5188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c518c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c518cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c5190: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x2c5190u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c5194: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2c5194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5198: 0x0  nop
    ctx->pc = 0x2c5198u;
    // NOP
    // 0x2c519c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2C519Cu;
    {
        const bool branch_taken_0x2c519c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C519Cu;
        // 0x2c51a0: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c519c) {
            ctx->pc = 0x2C51F4u;
            goto label_2c51f4;
        }
    }
    ctx->pc = 0x2C51A4u;
    // 0x2c51a4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2C51A4u;
    SET_GPR_U32(ctx, 31, 0x2C51ACu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2C51A4u, 0x2C51ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51ACu;
label_2c51ac:
    // 0x2c51ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C51ACu;
    {
        const bool branch_taken_0x2c51ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51ACu;
        // 0x2c51b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51ac) {
            ctx->pc = 0x2C51C0u;
            goto label_2c51c0;
        }
    }
    ctx->pc = 0x2C51B4u;
    // 0x2c51b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c51b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c51b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C51B8u;
    {
        const bool branch_taken_0x2c51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51B8u;
        // 0x2c51bc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51b8) {
            ctx->pc = 0x2C51D4u;
            goto label_2c51d4;
        }
    }
    ctx->pc = 0x2C51C0u;
label_2c51c0:
    // 0x2c51c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c51c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c51c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c51c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c51c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c51cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c51ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c51d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c51d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c51d4:
    // 0x2c51d4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2c51d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2c51d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c51d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c51dc: 0xc6810b10  lwc1        $f1, 0xB10($s4)
    ctx->pc = 0x2c51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c51e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c51e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c51e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c51e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c51e8: 0x0  nop
    ctx->pc = 0x2c51e8u;
    // NOP
    // 0x2c51ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C51ECu;
    {
        const bool branch_taken_0x2c51ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51ECu;
        // 0x2c51f0: 0x8f85b4ec  lw          $a1, -0x4B14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51ec) {
            ctx->pc = 0x2C51FCu;
            goto label_2c51fc;
        }
    }
    ctx->pc = 0x2C51F4u;
label_2c51f4:
    // 0x2c51f4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2C51F4u;
    {
        const bool branch_taken_0x2c51f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51F4u;
        // 0x2c51f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51f4) {
            ctx->pc = 0x2C534Cu;
            goto label_2c534c;
        }
    }
    ctx->pc = 0x2C51FCu;
label_2c51fc:
    // 0x2c51fc: 0x18a00047  blez        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C51FCu;
    {
        const bool branch_taken_0x2c51fc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2C5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51FCu;
        // 0x2c5200: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51fc) {
            ctx->pc = 0x2C531Cu;
            goto label_2c531c;
        }
    }
    ctx->pc = 0x2C5204u;
    // 0x2c5204: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x2c5204u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x2c5208: 0x26a22320  addiu       $v0, $s5, 0x2320
    ctx->pc = 0x2c5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8992));
    // 0x2c520c: 0x0  nop
    ctx->pc = 0x2c520cu;
    // NOP
label_2c5210:
    // 0x2c5210: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x2c5210u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2c5214: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c5218: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c521c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5220: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c5224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c5228: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C5228u;
    {
        const bool branch_taken_0x2c5228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5228) {
            ctx->pc = 0x2C522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5228u;
            // 0x2c522c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5310u;
            goto label_2c5310;
        }
    }
    ctx->pc = 0x2C5230u;
    // 0x2c5230: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x2c5230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5234: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2c5234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5238: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x2c5238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c523c: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x2c523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5240: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c5240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c5244: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c5244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5248: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c5248u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c524c: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x2c524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5250: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c5254: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c5254u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c5258: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c5258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c525c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c525cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c5260: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5264: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2c5264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5268: 0x0  nop
    ctx->pc = 0x2c5268u;
    // NOP
    // 0x2c526c: 0x0  nop
    ctx->pc = 0x2c526cu;
    // NOP
    // 0x2c5270: 0x460c0044  c1          0xC0044
    ctx->pc = 0x2c5270u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x2c5274: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2c5274u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5278: 0x0  nop
    ctx->pc = 0x2c5278u;
    // NOP
    // 0x2c527c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2C527Cu;
    {
        const bool branch_taken_0x2c527c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c527c) {
            ctx->pc = 0x2C5280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C527Cu;
            // 0x2c5280: 0x8c630160  lw          $v1, 0x160($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C529Cu;
            goto label_2c529c;
        }
    }
    ctx->pc = 0x2C5284u;
    // 0x2c5284: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2C5284u;
    SET_GPR_U32(ctx, 31, 0x2C528Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2C5284u, 0x2C528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C528Cu;
label_2c528c:
    // 0x2c528c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5290: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c5290u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5294: 0x8f85b4ec  lw          $a1, -0x4B14($gp)
    ctx->pc = 0x2c5294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948076)));
    // 0x2c5298: 0x8c630160  lw          $v1, 0x160($v1)
    ctx->pc = 0x2c5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2c529c:
    // 0x2c529c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c52a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c52a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c52a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c52a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c52a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c52ac: 0x0  nop
    ctx->pc = 0x2c52acu;
    // NOP
    // 0x2c52b0: 0x0  nop
    ctx->pc = 0x2c52b0u;
    // NOP
    // 0x2c52b4: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2c52b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x2c52b8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C52B8u;
    {
        const bool branch_taken_0x2c52b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52B8u;
        // 0x2c52bc: 0xc6610208  lwc1        $f1, 0x208($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52b8) {
            ctx->pc = 0x2C52D0u;
            goto label_2c52d0;
        }
    }
    ctx->pc = 0x2C52C0u;
    // 0x2c52c0: 0xc7809180  lwc1        $f0, -0x6E80($gp)
    ctx->pc = 0x2c52c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c52c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c52c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c52c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C52C8u;
    {
        const bool branch_taken_0x2c52c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52c8) {
            ctx->pc = 0x2C52DCu;
            goto label_2c52dc;
        }
    }
    ctx->pc = 0x2C52D0u;
label_2c52d0:
    // 0x2c52d0: 0xc7809184  lwc1        $f0, -0x6E7C($gp)
    ctx->pc = 0x2c52d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c52d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c52d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c52d8: 0x0  nop
    ctx->pc = 0x2c52d8u;
    // NOP
label_2c52dc:
    // 0x2c52dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C52DCu;
    {
        const bool branch_taken_0x2c52dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c52dc) {
            ctx->pc = 0x2C52E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52DCu;
            // 0x2c52e0: 0x46021080  add.s       $f2, $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C52E4u;
            goto label_2c52e4;
        }
    }
    ctx->pc = 0x2C52E4u;
label_2c52e4:
    // 0x2c52e4: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2c52e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c52e8: 0x0  nop
    ctx->pc = 0x2c52e8u;
    // NOP
    // 0x2c52ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C52ECu;
    {
        const bool branch_taken_0x2c52ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52ECu;
        // 0x2c52f0: 0x26a22320  addiu       $v0, $s5, 0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52ec) {
            ctx->pc = 0x2C530Cu;
            goto label_2c530c;
        }
    }
    ctx->pc = 0x2C52F4u;
    // 0x2c52f4: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2c52f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2c52f8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2c52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c52fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c52fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c5300: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2c5300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c5304: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2c5304u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5308: 0xae840ae4  sw          $a0, 0xAE4($s4)
    ctx->pc = 0x2c5308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2788), GPR_U32(ctx, 4));
label_2c530c:
    // 0x2c530c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c530cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c5310:
    // 0x2c5310: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x2c5310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c5314: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2C5314u;
    {
        const bool branch_taken_0x2c5314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5314u;
        // 0x2c5318: 0x26a22320  addiu       $v0, $s5, 0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5314) {
            ctx->pc = 0x2C5210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5210;
        }
    }
    ctx->pc = 0x2C531Cu;
label_2c531c:
    // 0x2c531c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5320: 0x12c3000a  beq         $s6, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5320u;
    {
        const bool branch_taken_0x2c5320 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5320u;
        // 0x2c5324: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5320) {
            ctx->pc = 0x2C534Cu;
            goto label_2c534c;
        }
    }
    ctx->pc = 0x2C5328u;
    // 0x2c5328: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c532c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c532cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5330: 0xc7819188  lwc1        $f1, -0x6E78($gp)
    ctx->pc = 0x2c5330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5334: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2c5334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2c5338: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c5338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c533c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c533cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5340: 0x0  nop
    ctx->pc = 0x2c5340u;
    // NOP
    // 0x2c5344: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5344u;
    {
        const bool branch_taken_0x2c5344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5344) {
            ctx->pc = 0x2C5348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5344u;
            // 0x2c5348: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C534Cu;
            goto label_2c534c;
        }
    }
    ctx->pc = 0x2C534Cu;
label_2c534c:
    // 0x2c534c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5350: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2c5350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5354: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c5354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5358: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c5358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c535c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c535cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5360: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c5360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5364: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c5364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c5368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c536c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2c536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5370: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2c5370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5374: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5374u;
        // 0x2c5378: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C537Cu;
}

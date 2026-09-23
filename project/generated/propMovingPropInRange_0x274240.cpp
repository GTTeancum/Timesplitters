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

// Function: propMovingPropInRange
// Address: 0x274240 - 0x2743c4
void propMovingPropInRange_0x274240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propMovingPropInRange_0x274240");
#endif

    switch (ctx->pc) {
        case 0x2742a8u: goto label_2742a8;
        case 0x274370u: goto label_274370;
        default: break;
    }

    ctx->pc = 0x274240u;

    // 0x274240: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x274244: 0x8f86b15c  lw          $a2, -0x4EA4($gp)
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x274248: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x274248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27424c: 0x8f91a264  lw          $s1, -0x5D9C($gp)
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x274250: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x274250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x274254: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x274254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x274258: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x274258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27425c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x27425cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274264: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x274264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x274268: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x274268u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x27426c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x27426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x274270: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x274270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x274274: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x274274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x274278: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x274278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x27427c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x274280: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x274280u;
    {
        const bool branch_taken_0x274280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274280u;
        // 0x274284: 0xe7b500a8  swc1        $f21, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274280) {
            ctx->pc = 0x274390u;
            goto label_274390;
        }
    }
    ctx->pc = 0x274288u;
    // 0x274288: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x274288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x27428c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274290: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x274290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x274294: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x274294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x274298: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x274298u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x27429c: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x27429cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2742a0: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x2742a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2742a4: 0x0  nop
    ctx->pc = 0x2742a4u;
    // NOP
label_2742a8:
    // 0x2742a8: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x2742a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x2742ac: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2742b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2742b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2742b4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2742b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2742b8: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2742B8u;
    {
        const bool branch_taken_0x2742b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742b8) {
            ctx->pc = 0x2742BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2742B8u;
            // 0x2742bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274384u;
            goto label_274384;
        }
    }
    ctx->pc = 0x2742C0u;
    // 0x2742c0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2742c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2742c4: 0x14b50008  bne         $a1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2742C4u;
    {
        const bool branch_taken_0x2742c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x2742c4) {
            ctx->pc = 0x2742E8u;
            goto label_2742e8;
        }
    }
    ctx->pc = 0x2742CCu;
    // 0x2742cc: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2742ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2742d0: 0x8c420a9c  lw          $v0, 0xA9C($v0)
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x2742d4: 0x30432010  andi        $v1, $v0, 0x2010
    ctx->pc = 0x2742d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8208);
    // 0x2742d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2742D8u;
    {
        const bool branch_taken_0x2742d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742d8) {
            ctx->pc = 0x2742E8u;
            goto label_2742e8;
        }
    }
    ctx->pc = 0x2742E0u;
    // 0x2742e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2742E0u;
    {
        const bool branch_taken_0x2742e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742e0) {
            ctx->pc = 0x2742E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2742E0u;
            // 0x2742e4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2742F4u;
            goto label_2742f4;
        }
    }
    ctx->pc = 0x2742E8u;
label_2742e8:
    // 0x2742e8: 0x54b40026  bnel        $a1, $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x2742E8u;
    {
        const bool branch_taken_0x2742e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        if (branch_taken_0x2742e8) {
            ctx->pc = 0x2742ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2742E8u;
            // 0x2742ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274384u;
            goto label_274384;
        }
    }
    ctx->pc = 0x2742F0u;
    // 0x2742f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2742f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2742f4:
    // 0x2742f4: 0xc4820030  lwc1        $f2, 0x30($a0)
    ctx->pc = 0x2742f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2742f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2742f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2742fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2742fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x274300: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x274300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274304: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x274304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x274308: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x274308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27430c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x27430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274310: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x274310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x274314: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x274314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x274318: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x274318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27431c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27431cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x274320: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x274320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274324: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x274324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x274328: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x274328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27432c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x27432cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x274330: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x274330u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x274334: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x274334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274338: 0x0  nop
    ctx->pc = 0x274338u;
    // NOP
    // 0x27433c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x27433Cu;
    {
        const bool branch_taken_0x27433c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27433Cu;
        // 0x274340: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27433c) {
            ctx->pc = 0x274380u;
            goto label_274380;
        }
    }
    ctx->pc = 0x274344u;
    // 0x274344: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x274344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x274348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x274348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27434c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27434cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x274350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274354: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x274358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27435c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27435cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x274360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x274364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274368: 0xc09640e  jal         func_259038
    ctx->pc = 0x274368u;
    SET_GPR_U32(ctx, 31, 0x274370u);
    ctx->pc = 0x27436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274368u;
    // 0x27436c: 0x240bfffd  addiu       $t3, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x274368u, 0x274370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274370u;
label_274370:
    // 0x274370: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274370u;
    {
        const bool branch_taken_0x274370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274370u;
        // 0x274374: 0x8f86b15c  lw          $a2, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274370) {
            ctx->pc = 0x274380u;
            goto label_274380;
        }
    }
    ctx->pc = 0x274378u;
    // 0x274378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274378u;
    {
        const bool branch_taken_0x274378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274378u;
        // 0x27437c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274378) {
            ctx->pc = 0x274394u;
            goto label_274394;
        }
    }
    ctx->pc = 0x274380u;
label_274380:
    // 0x274380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x274380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_274384:
    // 0x274384: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x274384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x274388: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x274388u;
    {
        const bool branch_taken_0x274388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274388u;
        // 0x27438c: 0x26520250  addiu       $s2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274388) {
            ctx->pc = 0x2742A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2742a8;
        }
    }
    ctx->pc = 0x274390u;
label_274390:
    // 0x274390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274394:
    // 0x274394: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x274394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274398: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x274398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27439c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x27439cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2743a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2743a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2743a4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2743a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2743a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2743a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2743ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2743acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2743b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2743b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2743b4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2743b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2743b8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2743b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2743bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2743BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2743C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743BCu;
        // 0x2743c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2743BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2743C4u;
}

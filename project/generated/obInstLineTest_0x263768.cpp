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

// Function: obInstLineTest
// Address: 0x263768 - 0x263fec
void obInstLineTest_0x263768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstLineTest_0x263768");
#endif

    switch (ctx->pc) {
        case 0x2637f0u: goto label_2637f0;
        case 0x2638b8u: goto label_2638b8;
        case 0x2638ecu: goto label_2638ec;
        case 0x2638f8u: goto label_2638f8;
        case 0x263948u: goto label_263948;
        case 0x263a28u: goto label_263a28;
        case 0x263a34u: goto label_263a34;
        case 0x263a54u: goto label_263a54;
        case 0x263a9cu: goto label_263a9c;
        case 0x263aa8u: goto label_263aa8;
        case 0x263ab4u: goto label_263ab4;
        case 0x263b08u: goto label_263b08;
        case 0x263c4cu: goto label_263c4c;
        case 0x263c88u: goto label_263c88;
        case 0x263d0cu: goto label_263d0c;
        case 0x263dd4u: goto label_263dd4;
        case 0x263de0u: goto label_263de0;
        case 0x263df8u: goto label_263df8;
        case 0x263ec8u: goto label_263ec8;
        case 0x263f48u: goto label_263f48;
        case 0x263fa4u: goto label_263fa4;
        default: break;
    }

    ctx->pc = 0x263768u;

    // 0x263768: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x263768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x26376c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x26376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x263770: 0xe7b502c8  swc1        $f21, 0x2C8($sp)
    ctx->pc = 0x263770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x263774: 0xafa401c0  sw          $a0, 0x1C0($sp)
    ctx->pc = 0x263774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 4));
    // 0x263778: 0xffbf02b0  sd          $ra, 0x2B0($sp)
    ctx->pc = 0x263778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
    // 0x26377c: 0xffbe02a0  sd          $fp, 0x2A0($sp)
    ctx->pc = 0x26377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 30));
    // 0x263780: 0xffb70290  sd          $s7, 0x290($sp)
    ctx->pc = 0x263780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 23));
    // 0x263784: 0xffb60280  sd          $s6, 0x280($sp)
    ctx->pc = 0x263784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 22));
    // 0x263788: 0xffb50270  sd          $s5, 0x270($sp)
    ctx->pc = 0x263788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 21));
    // 0x26378c: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x26378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x263790: 0xffb30250  sd          $s3, 0x250($sp)
    ctx->pc = 0x263790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 19));
    // 0x263794: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x263794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x263798: 0xffb10230  sd          $s1, 0x230($sp)
    ctx->pc = 0x263798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 17));
    // 0x26379c: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x26379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x2637a0: 0xe7b602d0  swc1        $f22, 0x2D0($sp)
    ctx->pc = 0x2637a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x2637a4: 0xe7b402c0  swc1        $f20, 0x2C0($sp)
    ctx->pc = 0x2637a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x2637a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2637a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2637ac: 0xafa501c4  sw          $a1, 0x1C4($sp)
    ctx->pc = 0x2637acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 5));
    // 0x2637b0: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x2637b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x2637b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2637b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637b8: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x2637b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2637bc: 0xafa601c8  sw          $a2, 0x1C8($sp)
    ctx->pc = 0x2637bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 6));
    // 0x2637c0: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x2637c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x2637c4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2637c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2637c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2637c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2637ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2637d0: 0xafa701cc  sw          $a3, 0x1CC($sp)
    ctx->pc = 0x2637d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 7));
    // 0x2637d4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2637d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2637d8: 0xafa801d0  sw          $t0, 0x1D0($sp)
    ctx->pc = 0x2637d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 8));
    // 0x2637dc: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2637dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2637e0: 0xafa901d4  sw          $t1, 0x1D4($sp)
    ctx->pc = 0x2637e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 9));
    // 0x2637e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2637e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2637e8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x2637E8u;
    SET_GPR_U32(ctx, 31, 0x2637F0u);
    ctx->pc = 0x2637ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637E8u;
    // 0x2637ec: 0xafa201dc  sw          $v0, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x2637E8u, 0x2637F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637F0u;
label_2637f0:
    // 0x2637f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2637f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2637f4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2637f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2637f8: 0xc455eac8  lwc1        $f21, -0x1538($v0)
    ctx->pc = 0x2637f8u;
    { uint32_t bits = FAST_READ32(0x3AEAC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2637fc: 0x24622720  addiu       $v0, $v1, 0x2720
    ctx->pc = 0x2637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10016));
    // 0x263800: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x263800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x263804: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x263804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x263808: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x263808u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A2728u));
    // 0x26380c: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x26380cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x263810: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x263810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x263814: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x263814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x263818: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x263818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x26381c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26381Cu;
    {
        const bool branch_taken_0x26381c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x263820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26381Cu;
        // 0x263820: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26381c) {
            ctx->pc = 0x263848u;
            goto label_263848;
        }
    }
    ctx->pc = 0x263824u;
    // 0x263824: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x263824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x263828: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x263828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26382c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x26382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263830: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x263830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x263834: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x263834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263838: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x263838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26383c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26383cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x263840: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x263840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x263844: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x263844u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_263848:
    // 0x263848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26384c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x26384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x263850: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x263850u;
    {
        const bool branch_taken_0x263850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x263854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263850u;
        // 0x263854: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263850) {
            ctx->pc = 0x2638F8u;
            goto label_2638f8;
        }
    }
    ctx->pc = 0x263858u;
    // 0x263858: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x263858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x26385c: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26385Cu;
    {
        const bool branch_taken_0x26385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x263860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26385Cu;
        // 0x263860: 0x8fa601e0  lw          $a2, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26385c) {
            ctx->pc = 0x2638C0u;
            goto label_2638c0;
        }
    }
    ctx->pc = 0x263864u;
    // 0x263864: 0xc78183a4  lwc1        $f1, -0x7C5C($gp)
    ctx->pc = 0x263864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263868: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x263868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26386c: 0xc4ac0048  lwc1        $f12, 0x48($a1)
    ctx->pc = 0x26386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263870: 0xc4ad004c  lwc1        $f13, 0x4C($a1)
    ctx->pc = 0x263870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x263874: 0xc4ae0058  lwc1        $f14, 0x58($a1)
    ctx->pc = 0x263874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x263878: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x263878u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x26387c: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x26387cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x263880: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x263880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x263884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263888: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x263888u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x26388c: 0x0  nop
    ctx->pc = 0x26388cu;
    // NOP
    // 0x263890: 0x0  nop
    ctx->pc = 0x263890u;
    // NOP
    // 0x263894: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x263894u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x263898: 0x0  nop
    ctx->pc = 0x263898u;
    // NOP
    // 0x26389c: 0x0  nop
    ctx->pc = 0x26389cu;
    // NOP
    // 0x2638a0: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x2638a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x2638a4: 0x0  nop
    ctx->pc = 0x2638a4u;
    // NOP
    // 0x2638a8: 0x0  nop
    ctx->pc = 0x2638a8u;
    // NOP
    // 0x2638ac: 0x46007383  div.s       $f14, $f14, $f0
    ctx->pc = 0x2638acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[14] = ctx->f[14] / ctx->f[0];
    // 0x2638b0: 0xc0ad2c6  jal         func_2B4B18
    ctx->pc = 0x2638B0u;
    SET_GPR_U32(ctx, 31, 0x2638B8u);
    ctx->pc = 0x2638B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2638B0u;
    // 0x2638b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B18u, 0x2638B0u, 0x2638B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638B8u;
label_2638b8:
    // 0x2638b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2638B8u;
    {
        const bool branch_taken_0x2638b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638B8u;
        // 0x2638bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638b8) {
            ctx->pc = 0x2638F0u;
            goto label_2638f0;
        }
    }
    ctx->pc = 0x2638C0u;
label_2638c0:
    // 0x2638c0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2638c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2638c4: 0xc78183a8  lwc1        $f1, -0x7C58($gp)
    ctx->pc = 0x2638c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638c8: 0xc4cc004c  lwc1        $f12, 0x4C($a2)
    ctx->pc = 0x2638c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2638cc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2638ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2638d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2638d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2638d4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2638d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2638d8: 0x0  nop
    ctx->pc = 0x2638d8u;
    // NOP
    // 0x2638dc: 0x0  nop
    ctx->pc = 0x2638dcu;
    // NOP
    // 0x2638e0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2638e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2638e4: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x2638E4u;
    SET_GPR_U32(ctx, 31, 0x2638ECu);
    ctx->pc = 0x2638E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2638E4u;
    // 0x2638e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x2638E4u, 0x2638ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638ECu;
label_2638ec:
    // 0x2638ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2638ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2638f0:
    // 0x2638f0: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2638F0u;
    SET_GPR_U32(ctx, 31, 0x2638F8u);
    ctx->pc = 0x2638F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2638F0u;
    // 0x2638f4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2638F0u, 0x2638F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638F8u;
label_2638f8:
    // 0x2638f8: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x2638f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2638fc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2638fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263900: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x263900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263904: 0xaf80a2cc  sw          $zero, -0x5D34($gp)
    ctx->pc = 0x263904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943436), GPR_U32(ctx, 0));
    // 0x263908: 0x18800156  blez        $a0, . + 4 + (0x156 << 2)
    ctx->pc = 0x263908u;
    {
        const bool branch_taken_0x263908 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263908u;
        // 0x26390c: 0xaf80a2d4  sw          $zero, -0x5D2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263908) {
            ctx->pc = 0x263E64u;
            goto label_263e64;
        }
    }
    ctx->pc = 0x263910u;
    // 0x263910: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x263910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x263914: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x263914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x263918: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x263918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
    // 0x26391c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26391cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x263920: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x263920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
    // 0x263924: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x263924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x263928: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x263928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26392c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x26392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x263930: 0xc79483ac  lwc1        $f20, -0x7C54($gp)
    ctx->pc = 0x263930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x263934: 0xafa601f4  sw          $a2, 0x1F4($sp)
    ctx->pc = 0x263934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 6));
    // 0x263938: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x263938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x26393c: 0xafa301fc  sw          $v1, 0x1FC($sp)
    ctx->pc = 0x26393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 3));
    // 0x263940: 0xafa50204  sw          $a1, 0x204($sp)
    ctx->pc = 0x263940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 5));
    // 0x263944: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x263944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_263948:
    // 0x263948: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x263948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26394c: 0x600013  mtlo        $v1
    ctx->pc = 0x26394cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x263950: 0x72c20000  madd        $zero, $s6, $v0
    ctx->pc = 0x263950u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x263954: 0x1812  mflo        $v1
    ctx->pc = 0x263954u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x263958: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x263958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
    // 0x26395c: 0x8c70004c  lw          $s0, 0x4C($v1)
    ctx->pc = 0x26395cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x263960: 0x5200013b  beql        $s0, $zero, . + 4 + (0x13B << 2)
    ctx->pc = 0x263960u;
    {
        const bool branch_taken_0x263960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x263960) {
            ctx->pc = 0x263964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263960u;
            // 0x263964: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E50u;
            goto label_263e50;
        }
    }
    ctx->pc = 0x263968u;
    // 0x263968: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x263968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x26396c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26396Cu;
    {
        const bool branch_taken_0x26396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26396Cu;
        // 0x263970: 0x2465002c  addiu       $a1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26396c) {
            ctx->pc = 0x263980u;
            goto label_263980;
        }
    }
    ctx->pc = 0x263974u;
    // 0x263974: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x263974u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x263978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263978u;
    {
        const bool branch_taken_0x263978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263978u;
        // 0x26397c: 0xafa501e8  sw          $a1, 0x1E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263978) {
            ctx->pc = 0x263990u;
            goto label_263990;
        }
    }
    ctx->pc = 0x263980u;
label_263980:
    // 0x263980: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x263980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x263984: 0x8cd10008  lw          $s1, 0x8($a2)
    ctx->pc = 0x263984u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x263988: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x263988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x26398c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x26398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_263990:
    // 0x263990: 0x8fa501e4  lw          $a1, 0x1E4($sp)
    ctx->pc = 0x263990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x263994: 0x94a30044  lhu         $v1, 0x44($a1)
    ctx->pc = 0x263994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x263998: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263998u;
    {
        const bool branch_taken_0x263998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263998u;
        // 0x26399c: 0x8fa601c0  lw          $a2, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263998) {
            ctx->pc = 0x2639B0u;
            goto label_2639b0;
        }
    }
    ctx->pc = 0x2639A0u;
    // 0x2639a0: 0x94c20124  lhu         $v0, 0x124($a2)
    ctx->pc = 0x2639a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x2639a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2639a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2639a8: 0x50400129  beql        $v0, $zero, . + 4 + (0x129 << 2)
    ctx->pc = 0x2639A8u;
    {
        const bool branch_taken_0x2639a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639a8) {
            ctx->pc = 0x2639ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2639A8u;
            // 0x2639ac: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E50u;
            goto label_263e50;
        }
    }
    ctx->pc = 0x2639B0u;
label_2639b0:
    // 0x2639b0: 0x12200122  beqz        $s1, . + 4 + (0x122 << 2)
    ctx->pc = 0x2639B0u;
    {
        const bool branch_taken_0x2639b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639B0u;
        // 0x2639b4: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639b0) {
            ctx->pc = 0x263E3Cu;
            goto label_263e3c;
        }
    }
    ctx->pc = 0x2639B8u;
    // 0x2639b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2639b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2639bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2639bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2639c0: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2639C0u;
    {
        const bool branch_taken_0x2639c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2639C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639C0u;
        // 0x2639c4: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639c0) {
            ctx->pc = 0x263ABCu;
            goto label_263abc;
        }
    }
    ctx->pc = 0x2639C8u;
    // 0x2639c8: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x2639cc: 0xc4630030  lwc1        $f3, 0x30($v1)
    ctx->pc = 0x2639ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2639d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2639d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2639d4: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x2639d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2639d8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2639d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2639dc: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x2639dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x2639e0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2639e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2639e4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2639e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2639e8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2639e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2639ec: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x2639ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2639f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2639f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2639f4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2639f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2639f8: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2639f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2639fc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2639fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263a00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263a04: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x263a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x263a08: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x263a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x263a0c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x263a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263a10: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x263a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x263a14: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x263a14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x263a18: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x263a18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x263a1c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x263a1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x263a20: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x263A20u;
    SET_GPR_U32(ctx, 31, 0x263A28u);
    ctx->pc = 0x263A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A20u;
    // 0x263a24: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x263A20u, 0x263A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A28u;
label_263a28:
    // 0x263a28: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x263a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x263a2c: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x263A2Cu;
    SET_GPR_U32(ctx, 31, 0x263A34u);
    ctx->pc = 0x263A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A2Cu;
    // 0x263a30: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x263A2Cu, 0x263A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A34u;
label_263a34:
    // 0x263a34: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x263a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x263a38: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x263a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x263a3c: 0x80650001  lb          $a1, 0x1($v1)
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x263a40: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x263a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x263a44: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x263a44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x263a48: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x263a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x263a4c: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x263A4Cu;
    SET_GPR_U32(ctx, 31, 0x263A54u);
    ctx->pc = 0x263A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A4Cu;
    // 0x263a50: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x263A4Cu, 0x263A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A54u;
label_263a54:
    // 0x263a54: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x263a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263a58: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x263a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263a5c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x263a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263a60: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x263a60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x263a64: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x263a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263a68: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x263a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263a6c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x263a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263a70: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x263a70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x263a74: 0x8fa401fc  lw          $a0, 0x1FC($sp)
    ctx->pc = 0x263a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x263a78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x263a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x263a7c: 0x8fa501f8  lw          $a1, 0x1F8($sp)
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x263a80: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x263a80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x263a84: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x263a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x263a88: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x263a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x263a8c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x263a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x263a90: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x263a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x263a94: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x263A94u;
    SET_GPR_U32(ctx, 31, 0x263A9Cu);
    ctx->pc = 0x263A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A94u;
    // 0x263a98: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x263A94u, 0x263A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A9Cu;
label_263a9c:
    // 0x263a9c: 0x8fa401fc  lw          $a0, 0x1FC($sp)
    ctx->pc = 0x263a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x263aa0: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x263AA0u;
    SET_GPR_U32(ctx, 31, 0x263AA8u);
    ctx->pc = 0x263AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AA0u;
    // 0x263aa4: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x263AA0u, 0x263AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AA8u;
label_263aa8:
    // 0x263aa8: 0x8fa401fc  lw          $a0, 0x1FC($sp)
    ctx->pc = 0x263aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x263aac: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x263AACu;
    SET_GPR_U32(ctx, 31, 0x263AB4u);
    ctx->pc = 0x263AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AACu;
    // 0x263ab0: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x263AACu, 0x263AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AB4u;
label_263ab4:
    // 0x263ab4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x263AB4u;
    {
        const bool branch_taken_0x263ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AB4u;
        // 0x263ab8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ab4) {
            ctx->pc = 0x263AF8u;
            goto label_263af8;
        }
    }
    ctx->pc = 0x263ABCu;
label_263abc:
    // 0x263abc: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x263abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x263ac0: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x263ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x263ac4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ac8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x263ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263acc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x263accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263ad0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x263ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263ad4: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x263ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263ad8: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x263ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x263adc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x263adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x263ae0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x263ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x263ae4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x263ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x263ae8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x263ae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x263aec: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x263aecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x263af0: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x263af0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x263af4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x263af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_263af8:
    // 0x263af8: 0x44000d2  bltz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x263AF8u;
    {
        const bool branch_taken_0x263af8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x263AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AF8u;
        // 0x263afc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263af8) {
            ctx->pc = 0x263E44u;
            goto label_263e44;
        }
    }
    ctx->pc = 0x263B00u;
    // 0x263b00: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x263b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x263b04: 0xafa4020c  sw          $a0, 0x20C($sp)
    ctx->pc = 0x263b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 4));
label_263b08:
    // 0x263b08: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x263b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x263b0c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x263b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x263b10: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x263b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x263b14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x263b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x263b18: 0x8fa601cc  lw          $a2, 0x1CC($sp)
    ctx->pc = 0x263b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x263b1c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x263b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x263b20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263b24: 0x14c00040  bnez        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x263B24u;
    {
        const bool branch_taken_0x263b24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x263B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B24u;
        // 0x263b28: 0xafa40200  sw          $a0, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b24) {
            ctx->pc = 0x263C28u;
            goto label_263c28;
        }
    }
    ctx->pc = 0x263B2Cu;
    // 0x263b2c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x263b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263b30: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x263b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b34: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x263b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b38: 0x0  nop
    ctx->pc = 0x263b38u;
    // NOP
    // 0x263b3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x263B3Cu;
    {
        const bool branch_taken_0x263b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B3Cu;
        // 0x263b40: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b3c) {
            ctx->pc = 0x263B58u;
            goto label_263b58;
        }
    }
    ctx->pc = 0x263B44u;
    // 0x263b44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263b48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x263b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b4c: 0x0  nop
    ctx->pc = 0x263b4cu;
    // NOP
    // 0x263b50: 0x450300b1  bc1tl       . + 4 + (0xB1 << 2)
    ctx->pc = 0x263B50u;
    {
        const bool branch_taken_0x263b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263b50) {
            ctx->pc = 0x263B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B50u;
            // 0x263b54: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263B58u;
label_263b58:
    // 0x263b58: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x263b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b5c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x263b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b60: 0x0  nop
    ctx->pc = 0x263b60u;
    // NOP
    // 0x263b64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x263B64u;
    {
        const bool branch_taken_0x263b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B64u;
        // 0x263b68: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b64) {
            ctx->pc = 0x263B80u;
            goto label_263b80;
        }
    }
    ctx->pc = 0x263B6Cu;
    // 0x263b6c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b74: 0x0  nop
    ctx->pc = 0x263b74u;
    // NOP
    // 0x263b78: 0x450300a7  bc1tl       . + 4 + (0xA7 << 2)
    ctx->pc = 0x263B78u;
    {
        const bool branch_taken_0x263b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263b78) {
            ctx->pc = 0x263B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B78u;
            // 0x263b7c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263B80u;
label_263b80:
    // 0x263b80: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x263b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263b84: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x263b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b88: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x263b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b8c: 0x0  nop
    ctx->pc = 0x263b8cu;
    // NOP
    // 0x263b90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x263B90u;
    {
        const bool branch_taken_0x263b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B90u;
        // 0x263b94: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b90) {
            ctx->pc = 0x263BACu;
            goto label_263bac;
        }
    }
    ctx->pc = 0x263B98u;
    // 0x263b98: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263b9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x263b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263ba0: 0x0  nop
    ctx->pc = 0x263ba0u;
    // NOP
    // 0x263ba4: 0x4503009c  bc1tl       . + 4 + (0x9C << 2)
    ctx->pc = 0x263BA4u;
    {
        const bool branch_taken_0x263ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263ba4) {
            ctx->pc = 0x263BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BA4u;
            // 0x263ba8: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263BACu;
label_263bac:
    // 0x263bac: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x263bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263bb0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x263bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263bb4: 0x0  nop
    ctx->pc = 0x263bb4u;
    // NOP
    // 0x263bb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x263BB8u;
    {
        const bool branch_taken_0x263bb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BB8u;
        // 0x263bbc: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bb8) {
            ctx->pc = 0x263BD4u;
            goto label_263bd4;
        }
    }
    ctx->pc = 0x263BC0u;
    // 0x263bc0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263bc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263bc8: 0x0  nop
    ctx->pc = 0x263bc8u;
    // NOP
    // 0x263bcc: 0x45030092  bc1tl       . + 4 + (0x92 << 2)
    ctx->pc = 0x263BCCu;
    {
        const bool branch_taken_0x263bcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263bcc) {
            ctx->pc = 0x263BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BCCu;
            // 0x263bd0: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263BD4u;
label_263bd4:
    // 0x263bd4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x263bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263bd8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x263bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263bdc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x263bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263be0: 0x0  nop
    ctx->pc = 0x263be0u;
    // NOP
    // 0x263be4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x263BE4u;
    {
        const bool branch_taken_0x263be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BE4u;
        // 0x263be8: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263be4) {
            ctx->pc = 0x263C00u;
            goto label_263c00;
        }
    }
    ctx->pc = 0x263BECu;
    // 0x263bec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263bf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x263bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263bf4: 0x0  nop
    ctx->pc = 0x263bf4u;
    // NOP
    // 0x263bf8: 0x45030087  bc1tl       . + 4 + (0x87 << 2)
    ctx->pc = 0x263BF8u;
    {
        const bool branch_taken_0x263bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263bf8) {
            ctx->pc = 0x263BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BF8u;
            // 0x263bfc: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263C00u;
label_263c00:
    // 0x263c00: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x263c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263c04: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x263c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263c08: 0x0  nop
    ctx->pc = 0x263c08u;
    // NOP
    // 0x263c0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x263C0Cu;
    {
        const bool branch_taken_0x263c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C0Cu;
        // 0x263c10: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c0c) {
            ctx->pc = 0x263C28u;
            goto label_263c28;
        }
    }
    ctx->pc = 0x263C14u;
    // 0x263c14: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263c1c: 0x0  nop
    ctx->pc = 0x263c1cu;
    // NOP
    // 0x263c20: 0x4503007d  bc1tl       . + 4 + (0x7D << 2)
    ctx->pc = 0x263C20u;
    {
        const bool branch_taken_0x263c20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263c20) {
            ctx->pc = 0x263C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263C20u;
            // 0x263c24: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263C28u;
label_263c28:
    // 0x263c28: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x263c28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x263c2c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x263c2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x263c30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x263c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x263c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x263c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c3c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x263c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x263c40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c44: 0xc082aa0  jal         func_20AA80
    ctx->pc = 0x263C44u;
    SET_GPR_U32(ctx, 31, 0x263C4Cu);
    ctx->pc = 0x263C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C44u;
    // 0x263c48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA80u, 0x263C44u, 0x263C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C4Cu;
label_263c4c:
    // 0x263c4c: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x263C4Cu;
    {
        const bool branch_taken_0x263c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263c4c) {
            ctx->pc = 0x263C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263C4Cu;
            // 0x263c50: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263C54u;
    // 0x263c54: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x263c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x263c58: 0x1840006e  blez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x263C58u;
    {
        const bool branch_taken_0x263c58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C58u;
        // 0x263c5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c58) {
            ctx->pc = 0x263E14u;
            goto label_263e14;
        }
    }
    ctx->pc = 0x263C60u;
    // 0x263c60: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x263c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x263c64: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x263c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x263c68: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x263c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x263c6c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x263c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x263c70: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x263c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
    // 0x263c74: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x263c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x263c78: 0xafa40210  sw          $a0, 0x210($sp)
    ctx->pc = 0x263c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
    // 0x263c7c: 0x26130024  addiu       $s3, $s0, 0x24
    ctx->pc = 0x263c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x263c80: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x263c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x263c84: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x263c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_263c88:
    // 0x263c88: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x263c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x263c8c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x263c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x263c90: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x263c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x263c94: 0x8fa90214  lw          $t1, 0x214($sp)
    ctx->pc = 0x263c94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x263c98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x263c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c9c: 0x8faa0208  lw          $t2, 0x208($sp)
    ctx->pc = 0x263c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x263ca0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x263ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ca4: 0x8fab0210  lw          $t3, 0x210($sp)
    ctx->pc = 0x263ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x263ca8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x263ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x263cac: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x263cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x263cb0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x263cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x263cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263cbc: 0x0  nop
    ctx->pc = 0x263cbcu;
    // NOP
    // 0x263cc0: 0x0  nop
    ctx->pc = 0x263cc0u;
    // NOP
    // 0x263cc4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x263cc4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x263cc8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x263cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x263ccc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x263cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263cd8: 0x0  nop
    ctx->pc = 0x263cd8u;
    // NOP
    // 0x263cdc: 0x0  nop
    ctx->pc = 0x263cdcu;
    // NOP
    // 0x263ce0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x263ce0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x263ce4: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x263ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x263ce8: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x263ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x263cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263cf4: 0x0  nop
    ctx->pc = 0x263cf4u;
    // NOP
    // 0x263cf8: 0x0  nop
    ctx->pc = 0x263cf8u;
    // NOP
    // 0x263cfc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x263cfcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x263d00: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x263d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x263d04: 0xc0826c2  jal         func_209B08
    ctx->pc = 0x263D04u;
    SET_GPR_U32(ctx, 31, 0x263D0Cu);
    ctx->pc = 0x263D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D04u;
    // 0x263d08: 0x90680000  lbu         $t0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209B08u, 0x263D04u, 0x263D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D0Cu;
label_263d0c:
    // 0x263d0c: 0x8f83a2d4  lw          $v1, -0x5D2C($gp)
    ctx->pc = 0x263d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943444)));
    // 0x263d10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x263d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x263d14: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x263D14u;
    {
        const bool branch_taken_0x263d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D14u;
        // 0x263d18: 0xaf83a2d4  sw          $v1, -0x5D2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d14) {
            ctx->pc = 0x263DF8u;
            goto label_263df8;
        }
    }
    ctx->pc = 0x263D1Cu;
    // 0x263d1c: 0xc7a70140  lwc1        $f7, 0x140($sp)
    ctx->pc = 0x263d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x263d20: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x263d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263d24: 0xc7a60144  lwc1        $f6, 0x144($sp)
    ctx->pc = 0x263d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x263d28: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x263d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263d2c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x263d2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x263d30: 0xc7a50148  lwc1        $f5, 0x148($sp)
    ctx->pc = 0x263d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x263d34: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x263d34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x263d38: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x263d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263d3c: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x263d3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x263d40: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x263d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x263d44: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x263d44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x263d48: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x263d48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x263d4c: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x263d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x263d50: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x263d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x263d54: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x263d54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x263d58: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x263d58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x263d5c: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x263d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263d60: 0x0  nop
    ctx->pc = 0x263d60u;
    // NOP
    // 0x263d64: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x263D64u;
    {
        const bool branch_taken_0x263d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D64u;
        // 0x263d68: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d64) {
            ctx->pc = 0x263DF8u;
            goto label_263df8;
        }
    }
    ctx->pc = 0x263D6Cu;
    // 0x263d6c: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x263d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x263d70: 0x46001d46  mov.s       $f21, $f3
    ctx->pc = 0x263d70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[3]);
    // 0x263d74: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x263d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263d78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263d7c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x263d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263d80: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x263d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263d84: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x263d88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x263d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x263d8c: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x263d8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x263d90: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x263d90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x263d94: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x263d94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x263d98: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x263d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x263d9c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x263d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x263da0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x263da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x263da4: 0xaf86a2ac  sw          $a2, -0x5D54($gp)
    ctx->pc = 0x263da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943404), GPR_U32(ctx, 6));
    // 0x263da8: 0xaf96a2b4  sw          $s6, -0x5D4C($gp)
    ctx->pc = 0x263da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943412), GPR_U32(ctx, 22));
    // 0x263dac: 0xaf95a2bc  sw          $s5, -0x5D44($gp)
    ctx->pc = 0x263dacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943420), GPR_U32(ctx, 21));
    // 0x263db0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x263DB0u;
    {
        const bool branch_taken_0x263db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x263DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DB0u;
        // 0x263db4: 0xaf94a2c4  sw          $s4, -0x5D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943428), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263db0) {
            ctx->pc = 0x263DF8u;
            goto label_263df8;
        }
    }
    ctx->pc = 0x263DB8u;
    // 0x263db8: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x263db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x263dbc: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x263dc0: 0x80450001  lb          $a1, 0x1($v0)
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x263dc4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x263dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x263dc8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x263dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x263dcc: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x263DCCu;
    SET_GPR_U32(ctx, 31, 0x263DD4u);
    ctx->pc = 0x263DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DCCu;
    // 0x263dd0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x263DCCu, 0x263DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DD4u;
label_263dd4:
    // 0x263dd4: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x263dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x263dd8: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x263DD8u;
    SET_GPR_U32(ctx, 31, 0x263DE0u);
    ctx->pc = 0x263DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DD8u;
    // 0x263ddc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x263DD8u, 0x263DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DE0u;
label_263de0:
    // 0x263de0: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x263de4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x263de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x263de8: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x263de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x263dec: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x263decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
    // 0x263df0: 0xc0ad532  jal         func_2B54C8
    ctx->pc = 0x263DF0u;
    SET_GPR_U32(ctx, 31, 0x263DF8u);
    ctx->pc = 0x263DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DF0u;
    // 0x263df4: 0xafa001b8  sw          $zero, 0x1B8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54C8u, 0x263DF0u, 0x263DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DF8u;
label_263df8:
    // 0x263df8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x263df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x263dfc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x263dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x263e00: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x263e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263e04: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x263E04u;
    {
        const bool branch_taken_0x263e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E04u;
        // 0x263e08: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e04) {
            ctx->pc = 0x263C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263c88;
        }
    }
    ctx->pc = 0x263E0Cu;
    // 0x263e0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263E0Cu;
    {
        const bool branch_taken_0x263e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E0Cu;
        // 0x263e10: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e0c) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263E14u;
label_263e14:
    // 0x263e14: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_263e18:
    // 0x263e18: 0x26130024  addiu       $s3, $s0, 0x24
    ctx->pc = 0x263e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x263e1c: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x263e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x263e20: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x263e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_263e24:
    // 0x263e24: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x263e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e28: 0x441ff37  bgez        $v0, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x263E28u;
    {
        const bool branch_taken_0x263e28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x263E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E28u;
        // 0x263e2c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e28) {
            ctx->pc = 0x263B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263b08;
        }
    }
    ctx->pc = 0x263E30u;
    // 0x263e30: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x263e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x263E34u;
    {
        const bool branch_taken_0x263e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E34u;
        // 0x263e38: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e34) {
            ctx->pc = 0x263E54u;
            goto label_263e54;
        }
    }
    ctx->pc = 0x263E3Cu;
label_263e3c:
    // 0x263e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263E3Cu;
    {
        const bool branch_taken_0x263e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E3Cu;
        // 0x263e40: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e3c) {
            ctx->pc = 0x263E50u;
            goto label_263e50;
        }
    }
    ctx->pc = 0x263E44u;
label_263e44:
    // 0x263e44: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x263e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x263e48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x263e48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x263e4c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x263e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_263e50:
    // 0x263e50: 0xafb6020c  sw          $s6, 0x20C($sp)
    ctx->pc = 0x263e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 22));
label_263e54:
    // 0x263e54: 0x8fb6020c  lw          $s6, 0x20C($sp)
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x263e58: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x263e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x263e5c: 0x1440feba  bnez        $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x263E5Cu;
    {
        const bool branch_taken_0x263e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E5Cu;
        // 0x263e60: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e5c) {
            ctx->pc = 0x263948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263948;
        }
    }
    ctx->pc = 0x263E64u;
label_263e64:
    // 0x263e64: 0x8f83a2c8  lw          $v1, -0x5D38($gp)
    ctx->pc = 0x263e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943432)));
    // 0x263e68: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x263e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263e6c: 0x8f82a2d0  lw          $v0, -0x5D30($gp)
    ctx->pc = 0x263e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943440)));
    // 0x263e70: 0x8f84a2cc  lw          $a0, -0x5D34($gp)
    ctx->pc = 0x263e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943436)));
    // 0x263e74: 0x8f85a2d4  lw          $a1, -0x5D2C($gp)
    ctx->pc = 0x263e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943444)));
    // 0x263e78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x263e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263e7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x263e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x263e80: 0xaf83a2c8  sw          $v1, -0x5D38($gp)
    ctx->pc = 0x263e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943432), GPR_U32(ctx, 3));
    // 0x263e84: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x263E84u;
    {
        const bool branch_taken_0x263e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E84u;
        // 0x263e88: 0xaf82a2d0  sw          $v0, -0x5D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e84) {
            ctx->pc = 0x263FACu;
            goto label_263fac;
        }
    }
    ctx->pc = 0x263E8Cu;
    // 0x263e8c: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x263e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x263e90: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x263E90u;
    {
        const bool branch_taken_0x263e90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E90u;
        // 0x263e94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e90) {
            ctx->pc = 0x263F00u;
            goto label_263f00;
        }
    }
    ctx->pc = 0x263E98u;
    // 0x263e98: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x263e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x263e9c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x263e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263ea0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x263ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ea4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x263ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263ea8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x263ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x263eac: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x263eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x263eb0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x263eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x263eb4: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x263EB4u;
    {
        const bool branch_taken_0x263eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x263EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EB4u;
        // 0x263eb8: 0xe4c10008  swc1        $f1, 0x8($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263eb4) {
            ctx->pc = 0x263F00u;
            goto label_263f00;
        }
    }
    ctx->pc = 0x263EBCu;
    // 0x263ebc: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x263ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x263ec0: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x263EC0u;
    SET_GPR_U32(ctx, 31, 0x263EC8u);
    ctx->pc = 0x263EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263EC0u;
    // 0x263ec4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x263EC0u, 0x263EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263EC8u;
label_263ec8:
    // 0x263ec8: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x263ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x263ecc: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x263eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x263ed0: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x263ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263ed4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x263ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ed8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x263ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263edc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x263edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263ee0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x263ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263ee4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x263ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x263ee8: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x263ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263eec: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x263eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x263ef0: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x263ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x263ef4: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x263ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ef8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x263ef8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x263efc: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x263efcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_263f00:
    // 0x263f00: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x263f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x263f04: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x263F04u;
    {
        const bool branch_taken_0x263f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F04u;
        // 0x263f08: 0xc7a50010  lwc1        $f5, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f04) {
            ctx->pc = 0x263FA4u;
            goto label_263fa4;
        }
    }
    ctx->pc = 0x263F0Cu;
    // 0x263f0c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x263f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263f10: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x263f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x263f14: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x263f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263f18: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x263f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x263f1c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x263f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x263f20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x263f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263f24: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x263f24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x263f28: 0x0  nop
    ctx->pc = 0x263f28u;
    // NOP
    // 0x263f2c: 0x0  nop
    ctx->pc = 0x263f2cu;
    // NOP
    // 0x263f30: 0x460c0044  c1          0xC0044
    ctx->pc = 0x263f30u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x263f34: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x263f34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263f38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x263F38u;
    {
        const bool branch_taken_0x263f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263f38) {
            ctx->pc = 0x263F58u;
            goto label_263f58;
        }
    }
    ctx->pc = 0x263F40u;
    // 0x263f40: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x263F40u;
    SET_GPR_U32(ctx, 31, 0x263F48u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x263F40u, 0x263F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F48u;
label_263f48:
    // 0x263f48: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x263f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x263f4c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x263f4cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x263f50: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x263f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263f54: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x263f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263f58:
    // 0x263f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x263f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x263f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263f60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263f64: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x263f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x263f68: 0x0  nop
    ctx->pc = 0x263f68u;
    // NOP
    // 0x263f6c: 0x0  nop
    ctx->pc = 0x263f6cu;
    // NOP
    // 0x263f70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x263f70u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x263f74: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x263f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x263f78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x263f7c: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x263f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x263f80: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x263f80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x263f84: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x263f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x263f88: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x263f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x263f8c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x263f8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x263f90: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x263F90u;
    {
        const bool branch_taken_0x263f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x263F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F90u;
        // 0x263f94: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f90) {
            ctx->pc = 0x263FA4u;
            goto label_263fa4;
        }
    }
    ctx->pc = 0x263F98u;
    // 0x263f98: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x263f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x263f9c: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x263F9Cu;
    SET_GPR_U32(ctx, 31, 0x263FA4u);
    ctx->pc = 0x263FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F9Cu;
    // 0x263fa0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x263F9Cu, 0x263FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FA4u;
label_263fa4:
    // 0x263fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x263FA4u;
    {
        const bool branch_taken_0x263fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA4u;
        // 0x263fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fa4) {
            ctx->pc = 0x263FB0u;
            goto label_263fb0;
        }
    }
    ctx->pc = 0x263FACu;
label_263fac:
    // 0x263fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x263facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263fb0:
    // 0x263fb0: 0xdfbf02b0  ld          $ra, 0x2B0($sp)
    ctx->pc = 0x263fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x263fb4: 0xdfbe02a0  ld          $fp, 0x2A0($sp)
    ctx->pc = 0x263fb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x263fb8: 0xdfb70290  ld          $s7, 0x290($sp)
    ctx->pc = 0x263fb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x263fbc: 0xdfb60280  ld          $s6, 0x280($sp)
    ctx->pc = 0x263fbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x263fc0: 0xdfb50270  ld          $s5, 0x270($sp)
    ctx->pc = 0x263fc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x263fc4: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x263fc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x263fc8: 0xdfb30250  ld          $s3, 0x250($sp)
    ctx->pc = 0x263fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x263fcc: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x263fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x263fd0: 0xdfb10230  ld          $s1, 0x230($sp)
    ctx->pc = 0x263fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x263fd4: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x263fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x263fd8: 0xc7b602d0  lwc1        $f22, 0x2D0($sp)
    ctx->pc = 0x263fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x263fdc: 0xc7b502c8  lwc1        $f21, 0x2C8($sp)
    ctx->pc = 0x263fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x263fe0: 0xc7b402c0  lwc1        $f20, 0x2C0($sp)
    ctx->pc = 0x263fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x263fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x263FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FE4u;
        // 0x263fe8: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263FECu;
}

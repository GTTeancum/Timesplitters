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

// Function: decalClipToPoly
// Address: 0x2a2710 - 0x2a30c0
void decalClipToPoly_0x2a2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decalClipToPoly_0x2a2710");
#endif

    switch (ctx->pc) {
        case 0x2a2860u: goto label_2a2860;
        case 0x2a28c8u: goto label_2a28c8;
        case 0x2a29c8u: goto label_2a29c8;
        case 0x2a2aa0u: goto label_2a2aa0;
        case 0x2a2ea8u: goto label_2a2ea8;
        case 0x2a2f4cu: goto label_2a2f4c;
        case 0x2a2f80u: goto label_2a2f80;
        case 0x2a2facu: goto label_2a2fac;
        case 0x2a2fe0u: goto label_2a2fe0;
        default: break;
    }

    ctx->pc = 0x2a2710u;

    // 0x2a2710: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x2a2710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x2a2714: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2a2714u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2718: 0xffb201f0  sd          $s2, 0x1F0($sp)
    ctx->pc = 0x2a2718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 18));
    // 0x2a271c: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x2a271cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a2720: 0xffb50220  sd          $s5, 0x220($sp)
    ctx->pc = 0x2a2720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 21));
    // 0x2a2724: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2a2724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2728: 0xffb30200  sd          $s3, 0x200($sp)
    ctx->pc = 0x2a2728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 19));
    // 0x2a272c: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x2a272cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2730: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x2a2730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
    // 0x2a2734: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a2734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2738: 0xffbe0250  sd          $fp, 0x250($sp)
    ctx->pc = 0x2a2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 30));
    // 0x2a273c: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x2a273cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2740: 0xffb70240  sd          $s7, 0x240($sp)
    ctx->pc = 0x2a2740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 23));
    // 0x2a2744: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2a2744u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2748: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x2a2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x2a274c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2750: 0xffb40210  sd          $s4, 0x210($sp)
    ctx->pc = 0x2a2750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 20));
    // 0x2a2754: 0xffb101e0  sd          $s1, 0x1E0($sp)
    ctx->pc = 0x2a2754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 17));
    // 0x2a2758: 0xffb001d0  sd          $s0, 0x1D0($sp)
    ctx->pc = 0x2a2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x2a275c: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x2a275cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2a2760: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x2a2760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2a2764: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x2a2764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x2a2768: 0xafa90144  sw          $t1, 0x144($sp)
    ctx->pc = 0x2a2768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 9));
    // 0x2a276c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A276Cu;
    {
        const bool branch_taken_0x2a276c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A276Cu;
        // 0x2a2770: 0xafab0148  sw          $t3, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a276c) {
            ctx->pc = 0x2A2780u;
            goto label_2a2780;
        }
    }
    ctx->pc = 0x2A2774u;
    // 0x2a2774: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2778: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2778u;
    {
        const bool branch_taken_0x2a2778 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2778) {
            ctx->pc = 0x2A277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2778u;
            // 0x2a277c: 0xc6650000  lwc1        $f5, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A279Cu;
            goto label_2a279c;
        }
    }
    ctx->pc = 0x2A2780u;
label_2a2780:
    // 0x2a2780: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2a2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a2784: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2a2784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2788: 0xc6660004  lwc1        $f6, 0x4($s3)
    ctx->pc = 0x2a2788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a278c: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2a278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2790: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2a2790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2a2794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2794u;
    {
        const bool branch_taken_0x2a2794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2794u;
        // 0x2a2798: 0xc6610018  lwc1        $f1, 0x18($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2794) {
            ctx->pc = 0x2A27B0u;
            goto label_2a27b0;
        }
    }
    ctx->pc = 0x2A279Cu;
label_2a279c:
    // 0x2a279c: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2a279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a27a0: 0xc6660004  lwc1        $f6, 0x4($s3)
    ctx->pc = 0x2a27a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a27a4: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x2a27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a27a8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2a27a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2a27ac: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2a27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a27b0:
    // 0x2a27b0: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2a27b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2a27b4: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2a27b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a27b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a27b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a27bc: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x2a27bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2a27c0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2a27c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a27c4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2a27c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2a27c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a27c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a27cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a27d0: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A27D0u;
    {
        const bool branch_taken_0x2a27d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27D0u;
        // 0x2a27d4: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27d0) {
            ctx->pc = 0x2A27E4u;
            goto label_2a27e4;
        }
    }
    ctx->pc = 0x2A27D8u;
    // 0x2a27d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a27dc: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A27DCu;
    {
        const bool branch_taken_0x2a27dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a27dc) {
            ctx->pc = 0x2A27E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A27DCu;
            // 0x2a27e0: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A27F4u;
            goto label_2a27f4;
        }
    }
    ctx->pc = 0x2A27E4u;
label_2a27e4:
    // 0x2a27e4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2a27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a27e8: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2a27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a27ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A27ECu;
    {
        const bool branch_taken_0x2a27ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27ECu;
        // 0x2a27f0: 0xc6610018  lwc1        $f1, 0x18($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27ec) {
            ctx->pc = 0x2A27FCu;
            goto label_2a27fc;
        }
    }
    ctx->pc = 0x2A27F4u;
label_2a27f4:
    // 0x2a27f4: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x2a27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a27f8: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2a27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a27fc:
    // 0x2a27fc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2a27fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2a2800: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x2a2800u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2a2804: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x2a2804u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2a2808: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a2808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a280c: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x2a280cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a2810: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2a2810u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2a2814: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2818: 0x46020500  add.s       $f20, $f0, $f2
    ctx->pc = 0x2a2818u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a281c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a281cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2820: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2a2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a2824: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2a2824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a2828: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2a2828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a282c: 0x24c80003  addiu       $t0, $a2, 0x3
    ctx->pc = 0x2a282cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2a2830: 0x24e90003  addiu       $t1, $a3, 0x3
    ctx->pc = 0x2a2830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2a2834: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x2a2834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a2838: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x2a2838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2a283c: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x2a283cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x2a2840: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2a2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x2a2844: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x2a2844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x2a2848: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x2a2848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x2a284c: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x2a284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
    // 0x2a2850: 0xafa80150  sw          $t0, 0x150($sp)
    ctx->pc = 0x2a2850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 8));
    // 0x2a2854: 0xafa6015c  sw          $a2, 0x15C($sp)
    ctx->pc = 0x2a2854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 6));
    // 0x2a2858: 0xafa90154  sw          $t1, 0x154($sp)
    ctx->pc = 0x2a2858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 9));
    // 0x2a285c: 0xafa70160  sw          $a3, 0x160($sp)
    ctx->pc = 0x2a285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
label_2a2860:
    // 0x2a2860: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2a2860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2a2864: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x2a2864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2a2868: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x2a2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2a286c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a2870: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a2870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a2874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a2878: 0x8fb0014c  lw          $s0, 0x14C($sp)
    ctx->pc = 0x2a2878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a287c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2a287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2a2880: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a2880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a2884: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a2884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a2888: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2a2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2a288c: 0x2a850004  slti        $a1, $s4, 0x4
    ctx->pc = 0x2a288cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a2890: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2894: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x2a2894u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a2898: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a2898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a289c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a28a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a28a4: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A28A4u;
    {
        const bool branch_taken_0x2a28a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28A4u;
        // 0x2a28a8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28a4) {
            ctx->pc = 0x2A2860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2860;
        }
    }
    ctx->pc = 0x2A28ACu;
    // 0x2a28ac: 0x19400134  blez        $t2, . + 4 + (0x134 << 2)
    ctx->pc = 0x2A28ACu;
    {
        const bool branch_taken_0x2a28ac = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2A28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28ACu;
        // 0x2a28b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28ac) {
            ctx->pc = 0x2A2D80u;
            goto label_2a2d80;
        }
    }
    ctx->pc = 0x2A28B4u;
    // 0x2a28b4: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x2a28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a28b8: 0xf10c0  sll         $v0, $t7, 3
    ctx->pc = 0x2a28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x2a28bc: 0x180c82d  daddu       $t9, $t4, $zero
    ctx->pc = 0x2a28bcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a28c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a28c4: 0x0  nop
    ctx->pc = 0x2a28c4u;
    // NOP
label_2a28c8:
    // 0x2a28c8: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x2a28c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a28cc: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A28CCu;
    {
        const bool branch_taken_0x2a28cc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a28cc) {
            ctx->pc = 0x2A28D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A28CCu;
            // 0x2a28d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A28D4u;
            goto label_2a28d4;
        }
    }
    ctx->pc = 0x2A28D4u;
label_2a28d4:
    // 0x2a28d4: 0x2ea001a  div         $zero, $s7, $t2
    ctx->pc = 0x2a28d4u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a28d8: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x2a28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2a28dc: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2a28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2a28e0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2a28e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a28e4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2a28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a28e8: 0xc5a40008  lwc1        $f4, 0x8($t5)
    ctx->pc = 0x2a28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a28ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a28ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a28f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2a28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a28f4: 0xc5a70000  lwc1        $f7, 0x0($t5)
    ctx->pc = 0x2a28f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a28f8: 0x400013  mtlo        $v0
    ctx->pc = 0x2a28f8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2a28fc: 0xc5a60004  lwc1        $f6, 0x4($t5)
    ctx->pc = 0x2a28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a2900: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a2900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2904: 0xb010  mfhi        $s6
    ctx->pc = 0x2a2904u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x2a2908: 0x70628800  madd        $s1, $v1, $v0
    ctx->pc = 0x2a2908u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2a290c: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x2a290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2a2910: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a2910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2914: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2a2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a2918: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x2a2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a291c: 0x600013  mtlo        $v1
    ctx->pc = 0x2a291cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2a2920: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x2a2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a2924: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a2924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2928: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a2928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a292c: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x2a292cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a2930: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a2930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2934: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2938: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a2938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a293c: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x2a293cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x2a2940: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x2a2940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x2a2944: 0x460d18c1  sub.s       $f3, $f3, $f13
    ctx->pc = 0x2a2944u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x2a2948: 0x46070082  mul.s       $f2, $f0, $f7
    ctx->pc = 0x2a2948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2a294c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2a294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a2950: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x2a2950u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a2954: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2a2954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a2958: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x2a2958u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2a295c: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x2a295cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2a2960: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a2960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a2964: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2a2964u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2a2968: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2a2968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2a296c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a296cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a2970: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2a2970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2a2974: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x2a2974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a2978: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2a2978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a297c: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2a297cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2a2980: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x2a2980u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2a2984: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a2984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a2988: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a2988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a298c: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x2a298cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a2990: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x2a2990u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a2994: 0x0  nop
    ctx->pc = 0x2a2994u;
    // NOP
    // 0x2a2998: 0x0  nop
    ctx->pc = 0x2a2998u;
    // NOP
    // 0x2a299c: 0x460c0084  c1          0xC0084
    ctx->pc = 0x2a299cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a29a0: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x2a29a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a29a4: 0x0  nop
    ctx->pc = 0x2a29a4u;
    // NOP
    // 0x2a29a8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2A29A8u;
    {
        const bool branch_taken_0x2a29a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29A8u;
        // 0x2a29ac: 0xe7a10108  swc1        $f1, 0x108($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29a8) {
            ctx->pc = 0x2A29ECu;
            goto label_2a29ec;
        }
    }
    ctx->pc = 0x2A29B0u;
    // 0x2a29b0: 0x7faa0180  sq          $t2, 0x180($sp)
    ctx->pc = 0x2a29b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 10));
    // 0x2a29b4: 0x7fad0190  sq          $t5, 0x190($sp)
    ctx->pc = 0x2a29b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 13));
    // 0x2a29b8: 0x7fae01a0  sq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a29b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 14));
    // 0x2a29bc: 0x7faf01b0  sq          $t7, 0x1B0($sp)
    ctx->pc = 0x2a29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 15));
    // 0x2a29c0: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A29C0u;
    SET_GPR_U32(ctx, 31, 0x2A29C8u);
    ctx->pc = 0x2A29C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29C0u;
    // 0x2a29c4: 0x7fb901c0  sq          $t9, 0x1C0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A29C0u, 0x2A29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29C8u;
label_2a29c8:
    // 0x2a29c8: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x2a29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a29cc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2a29ccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2a29d0: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a29d4: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x2a29d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a29d8: 0x7bb901c0  lq          $t9, 0x1C0($sp)
    ctx->pc = 0x2a29d8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2a29dc: 0x7baf01b0  lq          $t7, 0x1B0($sp)
    ctx->pc = 0x2a29dcu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a29e0: 0x7bae01a0  lq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a29e0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a29e4: 0x7bad0190  lq          $t5, 0x190($sp)
    ctx->pc = 0x2a29e4u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a29e8: 0x7baa0180  lq          $t2, 0x180($sp)
    ctx->pc = 0x2a29e8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2a29ec:
    // 0x2a29ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a29ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a29f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a29f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29f4: 0x25c2ffff  addiu       $v0, $t6, -0x1
    ctx->pc = 0x2a29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2a29f8: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2a29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a29fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2a00: 0x0  nop
    ctx->pc = 0x2a2a00u;
    // NOP
    // 0x2a2a04: 0x0  nop
    ctx->pc = 0x2a2a04u;
    // NOP
    // 0x2a2a08: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2a2a08u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2a2a0c: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x2a2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a2a10: 0xc7a30108  lwc1        $f3, 0x108($sp)
    ctx->pc = 0x2a2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a2a14: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x2a2a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a2a18: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2a2a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a2a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a2a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2a24: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x2a2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2a2a28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a2a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2a2c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a2a2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a2a30: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a2a30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a2a34: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x2a2a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2a2a38: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x2a2a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a2a3c: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x2a2a3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a2a40: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2a44: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x2a2a44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x2a2a48: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x2a2a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a2a4c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a2a4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a2a50: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2a54: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2a2a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2a2a58: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2a2a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2a2a5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a2a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a2a60: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2a2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2a64: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x2a2a64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x2a2a68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a2a68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a2a6c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2a2a6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a2a70: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2a2a70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2a2a74: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x2a2a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2a78: 0x0  nop
    ctx->pc = 0x2a2a78u;
    // NOP
    // 0x2a2a7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2A7Cu;
    {
        const bool branch_taken_0x2a2a7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A7Cu;
        // 0x2a2a80: 0xe7a10128  swc1        $f1, 0x128($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a7c) {
            ctx->pc = 0x2A2A88u;
            goto label_2a2a88;
        }
    }
    ctx->pc = 0x2A2A84u;
    // 0x2a2a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a88:
    // 0x2a2a88: 0x19c000b3  blez        $t6, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2A2A88u;
    {
        const bool branch_taken_0x2a2a88 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x2A2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A88u;
        // 0x2a2a8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a88) {
            ctx->pc = 0x2A2D58u;
            goto label_2a2d58;
        }
    }
    ctx->pc = 0x2A2A90u;
    // 0x2a2a90: 0x2bd6026  xor         $t4, $s5, $sp
    ctx->pc = 0x2a2a90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 29));
    // 0x2a2a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2A94u;
    {
        const bool branch_taken_0x2a2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A94u;
        // 0x2a2a98: 0x25d5826  xor         $t3, $s2, $sp (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a94) {
            ctx->pc = 0x2A2AACu;
            goto label_2a2aac;
        }
    }
    ctx->pc = 0x2A2A9Cu;
    // 0x2a2a9c: 0x0  nop
    ctx->pc = 0x2a2a9cu;
    // NOP
label_2a2aa0:
    // 0x2a2aa0: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x2a2aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a2aa4: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a2aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a2aa8: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x2a2aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2a2aac:
    // 0x2a2aac: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2a2aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2ab0: 0xc7a70100  lwc1        $f7, 0x100($sp)
    ctx->pc = 0x2a2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a2ab4: 0x1261018  mult        $v0, $t1, $a2
    ctx->pc = 0x2a2ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a2ab8: 0xc7a80104  lwc1        $f8, 0x104($sp)
    ctx->pc = 0x2a2ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a2abc: 0xc7a90108  lwc1        $f9, 0x108($sp)
    ctx->pc = 0x2a2abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a2ac0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a2ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2ac4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2a2ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a2ac8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x2a2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2a2acc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a2accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2ad0: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x2a2ad0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x2a2ad4: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x2a2ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a2ad8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2a2ad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2a2adc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a2adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2ae0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2a2ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2a2ae4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2a2ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2a2ae8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2a2ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2a2aec: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2a2aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2af0: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x2a2af0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x2a2af4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a2af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2af8: 0x46091002  mul.s       $f0, $f2, $f9
    ctx->pc = 0x2a2af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2a2afc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a2afcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2b00: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2a2b00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2b04: 0x0  nop
    ctx->pc = 0x2a2b04u;
    // NOP
    // 0x2a2b08: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2B08u;
    {
        const bool branch_taken_0x2a2b08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B08u;
        // 0x2a2b0c: 0xe7a20128  swc1        $f2, 0x128($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b08) {
            ctx->pc = 0x2A2B14u;
            goto label_2a2b14;
        }
    }
    ctx->pc = 0x2A2B10u;
    // 0x2a2b10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b14:
    // 0x2a2b14: 0x10e00042  beqz        $a3, . + 4 + (0x42 << 2)
    ctx->pc = 0x2A2B14u;
    {
        const bool branch_taken_0x2a2b14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2b14) {
            ctx->pc = 0x2A2C20u;
            goto label_2a2c20;
        }
    }
    ctx->pc = 0x2A2B1Cu;
    // 0x2a2b1c: 0x5100000b  beql        $t0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2B1Cu;
    {
        const bool branch_taken_0x2a2b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2b1c) {
            ctx->pc = 0x2A2B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2B1Cu;
            // 0x2a2b20: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2B4Cu;
            goto label_2a2b4c;
        }
    }
    ctx->pc = 0x2A2B24u;
    // 0x2a2b24: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x2a2b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a2b28: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a2b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2b2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a2b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a2b30: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2a2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a2b34: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a2b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a2b38: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2b3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a2b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a2b40: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2a2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2b44: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2A2B44u;
    {
        const bool branch_taken_0x2a2b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B44u;
        // 0x2a2b48: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b44) {
            ctx->pc = 0x2A2D3Cu;
            goto label_2a2d3c;
        }
    }
    ctx->pc = 0x2A2B4Cu;
label_2a2b4c:
    // 0x2a2b4c: 0x460d4042  mul.s       $f1, $f8, $f13
    ctx->pc = 0x2a2b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x2a2b50: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x2a2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a2b54: 0x460b38c2  mul.s       $f3, $f7, $f11
    ctx->pc = 0x2a2b54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2a2b58: 0x460a4882  mul.s       $f2, $f9, $f10
    ctx->pc = 0x2a2b58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x2a2b5c: 0xa63818  mult        $a3, $a1, $a2
    ctx->pc = 0x2a2b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a2b60: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2a2b60u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2a2b64: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a2b64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a2b68: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x2a2b68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a2b6c: 0x46063942  mul.s       $f5, $f7, $f6
    ctx->pc = 0x2a2b6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2a2b70: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2a2b70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2a2b74: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x2a2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2a2b78: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2b7c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a2b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2b80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a2b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2b84: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a2b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a2b88: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2a2b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a2b8c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2a2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2b90: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2a2b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2b94: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a2b94u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a2b98: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a2b98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a2b9c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x2a2b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a2ba0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2a2ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a2ba4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2a2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a2ba8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a2ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2bac: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2a2bacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2a2bb0: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x2a2bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2a2bb4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2a2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2bb8: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2a2bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2a2bbc: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2a2bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a2bc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a2bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a2bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2bc8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a2bc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a2bcc: 0x0  nop
    ctx->pc = 0x2a2bccu;
    // NOP
    // 0x2a2bd0: 0x0  nop
    ctx->pc = 0x2a2bd0u;
    // NOP
    // 0x2a2bd4: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x2a2bd4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[5];
    // 0x2a2bd8: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x2a2bd8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2a2bdc: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2a2bdcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2a2be0: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2a2be0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a2be4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a2be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2be8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2bec: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a2becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a2bf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a2bf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2bf4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a2bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a2bf8: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x2a2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2bfc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2c00: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2a2c00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a2c04: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a2c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a2c08: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a2c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a2c0c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2a2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a2c10: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2A2C10u;
    {
        const bool branch_taken_0x2a2c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C10u;
        // 0x2a2c14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c10) {
            ctx->pc = 0x2A2D3Cu;
            goto label_2a2d3c;
        }
    }
    ctx->pc = 0x2A2C18u;
    // 0x2a2c18: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2A2C18u;
    {
        const bool branch_taken_0x2a2c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c18) {
            ctx->pc = 0x2A2D18u;
            goto label_2a2d18;
        }
    }
    ctx->pc = 0x2A2C20u;
label_2a2c20:
    // 0x2a2c20: 0x11000046  beqz        $t0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2A2C20u;
    {
        const bool branch_taken_0x2a2c20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C20u;
        // 0x2a2c24: 0xa63818  mult        $a3, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c20) {
            ctx->pc = 0x2A2D3Cu;
            goto label_2a2d3c;
        }
    }
    ctx->pc = 0x2A2C28u;
    // 0x2a2c28: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2c2c: 0x460d4042  mul.s       $f1, $f8, $f13
    ctx->pc = 0x2a2c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x2a2c30: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x2a2c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a2c34: 0x460b38c2  mul.s       $f3, $f7, $f11
    ctx->pc = 0x2a2c34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2a2c38: 0x460a4882  mul.s       $f2, $f9, $f10
    ctx->pc = 0x2a2c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x2a2c3c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2a2c3cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2a2c40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a2c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a2c44: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a2c44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a2c48: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x2a2c48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a2c4c: 0x46063942  mul.s       $f5, $f7, $f6
    ctx->pc = 0x2a2c4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2a2c50: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2a2c50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2a2c54: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x2a2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2a2c58: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2c5c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a2c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2c60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a2c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2c64: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a2c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a2c68: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2a2c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a2c6c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2a2c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2c70: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2a2c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2c74: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a2c74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a2c78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a2c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a2c7c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x2a2c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a2c80: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2a2c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a2c84: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2a2c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a2c88: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a2c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2c8c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2a2c8cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2a2c90: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x2a2c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2a2c94: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2a2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2c98: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2a2c98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2a2c9c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2a2c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a2ca0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a2ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a2ca4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2ca8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a2ca8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a2cac: 0x0  nop
    ctx->pc = 0x2a2cacu;
    // NOP
    // 0x2a2cb0: 0x0  nop
    ctx->pc = 0x2a2cb0u;
    // NOP
    // 0x2a2cb4: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x2a2cb4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[5];
    // 0x2a2cb8: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x2a2cb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2a2cbc: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2a2cbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2a2cc0: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2a2cc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a2cc4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2a2cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2cc8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a2cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2ccc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a2cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a2cd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a2cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2cd4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a2cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a2cd8: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x2a2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2cdc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a2cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2ce0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2a2ce0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a2ce4: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x2a2ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a2ce8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a2ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a2cec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a2cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a2cf0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2a2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a2cf4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2cf8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a2cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a2cfc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a2cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2d00: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a2d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a2d04: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2a2d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2d08: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2a2d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a2d0c: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x2a2d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a2d10: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2D10u;
    {
        const bool branch_taken_0x2a2d10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D10u;
        // 0x2a2d14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d10) {
            ctx->pc = 0x2A2D3Cu;
            goto label_2a2d3c;
        }
    }
    ctx->pc = 0x2A2D18u;
label_2a2d18:
    // 0x2a2d18: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2D18u;
    {
        const bool branch_taken_0x2a2d18 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D18u;
        // 0x2a2d1c: 0x29e20008  slti        $v0, $t7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d18) {
            ctx->pc = 0x2A2D3Cu;
            goto label_2a2d3c;
        }
    }
    ctx->pc = 0x2A2D20u;
    // 0x2a2d20: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2D20u;
    {
        const bool branch_taken_0x2a2d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d20) {
            ctx->pc = 0x2A2D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2D20u;
            // 0x2a2d24: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2D40u;
            goto label_2a2d40;
        }
    }
    ctx->pc = 0x2A2D28u;
    // 0x2a2d28: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2a2d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2a2d2c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a2d2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d30: 0xae160004  sw          $s6, 0x4($s0)
    ctx->pc = 0x2a2d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
    // 0x2a2d34: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2a2d34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2a2d38: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2a2d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2a2d3c:
    // 0x2a2d3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a2d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2a2d40:
    // 0x2a2d40: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2a2d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d44: 0x12e102a  slt         $v0, $t1, $t6
    ctx->pc = 0x2a2d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x2a2d48: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x2A2D48u;
    {
        const bool branch_taken_0x2a2d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D48u;
        // 0x2a2d4c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d48) {
            ctx->pc = 0x2A2AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2aa0;
        }
    }
    ctx->pc = 0x2A2D50u;
    // 0x2a2d50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2D50u;
    {
        const bool branch_taken_0x2a2d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D50u;
        // 0x2a2d54: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d50) {
            ctx->pc = 0x2A2D64u;
            goto label_2a2d64;
        }
    }
    ctx->pc = 0x2A2D58u;
label_2a2d58:
    // 0x2a2d58: 0x2bd6026  xor         $t4, $s5, $sp
    ctx->pc = 0x2a2d58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 29));
    // 0x2a2d5c: 0x25d5826  xor         $t3, $s2, $sp
    ctx->pc = 0x2a2d5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 29));
    // 0x2a2d60: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2a2d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d64:
    // 0x2a2d64: 0x320a82d  daddu       $s5, $t9, $zero
    ctx->pc = 0x2a2d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d68: 0x320902d  daddu       $s2, $t9, $zero
    ctx->pc = 0x2a2d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d6c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2a2d6cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d70: 0x3aca80b  movn        $s5, $sp, $t4
    ctx->pc = 0x2a2d70u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 29));
    // 0x2a2d74: 0x28a102a  slt         $v0, $s4, $t2
    ctx->pc = 0x2a2d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2a2d78: 0x1440fed3  bnez        $v0, . + 4 + (-0x12D << 2)
    ctx->pc = 0x2A2D78u;
    {
        const bool branch_taken_0x2a2d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D78u;
        // 0x2a2d7c: 0x3ab900b  movn        $s2, $sp, $t3 (Delay Slot)
        if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d78) {
            ctx->pc = 0x2A28C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a28c8;
        }
    }
    ctx->pc = 0x2A2D80u;
label_2a2d80:
    // 0x2a2d80: 0x8fa90154  lw          $t1, 0x154($sp)
    ctx->pc = 0x2a2d80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2a2d84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2d88: 0x8fb00150  lw          $s0, 0x150($sp)
    ctx->pc = 0x2a2d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a2d8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2d8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d90: 0x49182a  slt         $v1, $v0, $t1
    ctx->pc = 0x2a2d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2a2d94: 0x8fb1015c  lw          $s1, 0x15C($sp)
    ctx->pc = 0x2a2d94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2a2d98: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2a2d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a2d9c: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x2a2d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a2da0: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x2a2da0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x2a2da4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a2da8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2a2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a2dac: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x2a2dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a2db0: 0xe56021  addu        $t4, $a3, $a1
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a2db4: 0x123100b  movn        $v0, $t1, $v1
    ctx->pc = 0x2a2db4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x2a2db8: 0x8fa80164  lw          $t0, 0x164($sp)
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2a2dbc: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2a2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2a2dc0: 0x111083  sra         $v0, $s1, 2
    ctx->pc = 0x2a2dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 2));
    // 0x2a2dc4: 0xe86821  addu        $t5, $a3, $t0
    ctx->pc = 0x2a2dc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a2dc8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2a2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a2dcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2dd0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a2dd4: 0x2682821  addu        $a1, $s3, $t0
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2a2dd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a2ddc: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2a2ddcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2a2de0: 0xe25021  addu        $t2, $a3, $v0
    ctx->pc = 0x2a2de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a2de4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x2a2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a2de8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a2dec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a2df0: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a2df4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2a2df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2a2df8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a2dfc: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x2a2dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a2e00: 0xe35821  addu        $t3, $a3, $v1
    ctx->pc = 0x2a2e00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a2e04: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a2e04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a2e08: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x2a2e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2a2e0c: 0x8fb0014c  lw          $s0, 0x14C($sp)
    ctx->pc = 0x2a2e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a2e10: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2a2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a2e14: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x2a2e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a2e18: 0x2694021  addu        $t0, $s3, $t1
    ctx->pc = 0x2a2e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x2a2e1c: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x2a2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a2e20: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2a2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2e24: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x2a2e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x2a2e28: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a2e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2e2c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2a2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2e30: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x2a2e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a2e34: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2a2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a2e38: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2a2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a2e3c: 0xc5070000  lwc1        $f7, 0x0($t0)
    ctx->pc = 0x2a2e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a2e40: 0xc5280000  lwc1        $f8, 0x0($t1)
    ctx->pc = 0x2a2e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a2e44: 0xc5890000  lwc1        $f9, 0x0($t4)
    ctx->pc = 0x2a2e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a2e48: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x2a2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a2e4c: 0xe7aa00c0  swc1        $f10, 0xC0($sp)
    ctx->pc = 0x2a2e4cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a2e50: 0xe7ab00c4  swc1        $f11, 0xC4($sp)
    ctx->pc = 0x2a2e50u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a2e54: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a2e58: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x2a2e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a2e5c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2a2e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a2e60: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2a2e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a2e64: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2a2e64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a2e68: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x2a2e68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a2e6c: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x2a2e6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a2e70: 0xe7a700ec  swc1        $f7, 0xEC($sp)
    ctx->pc = 0x2a2e70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2a2e74: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x2a2e74u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a2e78: 0x19c00077  blez        $t6, . + 4 + (0x77 << 2)
    ctx->pc = 0x2A2E78u;
    {
        const bool branch_taken_0x2a2e78 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x2A2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E78u;
        // 0x2a2e7c: 0xe7a900f4  swc1        $f9, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e78) {
            ctx->pc = 0x2A3058u;
            goto label_2a3058;
        }
    }
    ctx->pc = 0x2A2E80u;
    // 0x2a2e80: 0x26710080  addiu       $s1, $s3, 0x80
    ctx->pc = 0x2a2e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2a2e84: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2a2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a2e88: 0x27a300cc  addiu       $v1, $sp, 0xCC
    ctx->pc = 0x2a2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2a2e8c: 0xafb10174  sw          $s1, 0x174($sp)
    ctx->pc = 0x2a2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 17));
    // 0x2a2e90: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2a2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x2a2e94: 0x267e0084  addiu       $fp, $s3, 0x84
    ctx->pc = 0x2a2e94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x2a2e98: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x2a2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x2a2e9c: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x2a2e9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a2ea0: 0x27b600ec  addiu       $s6, $sp, 0xEC
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2a2ea4: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2a2ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_2a2ea8:
    // 0x2a2ea8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2EA8u;
    {
        const bool branch_taken_0x2a2ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EA8u;
        // 0x2a2eac: 0x1417c2  srl         $v0, $s4, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ea8) {
            ctx->pc = 0x2A2ECCu;
            goto label_2a2ecc;
        }
    }
    ctx->pc = 0x2A2EB0u;
    // 0x2a2eb0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2eb4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2a2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2a2eb8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a2eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a2ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a2ec0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2a2ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a2ec4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A2EC4u;
    {
        const bool branch_taken_0x2a2ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EC4u;
        // 0x2a2ec8: 0x958021  addu        $s0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ec4) {
            ctx->pc = 0x2A2EF4u;
            goto label_2a2ef4;
        }
    }
    ctx->pc = 0x2A2ECCu;
label_2a2ecc:
    // 0x2a2ecc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2ed0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2a2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2a2ed4: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A2ED4u;
    {
        const bool branch_taken_0x2a2ed4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ed4) {
            ctx->pc = 0x2A2ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2ED4u;
            // 0x2a2ed8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2EDCu;
            goto label_2a2edc;
        }
    }
    ctx->pc = 0x2A2EDCu;
label_2a2edc:
    // 0x2a2edc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a2edcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a2ee0: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2a2ee4: 0x4e001a  div         $zero, $v0, $t6
    ctx->pc = 0x2a2ee4u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a2ee8: 0x1810  mfhi        $v1
    ctx->pc = 0x2a2ee8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a2eec: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x2a2eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a2ef0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x2a2ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2a2ef4:
    // 0x2a2ef4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a2ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2ef8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2a2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2a2efc: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2a2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2a2f00: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2a2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2a2f04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a2f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a2f08: 0x1490c0  sll         $s2, $s4, 3
    ctx->pc = 0x2a2f08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2a2f0c: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x2a2f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a2f10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f14: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x2a2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2a2f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f1c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2f20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a2f24: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x2a2f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a2f28: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x2a2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2a2f2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2a2f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a2f30: 0x8fa80174  lw          $t0, 0x174($sp)
    ctx->pc = 0x2a2f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2a2f34: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2f38: 0x1128821  addu        $s1, $t0, $s2
    ctx->pc = 0x2a2f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x2a2f3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a2f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a2f40: 0x7fae01a0  sq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 14));
    // 0x2a2f44: 0xc082b74  jal         func_20ADD0
    ctx->pc = 0x2A2F44u;
    SET_GPR_U32(ctx, 31, 0x2A2F4Cu);
    ctx->pc = 0x2A2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F44u;
    // 0x2a2f48: 0x7faf01b0  sq          $t7, 0x1B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADD0u, 0x2A2F44u, 0x2A2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F4Cu;
label_2a2f4c:
    // 0x2a2f4c: 0x0  nop
    ctx->pc = 0x2a2f4cu;
    // NOP
    // 0x2a2f50: 0x0  nop
    ctx->pc = 0x2a2f50u;
    // NOP
    // 0x2a2f54: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x2a2f54u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x2a2f58: 0x7bae01a0  lq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a2f58u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a2f5c: 0x0  nop
    ctx->pc = 0x2a2f5cu;
    // NOP
    // 0x2a2f60: 0x0  nop
    ctx->pc = 0x2a2f60u;
    // NOP
    // 0x2a2f64: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2a2f64u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a2f68: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2a2f68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2f6c: 0x0  nop
    ctx->pc = 0x2a2f6cu;
    // NOP
    // 0x2a2f70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2F70u;
    {
        const bool branch_taken_0x2a2f70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F70u;
        // 0x2a2f74: 0x7baf01b0  lq          $t7, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f70) {
            ctx->pc = 0x2A2F88u;
            goto label_2a2f88;
        }
    }
    ctx->pc = 0x2A2F78u;
    // 0x2a2f78: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A2F78u;
    SET_GPR_U32(ctx, 31, 0x2A2F80u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A2F78u, 0x2A2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F80u;
label_2a2f80:
    // 0x2a2f80: 0x7baf01b0  lq          $t7, 0x1B0($sp)
    ctx->pc = 0x2a2f80u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a2f84: 0x7bae01a0  lq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a2f84u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2a2f88:
    // 0x2a2f88: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a2f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2a2f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f90: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a2f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a2f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f9c: 0x7fae01a0  sq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 14));
    // 0x2a2fa0: 0x7faf01b0  sq          $t7, 0x1B0($sp)
    ctx->pc = 0x2a2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 15));
    // 0x2a2fa4: 0xc082b74  jal         func_20ADD0
    ctx->pc = 0x2A2FA4u;
    SET_GPR_U32(ctx, 31, 0x2A2FACu);
    ctx->pc = 0x2A2FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FA4u;
    // 0x2a2fa8: 0x3d28021  addu        $s0, $fp, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADD0u, 0x2A2FA4u, 0x2A2FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FACu;
label_2a2fac:
    // 0x2a2fac: 0x0  nop
    ctx->pc = 0x2a2facu;
    // NOP
    // 0x2a2fb0: 0x0  nop
    ctx->pc = 0x2a2fb0u;
    // NOP
    // 0x2a2fb4: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x2a2fb4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
    // 0x2a2fb8: 0x7bae01a0  lq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a2fb8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a2fbc: 0x0  nop
    ctx->pc = 0x2a2fbcu;
    // NOP
    // 0x2a2fc0: 0x0  nop
    ctx->pc = 0x2a2fc0u;
    // NOP
    // 0x2a2fc4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2a2fc4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2a2fc8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2a2fc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2fcc: 0x0  nop
    ctx->pc = 0x2a2fccu;
    // NOP
    // 0x2a2fd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2FD0u;
    {
        const bool branch_taken_0x2a2fd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FD0u;
        // 0x2a2fd4: 0x7baf01b0  lq          $t7, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fd0) {
            ctx->pc = 0x2A2FE8u;
            goto label_2a2fe8;
        }
    }
    ctx->pc = 0x2A2FD8u;
    // 0x2a2fd8: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2A2FD8u;
    SET_GPR_U32(ctx, 31, 0x2A2FE0u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2A2FD8u, 0x2A2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FE0u;
label_2a2fe0:
    // 0x2a2fe0: 0x7baf01b0  lq          $t7, 0x1B0($sp)
    ctx->pc = 0x2a2fe0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2a2fe4: 0x7bae01a0  lq          $t6, 0x1A0($sp)
    ctx->pc = 0x2a2fe4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2a2fe8:
    // 0x2a2fe8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a2fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a2fec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a2fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2ff0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2ff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a2ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2ff8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2FF8u;
    {
        const bool branch_taken_0x2a2ff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2ff8) {
            ctx->pc = 0x2A3008u;
            goto label_2a3008;
        }
    }
    ctx->pc = 0x2A3000u;
    // 0x2a3000: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2a3000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2a3004: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2a3004u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2a3008:
    // 0x2a3008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a300c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a300cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a3010: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a3010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3014: 0x0  nop
    ctx->pc = 0x2a3014u;
    // NOP
    // 0x2a3018: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3018u;
    {
        const bool branch_taken_0x2a3018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3018) {
            ctx->pc = 0x2A301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3018u;
            // 0x2a301c: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3020u;
            goto label_2a3020;
        }
    }
    ctx->pc = 0x2A3020u;
label_2a3020:
    // 0x2a3020: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a3020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a3024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3028: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3028u;
    {
        const bool branch_taken_0x2a3028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3028) {
            ctx->pc = 0x2A3038u;
            goto label_2a3038;
        }
    }
    ctx->pc = 0x2A3030u;
    // 0x2a3030: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2a3030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a3034: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2a3034u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2a3038:
    // 0x2a3038: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a3038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a303c: 0x0  nop
    ctx->pc = 0x2a303cu;
    // NOP
    // 0x2a3040: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3040u;
    {
        const bool branch_taken_0x2a3040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3040) {
            ctx->pc = 0x2A3044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3040u;
            // 0x2a3044: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3048u;
            goto label_2a3048;
        }
    }
    ctx->pc = 0x2A3048u;
label_2a3048:
    // 0x2a3048: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a3048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a304c: 0x28e102a  slt         $v0, $s4, $t6
    ctx->pc = 0x2a304cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x2a3050: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2A3050u;
    {
        const bool branch_taken_0x2a3050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3050u;
        // 0x2a3054: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3050) {
            ctx->pc = 0x2A2EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2ea8;
        }
    }
    ctx->pc = 0x2A3058u;
label_2a3058:
    // 0x2a3058: 0xae6e00c8  sw          $t6, 0xC8($s3)
    ctx->pc = 0x2a3058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 14));
    // 0x2a305c: 0x8fa90148  lw          $t1, 0x148($sp)
    ctx->pc = 0x2a305cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2a3060: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3060u;
    {
        const bool branch_taken_0x2a3060 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3060u;
        // 0x2a3064: 0x29e20008  slti        $v0, $t7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3060) {
            ctx->pc = 0x2A307Cu;
            goto label_2a307c;
        }
    }
    ctx->pc = 0x2A3068u;
    // 0x2a3068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3068u;
    {
        const bool branch_taken_0x2a3068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3068u;
        // 0x2a306c: 0xf10c0  sll         $v0, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3068) {
            ctx->pc = 0x2A307Cu;
            goto label_2a307c;
        }
    }
    ctx->pc = 0x2A3070u;
    // 0x2a3070: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3074: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a3078: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a307c:
    // 0x2a307c: 0x8e6300c8  lw          $v1, 0xC8($s3)
    ctx->pc = 0x2a307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x2a3080: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a3080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3084: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x2a3084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2a3088: 0xdfbe0250  ld          $fp, 0x250($sp)
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2a308c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a308cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a3090: 0xdfb70240  ld          $s7, 0x240($sp)
    ctx->pc = 0x2a3090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2a3094: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x2a3094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a3098: 0xdfb50220  ld          $s5, 0x220($sp)
    ctx->pc = 0x2a3098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2a309c: 0xdfb40210  ld          $s4, 0x210($sp)
    ctx->pc = 0x2a309cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2a30a0: 0xdfb30200  ld          $s3, 0x200($sp)
    ctx->pc = 0x2a30a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2a30a4: 0xdfb201f0  ld          $s2, 0x1F0($sp)
    ctx->pc = 0x2a30a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a30a8: 0xdfb101e0  ld          $s1, 0x1E0($sp)
    ctx->pc = 0x2a30a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a30ac: 0xdfb001d0  ld          $s0, 0x1D0($sp)
    ctx->pc = 0x2a30acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2a30b0: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x2a30b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a30b4: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x2a30b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a30b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A30B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30B8u;
        // 0x2a30bc: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A30C0u;
}

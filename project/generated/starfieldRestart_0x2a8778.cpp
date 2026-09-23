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

// Function: starfieldRestart
// Address: 0x2a8778 - 0x2a8b38
void starfieldRestart_0x2a8778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("starfieldRestart_0x2a8778");
#endif

    switch (ctx->pc) {
        case 0x2a87d8u: goto label_2a87d8;
        case 0x2a87fcu: goto label_2a87fc;
        case 0x2a8820u: goto label_2a8820;
        case 0x2a8828u: goto label_2a8828;
        case 0x2a8868u: goto label_2a8868;
        case 0x2a88d4u: goto label_2a88d4;
        case 0x2a88dcu: goto label_2a88dc;
        case 0x2a8958u: goto label_2a8958;
        case 0x2a8960u: goto label_2a8960;
        case 0x2a89acu: goto label_2a89ac;
        case 0x2a8a04u: goto label_2a8a04;
        case 0x2a8a50u: goto label_2a8a50;
        case 0x2a8a58u: goto label_2a8a58;
        case 0x2a8a60u: goto label_2a8a60;
        case 0x2a8aa8u: goto label_2a8aa8;
        default: break;
    }

    ctx->pc = 0x2a8778u;

    // 0x2a8778: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a8778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a877c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2a877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2a8780: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a8780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a8784: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2a8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a8788: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a8788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2a878c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2a878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2a8790: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a8790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a8794: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a8798: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a879c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a87a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a87a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a87a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a87a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a87a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a87ac: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x2a87acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2a87b0: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2a87b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a87b4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2a87b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2a87b8: 0x146200cf  bne         $v1, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2A87B8u;
    {
        const bool branch_taken_0x2a87b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87B8u;
        // 0x2a87bc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87b8) {
            ctx->pc = 0x2A8AF8u;
            goto label_2a8af8;
        }
    }
    ctx->pc = 0x2A87C0u;
    // 0x2a87c0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a87c4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a87c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a87c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a87c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a87cc: 0xc7978e40  lwc1        $f23, -0x71C0($gp)
    ctx->pc = 0x2a87ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a87d0: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2A87D0u;
    SET_GPR_U32(ctx, 31, 0x2A87D8u);
    ctx->pc = 0x2A87D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87D0u;
    // 0x2a87d4: 0x24849608  addiu       $a0, $a0, -0x69F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2A87D0u, 0x2A87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87D8u;
label_2a87d8:
    // 0x2a87d8: 0xc7968e44  lwc1        $f22, -0x71BC($gp)
    ctx->pc = 0x2a87d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a87dc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a87e0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a87e4: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x2a87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
    // 0x2a87e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a87e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a87ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a87ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a87f0: 0xaf83b338  sw          $v1, -0x4CC8($gp)
    ctx->pc = 0x2a87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947640), GPR_U32(ctx, 3));
    // 0x2a87f4: 0xc08718c  jal         func_21C630
    ctx->pc = 0x2A87F4u;
    SET_GPR_U32(ctx, 31, 0x2A87FCu);
    ctx->pc = 0x2A87F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87F4u;
    // 0x2a87f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C630u, 0x2A87F4u, 0x2A87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87FCu;
label_2a87fc:
    // 0x2a87fc: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x2a87fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x2a8800: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a8804: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a8804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8808: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a8808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a880c: 0x2442a710  addiu       $v0, $v0, -0x58F0
    ctx->pc = 0x2a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944528));
    // 0x2a8810: 0xaf83b33c  sw          $v1, -0x4CC4($gp)
    ctx->pc = 0x2a8810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947644), GPR_U32(ctx, 3));
    // 0x2a8814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8818: 0x26140014  addiu       $s4, $s0, 0x14
    ctx->pc = 0x2a8818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2a881c: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x2a881cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2a8820:
    // 0x2a8820: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8820u;
    SET_GPR_U32(ctx, 31, 0x2A8828u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8820u, 0x2A8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8828u;
label_2a8828:
    // 0x2a8828: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8828u;
    {
        const bool branch_taken_0x2a8828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8828u;
        // 0x2a882c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8828) {
            ctx->pc = 0x2A8840u;
            goto label_2a8840;
        }
    }
    ctx->pc = 0x2A8830u;
    // 0x2a8830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8838u;
    {
        const bool branch_taken_0x2a8838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8838u;
        // 0x2a883c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8838) {
            ctx->pc = 0x2A8858u;
            goto label_2a8858;
        }
    }
    ctx->pc = 0x2A8840u;
label_2a8840:
    // 0x2a8840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8844: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a884c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a884cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8850: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a8854: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a8854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a8858:
    // 0x2a8858: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2a8858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2a885c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2a885cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2a8860: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8860u;
    SET_GPR_U32(ctx, 31, 0x2A8868u);
    ctx->pc = 0x2A8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8860u;
    // 0x2a8864: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8860u, 0x2A8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8868u;
label_2a8868:
    // 0x2a8868: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8868u;
    {
        const bool branch_taken_0x2a8868 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8868u;
        // 0x2a886c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8868) {
            ctx->pc = 0x2A8880u;
            goto label_2a8880;
        }
    }
    ctx->pc = 0x2A8870u;
    // 0x2a8870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8874: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8878: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8878u;
    {
        const bool branch_taken_0x2a8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8878u;
        // 0x2a887c: 0x46140842  mul.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8878) {
            ctx->pc = 0x2A889Cu;
            goto label_2a889c;
        }
    }
    ctx->pc = 0x2A8880u;
label_2a8880:
    // 0x2a8880: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a8880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a8884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8888: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a888c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a888cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8890: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8894: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a8894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a8898: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2a8898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2a889c:
    // 0x2a889c: 0xc7828e48  lwc1        $f2, -0x71B8($gp)
    ctx->pc = 0x2a889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a88a0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2a88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2a88a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a88a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88a8: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x2a88a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2a88ac: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x2a88acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x2a88b0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2a88b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a88b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a88b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a88b8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a88b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a88bc: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2a88bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2a88c0: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x2a88c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x2a88c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a88c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a88c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a88c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a88cc: 0xc0aa19c  jal         func_2A8670
    ctx->pc = 0x2A88CCu;
    SET_GPR_U32(ctx, 31, 0x2A88D4u);
    ctx->pc = 0x2A88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A88CCu;
    // 0x2a88d0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8670u, 0x2A88CCu, 0x2A88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88D4u;
label_2a88d4:
    // 0x2a88d4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A88D4u;
    SET_GPR_U32(ctx, 31, 0x2A88DCu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A88D4u, 0x2A88DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88DCu;
label_2a88dc:
    // 0x2a88dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A88DCu;
    {
        const bool branch_taken_0x2a88dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88DCu;
        // 0x2a88e0: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88dc) {
            ctx->pc = 0x2A88F4u;
            goto label_2a88f4;
        }
    }
    ctx->pc = 0x2A88E4u;
    // 0x2a88e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a88e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a88e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a88e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a88ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A88ECu;
    {
        const bool branch_taken_0x2a88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88ECu;
        // 0x2a88f0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88ec) {
            ctx->pc = 0x2A8910u;
            goto label_2a8910;
        }
    }
    ctx->pc = 0x2A88F4u;
label_2a88f4:
    // 0x2a88f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a88f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a88f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a88fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8908: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a890c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a890cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a8910:
    // 0x2a8910: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a8910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a8914: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x2a8914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2a8918: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x2a8918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x2a891c: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x2a891cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2a8920: 0x2a4200c8  slti        $v0, $s2, 0xC8
    ctx->pc = 0x2a8920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2a8924: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2A8924u;
    {
        const bool branch_taken_0x2a8924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8924u;
        // 0x2a8928: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8924) {
            ctx->pc = 0x2A8820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8820;
        }
    }
    ctx->pc = 0x2A892Cu;
    // 0x2a892c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a8930: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a8934: 0x2456bcf0  addiu       $s6, $v0, -0x4310
    ctx->pc = 0x2a8934u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950128));
    // 0x2a8938: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2a8938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2a893c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a893cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a8940: 0x247795f8  addiu       $s7, $v1, -0x6A08
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940152));
    // 0x2a8944: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x2a8944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a8948: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a8948u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a894c: 0x26d30004  addiu       $s3, $s6, 0x4
    ctx->pc = 0x2a894cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2a8950: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x2a8950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8954: 0x0  nop
    ctx->pc = 0x2a8954u;
    // NOP
label_2a8958:
    // 0x2a8958: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8958u;
    SET_GPR_U32(ctx, 31, 0x2A8960u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8958u, 0x2A8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8960u;
label_2a8960:
    // 0x2a8960: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8960u;
    {
        const bool branch_taken_0x2a8960 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8960u;
        // 0x2a8964: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8960) {
            ctx->pc = 0x2A8978u;
            goto label_2a8978;
        }
    }
    ctx->pc = 0x2A8968u;
    // 0x2a8968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a896c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a896cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8970u;
    {
        const bool branch_taken_0x2a8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8970u;
        // 0x2a8974: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8970) {
            ctx->pc = 0x2A8990u;
            goto label_2a8990;
        }
    }
    ctx->pc = 0x2A8978u;
label_2a8978:
    // 0x2a8978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a897c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8988: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a898c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a898cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a8990:
    // 0x2a8990: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a8990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2a8994: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8998: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x2a8998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a899c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a899cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a89a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a89a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a89a4: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A89A4u;
    SET_GPR_U32(ctx, 31, 0x2A89ACu);
    ctx->pc = 0x2A89A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A89A4u;
    // 0x2a89a8: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A89A4u, 0x2A89ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89ACu;
label_2a89ac:
    // 0x2a89ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a89acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89b0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A89B0u;
    {
        const bool branch_taken_0x2a89b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89B0u;
        // 0x2a89b4: 0x27c595f8  addiu       $a1, $fp, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294940152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89b0) {
            ctx->pc = 0x2A89C8u;
            goto label_2a89c8;
        }
    }
    ctx->pc = 0x2A89B8u;
    // 0x2a89b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a89b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a89bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a89c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A89C0u;
    {
        const bool branch_taken_0x2a89c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89C0u;
        // 0x2a89c4: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89c0) {
            ctx->pc = 0x2A89E4u;
            goto label_2a89e4;
        }
    }
    ctx->pc = 0x2A89C8u;
label_2a89c8:
    // 0x2a89c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a89cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a89ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a89d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a89d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a89d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a89d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a89dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a89dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a89e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a89e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a89e4:
    // 0x2a89e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a89e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a89e8: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x2a89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a89ec: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x2a89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2a89f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a89f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a89f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a89f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a89f8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2a89f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a89fc: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A89FCu;
    SET_GPR_U32(ctx, 31, 0x2A8A04u);
    ctx->pc = 0x2A8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A89FCu;
    // 0x2a8a00: 0xe4420008  swc1        $f2, 0x8($v0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A89FCu, 0x2A8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A04u;
label_2a8a04:
    // 0x2a8a04: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8A04u;
    {
        const bool branch_taken_0x2a8a04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A04u;
        // 0x2a8a08: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a04) {
            ctx->pc = 0x2A8A1Cu;
            goto label_2a8a1c;
        }
    }
    ctx->pc = 0x2A8A0Cu;
    // 0x2a8a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8a14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8A14u;
    {
        const bool branch_taken_0x2a8a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A14u;
        // 0x2a8a18: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a14) {
            ctx->pc = 0x2A8A38u;
            goto label_2a8a38;
        }
    }
    ctx->pc = 0x2A8A1Cu;
label_2a8a1c:
    // 0x2a8a1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a8a20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8a24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8a30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a8a34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a8a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a8a38:
    // 0x2a8a38: 0xc7818e4c  lwc1        $f1, -0x71B4($gp)
    ctx->pc = 0x2a8a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a3c: 0xc7828e50  lwc1        $f2, -0x71B0($gp)
    ctx->pc = 0x2a8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8a44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8a48: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8A48u;
    SET_GPR_U32(ctx, 31, 0x2A8A50u);
    ctx->pc = 0x2A8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A48u;
    // 0x2a8a4c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8A48u, 0x2A8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A50u;
label_2a8a50:
    // 0x2a8a50: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8A50u;
    SET_GPR_U32(ctx, 31, 0x2A8A58u);
    ctx->pc = 0x2A8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A50u;
    // 0x2a8a54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8A50u, 0x2A8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A58u;
label_2a8a58:
    // 0x2a8a58: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8A58u;
    SET_GPR_U32(ctx, 31, 0x2A8A60u);
    ctx->pc = 0x2A8A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A58u;
    // 0x2a8a5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8A58u, 0x2A8A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A60u;
label_2a8a60:
    // 0x2a8a60: 0x232001b  divu        $zero, $s1, $s2
    ctx->pc = 0x2a8a60u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2a8a64: 0x7212001b  divu1       $zero, $s0, $s2
    ctx->pc = 0x2a8a64u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2a8a68: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8A68u;
    {
        const bool branch_taken_0x2a8a68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8a68) {
            ctx->pc = 0x2A8A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8A68u;
            // 0x2a8a6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8A70u;
            goto label_2a8a70;
        }
    }
    ctx->pc = 0x2A8A70u;
label_2a8a70:
    // 0x2a8a70: 0x2d53021  addu        $a2, $s6, $s5
    ctx->pc = 0x2a8a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2a8a74: 0x1810  mfhi        $v1
    ctx->pc = 0x2a8a74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a8a78: 0x70002010  mfhi1       $a0
    ctx->pc = 0x2a8a78u;
    SET_GPR_U64(ctx, 4, ctx->hi1);
    // 0x2a8a7c: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2a8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2a8a80: 0x24840032  addiu       $a0, $a0, 0x32
    ctx->pc = 0x2a8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
    // 0x2a8a84: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8a88: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2a8a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2a8a8c: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2a8a8cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2a8a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8a94: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2a8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2a8a98: 0x2810  mfhi        $a1
    ctx->pc = 0x2a8a98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2a8a9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a8aa0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2A8AA0u;
    SET_GPR_U32(ctx, 31, 0x2A8AA8u);
    ctx->pc = 0x2A8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AA0u;
    // 0x2a8aa4: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2A8AA0u, 0x2A8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AA8u;
label_2a8aa8:
    // 0x2a8aa8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8AA8u;
    {
        const bool branch_taken_0x2a8aa8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AA8u;
        // 0x2a8aac: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8aa8) {
            ctx->pc = 0x2A8AC0u;
            goto label_2a8ac0;
        }
    }
    ctx->pc = 0x2A8AB0u;
    // 0x2a8ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ab4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8ab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8AB8u;
    {
        const bool branch_taken_0x2a8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AB8u;
        // 0x2a8abc: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ab8) {
            ctx->pc = 0x2A8ADCu;
            goto label_2a8adc;
        }
    }
    ctx->pc = 0x2A8AC0u;
label_2a8ac0:
    // 0x2a8ac0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a8ac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8ac8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ad0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8ad4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a8ad8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a8ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2a8adc:
    // 0x2a8adc: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x2a8adcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x2a8ae0: 0x26c204b0  addiu       $v0, $s6, 0x4B0
    ctx->pc = 0x2a8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
    // 0x2a8ae4: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x2a8ae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x2a8ae8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2a8ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a8aec: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2a8aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2a8af0: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2A8AF0u;
    {
        const bool branch_taken_0x2a8af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AF0u;
        // 0x2a8af4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8af0) {
            ctx->pc = 0x2A8958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8958;
        }
    }
    ctx->pc = 0x2A8AF8u;
label_2a8af8:
    // 0x2a8af8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a8af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a8afc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a8afcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8b00: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2a8b00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a8b04: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a8b04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8b08: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a8b08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8b0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a8b0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8b10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a8b10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8b14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a8b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8b18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a8b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8b20: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x2a8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a8b24: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2a8b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a8b28: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2a8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8b2c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B30u;
        // 0x2a8b34: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8B38u;
}

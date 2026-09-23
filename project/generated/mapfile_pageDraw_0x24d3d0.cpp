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

// Function: mapfile_pageDraw
// Address: 0x24d3d0 - 0x24d6b8
void mapfile_pageDraw_0x24d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapfile_pageDraw_0x24d3d0");
#endif

    switch (ctx->pc) {
        case 0x24d45cu: goto label_24d45c;
        case 0x24d488u: goto label_24d488;
        case 0x24d4d8u: goto label_24d4d8;
        case 0x24d518u: goto label_24d518;
        case 0x24d520u: goto label_24d520;
        case 0x24d554u: goto label_24d554;
        case 0x24d598u: goto label_24d598;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d608u: goto label_24d608;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d654u: goto label_24d654;
        case 0x24d674u: goto label_24d674;
        default: break;
    }

    ctx->pc = 0x24d3d0u;

    // 0x24d3d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24d3d4: 0x8f88a004  lw          $t0, -0x5FFC($gp)
    ctx->pc = 0x24d3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24d3d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24d3dc: 0x3c0a3f3f  lui         $t2, 0x3F3F
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16191 << 16));
    // 0x24d3e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24d3e4: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x24d3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x24d3e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24d3ec: 0x26426ba8  addiu       $v0, $s2, 0x6BA8
    ctx->pc = 0x24d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 27560));
    // 0x24d3f0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24d3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24d3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24d3fc: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x24d3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x24d400: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24d400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24d404: 0x354a3f7f  ori         $t2, $t2, 0x3F7F
    ctx->pc = 0x24d404u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16255);
    // 0x24d408: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24d40c: 0x35297f7f  ori         $t1, $t1, 0x7F7F
    ctx->pc = 0x24d40cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    // 0x24d410: 0x84450006  lh          $a1, 0x6($v0)
    ctx->pc = 0x24d410u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x356BAEu));
    // 0x24d414: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x24d414u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x356BACu));
    // 0x24d418: 0x24a700a0  addiu       $a3, $a1, 0xA0
    ctx->pc = 0x24d418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x24d41c: 0x248601fe  addiu       $a2, $a0, 0x1FE
    ctx->pc = 0x24d41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 510));
    // 0x24d420: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x24d420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x24d424: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x24d424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x24d428: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x24d428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x24d42c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24d430: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x24d430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x24d434: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x24d434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x24d438: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x24d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x24d43c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x24d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x24d440: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24d444: 0x24082880  addiu       $t0, $zero, 0x2880
    ctx->pc = 0x24d444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    // 0x24d448: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24d448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24d44c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24d450: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x24d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x24d454: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x24D454u;
    SET_GPR_U32(ctx, 31, 0x24D45Cu);
    ctx->pc = 0x24D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D454u;
    // 0x24d458: 0x142480b  movn        $t1, $t2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x24D454u, 0x24D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D45Cu;
label_24d45c:
    // 0x24d45c: 0x9382b848  lbu         $v0, -0x47B8($gp)
    ctx->pc = 0x24d45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948936)));
    // 0x24d460: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x24d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x24d464: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24d464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d468: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x24D468u;
    {
        const bool branch_taken_0x24d468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D468u;
        // 0x24d46c: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d468) {
            ctx->pc = 0x24D694u;
            goto label_24d694;
        }
    }
    ctx->pc = 0x24D470u;
    // 0x24d470: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24d474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d478: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D478u;
    {
        const bool branch_taken_0x24d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D478u;
        // 0x24d47c: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d478) {
            ctx->pc = 0x24D490u;
            goto label_24d490;
        }
    }
    ctx->pc = 0x24D480u;
    // 0x24d480: 0xc091352  jal         func_244D48
    ctx->pc = 0x24D480u;
    SET_GPR_U32(ctx, 31, 0x24D488u);
    ctx->pc = 0x244D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D48u, 0x24D480u, 0x24D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D488u;
label_24d488:
    // 0x24d488: 0x18400082  blez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x24D488u;
    {
        const bool branch_taken_0x24d488 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D488u;
        // 0x24d48c: 0x9382a02c  lbu         $v0, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d488) {
            ctx->pc = 0x24D694u;
            goto label_24d694;
        }
    }
    ctx->pc = 0x24D490u;
label_24d490:
    // 0x24d490: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x24d490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24d494: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24d494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d498: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x24d498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24d49c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24d4a0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x24d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24d4a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x24d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x24d4a8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x24d4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x24d4ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x24d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x24d4b0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x24d4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x24d4b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x24d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x24d4b8: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x24d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24d4bc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x24d4bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x24d4c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x24d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24d4c4: 0x14850016  bne         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24D4C4u;
    {
        const bool branch_taken_0x24d4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x24D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4C4u;
        // 0x24d4c8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4c4) {
            ctx->pc = 0x24D520u;
            goto label_24d520;
        }
    }
    ctx->pc = 0x24D4CCu;
    // 0x24d4cc: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x24d4ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24d4d0: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x24D4D0u;
    SET_GPR_U32(ctx, 31, 0x24D4D8u);
    ctx->pc = 0x24D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4D0u;
    // 0x24d4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x24D4D0u, 0x24D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4D8u;
label_24d4d8:
    // 0x24d4d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24d4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4dc: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x24D4DCu;
    {
        const bool branch_taken_0x24d4dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4DCu;
        // 0x24d4e0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4dc) {
            ctx->pc = 0x24D518u;
            goto label_24d518;
        }
    }
    ctx->pc = 0x24D4E4u;
    // 0x24d4e4: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x24d4e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x24d4e8: 0x8c459a04  lw          $a1, -0x65FC($v0)
    ctx->pc = 0x24d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941188)));
    // 0x24d4ec: 0x96670006  lhu         $a3, 0x6($s3)
    ctx->pc = 0x24d4ecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x24d4f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24d4f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d4f8: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x24d4f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24d4fc: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x24d4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x24d500: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x24d500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d504: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x24d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x24d508: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24d50c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x24d50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x24d510: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24D510u;
    SET_GPR_U32(ctx, 31, 0x24D518u);
    ctx->pc = 0x24D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D510u;
    // 0x24d514: 0x35088000  ori         $t0, $t0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24D510u, 0x24D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D518u;
label_24d518:
    // 0x24d518: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x24D518u;
    SET_GPR_U32(ctx, 31, 0x24D520u);
    ctx->pc = 0x24D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D518u;
    // 0x24d51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x24D518u, 0x24D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D520u;
label_24d520:
    // 0x24d520: 0x8f83a1cc  lw          $v1, -0x5E34($gp)
    ctx->pc = 0x24d520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24d524: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x24D524u;
    {
        const bool branch_taken_0x24d524 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x24D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D524u;
        // 0x24d528: 0x26426ba8  addiu       $v0, $s2, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 27560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d524) {
            ctx->pc = 0x24D558u;
            goto label_24d558;
        }
    }
    ctx->pc = 0x24D52Cu;
    // 0x24d52c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x24d530: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x24d530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x24d534: 0xc48c99f8  lwc1        $f12, -0x6608($a0)
    ctx->pc = 0x24d534u;
    { uint32_t bits = FAST_READ32(0x3299F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d538: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24d538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24d53c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x24d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24d540: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x24d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x24d544: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24d544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24d548: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24d548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24d54c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24D54Cu;
    SET_GPR_U32(ctx, 31, 0x24D554u);
    ctx->pc = 0x24D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D54Cu;
    // 0x24d550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24D54Cu, 0x24D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D554u;
label_24d554:
    // 0x24d554: 0x8f83a1cc  lw          $v1, -0x5E34($gp)
    ctx->pc = 0x24d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
label_24d558:
    // 0x24d558: 0x8f82b868  lw          $v0, -0x4798($gp)
    ctx->pc = 0x24d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948968)));
    // 0x24d55c: 0x8f84b860  lw          $a0, -0x47A0($gp)
    ctx->pc = 0x24d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
    // 0x24d560: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24d560u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d564: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x24d564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24d568: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D568u;
    {
        const bool branch_taken_0x24d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D568u;
        // 0x24d56c: 0x26426ba8  addiu       $v0, $s2, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 27560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d568) {
            ctx->pc = 0x24D59Cu;
            goto label_24d59c;
        }
    }
    ctx->pc = 0x24D570u;
    // 0x24d570: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24d570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x24d574: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x24d574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x24d578: 0xc48c99f8  lwc1        $f12, -0x6608($a0)
    ctx->pc = 0x24d578u;
    { uint32_t bits = FAST_READ32(0x3299F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d57c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24d57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24d580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d584: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x24d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x24d588: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24d588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24d58c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24d58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24d590: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24D590u;
    SET_GPR_U32(ctx, 31, 0x24D598u);
    ctx->pc = 0x24D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D590u;
    // 0x24d594: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24D590u, 0x24D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D598u;
label_24d598:
    // 0x24d598: 0x8f84b860  lw          $a0, -0x47A0($gp)
    ctx->pc = 0x24d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
label_24d59c:
    // 0x24d59c: 0x1880003d  blez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x24D59Cu;
    {
        const bool branch_taken_0x24d59c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D59Cu;
        // 0x24d5a0: 0x8f82a0d8  lw          $v0, -0x5F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d59c) {
            ctx->pc = 0x24D694u;
            goto label_24d694;
        }
    }
    ctx->pc = 0x24D5A4u;
    // 0x24d5a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24d5a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d5ac: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x24D5ACu;
    {
        const bool branch_taken_0x24d5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5ACu;
        // 0x24d5b0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5ac) {
            ctx->pc = 0x24D698u;
            goto label_24d698;
        }
    }
    ctx->pc = 0x24D5B4u;
    // 0x24d5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d5b8: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x24D5B8u;
    SET_GPR_U32(ctx, 31, 0x24D5C0u);
    ctx->pc = 0x24D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5B8u;
    // 0x24d5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x24D5B8u, 0x24D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5C0u;
label_24d5c0:
    // 0x24d5c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24d5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d5c4: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
    ctx->pc = 0x24D5C4u;
    {
        const bool branch_taken_0x24d5c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C4u;
        // 0x24d5c8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5c4) {
            ctx->pc = 0x24D698u;
            goto label_24d698;
        }
    }
    ctx->pc = 0x24D5CCu;
    // 0x24d5cc: 0x8f84b860  lw          $a0, -0x47A0($gp)
    ctx->pc = 0x24d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
    // 0x24d5d0: 0x18800031  blez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x24D5D0u;
    {
        const bool branch_taken_0x24d5d0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5D0u;
        // 0x24d5d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5d0) {
            ctx->pc = 0x24D698u;
            goto label_24d698;
        }
    }
    ctx->pc = 0x24D5D8u;
    // 0x24d5d8: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x24d5d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x24d5dc: 0x0  nop
    ctx->pc = 0x24d5dcu;
    // NOP
label_24d5e0:
    // 0x24d5e0: 0x8f82a1cc  lw          $v0, -0x5E34($gp)
    ctx->pc = 0x24d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943180)));
    // 0x24d5e4: 0x8f83b864  lw          $v1, -0x479C($gp)
    ctx->pc = 0x24d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
    // 0x24d5e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24d5ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24d5f0: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24D5F0u;
    {
        const bool branch_taken_0x24d5f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5F0u;
        // 0x24d5f4: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5f0) {
            ctx->pc = 0x24D684u;
            goto label_24d684;
        }
    }
    ctx->pc = 0x24D5F8u;
    // 0x24d5f8: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x24d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x24d5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24d600: 0xc0acf24  jal         func_2B3C90
    ctx->pc = 0x24D600u;
    SET_GPR_U32(ctx, 31, 0x24D608u);
    ctx->pc = 0x24D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D600u;
    // 0x24d604: 0x8c44002c  lw          $a0, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C90u, 0x24D600u, 0x24D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D608u;
label_24d608:
    // 0x24d608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d60c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x24d60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d610: 0x26110009  addiu       $s1, $s0, 0x9
    ctx->pc = 0x24d610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x24d614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d618: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x24d618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x24d61c: 0x96720002  lhu         $s2, 0x2($s3)
    ctx->pc = 0x24d61cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x24d620: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24d624: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24D624u;
    SET_GPR_U32(ctx, 31, 0x24D62Cu);
    ctx->pc = 0x24D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D624u;
    // 0x24d628: 0xa3829ab5  sb          $v0, -0x654B($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24D624u, 0x24D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D62Cu;
label_24d62c:
    // 0x24d62c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x24d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d630: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x24d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x24d634: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24d634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24d638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24d638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d63c: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x24d63cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x24d640: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x24d640u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24d644: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24D644u;
    SET_GPR_U32(ctx, 31, 0x24D64Cu);
    ctx->pc = 0x24D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D644u;
    // 0x24d648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24D644u, 0x24D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D64Cu;
label_24d64c:
    // 0x24d64c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x24D64Cu;
    SET_GPR_U32(ctx, 31, 0x24D654u);
    ctx->pc = 0x24D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D64Cu;
    // 0x24d650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x24D64Cu, 0x24D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D654u;
label_24d654:
    // 0x24d654: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x24d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d658: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x24d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x24d65c: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x24d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x24d660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d664: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x24d664u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x24d668: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x24d668u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24d66c: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x24D66Cu;
    SET_GPR_U32(ctx, 31, 0x24D674u);
    ctx->pc = 0x24D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D66Cu;
    // 0x24d670: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x24D66Cu, 0x24D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D674u;
label_24d674:
    // 0x24d674: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x24d674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x24d678: 0x8f84b860  lw          $a0, -0x47A0($gp)
    ctx->pc = 0x24d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948960)));
    // 0x24d67c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x24d67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x24d680: 0xa3829ab5  sb          $v0, -0x654B($gp)
    ctx->pc = 0x24d680u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941365), (uint8_t)GPR_U32(ctx, 2));
label_24d684:
    // 0x24d684: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x24d684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24d688: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x24d688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24d68c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x24D68Cu;
    {
        const bool branch_taken_0x24d68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D68Cu;
        // 0x24d690: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d68c) {
            ctx->pc = 0x24D5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d5e0;
        }
    }
    ctx->pc = 0x24D694u;
label_24d694:
    // 0x24d694: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24d694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24d698:
    // 0x24d698: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24d698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d69c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24d69cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d6a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24d6a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d6a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24d6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d6a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24d6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d6ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24d6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6B0u;
        // 0x24d6b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D6B8u;
}

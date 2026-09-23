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

// Function: challengechr_pageTick
// Address: 0x23c3d0 - 0x23c5cc
void challengechr_pageTick_0x23c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengechr_pageTick_0x23c3d0");
#endif

    switch (ctx->pc) {
        case 0x23c404u: goto label_23c404;
        case 0x23c410u: goto label_23c410;
        case 0x23c434u: goto label_23c434;
        case 0x23c440u: goto label_23c440;
        case 0x23c448u: goto label_23c448;
        case 0x23c450u: goto label_23c450;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c468u: goto label_23c468;
        case 0x23c470u: goto label_23c470;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c530u: goto label_23c530;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c570u: goto label_23c570;
        case 0x23c578u: goto label_23c578;
        case 0x23c580u: goto label_23c580;
        case 0x23c588u: goto label_23c588;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5acu: goto label_23c5ac;
        default: break;
    }

    ctx->pc = 0x23c3d0u;

    // 0x23c3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c3d4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23c3d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23c3dc: 0x24a54e18  addiu       $a1, $a1, 0x4E18
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19992));
    // 0x23c3e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23c3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23c3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23c3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23c3f4: 0x2793b738  addiu       $s3, $gp, -0x48C8
    ctx->pc = 0x23c3f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948664));
    // 0x23c3f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c3fc: 0xc08c086  jal         func_230218
    ctx->pc = 0x23C3FCu;
    SET_GPR_U32(ctx, 31, 0x23C404u);
    ctx->pc = 0x23C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3FCu;
    // 0x23c400: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23C3FCu, 0x23C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C404u;
label_23c404:
    // 0x23c404: 0xaf809f54  sw          $zero, -0x60AC($gp)
    ctx->pc = 0x23c404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942548), GPR_U32(ctx, 0));
    // 0x23c408: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23C408u;
    SET_GPR_U32(ctx, 31, 0x23C410u);
    ctx->pc = 0x23C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C408u;
    // 0x23c40c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23C408u, 0x23C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C410u;
label_23c410:
    // 0x23c410: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c41c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23c420: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23c420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c424: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x23C424u;
    {
        const bool branch_taken_0x23c424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C424u;
        // 0x23c428: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c424) {
            ctx->pc = 0x23C460u;
            goto label_23c460;
        }
    }
    ctx->pc = 0x23C42Cu;
    // 0x23c42c: 0xc087c12  jal         func_21F048
    ctx->pc = 0x23C42Cu;
    SET_GPR_U32(ctx, 31, 0x23C434u);
    ctx->pc = 0x23C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C42Cu;
    // 0x23c430: 0x8c441224  lw          $a0, 0x1224($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x23C42Cu, 0x23C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C434u;
label_23c434:
    // 0x23c434: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x23c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23c438: 0xc08e03e  jal         func_2380F8
    ctx->pc = 0x23C438u;
    SET_GPR_U32(ctx, 31, 0x23C440u);
    ctx->pc = 0x23C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C438u;
    // 0x23c43c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2380F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2380F8u, 0x23C438u, 0x23C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C440u;
label_23c440:
    // 0x23c440: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23C440u;
    SET_GPR_U32(ctx, 31, 0x23C448u);
    ctx->pc = 0x23C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C440u;
    // 0x23c444: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23C440u, 0x23C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C448u;
label_23c448:
    // 0x23c448: 0xc08e00a  jal         func_238028
    ctx->pc = 0x23C448u;
    SET_GPR_U32(ctx, 31, 0x23C450u);
    ctx->pc = 0x23C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C448u;
    // 0x23c44c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238028u, 0x23C448u, 0x23C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C450u;
label_23c450:
    // 0x23c450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c454: 0xc08e136  jal         func_2384D8
    ctx->pc = 0x23C454u;
    SET_GPR_U32(ctx, 31, 0x23C45Cu);
    ctx->pc = 0x23C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C454u;
    // 0x23c458: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384D8u, 0x23C454u, 0x23C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C45Cu;
label_23c45c:
    // 0x23c45c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c460:
    // 0x23c460: 0xc08e16c  jal         func_2385B0
    ctx->pc = 0x23C460u;
    SET_GPR_U32(ctx, 31, 0x23C468u);
    ctx->pc = 0x23C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C460u;
    // 0x23c464: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2385B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2385B0u, 0x23C460u, 0x23C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C468u;
label_23c468:
    // 0x23c468: 0xc090744  jal         func_241D10
    ctx->pc = 0x23C468u;
    SET_GPR_U32(ctx, 31, 0x23C470u);
    ctx->pc = 0x23C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C468u;
    // 0x23c46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241D10u, 0x23C468u, 0x23C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C470u;
label_23c470:
    // 0x23c470: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c474: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c478: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x23c478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x23c47c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x23c47cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c480: 0x10700020  beq         $v1, $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23C480u;
    {
        const bool branch_taken_0x23c480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x23C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C480u;
        // 0x23c484: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c480) {
            ctx->pc = 0x23C504u;
            goto label_23c504;
        }
    }
    ctx->pc = 0x23C488u;
    // 0x23c488: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x23C488u;
    {
        const bool branch_taken_0x23c488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C488u;
        // 0x23c48c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c488) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C490u;
    // 0x23c490: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x23C490u;
    {
        const bool branch_taken_0x23c490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c490) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C498u;
    // 0x23c498: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C498u;
    SET_GPR_U32(ctx, 31, 0x23C4A0u);
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C498u, 0x23C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4A0u;
label_23c4a0:
    // 0x23c4a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23c4a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C4A4u;
    {
        const bool branch_taken_0x23c4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4A4u;
        // 0x23c4a8: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4a4) {
            ctx->pc = 0x23C4C8u;
            goto label_23c4c8;
        }
    }
    ctx->pc = 0x23C4ACu;
    // 0x23c4ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c4b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c4b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23c4b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c4b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c4c0: 0x808c052  j           func_230148
    ctx->pc = 0x23C4C0u;
    ctx->pc = 0x23C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4C0u;
    // 0x23c4c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230148u;
    pageOut_0x230148(rdram, ctx, runtime); return;
    ctx->pc = 0x23C4C8u;
label_23c4c8:
    // 0x23c4c8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C4C8u;
    SET_GPR_U32(ctx, 31, 0x23C4D0u);
    ctx->pc = 0x23C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4C8u;
    // 0x23c4cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C4C8u, 0x23C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4D0u;
label_23c4d0:
    // 0x23c4d0: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23c4d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C4D4u;
    {
        const bool branch_taken_0x23c4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4D4u;
        // 0x23c4d8: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4d4) {
            ctx->pc = 0x23C4F8u;
            goto label_23c4f8;
        }
    }
    ctx->pc = 0x23C4DCu;
    // 0x23c4dc: 0xc08e380  jal         func_238E00
    ctx->pc = 0x23C4DCu;
    SET_GPR_U32(ctx, 31, 0x23C4E4u);
    ctx->pc = 0x23C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C4DCu;
    // 0x23c4e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238E00u, 0x23C4DCu, 0x23C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C4E4u;
label_23c4e4:
    // 0x23c4e4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x23c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c4e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c4ec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23c4f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23C4F0u;
    {
        const bool branch_taken_0x23c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F0u;
        // 0x23c4f4: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4f0) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C4F8u;
label_23c4f8:
    // 0x23c4f8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23c4fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0x24513d88  addiu       $s1, $v0, 0x3D88 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C504u;
label_23c504:
    // 0x23c504: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C504u;
    SET_GPR_U32(ctx, 31, 0x23C50Cu);
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C504u, 0x23C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C50Cu;
label_23c50c:
    // 0x23c50c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23c50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23c510: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23C510u;
    {
        const bool branch_taken_0x23c510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C510u;
        // 0x23c514: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c510) {
            ctx->pc = 0x23C54Cu;
            goto label_23c54c;
        }
    }
    ctx->pc = 0x23C518u;
    // 0x23c518: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c51c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23c520: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23c524: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23c524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c528: 0xc08e380  jal         func_238E00
    ctx->pc = 0x23C528u;
    SET_GPR_U32(ctx, 31, 0x23C530u);
    ctx->pc = 0x23C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C528u;
    // 0x23c52c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238E00u, 0x23C528u, 0x23C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C530u;
label_23c530:
    // 0x23c530: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c534: 0xc08e124  jal         func_238490
    ctx->pc = 0x23C534u;
    SET_GPR_U32(ctx, 31, 0x23C53Cu);
    ctx->pc = 0x23C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C534u;
    // 0x23c538: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238490u, 0x23C534u, 0x23C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C53Cu;
label_23c53c:
    // 0x23c53c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x23c540: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23c540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23c544: 0xc080e7a  jal         func_2039E8
    ctx->pc = 0x23C544u;
    SET_GPR_U32(ctx, 31, 0x23C54Cu);
    ctx->pc = 0x23C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C544u;
    // 0x23c548: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E8u, 0x23C544u, 0x23C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C54Cu;
label_23c54c:
    // 0x23c54c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23c550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c554: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23C554u;
    SET_GPR_U32(ctx, 31, 0x23C55Cu);
    ctx->pc = 0x23C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C554u;
    // 0x23c558: 0x24513d38  addiu       $s1, $v0, 0x3D38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23C554u, 0x23C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C55Cu;
label_23c55c:
    // 0x23c55c: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x23c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x23c560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C560u;
    {
        const bool branch_taken_0x23c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C560u;
        // 0x23c564: 0x2404008f  addiu       $a0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c560) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C568u;
    // 0x23c568: 0xc081546  jal         func_205518
    ctx->pc = 0x23C568u;
    SET_GPR_U32(ctx, 31, 0x23C570u);
    ctx->pc = 0x23C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C568u;
    // 0x23c56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23C568u, 0x23C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C570u;
label_23c570:
    // 0x23c570: 0xc09071a  jal         func_241C68
    ctx->pc = 0x23C570u;
    SET_GPR_U32(ctx, 31, 0x23C578u);
    ctx->pc = 0x241C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241C68u, 0x23C570u, 0x23C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C578u;
label_23c578:
    // 0x23c578: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23C578u;
    SET_GPR_U32(ctx, 31, 0x23C580u);
    ctx->pc = 0x23C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C578u;
    // 0x23c57c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23C578u, 0x23C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C580u;
label_23c580:
    // 0x23c580: 0xc09056a  jal         func_2415A8
    ctx->pc = 0x23C580u;
    SET_GPR_U32(ctx, 31, 0x23C588u);
    ctx->pc = 0x2415A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2415A8u, 0x23C580u, 0x23C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C588u;
label_23c588:
    // 0x23c588: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C588u;
    {
        const bool branch_taken_0x23c588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C588u;
        // 0x23c58c: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c588) {
            ctx->pc = 0x23C5B0u;
            goto label_23c5b0;
        }
    }
    ctx->pc = 0x23C590u;
    // 0x23c590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c594: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x23c594u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x23c598: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23C598u;
    SET_GPR_U32(ctx, 31, 0x23C5A0u);
    ctx->pc = 0x23C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C598u;
    // 0x23c59c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23C598u, 0x23C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5A0u;
label_23c5a0:
    // 0x23c5a0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x23c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23c5a4: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23C5A4u;
    SET_GPR_U32(ctx, 31, 0x23C5ACu);
    ctx->pc = 0x23C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5A4u;
    // 0x23c5a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23C5A4u, 0x23C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5ACu;
label_23c5ac:
    // 0x23c5ac: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_23c5b0:
    // 0x23c5b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23c5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c5b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23c5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c5b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23c5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c5bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23C5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5C4u;
        // 0x23c5c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C5CCu;
}

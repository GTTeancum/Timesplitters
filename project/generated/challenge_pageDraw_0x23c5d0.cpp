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

// Function: challenge_pageDraw
// Address: 0x23c5d0 - 0x23c804
void challenge_pageDraw_0x23c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challenge_pageDraw_0x23c5d0");
#endif

    switch (ctx->pc) {
        case 0x23c610u: goto label_23c610;
        case 0x23c618u: goto label_23c618;
        case 0x23c630u: goto label_23c630;
        case 0x23c660u: goto label_23c660;
        case 0x23c668u: goto label_23c668;
        case 0x23c688u: goto label_23c688;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6c0u: goto label_23c6c0;
        case 0x23c6f0u: goto label_23c6f0;
        case 0x23c700u: goto label_23c700;
        case 0x23c710u: goto label_23c710;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c794u: goto label_23c794;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7d4u: goto label_23c7d4;
        default: break;
    }

    ctx->pc = 0x23c5d0u;

    // 0x23c5d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23c5d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23c5d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23c5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c5dc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x23c5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x23c5e0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23c5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23c5e4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23c5e8: 0x3c17002f  lui         $s7, 0x2F
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)47 << 16));
    // 0x23c5ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23c5f0: 0x3c1501fc  lui         $s5, 0x1FC
    ctx->pc = 0x23c5f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)508 << 16));
    // 0x23c5f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23c5f8: 0x26f42c18  addiu       $s4, $s7, 0x2C18
    ctx->pc = 0x23c5f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x23c5fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23c600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c604: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23c608: 0xc08c1a2  jal         func_230688
    ctx->pc = 0x23C608u;
    SET_GPR_U32(ctx, 31, 0x23C610u);
    ctx->pc = 0x23C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C608u;
    // 0x23c60c: 0x26b211f8  addiu       $s2, $s5, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230688u, 0x23C608u, 0x23C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C610u;
label_23c610:
    // 0x23c610: 0xc08089c  jal         func_202270
    ctx->pc = 0x23C610u;
    SET_GPR_U32(ctx, 31, 0x23C618u);
    ctx->pc = 0x23C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C610u;
    // 0x23c614: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x23C610u, 0x23C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C618u;
label_23c618:
    // 0x23c618: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23c618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c61c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c620: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23c620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23c624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23c624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c628: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23C628u;
    SET_GPR_U32(ctx, 31, 0x23C630u);
    ctx->pc = 0x23C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C628u;
    // 0x23c62c: 0x84504e2c  lh          $s0, 0x4E2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20012)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23C628u, 0x23C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C630u;
label_23c630:
    // 0x23c630: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c638: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x23c638u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23c63c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c640: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x23c644: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x23c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23c648: 0x24b1003c  addiu       $s1, $a1, 0x3C
    ctx->pc = 0x23c648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x23c64c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c654: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x23c654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x23c658: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23C658u;
    SET_GPR_U32(ctx, 31, 0x23C660u);
    ctx->pc = 0x23C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C658u;
    // 0x23c65c: 0x8c460410  lw          $a2, 0x410($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23C658u, 0x23C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C660u;
label_23c660:
    // 0x23c660: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23C660u;
    SET_GPR_U32(ctx, 31, 0x23C668u);
    ctx->pc = 0x23C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C660u;
    // 0x23c664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23C660u, 0x23C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C668u;
label_23c668:
    // 0x23c668: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x23c66c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23c670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c674: 0x8c440578  lw          $a0, 0x578($v0)
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x23c678: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23C678u;
    {
        const bool branch_taken_0x23c678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c678) {
            ctx->pc = 0x23C6A4u;
            goto label_23c6a4;
        }
    }
    ctx->pc = 0x23C680u;
    // 0x23c680: 0xc087fee  jal         func_21FFB8
    ctx->pc = 0x23C680u;
    SET_GPR_U32(ctx, 31, 0x23C688u);
    ctx->pc = 0x23C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C680u;
    // 0x23c684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FFB8u, 0x23C680u, 0x23C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C688u;
label_23c688:
    // 0x23c688: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x23c688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x23c68c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x23c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23c690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c694: 0xc087c5a  jal         func_21F168
    ctx->pc = 0x23C694u;
    SET_GPR_U32(ctx, 31, 0x23C69Cu);
    ctx->pc = 0x23C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C694u;
    // 0x23c698: 0x8c45057c  lw          $a1, 0x57C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F168u, 0x23C694u, 0x23C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C69Cu;
label_23c69c:
    // 0x23c69c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23C69Cu;
    {
        const bool branch_taken_0x23c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C69Cu;
        // 0x23c6a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c69c) {
            ctx->pc = 0x23C6B4u;
            goto label_23c6b4;
        }
    }
    ctx->pc = 0x23C6A4u;
label_23c6a4:
    // 0x23c6a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c6a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x23c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x23c6ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c6b0: 0x8c700414  lw          $s0, 0x414($v1)
    ctx->pc = 0x23c6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1044)));
label_23c6b4:
    // 0x23c6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6b8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x23C6B8u;
    SET_GPR_U32(ctx, 31, 0x23C6C0u);
    ctx->pc = 0x23C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6B8u;
    // 0x23c6bc: 0x26b411f8  addiu       $s4, $s5, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x23C6B8u, 0x23C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6C0u;
label_23c6c0:
    // 0x23c6c0: 0x3c124078  lui         $s2, 0x4078
    ctx->pc = 0x23c6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16504 << 16));
    // 0x23c6c4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x23c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x23c6c8: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x23c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x23c6cc: 0x247599f0  addiu       $s5, $v1, -0x6610
    ctx->pc = 0x23c6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x23c6d0: 0x3c074078  lui         $a3, 0x4078
    ctx->pc = 0x23c6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16504 << 16));
    // 0x23c6d4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x23c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3299F4u));
    // 0x23c6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23c6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6e0: 0x34e77880  ori         $a3, $a3, 0x7880
    ctx->pc = 0x23c6e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)30848);
    // 0x23c6e4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c6e8: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23C6E8u;
    SET_GPR_U32(ctx, 31, 0x23C6F0u);
    ctx->pc = 0x23C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6E8u;
    // 0x23c6ec: 0x24085080  addiu       $t0, $zero, 0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23C6E8u, 0x23C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6F0u;
label_23c6f0:
    // 0x23c6f0: 0x36527880  ori         $s2, $s2, 0x7880
    ctx->pc = 0x23c6f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)30848);
    // 0x23c6f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6f8: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23C6F8u;
    SET_GPR_U32(ctx, 31, 0x23C700u);
    ctx->pc = 0x23C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6F8u;
    // 0x23c6fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23C6F8u, 0x23C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C700u;
label_23c700:
    // 0x23c700: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x23c700u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c708: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x23C708u;
    SET_GPR_U32(ctx, 31, 0x23C710u);
    ctx->pc = 0x23C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C708u;
    // 0x23c70c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x23C708u, 0x23C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C710u;
label_23c710:
    // 0x23c710: 0x8f84b45c  lw          $a0, -0x4BA4($gp)
    ctx->pc = 0x23c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
    // 0x23c714: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x23c714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x23c718: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x23c718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23c71c: 0x34637f80  ori         $v1, $v1, 0x7F80
    ctx->pc = 0x23c71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32640);
    // 0x23c720: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x23c720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x23c724: 0x94510002  lhu         $s1, 0x2($v0)
    ctx->pc = 0x23c724u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23c728: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x23c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x23c72c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23C72Cu;
    {
        const bool branch_taken_0x23c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C72Cu;
        // 0x23c730: 0x64900b  movn        $s2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c72c) {
            ctx->pc = 0x23C760u;
            goto label_23c760;
        }
    }
    ctx->pc = 0x23C734u;
    // 0x23c734: 0x2602ffe0  addiu       $v0, $s0, -0x20
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x23c738: 0x26230005  addiu       $v1, $s1, 0x5
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x23c73c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23c73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c740: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23c740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23c744: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x23c744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x23c748: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23c748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23c74c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23c74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23c750: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x23c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23c754: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23C754u;
    SET_GPR_U32(ctx, 31, 0x23C75Cu);
    ctx->pc = 0x23C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C754u;
    // 0x23c758: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23C754u, 0x23C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C75Cu;
label_23c75c:
    // 0x23c75c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x23c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23c760:
    // 0x23c760: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x23c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x23c764: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23C764u;
    {
        const bool branch_taken_0x23c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C764u;
        // 0x23c768: 0x26220005  addiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c764) {
            ctx->pc = 0x23C794u;
            goto label_23c794;
        }
    }
    ctx->pc = 0x23C76Cu;
    // 0x23c76c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x23c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x23c770: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23c770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23c774: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x23c774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x23c778: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x23c778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x23c77c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x23c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x23c780: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x23c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23c784: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x23c784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c788: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x23c788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23c78c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x23C78Cu;
    SET_GPR_U32(ctx, 31, 0x23C794u);
    ctx->pc = 0x23C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C78Cu;
    // 0x23c790: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x23C78Cu, 0x23C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C794u;
label_23c794:
    // 0x23c794: 0xc087c12  jal         func_21F048
    ctx->pc = 0x23C794u;
    SET_GPR_U32(ctx, 31, 0x23C79Cu);
    ctx->pc = 0x23C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C794u;
    // 0x23c798: 0x8e84002c  lw          $a0, 0x2C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x23C794u, 0x23C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C79Cu;
label_23c79c:
    // 0x23c79c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23c7a0: 0x26e62c18  addiu       $a2, $s7, 0x2C18
    ctx->pc = 0x23c7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11288));
    // 0x23c7a4: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x23c7a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7b4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23c7b8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x23c7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x23c7bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c7c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23c7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7c4: 0x24085080  addiu       $t0, $zero, 0x5080
    ctx->pc = 0x23c7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20608));
    // 0x23c7c8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x23c7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x23c7cc: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x23C7CCu;
    SET_GPR_U32(ctx, 31, 0x23C7D4u);
    ctx->pc = 0x23C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7CCu;
    // 0x23c7d0: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x23C7CCu, 0x23C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7D4u;
label_23c7d4:
    // 0x23c7d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23c7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23c7dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23c7dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23c7e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23c7e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23c7e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23c7e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23c7e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23c7e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c7ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23c7ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c7f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23c7f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c7f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23c7f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c7fc: 0x808089c  j           func_202270
    ctx->pc = 0x23C7FCu;
    ctx->pc = 0x23C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7FCu;
    // 0x23c800: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x23C804u;
}

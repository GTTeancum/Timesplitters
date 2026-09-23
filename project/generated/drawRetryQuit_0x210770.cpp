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

// Function: drawRetryQuit
// Address: 0x210770 - 0x2108b4
void drawRetryQuit_0x210770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawRetryQuit_0x210770");
#endif

    switch (ctx->pc) {
        case 0x2107bcu: goto label_2107bc;
        case 0x2107e0u: goto label_2107e0;
        case 0x210808u: goto label_210808;
        case 0x21085cu: goto label_21085c;
        case 0x210888u: goto label_210888;
        default: break;
    }

    ctx->pc = 0x210770u;

    // 0x210770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x210770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x210774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x210774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210778: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x210778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21077c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x210780: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x210784: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x210784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x210788: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x210788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21078c: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x21078cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x210790: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210794: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x210794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210798: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x210798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21079c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2107a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2107a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2107a4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2107a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2107a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2107a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2107ac: 0x26d099f0  addiu       $s0, $s6, -0x6610
    ctx->pc = 0x2107acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
    // 0x2107b0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A4Cu));
    // 0x2107b4: 0xc08089c  jal         func_202270
    ctx->pc = 0x2107B4u;
    SET_GPR_U32(ctx, 31, 0x2107BCu);
    ctx->pc = 0x2107B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2107B4u;
    // 0x2107b8: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x2107B4u, 0x2107BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107BCu;
label_2107bc:
    // 0x2107bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2107bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107c0: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x2107c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x2107c4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2107c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2107c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2107cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2107ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2107d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2107d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2107d4: 0x8c7206f4  lw          $s2, 0x6F4($v1)
    ctx->pc = 0x2107d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1780)));
    // 0x2107d8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2107D8u;
    SET_GPR_U32(ctx, 31, 0x2107E0u);
    ctx->pc = 0x2107DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2107D8u;
    // 0x2107dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2107D8u, 0x2107E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107E0u;
label_2107e0:
    // 0x2107e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2107e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2107e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2107e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2107e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2107ec: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x2107ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x2107f0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2107f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2107f4: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x2107f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x2107f8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2107f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2107fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2107fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210800: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210800u;
    SET_GPR_U32(ctx, 31, 0x210808u);
    ctx->pc = 0x210804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210800u;
    // 0x210804: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210800u, 0x210808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210808u;
label_210808:
    // 0x210808: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x210808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x21080c: 0x93829ab5  lbu         $v0, -0x654B($gp)
    ctx->pc = 0x21080cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941365)));
    // 0x210810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210814u;
    {
        const bool branch_taken_0x210814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210814u;
        // 0x210818: 0x718807  srav        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210814) {
            ctx->pc = 0x21082Cu;
            goto label_21082c;
        }
    }
    ctx->pc = 0x21081Cu;
    // 0x21081c: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x21081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x210820: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x210824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210824u;
    {
        const bool branch_taken_0x210824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210824u;
        // 0x210828: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210824) {
            ctx->pc = 0x210834u;
            goto label_210834;
        }
    }
    ctx->pc = 0x21082Cu;
label_21082c:
    // 0x21082c: 0x8f839a9c  lw          $v1, -0x6564($gp)
    ctx->pc = 0x21082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x210830: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x210830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_210834:
    // 0x210834: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x210834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x210838: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x210838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x21083c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x21083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x210840: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x210840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x210844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210848: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21084c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210850: 0x8c7206f0  lw          $s2, 0x6F0($v1)
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1776)));
    // 0x210854: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x210854u;
    SET_GPR_U32(ctx, 31, 0x21085Cu);
    ctx->pc = 0x210858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210854u;
    // 0x210858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x210854u, 0x21085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21085Cu;
label_21085c:
    // 0x21085c: 0x26c599f0  addiu       $a1, $s6, -0x6610
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
    // 0x210860: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210864: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x210864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21086c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21086cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x210870: 0x8f87a01c  lw          $a3, -0x5FE4($gp)
    ctx->pc = 0x210870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
    // 0x210874: 0x8f88a020  lw          $t0, -0x5FE0($gp)
    ctx->pc = 0x210874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
    // 0x210878: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21087c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210880: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x210880u;
    SET_GPR_U32(ctx, 31, 0x210888u);
    ctx->pc = 0x210884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210880u;
    // 0x210884: 0x832023  subu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x210880u, 0x210888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210888u;
label_210888:
    // 0x210888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21088c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21088cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210890: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x210890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210894: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x210894u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210898: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x210898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21089c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21089cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2108a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2108a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2108a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2108a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2108a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2108a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2108ac: 0x808089c  j           func_202270
    ctx->pc = 0x2108ACu;
    ctx->pc = 0x2108B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108ACu;
    // 0x2108b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    textSelect_0x202270(rdram, ctx, runtime); return;
    ctx->pc = 0x2108B4u;
}

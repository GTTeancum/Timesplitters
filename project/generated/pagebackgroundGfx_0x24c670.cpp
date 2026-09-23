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

// Function: pagebackgroundGfx
// Address: 0x24c670 - 0x24c870
void pagebackgroundGfx_0x24c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pagebackgroundGfx_0x24c670");
#endif

    switch (ctx->pc) {
        case 0x24c694u: goto label_24c694;
        case 0x24c6b4u: goto label_24c6b4;
        case 0x24c75cu: goto label_24c75c;
        case 0x24c7ecu: goto label_24c7ec;
        case 0x24c7f4u: goto label_24c7f4;
        case 0x24c854u: goto label_24c854;
        default: break;
    }

    ctx->pc = 0x24c670u;

    // 0x24c670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24c674: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c678: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24c67c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24c680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c684: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24c688: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c68c: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x24C68Cu;
    SET_GPR_U32(ctx, 31, 0x24C694u);
    ctx->pc = 0x24C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C68Cu;
    // 0x24c690: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x24C68Cu, 0x24C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C694u;
label_24c694:
    // 0x24c694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c698: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c69c: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x24C69Cu;
    {
        const bool branch_taken_0x24c69c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C69Cu;
        // 0x24c6a0: 0x3c1301fc  lui         $s3, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c69c) {
            ctx->pc = 0x24C75Cu;
            goto label_24c75c;
        }
    }
    ctx->pc = 0x24C6A4u;
    // 0x24c6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6a8: 0x267039f0  addiu       $s0, $s3, 0x39F0
    ctx->pc = 0x24c6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 14832));
    // 0x24c6ac: 0xc08b0ec  jal         func_22C3B0
    ctx->pc = 0x24C6ACu;
    SET_GPR_U32(ctx, 31, 0x24C6B4u);
    ctx->pc = 0x24C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C6ACu;
    // 0x24c6b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3B0u, 0x24C6ACu, 0x24C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6B4u;
label_24c6b4:
    // 0x24c6b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24c6b8: 0x8f8aa004  lw          $t2, -0x5FFC($gp)
    ctx->pc = 0x24c6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c6bc: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x24c6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24c6c0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x24c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x24c6c4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x24c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x24c6c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24c6cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24C6CCu;
    {
        const bool branch_taken_0x24c6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6CCu;
        // 0x24c6d0: 0x3c060035  lui         $a2, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6cc) {
            ctx->pc = 0x24C708u;
            goto label_24c708;
        }
    }
    ctx->pc = 0x24C6D4u;
    // 0x24c6d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x24c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24c6d8: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x24c6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24c6dc: 0x24c27240  addiu       $v0, $a2, 0x7240
    ctx->pc = 0x24c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29248));
    // 0x24c6e0: 0x8e6939f0  lw          $t1, 0x39F0($s3)
    ctx->pc = 0x24c6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14832)));
    // 0x24c6e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x24c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x24c6e8: 0xacc47240  sw          $a0, 0x7240($a2)
    ctx->pc = 0x24c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 29248), GPR_U32(ctx, 4));
    // 0x24c6ec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x24c6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x24c6f0: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x24c6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x24c6f4: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x24c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x24c6f8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24c6fc: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x24c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x24c700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C700u;
    {
        const bool branch_taken_0x24c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C700u;
        // 0x24c704: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c700) {
            ctx->pc = 0x24C710u;
            goto label_24c710;
        }
    }
    ctx->pc = 0x24C708u;
label_24c708:
    // 0x24c708: 0x8e6939f0  lw          $t1, 0x39F0($s3)
    ctx->pc = 0x24c708u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14832)));
    // 0x24c70c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x24c70cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24c710:
    // 0x24c710: 0x2524ffdc  addiu       $a0, $t1, -0x24
    ctx->pc = 0x24c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967260));
    // 0x24c714: 0x2506000a  addiu       $a2, $t0, 0xA
    ctx->pc = 0x24c714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
    // 0x24c718: 0xae6439f0  sw          $a0, 0x39F0($s3)
    ctx->pc = 0x24c718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14832), GPR_U32(ctx, 4));
    // 0x24c71c: 0x3c083f3f  lui         $t0, 0x3F3F
    ctx->pc = 0x24c71cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16191 << 16));
    // 0x24c720: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x24c720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x24c724: 0x3c097f7f  lui         $t1, 0x7F7F
    ctx->pc = 0x24c724u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32639 << 16));
    // 0x24c728: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x24c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x24c72c: 0x35083f7f  ori         $t0, $t0, 0x3F7F
    ctx->pc = 0x24c72cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16255);
    // 0x24c730: 0x8d430014  lw          $v1, 0x14($t2)
    ctx->pc = 0x24c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x24c734: 0x35297f7f  ori         $t1, $t1, 0x7F7F
    ctx->pc = 0x24c734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32639);
    // 0x24c738: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x24c738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24c73c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x24c73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24c740: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24c740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24c744: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24c744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24c748: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x24c748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x24c74c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24c750: 0x102480b  movn        $t1, $t0, $v0
    ctx->pc = 0x24c750u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x24c754: 0xc08bb46  jal         func_22ED18
    ctx->pc = 0x24C754u;
    SET_GPR_U32(ctx, 31, 0x24C75Cu);
    ctx->pc = 0x24C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C754u;
    // 0x24c758: 0x24082880  addiu       $t0, $zero, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED18u, 0x24C754u, 0x24C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C75Cu;
label_24c75c:
    // 0x24c75c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x24c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x24c760: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24c764: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x24c764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24c768: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x24c768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24c76c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x24c76cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x24c770: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24c774: 0x14640038  bne         $v1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x24C774u;
    {
        const bool branch_taken_0x24c774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C774u;
        // 0x24c778: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c774) {
            ctx->pc = 0x24C858u;
            goto label_24c858;
        }
    }
    ctx->pc = 0x24C77Cu;
    // 0x24c77c: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x24C77Cu;
    {
        const bool branch_taken_0x24c77c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C77Cu;
        // 0x24c780: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c77c) {
            ctx->pc = 0x24C7ECu;
            goto label_24c7ec;
        }
    }
    ctx->pc = 0x24C784u;
    // 0x24c784: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x24c784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x24c788: 0x8c439a04  lw          $v1, -0x65FC($v0)
    ctx->pc = 0x24c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941188)));
    // 0x24c78c: 0x24a739f0  addiu       $a3, $a1, 0x39F0
    ctx->pc = 0x24c78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
    // 0x24c790: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x24c790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24c794: 0x96460006  lhu         $a2, 0x6($s2)
    ctx->pc = 0x24c794u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x24c798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24c798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c79c: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x24c79cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x1FC39F8u));
    // 0x24c7a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c7a4: 0x8ca939f0  lw          $t1, 0x39F0($a1)
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x1FC39F0u));
    // 0x24c7a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24c7ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24c7b0: 0x9388a02c  lbu         $t0, -0x5FD4($gp)
    ctx->pc = 0x24c7b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
    // 0x24c7b4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x24c7b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24c7bc: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x24c7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x24c7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24c7c4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x24c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7cc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x24c7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24c7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7d4: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x24c7d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x24c7d8: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x24c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x24c7dc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x24c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x24c7e0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x24c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x24c7e4: 0xc0ae108  jal         func_2B8420
    ctx->pc = 0x24C7E4u;
    SET_GPR_U32(ctx, 31, 0x24C7ECu);
    ctx->pc = 0x24C7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7E4u;
    // 0x24c7e8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8420u, 0x24C7E4u, 0x24C7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7ECu;
label_24c7ec:
    // 0x24c7ec: 0xc08b79a  jal         func_22DE68
    ctx->pc = 0x24C7ECu;
    SET_GPR_U32(ctx, 31, 0x24C7F4u);
    ctx->pc = 0x24C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7ECu;
    // 0x24c7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DE68u, 0x24C7ECu, 0x24C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7F4u;
label_24c7f4:
    // 0x24c7f4: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x24C7F4u;
    {
        const bool branch_taken_0x24c7f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7F4u;
        // 0x24c7f8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7f4) {
            ctx->pc = 0x24C854u;
            goto label_24c854;
        }
    }
    ctx->pc = 0x24C7FCu;
    // 0x24c7fc: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x24c7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24c800: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24C800u;
    {
        const bool branch_taken_0x24c800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C800u;
        // 0x24c804: 0x9386a02c  lbu         $a2, -0x5FD4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c800) {
            ctx->pc = 0x24C854u;
            goto label_24c854;
        }
    }
    ctx->pc = 0x24C808u;
    // 0x24c808: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x24c808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x24c80c: 0x96470002  lhu         $a3, 0x2($s2)
    ctx->pc = 0x24c80cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24c810: 0x248599f0  addiu       $a1, $a0, -0x6610
    ctx->pc = 0x24c810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x24c814: 0x8c8399f0  lw          $v1, -0x6610($a0)
    ctx->pc = 0x24c814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3299F0u));
    // 0x24c818: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x24c818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A04u));
    // 0x24c81c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x24c81cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24c820: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x24c820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x24c824: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x24c824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24c828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24c82c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x24c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24c830: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x24c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x24c834: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x24c834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24c838: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x24c838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x24c83c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x24c83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24c840: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x24c840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x24c844: 0x34a57f00  ori         $a1, $a1, 0x7F00
    ctx->pc = 0x24c844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32512);
    // 0x24c848: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x24c848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x24c84c: 0xc08b952  jal         func_22E548
    ctx->pc = 0x24C84Cu;
    SET_GPR_U32(ctx, 31, 0x24C854u);
    ctx->pc = 0x24C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C84Cu;
    // 0x24c850: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E548u, 0x24C84Cu, 0x24C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C854u;
label_24c854:
    // 0x24c854: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24c854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24c858:
    // 0x24c858: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c85c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c860: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c864: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c868: 0x3e00008  jr          $ra
    ctx->pc = 0x24C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C868u;
        // 0x24c86c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C870u;
}

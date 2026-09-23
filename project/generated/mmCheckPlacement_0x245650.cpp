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

// Function: mmCheckPlacement
// Address: 0x245650 - 0x2458a8
void mmCheckPlacement_0x245650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmCheckPlacement_0x245650");
#endif

    switch (ctx->pc) {
        case 0x2456a4u: goto label_2456a4;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456f8u: goto label_2456f8;
        case 0x245798u: goto label_245798;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457f8u: goto label_2457f8;
        default: break;
    }

    ctx->pc = 0x245650u;

    // 0x245650: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x245650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x245654: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x245654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x245658: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x245658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x24565c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x24565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x245660: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x245660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x245664: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x245664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x245668: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x245668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x24566c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x24566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x245670: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x245670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x245674: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x245674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x245678: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x245678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x24567c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x24567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x245680: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x245680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x245684: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x245684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x245688: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x245688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x24568c: 0x8f82a0dc  lw          $v0, -0x5F24($gp)
    ctx->pc = 0x24568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x245690: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x245690u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x245694: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x245694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x245698: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x245698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24569c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x24569Cu;
    SET_GPR_U32(ctx, 31, 0x2456A4u);
    ctx->pc = 0x2456A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24569Cu;
    // 0x2456a0: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x24569Cu, 0x2456A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456A4u;
label_2456a4:
    // 0x2456a4: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2456a8: 0x8f83a168  lw          $v1, -0x5E98($gp)
    ctx->pc = 0x2456a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x2456ac: 0x84a40026  lh          $a0, 0x26($a1)
    ctx->pc = 0x2456acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x2456b0: 0x8f86a15c  lw          $a2, -0x5EA4($gp)
    ctx->pc = 0x2456b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x2456b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2456b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2456b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2456b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2456bc: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x2456c0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2456c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2456c4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2456c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2456c8: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2456C8u;
    SET_GPR_U32(ctx, 31, 0x2456D0u);
    ctx->pc = 0x2456CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2456C8u;
    // 0x2456cc: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2456C8u, 0x2456D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456D0u;
label_2456d0:
    // 0x2456d0: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x2456d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x2456d4: 0x8f95a0f8  lw          $s5, -0x5F08($gp)
    ctx->pc = 0x2456d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x2456d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2456d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2456dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2456dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2456e0: 0x12a00062  beqz        $s5, . + 4 + (0x62 << 2)
    ctx->pc = 0x2456E0u;
    {
        const bool branch_taken_0x2456e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E0u;
        // 0x2456e4: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456e0) {
            ctx->pc = 0x24586Cu;
            goto label_24586c;
        }
    }
    ctx->pc = 0x2456E8u;
    // 0x2456e8: 0x3c08ffe0  lui         $t0, 0xFFE0
    ctx->pc = 0x2456e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65504 << 16));
    // 0x2456ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2456ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2456f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2456f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2456f4: 0x0  nop
    ctx->pc = 0x2456f4u;
    // NOP
label_2456f8:
    // 0x2456f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2456fc: 0x54620059  bnel        $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2456FCu;
    {
        const bool branch_taken_0x2456fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2456fc) {
            ctx->pc = 0x245700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2456FCu;
            // 0x245700: 0x8eb50038  lw          $s5, 0x38($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245864u;
            goto label_245864;
        }
    }
    ctx->pc = 0x245704u;
    // 0x245704: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x245704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x245708: 0x3c05fd80  lui         $a1, 0xFD80
    ctx->pc = 0x245708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64896 << 16));
    // 0x24570c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x24570cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x245710: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x245714: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x245714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x245718: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x24571c: 0x48f024  and         $fp, $v0, $t0
    ctx->pc = 0x24571cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x245720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245724: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x245724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245728: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x24572c: 0x8c740024  lw          $s4, 0x24($v1)
    ctx->pc = 0x24572cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x245730: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x245730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245734: 0x3c5102a  slt         $v0, $fp, $a1
    ctx->pc = 0x245734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245738: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x245738u;
    {
        const bool branch_taken_0x245738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245738u;
        // 0x24573c: 0x88b824  and         $s7, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245738) {
            ctx->pc = 0x24581Cu;
            goto label_24581c;
        }
    }
    ctx->pc = 0x245740u;
    // 0x245740: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x245740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x245744: 0x3c030280  lui         $v1, 0x280
    ctx->pc = 0x245744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)640 << 16));
    // 0x245748: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x245748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x24574c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x24574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x245750: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x245750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245754: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x245754u;
    {
        const bool branch_taken_0x245754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245754u;
        // 0x245758: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245754) {
            ctx->pc = 0x245820u;
            goto label_245820;
        }
    }
    ctx->pc = 0x24575Cu;
    // 0x24575c: 0x2e5102a  slt         $v0, $s7, $a1
    ctx->pc = 0x24575cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245760: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x245760u;
    {
        const bool branch_taken_0x245760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245760) {
            ctx->pc = 0x245820u;
            goto label_245820;
        }
    }
    ctx->pc = 0x245768u;
    // 0x245768: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x24576c: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x24576cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x245770: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x245770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x245774: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x245774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245778: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x245778u;
    {
        const bool branch_taken_0x245778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245778u;
        // 0x24577c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245778) {
            ctx->pc = 0x245824u;
            goto label_245824;
        }
    }
    ctx->pc = 0x245780u;
    // 0x245780: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x245780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x245784: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x245784u;
    {
        const bool branch_taken_0x245784 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x245788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245784u;
        // 0x245788: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245784) {
            ctx->pc = 0x245860u;
            goto label_245860;
        }
    }
    ctx->pc = 0x24578Cu;
    // 0x24578c: 0x2686000c  addiu       $a2, $s4, 0xC
    ctx->pc = 0x24578cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x245790: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x245790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x245794: 0x0  nop
    ctx->pc = 0x245794u;
    // NOP
label_245798:
    // 0x245798: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x245798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24579c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x24579cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2457a0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2457a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2457a4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2457a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2457a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2457a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457ac: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2457acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2457b0: 0xa48018  mult        $s0, $a1, $a0
    ctx->pc = 0x2457b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2457b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2457b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2457b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2457b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2457bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2457c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2457c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2457c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2457c8: 0x12070020  beq         $s0, $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2457C8u;
    {
        const bool branch_taken_0x2457c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x2457CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457C8u;
        // 0x2457cc: 0xaf82a0dc  sw          $v0, -0x5F24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457c8) {
            ctx->pc = 0x24584Cu;
            goto label_24584c;
        }
    }
    ctx->pc = 0x2457D0u;
label_2457d0:
    // 0x2457d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2457d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2457d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2457D4u;
    {
        const bool branch_taken_0x2457d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2457D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457D4u;
        // 0x2457d8: 0x122540  sll         $a0, $s2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457d4) {
            ctx->pc = 0x245830u;
            goto label_245830;
        }
    }
    ctx->pc = 0x2457DCu;
    // 0x2457dc: 0x162d40  sll         $a1, $s6, 21
    ctx->pc = 0x2457dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 21));
    // 0x2457e0: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x2457e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2457e4: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x2457e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x2457e8: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x2457e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x2457ec: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x2457ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x2457f0: 0xc0914ba  jal         func_2452E8
    ctx->pc = 0x2457F0u;
    SET_GPR_U32(ctx, 31, 0x2457F8u);
    ctx->pc = 0x2457F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457F0u;
    // 0x2457f4: 0x7fa80030  sq          $t0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452E8u, 0x2457F0u, 0x2457F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457F8u;
label_2457f8:
    // 0x2457f8: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x2457f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2457fc: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x2457fcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245800: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x245800u;
    {
        const bool branch_taken_0x245800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245800u;
        // 0x245804: 0x7ba80030  lq          $t0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245800) {
            ctx->pc = 0x24582Cu;
            goto label_24582c;
        }
    }
    ctx->pc = 0x245808u;
    // 0x245808: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x24580c: 0x8f83a0dc  lw          $v1, -0x5F24($gp)
    ctx->pc = 0x24580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x245810: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x245810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x245814: 0xaf83a0e4  sw          $v1, -0x5F1C($gp)
    ctx->pc = 0x245814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942948), GPR_U32(ctx, 3));
    // 0x245818: 0xaf82a0d8  sw          $v0, -0x5F28($gp)
    ctx->pc = 0x245818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
label_24581c:
    // 0x24581c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x24581cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_245820:
    // 0x245820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245824:
    // 0x245824: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x245824u;
    {
        const bool branch_taken_0x245824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245824u;
        // 0x245828: 0xaf86a0dc  sw          $a2, -0x5F24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245824) {
            ctx->pc = 0x245878u;
            goto label_245878;
        }
    }
    ctx->pc = 0x24582Cu;
label_24582c:
    // 0x24582c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x24582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_245830:
    // 0x245830: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x245830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x245834: 0x16450003  bne         $s2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x245834u;
    {
        const bool branch_taken_0x245834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x245838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245834u;
        // 0x245838: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245834) {
            ctx->pc = 0x245844u;
            goto label_245844;
        }
    }
    ctx->pc = 0x24583Cu;
    // 0x24583c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24583cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245840: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x245840u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_245844:
    // 0x245844: 0x1607ffe2  bne         $s0, $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x245844u;
    {
        const bool branch_taken_0x245844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x245848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245844u;
        // 0x245848: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245844) {
            ctx->pc = 0x2457D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2457d0;
        }
    }
    ctx->pc = 0x24584Cu;
label_24584c:
    // 0x24584c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x245850: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x245850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x245854: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x245854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245858: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x245858u;
    {
        const bool branch_taken_0x245858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245858u;
        // 0x24585c: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245858) {
            ctx->pc = 0x245798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245798;
        }
    }
    ctx->pc = 0x245860u;
label_245860:
    // 0x245860: 0x8eb50038  lw          $s5, 0x38($s5)
    ctx->pc = 0x245860u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_245864:
    // 0x245864: 0x56a0ffa4  bnel        $s5, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x245864u;
    {
        const bool branch_taken_0x245864 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x245864) {
            ctx->pc = 0x245868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245864u;
            // 0x245868: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2456F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2456f8;
        }
    }
    ctx->pc = 0x24586Cu;
label_24586c:
    // 0x24586c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245870: 0xaf82a0dc  sw          $v0, -0x5F24($gp)
    ctx->pc = 0x245870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942940), GPR_U32(ctx, 2));
    // 0x245874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245878:
    // 0x245878: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x245878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24587c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x24587cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x245880: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x245880u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x245884: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x245884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x245888: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x245888u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24588c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x24588cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x245890: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x245890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x245894: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x245894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245898: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x245898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24589c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x24589cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2458a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2458A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2458A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458A0u;
        // 0x2458a4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2458A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2458A8u;
}

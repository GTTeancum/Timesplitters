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

// Function: findNextPad
// Address: 0x2bf680 - 0x2bf82c
void findNextPad_0x2bf680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("findNextPad_0x2bf680");
#endif

    switch (ctx->pc) {
        case 0x2bf71cu: goto label_2bf71c;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf7dcu: goto label_2bf7dc;
        default: break;
    }

    ctx->pc = 0x2bf680u;

    // 0x2bf680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bf684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bf688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bf68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bf68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf690: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf694: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2bf694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bf698: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2bf698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf69c: 0x51260004  beql        $t1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF69Cu;
    {
        const bool branch_taken_0x2bf69c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x2bf69c) {
            ctx->pc = 0x2BF6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF69Cu;
            // 0x2bf6a0: 0xae0007dc  sw          $zero, 0x7DC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF6B0u;
            goto label_2bf6b0;
        }
    }
    ctx->pc = 0x2BF6A4u;
    // 0x2bf6a4: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF6A4u;
    {
        const bool branch_taken_0x2bf6a4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2BF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A4u;
        // 0x2bf6a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6a4) {
            ctx->pc = 0x2BF6BCu;
            goto label_2bf6bc;
        }
    }
    ctx->pc = 0x2BF6ACu;
    // 0x2bf6ac: 0xae0007dc  sw          $zero, 0x7DC($s0)
    ctx->pc = 0x2bf6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 0));
label_2bf6b0:
    // 0x2bf6b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bf6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bf6b4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2BF6B4u;
    {
        const bool branch_taken_0x2bf6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6B4u;
        // 0x2bf6b8: 0xae0003f0  sw          $zero, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6b4) {
            ctx->pc = 0x2BF818u;
            goto label_2bf818;
        }
    }
    ctx->pc = 0x2BF6BCu;
label_2bf6bc:
    // 0x2bf6bc: 0x55220005  bnel        $t1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF6BCu;
    {
        const bool branch_taken_0x2bf6bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf6bc) {
            ctx->pc = 0x2BF6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF6BCu;
            // 0x2bf6c0: 0x8e0303f0  lw          $v1, 0x3F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF6D4u;
            goto label_2bf6d4;
        }
    }
    ctx->pc = 0x2BF6C4u;
    // 0x2bf6c4: 0xae0007dc  sw          $zero, 0x7DC($s0)
    ctx->pc = 0x2bf6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 0));
    // 0x2bf6c8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2bf6cc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2BF6CCu;
    {
        const bool branch_taken_0x2bf6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6CCu;
        // 0x2bf6d0: 0xae0003f0  sw          $zero, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6cc) {
            ctx->pc = 0x2BF818u;
            goto label_2bf818;
        }
    }
    ctx->pc = 0x2BF6D4u;
label_2bf6d4:
    // 0x2bf6d4: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2BF6D4u;
    {
        const bool branch_taken_0x2bf6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6D4u;
        // 0x2bf6d8: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6d4) {
            ctx->pc = 0x2BF7ECu;
            goto label_2bf7ec;
        }
    }
    ctx->pc = 0x2BF6DCu;
    // 0x2bf6dc: 0x8e0207dc  lw          $v0, 0x7DC($s0)
    ctx->pc = 0x2bf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
    // 0x2bf6e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BF6E0u;
    {
        const bool branch_taken_0x2bf6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6E0u;
        // 0x2bf6e4: 0x8f84a2ec  lw          $a0, -0x5D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6e0) {
            ctx->pc = 0x2BF758u;
            goto label_2bf758;
        }
    }
    ctx->pc = 0x2BF6E8u;
    // 0x2bf6e8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2bf6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2bf6ec: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x2bf6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bf6f0: 0xc32818  mult        $a1, $a2, $v1
    ctx->pc = 0x2bf6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2bf6f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bf6f8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2bf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2bf6fc: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bf700: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2bf700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bf704: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF704u;
    {
        const bool branch_taken_0x2bf704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF704u;
        // 0x2bf708: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf704) {
            ctx->pc = 0x2BF72Cu;
            goto label_2bf72c;
        }
    }
    ctx->pc = 0x2BF70Cu;
    // 0x2bf70c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2bf70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf710: 0x260603f4  addiu       $a2, $s0, 0x3F4
    ctx->pc = 0x2bf710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1012));
    // 0x2bf714: 0xc0998fa  jal         func_2663E8
    ctx->pc = 0x2BF714u;
    SET_GPR_U32(ctx, 31, 0x2BF71Cu);
    ctx->pc = 0x2BF718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF714u;
    // 0x2bf718: 0x240700fa  addiu       $a3, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2663E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663E8u, 0x2BF714u, 0x2BF71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF71Cu;
label_2bf71c:
    // 0x2bf71c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF71Cu;
    {
        const bool branch_taken_0x2bf71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF71Cu;
        // 0x2bf720: 0xae0207dc  sw          $v0, 0x7DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf71c) {
            ctx->pc = 0x2BF74Cu;
            goto label_2bf74c;
        }
    }
    ctx->pc = 0x2BF724u;
    // 0x2bf724: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2BF724u;
    {
        const bool branch_taken_0x2bf724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF724u;
        // 0x2bf728: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf724) {
            ctx->pc = 0x2BF818u;
            goto label_2bf818;
        }
    }
    ctx->pc = 0x2BF72Cu;
label_2bf72c:
    // 0x2bf72c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2bf72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf730: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bf730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf734: 0xc099a90  jal         func_266A40
    ctx->pc = 0x2BF734u;
    SET_GPR_U32(ctx, 31, 0x2BF73Cu);
    ctx->pc = 0x2BF738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF734u;
    // 0x2bf738: 0x240700fa  addiu       $a3, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266A40u, 0x2BF734u, 0x2BF73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF73Cu;
label_2bf73c:
    // 0x2bf73c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2bf73cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf740: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF744u;
    {
        const bool branch_taken_0x2bf744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF744u;
        // 0x2bf748: 0xae0203f0  sw          $v0, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf744) {
            ctx->pc = 0x2BF758u;
            goto label_2bf758;
        }
    }
    ctx->pc = 0x2BF74Cu;
label_2bf74c:
    // 0x2bf74c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2bf74cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf750: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x2bf750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf754: 0x8e0303f0  lw          $v1, 0x3F0($s0)
    ctx->pc = 0x2bf754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
label_2bf758:
    // 0x2bf758: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BF758u;
    {
        const bool branch_taken_0x2bf758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x8f8aa2f0  lw          $t2, -0x5D10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf758) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF760u;
    // 0x2bf760: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2bf760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2bf764: 0x8f88a2ec  lw          $t0, -0x5D14($gp)
    ctx->pc = 0x2bf764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2bf768: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x2bf768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bf76c: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x2bf76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
    // 0x2bf770: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bf774: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bf774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bf778: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bf77c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2bf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2bf780: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2bf780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bf784: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bf788: 0xae0407dc  sw          $a0, 0x7DC($s0)
    ctx->pc = 0x2bf788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 4));
    // 0x2bf78c: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x2bf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x2bf790: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x2bf790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2bf794: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2bf794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2bf798: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2bf79c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2bf79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf7a0: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x2bf7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bf7a4: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x2bf7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2bf7a8: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x2bf7a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bf7ac: 0x54470001  bnel        $v0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF7ACu;
    {
        const bool branch_taken_0x2bf7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2bf7ac) {
            ctx->pc = 0x2BF7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7ACu;
            // 0x2bf7b0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7B4u;
            goto label_2bf7b4;
        }
    }
    ctx->pc = 0x2BF7B4u;
label_2bf7b4:
    // 0x2bf7b4: 0x15230005  bne         $t1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF7B4u;
    {
        const bool branch_taken_0x2bf7b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7B4u;
        // 0x2bf7b8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7b4) {
            ctx->pc = 0x2BF7CCu;
            goto label_2bf7cc;
        }
    }
    ctx->pc = 0x2BF7BCu;
    // 0x2bf7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf7c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf7c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BF7C4u;
    {
        const bool branch_taken_0x2bf7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C4u;
        // 0x2bf7c8: 0xae0203f0  sw          $v0, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7c4) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF7CCu;
label_2bf7cc:
    // 0x2bf7cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2bf7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7d0: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2bf7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2bf7d4: 0xc099a90  jal         func_266A40
    ctx->pc = 0x2BF7D4u;
    SET_GPR_U32(ctx, 31, 0x2BF7DCu);
    ctx->pc = 0x2BF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7D4u;
    // 0x2bf7d8: 0x24070063  addiu       $a3, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266A40u, 0x2BF7D4u, 0x2BF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7DCu;
label_2bf7dc:
    // 0x2bf7dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bf7e0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2bf7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf7e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf7e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7e8: 0xae0203f0  sw          $v0, 0x3F0($s0)
    ctx->pc = 0x2bf7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
label_2bf7ec:
    // 0x2bf7ec: 0x8f8aa2f0  lw          $t2, -0x5D10($gp)
    ctx->pc = 0x2bf7ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
label_2bf7f0:
    // 0x2bf7f0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2bf7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bf7f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bf7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bf7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bf7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bf7fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2bf7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bf800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bf800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf804: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x2bf804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bf808: 0x4a3021  addu        $a2, $v0, $t2
    ctx->pc = 0x2bf808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2bf80c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bf810: 0x50490001  beql        $v0, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF810u;
    {
        const bool branch_taken_0x2bf810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2bf810) {
            ctx->pc = 0x2BF814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF810u;
            // 0x2bf814: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF818u;
            goto label_2bf818;
        }
    }
    ctx->pc = 0x2BF818u;
label_2bf818:
    // 0x2bf818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bf818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf81c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf824: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF824u;
        // 0x2bf828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF82Cu;
}

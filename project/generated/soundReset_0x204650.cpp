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

// Function: soundReset
// Address: 0x204650 - 0x204744
void soundReset_0x204650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundReset_0x204650");
#endif

    switch (ctx->pc) {
        case 0x204678u: goto label_204678;
        case 0x204690u: goto label_204690;
        case 0x2046a8u: goto label_2046a8;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046d8u: goto label_2046d8;
        case 0x2046ecu: goto label_2046ec;
        case 0x204704u: goto label_204704;
        case 0x204718u: goto label_204718;
        default: break;
    }

    ctx->pc = 0x204650u;

    // 0x204650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204654: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x204658: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x20465c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20465Cu;
    {
        const bool branch_taken_0x20465c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20465Cu;
        // 0x204660: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20465c) {
            ctx->pc = 0x2046B0u;
            goto label_2046b0;
        }
    }
    ctx->pc = 0x204664u;
    // 0x204664: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x204664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x204668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20466c: 0x24055010  addiu       $a1, $zero, 0x5010
    ctx->pc = 0x20466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x204670: 0xc081128  jal         func_2044A0
    ctx->pc = 0x204670u;
    SET_GPR_U32(ctx, 31, 0x204678u);
    ctx->pc = 0x204674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204670u;
    // 0x204674: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x204670u, 0x204678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204678u;
label_204678:
    // 0x204678: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x204678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x20467c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x204680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204684: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x204684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x204688: 0xc081128  jal         func_2044A0
    ctx->pc = 0x204688u;
    SET_GPR_U32(ctx, 31, 0x204690u);
    ctx->pc = 0x20468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204688u;
    // 0x20468c: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x204688u, 0x204690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204690u;
label_204690:
    // 0x204690: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x204690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x204694: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x204694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x204698: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20469c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x20469cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2046a0: 0xc081128  jal         func_2044A0
    ctx->pc = 0x2046A0u;
    SET_GPR_U32(ctx, 31, 0x2046A8u);
    ctx->pc = 0x2046A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046A0u;
    // 0x2046a4: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x2046A0u, 0x2046A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046A8u;
label_2046a8:
    // 0x2046a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2046A8u;
    {
        const bool branch_taken_0x2046a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046a8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046B0u;
label_2046b0:
    // 0x2046b0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x2046b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x2046b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2046b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046b8: 0x24055010  addiu       $a1, $zero, 0x5010
    ctx->pc = 0x2046b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x2046bc: 0xc081128  jal         func_2044A0
    ctx->pc = 0x2046BCu;
    SET_GPR_U32(ctx, 31, 0x2046C4u);
    ctx->pc = 0x2046C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046BCu;
    // 0x2046c0: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x2046BCu, 0x2046C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046C4u;
label_2046c4:
    // 0x2046c4: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x2046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x2046c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2046c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2046cc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2046ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2046d0: 0xc081128  jal         func_2044A0
    ctx->pc = 0x2046D0u;
    SET_GPR_U32(ctx, 31, 0x2046D8u);
    ctx->pc = 0x2046D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046D0u;
    // 0x2046d4: 0x3c06001b  lui         $a2, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x2046D0u, 0x2046D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046D8u;
label_2046d8:
    // 0x2046d8: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x2046dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2046dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2046e0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x2046e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x2046e4: 0xc081128  jal         func_2044A0
    ctx->pc = 0x2046E4u;
    SET_GPR_U32(ctx, 31, 0x2046ECu);
    ctx->pc = 0x2046E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046E4u;
    // 0x2046e8: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x2046E4u, 0x2046ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046ECu;
label_2046ec:
    // 0x2046ec: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x2046ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x2046f0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x2046f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x2046f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2046f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2046f8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2046f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x2046fc: 0xc081128  jal         func_2044A0
    ctx->pc = 0x2046FCu;
    SET_GPR_U32(ctx, 31, 0x204704u);
    ctx->pc = 0x204700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2046FCu;
    // 0x204700: 0x34c68000  ori         $a2, $a2, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044A0u, 0x2046FCu, 0x204704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204704u;
label_204704:
    // 0x204704: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_204708:
    // 0x204708: 0x3403aadc  ori         $v1, $zero, 0xAADC
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43740);
    // 0x20470c: 0x2444e180  addiu       $a0, $v0, -0x1E80
    ctx->pc = 0x20470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x204710: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x204710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204714: 0x0  nop
    ctx->pc = 0x204714u;
    // NOP
label_204718:
    // 0x204718: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x204718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x20471c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20471cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x204720: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x204720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x204724: 0xa4820016  sh          $v0, 0x16($a0)
    ctx->pc = 0x204724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x204728: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x204728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x20472c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x20472cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204730: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204730) {
            ctx->pc = 0x204718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204718;
        }
    }
    ctx->pc = 0x204738u;
    // 0x204738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20473c: 0x8081130  j           func_2044C0
    ctx->pc = 0x20473Cu;
    ctx->pc = 0x204740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20473Cu;
    // 0x204740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044C0u;
    soundRestart_0x2044c0(rdram, ctx, runtime); return;
    ctx->pc = 0x204744u;
}

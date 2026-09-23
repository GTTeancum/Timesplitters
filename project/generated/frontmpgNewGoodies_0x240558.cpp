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

// Function: frontmpgNewGoodies
// Address: 0x240558 - 0x240630
void frontmpgNewGoodies_0x240558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgNewGoodies_0x240558");
#endif

    switch (ctx->pc) {
        case 0x240574u: goto label_240574;
        case 0x240588u: goto label_240588;
        case 0x24059cu: goto label_24059c;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405ecu: goto label_2405ec;
        default: break;
    }

    ctx->pc = 0x240558u;

    // 0x240558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24055c: 0x8f83b7b0  lw          $v1, -0x4850($gp)
    ctx->pc = 0x24055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948784)));
    // 0x240560: 0x8f829f4c  lw          $v0, -0x60B4($gp)
    ctx->pc = 0x240560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x240564: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x240564u;
    {
        const bool branch_taken_0x240564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240564u;
        // 0x240568: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240564) {
            ctx->pc = 0x240620u;
            goto label_240620;
        }
    }
    ctx->pc = 0x24056Cu;
    // 0x24056c: 0xc0900c8  jal         func_240320
    ctx->pc = 0x24056Cu;
    SET_GPR_U32(ctx, 31, 0x240574u);
    ctx->pc = 0x240320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240320u, 0x24056Cu, 0x240574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240574u;
label_240574:
    // 0x240574: 0x8f83b7b4  lw          $v1, -0x484C($gp)
    ctx->pc = 0x240574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
    // 0x240578: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x240578u;
    {
        const bool branch_taken_0x240578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240578u;
        // 0x24057c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240578) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x240580u;
    // 0x240580: 0xc09012c  jal         func_2404B0
    ctx->pc = 0x240580u;
    SET_GPR_U32(ctx, 31, 0x240588u);
    ctx->pc = 0x2404B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2404B0u, 0x240580u, 0x240588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240588u;
label_240588:
    // 0x240588: 0x8f83b7b8  lw          $v1, -0x4848($gp)
    ctx->pc = 0x240588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948792)));
    // 0x24058c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x24058Cu;
    {
        const bool branch_taken_0x24058c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24058c) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x240594u;
    // 0x240594: 0xc0900b6  jal         func_2402D8
    ctx->pc = 0x240594u;
    SET_GPR_U32(ctx, 31, 0x24059Cu);
    ctx->pc = 0x2402D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402D8u, 0x240594u, 0x24059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24059Cu;
label_24059c:
    // 0x24059c: 0x9383b7bc  lbu         $v1, -0x4844($gp)
    ctx->pc = 0x24059cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948796)));
    // 0x2405a0: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2405A0u;
    {
        const bool branch_taken_0x2405a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2405A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A0u;
        // 0x2405a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405a0) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x2405A8u;
    // 0x2405a8: 0xc0900e0  jal         func_240380
    ctx->pc = 0x2405A8u;
    SET_GPR_U32(ctx, 31, 0x2405B0u);
    ctx->pc = 0x2405ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405A8u;
    // 0x2405ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240380u, 0x2405A8u, 0x2405B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405B0u;
label_2405b0:
    // 0x2405b0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2405b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2405b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2405b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2405b8: 0x8c4333b0  lw          $v1, 0x33B0($v0)
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC33B0u));
    // 0x2405bc: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2405BCu;
    {
        const bool branch_taken_0x2405bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405BCu;
        // 0x2405c0: 0x244533b0  addiu       $a1, $v0, 0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405bc) {
            ctx->pc = 0x240620u;
            goto label_240620;
        }
    }
    ctx->pc = 0x2405C4u;
    // 0x2405c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2405c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2405c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2405c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2405cc: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2405CCu;
    {
        const bool branch_taken_0x2405cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2405D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405CCu;
        // 0x2405d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405cc) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x2405D4u;
    // 0x2405d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2405d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2405d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2405dc: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2405DCu;
    {
        const bool branch_taken_0x2405dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2405E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405DCu;
        // 0x2405e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405dc) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x2405E4u;
    // 0x2405e4: 0xc090106  jal         func_240418
    ctx->pc = 0x2405E4u;
    SET_GPR_U32(ctx, 31, 0x2405ECu);
    ctx->pc = 0x2405E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405E4u;
    // 0x2405e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240418u, 0x2405E4u, 0x2405ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405ECu;
label_2405ec:
    // 0x2405ec: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2405ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2405f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2405f4: 0x8c4333c0  lw          $v1, 0x33C0($v0)
    ctx->pc = 0x2405f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC33C0u));
    // 0x2405f8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2405F8u;
    {
        const bool branch_taken_0x2405f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2405FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405F8u;
        // 0x2405fc: 0x244533c0  addiu       $a1, $v0, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405f8) {
            ctx->pc = 0x240620u;
            goto label_240620;
        }
    }
    ctx->pc = 0x240600u;
    // 0x240600: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x240600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240604: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x240604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x240608: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x240608u;
    {
        const bool branch_taken_0x240608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240608u;
        // 0x24060c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240608) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x240610u;
    // 0x240610: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x240610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x240614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x240614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240618: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x240618u;
    {
        const bool branch_taken_0x240618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240618u;
        // 0x24061c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240618) {
            ctx->pc = 0x240624u;
            goto label_240624;
        }
    }
    ctx->pc = 0x240620u;
label_240620:
    // 0x240620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240624:
    // 0x240624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240628: 0x3e00008  jr          $ra
    ctx->pc = 0x240628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240628u;
        // 0x24062c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240630u;
}

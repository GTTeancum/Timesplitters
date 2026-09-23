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

// Function: GetPlayerSignOnMessage
// Address: 0x231638 - 0x2316c8
void GetPlayerSignOnMessage_0x231638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlayerSignOnMessage_0x231638");
#endif

    switch (ctx->pc) {
        case 0x231654u: goto label_231654;
        case 0x231698u: goto label_231698;
        case 0x2316a4u: goto label_2316a4;
        case 0x2316b0u: goto label_2316b0;
        default: break;
    }

    ctx->pc = 0x231638u;

    // 0x231638: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x231638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x23163c: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x23163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x231640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231644: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x231644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x231648: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x231648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x23164c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x23164Cu;
    SET_GPR_U32(ctx, 31, 0x231654u);
    ctx->pc = 0x231650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23164Cu;
    // 0x231650: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x23164Cu, 0x231654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231654u;
label_231654:
    // 0x231654: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x231654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x231658: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x231658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23165c: 0x24500b98  addiu       $s0, $v0, 0xB98
    ctx->pc = 0x23165cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
    // 0x231660: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x231660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x231664: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x231664u;
    {
        const bool branch_taken_0x231664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231664u;
        // 0x231668: 0xa0400b98  sb          $zero, 0xB98($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2968), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231664) {
            ctx->pc = 0x2316A4u;
            goto label_2316a4;
        }
    }
    ctx->pc = 0x23166Cu;
    // 0x23166c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x231670: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x231674: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x231674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x231678: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x231678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x23167c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23167cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231680: 0x24841950  addiu       $a0, $a0, 0x1950
    ctx->pc = 0x231680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6480));
    // 0x231684: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x231684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231688: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x231688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23168c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231690: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x231690u;
    SET_GPR_U32(ctx, 31, 0x231698u);
    ctx->pc = 0x231694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231690u;
    // 0x231694: 0x8c45058c  lw          $a1, 0x58C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x231690u, 0x231698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231698u;
label_231698:
    // 0x231698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23169c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x23169Cu;
    SET_GPR_U32(ctx, 31, 0x2316A4u);
    ctx->pc = 0x2316A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23169Cu;
    // 0x2316a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x23169Cu, 0x2316A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316A4u;
label_2316a4:
    // 0x2316a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2316a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316a8: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x2316A8u;
    SET_GPR_U32(ctx, 31, 0x2316B0u);
    ctx->pc = 0x2316ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316A8u;
    // 0x2316ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x2316A8u, 0x2316B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316B0u;
label_2316b0:
    // 0x2316b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2316b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316b4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2316b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2316b8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x2316b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2316bc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2316bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2316c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2316C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2316C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316C0u;
        // 0x2316c4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2316C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2316C8u;
}

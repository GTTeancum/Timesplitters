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

// Function: playerDeathMessage
// Address: 0x2803c8 - 0x280484
void playerDeathMessage_0x2803c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerDeathMessage_0x2803c8");
#endif

    switch (ctx->pc) {
        case 0x280434u: goto label_280434;
        case 0x280440u: goto label_280440;
        case 0x280454u: goto label_280454;
        default: break;
    }

    ctx->pc = 0x2803c8u;

    // 0x2803c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2803c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2803cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2803ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2803d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2803d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2803d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2803d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803d8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x2803d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x2803dc: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2803dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2803e0: 0x8ca40100  lw          $a0, 0x100($a1)
    ctx->pc = 0x2803e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x2803e4: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2803E4u;
    {
        const bool branch_taken_0x2803e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803E4u;
        // 0x2803e8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803e4) {
            ctx->pc = 0x280474u;
            goto label_280474;
        }
    }
    ctx->pc = 0x2803ECu;
    // 0x2803ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2803ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2803f0: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2803F0u;
    {
        const bool branch_taken_0x2803f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2803F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803F0u;
        // 0x2803f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803f0) {
            ctx->pc = 0x280478u;
            goto label_280478;
        }
    }
    ctx->pc = 0x2803F8u;
    // 0x2803f8: 0x8c840160  lw          $a0, 0x160($a0)
    ctx->pc = 0x2803f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2803fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2803fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x280400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x280400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280404: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x280404u;
    {
        const bool branch_taken_0x280404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x280408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280404u;
        // 0x280408: 0x8f839354  lw          $v1, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280404) {
            ctx->pc = 0x280448u;
            goto label_280448;
        }
    }
    ctx->pc = 0x28040Cu;
    // 0x28040c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x280410: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x280410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x280414: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x280414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x280418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28041c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x28041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x280420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x280420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280424: 0x2484f9f0  addiu       $a0, $a0, -0x610
    ctx->pc = 0x280424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965744));
    // 0x280428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x280428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28042c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x28042Cu;
    SET_GPR_U32(ctx, 31, 0x280434u);
    ctx->pc = 0x280430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28042Cu;
    // 0x280430: 0x8c4511d4  lw          $a1, 0x11D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x28042Cu, 0x280434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280434u;
label_280434:
    // 0x280434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280438: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x280438u;
    SET_GPR_U32(ctx, 31, 0x280440u);
    ctx->pc = 0x28043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280438u;
    // 0x28043c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x280438u, 0x280440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280440u;
label_280440:
    // 0x280440: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280440u;
    {
        const bool branch_taken_0x280440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280440u;
        // 0x280444: 0x8e030180  lw          $v1, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280440) {
            ctx->pc = 0x280458u;
            goto label_280458;
        }
    }
    ctx->pc = 0x280448u;
label_280448:
    // 0x280448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28044c: 0xc0a01a4  jal         func_280690
    ctx->pc = 0x28044Cu;
    SET_GPR_U32(ctx, 31, 0x280454u);
    ctx->pc = 0x280450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28044Cu;
    // 0x280450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280690u, 0x28044Cu, 0x280454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280454u;
label_280454:
    // 0x280454: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x280454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_280458:
    // 0x280458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28045c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280460: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x280460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x280464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280468: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28046c: 0x80ac264  j           func_2B0990
    ctx->pc = 0x28046Cu;
    ctx->pc = 0x280470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28046Cu;
    // 0x280470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0990u;
    hudMessage_0x2b0990(rdram, ctx, runtime); return;
    ctx->pc = 0x280474u;
label_280474:
    // 0x280474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_280478:
    // 0x280478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28047c: 0x3e00008  jr          $ra
    ctx->pc = 0x28047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28047Cu;
        // 0x280480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280484u;
}

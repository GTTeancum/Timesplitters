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

// Function: GetPlayerDialogTitle
// Address: 0x2315b0 - 0x231634
void GetPlayerDialogTitle_0x2315b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlayerDialogTitle_0x2315b0");
#endif

    switch (ctx->pc) {
        case 0x2315d4u: goto label_2315d4;
        case 0x231610u: goto label_231610;
        case 0x23161cu: goto label_23161c;
        default: break;
    }

    ctx->pc = 0x2315b0u;

    // 0x2315b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2315b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2315b4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2315b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2315b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2315b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2315bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2315bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2315c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2315c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315c4: 0x24500a98  addiu       $s0, $v0, 0xA98
    ctx->pc = 0x2315c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2712));
    // 0x2315c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2315c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2315cc: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x2315CCu;
    SET_GPR_U32(ctx, 31, 0x2315D4u);
    ctx->pc = 0x2315D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315CCu;
    // 0x2315d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x2315CCu, 0x2315D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315D4u;
label_2315d4:
    // 0x2315d4: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x2315d8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2315d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2315dc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2315DCu;
    {
        const bool branch_taken_0x2315dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2315E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315DCu;
        // 0x2315e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315dc) {
            ctx->pc = 0x231620u;
            goto label_231620;
        }
    }
    ctx->pc = 0x2315E4u;
    // 0x2315e4: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x2315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2315e8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2315e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2315ec: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x2315ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2315f0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2315f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2315f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2315f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2315f8: 0x24841940  addiu       $a0, $a0, 0x1940
    ctx->pc = 0x2315f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6464));
    // 0x2315fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2315fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231600: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x231604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231608: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x231608u;
    SET_GPR_U32(ctx, 31, 0x231610u);
    ctx->pc = 0x23160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231608u;
    // 0x23160c: 0x8c450588  lw          $a1, 0x588($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x231608u, 0x231610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231610u;
label_231610:
    // 0x231610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x231610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231614: 0xc0b96d7  jal         func_2E5B5C
    ctx->pc = 0x231614u;
    SET_GPR_U32(ctx, 31, 0x23161Cu);
    ctx->pc = 0x231618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231614u;
    // 0x231618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5B5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5B5Cu, 0x231614u, 0x23161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23161Cu;
label_23161c:
    // 0x23161c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23161cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231620:
    // 0x231620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231624: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23162c: 0x3e00008  jr          $ra
    ctx->pc = 0x23162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23162Cu;
        // 0x231630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231634u;
}

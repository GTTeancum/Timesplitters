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

// Function: lvGetNameFromNum
// Address: 0x2258b8 - 0x225950
void lvGetNameFromNum_0x2258b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetNameFromNum_0x2258b8");
#endif

    switch (ctx->pc) {
        case 0x2258f8u: goto label_2258f8;
        default: break;
    }

    ctx->pc = 0x2258b8u;

    // 0x2258b8: 0x8f869354  lw          $a2, -0x6CAC($gp)
    ctx->pc = 0x2258b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2258bc: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2258bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2258c0: 0x24472c18  addiu       $a3, $v0, 0x2C18
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x2258c4: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x2258c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2258c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2258cc: 0x85433920  lh          $v1, 0x3920($t2)
    ctx->pc = 0x2258ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14624)));
    // 0x2258d0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2258d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2258d4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2258d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2258dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2258e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2258e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2258e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2258e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2258e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2258E8u;
    {
        const bool branch_taken_0x2258e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258E8u;
        // 0x2258ec: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258e8) {
            ctx->pc = 0x225948u;
            goto label_225948;
        }
    }
    ctx->pc = 0x2258F0u;
    // 0x2258f0: 0x25453920  addiu       $a1, $t2, 0x3920
    ctx->pc = 0x2258f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 14624));
    // 0x2258f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2258f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2258f8:
    // 0x2258f8: 0x54480009  bnel        $v0, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2258F8u;
    {
        const bool branch_taken_0x2258f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2258f8) {
            ctx->pc = 0x2258FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2258F8u;
            // 0x2258fc: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225920u;
            goto label_225920;
        }
    }
    ctx->pc = 0x225900u;
    // 0x225900: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x225900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x225904: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x225904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225908: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22590c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22590cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225918: 0x3e00008  jr          $ra
    ctx->pc = 0x225918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225918u;
        // 0x22591c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225920u;
label_225920:
    // 0x225920: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x225920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x225924: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x225924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x225928: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x225928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22592c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x225930: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22593c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225940: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x225940u;
    {
        const bool branch_taken_0x225940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225940) {
            ctx->pc = 0x225944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225940u;
            // 0x225944: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2258F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2258f8;
        }
    }
    ctx->pc = 0x225948u;
label_225948:
    // 0x225948: 0x3e00008  jr          $ra
    ctx->pc = 0x225948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225948u;
        // 0x22594c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225950u;
}

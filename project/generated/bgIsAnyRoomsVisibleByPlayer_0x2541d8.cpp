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

// Function: bgIsAnyRoomsVisibleByPlayer
// Address: 0x2541d8 - 0x254260
void bgIsAnyRoomsVisibleByPlayer_0x2541d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgIsAnyRoomsVisibleByPlayer_0x2541d8");
#endif

    switch (ctx->pc) {
        case 0x254200u: goto label_254200;
        default: break;
    }

    ctx->pc = 0x2541d8u;

    // 0x2541d8: 0x8f86a264  lw          $a2, -0x5D9C($gp)
    ctx->pc = 0x2541d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x2541dc: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2541DCu;
    {
        const bool branch_taken_0x2541dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2541E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541DCu;
        // 0x2541e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541dc) {
            ctx->pc = 0x254258u;
            goto label_254258;
        }
    }
    ctx->pc = 0x2541E4u;
    // 0x2541e4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2541e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2541e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2541e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2541ec: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x2541f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2541f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2541f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2541f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2541f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541fc: 0x0  nop
    ctx->pc = 0x2541fcu;
    // NOP
label_254200:
    // 0x254200: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x254200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254204: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x254204u;
    {
        const bool branch_taken_0x254204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254204) {
            ctx->pc = 0x254208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254204u;
            // 0x254208: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x25420Cu;
    // 0x25420c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254210: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x254210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x254214: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x254214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x254218: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x254218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25421c: 0x4e2000a  bltzl       $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x25421Cu;
    {
        const bool branch_taken_0x25421c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x25421c) {
            ctx->pc = 0x254220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25421Cu;
            // 0x254220: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x254224u;
    // 0x254224: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x254224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254228: 0x28c20280  slti        $v0, $a2, 0x280
    ctx->pc = 0x254228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x25422c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25422Cu;
    {
        const bool branch_taken_0x25422c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25422Cu;
        // 0x254230: 0xc7102a  slt         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25422c) {
            ctx->pc = 0x254244u;
            goto label_254244;
        }
    }
    ctx->pc = 0x254234u;
    // 0x254234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254234u;
    {
        const bool branch_taken_0x254234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254234u;
        // 0x254238: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254234) {
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x25423Cu;
    // 0x25423c: 0x3e00008  jr          $ra
    ctx->pc = 0x25423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25423Cu;
        // 0x254240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254244u;
label_254244:
    // 0x254244: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x254244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_254248:
    // 0x254248: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x254248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x25424c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x25424cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x254250: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x254250u;
    {
        const bool branch_taken_0x254250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254250u;
        // 0x254254: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254250) {
            ctx->pc = 0x254200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254200;
        }
    }
    ctx->pc = 0x254258u;
label_254258:
    // 0x254258: 0x3e00008  jr          $ra
    ctx->pc = 0x254258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254258u;
        // 0x25425c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254260u;
}

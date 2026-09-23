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

// Function: hr_findroutetohall
// Address: 0x266000 - 0x266054
void hr_findroutetohall_0x266000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_findroutetohall_0x266000");
#endif

    switch (ctx->pc) {
        case 0x266018u: goto label_266018;
        default: break;
    }

    ctx->pc = 0x266000u;

    // 0x266000: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x266000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266004: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x266004u;
    {
        const bool branch_taken_0x266004 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x266008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266004u;
        // 0x266008: 0x8f87a2ec  lw          $a3, -0x5D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266004) {
            ctx->pc = 0x26604Cu;
            goto label_26604c;
        }
    }
    ctx->pc = 0x26600Cu;
    // 0x26600c: 0x3c0801fc  lui         $t0, 0x1FC
    ctx->pc = 0x26600cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)508 << 16));
    // 0x266010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x266010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x266014: 0x0  nop
    ctx->pc = 0x266014u;
    // NOP
label_266018:
    // 0x266018: 0x25026490  addiu       $v0, $t0, 0x6490
    ctx->pc = 0x266018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 25744));
    // 0x26601c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x26601cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x266020: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x266020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x266024: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x266024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x266028: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x266028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26602c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x266030: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x266030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x266034: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266034u;
    {
        const bool branch_taken_0x266034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x266034) {
            ctx->pc = 0x266038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266034u;
            // 0x266038: 0x84c30000  lh          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266044u;
            goto label_266044;
        }
    }
    ctx->pc = 0x26603Cu;
    // 0x26603c: 0x3e00008  jr          $ra
    ctx->pc = 0x26603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26603Cu;
        // 0x266040: 0x84c20006  lh          $v0, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266044u;
label_266044:
    // 0x266044: 0x461fff4  bgez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x266044u;
    {
        const bool branch_taken_0x266044 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x266048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266044u;
        // 0x266048: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266044) {
            ctx->pc = 0x266018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266018;
        }
    }
    ctx->pc = 0x26604Cu;
label_26604c:
    // 0x26604c: 0x3e00008  jr          $ra
    ctx->pc = 0x26604Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26604Cu;
        // 0x266050: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26604Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266054u;
}

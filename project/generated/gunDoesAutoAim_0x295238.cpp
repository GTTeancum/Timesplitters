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

// Function: gunDoesAutoAim
// Address: 0x295238 - 0x295264
void gunDoesAutoAim_0x295238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunDoesAutoAim_0x295238");
#endif

    ctx->pc = 0x295238u;

    // 0x295238: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x295238u;
    {
        const bool branch_taken_0x295238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295238u;
        // 0x29523c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295238) {
            ctx->pc = 0x29525Cu;
            goto label_29525c;
        }
    }
    ctx->pc = 0x295240u;
    // 0x295240: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x295240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x295244: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295244u;
    {
        const bool branch_taken_0x295244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x295248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295244u;
        // 0x295248: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295244) {
            ctx->pc = 0x295254u;
            goto label_295254;
        }
    }
    ctx->pc = 0x29524Cu;
    // 0x29524c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29524Cu;
    {
        const bool branch_taken_0x29524c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29524c) {
            ctx->pc = 0x29525Cu;
            goto label_29525c;
        }
    }
    ctx->pc = 0x295254u;
label_295254:
    // 0x295254: 0x3e00008  jr          $ra
    ctx->pc = 0x295254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295254u;
        // 0x295258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29525Cu;
label_29525c:
    // 0x29525c: 0x3e00008  jr          $ra
    ctx->pc = 0x29525Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29525Cu;
        // 0x295260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29525Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295264u;
}

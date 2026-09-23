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

// Function: getLastStandInfo
// Address: 0x21df58 - 0x21df8c
void getLastStandInfo_0x21df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastStandInfo_0x21df58");
#endif

    switch (ctx->pc) {
        case 0x21df68u: goto label_21df68;
        default: break;
    }

    ctx->pc = 0x21df58u;

    // 0x21df58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21df5c: 0x2443c440  addiu       $v1, $v0, -0x3BC0
    ctx->pc = 0x21df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
    // 0x21df60: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x21df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x21df64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21df64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C440u));
label_21df68:
    // 0x21df68: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF68u;
    {
        const bool branch_taken_0x21df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21df68) {
            ctx->pc = 0x21DF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DF68u;
            // 0x21df6c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DF78u;
            goto label_21df78;
        }
    }
    ctx->pc = 0x21DF70u;
    // 0x21df70: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF70u;
        // 0x21df74: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DF78u;
label_21df78:
    // 0x21df78: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21df78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21df7c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21DF7Cu;
    {
        const bool branch_taken_0x21df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21df7c) {
            ctx->pc = 0x21DF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DF7Cu;
            // 0x21df80: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21df68;
        }
    }
    ctx->pc = 0x21DF84u;
    // 0x21df84: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF84u;
        // 0x21df88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DF8Cu;
}

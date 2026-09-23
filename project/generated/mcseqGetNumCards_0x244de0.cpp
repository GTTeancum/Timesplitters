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

// Function: mcseqGetNumCards
// Address: 0x244de0 - 0x244e18
void mcseqGetNumCards_0x244de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqGetNumCards_0x244de0");
#endif

    switch (ctx->pc) {
        case 0x244df0u: goto label_244df0;
        default: break;
    }

    ctx->pc = 0x244de0u;

    // 0x244de0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x244de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x244de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x244de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244de8: 0x24463710  addiu       $a2, $v0, 0x3710
    ctx->pc = 0x244de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x244dec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_244df0:
    // 0x244df0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x244df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x244df4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x244df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x244df8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x244df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x244dfc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x244dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x244e00: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x244e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x244e04: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x244e04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x244e08: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x244E08u;
    {
        const bool branch_taken_0x244e08 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x244e08) {
            ctx->pc = 0x244DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244df0;
        }
    }
    ctx->pc = 0x244E10u;
    // 0x244e10: 0x3e00008  jr          $ra
    ctx->pc = 0x244E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E10u;
        // 0x244e14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E18u;
}

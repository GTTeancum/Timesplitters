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

// Function: padNumFromExtref
// Address: 0x264e00 - 0x264e48
void padNumFromExtref_0x264e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padNumFromExtref_0x264e00");
#endif

    switch (ctx->pc) {
        case 0x264e18u: goto label_264e18;
        default: break;
    }

    ctx->pc = 0x264e00u;

    // 0x264e00: 0x8f87a348  lw          $a3, -0x5CB8($gp)
    ctx->pc = 0x264e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943560)));
    // 0x264e04: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x264E04u;
    {
        const bool branch_taken_0x264e04 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x264E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E04u;
        // 0x264e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e04) {
            ctx->pc = 0x264E40u;
            goto label_264e40;
        }
    }
    ctx->pc = 0x264E0Cu;
    // 0x264e0c: 0x8f86a2ec  lw          $a2, -0x5D14($gp)
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x264e10: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x264e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x264e14: 0x0  nop
    ctx->pc = 0x264e14u;
    // NOP
label_264e18:
    // 0x264e18: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x264e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264e1c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x264e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x264e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x264e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264e24: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264E24u;
    {
        const bool branch_taken_0x264e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x264e24) {
            ctx->pc = 0x264E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264E24u;
            // 0x264e28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264E34u;
            goto label_264e34;
        }
    }
    ctx->pc = 0x264E2Cu;
    // 0x264e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x264E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E2Cu;
        // 0x264e30: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264E34u;
label_264e34:
    // 0x264e34: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x264e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x264e38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x264E38u;
    {
        const bool branch_taken_0x264e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E38u;
        // 0x264e3c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e38) {
            ctx->pc = 0x264E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264e18;
        }
    }
    ctx->pc = 0x264E40u;
label_264e40:
    // 0x264e40: 0x3e00008  jr          $ra
    ctx->pc = 0x264E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E40u;
        // 0x264e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264E48u;
}

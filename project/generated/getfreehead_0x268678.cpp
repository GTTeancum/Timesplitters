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

// Function: getfreehead
// Address: 0x268678 - 0x2686c0
void getfreehead_0x268678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getfreehead_0x268678");
#endif

    switch (ctx->pc) {
        case 0x268690u: goto label_268690;
        default: break;
    }

    ctx->pc = 0x268678u;

    // 0x268678: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x268678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x26867c: 0x8f84b09c  lw          $a0, -0x4F64($gp)
    ctx->pc = 0x26867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946972)));
    // 0x268680: 0x2443dec0  addiu       $v1, $v0, -0x2140
    ctx->pc = 0x268680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
    // 0x268684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268688: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x268688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26868c: 0x0  nop
    ctx->pc = 0x26868cu;
    // NOP
label_268690:
    // 0x268690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x268690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268694: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268694u;
    {
        const bool branch_taken_0x268694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268694u;
        // 0x268698: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268694) {
            ctx->pc = 0x2686A8u;
            goto label_2686a8;
        }
    }
    ctx->pc = 0x26869Cu;
    // 0x26869c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x26869cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2686a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2686A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2686A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686A0u;
        // 0x2686a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686A8u;
label_2686a8:
    // 0x2686a8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2686a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2686ac: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x2686acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2686b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2686B0u;
    {
        const bool branch_taken_0x2686b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2686B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686B0u;
        // 0x2686b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686b0) {
            ctx->pc = 0x268690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268690;
        }
    }
    ctx->pc = 0x2686B8u;
    // 0x2686b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2686B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2686BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686B8u;
        // 0x2686bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686C0u;
}

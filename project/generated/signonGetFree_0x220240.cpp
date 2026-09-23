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

// Function: signonGetFree
// Address: 0x220240 - 0x220270
void signonGetFree_0x220240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonGetFree_0x220240");
#endif

    switch (ctx->pc) {
        case 0x220248u: goto label_220248;
        default: break;
    }

    ctx->pc = 0x220240u;

    // 0x220240: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x220240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x220244: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220248:
    // 0x220248: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x220248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22024c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22024Cu;
    {
        const bool branch_taken_0x22024c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22024c) {
            ctx->pc = 0x220250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22024Cu;
            // 0x220250: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22025Cu;
            goto label_22025c;
        }
    }
    ctx->pc = 0x220254u;
    // 0x220254: 0x3e00008  jr          $ra
    ctx->pc = 0x220254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220254u;
        // 0x220258: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22025Cu;
label_22025c:
    // 0x22025c: 0x28820090  slti        $v0, $a0, 0x90
    ctx->pc = 0x22025cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x220260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x220260u;
    {
        const bool branch_taken_0x220260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220260u;
        // 0x220264: 0x24630b78  addiu       $v1, $v1, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220260) {
            ctx->pc = 0x220248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220248;
        }
    }
    ctx->pc = 0x220268u;
    // 0x220268: 0x3e00008  jr          $ra
    ctx->pc = 0x220268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220268u;
        // 0x22026c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220270u;
}

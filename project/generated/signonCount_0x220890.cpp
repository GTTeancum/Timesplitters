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

// Function: signonCount
// Address: 0x220890 - 0x2208c8
void signonCount_0x220890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonCount_0x220890");
#endif

    switch (ctx->pc) {
        case 0x2208a8u: goto label_2208a8;
        default: break;
    }

    ctx->pc = 0x220890u;

    // 0x220890: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x220890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x220894: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x220894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220898: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220898u;
    {
        const bool branch_taken_0x220898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220898u;
        // 0x22089c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220898) {
            ctx->pc = 0x2208C0u;
            goto label_2208c0;
        }
    }
    ctx->pc = 0x2208A0u;
    // 0x2208a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2208a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2208a4: 0x0  nop
    ctx->pc = 0x2208a4u;
    // NOP
label_2208a8:
    // 0x2208a8: 0x28820090  slti        $v0, $a0, 0x90
    ctx->pc = 0x2208a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x2208ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2208ACu;
    {
        const bool branch_taken_0x2208ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208ACu;
        // 0x2208b0: 0x24630b78  addiu       $v1, $v1, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208ac) {
            ctx->pc = 0x2208C0u;
            goto label_2208c0;
        }
    }
    ctx->pc = 0x2208B4u;
    // 0x2208b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2208b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2208b8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2208B8u;
    {
        const bool branch_taken_0x2208b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2208b8) {
            ctx->pc = 0x2208BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2208B8u;
            // 0x2208bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2208A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2208a8;
        }
    }
    ctx->pc = 0x2208C0u;
label_2208c0:
    // 0x2208c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2208C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208C0u;
        // 0x2208c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2208C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2208C8u;
}

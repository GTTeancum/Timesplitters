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

// Function: bgGetVolume
// Address: 0x257638 - 0x25767c
void bgGetVolume_0x257638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGetVolume_0x257638");
#endif

    switch (ctx->pc) {
        case 0x257650u: goto label_257650;
        default: break;
    }

    ctx->pc = 0x257638u;

    // 0x257638: 0x8f87a26c  lw          $a3, -0x5D94($gp)
    ctx->pc = 0x257638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943340)));
    // 0x25763c: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x25763Cu;
    {
        const bool branch_taken_0x25763c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x257640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25763Cu;
        // 0x257640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25763c) {
            ctx->pc = 0x257670u;
            goto label_257670;
        }
    }
    ctx->pc = 0x257644u;
    // 0x257644: 0x8f86a248  lw          $a2, -0x5DB8($gp)
    ctx->pc = 0x257644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x257648: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x257648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x25764c: 0x0  nop
    ctx->pc = 0x25764cu;
    // NOP
label_257650:
    // 0x257650: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x257650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x257654: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x257654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x257658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25765c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25765Cu;
    {
        const bool branch_taken_0x25765c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x257660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25765Cu;
        // 0x257660: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25765c) {
            ctx->pc = 0x257674u;
            goto label_257674;
        }
    }
    ctx->pc = 0x257664u;
    // 0x257664: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x257664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x257668: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x257668u;
    {
        const bool branch_taken_0x257668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257668u;
        // 0x25766c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257668) {
            ctx->pc = 0x257650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257650;
        }
    }
    ctx->pc = 0x257670u;
label_257670:
    // 0x257670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257674:
    // 0x257674: 0x3e00008  jr          $ra
    ctx->pc = 0x257674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25767Cu;
}

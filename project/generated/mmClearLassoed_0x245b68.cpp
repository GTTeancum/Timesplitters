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

// Function: mmClearLassoed
// Address: 0x245b68 - 0x245ba4
void mmClearLassoed_0x245b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmClearLassoed_0x245b68");
#endif

    switch (ctx->pc) {
        case 0x245b80u: goto label_245b80;
        default: break;
    }

    ctx->pc = 0x245b68u;

    // 0x245b68: 0x8f83a12c  lw          $v1, -0x5ED4($gp)
    ctx->pc = 0x245b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x245b6c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x245B6Cu;
    {
        const bool branch_taken_0x245b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b6c) {
            ctx->pc = 0x245B9Cu;
            goto label_245b9c;
        }
    }
    ctx->pc = 0x245B74u;
    // 0x245b74: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x245b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x245b78: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x245b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x245b7c: 0x0  nop
    ctx->pc = 0x245b7cu;
    // NOP
label_245b80:
    // 0x245b80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x245b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x245b84: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x245b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x245b88: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x245b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x245b8c: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x245b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x245b90: 0x0  nop
    ctx->pc = 0x245b90u;
    // NOP
    // 0x245b94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x245B94u;
    {
        const bool branch_taken_0x245b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x245b94) {
            ctx->pc = 0x245B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245b80;
        }
    }
    ctx->pc = 0x245B9Cu;
label_245b9c:
    // 0x245b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x245B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B9Cu;
        // 0x245ba0: 0xaf80a108  sw          $zero, -0x5EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245BA4u;
}

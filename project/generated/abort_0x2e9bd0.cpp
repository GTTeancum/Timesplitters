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

// Function: abort
// Address: 0x2e9bd0 - 0x2e9bf0
void abort_0x2e9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("abort_0x2e9bd0");
#endif

    switch (ctx->pc) {
        case 0x2e9bd8u: goto label_2e9bd8;
        case 0x2e9be0u: goto label_2e9be0;
        case 0x2e9be8u: goto label_2e9be8;
        default: break;
    }

    ctx->pc = 0x2e9bd0u;

    // 0x2e9bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e9bd8:
    // 0x2e9bd8: 0xc0bb4ea  jal         func_2ED3A8
    ctx->pc = 0x2E9BD8u;
    SET_GPR_U32(ctx, 31, 0x2E9BE0u);
    ctx->pc = 0x2E9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BD8u;
    // 0x2e9bdc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED3A8u, 0x2E9BD8u, 0x2E9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BE0u;
label_2e9be0:
    // 0x2e9be0: 0xc08002c  jal         func_2000B0
    ctx->pc = 0x2E9BE0u;
    SET_GPR_U32(ctx, 31, 0x2E9BE8u);
    ctx->pc = 0x2E9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BE0u;
    // 0x2e9be4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2000B0u, 0x2E9BE0u, 0x2E9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BE8u;
label_2e9be8:
    // 0x2e9be8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E9BE8u;
    {
        const bool branch_taken_0x2e9be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9be8) {
            ctx->pc = 0x2E9BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9bd8;
        }
    }
    ctx->pc = 0x2E9BF0u;
}

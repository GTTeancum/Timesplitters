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

// Function: lvGetPadExtrefFromData
// Address: 0x228be8 - 0x228c0c
void lvGetPadExtrefFromData_0x228be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetPadExtrefFromData_0x228be8");
#endif

    switch (ctx->pc) {
        case 0x228c00u: goto label_228c00;
        default: break;
    }

    ctx->pc = 0x228be8u;

    // 0x228be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228bec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x228becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bf0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228BF0u;
    {
        const bool branch_taken_0x228bf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x228BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BF0u;
        // 0x228bf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228bf0) {
            ctx->pc = 0x228C00u;
            goto label_228c00;
        }
    }
    ctx->pc = 0x228BF8u;
    // 0x228bf8: 0xc08a164  jal         func_228590
    ctx->pc = 0x228BF8u;
    SET_GPR_U32(ctx, 31, 0x228C00u);
    ctx->pc = 0x228590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228590u, 0x228BF8u, 0x228C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C00u;
label_228c00:
    // 0x228c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228c04: 0x3e00008  jr          $ra
    ctx->pc = 0x228C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C04u;
        // 0x228c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228C0Cu;
}

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

// Function: mcseqSlotGetLongName
// Address: 0x243428 - 0x243458
void mcseqSlotGetLongName_0x243428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseqSlotGetLongName_0x243428");
#endif

    switch (ctx->pc) {
        case 0x24344cu: goto label_24344c;
        default: break;
    }

    ctx->pc = 0x243428u;

    // 0x243428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24342c: 0x8f84b818  lw          $a0, -0x47E8($gp)
    ctx->pc = 0x24342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x243430: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x243430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243434: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243434u;
    {
        const bool branch_taken_0x243434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x243438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243434u;
        // 0x243438: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243434) {
            ctx->pc = 0x243444u;
            goto label_243444;
        }
    }
    ctx->pc = 0x24343Cu;
    // 0x24343c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24343Cu;
    {
        const bool branch_taken_0x24343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24343Cu;
        // 0x243440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24343c) {
            ctx->pc = 0x24344Cu;
            goto label_24344c;
        }
    }
    ctx->pc = 0x243444u;
label_243444:
    // 0x243444: 0xc090cca  jal         func_243328
    ctx->pc = 0x243444u;
    SET_GPR_U32(ctx, 31, 0x24344Cu);
    ctx->pc = 0x243328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243328u, 0x243444u, 0x24344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24344Cu;
label_24344c:
    // 0x24344c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243450: 0x3e00008  jr          $ra
    ctx->pc = 0x243450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243450u;
        // 0x243454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243458u;
}

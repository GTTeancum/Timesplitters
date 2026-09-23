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

// Function: checkstring
// Address: 0x201368 - 0x2013b0
void checkstring_0x201368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkstring_0x201368");
#endif

    switch (ctx->pc) {
        case 0x20137cu: goto label_20137c;
        case 0x201388u: goto label_201388;
        default: break;
    }

    ctx->pc = 0x201368u;

    // 0x201368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20136c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x20136Cu;
    {
        const bool branch_taken_0x20136c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20136Cu;
        // 0x201370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20136c) {
            ctx->pc = 0x2013A4u;
            goto label_2013a4;
        }
    }
    ctx->pc = 0x201374u;
    // 0x201374: 0xc0b981c  jal         func_2E6070
    ctx->pc = 0x201374u;
    SET_GPR_U32(ctx, 31, 0x20137Cu);
    ctx->pc = 0x2E6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6070u, 0x201374u, 0x20137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20137Cu;
label_20137c:
    // 0x20137c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20137Cu;
    {
        const bool branch_taken_0x20137c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x201380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20137Cu;
        // 0x201380: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20137c) {
            ctx->pc = 0x2013A8u;
            goto label_2013a8;
        }
    }
    ctx->pc = 0x201384u;
    // 0x201384: 0x0  nop
    ctx->pc = 0x201384u;
    // NOP
label_201388:
    // 0x201388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20138c: 0x0  nop
    ctx->pc = 0x20138cu;
    // NOP
    // 0x201390: 0x0  nop
    ctx->pc = 0x201390u;
    // NOP
    // 0x201394: 0x0  nop
    ctx->pc = 0x201394u;
    // NOP
    // 0x201398: 0x0  nop
    ctx->pc = 0x201398u;
    // NOP
    // 0x20139c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20139Cu;
    {
        const bool branch_taken_0x20139c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20139c) {
            ctx->pc = 0x201388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201388;
        }
    }
    ctx->pc = 0x2013A4u;
label_2013a4:
    // 0x2013a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2013a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2013a8:
    // 0x2013a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2013A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2013ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A8u;
        // 0x2013ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2013B0u;
}

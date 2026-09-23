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

// Function: demoFileName
// Address: 0x225718 - 0x22573c
void demoFileName_0x225718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoFileName_0x225718");
#endif

    switch (ctx->pc) {
        case 0x225730u: goto label_225730;
        default: break;
    }

    ctx->pc = 0x225718u;

    // 0x225718: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x225718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22571c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22571cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225720: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x225720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x225724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225728: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x225728u;
    SET_GPR_U32(ctx, 31, 0x225730u);
    ctx->pc = 0x22572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225728u;
    // 0x22572c: 0x24840d80  addiu       $a0, $a0, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x225728u, 0x225730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225730u;
label_225730:
    // 0x225730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225734: 0x3e00008  jr          $ra
    ctx->pc = 0x225734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225734u;
        // 0x225738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22573Cu;
}

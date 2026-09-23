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

// Function: defaultmessagetick
// Address: 0x231388 - 0x2313ac
void defaultmessagetick_0x231388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("defaultmessagetick_0x231388");
#endif

    switch (ctx->pc) {
        case 0x231398u: goto label_231398;
        default: break;
    }

    ctx->pc = 0x231388u;

    // 0x231388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23138c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231390: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x231390u;
    SET_GPR_U32(ctx, 31, 0x231398u);
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x231390u, 0x231398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231398u;
label_231398:
    // 0x231398: 0x30420050  andi        $v0, $v0, 0x50
    ctx->pc = 0x231398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x23139c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2313a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2313a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2313a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2313A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2313A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2313ACu;
}

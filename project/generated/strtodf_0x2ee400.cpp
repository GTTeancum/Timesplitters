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

// Function: strtodf
// Address: 0x2ee400 - 0x2ee424
void strtodf_0x2ee400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strtodf_0x2ee400");
#endif

    switch (ctx->pc) {
        case 0x2ee410u: goto label_2ee410;
        case 0x2ee418u: goto label_2ee418;
        default: break;
    }

    ctx->pc = 0x2ee400u;

    // 0x2ee400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee408: 0xc0bb8f4  jal         func_2EE3D0
    ctx->pc = 0x2EE408u;
    SET_GPR_U32(ctx, 31, 0x2EE410u);
    ctx->pc = 0x2EE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE3D0u, 0x2EE408u, 0x2EE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE410u;
label_2ee410:
    // 0x2ee410: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2EE410u;
    SET_GPR_U32(ctx, 31, 0x2EE418u);
    ctx->pc = 0x2EE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE410u;
    // 0x2ee414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2EE410u, 0x2EE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE418u;
label_2ee418:
    // 0x2ee418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee41c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE41Cu;
        // 0x2ee420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE424u;
}

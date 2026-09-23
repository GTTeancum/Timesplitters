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

// Function: bulletReset
// Address: 0x2892a8 - 0x2892cc
void bulletReset_0x2892a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletReset_0x2892a8");
#endif

    switch (ctx->pc) {
        case 0x2892bcu: goto label_2892bc;
        default: break;
    }

    ctx->pc = 0x2892a8u;

    // 0x2892a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2892a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2892ac: 0x240435f0  addiu       $a0, $zero, 0x35F0
    ctx->pc = 0x2892acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13808));
    // 0x2892b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2892b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2892b4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x2892B4u;
    SET_GPR_U32(ctx, 31, 0x2892BCu);
    ctx->pc = 0x2892B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2892B4u;
    // 0x2892b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x2892B4u, 0x2892BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892BCu;
label_2892bc:
    // 0x2892bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2892bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2892c0: 0xaf82b948  sw          $v0, -0x46B8($gp)
    ctx->pc = 0x2892c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949192), GPR_U32(ctx, 2));
    // 0x2892c4: 0x80a2480  j           func_289200
    ctx->pc = 0x2892C4u;
    ctx->pc = 0x2892C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2892C4u;
    // 0x2892c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289200u;
    bulletRestart_0x289200(rdram, ctx, runtime); return;
    ctx->pc = 0x2892CCu;
}

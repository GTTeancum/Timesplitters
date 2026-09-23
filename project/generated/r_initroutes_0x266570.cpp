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

// Function: r_initroutes
// Address: 0x266570 - 0x2665c4
void r_initroutes_0x266570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r_initroutes_0x266570");
#endif

    switch (ctx->pc) {
        case 0x266588u: goto label_266588;
        default: break;
    }

    ctx->pc = 0x266570u;

    // 0x266570: 0x3c0401fd  lui         $a0, 0x1FD
    ctx->pc = 0x266570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)509 << 16));
    // 0x266574: 0x240503e6  addiu       $a1, $zero, 0x3E6
    ctx->pc = 0x266574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 998));
    // 0x266578: 0x2482a310  addiu       $v0, $a0, -0x5CF0
    ctx->pc = 0x266578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943504));
    // 0x26657c: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x26657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x266580: 0x24423e60  addiu       $v0, $v0, 0x3E60
    ctx->pc = 0x266580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15968));
    // 0x266584: 0x0  nop
    ctx->pc = 0x266584u;
    // NOP
label_266588:
    // 0x266588: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x266588u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x26658c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x26658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x266590: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x266590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x266594: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x266594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x266598: 0x0  nop
    ctx->pc = 0x266598u;
    // NOP
    // 0x26659c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26659Cu;
    {
        const bool branch_taken_0x26659c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x26659c) {
            ctx->pc = 0x266588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266588;
        }
    }
    ctx->pc = 0x2665A4u;
    // 0x2665a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2665a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2665a8: 0x2484a310  addiu       $a0, $a0, -0x5CF0
    ctx->pc = 0x2665a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943504));
    // 0x2665ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2665acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2665b0: 0xaf83b8e8  sw          $v1, -0x4718($gp)
    ctx->pc = 0x2665b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949096), GPR_U32(ctx, 3));
    // 0x2665b4: 0xa4823e70  sh          $v0, 0x3E70($a0)
    ctx->pc = 0x2665b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 15984), (uint16_t)GPR_U32(ctx, 2));
    // 0x2665b8: 0xaf83b8e0  sw          $v1, -0x4720($gp)
    ctx->pc = 0x2665b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949088), GPR_U32(ctx, 3));
    // 0x2665bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2665BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2665C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665BCu;
        // 0x2665c0: 0xaf80b8f0  sw          $zero, -0x4710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2665BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2665C4u;
}

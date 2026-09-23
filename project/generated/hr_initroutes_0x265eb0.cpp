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

// Function: hr_initroutes
// Address: 0x265eb0 - 0x265f04
void hr_initroutes_0x265eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_initroutes_0x265eb0");
#endif

    switch (ctx->pc) {
        case 0x265ec8u: goto label_265ec8;
        default: break;
    }

    ctx->pc = 0x265eb0u;

    // 0x265eb0: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x265eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x265eb4: 0x240503e6  addiu       $a1, $zero, 0x3E6
    ctx->pc = 0x265eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 998));
    // 0x265eb8: 0x24826490  addiu       $v0, $a0, 0x6490
    ctx->pc = 0x265eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 25744));
    // 0x265ebc: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x265ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x265ec0: 0x24423e60  addiu       $v0, $v0, 0x3E60
    ctx->pc = 0x265ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15968));
    // 0x265ec4: 0x0  nop
    ctx->pc = 0x265ec4u;
    // NOP
label_265ec8:
    // 0x265ec8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x265ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x265ecc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x265eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x265ed0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x265ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x265ed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x265ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x265ed8: 0x0  nop
    ctx->pc = 0x265ed8u;
    // NOP
    // 0x265edc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x265EDCu;
    {
        const bool branch_taken_0x265edc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x265edc) {
            ctx->pc = 0x265EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265ec8;
        }
    }
    ctx->pc = 0x265EE4u;
    // 0x265ee4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ee8: 0x24846490  addiu       $a0, $a0, 0x6490
    ctx->pc = 0x265ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25744));
    // 0x265eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ef0: 0xaf83b8c8  sw          $v1, -0x4738($gp)
    ctx->pc = 0x265ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949064), GPR_U32(ctx, 3));
    // 0x265ef4: 0xa4823e70  sh          $v0, 0x3E70($a0)
    ctx->pc = 0x265ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 15984), (uint16_t)GPR_U32(ctx, 2));
    // 0x265ef8: 0xaf83b8c0  sw          $v1, -0x4740($gp)
    ctx->pc = 0x265ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949056), GPR_U32(ctx, 3));
    // 0x265efc: 0x3e00008  jr          $ra
    ctx->pc = 0x265EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EFCu;
        // 0x265f00: 0xaf80b8d0  sw          $zero, -0x4730($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265F04u;
}

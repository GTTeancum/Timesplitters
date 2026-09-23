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

// Function: enemyGetPadProp
// Address: 0x2cd9e0 - 0x2cda24
void enemyGetPadProp_0x2cd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyGetPadProp_0x2cd9e0");
#endif

    switch (ctx->pc) {
        case 0x2cd9f8u: goto label_2cd9f8;
        default: break;
    }

    ctx->pc = 0x2cd9e0u;

    // 0x2cd9e0: 0x8f86b4f0  lw          $a2, -0x4B10($gp)
    ctx->pc = 0x2cd9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948080)));
    // 0x2cd9e4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2cd9e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9e8: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD9E8u;
    {
        const bool branch_taken_0x2cd9e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2CD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9E8u;
        // 0x2cd9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9e8) {
            ctx->pc = 0x2CDA18u;
            goto label_2cda18;
        }
    }
    ctx->pc = 0x2CD9F0u;
    // 0x2cd9f0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x2cd9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x2cd9f4: 0x24e223e8  addiu       $v0, $a3, 0x23E8
    ctx->pc = 0x2cd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 9192));
label_2cd9f8:
    // 0x2cd9f8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cd9fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cda00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cda00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cda04: 0x10880005  beq         $a0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDA04u;
    {
        const bool branch_taken_0x2cda04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x2CDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA04u;
        // 0x2cda08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda04) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CDA0Cu;
    // 0x2cda0c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2cda0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2cda10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CDA10u;
    {
        const bool branch_taken_0x2cda10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA10u;
        // 0x2cda14: 0x24e223e8  addiu       $v0, $a3, 0x23E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 9192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda10) {
            ctx->pc = 0x2CD9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd9f8;
        }
    }
    ctx->pc = 0x2CDA18u;
label_2cda18:
    // 0x2cda18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cda18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cda1c:
    // 0x2cda1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA24u;
}

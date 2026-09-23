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

// Function: std
// Address: 0x2e4728 - 0x2e4780
void std_0x2e4728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_0x2e4728");
#endif

    ctx->pc = 0x2e4728u;

    // 0x2e4728: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e4728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e472c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e472cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e4730: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2e4730u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2e4734: 0x3c09002e  lui         $t1, 0x2E
    ctx->pc = 0x2e4734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)46 << 16));
    // 0x2e4738: 0x24425938  addiu       $v0, $v0, 0x5938
    ctx->pc = 0x2e4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22840));
    // 0x2e473c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x2e473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x2e4740: 0x25085a20  addiu       $t0, $t0, 0x5A20
    ctx->pc = 0x2e4740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23072));
    // 0x2e4744: 0x25295a88  addiu       $t1, $t1, 0x5A88
    ctx->pc = 0x2e4744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23176));
    // 0x2e4748: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x2e4748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x2e474c: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x2e474cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e4750: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x2e4750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e4754: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2e4754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2e4758: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2e4758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2e475c: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x2e475cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2e4760: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x2e4760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x2e4764: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e4764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e4768: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e4768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e476c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2e476cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2e4770: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2e4770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2e4774: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2e4774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2e4778: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4778u;
        // 0x2e477c: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4780u;
}

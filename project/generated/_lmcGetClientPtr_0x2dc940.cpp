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

// Function: _lmcGetClientPtr
// Address: 0x2dc940 - 0x2dc964
void _lmcGetClientPtr_0x2dc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lmcGetClientPtr_0x2dc940");
#endif

    ctx->pc = 0x2dc940u;

    // 0x2dc940: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2dc940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2dc944: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2dc944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2dc948: 0x24422ac0  addiu       $v0, $v0, 0x2AC0
    ctx->pc = 0x2dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10944));
    // 0x2dc94c: 0x24632f10  addiu       $v1, $v1, 0x2F10
    ctx->pc = 0x2dc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12048));
    // 0x2dc950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dc950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dc954: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2dc954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2dc958: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2dc958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2dc95c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC95Cu;
        // 0x2dc960: 0x24421500  addiu       $v0, $v0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC964u;
}

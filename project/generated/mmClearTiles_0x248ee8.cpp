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

// Function: mmClearTiles
// Address: 0x248ee8 - 0x248f14
void mmClearTiles_0x248ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmClearTiles_0x248ee8");
#endif

    switch (ctx->pc) {
        case 0x248f04u: goto label_248f04;
        default: break;
    }

    ctx->pc = 0x248ee8u;

    // 0x248ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248eec: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x248eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x248ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ef8: 0x24846588  addiu       $a0, $a0, 0x6588
    ctx->pc = 0x248ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25992));
    // 0x248efc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x248EFCu;
    SET_GPR_U32(ctx, 31, 0x248F04u);
    ctx->pc = 0x248F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EFCu;
    // 0x248f00: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x248EFCu, 0x248F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F04u;
label_248f04:
    // 0x248f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248f08: 0xaf80a13c  sw          $zero, -0x5EC4($gp)
    ctx->pc = 0x248f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943036), GPR_U32(ctx, 0));
    // 0x248f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x248F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F0Cu;
        // 0x248f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248F14u;
}

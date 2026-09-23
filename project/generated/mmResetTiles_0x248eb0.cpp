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

// Function: mmResetTiles
// Address: 0x248eb0 - 0x248ee8
void mmResetTiles_0x248eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmResetTiles_0x248eb0");
#endif

    switch (ctx->pc) {
        case 0x248ec4u: goto label_248ec4;
        case 0x248ed8u: goto label_248ed8;
        default: break;
    }

    ctx->pc = 0x248eb0u;

    // 0x248eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248eb4: 0x24042610  addiu       $a0, $zero, 0x2610
    ctx->pc = 0x248eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9744));
    // 0x248eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248ebc: 0xc08070e  jal         func_201C38
    ctx->pc = 0x248EBCu;
    SET_GPR_U32(ctx, 31, 0x248EC4u);
    ctx->pc = 0x248EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EBCu;
    // 0x248ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x248EBCu, 0x248EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EC4u;
label_248ec4:
    // 0x248ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ecc: 0xaf82b830  sw          $v0, -0x47D0($gp)
    ctx->pc = 0x248eccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948912), GPR_U32(ctx, 2));
    // 0x248ed0: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x248ED0u;
    SET_GPR_U32(ctx, 31, 0x248ED8u);
    ctx->pc = 0x248ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248ED0u;
    // 0x248ed4: 0x24062610  addiu       $a2, $zero, 0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x248ED0u, 0x248ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248ED8u;
label_248ed8:
    // 0x248ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248edc: 0xaf80b834  sw          $zero, -0x47CC($gp)
    ctx->pc = 0x248edcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 0));
    // 0x248ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x248EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EE0u;
        // 0x248ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248EE8u;
}

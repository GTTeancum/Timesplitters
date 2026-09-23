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

// Function: CircleYesTriangleNo
// Address: 0x24d2a0 - 0x24d2d8
void CircleYesTriangleNo_0x24d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CircleYesTriangleNo_0x24d2a0");
#endif

    switch (ctx->pc) {
        case 0x24d2b0u: goto label_24d2b0;
        case 0x24d2c4u: goto label_24d2c4;
        default: break;
    }

    ctx->pc = 0x24d2a0u;

    // 0x24d2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d2a8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24D2A8u;
    SET_GPR_U32(ctx, 31, 0x24D2B0u);
    ctx->pc = 0x24D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2A8u;
    // 0x24d2ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24D2A8u, 0x24D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2B0u;
label_24d2b0:
    // 0x24d2b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x24d2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x24d2b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D2B4u;
    {
        const bool branch_taken_0x24d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2B4u;
        // 0x24d2b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2b4) {
            ctx->pc = 0x24D2CCu;
            goto label_24d2cc;
        }
    }
    ctx->pc = 0x24D2BCu;
    // 0x24d2bc: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24D2BCu;
    SET_GPR_U32(ctx, 31, 0x24D2C4u);
    ctx->pc = 0x24D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2BCu;
    // 0x24d2c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24D2BCu, 0x24D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2C4u;
label_24d2c4:
    // 0x24d2c4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x24d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x24d2c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24d2cc:
    // 0x24d2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2D0u;
        // 0x24d2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D2D8u;
}

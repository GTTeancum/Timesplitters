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

// Function: exitmapmaker
// Address: 0x24ee10 - 0x24ee4c
void exitmapmaker_0x24ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exitmapmaker_0x24ee10");
#endif

    switch (ctx->pc) {
        case 0x24ee20u: goto label_24ee20;
        case 0x24ee30u: goto label_24ee30;
        case 0x24ee40u: goto label_24ee40;
        default: break;
    }

    ctx->pc = 0x24ee10u;

    // 0x24ee10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24ee14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24ee18: 0xc0920ba  jal         func_2482E8
    ctx->pc = 0x24EE18u;
    SET_GPR_U32(ctx, 31, 0x24EE20u);
    ctx->pc = 0x2482E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482E8u, 0x24EE18u, 0x24EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE20u;
label_24ee20:
    // 0x24ee20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ee24: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x24ee24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x24ee28: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x24EE28u;
    SET_GPR_U32(ctx, 31, 0x24EE30u);
    ctx->pc = 0x24EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE28u;
    // 0x24ee2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x24EE28u, 0x24EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE30u;
label_24ee30:
    // 0x24ee30: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x24ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x24ee34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ee38: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x24EE38u;
    SET_GPR_U32(ctx, 31, 0x24EE40u);
    ctx->pc = 0x24EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE38u;
    // 0x24ee3c: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x24EE38u, 0x24EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE40u;
label_24ee40:
    // 0x24ee40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24ee40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ee44: 0x3e00008  jr          $ra
    ctx->pc = 0x24EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE44u;
        // 0x24ee48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EE4Cu;
}

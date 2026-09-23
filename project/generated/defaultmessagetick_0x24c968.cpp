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

// Function: defaultmessagetick
// Address: 0x24c968 - 0x24c98c
void defaultmessagetick_0x24c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("defaultmessagetick_0x24c968");
#endif

    switch (ctx->pc) {
        case 0x24c978u: goto label_24c978;
        default: break;
    }

    ctx->pc = 0x24c968u;

    // 0x24c968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c970: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24C970u;
    SET_GPR_U32(ctx, 31, 0x24C978u);
    ctx->pc = 0x24C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C970u;
    // 0x24c974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24C970u, 0x24C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C978u;
label_24c978:
    // 0x24c978: 0x30420050  andi        $v0, $v0, 0x50
    ctx->pc = 0x24c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x24c97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24c980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24c984: 0x3e00008  jr          $ra
    ctx->pc = 0x24C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C984u;
        // 0x24c988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C98Cu;
}

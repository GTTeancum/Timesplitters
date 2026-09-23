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

// Function: gunNew
// Address: 0x269b10 - 0x269b2c
void gunNew_0x269b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunNew_0x269b10");
#endif

    switch (ctx->pc) {
        case 0x269b20u: goto label_269b20;
        default: break;
    }

    ctx->pc = 0x269b10u;

    // 0x269b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x269b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x269b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269b18: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x269B18u;
    SET_GPR_U32(ctx, 31, 0x269B20u);
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x269B18u, 0x269B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B20u;
label_269b20:
    // 0x269b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b24: 0x3e00008  jr          $ra
    ctx->pc = 0x269B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B24u;
        // 0x269b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B2Cu;
}

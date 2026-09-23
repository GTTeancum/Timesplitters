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

// Function: matherr
// Address: 0x2dbf18 - 0x2dbf3c
void matherr_0x2dbf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matherr_0x2dbf18");
#endif

    switch (ctx->pc) {
        case 0x2dbf2cu: goto label_2dbf2c;
        default: break;
    }

    ctx->pc = 0x2dbf18u;

    // 0x2dbf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbf1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbf20: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2dbf20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dbf24: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2DBF24u;
    SET_GPR_U32(ctx, 31, 0x2DBF2Cu);
    ctx->pc = 0x2DBF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF24u;
    // 0x2dbf28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2DBF24u, 0x2DBF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF2Cu;
label_2dbf2c:
    // 0x2dbf2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbf30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dbf30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf34: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF34u;
        // 0x2dbf38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBF3Cu;
}

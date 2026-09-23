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

// Function: mcunformat
// Address: 0x208be8 - 0x208c18
void mcunformat_0x208be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcunformat_0x208be8");
#endif

    switch (ctx->pc) {
        case 0x208c00u: goto label_208c00;
        default: break;
    }

    ctx->pc = 0x208be8u;

    // 0x208be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208bec: 0x8f849bf0  lw          $a0, -0x6410($gp)
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
    // 0x208bf0: 0x8f859bf4  lw          $a1, -0x640C($gp)
    ctx->pc = 0x208bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941684)));
    // 0x208bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208bf8: 0xc0b75e0  jal         func_2DD780
    ctx->pc = 0x208BF8u;
    SET_GPR_U32(ctx, 31, 0x208C00u);
    ctx->pc = 0x2DD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD780u, 0x208BF8u, 0x208C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C00u;
label_208c00:
    // 0x208c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208c04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208c10: 0x80b7392  j           func_2DCE48
    ctx->pc = 0x208C10u;
    ctx->pc = 0x208C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C10u;
    // 0x208c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE48u;
    sceMcSync_0x2dce48(rdram, ctx, runtime); return;
    ctx->pc = 0x208C18u;
}

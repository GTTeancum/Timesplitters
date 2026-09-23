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

// Function: settingsGet
// Address: 0x2201d8 - 0x220208
void settingsGet_0x2201d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("settingsGet_0x2201d8");
#endif

    switch (ctx->pc) {
        case 0x2201e8u: goto label_2201e8;
        default: break;
    }

    ctx->pc = 0x2201d8u;

    // 0x2201d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2201dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2201dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2201e0: 0xc08828c  jal         func_220A30
    ctx->pc = 0x2201E0u;
    SET_GPR_U32(ctx, 31, 0x2201E8u);
    ctx->pc = 0x2201E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201E0u;
    // 0x2201e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x2201E0u, 0x2201E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201E8u;
label_2201e8:
    // 0x2201e8: 0x24040b78  addiu       $a0, $zero, 0xB78
    ctx->pc = 0x2201e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x2201ec: 0x8f839dd8  lw          $v1, -0x6228($gp)
    ctx->pc = 0x2201ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2201f0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2201f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2201f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2201f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2201f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2201fc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2201fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x220200: 0x3e00008  jr          $ra
    ctx->pc = 0x220200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220200u;
        // 0x220204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220208u;
}

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

// Function: mmfileDirReset
// Address: 0x253918 - 0x253950
void mmfileDirReset_0x253918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileDirReset_0x253918");
#endif

    switch (ctx->pc) {
        case 0x253928u: goto label_253928;
        case 0x253938u: goto label_253938;
        default: break;
    }

    ctx->pc = 0x253918u;

    // 0x253918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25391c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253920: 0xc094e3a  jal         func_2538E8
    ctx->pc = 0x253920u;
    SET_GPR_U32(ctx, 31, 0x253928u);
    ctx->pc = 0x2538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2538E8u, 0x253920u, 0x253928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253928u;
label_253928:
    // 0x253928: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x253928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x25392c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253930: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x253930u;
    SET_GPR_U32(ctx, 31, 0x253938u);
    ctx->pc = 0x253934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253930u;
    // 0x253934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x253930u, 0x253938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253938u;
label_253938:
    // 0x253938: 0x8f83a22c  lw          $v1, -0x5DD4($gp)
    ctx->pc = 0x253938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x25393c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25393cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253940: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x253940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x253944: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x253944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x253948: 0x3e00008  jr          $ra
    ctx->pc = 0x253948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253948u;
        // 0x25394c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253950u;
}

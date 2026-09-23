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

// Function: demoLoad
// Address: 0x225740 - 0x225784
void demoLoad_0x225740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("demoLoad_0x225740");
#endif

    switch (ctx->pc) {
        case 0x225750u: goto label_225750;
        case 0x225760u: goto label_225760;
        case 0x225778u: goto label_225778;
        default: break;
    }

    ctx->pc = 0x225740u;

    // 0x225740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225748: 0xc0895c6  jal         func_225718
    ctx->pc = 0x225748u;
    SET_GPR_U32(ctx, 31, 0x225750u);
    ctx->pc = 0x225718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225718u, 0x225748u, 0x225750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225750u;
label_225750:
    // 0x225750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225758: 0xc0868fe  jal         func_21A3F8
    ctx->pc = 0x225758u;
    SET_GPR_U32(ctx, 31, 0x225760u);
    ctx->pc = 0x22575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225758u;
    // 0x22575c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A3F8u, 0x225758u, 0x225760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225760u;
label_225760:
    // 0x225760: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x225760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225764: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x225764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225768: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22576c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225770: 0xc080b56  jal         func_202D58
    ctx->pc = 0x225770u;
    SET_GPR_U32(ctx, 31, 0x225778u);
    ctx->pc = 0x225774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225770u;
    // 0x225774: 0xaf829f58  sw          $v0, -0x60A8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D58u, 0x225770u, 0x225778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225778u;
label_225778:
    // 0x225778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22577c: 0x3e00008  jr          $ra
    ctx->pc = 0x22577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22577Cu;
        // 0x225780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225784u;
}

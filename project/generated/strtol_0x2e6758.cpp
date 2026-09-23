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

// Function: strtol
// Address: 0x2e6758 - 0x2e678c
void strtol_0x2e6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strtol_0x2e6758");
#endif

    switch (ctx->pc) {
        case 0x2e6780u: goto label_2e6780;
        default: break;
    }

    ctx->pc = 0x2e6758u;

    // 0x2e6758: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e6758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e675c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2e675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2e6760: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2e6760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6764: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6768: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e6768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e676c: 0x8c44330c  lw          $a0, 0x330C($v0)
    ctx->pc = 0x2e676cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2e6770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6774: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2e6774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6778: 0xc0b9948  jal         func_2E6520
    ctx->pc = 0x2E6778u;
    SET_GPR_U32(ctx, 31, 0x2E6780u);
    ctx->pc = 0x2E677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6778u;
    // 0x2e677c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6520u, 0x2E6778u, 0x2E6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6780u;
label_2e6780:
    // 0x2e6780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6784: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6784u;
        // 0x2e6788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E678Cu;
}

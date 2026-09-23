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

// Function: setlocale
// Address: 0x2ebb78 - 0x2ebba4
void setlocale_0x2ebb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setlocale_0x2ebb78");
#endif

    switch (ctx->pc) {
        case 0x2ebb98u: goto label_2ebb98;
        default: break;
    }

    ctx->pc = 0x2ebb78u;

    // 0x2ebb78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb7c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2ebb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2ebb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebb84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb88: 0x8c64330c  lw          $a0, 0x330C($v1)
    ctx->pc = 0x2ebb88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38330Cu));
    // 0x2ebb8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebb90: 0xc0baeb8  jal         func_2EBAE0
    ctx->pc = 0x2EBB90u;
    SET_GPR_U32(ctx, 31, 0x2EBB98u);
    ctx->pc = 0x2EBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB90u;
    // 0x2ebb94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBAE0u, 0x2EBB90u, 0x2EBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB98u;
label_2ebb98:
    // 0x2ebb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB9Cu;
        // 0x2ebba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBA4u;
}

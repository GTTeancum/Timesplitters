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

// Function: fileInflate
// Address: 0x21c1b0 - 0x21c1f8
void fileInflate_0x21c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileInflate_0x21c1b0");
#endif

    switch (ctx->pc) {
        case 0x21c1e0u: goto label_21c1e0;
        case 0x21c1e8u: goto label_21c1e8;
        default: break;
    }

    ctx->pc = 0x21c1b0u;

    // 0x21c1b0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x21c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x21c1b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c1b8: 0x24422c80  addiu       $v0, $v0, 0x2C80
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
    // 0x21c1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c1c0: 0xaf86b6e0  sw          $a2, -0x4920($gp)
    ctx->pc = 0x21c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948576), GPR_U32(ctx, 6));
    // 0x21c1c4: 0xaf84b6c8  sw          $a0, -0x4938($gp)
    ctx->pc = 0x21c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948552), GPR_U32(ctx, 4));
    // 0x21c1c8: 0xaf82b6d4  sw          $v0, -0x492C($gp)
    ctx->pc = 0x21c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948564), GPR_U32(ctx, 2));
    // 0x21c1cc: 0xaf85b6d0  sw          $a1, -0x4930($gp)
    ctx->pc = 0x21c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948560), GPR_U32(ctx, 5));
    // 0x21c1d0: 0xaf80b6dc  sw          $zero, -0x4924($gp)
    ctx->pc = 0x21c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948572), GPR_U32(ctx, 0));
    // 0x21c1d4: 0xaf80b6d8  sw          $zero, -0x4928($gp)
    ctx->pc = 0x21c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 0));
    // 0x21c1d8: 0xc086fb4  jal         func_21BED0
    ctx->pc = 0x21C1D8u;
    SET_GPR_U32(ctx, 31, 0x21C1E0u);
    ctx->pc = 0x21C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C1D8u;
    // 0x21c1dc: 0xaf80b6cc  sw          $zero, -0x4934($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BED0u, 0x21C1D8u, 0x21C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1E0u;
label_21c1e0:
    // 0x21c1e0: 0xc08704c  jal         func_21C130
    ctx->pc = 0x21C1E0u;
    SET_GPR_U32(ctx, 31, 0x21C1E8u);
    ctx->pc = 0x21C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C130u, 0x21C1E0u, 0x21C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1E8u;
label_21c1e8:
    // 0x21c1e8: 0x8f82b6dc  lw          $v0, -0x4924($gp)
    ctx->pc = 0x21c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948572)));
    // 0x21c1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1F0u;
        // 0x21c1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C1F8u;
}

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

// Function: FlushOut
// Address: 0x21be88 - 0x21becc
void FlushOut_0x21be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FlushOut_0x21be88");
#endif

    switch (ctx->pc) {
        case 0x21beacu: goto label_21beac;
        default: break;
    }

    ctx->pc = 0x21be88u;

    // 0x21be88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21be8c: 0x8f86b6d8  lw          $a2, -0x4928($gp)
    ctx->pc = 0x21be8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x21be90: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x21BE90u;
    {
        const bool branch_taken_0x21be90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE90u;
        // 0x21be94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be90) {
            ctx->pc = 0x21BEC0u;
            goto label_21bec0;
        }
    }
    ctx->pc = 0x21BE98u;
    // 0x21be98: 0x8f82b6e0  lw          $v0, -0x4920($gp)
    ctx->pc = 0x21be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948576)));
    // 0x21be9c: 0x8f84b6dc  lw          $a0, -0x4924($gp)
    ctx->pc = 0x21be9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948572)));
    // 0x21bea0: 0x8f85b6d4  lw          $a1, -0x492C($gp)
    ctx->pc = 0x21bea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948564)));
    // 0x21bea4: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x21BEA4u;
    SET_GPR_U32(ctx, 31, 0x21BEACu);
    ctx->pc = 0x21BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEA4u;
    // 0x21bea8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x21BEA4u, 0x21BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEACu;
label_21beac:
    // 0x21beac: 0x8f83b6dc  lw          $v1, -0x4924($gp)
    ctx->pc = 0x21beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948572)));
    // 0x21beb0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x21beb4: 0xaf80b6d8  sw          $zero, -0x4928($gp)
    ctx->pc = 0x21beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 0));
    // 0x21beb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21bebc: 0xaf83b6dc  sw          $v1, -0x4924($gp)
    ctx->pc = 0x21bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948572), GPR_U32(ctx, 3));
label_21bec0:
    // 0x21bec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21bec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bec4: 0x3e00008  jr          $ra
    ctx->pc = 0x21BEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC4u;
        // 0x21bec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BECCu;
}

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

// Function: musicStopClose
// Address: 0x205b90 - 0x205bd4
void musicStopClose_0x205b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicStopClose_0x205b90");
#endif

    switch (ctx->pc) {
        case 0x205ba4u: goto label_205ba4;
        case 0x205bbcu: goto label_205bbc;
        default: break;
    }

    ctx->pc = 0x205b90u;

    // 0x205b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205b94: 0x340480e0  ori         $a0, $zero, 0x80E0
    ctx->pc = 0x205b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x205b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205b9c: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205B9Cu;
    SET_GPR_U32(ctx, 31, 0x205BA4u);
    ctx->pc = 0x205BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B9Cu;
    // 0x205ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205B9Cu, 0x205BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BA4u;
label_205ba4:
    // 0x205ba4: 0x24035000  addiu       $v1, $zero, 0x5000
    ctx->pc = 0x205ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x205ba8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205BA8u;
    {
        const bool branch_taken_0x205ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x205BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BA8u;
        // 0x205bac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ba8) {
            ctx->pc = 0x205BC4u;
            goto label_205bc4;
        }
    }
    ctx->pc = 0x205BB0u;
    // 0x205bb0: 0x340480f0  ori         $a0, $zero, 0x80F0
    ctx->pc = 0x205bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x205bb4: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205BB4u;
    SET_GPR_U32(ctx, 31, 0x205BBCu);
    ctx->pc = 0x205BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BB4u;
    // 0x205bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205BB4u, 0x205BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BBCu;
label_205bbc:
    // 0x205bbc: 0xaf809b2c  sw          $zero, -0x64D4($gp)
    ctx->pc = 0x205bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941484), GPR_U32(ctx, 0));
    // 0x205bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205bc4:
    // 0x205bc4: 0xaf809b30  sw          $zero, -0x64D0($gp)
    ctx->pc = 0x205bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941488), GPR_U32(ctx, 0));
    // 0x205bc8: 0xaf809b28  sw          $zero, -0x64D8($gp)
    ctx->pc = 0x205bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941480), GPR_U32(ctx, 0));
    // 0x205bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x205BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BCCu;
        // 0x205bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205BD4u;
}

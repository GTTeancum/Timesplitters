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

// Function: musicRestart
// Address: 0x205c78 - 0x205ce4
void musicRestart_0x205c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicRestart_0x205c78");
#endif

    switch (ctx->pc) {
        case 0x205c88u: goto label_205c88;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cd0u: goto label_205cd0;
        default: break;
    }

    ctx->pc = 0x205c78u;

    // 0x205c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205c80: 0xc089654  jal         func_225950
    ctx->pc = 0x205C80u;
    SET_GPR_U32(ctx, 31, 0x205C88u);
    ctx->pc = 0x225950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225950u, 0x205C80u, 0x205C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C88u;
label_205c88:
    // 0x205c88: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x205c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x205c8c: 0xaf829b28  sw          $v0, -0x64D8($gp)
    ctx->pc = 0x205c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941480), GPR_U32(ctx, 2));
    // 0x205c90: 0x8c623770  lw          $v0, 0x3770($v1)
    ctx->pc = 0x205c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353770u));
    // 0x205c94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x205C94u;
    {
        const bool branch_taken_0x205c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c94) {
            ctx->pc = 0x205C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C94u;
            // 0x205c98: 0xaf809b28  sw          $zero, -0x64D8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294941480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205C9Cu;
            goto label_205c9c;
        }
    }
    ctx->pc = 0x205C9Cu;
label_205c9c:
    // 0x205c9c: 0x8f849b28  lw          $a0, -0x64D8($gp)
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941480)));
    // 0x205ca0: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x205CA0u;
    {
        const bool branch_taken_0x205ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CA0u;
        // 0x205ca4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ca0) {
            ctx->pc = 0x205CDCu;
            goto label_205cdc;
        }
    }
    ctx->pc = 0x205CA8u;
    // 0x205ca8: 0xc081694  jal         func_205A50
    ctx->pc = 0x205CA8u;
    SET_GPR_U32(ctx, 31, 0x205CB0u);
    ctx->pc = 0x205A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A50u, 0x205CA8u, 0x205CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CB0u;
label_205cb0:
    // 0x205cb0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x205cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x205cb4: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205CB4u;
    SET_GPR_U32(ctx, 31, 0x205CBCu);
    ctx->pc = 0x205CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CB4u;
    // 0x205cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205CB4u, 0x205CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CBCu;
label_205cbc:
    // 0x205cbc: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x205cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x205cc0: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205CC0u;
    SET_GPR_U32(ctx, 31, 0x205CC8u);
    ctx->pc = 0x205CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CC0u;
    // 0x205cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205CC0u, 0x205CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CC8u;
label_205cc8:
    // 0x205cc8: 0xc0816fe  jal         func_205BF8
    ctx->pc = 0x205CC8u;
    SET_GPR_U32(ctx, 31, 0x205CD0u);
    ctx->pc = 0x205BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205BF8u, 0x205CC8u, 0x205CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CD0u;
label_205cd0:
    // 0x205cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205cd4: 0x80816b6  j           func_205AD8
    ctx->pc = 0x205CD4u;
    ctx->pc = 0x205CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CD4u;
    // 0x205cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205AD8u;
    musicStart_0x205ad8(rdram, ctx, runtime); return;
    ctx->pc = 0x205CDCu;
label_205cdc:
    // 0x205cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x205CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CDCu;
        // 0x205ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205CE4u;
}

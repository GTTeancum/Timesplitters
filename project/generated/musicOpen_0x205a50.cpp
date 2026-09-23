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

// Function: musicOpen
// Address: 0x205a50 - 0x205aa0
void musicOpen_0x205a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("musicOpen_0x205a50");
#endif

    switch (ctx->pc) {
        case 0x205a7cu: goto label_205a7c;
        case 0x205a88u: goto label_205a88;
        default: break;
    }

    ctx->pc = 0x205a50u;

    // 0x205a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205a58: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x205A58u;
    {
        const bool branch_taken_0x205a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A58u;
        // 0x205a5c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a58) {
            ctx->pc = 0x205A90u;
            goto label_205a90;
        }
    }
    ctx->pc = 0x205A60u;
    // 0x205a60: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x205a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x205a64: 0x248603e8  addiu       $a2, $a0, 0x3E8
    ctx->pc = 0x205a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x205a68: 0x2610e140  addiu       $s0, $s0, -0x1EC0
    ctx->pc = 0x205a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959424));
    // 0x205a6c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x205a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x205a70: 0x24a59430  addiu       $a1, $a1, -0x6BD0
    ctx->pc = 0x205a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939696));
    // 0x205a74: 0xc0b960e  jal         func_2E5838
    ctx->pc = 0x205A74u;
    SET_GPR_U32(ctx, 31, 0x205A7Cu);
    ctx->pc = 0x205A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A74u;
    // 0x205a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5838u, 0x205A74u, 0x205A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A7Cu;
label_205a7c:
    // 0x205a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a80: 0xc08177a  jal         func_205DE8
    ctx->pc = 0x205A80u;
    SET_GPR_U32(ctx, 31, 0x205A88u);
    ctx->pc = 0x205A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A80u;
    // 0x205a84: 0x34048020  ori         $a0, $zero, 0x8020 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x205DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205DE8u, 0x205A80u, 0x205A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A88u;
label_205a88:
    // 0x205a88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205a8c: 0xaf839b30  sw          $v1, -0x64D0($gp)
    ctx->pc = 0x205a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941488), GPR_U32(ctx, 3));
label_205a90:
    // 0x205a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205a98: 0x3e00008  jr          $ra
    ctx->pc = 0x205A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A98u;
        // 0x205a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205AA0u;
}

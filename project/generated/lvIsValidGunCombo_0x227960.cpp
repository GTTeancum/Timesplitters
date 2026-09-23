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

// Function: lvIsValidGunCombo
// Address: 0x227960 - 0x2279b4
void lvIsValidGunCombo_0x227960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvIsValidGunCombo_0x227960");
#endif

    switch (ctx->pc) {
        case 0x227974u: goto label_227974;
        case 0x227980u: goto label_227980;
        default: break;
    }

    ctx->pc = 0x227960u;

    // 0x227960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22796c: 0xc089de4  jal         func_227790
    ctx->pc = 0x22796Cu;
    SET_GPR_U32(ctx, 31, 0x227974u);
    ctx->pc = 0x227970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22796Cu;
    // 0x227970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227790u, 0x22796Cu, 0x227974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227974u;
label_227974:
    // 0x227974: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x227974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22797c: 0x0  nop
    ctx->pc = 0x22797cu;
    // NOP
label_227980:
    // 0x227980: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x227980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227984: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227984u;
    {
        const bool branch_taken_0x227984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x227984) {
            ctx->pc = 0x227988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227984u;
            // 0x227988: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227994u;
            goto label_227994;
        }
    }
    ctx->pc = 0x22798Cu;
    // 0x22798c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22798Cu;
    {
        const bool branch_taken_0x22798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22798Cu;
        // 0x227990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22798c) {
            ctx->pc = 0x2279A4u;
            goto label_2279a4;
        }
    }
    ctx->pc = 0x227994u;
label_227994:
    // 0x227994: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x227994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x227998: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x227998u;
    {
        const bool branch_taken_0x227998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227998u;
        // 0x22799c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227998) {
            ctx->pc = 0x227980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227980;
        }
    }
    ctx->pc = 0x2279A0u;
    // 0x2279a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2279a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2279a4:
    // 0x2279a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2279a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2279a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2279a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2279ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2279ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2279B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279ACu;
        // 0x2279b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2279ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2279B4u;
}

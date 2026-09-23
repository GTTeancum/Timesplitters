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

// Function: challengeGetScoreCondition
// Address: 0x21f2b0 - 0x21f310
void challengeGetScoreCondition_0x21f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("challengeGetScoreCondition_0x21f2b0");
#endif

    switch (ctx->pc) {
        case 0x21f2c0u: goto label_21f2c0;
        case 0x21f2d8u: goto label_21f2d8;
        default: break;
    }

    ctx->pc = 0x21f2b0u;

    // 0x21f2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f2b8: 0xc087c12  jal         func_21F048
    ctx->pc = 0x21F2B8u;
    SET_GPR_U32(ctx, 31, 0x21F2C0u);
    ctx->pc = 0x21F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F048u, 0x21F2B8u, 0x21F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2C0u;
label_21f2c0:
    // 0x21f2c0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x21f2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x21f2c4: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x21F2C4u;
    {
        const bool branch_taken_0x21f2c4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C4u;
        // 0x21f2c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2c4) {
            ctx->pc = 0x21F300u;
            goto label_21f300;
        }
    }
    ctx->pc = 0x21F2CCu;
    // 0x21f2cc: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x21f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21f2d0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21f2d4: 0x0  nop
    ctx->pc = 0x21f2d4u;
    // NOP
label_21f2d8:
    // 0x21f2d8: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x21f2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21f2dc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21f2e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21f2e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f2e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21f2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x21f2e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F2E8u;
    {
        const bool branch_taken_0x21f2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2E8u;
        // 0x21f2ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2e8) {
            ctx->pc = 0x21F304u;
            goto label_21f304;
        }
    }
    ctx->pc = 0x21F2F0u;
    // 0x21f2f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21f2f4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x21f2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21f2f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21F2F8u;
    {
        const bool branch_taken_0x21f2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2F8u;
        // 0x21f2fc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2f8) {
            ctx->pc = 0x21F2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f2d8;
        }
    }
    ctx->pc = 0x21F300u;
label_21f300:
    // 0x21f300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f304:
    // 0x21f304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f308: 0x3e00008  jr          $ra
    ctx->pc = 0x21F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F308u;
        // 0x21f30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F310u;
}

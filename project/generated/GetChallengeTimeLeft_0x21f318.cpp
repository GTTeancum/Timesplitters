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

// Function: GetChallengeTimeLeft
// Address: 0x21f318 - 0x21f380
void GetChallengeTimeLeft_0x21f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetChallengeTimeLeft_0x21f318");
#endif

    switch (ctx->pc) {
        case 0x21f328u: goto label_21f328;
        case 0x21f340u: goto label_21f340;
        default: break;
    }

    ctx->pc = 0x21f318u;

    // 0x21f318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f320: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21F320u;
    SET_GPR_U32(ctx, 31, 0x21F328u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x21F320u, 0x21F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F328u;
label_21f328:
    // 0x21f328: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x21f328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x21f32c: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F32Cu;
    {
        const bool branch_taken_0x21f32c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F32Cu;
        // 0x21f330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f32c) {
            ctx->pc = 0x21F370u;
            goto label_21f370;
        }
    }
    ctx->pc = 0x21F334u;
    // 0x21f334: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x21f334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21f338: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21f33c: 0x0  nop
    ctx->pc = 0x21f33cu;
    // NOP
label_21f340:
    // 0x21f340: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x21f340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21f344: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21f348: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21f34c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F34Cu;
    {
        const bool branch_taken_0x21f34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f34c) {
            ctx->pc = 0x21F350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F34Cu;
            // 0x21f350: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F364u;
            goto label_21f364;
        }
    }
    ctx->pc = 0x21F354u;
    // 0x21f354: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21f358: 0x8f829da8  lw          $v0, -0x6258($gp)
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942120)));
    // 0x21f35c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F35Cu;
    {
        const bool branch_taken_0x21f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F35Cu;
        // 0x21f360: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f35c) {
            ctx->pc = 0x21F374u;
            goto label_21f374;
        }
    }
    ctx->pc = 0x21F364u;
label_21f364:
    // 0x21f364: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x21f364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21f368: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21F368u;
    {
        const bool branch_taken_0x21f368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F368u;
        // 0x21f36c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f368) {
            ctx->pc = 0x21F340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f340;
        }
    }
    ctx->pc = 0x21F370u;
label_21f370:
    // 0x21f370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f374:
    // 0x21f374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f378: 0x3e00008  jr          $ra
    ctx->pc = 0x21F378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F378u;
        // 0x21f37c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F380u;
}

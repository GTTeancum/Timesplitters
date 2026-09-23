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

// Function: newlink
// Address: 0x264868 - 0x2648dc
void newlink_0x264868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("newlink_0x264868");
#endif

    switch (ctx->pc) {
        case 0x264888u: goto label_264888;
        default: break;
    }

    ctx->pc = 0x264868u;

    // 0x264868: 0x8f82a34c  lw          $v0, -0x5CB4($gp)
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x26486c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x264870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264874: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x264874u;
    {
        const bool branch_taken_0x264874 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x264878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264874u;
        // 0x264878: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264874) {
            ctx->pc = 0x2648B4u;
            goto label_2648b4;
        }
    }
    ctx->pc = 0x26487Cu;
    // 0x26487c: 0x8f86a2f0  lw          $a2, -0x5D10($gp)
    ctx->pc = 0x26487cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x264880: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x264880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x264884: 0x0  nop
    ctx->pc = 0x264884u;
    // NOP
label_264888:
    // 0x264888: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x264888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26488c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x26488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x264890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264894: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x264894u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x264898: 0x4a1000c  bgez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x264898u;
    {
        const bool branch_taken_0x264898 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x26489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264898u;
        // 0x26489c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264898) {
            ctx->pc = 0x2648CCu;
            goto label_2648cc;
        }
    }
    ctx->pc = 0x2648A0u;
    // 0x2648a0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2648a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2648a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2648A4u;
    {
        const bool branch_taken_0x2648a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2648A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648A4u;
        // 0x2648a8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648a4) {
            ctx->pc = 0x264888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264888;
        }
    }
    ctx->pc = 0x2648ACu;
    // 0x2648ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2648ACu;
    {
        const bool branch_taken_0x2648ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648ac) {
            ctx->pc = 0x2648B8u;
            goto label_2648b8;
        }
    }
    ctx->pc = 0x2648B4u;
label_2648b4:
    // 0x2648b4: 0x8f86a2f0  lw          $a2, -0x5D10($gp)
    ctx->pc = 0x2648b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
label_2648b8:
    // 0x2648b8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2648B8u;
    {
        const bool branch_taken_0x2648b8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2648b8) {
            ctx->pc = 0x2648BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2648B8u;
            // 0x2648bc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2648D0u;
            goto label_2648d0;
        }
    }
    ctx->pc = 0x2648C0u;
    // 0x2648c0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2648c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2648c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2648c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2648c8: 0xaf82a34c  sw          $v0, -0x5CB4($gp)
    ctx->pc = 0x2648c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 2));
label_2648cc:
    // 0x2648cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2648ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2648d0:
    // 0x2648d0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2648d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2648d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2648D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2648D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648D4u;
        // 0x2648d8: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2648D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2648DCu;
}

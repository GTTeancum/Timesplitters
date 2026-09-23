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

// Function: bgGetPortalFromRooms
// Address: 0x2577b8 - 0x257820
void bgGetPortalFromRooms_0x2577b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bgGetPortalFromRooms_0x2577b8");
#endif

    switch (ctx->pc) {
        case 0x2577e0u: goto label_2577e0;
        default: break;
    }

    ctx->pc = 0x2577b8u;

    // 0x2577b8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2577bc: 0x8f83a240  lw          $v1, -0x5DC0($gp)
    ctx->pc = 0x2577bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x2577c0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2577c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2577c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2577c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2577c8: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2577c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2577cc: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x2577ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2577d0: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2577D0u;
    {
        const bool branch_taken_0x2577d0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2577D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577D0u;
        // 0x2577d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577d0) {
            ctx->pc = 0x257814u;
            goto label_257814;
        }
    }
    ctx->pc = 0x2577D8u;
    // 0x2577d8: 0x8f88a244  lw          $t0, -0x5DBC($gp)
    ctx->pc = 0x2577d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943300)));
    // 0x2577dc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2577dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2577e0:
    // 0x2577e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2577e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2577e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2577e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2577e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2577e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2577ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2577ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2577f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2577f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2577f4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2577f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2577f8: 0x50c40001  beql        $a2, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2577F8u;
    {
        const bool branch_taken_0x2577f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2577f8) {
            ctx->pc = 0x2577FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2577F8u;
            // 0x2577fc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257800u;
            goto label_257800;
        }
    }
    ctx->pc = 0x257800u;
label_257800:
    // 0x257800: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257800u;
    {
        const bool branch_taken_0x257800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x257804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257800u;
        // 0x257804: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257800) {
            ctx->pc = 0x257818u;
            goto label_257818;
        }
    }
    ctx->pc = 0x257808u;
    // 0x257808: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x257808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x25780c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25780Cu;
    {
        const bool branch_taken_0x25780c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25780Cu;
        // 0x257810: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25780c) {
            ctx->pc = 0x2577E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2577e0;
        }
    }
    ctx->pc = 0x257814u;
label_257814:
    // 0x257814: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x257814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_257818:
    // 0x257818: 0x3e00008  jr          $ra
    ctx->pc = 0x257818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257820u;
}

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

// Function: obCalcBounds
// Address: 0x25e8c0 - 0x25e92c
void obCalcBounds_0x25e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obCalcBounds_0x25e8c0");
#endif

    switch (ctx->pc) {
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e904u: goto label_25e904;
        default: break;
    }

    ctx->pc = 0x25e8c0u;

    // 0x25e8c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e8c4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x25e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x25e8c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e8cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e8d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25e8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e8d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25e8dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25e8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25e8e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e8e4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25e8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25e8e8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x25e8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25e8ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25E8ECu;
    {
        const bool branch_taken_0x25e8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8ECu;
        // 0x25e8f0: 0x828023  subu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8ec) {
            ctx->pc = 0x25E910u;
            goto label_25e910;
        }
    }
    ctx->pc = 0x25E8F4u;
    // 0x25e8f4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x25e8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25e8f8:
    // 0x25e8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8fc: 0xc097990  jal         func_25E640
    ctx->pc = 0x25E8FCu;
    SET_GPR_U32(ctx, 31, 0x25E904u);
    ctx->pc = 0x25E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8FCu;
    // 0x25e900: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E640u, 0x25E8FCu, 0x25E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E904u;
label_25e904:
    // 0x25e904: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x25e904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x25e908: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25E908u;
    {
        const bool branch_taken_0x25e908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x25E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E908u;
        // 0x25e90c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e908) {
            ctx->pc = 0x25E8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e8f8;
        }
    }
    ctx->pc = 0x25E910u;
label_25e910:
    // 0x25e910: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25e910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e914: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25e914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e918: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e91c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25e91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e924: 0x3e00008  jr          $ra
    ctx->pc = 0x25E924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E924u;
        // 0x25e928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E92Cu;
}

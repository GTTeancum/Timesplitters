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

// Function: isroomvisible
// Address: 0x253f80 - 0x253fcc
void isroomvisible_0x253f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isroomvisible_0x253f80");
#endif

    ctx->pc = 0x253f80u;

    // 0x253f80: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x253f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x253f84: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x253f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x253f88: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x253f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x253f8c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x253f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x253f90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x253f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x253f94: 0x24c67330  addiu       $a2, $a2, 0x7330
    ctx->pc = 0x253f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29488));
    // 0x253f98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x253f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x253f9c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x253f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x253fa0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x253fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253fa4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x253fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x253fa8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x253fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x253fac: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x253FACu;
    {
        const bool branch_taken_0x253fac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x253FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FACu;
        // 0x253fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fac) {
            ctx->pc = 0x253FC4u;
            goto label_253fc4;
        }
    }
    ctx->pc = 0x253FB4u;
    // 0x253fb4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x253fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x253fb8: 0x28830280  slti        $v1, $a0, 0x280
    ctx->pc = 0x253fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x253fbc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x253FBCu;
    {
        const bool branch_taken_0x253fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x253fbc) {
            ctx->pc = 0x253FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FBCu;
            // 0x253fc0: 0x85102a  slt         $v0, $a0, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253FC4u;
            goto label_253fc4;
        }
    }
    ctx->pc = 0x253FC4u;
label_253fc4:
    // 0x253fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x253FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253FCCu;
}

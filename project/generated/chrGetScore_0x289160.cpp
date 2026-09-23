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

// Function: chrGetScore
// Address: 0x289160 - 0x2891e0
void chrGetScore_0x289160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrGetScore_0x289160");
#endif

    switch (ctx->pc) {
        case 0x2891b0u: goto label_2891b0;
        default: break;
    }

    ctx->pc = 0x289160u;

    // 0x289160: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x289160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x289164: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289168: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x289168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x28916c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28916cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289170: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x289170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x289174: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x289174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x289178: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x289178u;
    {
        const bool branch_taken_0x289178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289178u;
        // 0x28917c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289178) {
            ctx->pc = 0x2891D0u;
            goto label_2891d0;
        }
    }
    ctx->pc = 0x289180u;
    // 0x289180: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x289180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x289184: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289188: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x289188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
    // 0x28918c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289190: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289194: 0x800008  jr          $a0
    ctx->pc = 0x289194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28919Cu: goto label_28919c;
            case 0x2891B8u: goto label_2891b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289194u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28919Cu;
label_28919c:
    // 0x28919c: 0x24041210  addiu       $a0, $zero, 0x1210
    ctx->pc = 0x28919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2891a0: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2891a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2891a4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x2891a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2891a8: 0xc0a23da  jal         func_288F68
    ctx->pc = 0x2891A8u;
    SET_GPR_U32(ctx, 31, 0x2891B0u);
    ctx->pc = 0x2891ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2891A8u;
    // 0x2891ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F68u, 0x2891A8u, 0x2891B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891B0u;
label_2891b0:
    // 0x2891b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2891B0u;
    {
        const bool branch_taken_0x2891b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891B0u;
        // 0x2891b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891b0) {
            ctx->pc = 0x2891D8u;
            goto label_2891d8;
        }
    }
    ctx->pc = 0x2891B8u;
label_2891b8:
    // 0x2891b8: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x2891b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2891bc: 0x8f82b238  lw          $v0, -0x4DC8($gp)
    ctx->pc = 0x2891bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2891c0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2891c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2891c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2891c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2891c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2891C8u;
    {
        const bool branch_taken_0x2891c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891C8u;
        // 0x2891cc: 0x8c6200f8  lw          $v0, 0xF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891c8) {
            ctx->pc = 0x2891D4u;
            goto label_2891d4;
        }
    }
    ctx->pc = 0x2891D0u;
label_2891d0:
    // 0x2891d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2891d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2891d4:
    // 0x2891d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2891d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2891d8:
    // 0x2891d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2891D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2891DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D8u;
        // 0x2891dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2891E0u;
}

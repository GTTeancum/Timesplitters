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

// Function: bulletGetGroupType
// Address: 0x289490 - 0x2894ac
void bulletGetGroupType_0x289490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletGetGroupType_0x289490");
#endif

    ctx->pc = 0x289490u;

    // 0x289490: 0x28830011  slti        $v1, $a0, 0x11
    ctx->pc = 0x289490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x289494: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289494u;
    {
        const bool branch_taken_0x289494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289494u;
        // 0x289498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289494) {
            ctx->pc = 0x2894A4u;
            goto label_2894a4;
        }
    }
    ctx->pc = 0x28949Cu;
    // 0x28949c: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x28949cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2894a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2894a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2894a4:
    // 0x2894a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2894A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2894A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2894ACu;
}

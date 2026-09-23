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

// Function: bossIsNextParm
// Address: 0x200140 - 0x200180
void bossIsNextParm_0x200140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bossIsNextParm_0x200140");
#endif

    ctx->pc = 0x200140u;

    // 0x200140: 0x8f85b610  lw          $a1, -0x49F0($gp)
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948368)));
    // 0x200144: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x200144u;
    {
        const bool branch_taken_0x200144 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x200148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200144u;
        // 0x200148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200144) {
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x20014Cu;
    // 0x20014c: 0x8f8493b0  lw          $a0, -0x6C50($gp)
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939568)));
    // 0x200150: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x200154: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x200154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x200158: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x200158u;
    {
        const bool branch_taken_0x200158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200158u;
        // 0x20015c: 0x8f8493b4  lw          $a0, -0x6C4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200158) {
            ctx->pc = 0x200178u;
            goto label_200178;
        }
    }
    ctx->pc = 0x200160u;
    // 0x200160: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x200160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x200164: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x200168: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20016c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x20016cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200170: 0x3842002d  xori        $v0, $v0, 0x2D
    ctx->pc = 0x200170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
    // 0x200174: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x200174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_200178:
    // 0x200178: 0x3e00008  jr          $ra
    ctx->pc = 0x200178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200180u;
}

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

// Function: mmAllocItem
// Address: 0x2489e0 - 0x248a18
void mmAllocItem_0x2489e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmAllocItem_0x2489e0");
#endif

    ctx->pc = 0x2489e0u;

    // 0x2489e0: 0x8f82b828  lw          $v0, -0x47D8($gp)
    ctx->pc = 0x2489e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948904)));
    // 0x2489e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2489E4u;
    {
        const bool branch_taken_0x2489e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489E4u;
        // 0x2489e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489e4) {
            ctx->pc = 0x248A10u;
            goto label_248a10;
        }
    }
    ctx->pc = 0x2489ECu;
    // 0x2489ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2489ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2489f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2489f4: 0x8f82b82c  lw          $v0, -0x47D4($gp)
    ctx->pc = 0x2489f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948908)));
    // 0x2489f8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2489f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2489fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2489fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x248a00: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x248a00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x248a04: 0xaf84b828  sw          $a0, -0x47D8($gp)
    ctx->pc = 0x248a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948904), GPR_U32(ctx, 4));
    // 0x248a08: 0xaf82b82c  sw          $v0, -0x47D4($gp)
    ctx->pc = 0x248a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948908), GPR_U32(ctx, 2));
    // 0x248a0c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x248a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_248a10:
    // 0x248a10: 0x3e00008  jr          $ra
    ctx->pc = 0x248A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A10u;
        // 0x248a14: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248A18u;
}

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

// Function: dlSetZB
// Address: 0x2b7cd0 - 0x2b7d24
void dlSetZB_0x2b7cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSetZB_0x2b7cd0");
#endif

    ctx->pc = 0x2b7cd0u;

    // 0x2b7cd0: 0x8f87b4a4  lw          $a3, -0x4B5C($gp)
    ctx->pc = 0x2b7cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948004)));
    // 0x2b7cd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cd8: 0x10c70010  beq         $a2, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7CD8u;
    {
        const bool branch_taken_0x2b7cd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CD8u;
        // 0x2b7cdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cd8) {
            ctx->pc = 0x2B7D1Cu;
            goto label_2b7d1c;
        }
    }
    ctx->pc = 0x2B7CE0u;
    // 0x2b7ce0: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B7CE0u;
    {
        const bool branch_taken_0x2b7ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE0u;
        // 0x2b7ce4: 0x8f8593a0  lw          $a1, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ce0) {
            ctx->pc = 0x2B7D1Cu;
            goto label_2b7d1c;
        }
    }
    ctx->pc = 0x2B7CE8u;
    // 0x2b7ce8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2b7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7cec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2b7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2b7cf0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x2b7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2b7cf4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2b7cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7cf8: 0x24420670  addiu       $v0, $v0, 0x670
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x2b7cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7d00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b7d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7d04: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7d08: 0xaf86b4a4  sw          $a2, -0x4B5C($gp)
    ctx->pc = 0x2b7d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948004), GPR_U32(ctx, 6));
    // 0x2b7d0c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2b7d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7d10: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2b7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2b7d14: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2b7d14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b7d18: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_2b7d1c:
    // 0x2b7d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D1Cu;
        // 0x2b7d20: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D24u;
}

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

// Function: soundBatchAdd
// Address: 0x204908 - 0x204950
void soundBatchAdd_0x204908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundBatchAdd_0x204908");
#endif

    ctx->pc = 0x204908u;

    // 0x204908: 0x8f879b0c  lw          $a3, -0x64F4($gp)
    ctx->pc = 0x204908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x20490c: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x20490cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x204910: 0x28e200c8  slti        $v0, $a3, 0xC8
    ctx->pc = 0x204910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x204914: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x204914u;
    {
        const bool branch_taken_0x204914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204914u;
        // 0x204918: 0x30a9ffff  andi        $t1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204914) {
            ctx->pc = 0x204948u;
            goto label_204948;
        }
    }
    ctx->pc = 0x20491Cu;
    // 0x20491c: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x20491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x204920: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x204924: 0x246319c0  addiu       $v1, $v1, 0x19C0
    ctx->pc = 0x204924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
    // 0x204928: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x204928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x20492c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204930: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x204930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x204934: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x204934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x204938: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x204938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x20493c: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x20493cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x204940: 0xa4490002  sh          $t1, 0x2($v0)
    ctx->pc = 0x204940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x204944: 0xaf859b0c  sw          $a1, -0x64F4($gp)
    ctx->pc = 0x204944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941452), GPR_U32(ctx, 5));
label_204948:
    // 0x204948: 0x3e00008  jr          $ra
    ctx->pc = 0x204948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204950u;
}

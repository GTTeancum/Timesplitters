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

// Function: FindRawData
// Address: 0x2b9130 - 0x2b917c
void FindRawData_0x2b9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindRawData_0x2b9130");
#endif

    switch (ctx->pc) {
        case 0x2b9150u: goto label_2b9150;
        default: break;
    }

    ctx->pc = 0x2b9130u;

    // 0x2b9130: 0x8f83b4b8  lw          $v1, -0x4B48($gp)
    ctx->pc = 0x2b9130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9134: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b9134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9138: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b9138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b913c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2b913cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b9140: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9140u;
    {
        const bool branch_taken_0x2b9140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9140u;
        // 0x2b9144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9140) {
            ctx->pc = 0x2B9174u;
            goto label_2b9174;
        }
    }
    ctx->pc = 0x2B9148u;
    // 0x2b9148: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b9148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b914c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2b914cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b9150:
    // 0x2b9150: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2b9150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b9154: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x2b9154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x2b9158: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x2b9158u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2b915c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x2b915cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b9160: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9160u;
    {
        const bool branch_taken_0x2b9160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9160u;
        // 0x2b9164: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9160) {
            ctx->pc = 0x2B9174u;
            goto label_2b9174;
        }
    }
    ctx->pc = 0x2B9168u;
    // 0x2b9168: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2b9168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2b916c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B916Cu;
    {
        const bool branch_taken_0x2b916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b916c) {
            ctx->pc = 0x2B9170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B916Cu;
            // 0x2b9170: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9150;
        }
    }
    ctx->pc = 0x2B9174u;
label_2b9174:
    // 0x2b9174: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9174u;
        // 0x2b9178: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B917Cu;
}

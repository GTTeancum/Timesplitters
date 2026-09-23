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

// Function: getNote
// Address: 0x205f98 - 0x205ffc
void getNote_0x205f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getNote_0x205f98");
#endif

    switch (ctx->pc) {
        case 0x205fb0u: goto label_205fb0;
        default: break;
    }

    ctx->pc = 0x205f98u;

    // 0x205f98: 0x3c0201fb  lui         $v0, 0x1FB
    ctx->pc = 0x205f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)507 << 16));
    // 0x205f9c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x205f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x205fa0: 0x244720a8  addiu       $a3, $v0, 0x20A8
    ctx->pc = 0x205fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8360));
    // 0x205fa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fa8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x205fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x205fac: 0x0  nop
    ctx->pc = 0x205facu;
    // NOP
label_205fb0:
    // 0x205fb0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x205fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x205fb4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x205fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205fb8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x205fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x205fbc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FBCu;
        // 0x205fc0: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x205FE4u;
            goto label_205fe4;
        }
    }
    ctx->pc = 0x205FC4u;
    // 0x205fc4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x205fc8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x205fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x205fcc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x205fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205fd0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x205fd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x205fd4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205FD4u;
    {
        const bool branch_taken_0x205fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fd4) {
            ctx->pc = 0x205FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205FD4u;
            // 0x205fd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205FE8u;
            goto label_205fe8;
        }
    }
    ctx->pc = 0x205FDCu;
    // 0x205fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x205FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FDCu;
        // 0x205fe0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205FE4u;
label_205fe4:
    // 0x205fe4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x205fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205fe8:
    // 0x205fe8: 0x28c2023f  slti        $v0, $a2, 0x23F
    ctx->pc = 0x205fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)575) ? 1 : 0);
    // 0x205fec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x205FECu;
    {
        const bool branch_taken_0x205fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FECu;
        // 0x205ff0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fec) {
            ctx->pc = 0x205FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205fb0;
        }
    }
    ctx->pc = 0x205FF4u;
    // 0x205ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x205FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FF4u;
        // 0x205ff8: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205FFCu;
}

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

// Function: signonMemCount
// Address: 0x2208c8 - 0x22092c
void signonMemCount_0x2208c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonMemCount_0x2208c8");
#endif

    switch (ctx->pc) {
        case 0x2208e8u: goto label_2208e8;
        default: break;
    }

    ctx->pc = 0x2208c8u;

    // 0x2208c8: 0x8f889dd8  lw          $t0, -0x6228($gp)
    ctx->pc = 0x2208c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x2208cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2208ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2208d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2208d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2208D4u;
    {
        const bool branch_taken_0x2208d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208D4u;
        // 0x2208d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208d4) {
            ctx->pc = 0x220924u;
            goto label_220924;
        }
    }
    ctx->pc = 0x2208DCu;
    // 0x2208dc: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2208dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2208e0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2208e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2208e4: 0x0  nop
    ctx->pc = 0x2208e4u;
    // NOP
label_2208e8:
    // 0x2208e8: 0x24e2e1c8  addiu       $v0, $a3, -0x1E38
    ctx->pc = 0x2208e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959560));
    // 0x2208ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2208ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2208f0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2208f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2208f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2208f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2208f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2208f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2208fc: 0x28a30090  slti        $v1, $a1, 0x90
    ctx->pc = 0x2208fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x220900: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x220900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x220904: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x220904u;
    {
        const bool branch_taken_0x220904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220904u;
        // 0x220908: 0x82300a  movz        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220904) {
            ctx->pc = 0x220924u;
            goto label_220924;
        }
    }
    ctx->pc = 0x22090Cu;
    // 0x22090c: 0x24020b78  addiu       $v0, $zero, 0xB78
    ctx->pc = 0x22090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
    // 0x220910: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x220910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x220914: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x220914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x220918: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x220918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22091c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x22091Cu;
    {
        const bool branch_taken_0x22091c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22091Cu;
        // 0x220920: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22091c) {
            ctx->pc = 0x2208E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2208e8;
        }
    }
    ctx->pc = 0x220924u;
label_220924:
    // 0x220924: 0x3e00008  jr          $ra
    ctx->pc = 0x220924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220924u;
        // 0x220928: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22092Cu;
}

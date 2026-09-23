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

// Function: focusprev
// Address: 0x20ca20 - 0x20ca90
void focusprev_0x20ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("focusprev_0x20ca20");
#endif

    switch (ctx->pc) {
        case 0x20ca50u: goto label_20ca50;
        default: break;
    }

    ctx->pc = 0x20ca20u;

    // 0x20ca20: 0x8f889c68  lw          $t0, -0x6398($gp)
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941800)));
    // 0x20ca24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ca28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ca2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca30: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x20ca30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20ca34: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x20ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20ca38: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x20CA38u;
    {
        const bool branch_taken_0x20ca38 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA38u;
        // 0x20ca3c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca38) {
            ctx->pc = 0x20CA84u;
            goto label_20ca84;
        }
    }
    ctx->pc = 0x20CA40u;
    // 0x20ca40: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x20ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x20ca44: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20ca44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ca48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20ca4c: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x20ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_20ca50:
    // 0x20ca50: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x20ca50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x20ca54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ca54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ca58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CA58u;
    {
        const bool branch_taken_0x20ca58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA58u;
        // 0x20ca5c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca58) {
            ctx->pc = 0x20CA78u;
            goto label_20ca78;
        }
    }
    ctx->pc = 0x20CA60u;
    // 0x20ca60: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x20ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x20ca64: 0x9100a  movz        $v0, $zero, $t1
    ctx->pc = 0x20ca64u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x20ca68: 0x86300a  movz        $a2, $a0, $a2
    ctx->pc = 0x20ca68u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x20ca6c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x20ca6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x20ca70: 0x47380a  movz        $a3, $v0, $a3
    ctx->pc = 0x20ca70u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x20ca74: 0x163480a  movz        $t1, $t3, $v1
    ctx->pc = 0x20ca74u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 11));
label_20ca78:
    // 0x20ca78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20ca7c: 0x4a1fff4  bgez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x20CA7Cu;
    {
        const bool branch_taken_0x20ca7c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x20CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA7Cu;
        // 0x20ca80: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca7c) {
            ctx->pc = 0x20CA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ca50;
        }
    }
    ctx->pc = 0x20CA84u;
label_20ca84:
    // 0x20ca84: 0xe7300b  movn        $a2, $a3, $a3
    ctx->pc = 0x20ca84u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x20ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x20CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA88u;
        // 0x20ca8c: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CA90u;
}

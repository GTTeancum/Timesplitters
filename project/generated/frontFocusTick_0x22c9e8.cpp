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

// Function: frontFocusTick
// Address: 0x22c9e8 - 0x22ca6c
void frontFocusTick_0x22c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontFocusTick_0x22c9e8");
#endif

    switch (ctx->pc) {
        case 0x22ca08u: goto label_22ca08;
        default: break;
    }

    ctx->pc = 0x22c9e8u;

    // 0x22c9e8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x22c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x22c9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c9f0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x22c9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22c9f4: 0x84490026  lh          $t1, 0x26($v0)
    ctx->pc = 0x22c9f4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x22c9f8: 0x84480022  lh          $t0, 0x22($v0)
    ctx->pc = 0x22c9f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x22c9fc: 0x18e00018  blez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x22C9FCu;
    {
        const bool branch_taken_0x22c9fc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9FCu;
        // 0x22ca00: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9fc) {
            ctx->pc = 0x22CA60u;
            goto label_22ca60;
        }
    }
    ctx->pc = 0x22CA04u;
    // 0x22ca04: 0x0  nop
    ctx->pc = 0x22ca04u;
    // NOP
label_22ca08:
    // 0x22ca08: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x22ca08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x22ca0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ca10: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22CA10u;
    {
        const bool branch_taken_0x22ca10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA10u;
        // 0x22ca14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca10) {
            ctx->pc = 0x22CA54u;
            goto label_22ca54;
        }
    }
    ctx->pc = 0x22CA18u;
    // 0x22ca18: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x22ca18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22ca1c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x22ca1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22ca20: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x22ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22ca24: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x22ca24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22ca28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22CA28u;
    {
        const bool branch_taken_0x22ca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ca28) {
            ctx->pc = 0x22CA54u;
            goto label_22ca54;
        }
    }
    ctx->pc = 0x22CA30u;
    // 0x22ca30: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x22ca30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22ca34: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x22ca34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x22ca38: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x22ca3c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x22ca3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22ca40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CA40u;
    {
        const bool branch_taken_0x22ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA40u;
        // 0x22ca44: 0xc7102a  slt         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca40) {
            ctx->pc = 0x22CA58u;
            goto label_22ca58;
        }
    }
    ctx->pc = 0x22CA48u;
    // 0x22ca48: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x22ca48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CA54u;
label_22ca54:
    // 0x22ca54: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x22ca54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_22ca58:
    // 0x22ca58: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22CA58u;
    {
        const bool branch_taken_0x22ca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA58u;
        // 0x22ca5c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca58) {
            ctx->pc = 0x22CA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ca08;
        }
    }
    ctx->pc = 0x22CA60u;
label_22ca60:
    // 0x22ca60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22ca64: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA64u;
        // 0x22ca68: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CA6Cu;
}

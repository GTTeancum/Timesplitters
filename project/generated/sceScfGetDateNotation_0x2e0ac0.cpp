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

// Function: sceScfGetDateNotation
// Address: 0x2e0ac0 - 0x2e0b3c
void sceScfGetDateNotation_0x2e0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetDateNotation_0x2e0ac0");
#endif

    switch (ctx->pc) {
        case 0x2e0ad0u: goto label_2e0ad0;
        case 0x2e0ae8u: goto label_2e0ae8;
        case 0x2e0b10u: goto label_2e0b10;
        case 0x2e0b28u: goto label_2e0b28;
        default: break;
    }

    ctx->pc = 0x2e0ac0u;

    // 0x2e0ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0ac8: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E0AC8u;
    SET_GPR_U32(ctx, 31, 0x2E0AD0u);
    ctx->pc = 0x2E0ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AC8u;
    // 0x2e0acc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0AC8u, 0x2E0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AD0u;
label_2e0ad0:
    // 0x2e0ad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0AD0u;
    {
        const bool branch_taken_0x2e0ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AD0u;
        // 0x2e0ad4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ad0) {
            ctx->pc = 0x2E0AE0u;
            goto label_2e0ae0;
        }
    }
    ctx->pc = 0x2E0AD8u;
    // 0x2e0ad8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E0AD8u;
    {
        const bool branch_taken_0x2e0ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AD8u;
        // 0x2e0adc: 0x90503003  lbu         $s0, 0x3003($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12291)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ad8) {
            ctx->pc = 0x2E0B28u;
            goto label_2e0b28;
        }
    }
    ctx->pc = 0x2E0AE0u;
label_2e0ae0:
    // 0x2e0ae0: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0AE0u;
    SET_GPR_U32(ctx, 31, 0x2E0AE8u);
    ctx->pc = 0x2E0AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AE0u;
    // 0x2e0ae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0AE0u, 0x2E0AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AE8u;
label_2e0ae8:
    // 0x2e0ae8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0aec: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2e0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2e0af0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e0af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e0af4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0AF4u;
    {
        const bool branch_taken_0x2e0af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AF4u;
        // 0x2e0af8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0af4) {
            ctx->pc = 0x2E0B04u;
            goto label_2e0b04;
        }
    }
    ctx->pc = 0x2E0AFCu;
    // 0x2e0afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E0AFCu;
    {
        const bool branch_taken_0x2e0afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AFCu;
        // 0x2e0b00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0afc) {
            ctx->pc = 0x2E0B28u;
            goto label_2e0b28;
        }
    }
    ctx->pc = 0x2E0B04u;
label_2e0b04:
    // 0x2e0b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e0b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b08: 0xc0acf10  jal         func_2B3C40
    ctx->pc = 0x2E0B08u;
    SET_GPR_U32(ctx, 31, 0x2E0B10u);
    ctx->pc = 0x2E0B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B08u;
    // 0x2e0b0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C40u, 0x2E0B08u, 0x2E0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B10u;
label_2e0b10:
    // 0x2e0b10: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2e0b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e0b14: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0b18: 0x2484b6c8  addiu       $a0, $a0, -0x4938
    ctx->pc = 0x2e0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948552));
    // 0x2e0b1c: 0x38182  srl         $s0, $v1, 6
    ctx->pc = 0x2e0b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x2e0b20: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2E0B20u;
    SET_GPR_U32(ctx, 31, 0x2E0B28u);
    ctx->pc = 0x2E0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B20u;
    // 0x2e0b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2E0B20u, 0x2E0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B28u;
label_2e0b28:
    // 0x2e0b28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0b30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B34u;
        // 0x2e0b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B3Cu;
}

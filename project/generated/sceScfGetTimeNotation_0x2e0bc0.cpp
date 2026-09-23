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

// Function: sceScfGetTimeNotation
// Address: 0x2e0bc0 - 0x2e0c40
void sceScfGetTimeNotation_0x2e0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetTimeNotation_0x2e0bc0");
#endif

    switch (ctx->pc) {
        case 0x2e0bd0u: goto label_2e0bd0;
        case 0x2e0be8u: goto label_2e0be8;
        case 0x2e0c10u: goto label_2e0c10;
        case 0x2e0c2cu: goto label_2e0c2c;
        default: break;
    }

    ctx->pc = 0x2e0bc0u;

    // 0x2e0bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0bc8: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E0BC8u;
    SET_GPR_U32(ctx, 31, 0x2E0BD0u);
    ctx->pc = 0x2E0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BC8u;
    // 0x2e0bcc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0BC8u, 0x2E0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BD0u;
label_2e0bd0:
    // 0x2e0bd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0BD0u;
    {
        const bool branch_taken_0x2e0bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BD0u;
        // 0x2e0bd4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bd0) {
            ctx->pc = 0x2E0BE0u;
            goto label_2e0be0;
        }
    }
    ctx->pc = 0x2E0BD8u;
    // 0x2e0bd8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0BD8u;
    {
        const bool branch_taken_0x2e0bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BD8u;
        // 0x2e0bdc: 0x90503007  lbu         $s0, 0x3007($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bd8) {
            ctx->pc = 0x2E0C2Cu;
            goto label_2e0c2c;
        }
    }
    ctx->pc = 0x2E0BE0u;
label_2e0be0:
    // 0x2e0be0: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0BE0u;
    SET_GPR_U32(ctx, 31, 0x2E0BE8u);
    ctx->pc = 0x2E0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BE0u;
    // 0x2e0be4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0BE0u, 0x2E0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BE8u;
label_2e0be8:
    // 0x2e0be8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0bec: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2e0becu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2e0bf0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e0bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0BF4u;
    {
        const bool branch_taken_0x2e0bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BF4u;
        // 0x2e0bf8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bf4) {
            ctx->pc = 0x2E0C04u;
            goto label_2e0c04;
        }
    }
    ctx->pc = 0x2E0BFCu;
    // 0x2e0bfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0BFCu;
    {
        const bool branch_taken_0x2e0bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BFCu;
        // 0x2e0c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bfc) {
            ctx->pc = 0x2E0C2Cu;
            goto label_2e0c2c;
        }
    }
    ctx->pc = 0x2E0C04u;
label_2e0c04:
    // 0x2e0c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0c08: 0xc0acf10  jal         func_2B3C40
    ctx->pc = 0x2E0C08u;
    SET_GPR_U32(ctx, 31, 0x2E0C10u);
    ctx->pc = 0x2E0C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C08u;
    // 0x2e0c0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C40u, 0x2E0C08u, 0x2E0C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C10u;
label_2e0c10:
    // 0x2e0c10: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2e0c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e0c14: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0c18: 0x2484b6f0  addiu       $a0, $a0, -0x4910
    ctx->pc = 0x2e0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948592));
    // 0x2e0c1c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2e0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2e0c20: 0x30700001  andi        $s0, $v1, 0x1
    ctx->pc = 0x2e0c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e0c24: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2E0C24u;
    SET_GPR_U32(ctx, 31, 0x2E0C2Cu);
    ctx->pc = 0x2E0C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C24u;
    // 0x2e0c28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2E0C24u, 0x2E0C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C2Cu;
label_2e0c2c:
    // 0x2e0c2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0c34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C38u;
        // 0x2e0c3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0C40u;
}

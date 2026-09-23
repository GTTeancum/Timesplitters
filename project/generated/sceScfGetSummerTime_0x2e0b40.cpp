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

// Function: sceScfGetSummerTime
// Address: 0x2e0b40 - 0x2e0bc0
void sceScfGetSummerTime_0x2e0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceScfGetSummerTime_0x2e0b40");
#endif

    switch (ctx->pc) {
        case 0x2e0b50u: goto label_2e0b50;
        case 0x2e0b68u: goto label_2e0b68;
        case 0x2e0b90u: goto label_2e0b90;
        case 0x2e0bacu: goto label_2e0bac;
        default: break;
    }

    ctx->pc = 0x2e0b40u;

    // 0x2e0b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0b48: 0xc0b8246  jal         func_2E0918
    ctx->pc = 0x2E0B48u;
    SET_GPR_U32(ctx, 31, 0x2E0B50u);
    ctx->pc = 0x2E0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B48u;
    // 0x2e0b4c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0918u, 0x2E0B48u, 0x2E0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0B50u;
    {
        const bool branch_taken_0x2e0b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B50u;
        // 0x2e0b54: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b50) {
            ctx->pc = 0x2E0B60u;
            goto label_2e0b60;
        }
    }
    ctx->pc = 0x2E0B58u;
    // 0x2e0b58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0B58u;
    {
        const bool branch_taken_0x2e0b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B58u;
        // 0x2e0b5c: 0x90503006  lbu         $s0, 0x3006($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12294)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b58) {
            ctx->pc = 0x2E0BACu;
            goto label_2e0bac;
        }
    }
    ctx->pc = 0x2E0B60u;
label_2e0b60:
    // 0x2e0b60: 0xc0b4074  jal         func_2D01D0
    ctx->pc = 0x2E0B60u;
    SET_GPR_U32(ctx, 31, 0x2E0B68u);
    ctx->pc = 0x2E0B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B60u;
    // 0x2e0b64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D01D0u, 0x2E0B60u, 0x2E0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B68u;
label_2e0b68:
    // 0x2e0b68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0b6c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2e0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2e0b70: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e0b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e0b74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0B74u;
    {
        const bool branch_taken_0x2e0b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B74u;
        // 0x2e0b78: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b74) {
            ctx->pc = 0x2E0B84u;
            goto label_2e0b84;
        }
    }
    ctx->pc = 0x2E0B7Cu;
    // 0x2e0b7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0B7Cu;
    {
        const bool branch_taken_0x2e0b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B7Cu;
        // 0x2e0b80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b7c) {
            ctx->pc = 0x2E0BACu;
            goto label_2e0bac;
        }
    }
    ctx->pc = 0x2E0B84u;
label_2e0b84:
    // 0x2e0b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e0b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b88: 0xc0acf10  jal         func_2B3C40
    ctx->pc = 0x2E0B88u;
    SET_GPR_U32(ctx, 31, 0x2E0B90u);
    ctx->pc = 0x2E0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B88u;
    // 0x2e0b8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C40u, 0x2E0B88u, 0x2E0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B90u;
label_2e0b90:
    // 0x2e0b90: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2e0b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e0b94: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e0b98: 0x2484b6e0  addiu       $a0, $a0, -0x4920
    ctx->pc = 0x2e0b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948576));
    // 0x2e0b9c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2e0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2e0ba0: 0x30700001  andi        $s0, $v1, 0x1
    ctx->pc = 0x2e0ba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e0ba4: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2E0BA4u;
    SET_GPR_U32(ctx, 31, 0x2E0BACu);
    ctx->pc = 0x2E0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BA4u;
    // 0x2e0ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2E0BA4u, 0x2E0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BACu;
label_2e0bac:
    // 0x2e0bac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e0bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0bb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BB8u;
        // 0x2e0bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0BC0u;
}

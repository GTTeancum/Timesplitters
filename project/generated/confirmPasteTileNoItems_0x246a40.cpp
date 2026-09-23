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

// Function: confirmPasteTileNoItems
// Address: 0x246a40 - 0x246ae4
void confirmPasteTileNoItems_0x246a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("confirmPasteTileNoItems_0x246a40");
#endif

    switch (ctx->pc) {
        case 0x246a54u: goto label_246a54;
        case 0x246a70u: goto label_246a70;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246aa8u: goto label_246aa8;
        case 0x246ab8u: goto label_246ab8;
        case 0x246accu: goto label_246acc;
        default: break;
    }

    ctx->pc = 0x246a40u;

    // 0x246a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x246a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246a4c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x246A4Cu;
    SET_GPR_U32(ctx, 31, 0x246A54u);
    ctx->pc = 0x246A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A4Cu;
    // 0x246a50: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x246A4Cu, 0x246A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A54u;
label_246a54:
    // 0x246a54: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x246a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x246a58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x246A58u;
    {
        const bool branch_taken_0x246a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A58u;
        // 0x246a5c: 0x8f90a0f8  lw          $s0, -0x5F08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a58) {
            ctx->pc = 0x246AB0u;
            goto label_246ab0;
        }
    }
    ctx->pc = 0x246A60u;
    // 0x246a60: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x246A60u;
    {
        const bool branch_taken_0x246a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A60u;
        // 0x246a64: 0x8f82a004  lw          $v0, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a60) {
            ctx->pc = 0x246A94u;
            goto label_246a94;
        }
    }
    ctx->pc = 0x246A68u;
    // 0x246a68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x246A68u;
    {
        const bool branch_taken_0x246a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A68u;
        // 0x246a6c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a68) {
            ctx->pc = 0x246A7Cu;
            goto label_246a7c;
        }
    }
    ctx->pc = 0x246A70u;
label_246a70:
    // 0x246a70: 0xc092286  jal         func_248A18
    ctx->pc = 0x246A70u;
    SET_GPR_U32(ctx, 31, 0x246A78u);
    ctx->pc = 0x246A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A70u;
    // 0x246a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A18u, 0x246A70u, 0x246A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A78u;
label_246a78:
    // 0x246a78: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x246a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_246a7c:
    // 0x246a7c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x246A7Cu;
    {
        const bool branch_taken_0x246a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a7c) {
            ctx->pc = 0x246A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A7Cu;
            // 0x246a80: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246a70;
        }
    }
    ctx->pc = 0x246A84u;
    // 0x246a84: 0x8e100038  lw          $s0, 0x38($s0)
    ctx->pc = 0x246a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x246a88: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x246A88u;
    {
        const bool branch_taken_0x246a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a88) {
            ctx->pc = 0x246A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A88u;
            // 0x246a8c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246a7c;
        }
    }
    ctx->pc = 0x246A90u;
    // 0x246a90: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x246a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_246a94:
    // 0x246a94: 0x8f83a10c  lw          $v1, -0x5EF4($gp)
    ctx->pc = 0x246a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942988)));
    // 0x246a98: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x246a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
    // 0x246a9c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x246a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x246aa0: 0xc091850  jal         func_246140
    ctx->pc = 0x246AA0u;
    SET_GPR_U32(ctx, 31, 0x246AA8u);
    ctx->pc = 0x246AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AA0u;
    // 0x246aa4: 0xac440024  sw          $a0, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246140u, 0x246AA0u, 0x246AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AA8u;
label_246aa8:
    // 0x246aa8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x246AA8u;
    {
        const bool branch_taken_0x246aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AA8u;
        // 0x246aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246aa8) {
            ctx->pc = 0x246AD4u;
            goto label_246ad4;
        }
    }
    ctx->pc = 0x246AB0u;
label_246ab0:
    // 0x246ab0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x246AB0u;
    SET_GPR_U32(ctx, 31, 0x246AB8u);
    ctx->pc = 0x246AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AB0u;
    // 0x246ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x246AB0u, 0x246AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB8u;
label_246ab8:
    // 0x246ab8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x246ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x246abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246ABCu;
    {
        const bool branch_taken_0x246abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ABCu;
        // 0x246ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246abc) {
            ctx->pc = 0x246AD4u;
            goto label_246ad4;
        }
    }
    ctx->pc = 0x246AC4u;
    // 0x246ac4: 0xc0921e6  jal         func_248798
    ctx->pc = 0x246AC4u;
    SET_GPR_U32(ctx, 31, 0x246ACCu);
    ctx->pc = 0x246AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AC4u;
    // 0x246ac8: 0x8f84a0f8  lw          $a0, -0x5F08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248798u, 0x246AC4u, 0x246ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246ACCu;
label_246acc:
    // 0x246acc: 0xaf80a0f8  sw          $zero, -0x5F08($gp)
    ctx->pc = 0x246accu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942968), GPR_U32(ctx, 0));
    // 0x246ad0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246ad4:
    // 0x246ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246adc: 0x3e00008  jr          $ra
    ctx->pc = 0x246ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ADCu;
        // 0x246ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246AE4u;
}

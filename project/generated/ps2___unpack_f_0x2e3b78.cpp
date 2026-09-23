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

// Function: __unpack_f
// Address: 0x2e3b78 - 0x2e3c08
void ps2___unpack_f_0x2e3b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x2e3b78");
#endif

    ctx->pc = 0x2e3b78u;

    // 0x2e3b78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3b7c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2e3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2e3b80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e3b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e3b84: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e3b88: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x2e3b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2e3b8c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2e3b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e3b90: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2e3b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e3b94: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3B94u;
    {
        const bool branch_taken_0x2e3b94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B94u;
        // 0x2e3b98: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b94) {
            ctx->pc = 0x2E3BA8u;
            goto label_2e3ba8;
        }
    }
    ctx->pc = 0x2E3B9Cu;
    // 0x2e3b9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA0u;
        // 0x2e3ba4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3BA8u;
label_2e3ba8:
    // 0x2e3ba8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2e3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e3bac: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3BACu;
    {
        const bool branch_taken_0x2e3bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BACu;
        // 0x2e3bb0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bac) {
            ctx->pc = 0x2E3BE8u;
            goto label_2e3be8;
        }
    }
    ctx->pc = 0x2E3BB4u;
    // 0x2e3bb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3BB4u;
    {
        const bool branch_taken_0x2e3bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BB4u;
        // 0x2e3bb8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bb4) {
            ctx->pc = 0x2E3BC8u;
            goto label_2e3bc8;
        }
    }
    ctx->pc = 0x2E3BBCu;
    // 0x2e3bbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BC0u;
        // 0x2e3bc4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3BC8u;
label_2e3bc8:
    // 0x2e3bc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e3bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e3bcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3BCCu;
    {
        const bool branch_taken_0x2e3bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BCCu;
        // 0x2e3bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bcc) {
            ctx->pc = 0x2E3BDCu;
            goto label_2e3bdc;
        }
    }
    ctx->pc = 0x2E3BD4u;
    // 0x2e3bd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3BD4u;
    {
        const bool branch_taken_0x2e3bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BD4u;
        // 0x2e3bd8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bd4) {
            ctx->pc = 0x2E3BE0u;
            goto label_2e3be0;
        }
    }
    ctx->pc = 0x2E3BDCu;
label_2e3bdc:
    // 0x2e3bdc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e3be0:
    // 0x2e3be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BE0u;
        // 0x2e3be4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3BE8u;
label_2e3be8:
    // 0x2e3be8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2e3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2e3bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e3becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3bf0: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x2e3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x2e3bf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3bf8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2e3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2e3bfc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2e3bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2e3c00: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C00u;
        // 0x2e3c04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C08u;
}

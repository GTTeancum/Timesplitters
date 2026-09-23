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

// Function: GetFormat
// Address: 0x2b9ad8 - 0x2b9b94
void GetFormat_0x2b9ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFormat_0x2b9ad8");
#endif

    ctx->pc = 0x2b9ad8u;

    // 0x2b9ad8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2b9ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9adc: 0x240201da  addiu       $v0, $zero, 0x1DA
    ctx->pc = 0x2b9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
    // 0x2b9ae0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9AE0u;
    {
        const bool branch_taken_0x2b9ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AE0u;
        // 0x2b9ae4: 0x3402da01  ori         $v0, $zero, 0xDA01 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55809);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ae0) {
            ctx->pc = 0x2B9AF0u;
            goto label_2b9af0;
        }
    }
    ctx->pc = 0x2B9AE8u;
    // 0x2b9ae8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9AE8u;
    {
        const bool branch_taken_0x2b9ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9ae8) {
            ctx->pc = 0x2B9AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9AE8u;
            // 0x2b9aec: 0x94840000  lhu         $a0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9AF8u;
            goto label_2b9af8;
        }
    }
    ctx->pc = 0x2B9AF0u;
label_2b9af0:
    // 0x2b9af0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AF0u;
        // 0x2b9af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9AF8u;
label_2b9af8:
    // 0x2b9af8: 0x24023651  addiu       $v0, $zero, 0x3651
    ctx->pc = 0x2b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13905));
    // 0x2b9afc: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B9AFCu;
    {
        const bool branch_taken_0x2b9afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AFCu;
        // 0x2b9b00: 0x28823652  slti        $v0, $a0, 0x3652 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13906) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9afc) {
            ctx->pc = 0x2B9B6Cu;
            goto label_2b9b6c;
        }
    }
    ctx->pc = 0x2B9B04u;
    // 0x2b9b04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9B04u;
    {
        const bool branch_taken_0x2b9b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B04u;
        // 0x2b9b08: 0x2402364d  addiu       $v0, $zero, 0x364D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13901));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b04) {
            ctx->pc = 0x2B9B24u;
            goto label_2b9b24;
        }
    }
    ctx->pc = 0x2B9B0Cu;
    // 0x2b9b0c: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B9B0Cu;
    {
        const bool branch_taken_0x2b9b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B0Cu;
        // 0x2b9b10: 0x24023650  addiu       $v0, $zero, 0x3650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b0c) {
            ctx->pc = 0x2B9B7Cu;
            goto label_2b9b7c;
        }
    }
    ctx->pc = 0x2B9B14u;
    // 0x2b9b14: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9B14u;
    {
        const bool branch_taken_0x2b9b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B14u;
        // 0x2b9b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b14) {
            ctx->pc = 0x2B9B5Cu;
            goto label_2b9b5c;
        }
    }
    ctx->pc = 0x2B9B1Cu;
    // 0x2b9b1c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B9B1Cu;
    {
        const bool branch_taken_0x2b9b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b1c) {
            ctx->pc = 0x2B9B8Cu;
            goto label_2b9b8c;
        }
    }
    ctx->pc = 0x2B9B24u;
label_2b9b24:
    // 0x2b9b24: 0x24023850  addiu       $v0, $zero, 0x3850
    ctx->pc = 0x2b9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14416));
    // 0x2b9b28: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9B28u;
    {
        const bool branch_taken_0x2b9b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B28u;
        // 0x2b9b2c: 0x28823851  slti        $v0, $a0, 0x3851 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14417) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b28) {
            ctx->pc = 0x2B9B64u;
            goto label_2b9b64;
        }
    }
    ctx->pc = 0x2B9B30u;
    // 0x2b9b30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9B30u;
    {
        const bool branch_taken_0x2b9b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B30u;
        // 0x2b9b34: 0x2402384d  addiu       $v0, $zero, 0x384D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b30) {
            ctx->pc = 0x2B9B48u;
            goto label_2b9b48;
        }
    }
    ctx->pc = 0x2B9B38u;
    // 0x2b9b38: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B9B38u;
    {
        const bool branch_taken_0x2b9b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B38u;
        // 0x2b9b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b38) {
            ctx->pc = 0x2B9B84u;
            goto label_2b9b84;
        }
    }
    ctx->pc = 0x2B9B40u;
    // 0x2b9b40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B9B40u;
    {
        const bool branch_taken_0x2b9b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b40) {
            ctx->pc = 0x2B9B8Cu;
            goto label_2b9b8c;
        }
    }
    ctx->pc = 0x2B9B48u;
label_2b9b48:
    // 0x2b9b48: 0x24023851  addiu       $v0, $zero, 0x3851
    ctx->pc = 0x2b9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14417));
    // 0x2b9b4c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B9B4Cu;
    {
        const bool branch_taken_0x2b9b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B4Cu;
        // 0x2b9b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b4c) {
            ctx->pc = 0x2B9B74u;
            goto label_2b9b74;
        }
    }
    ctx->pc = 0x2B9B54u;
    // 0x2b9b54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B9B54u;
    {
        const bool branch_taken_0x2b9b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b54) {
            ctx->pc = 0x2B9B8Cu;
            goto label_2b9b8c;
        }
    }
    ctx->pc = 0x2B9B5Cu;
label_2b9b5c:
    // 0x2b9b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B5Cu;
        // 0x2b9b60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B64u;
label_2b9b64:
    // 0x2b9b64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B64u;
        // 0x2b9b68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B6Cu;
label_2b9b6c:
    // 0x2b9b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B6Cu;
        // 0x2b9b70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B74u;
label_2b9b74:
    // 0x2b9b74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B74u;
        // 0x2b9b78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B7Cu;
label_2b9b7c:
    // 0x2b9b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B7Cu;
        // 0x2b9b80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B84u;
label_2b9b84:
    // 0x2b9b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B84u;
        // 0x2b9b88: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B8Cu;
label_2b9b8c:
    // 0x2b9b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B94u;
}

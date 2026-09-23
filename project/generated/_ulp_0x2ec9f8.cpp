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

// Function: _ulp
// Address: 0x2ec9f8 - 0x2eca90
void _ulp_0x2ec9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ulp_0x2ec9f8");
#endif

    ctx->pc = 0x2ec9f8u;

    // 0x2ec9f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2ec9f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2ec9fc: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x2ec9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x2eca00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2eca00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2eca04: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x2eca04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x2eca08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2eca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eca0c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECA0Cu;
    {
        const bool branch_taken_0x2eca0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2ECA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA0Cu;
        // 0x2eca10: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca0c) {
            ctx->pc = 0x2ECA1Cu;
            goto label_2eca1c;
        }
    }
    ctx->pc = 0x2ECA14u;
    // 0x2eca14: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2ECA14u;
    {
        const bool branch_taken_0x2eca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA14u;
        // 0x2eca18: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca14) {
            ctx->pc = 0x2ECA84u;
            goto label_2eca84;
        }
    }
    ctx->pc = 0x2ECA1Cu;
label_2eca1c:
    // 0x2eca1c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2eca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2eca20: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x2eca20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2eca24: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x2eca24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2eca28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECA28u;
    {
        const bool branch_taken_0x2eca28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA28u;
        // 0x2eca2c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca28) {
            ctx->pc = 0x2ECA3Cu;
            goto label_2eca3c;
        }
    }
    ctx->pc = 0x2ECA30u;
    // 0x2eca30: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2eca30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eca34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECA34u;
    {
        const bool branch_taken_0x2eca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA34u;
        // 0x2eca38: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca34) {
            ctx->pc = 0x2ECA84u;
            goto label_2eca84;
        }
    }
    ctx->pc = 0x2ECA3Cu;
label_2eca3c:
    // 0x2eca3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eca40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eca44: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x2eca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x2eca48: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x2eca48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2eca4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECA4Cu;
    {
        const bool branch_taken_0x2eca4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA4Cu;
        // 0x2eca50: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca4c) {
            ctx->pc = 0x2ECA68u;
            goto label_2eca68;
        }
    }
    ctx->pc = 0x2ECA54u;
    // 0x2eca54: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2eca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2eca58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eca5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2eca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eca60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECA60u;
    {
        const bool branch_taken_0x2eca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA60u;
        // 0x2eca64: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca60) {
            ctx->pc = 0x2ECA6Cu;
            goto label_2eca6c;
        }
    }
    ctx->pc = 0x2ECA68u;
label_2eca68:
    // 0x2eca68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eca6c:
    // 0x2eca6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eca70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2eca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eca74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2eca74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2eca78: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eca7c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2eca7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2eca80: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2eca80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2eca84:
    // 0x2eca84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2eca84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca88: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA88u;
        // 0x2eca8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECA90u;
}

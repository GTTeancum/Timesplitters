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

// Function: memCheck
// Address: 0x201ac0 - 0x201b34
void memCheck_0x201ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memCheck_0x201ac0");
#endif

    ctx->pc = 0x201ac0u;

    // 0x201ac0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x201ac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201ac4: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x201ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x201ac8: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x201AC8u;
    {
        const bool branch_taken_0x201ac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x201ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AC8u;
        // 0x201acc: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ac8) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201AD0u;
    // 0x201ad0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x201ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x201ad4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x201AD4u;
    {
        const bool branch_taken_0x201ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201ad4) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201ADCu;
    // 0x201adc: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x201adcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x201ae0: 0x14c50010  bne         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x201AE0u;
    {
        const bool branch_taken_0x201ae0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x201AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AE0u;
        // 0x201ae4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ae0) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201AE8u;
    // 0x201ae8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x201ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x201aec: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x201AECu;
    {
        const bool branch_taken_0x201aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201aec) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201AF4u;
    // 0x201af4: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x201af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201af8: 0x1446000a  bne         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x201AF8u;
    {
        const bool branch_taken_0x201af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x201AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AF8u;
        // 0x201afc: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201af8) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201B00u;
    // 0x201b00: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x201b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x201b04: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201B04u;
    {
        const bool branch_taken_0x201b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B04u;
        // 0x201b08: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b04) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201B0Cu;
    // 0x201b0c: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x201b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x201b10: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201B10u;
    {
        const bool branch_taken_0x201b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B10u;
        // 0x201b14: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b10) {
            ctx->pc = 0x201B24u;
            goto label_201b24;
        }
    }
    ctx->pc = 0x201B18u;
    // 0x201b18: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x201b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x201b1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201B1Cu;
    {
        const bool branch_taken_0x201b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201b1c) {
            ctx->pc = 0x201B2Cu;
            goto label_201b2c;
        }
    }
    ctx->pc = 0x201B24u;
label_201b24:
    // 0x201b24: 0x3e00008  jr          $ra
    ctx->pc = 0x201B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B24u;
        // 0x201b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B2Cu;
label_201b2c:
    // 0x201b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x201B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B2Cu;
        // 0x201b30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B34u;
}

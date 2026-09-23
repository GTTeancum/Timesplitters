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

// Function: dlSetDitherMatrix
// Address: 0x2b7df0 - 0x2b7ea0
void dlSetDitherMatrix_0x2b7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dlSetDitherMatrix_0x2b7df0");
#endif

    ctx->pc = 0x2b7df0u;

    // 0x2b7df0: 0x8f87b4ac  lw          $a3, -0x4B54($gp)
    ctx->pc = 0x2b7df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948012)));
    // 0x2b7df4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7df8: 0x10c70027  beq         $a2, $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B7DF8u;
    {
        const bool branch_taken_0x2b7df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DF8u;
        // 0x2b7dfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7df8) {
            ctx->pc = 0x2B7E98u;
            goto label_2b7e98;
        }
    }
    ctx->pc = 0x2B7E00u;
    // 0x2b7e00: 0x10c20025  beq         $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B7E00u;
    {
        const bool branch_taken_0x2b7e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E00u;
        // 0x2b7e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e00) {
            ctx->pc = 0x2B7E98u;
            goto label_2b7e98;
        }
    }
    ctx->pc = 0x2B7E08u;
    // 0x2b7e08: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B7E08u;
    {
        const bool branch_taken_0x2b7e08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7e08) {
            ctx->pc = 0x2B7E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7E08u;
            // 0x2b7e0c: 0x8f8493a0  lw          $a0, -0x6C60($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7E54u;
            goto label_2b7e54;
        }
    }
    ctx->pc = 0x2B7E10u;
    // 0x2b7e10: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2b7e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b7e14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7E14u;
    {
        const bool branch_taken_0x2b7e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7e14) {
            ctx->pc = 0x2B7E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7E14u;
            // 0x2b7e18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7E2Cu;
            goto label_2b7e2c;
        }
    }
    ctx->pc = 0x2B7E1Cu;
    // 0x2b7e1c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7E1Cu;
    {
        const bool branch_taken_0x2b7e1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E1Cu;
        // 0x2b7e20: 0x8f8493a0  lw          $a0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e1c) {
            ctx->pc = 0x2B7E3Cu;
            goto label_2b7e3c;
        }
    }
    ctx->pc = 0x2B7E24u;
    // 0x2b7e24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B7E24u;
    {
        const bool branch_taken_0x2b7e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E24u;
        // 0x2b7e28: 0xaf86b4ac  sw          $a2, -0x4B54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948012), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e24) {
            ctx->pc = 0x2B7E98u;
            goto label_2b7e98;
        }
    }
    ctx->pc = 0x2B7E2Cu;
label_2b7e2c:
    // 0x2b7e2c: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B7E2Cu;
    {
        const bool branch_taken_0x2b7e2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E2Cu;
        // 0x2b7e30: 0x8f8493a0  lw          $a0, -0x6C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e2c) {
            ctx->pc = 0x2B7E6Cu;
            goto label_2b7e6c;
        }
    }
    ctx->pc = 0x2B7E34u;
    // 0x2b7e34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7E34u;
    {
        const bool branch_taken_0x2b7e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E34u;
        // 0x2b7e38: 0xaf86b4ac  sw          $a2, -0x4B54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948012), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e34) {
            ctx->pc = 0x2B7E98u;
            goto label_2b7e98;
        }
    }
    ctx->pc = 0x2B7E3Cu;
label_2b7e3c:
    // 0x2b7e3c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7e40: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b7e44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7e48: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2b7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b7e4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B7E4Cu;
    {
        const bool branch_taken_0x2b7e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E4Cu;
        // 0x2b7e50: 0x24630770  addiu       $v1, $v1, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e4c) {
            ctx->pc = 0x2B7E80u;
            goto label_2b7e80;
        }
    }
    ctx->pc = 0x2B7E54u;
label_2b7e54:
    // 0x2b7e54: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7e58: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b7e5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b7e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7e60: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2b7e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b7e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7E64u;
    {
        const bool branch_taken_0x2b7e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E64u;
        // 0x2b7e68: 0x246307a0  addiu       $v1, $v1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e64) {
            ctx->pc = 0x2B7E80u;
            goto label_2b7e80;
        }
    }
    ctx->pc = 0x2B7E6Cu;
label_2b7e6c:
    // 0x2b7e6c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b7e70: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b7e74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b7e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7e78: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2b7e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b7e7c: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x2b7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
label_2b7e80:
    // 0x2b7e80: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x2b7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2b7e84: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2b7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b7e88: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2b7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2b7e8c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2b7e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b7e90: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x2b7e90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
    // 0x2b7e94: 0xaf86b4ac  sw          $a2, -0x4B54($gp)
    ctx->pc = 0x2b7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948012), GPR_U32(ctx, 6));
label_2b7e98:
    // 0x2b7e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E98u;
        // 0x2b7e9c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7EA0u;
}

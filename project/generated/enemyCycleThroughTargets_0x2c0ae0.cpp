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

// Function: enemyCycleThroughTargets
// Address: 0x2c0ae0 - 0x2c0b90
void enemyCycleThroughTargets_0x2c0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyCycleThroughTargets_0x2c0ae0");
#endif

    switch (ctx->pc) {
        case 0x2c0b14u: goto label_2c0b14;
        case 0x2c0b40u: goto label_2c0b40;
        default: break;
    }

    ctx->pc = 0x2c0ae0u;

    // 0x2c0ae0: 0x8c880160  lw          $t0, 0x160($a0)
    ctx->pc = 0x2c0ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c0ae4: 0x8f83b59c  lw          $v1, -0x4A64($gp)
    ctx->pc = 0x2c0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x2c0ae8: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x2c0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x2c0aec: 0x8d040ae4  lw          $a0, 0xAE4($t0)
    ctx->pc = 0x2c0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2788)));
    // 0x2c0af0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C0AF0u;
    {
        const bool branch_taken_0x2c0af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF0u;
        // 0x2c0af4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0af0) {
            ctx->pc = 0x2C0B1Cu;
            goto label_2c0b1c;
        }
    }
    ctx->pc = 0x2C0AF8u;
    // 0x2c0af8: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x2c0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2c0afc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c0b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0b04: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0B04u;
    {
        const bool branch_taken_0x2c0b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B04u;
        // 0x2c0b08: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b04) {
            ctx->pc = 0x2C0B20u;
            goto label_2c0b20;
        }
    }
    ctx->pc = 0x2C0B0Cu;
    // 0x2c0b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0B0Cu;
    {
        const bool branch_taken_0x2c0b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B0Cu;
        // 0x2c0b10: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b0c) {
            ctx->pc = 0x2C0B28u;
            goto label_2c0b28;
        }
    }
    ctx->pc = 0x2C0B14u;
label_2c0b14:
    // 0x2c0b14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B14u;
        // 0x2c0b18: 0x8c820bcc  lw          $v0, 0xBCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0B1Cu;
label_2c0b1c:
    // 0x2c0b1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c0b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c0b20:
    // 0x2c0b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b24: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2c0b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c0b28:
    // 0x2c0b28: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2c0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2c0b2c: 0x8f87b238  lw          $a3, -0x4DC8($gp)
    ctx->pc = 0x2c0b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2c0b30: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2c0b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0b34: 0x8d080018  lw          $t0, 0x18($t0)
    ctx->pc = 0x2c0b34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2c0b38: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x2c0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0b3c: 0x0  nop
    ctx->pc = 0x2c0b3cu;
    // NOP
label_2c0b40:
    // 0x2c0b40: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c0b44: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0B44u;
    {
        const bool branch_taken_0x2c0b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2c0b44) {
            ctx->pc = 0x2C0B5Cu;
            goto label_2c0b5c;
        }
    }
    ctx->pc = 0x2C0B4Cu;
    // 0x2c0b4c: 0x8c820a9c  lw          $v0, 0xA9C($a0)
    ctx->pc = 0x2c0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
    // 0x2c0b50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2c0b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c0b54: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C0B54u;
    {
        const bool branch_taken_0x2c0b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b54) {
            ctx->pc = 0x2C0B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b14;
        }
    }
    ctx->pc = 0x2C0B5Cu;
label_2c0b5c:
    // 0x2c0b5c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0B5Cu;
    {
        const bool branch_taken_0x2c0b5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c0b5c) {
            ctx->pc = 0x2C0B78u;
            goto label_2c0b78;
        }
    }
    ctx->pc = 0x2C0B64u;
    // 0x2c0b64: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0B64u;
    {
        const bool branch_taken_0x2c0b64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c0b64) {
            ctx->pc = 0x2C0B78u;
            goto label_2c0b78;
        }
    }
    ctx->pc = 0x2C0B6Cu;
    // 0x2c0b6c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2c0b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b70: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2C0B70u;
    {
        const bool branch_taken_0x2c0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B70u;
        // 0x2c0b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b70) {
            ctx->pc = 0x2C0B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b40;
        }
    }
    ctx->pc = 0x2C0B78u;
label_2c0b78:
    // 0x2c0b78: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B78u;
    {
        const bool branch_taken_0x2c0b78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B78u;
        // 0x2c0b7c: 0x24841210  addiu       $a0, $a0, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b78) {
            ctx->pc = 0x2C0B88u;
            goto label_2c0b88;
        }
    }
    ctx->pc = 0x2C0B80u;
    // 0x2c0b80: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C0B80u;
    {
        const bool branch_taken_0x2c0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B80u;
        // 0x2c0b84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b80) {
            ctx->pc = 0x2C0B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b40;
        }
    }
    ctx->pc = 0x2C0B88u;
label_2c0b88:
    // 0x2c0b88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B88u;
        // 0x2c0b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0B90u;
}

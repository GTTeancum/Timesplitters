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

// Function: checkCoopTarget
// Address: 0x2cda28 - 0x2cdaf4
void checkCoopTarget_0x2cda28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkCoopTarget_0x2cda28");
#endif

    ctx->pc = 0x2cda28u;

    // 0x2cda28: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2cda2c: 0x8c63c4f0  lw          $v1, -0x3B10($v1)
    ctx->pc = 0x2cda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2cda30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2cda30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cda34: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CDA34u;
    {
        const bool branch_taken_0x2cda34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA34u;
        // 0x2cda38: 0x8c860160  lw          $a2, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda34) {
            ctx->pc = 0x2CDA58u;
            goto label_2cda58;
        }
    }
    ctx->pc = 0x2CDA3Cu;
    // 0x2cda3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cda40: 0x5462002a  bnel        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CDA40u;
    {
        const bool branch_taken_0x2cda40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cda40) {
            ctx->pc = 0x2CDA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA40u;
            // 0x2cda44: 0x8cc50ae4  lw          $a1, 0xAE4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDA48u;
    // 0x2cda48: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x2cda48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x2cda4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cda50: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CDA50u;
    {
        const bool branch_taken_0x2cda50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cda50) {
            ctx->pc = 0x2CDA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA50u;
            // 0x2cda54: 0x8cc50ae4  lw          $a1, 0xAE4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDA58u;
label_2cda58:
    // 0x2cda58: 0x8cc50ae4  lw          $a1, 0xAE4($a2)
    ctx->pc = 0x2cda58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2788)));
    // 0x2cda5c: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CDA5Cu;
    {
        const bool branch_taken_0x2cda5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA5Cu;
        // 0x2cda60: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda5c) {
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDA64u;
    // 0x2cda64: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2cda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cda68: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CDA68u;
    {
        const bool branch_taken_0x2cda68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cda68) {
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDA70u;
    // 0x2cda70: 0x8cc20ad4  lw          $v0, 0xAD4($a2)
    ctx->pc = 0x2cda70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2772)));
    // 0x2cda74: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CDA74u;
    {
        const bool branch_taken_0x2cda74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cda74) {
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDA7Cu;
    // 0x2cda7c: 0x8cc70a90  lw          $a3, 0xA90($a2)
    ctx->pc = 0x2cda7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2704)));
    // 0x2cda80: 0x30e24000  andi        $v0, $a3, 0x4000
    ctx->pc = 0x2cda80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2cda84: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CDA84u;
    {
        const bool branch_taken_0x2cda84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda84) {
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDA8Cu;
    // 0x2cda8c: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x2cda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2cda90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cda94: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDA94u;
    {
        const bool branch_taken_0x2cda94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA94u;
        // 0x2cda98: 0x8f82b238  lw          $v0, -0x4DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda94) {
            ctx->pc = 0x2CDAC4u;
            goto label_2cdac4;
        }
    }
    ctx->pc = 0x2CDA9Cu;
    // 0x2cda9c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2cda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cdaa0: 0x8c431ca4  lw          $v1, 0x1CA4($v0)
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7332)));
    // 0x2cdaa4: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CDAA4u;
    {
        const bool branch_taken_0x2cdaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAA4u;
        // 0x2cdaa8: 0x8f84b230  lw          $a0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdaa4) {
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDAACu;
    // 0x2cdaac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cdaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cdab0: 0x3463bfff  ori         $v1, $v1, 0xBFFF
    ctx->pc = 0x2cdab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49151);
    // 0x2cdab4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2cdab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2cdab8: 0x8c82089c  lw          $v0, 0x89C($a0)
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2204)));
    // 0x2cdabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDABCu;
        // 0x2cdac0: 0xacc30a90  sw          $v1, 0xA90($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDAC4u;
label_2cdac4:
    // 0x2cdac4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2cdac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cdac8: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x2cdacc: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDACCu;
    {
        const bool branch_taken_0x2cdacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDACCu;
        // 0x2cdad0: 0x8f84b230  lw          $a0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdacc) {
            ctx->pc = 0x2CDAECu;
            goto label_2cdaec;
        }
    }
    ctx->pc = 0x2CDAD4u;
    // 0x2cdad4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2cdad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2cdad8: 0x3463bfff  ori         $v1, $v1, 0xBFFF
    ctx->pc = 0x2cdad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49151);
    // 0x2cdadc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2cdadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2cdae0: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x2cdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x2cdae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAE4u;
        // 0x2cdae8: 0xacc30a90  sw          $v1, 0xA90($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDAECu;
label_2cdaec:
    // 0x2cdaec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAECu;
        // 0x2cdaf0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDAF4u;
}

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

// Function: _lo0bits
// Address: 0x2ec260 - 0x2ec320
void _lo0bits_0x2ec260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lo0bits_0x2ec260");
#endif

    ctx->pc = 0x2ec260u;

    // 0x2ec260: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ec260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec264: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2ec264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2ec268: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC268u;
    {
        const bool branch_taken_0x2ec268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC268u;
        // 0x2ec26c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec268) {
            ctx->pc = 0x2EC2A4u;
            goto label_2ec2a4;
        }
    }
    ctx->pc = 0x2EC270u;
    // 0x2ec270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC270u;
    {
        const bool branch_taken_0x2ec270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC270u;
        // 0x2ec274: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec270) {
            ctx->pc = 0x2EC280u;
            goto label_2ec280;
        }
    }
    ctx->pc = 0x2EC278u;
    // 0x2ec278: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC278u;
        // 0x2ec27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC280u;
label_2ec280:
    // 0x2ec280: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC280u;
    {
        const bool branch_taken_0x2ec280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec280) {
            ctx->pc = 0x2EC284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC280u;
            // 0x2ec284: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC298u;
            goto label_2ec298;
        }
    }
    ctx->pc = 0x2EC288u;
    // 0x2ec288: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2ec288u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ec28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec290: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC290u;
        // 0x2ec294: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC298u;
label_2ec298:
    // 0x2ec298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec29c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC29Cu;
        // 0x2ec2a0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC2A4u;
label_2ec2a4:
    // 0x2ec2a4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ec2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ec2a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2A8u;
    {
        const bool branch_taken_0x2ec2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2A8u;
        // 0x2ec2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2a8) {
            ctx->pc = 0x2EC2B8u;
            goto label_2ec2b8;
        }
    }
    ctx->pc = 0x2EC2B0u;
    // 0x2ec2b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ec2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ec2b4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2ec2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_2ec2b8:
    // 0x2ec2b8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ec2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ec2bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC2BCu;
    {
        const bool branch_taken_0x2ec2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2BCu;
        // 0x2ec2c0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2bc) {
            ctx->pc = 0x2EC2D0u;
            goto label_2ec2d0;
        }
    }
    ctx->pc = 0x2EC2C4u;
    // 0x2ec2c4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ec2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ec2c8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ec2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ec2cc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2ec2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2ec2d0:
    // 0x2ec2d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC2D0u;
    {
        const bool branch_taken_0x2ec2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2D0u;
        // 0x2ec2d4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2d0) {
            ctx->pc = 0x2EC2E4u;
            goto label_2ec2e4;
        }
    }
    ctx->pc = 0x2EC2D8u;
    // 0x2ec2d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ec2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ec2dc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2ec2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2ec2e0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2ec2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2ec2e4:
    // 0x2ec2e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC2E4u;
    {
        const bool branch_taken_0x2ec2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2E4u;
        // 0x2ec2e8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2e4) {
            ctx->pc = 0x2EC2F8u;
            goto label_2ec2f8;
        }
    }
    ctx->pc = 0x2EC2ECu;
    // 0x2ec2ec: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2ec2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2ec2f0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2ec2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2ec2f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ec2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ec2f8:
    // 0x2ec2f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC2F8u;
    {
        const bool branch_taken_0x2ec2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec2f8) {
            ctx->pc = 0x2EC2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC2F8u;
            // 0x2ec2fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC318u;
            goto label_2ec318;
        }
    }
    ctx->pc = 0x2EC300u;
    // 0x2ec300: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2ec300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ec304: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC304u;
    {
        const bool branch_taken_0x2ec304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC304u;
        // 0x2ec308: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec304) {
            ctx->pc = 0x2EC314u;
            goto label_2ec314;
        }
    }
    ctx->pc = 0x2EC30Cu;
    // 0x2ec30c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC30Cu;
        // 0x2ec310: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC314u;
label_2ec314:
    // 0x2ec314: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ec314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2ec318:
    // 0x2ec318: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC318u;
        // 0x2ec31c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC320u;
}

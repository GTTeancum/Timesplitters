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

// Function: gunShouldSwitchToOnPickup
// Address: 0x294f68 - 0x295044
void gunShouldSwitchToOnPickup_0x294f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gunShouldSwitchToOnPickup_0x294f68");
#endif

    switch (ctx->pc) {
        case 0x29502cu: goto label_29502c;
        default: break;
    }

    ctx->pc = 0x294f68u;

    // 0x294f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294f6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x294f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294f74: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x294f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f78: 0x8cc20bcc  lw          $v0, 0xBCC($a2)
    ctx->pc = 0x294f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3020)));
    // 0x294f7c: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x294f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x294f80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x294F80u;
    {
        const bool branch_taken_0x294f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F80u;
        // 0x294f84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f80) {
            ctx->pc = 0x294FB8u;
            goto label_294fb8;
        }
    }
    ctx->pc = 0x294F88u;
    // 0x294f88: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x294f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x294f8c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x294f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x294f90: 0x244290f8  addiu       $v0, $v0, -0x6F08
    ctx->pc = 0x294f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x294f94: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x294f98: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x294f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x294f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x294f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294fa0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x294fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x294fa4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x294fa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294fa8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294fac: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x294facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x294fb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x294FB0u;
    {
        const bool branch_taken_0x294fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FB0u;
        // 0x294fb4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fb0) {
            ctx->pc = 0x295038u;
            goto label_295038;
        }
    }
    ctx->pc = 0x294FB8u;
label_294fb8:
    // 0x294fb8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x294fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x294fbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294FBCu;
    {
        const bool branch_taken_0x294fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294fbc) {
            ctx->pc = 0x294FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294FBCu;
            // 0x294fc0: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294FC4u;
            goto label_294fc4;
        }
    }
    ctx->pc = 0x294FC4u;
label_294fc4:
    // 0x294fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294fc8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x294FC8u;
    {
        const bool branch_taken_0x294fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FC8u;
        // 0x294fcc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fc8) {
            ctx->pc = 0x295034u;
            goto label_295034;
        }
    }
    ctx->pc = 0x294FD0u;
    // 0x294fd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294FD0u;
    {
        const bool branch_taken_0x294fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FD0u;
        // 0x294fd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fd0) {
            ctx->pc = 0x294FE8u;
            goto label_294fe8;
        }
    }
    ctx->pc = 0x294FD8u;
    // 0x294fd8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x294FD8u;
    {
        const bool branch_taken_0x294fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FD8u;
        // 0x294fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fd8) {
            ctx->pc = 0x295020u;
            goto label_295020;
        }
    }
    ctx->pc = 0x294FE0u;
    // 0x294fe0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x294FE0u;
    {
        const bool branch_taken_0x294fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FE0u;
        // 0x294fe4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fe0) {
            ctx->pc = 0x29503Cu;
            goto label_29503c;
        }
    }
    ctx->pc = 0x294FE8u;
label_294fe8:
    // 0x294fe8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x294FE8u;
    {
        const bool branch_taken_0x294fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x294FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FE8u;
        // 0x294fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fe8) {
            ctx->pc = 0x295038u;
            goto label_295038;
        }
    }
    ctx->pc = 0x294FF0u;
    // 0x294ff0: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x294ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x294ff4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x294ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x294ff8: 0x244290f8  addiu       $v0, $v0, -0x6F08
    ctx->pc = 0x294ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938872));
    // 0x294ffc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x294ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x295000: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x295000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x295004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295008: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29500c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x29500cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295010: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x295014: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x295014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x295018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x295018u;
    {
        const bool branch_taken_0x295018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295018u;
        // 0x29501c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295018) {
            ctx->pc = 0x295038u;
            goto label_295038;
        }
    }
    ctx->pc = 0x295020u;
label_295020:
    // 0x295020: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x295020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295024: 0xc0a530c  jal         func_294C30
    ctx->pc = 0x295024u;
    SET_GPR_U32(ctx, 31, 0x29502Cu);
    ctx->pc = 0x295028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295024u;
    // 0x295028: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C30u, 0x295024u, 0x29502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29502Cu;
label_29502c:
    // 0x29502c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29502Cu;
    {
        const bool branch_taken_0x29502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29502Cu;
        // 0x295030: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29502c) {
            ctx->pc = 0x29503Cu;
            goto label_29503c;
        }
    }
    ctx->pc = 0x295034u;
label_295034:
    // 0x295034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x295034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295038:
    // 0x295038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29503c:
    // 0x29503c: 0x3e00008  jr          $ra
    ctx->pc = 0x29503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29503Cu;
        // 0x295040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295044u;
}

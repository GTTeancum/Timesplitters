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

// Function: setlastgamemodepage
// Address: 0x23ff50 - 0x240000
void setlastgamemodepage_0x23ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setlastgamemodepage_0x23ff50");
#endif

    ctx->pc = 0x23ff50u;

    // 0x23ff50: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x23ff54: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x23ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x23ff58: 0x8c4511f8  lw          $a1, 0x11F8($v0)
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FC11F8u));
    // 0x23ff5c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x23ff5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x23ff60: 0x244211f8  addiu       $v0, $v0, 0x11F8
    ctx->pc = 0x23ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x23ff64: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ff68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC11FCu));
    // 0x23ff6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23ff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23ff70: 0x10a60013  beq         $a1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x23FF70u;
    {
        const bool branch_taken_0x23ff70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x23FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF70u;
        // 0x23ff74: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff70) {
            ctx->pc = 0x23FFC0u;
            goto label_23ffc0;
        }
    }
    ctx->pc = 0x23FF78u;
    // 0x23ff78: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23ff78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23ff7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FF7Cu;
    {
        const bool branch_taken_0x23ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF7Cu;
        // 0x23ff80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff7c) {
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FF84u;
    // 0x23ff84: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FF84u;
    {
        const bool branch_taken_0x23ff84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF84u;
        // 0x23ff88: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff84) {
            ctx->pc = 0x23FFB0u;
            goto label_23ffb0;
        }
    }
    ctx->pc = 0x23FF8Cu;
    // 0x23ff8c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FF94u;
label_23ff94:
    // 0x23ff94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23ff98: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23FF98u;
    {
        const bool branch_taken_0x23ff98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF98u;
        // 0x23ff9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff98) {
            ctx->pc = 0x23FFD8u;
            goto label_23ffd8;
        }
    }
    ctx->pc = 0x23FFA0u;
    // 0x23ffa0: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23FFA0u;
    {
        const bool branch_taken_0x23ffa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFA0u;
        // 0x23ffa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffa0) {
            ctx->pc = 0x23FFECu;
            goto label_23ffec;
        }
    }
    ctx->pc = 0x23FFA8u;
    // 0x23ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x23FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FFB0u;
label_23ffb0:
    // 0x23ffb0: 0xaf86b73c  sw          $a2, -0x48C4($gp)
    ctx->pc = 0x23ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 6));
    // 0x23ffb4: 0x24a54e08  addiu       $a1, $a1, 0x4E08
    ctx->pc = 0x23ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19976));
    // 0x23ffb8: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x23FFB8u;
    ctx->pc = 0x23FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFB8u;
    // 0x23ffbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x23FFC0u;
label_23ffc0:
    // 0x23ffc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23ffc4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23ffc8: 0xaf82b73c  sw          $v0, -0x48C4($gp)
    ctx->pc = 0x23ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 2));
    // 0x23ffcc: 0x24a545b8  addiu       $a1, $a1, 0x45B8
    ctx->pc = 0x23ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17848));
    // 0x23ffd0: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x23FFD0u;
    ctx->pc = 0x23FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFD0u;
    // 0x23ffd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x23FFD8u;
label_23ffd8:
    // 0x23ffd8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23ffdc: 0xaf86b73c  sw          $a2, -0x48C4($gp)
    ctx->pc = 0x23ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 6));
    // 0x23ffe0: 0x24a54eb8  addiu       $a1, $a1, 0x4EB8
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20152));
    // 0x23ffe4: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x23FFE4u;
    ctx->pc = 0x23FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFE4u;
    // 0x23ffe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x23FFECu;
label_23ffec:
    // 0x23ffec: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23fff0: 0xaf82b73c  sw          $v0, -0x48C4($gp)
    ctx->pc = 0x23fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 2));
    // 0x23fff4: 0x24a550f0  addiu       $a1, $a1, 0x50F0
    ctx->pc = 0x23fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20720));
    // 0x23fff8: 0x808b3ac  j           func_22CEB0
    ctx->pc = 0x23FFF8u;
    ctx->pc = 0x23FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFF8u;
    // 0x23fffc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    frontPageSet_0x22ceb0(rdram, ctx, runtime); return;
    ctx->pc = 0x240000u;
}

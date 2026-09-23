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

// Function: frontredTick
// Address: 0x22ff48 - 0x22ffd4
void frontredTick_0x22ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontredTick_0x22ff48");
#endif

    switch (ctx->pc) {
        case 0x22ff58u: goto label_22ff58;
        case 0x22ff84u: goto label_22ff84;
        case 0x22ffa4u: goto label_22ffa4;
        default: break;
    }

    ctx->pc = 0x22ff48u;

    // 0x22ff48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ff4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ff50: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22FF50u;
    SET_GPR_U32(ctx, 31, 0x22FF58u);
    ctx->pc = 0x22FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF50u;
    // 0x22ff54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22FF50u, 0x22FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF58u;
label_22ff58:
    // 0x22ff58: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x22ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x22ff5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FF5Cu;
    {
        const bool branch_taken_0x22ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF5Cu;
        // 0x22ff60: 0x8f82b72c  lw          $v0, -0x48D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff5c) {
            ctx->pc = 0x22FF7Cu;
            goto label_22ff7c;
        }
    }
    ctx->pc = 0x22FF64u;
    // 0x22ff64: 0x8f83a03c  lw          $v1, -0x5FC4($gp)
    ctx->pc = 0x22ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942780)));
    // 0x22ff68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22ff6c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22ff6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22ff70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FF70u;
    {
        const bool branch_taken_0x22ff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF70u;
        // 0x22ff74: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff70) {
            ctx->pc = 0x22FF7Cu;
            goto label_22ff7c;
        }
    }
    ctx->pc = 0x22FF78u;
    // 0x22ff78: 0xaf82a03c  sw          $v0, -0x5FC4($gp)
    ctx->pc = 0x22ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942780), GPR_U32(ctx, 2));
label_22ff7c:
    // 0x22ff7c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22FF7Cu;
    SET_GPR_U32(ctx, 31, 0x22FF84u);
    ctx->pc = 0x22FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF7Cu;
    // 0x22ff80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22FF7Cu, 0x22FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF84u;
label_22ff84:
    // 0x22ff84: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x22ff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x22ff88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FF88u;
    {
        const bool branch_taken_0x22ff88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF88u;
        // 0x22ff8c: 0x8f82a03c  lw          $v0, -0x5FC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff88) {
            ctx->pc = 0x22FF9Cu;
            goto label_22ff9c;
        }
    }
    ctx->pc = 0x22FF90u;
    // 0x22ff90: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FF90u;
    {
        const bool branch_taken_0x22ff90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF90u;
        // 0x22ff94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff90) {
            ctx->pc = 0x22FF9Cu;
            goto label_22ff9c;
        }
    }
    ctx->pc = 0x22FF98u;
    // 0x22ff98: 0xaf82a03c  sw          $v0, -0x5FC4($gp)
    ctx->pc = 0x22ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942780), GPR_U32(ctx, 2));
label_22ff9c:
    // 0x22ff9c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x22FF9Cu;
    SET_GPR_U32(ctx, 31, 0x22FFA4u);
    ctx->pc = 0x22FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF9Cu;
    // 0x22ffa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x22FF9Cu, 0x22FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFA4u;
label_22ffa4:
    // 0x22ffa4: 0x30420840  andi        $v0, $v0, 0x840
    ctx->pc = 0x22ffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2112);
    // 0x22ffa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22FFA8u;
    {
        const bool branch_taken_0x22ffa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFA8u;
        // 0x22ffac: 0x8f82a03c  lw          $v0, -0x5FC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffa8) {
            ctx->pc = 0x22FFC8u;
            goto label_22ffc8;
        }
    }
    ctx->pc = 0x22FFB0u;
    // 0x22ffb0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22ffb4: 0x24632fb0  addiu       $v1, $v1, 0x2FB0
    ctx->pc = 0x22ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12208));
    // 0x22ffb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x22ffbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ffc0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22ffc4: 0xaf8493a4  sw          $a0, -0x6C5C($gp)
    ctx->pc = 0x22ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), GPR_U32(ctx, 4));
label_22ffc8:
    // 0x22ffc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ffcc: 0x3e00008  jr          $ra
    ctx->pc = 0x22FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFCCu;
        // 0x22ffd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FFD4u;
}

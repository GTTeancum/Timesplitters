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

// Function: confirmendgame_pageTick
// Address: 0x20fa70 - 0x20fb78
void confirmendgame_pageTick_0x20fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("confirmendgame_pageTick_0x20fa70");
#endif

    switch (ctx->pc) {
        case 0x20fa90u: goto label_20fa90;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faf0u: goto label_20faf0;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb58u: goto label_20fb58;
        default: break;
    }

    ctx->pc = 0x20fa70u;

    // 0x20fa70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20fa74: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20fa78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20fa7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fa80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20fa80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20fa88: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20FA88u;
    SET_GPR_U32(ctx, 31, 0x20FA90u);
    ctx->pc = 0x20FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA88u;
    // 0x20fa8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20FA88u, 0x20FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA90u;
label_20fa90:
    // 0x20fa90: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20fa94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x20FA94u;
    {
        const bool branch_taken_0x20fa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA94u;
        // 0x20fa98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa94) {
            ctx->pc = 0x20FB38u;
            goto label_20fb38;
        }
    }
    ctx->pc = 0x20FA9Cu;
    // 0x20fa9c: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x20fa9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20faa0: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FAA0u;
    {
        const bool branch_taken_0x20faa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA0u;
        // 0x20faa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faa0) {
            ctx->pc = 0x20FAC4u;
            goto label_20fac4;
        }
    }
    ctx->pc = 0x20FAA8u;
    // 0x20faa8: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20faac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20faacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fab0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fab4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20fab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fabc: 0x8084aba  j           func_212AE8
    ctx->pc = 0x20FABCu;
    ctx->pc = 0x20FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FABCu;
    // 0x20fac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    ingamemenuExit_0x212ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x20FAC4u;
label_20fac4:
    // 0x20fac4: 0x14820028  bne         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x20FAC4u;
    {
        const bool branch_taken_0x20fac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAC4u;
        // 0x20fac8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fac4) {
            ctx->pc = 0x20FB68u;
            goto label_20fb68;
        }
    }
    ctx->pc = 0x20FACCu;
    // 0x20facc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fad0: 0x8f839f74  lw          $v1, -0x608C($gp)
    ctx->pc = 0x20fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x20fad4: 0xaf82b688  sw          $v0, -0x4978($gp)
    ctx->pc = 0x20fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948488), GPR_U32(ctx, 2));
    // 0x20fad8: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20FAD8u;
    {
        const bool branch_taken_0x20fad8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x20FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD8u;
        // 0x20fadc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fad8) {
            ctx->pc = 0x20FB0Cu;
            goto label_20fb0c;
        }
    }
    ctx->pc = 0x20FAE0u;
    // 0x20fae0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x20fae4: 0x0  nop
    ctx->pc = 0x20fae4u;
    // NOP
label_20fae8:
    // 0x20fae8: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x20FAE8u;
    SET_GPR_U32(ctx, 31, 0x20FAF0u);
    ctx->pc = 0x20FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FAE8u;
    // 0x20faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x20FAE8u, 0x20FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FAF0u;
label_20faf0:
    // 0x20faf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20faf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20faf4: 0x8f829f74  lw          $v0, -0x608C($gp)
    ctx->pc = 0x20faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x20faf8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20faf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20fafc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20FAFCu;
    {
        const bool branch_taken_0x20fafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAFCu;
        // 0x20fb00: 0x2624c4a8  addiu       $a0, $s1, -0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fafc) {
            ctx->pc = 0x20FAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fae8;
        }
    }
    ctx->pc = 0x20FB04u;
    // 0x20fb04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20FB04u;
    {
        const bool branch_taken_0x20fb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB04u;
        // 0x20fb08: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb04) {
            ctx->pc = 0x20FB18u;
            goto label_20fb18;
        }
    }
    ctx->pc = 0x20FB0Cu;
label_20fb0c:
    // 0x20fb0c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x20fb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x20fb10: 0x2624c4a8  addiu       $a0, $s1, -0x3B58
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952104));
    // 0x20fb14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_20fb18:
    // 0x20fb18: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x20fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x20fb1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fb20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20fb24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20fb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fb28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fb28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fb2c: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x20fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x20fb30: 0x80874d2  j           func_21D348
    ctx->pc = 0x20FB30u;
    ctx->pc = 0x20FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB30u;
    // 0x20fb34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D348u;
    gameLevelCompleted_0x21d348(rdram, ctx, runtime); return;
    ctx->pc = 0x20FB38u;
label_20fb38:
    // 0x20fb38: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x20fb38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x20fb3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fb40: 0x2610a990  addiu       $s0, $s0, -0x5670
    ctx->pc = 0x20fb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945168));
    // 0x20fb44: 0xc083890  jal         func_20E240
    ctx->pc = 0x20FB44u;
    SET_GPR_U32(ctx, 31, 0x20FB4Cu);
    ctx->pc = 0x20FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB44u;
    // 0x20fb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E240u, 0x20FB44u, 0x20FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB4Cu;
label_20fb4c:
    // 0x20fb4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20fb50: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x20FB50u;
    SET_GPR_U32(ctx, 31, 0x20FB58u);
    ctx->pc = 0x20FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB50u;
    // 0x20fb54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x20FB50u, 0x20FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB58u;
label_20fb58:
    // 0x20fb58: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20fb5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fb60: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x20fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x20fb64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20fb68:
    // 0x20fb68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20fb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fb6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fb70: 0x3e00008  jr          $ra
    ctx->pc = 0x20FB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB70u;
        // 0x20fb74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FB78u;
}

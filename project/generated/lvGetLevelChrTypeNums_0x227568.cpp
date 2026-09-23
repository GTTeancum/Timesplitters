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

// Function: lvGetLevelChrTypeNums
// Address: 0x227568 - 0x227644
void lvGetLevelChrTypeNums_0x227568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetLevelChrTypeNums_0x227568");
#endif

    ctx->pc = 0x227568u;

    // 0x227568: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22756c: 0x2463c4a8  addiu       $v1, $v1, -0x3B58
    ctx->pc = 0x22756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952104));
    // 0x227570: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x227570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x227574: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x227574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x227578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227578u;
    {
        const bool branch_taken_0x227578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227578u;
        // 0x22757c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227578) {
            ctx->pc = 0x227598u;
            goto label_227598;
        }
    }
    ctx->pc = 0x227580u;
    // 0x227580: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x227580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x227584: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227584u;
    {
        const bool branch_taken_0x227584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227584u;
        // 0x227588: 0x2483fffe  addiu       $v1, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227584) {
            ctx->pc = 0x22759Cu;
            goto label_22759c;
        }
    }
    ctx->pc = 0x22758Cu;
    // 0x22758c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227590: 0x3e00008  jr          $ra
    ctx->pc = 0x227590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227590u;
        // 0x227594: 0x244240c8  addiu       $v0, $v0, 0x40C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227598u;
label_227598:
    // 0x227598: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_22759c:
    // 0x22759c: 0x2c620068  sltiu       $v0, $v1, 0x68
    ctx->pc = 0x22759cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)104) ? 1 : 0);
    // 0x2275a0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2275A0u;
    {
        const bool branch_taken_0x2275a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A0u;
        // 0x2275a4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275a0) {
            ctx->pc = 0x227638u;
            goto label_227638;
        }
    }
    ctx->pc = 0x2275A8u;
    // 0x2275a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2275a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2275ac: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x2275acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x2275b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2275b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2275b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2275b8: 0x800008  jr          $a0
    ctx->pc = 0x2275B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2275C0u: goto label_2275c0;
            case 0x2275CCu: goto label_2275cc;
            case 0x2275D8u: goto label_2275d8;
            case 0x2275E4u: goto label_2275e4;
            case 0x2275F0u: goto label_2275f0;
            case 0x2275FCu: goto label_2275fc;
            case 0x227608u: goto label_227608;
            case 0x227614u: goto label_227614;
            case 0x227620u: goto label_227620;
            case 0x22762Cu: goto label_22762c;
            case 0x227638u: goto label_227638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2275C0u;
label_2275c0:
    // 0x2275c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2275c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2275C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275C4u;
        // 0x2275c8: 0x24423dc4  addiu       $v0, $v0, 0x3DC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15812));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275CCu;
label_2275cc:
    // 0x2275cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2275ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2275d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2275D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275D0u;
        // 0x2275d4: 0x24423e48  addiu       $v0, $v0, 0x3E48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275D8u;
label_2275d8:
    // 0x2275d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2275d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2275dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2275DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275DCu;
        // 0x2275e0: 0x24423df0  addiu       $v0, $v0, 0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275E4u;
label_2275e4:
    // 0x2275e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2275e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2275e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2275E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275E8u;
        // 0x2275ec: 0x24423ecc  addiu       $v0, $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16076));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275F0u;
label_2275f0:
    // 0x2275f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2275f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2275f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2275F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275F4u;
        // 0x2275f8: 0x24424098  addiu       $v0, $v0, 0x4098 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275FCu;
label_2275fc:
    // 0x2275fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227600: 0x3e00008  jr          $ra
    ctx->pc = 0x227600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227600u;
        // 0x227604: 0x24423ef8  addiu       $v0, $v0, 0x3EF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227608u;
label_227608:
    // 0x227608: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22760c: 0x3e00008  jr          $ra
    ctx->pc = 0x22760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22760Cu;
        // 0x227610: 0x24423ea0  addiu       $v0, $v0, 0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22760Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227614u;
label_227614:
    // 0x227614: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227618: 0x3e00008  jr          $ra
    ctx->pc = 0x227618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227618u;
        // 0x22761c: 0x24423d98  addiu       $v0, $v0, 0x3D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227620u;
label_227620:
    // 0x227620: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227624: 0x3e00008  jr          $ra
    ctx->pc = 0x227624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227624u;
        // 0x227628: 0x24423e1c  addiu       $v0, $v0, 0x3E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15900));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22762Cu;
label_22762c:
    // 0x22762c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227630: 0x3e00008  jr          $ra
    ctx->pc = 0x227630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227630u;
        // 0x227634: 0x24423e74  addiu       $v0, $v0, 0x3E74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227638u;
label_227638:
    // 0x227638: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22763c: 0x3e00008  jr          $ra
    ctx->pc = 0x22763Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22763Cu;
        // 0x227640: 0x24424098  addiu       $v0, $v0, 0x4098 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22763Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227644u;
}

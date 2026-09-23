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

// Function: mmfileGetInfo
// Address: 0x253710 - 0x2537ac
void mmfileGetInfo_0x253710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmfileGetInfo_0x253710");
#endif

    switch (ctx->pc) {
        case 0x25373cu: goto label_25373c;
        case 0x253778u: goto label_253778;
        default: break;
    }

    ctx->pc = 0x253710u;

    // 0x253710: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x253710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x253714: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x253714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253718: 0x34424626  ori         $v0, $v0, 0x4626
    ctx->pc = 0x253718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17958);
    // 0x25371c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25371Cu;
    {
        const bool branch_taken_0x25371c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x253720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25371Cu;
        // 0x253720: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25371c) {
            ctx->pc = 0x253734u;
            goto label_253734;
        }
    }
    ctx->pc = 0x253724u;
    // 0x253724: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x253724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x253728: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x253728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x25372c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25372Cu;
    {
        const bool branch_taken_0x25372c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x253730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25372Cu;
        // 0x253730: 0x24a81ffc  addiu       $t0, $a1, 0x1FFC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25372c) {
            ctx->pc = 0x253744u;
            goto label_253744;
        }
    }
    ctx->pc = 0x253734u;
label_253734:
    // 0x253734: 0x3e00008  jr          $ra
    ctx->pc = 0x253734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253734u;
        // 0x253738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25373Cu;
label_25373c:
    // 0x25373c: 0x3e00008  jr          $ra
    ctx->pc = 0x25373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25373Cu;
        // 0x253740: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253744u;
label_253744:
    // 0x253744: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x253744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253748: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x253748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x25374c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25374Cu;
    {
        const bool branch_taken_0x25374c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25374Cu;
        // 0x253750: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25374c) {
            ctx->pc = 0x2537A4u;
            goto label_2537a4;
        }
    }
    ctx->pc = 0x253754u;
    // 0x253754: 0x3c020132  lui         $v0, 0x132
    ctx->pc = 0x253754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)306 << 16));
    // 0x253758: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x253758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25375c: 0x34424629  ori         $v0, $v0, 0x4629
    ctx->pc = 0x25375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17961);
    // 0x253760: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x253760u;
    {
        const bool branch_taken_0x253760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x253764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253760u;
        // 0x253764: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253760) {
            ctx->pc = 0x2537A4u;
            goto label_2537a4;
        }
    }
    ctx->pc = 0x253768u;
    // 0x253768: 0x3c070132  lui         $a3, 0x132
    ctx->pc = 0x253768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)306 << 16));
    // 0x25376c: 0x3c060132  lui         $a2, 0x132
    ctx->pc = 0x25376cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)306 << 16));
    // 0x253770: 0x34e74627  ori         $a3, $a3, 0x4627
    ctx->pc = 0x253770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17959);
    // 0x253774: 0x34c64629  ori         $a2, $a2, 0x4629
    ctx->pc = 0x253774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17961);
label_253778:
    // 0x253778: 0x10a7fff0  beq         $a1, $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x253778u;
    {
        const bool branch_taken_0x253778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x253778) {
            ctx->pc = 0x25373Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25373c;
        }
    }
    ctx->pc = 0x253780u;
    // 0x253780: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x253780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x253784: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x253784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x253788: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x253788u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x25378c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25378Cu;
    {
        const bool branch_taken_0x25378c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25378Cu;
        // 0x253790: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25378c) {
            ctx->pc = 0x2537A4u;
            goto label_2537a4;
        }
    }
    ctx->pc = 0x253794u;
    // 0x253794: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x253794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253798: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x25379c: 0x1446fff6  bne         $v0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x25379Cu;
    {
        const bool branch_taken_0x25379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2537A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25379Cu;
        // 0x2537a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25379c) {
            ctx->pc = 0x253778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253778;
        }
    }
    ctx->pc = 0x2537A4u;
label_2537a4:
    // 0x2537a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2537A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2537A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537A4u;
        // 0x2537a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2537ACu;
}

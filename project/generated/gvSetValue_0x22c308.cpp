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

// Function: gvSetValue
// Address: 0x22c308 - 0x22c378
void gvSetValue_0x22c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gvSetValue_0x22c308");
#endif

    switch (ctx->pc) {
        case 0x22c308u: goto label_22c308;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c310u: goto label_22c310;
        case 0x22c314u: goto label_22c314;
        case 0x22c318u: goto label_22c318;
        case 0x22c31cu: goto label_22c31c;
        case 0x22c320u: goto label_22c320;
        case 0x22c324u: goto label_22c324;
        case 0x22c328u: goto label_22c328;
        case 0x22c32cu: goto label_22c32c;
        case 0x22c330u: goto label_22c330;
        case 0x22c334u: goto label_22c334;
        case 0x22c338u: goto label_22c338;
        case 0x22c33cu: goto label_22c33c;
        case 0x22c340u: goto label_22c340;
        case 0x22c344u: goto label_22c344;
        case 0x22c348u: goto label_22c348;
        case 0x22c34cu: goto label_22c34c;
        case 0x22c350u: goto label_22c350;
        case 0x22c354u: goto label_22c354;
        case 0x22c358u: goto label_22c358;
        case 0x22c35cu: goto label_22c35c;
        case 0x22c360u: goto label_22c360;
        case 0x22c364u: goto label_22c364;
        case 0x22c368u: goto label_22c368;
        case 0x22c36cu: goto label_22c36c;
        case 0x22c370u: goto label_22c370;
        case 0x22c374u: goto label_22c374;
        default: break;
    }

    ctx->pc = 0x22c308u;

label_22c308:
    // 0x22c308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22c30c:
    // 0x22c30c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x22c30cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22c310:
    // 0x22c310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22c314:
    // 0x22c314: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22c318:
    // 0x22c318: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x22c318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22c31c:
    // 0x22c31c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_22c320:
    if (ctx->pc == 0x22C320u) {
        ctx->pc = 0x22C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C31Cu;
        // 0x22c320: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C324u;
        goto label_22c324;
    }
    ctx->pc = 0x22C31Cu;
    {
        const bool branch_taken_0x22c31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c31c) {
            ctx->pc = 0x22C320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C31Cu;
            // 0x22c320: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C33Cu;
            goto label_22c33c;
        }
    }
    ctx->pc = 0x22C324u;
label_22c324:
    // 0x22c324: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22c328:
    // 0x22c328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22c32c:
    // 0x22c32c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22c330:
    if (ctx->pc == 0x22C330u) {
        ctx->pc = 0x22C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C32Cu;
        // 0x22c330: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C334u;
        goto label_22c334;
    }
    ctx->pc = 0x22C32Cu;
    {
        const bool branch_taken_0x22c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C32Cu;
        // 0x22c330: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c32c) {
            ctx->pc = 0x22C358u;
            goto label_22c358;
        }
    }
    ctx->pc = 0x22C334u;
label_22c334:
    // 0x22c334: 0x10000008  b           . + 4 + (0x8 << 2)
label_22c338:
    if (ctx->pc == 0x22C338u) {
        ctx->pc = 0x22C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C334u;
        // 0x22c338: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C33Cu;
        goto label_22c33c;
    }
    ctx->pc = 0x22C334u;
    {
        const bool branch_taken_0x22c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C334u;
        // 0x22c338: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c334) {
            ctx->pc = 0x22C358u;
            goto label_22c358;
        }
    }
    ctx->pc = 0x22C33Cu;
label_22c33c:
    // 0x22c33c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x22c33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_22c340:
    // 0x22c340: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_22c344:
    if (ctx->pc == 0x22C344u) {
        ctx->pc = 0x22C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C340u;
        // 0x22c344: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C348u;
        goto label_22c348;
    }
    ctx->pc = 0x22C340u;
    {
        const bool branch_taken_0x22c340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c340) {
            ctx->pc = 0x22C344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C340u;
            // 0x22c344: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C35Cu;
            goto label_22c35c;
        }
    }
    ctx->pc = 0x22C348u;
label_22c348:
    // 0x22c348: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22c34c:
    // 0x22c34c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c350:
    // 0x22c350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22c354:
    // 0x22c354: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x22c354u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_22c358:
    // 0x22c358: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x22c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_22c35c:
    // 0x22c35c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c360:
    if (ctx->pc == 0x22C360u) {
        ctx->pc = 0x22C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C35Cu;
        // 0x22c360: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C364u;
        goto label_22c364;
    }
    ctx->pc = 0x22C35Cu;
    {
        const bool branch_taken_0x22c35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C35Cu;
        // 0x22c360: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c35c) {
            ctx->pc = 0x22C36Cu;
            goto label_22c36c;
        }
    }
    ctx->pc = 0x22C364u;
label_22c364:
    // 0x22c364: 0x40f809  jalr        $v0
label_22c368:
    if (ctx->pc == 0x22C368u) {
        ctx->pc = 0x22C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C364u;
        // 0x22c368: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C36Cu;
        goto label_22c36c;
    }
    ctx->pc = 0x22C364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C36Cu);
        ctx->pc = 0x22C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C364u;
        // 0x22c368: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C364u, 0x22C36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C36Cu;
label_22c36c:
    // 0x22c36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c370:
    // 0x22c370: 0x3e00008  jr          $ra
label_22c374:
    if (ctx->pc == 0x22C374u) {
        ctx->pc = 0x22C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C370u;
        // 0x22c374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C378u;
        goto label_fallthrough_0x22c370;
    }
    ctx->pc = 0x22C370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C370u;
        // 0x22c374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c370:
    ctx->pc = 0x22C378u;
}

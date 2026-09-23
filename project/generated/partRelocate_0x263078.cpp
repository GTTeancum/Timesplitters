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

// Function: partRelocate
// Address: 0x263078 - 0x26310c
void partRelocate_0x263078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("partRelocate_0x263078");
#endif

    switch (ctx->pc) {
        case 0x263090u: goto label_263090;
        case 0x2630bcu: goto label_2630bc;
        case 0x2630ccu: goto label_2630cc;
        case 0x2630ecu: goto label_2630ec;
        default: break;
    }

    ctx->pc = 0x263078u;

label_263078:
    // 0x263078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26307c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x26307cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263080: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x263080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x263084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x263084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x263088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26308c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_263090:
    // 0x263090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x263090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x263094: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x263094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x263098: 0xe53818  mult        $a3, $a3, $a1
    ctx->pc = 0x263098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x26309c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2630a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2630a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630a8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2630a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2630ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2630acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2630b0: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x2630b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2630b4: 0xc098c44  jal         func_263110
    ctx->pc = 0x2630B4u;
    SET_GPR_U32(ctx, 31, 0x2630BCu);
    ctx->pc = 0x2630B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630B4u;
    // 0x2630b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263110u, 0x2630B4u, 0x2630BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630BCu;
label_2630bc:
    // 0x2630bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2630bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2630c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630c4: 0xc098c44  jal         func_263110
    ctx->pc = 0x2630C4u;
    SET_GPR_U32(ctx, 31, 0x2630CCu);
    ctx->pc = 0x2630C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630C4u;
    // 0x2630c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263110u, 0x2630C4u, 0x2630CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2630CCu;
label_2630cc:
    // 0x2630cc: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x2630ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2630d0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2630D0u;
    {
        const bool branch_taken_0x2630d0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2630D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630D0u;
        // 0x2630d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630d0) {
            ctx->pc = 0x2630ECu;
            goto label_2630ec;
        }
    }
    ctx->pc = 0x2630D8u;
    // 0x2630d8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2630d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2630dc: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2630DCu;
    {
        const bool branch_taken_0x2630dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2630dc) {
            ctx->pc = 0x2630E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2630DCu;
            // 0x2630e0: 0x82050004  lb          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2630F0u;
            goto label_2630f0;
        }
    }
    ctx->pc = 0x2630E4u;
    // 0x2630e4: 0xc098c1e  jal         func_263078
    ctx->pc = 0x2630E4u;
    SET_GPR_U32(ctx, 31, 0x2630ECu);
    ctx->pc = 0x2630E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2630E4u;
    // 0x2630e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263078u;
    goto label_263078;
    ctx->pc = 0x2630ECu;
label_2630ec:
    // 0x2630ec: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2630ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2630f0:
    // 0x2630f0: 0x4a1ffe7  bgez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2630F0u;
    {
        const bool branch_taken_0x2630f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2630F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630F0u;
        // 0x2630f4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630f0) {
            ctx->pc = 0x263090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263090;
        }
    }
    ctx->pc = 0x2630F8u;
    // 0x2630f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2630f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2630fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2630fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x263100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263104: 0x3e00008  jr          $ra
    ctx->pc = 0x263104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263104u;
        // 0x263108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26310Cu;
}

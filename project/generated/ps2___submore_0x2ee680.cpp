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

// Function: __submore
// Address: 0x2ee680 - 0x2ee770
void ps2___submore_0x2ee680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___submore_0x2ee680");
#endif

    switch (ctx->pc) {
        case 0x2ee6bcu: goto label_2ee6bc;
        case 0x2ee6e0u: goto label_2ee6e0;
        case 0x2ee71cu: goto label_2ee71c;
        case 0x2ee740u: goto label_2ee740;
        default: break;
    }

    ctx->pc = 0x2ee680u;

    // 0x2ee680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ee680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ee684: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ee684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ee688: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ee688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ee68c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ee68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee690: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ee690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ee694: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x2ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2ee698: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ee698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ee69c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ee69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ee6a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee6a4: 0x8e700030  lw          $s0, 0x30($s3)
    ctx->pc = 0x2ee6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2ee6a8: 0x56020017  bnel        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE6A8u;
    {
        const bool branch_taken_0x2ee6a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee6a8) {
            ctx->pc = 0x2EE6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE6A8u;
            // 0x2ee6ac: 0x8e720034  lw          $s2, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE708u;
            goto label_2ee708;
        }
    }
    ctx->pc = 0x2EE6B0u;
    // 0x2ee6b0: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2ee6b4: 0xc0b9338  jal         func_2E4CE0
    ctx->pc = 0x2EE6B4u;
    SET_GPR_U32(ctx, 31, 0x2EE6BCu);
    ctx->pc = 0x2EE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6B4u;
    // 0x2ee6b8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4CE0u, 0x2EE6B4u, 0x2EE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6BCu;
label_2ee6bc:
    // 0x2ee6bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ee6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6c0: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EE6C0u;
    {
        const bool branch_taken_0x2ee6c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6C0u;
        // 0x2ee6c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6c0) {
            ctx->pc = 0x2EE750u;
            goto label_2ee750;
        }
    }
    ctx->pc = 0x2EE6C8u;
    // 0x2ee6c8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2ee6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ee6cc: 0xae710030  sw          $s1, 0x30($s3)
    ctx->pc = 0x2ee6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 17));
    // 0x2ee6d0: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x2ee6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    // 0x2ee6d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6d8: 0x263103fd  addiu       $s1, $s1, 0x3FD
    ctx->pc = 0x2ee6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1021));
    // 0x2ee6dc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2ee6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ee6e0:
    // 0x2ee6e0: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2ee6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2ee6e4: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x2ee6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2ee6e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2ee6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee6ec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2ee6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2ee6f0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ee6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee6f4: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE6F4u;
    {
        const bool branch_taken_0x2ee6f4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2ee6f4) {
            ctx->pc = 0x2EE6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee6e0;
        }
    }
    ctx->pc = 0x2EE6FCu;
    // 0x2ee6fc: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2ee6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2ee700: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE700u;
    {
        const bool branch_taken_0x2ee700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE700u;
        // 0x2ee704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee700) {
            ctx->pc = 0x2EE750u;
            goto label_2ee750;
        }
    }
    ctx->pc = 0x2EE708u;
label_2ee708:
    // 0x2ee708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee70c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2ee70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2ee710: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x2ee710u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2ee714: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EE714u;
    SET_GPR_U32(ctx, 31, 0x2EE71Cu);
    ctx->pc = 0x2EE718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE714u;
    // 0x2ee718: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EE714u, 0x2EE71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE71Cu;
label_2ee71c:
    // 0x2ee71c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ee71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee720: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE720u;
    {
        const bool branch_taken_0x2ee720 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE720u;
        // 0x2ee724: 0x2328021  addu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee720) {
            ctx->pc = 0x2EE730u;
            goto label_2ee730;
        }
    }
    ctx->pc = 0x2EE728u;
    // 0x2ee728: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE728u;
    {
        const bool branch_taken_0x2ee728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE728u;
        // 0x2ee72c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee728) {
            ctx->pc = 0x2EE750u;
            goto label_2ee750;
        }
    }
    ctx->pc = 0x2EE730u;
label_2ee730:
    // 0x2ee730: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ee730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee738: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2EE738u;
    SET_GPR_U32(ctx, 31, 0x2EE740u);
    ctx->pc = 0x2EE73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE738u;
    // 0x2ee73c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2EE738u, 0x2EE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE740u;
label_2ee740:
    // 0x2ee740: 0xae740034  sw          $s4, 0x34($s3)
    ctx->pc = 0x2ee740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 20));
    // 0x2ee744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee748: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2ee748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2ee74c: 0xae710030  sw          $s1, 0x30($s3)
    ctx->pc = 0x2ee74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 17));
label_2ee750:
    // 0x2ee750: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ee750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee754: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ee754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee758: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ee758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee75c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ee75cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ee760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee768: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE768u;
        // 0x2ee76c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE770u;
}

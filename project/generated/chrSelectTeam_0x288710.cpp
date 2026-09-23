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

// Function: chrSelectTeam
// Address: 0x288710 - 0x2887e4
void chrSelectTeam_0x288710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chrSelectTeam_0x288710");
#endif

    switch (ctx->pc) {
        case 0x288724u: goto label_288724;
        case 0x28872cu: goto label_28872c;
        default: break;
    }

    ctx->pc = 0x288710u;

    // 0x288710: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x288710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288714: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x288714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x288718: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x288718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x28871c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28871Cu;
    {
        const bool branch_taken_0x28871c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28871Cu;
        // 0x288720: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28871c) {
            ctx->pc = 0x28873Cu;
            goto label_28873c;
        }
    }
    ctx->pc = 0x288724u;
label_288724:
    // 0x288724: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x288724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288728: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x288728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_28872c:
    // 0x28872c: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x28872cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x288730: 0x8c83c3a4  lw          $v1, -0x3C5C($a0)
    ctx->pc = 0x288730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951844)));
    // 0x288734: 0x3e00008  jr          $ra
    ctx->pc = 0x288734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288734u;
        // 0x288738: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28873Cu;
label_28873c:
    // 0x28873c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x28873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x288740: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x288740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x288744: 0x2445c4a8  addiu       $a1, $v0, -0x3B58
    ctx->pc = 0x288744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x288748: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x288748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x28874c: 0x1083fff5  beq         $a0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x28874Cu;
    {
        const bool branch_taken_0x28874c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x288750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28874Cu;
        // 0x288750: 0x28820007  slti        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28874c) {
            ctx->pc = 0x288724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288724;
        }
    }
    ctx->pc = 0x288754u;
    // 0x288754: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288754u;
    {
        const bool branch_taken_0x288754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288754u;
        // 0x288758: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288754) {
            ctx->pc = 0x28879Cu;
            goto label_28879c;
        }
    }
    ctx->pc = 0x28875Cu;
    // 0x28875c: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28875Cu;
    {
        const bool branch_taken_0x28875c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x28875c) {
            ctx->pc = 0x2887DCu;
            goto label_2887dc;
        }
    }
    ctx->pc = 0x288764u;
    // 0x288764: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x288764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x288768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28876c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28876Cu;
    {
        const bool branch_taken_0x28876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28876Cu;
        // 0x288770: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28876c) {
            ctx->pc = 0x2887ACu;
            goto label_2887ac;
        }
    }
    ctx->pc = 0x288774u;
    // 0x288774: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x288774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x288778: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x288778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x28877c: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x28877cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x288780: 0x2484c378  addiu       $a0, $a0, -0x3C88
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951800));
    // 0x288784: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x288784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x288788: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x288788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x28878c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x288790: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288794: 0x3e00008  jr          $ra
    ctx->pc = 0x288794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288794u;
        // 0x288798: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28879Cu;
label_28879c:
    // 0x28879c: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28879Cu;
    {
        const bool branch_taken_0x28879c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2887A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28879Cu;
        // 0x2887a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28879c) {
            ctx->pc = 0x2887DCu;
            goto label_2887dc;
        }
    }
    ctx->pc = 0x2887A4u;
    // 0x2887a4: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x2887A4u;
    {
        const bool branch_taken_0x2887a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2887A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887A4u;
        // 0x2887a8: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887a4) {
            ctx->pc = 0x28872Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28872c;
        }
    }
    ctx->pc = 0x2887ACu;
label_2887ac:
    // 0x2887ac: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2887acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2887b0: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x2887b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2887b4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2887b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2887b8: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x2887b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
    // 0x2887bc: 0x2484c408  addiu       $a0, $a0, -0x3BF8
    ctx->pc = 0x2887bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951944));
    // 0x2887c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2887C0u;
    {
        const bool branch_taken_0x2887c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2887c0) {
            ctx->pc = 0x2887C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2887C0u;
            // 0x2887c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2887C8u;
            goto label_2887c8;
        }
    }
    ctx->pc = 0x2887C8u;
label_2887c8:
    // 0x2887c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2887c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2887cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2887ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2887d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2887d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2887d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2887d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2887d8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2887d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2887dc:
    // 0x2887dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2887DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2887DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2887E4u;
}

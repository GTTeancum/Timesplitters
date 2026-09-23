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

// Function: preloadGetFile
// Address: 0x21c500 - 0x21c594
void preloadGetFile_0x21c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadGetFile_0x21c500");
#endif

    switch (ctx->pc) {
        case 0x21c530u: goto label_21c530;
        case 0x21c554u: goto label_21c554;
        default: break;
    }

    ctx->pc = 0x21c500u;

    // 0x21c500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c504: 0x8f859d70  lw          $a1, -0x6290($gp)
    ctx->pc = 0x21c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c508: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21c50c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c510: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21c518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c51c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c520: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C520u;
    {
        const bool branch_taken_0x21c520 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C520u;
        // 0x21c524: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c520) {
            ctx->pc = 0x21C574u;
            goto label_21c574;
        }
    }
    ctx->pc = 0x21C528u;
    // 0x21c528: 0x3c1201fb  lui         $s2, 0x1FB
    ctx->pc = 0x21c528u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)507 << 16));
    // 0x21c52c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21c530:
    // 0x21c530: 0x26444c60  addiu       $a0, $s2, 0x4C60
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19552));
    // 0x21c534: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21c534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21c538: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x21c538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c53c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c540: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C540u;
    {
        const bool branch_taken_0x21c540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c540) {
            ctx->pc = 0x21C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C540u;
            // 0x21c544: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C568u;
            goto label_21c568;
        }
    }
    ctx->pc = 0x21C548u;
    // 0x21c548: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x21c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21c54c: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x21C54Cu;
    SET_GPR_U32(ctx, 31, 0x21C554u);
    ctx->pc = 0x21C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C54Cu;
    // 0x21c550: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x21C54Cu, 0x21C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C554u;
label_21c554:
    // 0x21c554: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C554u;
    {
        const bool branch_taken_0x21c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c554) {
            ctx->pc = 0x21C558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C554u;
            // 0x21c558: 0x8f859d70  lw          $a1, -0x6290($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C564u;
            goto label_21c564;
        }
    }
    ctx->pc = 0x21C55Cu;
    // 0x21c55c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21C55Cu;
    {
        const bool branch_taken_0x21c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C55Cu;
        // 0x21c560: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c55c) {
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C564u;
label_21c564:
    // 0x21c564: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21c568:
    // 0x21c568: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x21c568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21c56c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x21C56Cu;
    {
        const bool branch_taken_0x21c56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C56Cu;
        // 0x21c570: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c56c) {
            ctx->pc = 0x21C530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c530;
        }
    }
    ctx->pc = 0x21C574u;
label_21c574:
    // 0x21c574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c578:
    // 0x21c578: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c57c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21c57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c580: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c584: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c58c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C58Cu;
        // 0x21c590: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C594u;
}

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

// Function: preloadGetOb
// Address: 0x21c598 - 0x21c630
void preloadGetOb_0x21c598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadGetOb_0x21c598");
#endif

    switch (ctx->pc) {
        case 0x21c5c8u: goto label_21c5c8;
        case 0x21c5f0u: goto label_21c5f0;
        default: break;
    }

    ctx->pc = 0x21c598u;

    // 0x21c598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c59c: 0x8f869d70  lw          $a2, -0x6290($gp)
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c5a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21c5a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c5a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c5a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c5b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21c5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c5b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c5b8: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x21C5B8u;
    {
        const bool branch_taken_0x21c5b8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5B8u;
        // 0x21c5bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5b8) {
            ctx->pc = 0x21C610u;
            goto label_21c610;
        }
    }
    ctx->pc = 0x21C5C0u;
    // 0x21c5c0: 0x3c1201fb  lui         $s2, 0x1FB
    ctx->pc = 0x21c5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)507 << 16));
    // 0x21c5c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21c5c8:
    // 0x21c5c8: 0x26444c60  addiu       $a0, $s2, 0x4C60
    ctx->pc = 0x21c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19552));
    // 0x21c5cc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x21c5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21c5d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c5d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x21c5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c5d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c5dc: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C5DCu;
    {
        const bool branch_taken_0x21c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x21c5dc) {
            ctx->pc = 0x21C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C5DCu;
            // 0x21c5e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C604u;
            goto label_21c604;
        }
    }
    ctx->pc = 0x21C5E4u;
    // 0x21c5e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x21c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21c5e8: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x21C5E8u;
    SET_GPR_U32(ctx, 31, 0x21C5F0u);
    ctx->pc = 0x21C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C5E8u;
    // 0x21c5ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x21C5E8u, 0x21C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5F0u;
label_21c5f0:
    // 0x21c5f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C5F0u;
    {
        const bool branch_taken_0x21c5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5F0u;
        // 0x21c5f4: 0x8f869d70  lw          $a2, -0x6290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5f0) {
            ctx->pc = 0x21C600u;
            goto label_21c600;
        }
    }
    ctx->pc = 0x21C5F8u;
    // 0x21c5f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21C5F8u;
    {
        const bool branch_taken_0x21c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5F8u;
        // 0x21c5fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5f8) {
            ctx->pc = 0x21C614u;
            goto label_21c614;
        }
    }
    ctx->pc = 0x21C600u;
label_21c600:
    // 0x21c600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21c604:
    // 0x21c604: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x21c604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21c608: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21C608u;
    {
        const bool branch_taken_0x21c608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C608u;
        // 0x21c60c: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c608) {
            ctx->pc = 0x21C5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c5c8;
        }
    }
    ctx->pc = 0x21C610u;
label_21c610:
    // 0x21c610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c614:
    // 0x21c614: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c618: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21c618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c61c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c61cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c620: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c628: 0x3e00008  jr          $ra
    ctx->pc = 0x21C628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C628u;
        // 0x21c62c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C630u;
}

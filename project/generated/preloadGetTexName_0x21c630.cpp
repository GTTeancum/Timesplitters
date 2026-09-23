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

// Function: preloadGetTexName
// Address: 0x21c630 - 0x21c6c8
void preloadGetTexName_0x21c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("preloadGetTexName_0x21c630");
#endif

    switch (ctx->pc) {
        case 0x21c660u: goto label_21c660;
        case 0x21c688u: goto label_21c688;
        default: break;
    }

    ctx->pc = 0x21c630u;

    // 0x21c630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c634: 0x8f869d70  lw          $a2, -0x6290($gp)
    ctx->pc = 0x21c634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
    // 0x21c638: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21c63c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c640: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c644: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c648: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21c648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c64c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c650: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x21C650u;
    {
        const bool branch_taken_0x21c650 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C650u;
        // 0x21c654: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c650) {
            ctx->pc = 0x21C6A8u;
            goto label_21c6a8;
        }
    }
    ctx->pc = 0x21C658u;
    // 0x21c658: 0x3c1201fb  lui         $s2, 0x1FB
    ctx->pc = 0x21c658u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)507 << 16));
    // 0x21c65c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21c660:
    // 0x21c660: 0x26444c60  addiu       $a0, $s2, 0x4C60
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19552));
    // 0x21c664: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x21c664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21c668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c66c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x21c66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21c670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c674: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C674u;
    {
        const bool branch_taken_0x21c674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x21c674) {
            ctx->pc = 0x21C678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C674u;
            // 0x21c678: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C67Cu;
    // 0x21c67c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21c680: 0xc0b9786  jal         func_2E5E18
    ctx->pc = 0x21C680u;
    SET_GPR_U32(ctx, 31, 0x21C688u);
    ctx->pc = 0x21C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C680u;
    // 0x21c684: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5E18u, 0x21C680u, 0x21C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C688u;
label_21c688:
    // 0x21c688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C688u;
    {
        const bool branch_taken_0x21c688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C688u;
        // 0x21c68c: 0x8f869d70  lw          $a2, -0x6290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c688) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C690u;
    // 0x21c690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21C690u;
    {
        const bool branch_taken_0x21c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C690u;
        // 0x21c694: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c690) {
            ctx->pc = 0x21C6ACu;
            goto label_21c6ac;
        }
    }
    ctx->pc = 0x21C698u;
label_21c698:
    // 0x21c698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21c69c:
    // 0x21c69c: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x21c69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21c6a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21C6A0u;
    {
        const bool branch_taken_0x21c6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6A0u;
        // 0x21c6a4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6a0) {
            ctx->pc = 0x21C660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c660;
        }
    }
    ctx->pc = 0x21C6A8u;
label_21c6a8:
    // 0x21c6a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c6ac:
    // 0x21c6ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c6b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21c6b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c6b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21c6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c6b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21c6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6C0u;
        // 0x21c6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C6C8u;
}

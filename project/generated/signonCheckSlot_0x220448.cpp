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

// Function: signonCheckSlot
// Address: 0x220448 - 0x2204f4
void signonCheckSlot_0x220448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signonCheckSlot_0x220448");
#endif

    switch (ctx->pc) {
        case 0x220478u: goto label_220478;
        case 0x220480u: goto label_220480;
        case 0x220498u: goto label_220498;
        case 0x22049cu: goto label_22049c;
        case 0x2204d0u: goto label_2204d0;
        default: break;
    }

    ctx->pc = 0x220448u;

    // 0x220448: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x220448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22044c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x220450: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x220450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220454: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x220454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x220458: 0x2453e1cc  addiu       $s3, $v0, -0x1E34
    ctx->pc = 0x220458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959564));
    // 0x22045c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x220460: 0x2674fffc  addiu       $s4, $s3, -0x4
    ctx->pc = 0x220460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x220464: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x220464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220468: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x220468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22046c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x220470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x220470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_220478:
    // 0x220478: 0xc088224  jal         func_220890
    ctx->pc = 0x220478u;
    SET_GPR_U32(ctx, 31, 0x220480u);
    ctx->pc = 0x22047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220478u;
    // 0x22047c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220890u, 0x220478u, 0x220480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220480u;
label_220480:
    // 0x220480: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x220480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220488: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x220488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22048c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22048Cu;
    {
        const bool branch_taken_0x22048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22048Cu;
        // 0x220490: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22048c) {
            ctx->pc = 0x2204A0u;
            goto label_2204a0;
        }
    }
    ctx->pc = 0x220494u;
    // 0x220494: 0x0  nop
    ctx->pc = 0x220494u;
    // NOP
label_220498:
    // 0x220498: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x220498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_22049c:
    // 0x22049c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2204a0:
    // 0x2204a0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2204a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2204a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2204A4u;
    {
        const bool branch_taken_0x2204a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2204a4) {
            ctx->pc = 0x2204D0u;
            goto label_2204d0;
        }
    }
    ctx->pc = 0x2204ACu;
    // 0x2204ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2204b0: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2204B0u;
    {
        const bool branch_taken_0x2204b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2204B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204B0u;
        // 0x2204b4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204b0) {
            ctx->pc = 0x220498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220498;
        }
    }
    ctx->pc = 0x2204B8u;
    // 0x2204b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2204b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2204bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2204c0: 0x1062fff6  beq         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2204C0u;
    {
        const bool branch_taken_0x2204c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2204C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204C0u;
        // 0x2204c4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204c0) {
            ctx->pc = 0x22049Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22049c;
        }
    }
    ctx->pc = 0x2204C8u;
    // 0x2204c8: 0xc0881ec  jal         func_2207B0
    ctx->pc = 0x2204C8u;
    SET_GPR_U32(ctx, 31, 0x2204D0u);
    ctx->pc = 0x2204CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204C8u;
    // 0x2204cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207B0u, 0x2204C8u, 0x2204D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204D0u;
label_2204d0:
    // 0x2204d0: 0x1200ffe9  beqz        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2204D0u;
    {
        const bool branch_taken_0x2204d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204D0u;
        // 0x2204d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204d0) {
            ctx->pc = 0x220478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220478;
        }
    }
    ctx->pc = 0x2204D8u;
    // 0x2204d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2204d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2204dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2204dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2204e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2204e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2204e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2204e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2204e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2204e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2204ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2204ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2204F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204ECu;
        // 0x2204f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2204F4u;
}

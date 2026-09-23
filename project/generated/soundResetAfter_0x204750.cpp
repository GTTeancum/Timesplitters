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

// Function: soundResetAfter
// Address: 0x204750 - 0x2047c8
void soundResetAfter_0x204750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundResetAfter_0x204750");
#endif

    switch (ctx->pc) {
        case 0x204778u: goto label_204778;
        case 0x20478cu: goto label_20478c;
        default: break;
    }

    ctx->pc = 0x204750u;

    // 0x204750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204754: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x204758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20475c: 0x3403aadc  ori         $v1, $zero, 0xAADC
    ctx->pc = 0x20475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43740);
    // 0x204760: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x204760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x204764: 0x2450e180  addiu       $s0, $v0, -0x1E80
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x204768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x204768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20476c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x20476cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x204770: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x204770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x31E196u));
    // 0x204774: 0x0  nop
    ctx->pc = 0x204774u;
    // NOP
label_204778:
    // 0x204778: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x204778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20477c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20477Cu;
    {
        const bool branch_taken_0x20477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20477c) {
            ctx->pc = 0x204780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20477Cu;
            // 0x204780: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2047A0u;
            goto label_2047a0;
        }
    }
    ctx->pc = 0x204784u;
    // 0x204784: 0xc087140  jal         func_21C500
    ctx->pc = 0x204784u;
    SET_GPR_U32(ctx, 31, 0x20478Cu);
    ctx->pc = 0x204788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204784u;
    // 0x204788: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C500u, 0x204784u, 0x20478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20478Cu;
label_20478c:
    // 0x20478c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x204790: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x204790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x204794: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x204794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x204798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204798u;
    {
        const bool branch_taken_0x204798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204798u;
        // 0x20479c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204798) {
            ctx->pc = 0x2047A4u;
            goto label_2047a4;
        }
    }
    ctx->pc = 0x2047A0u;
label_2047a0:
    // 0x2047a0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2047a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2047a4:
    // 0x2047a4: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2047a8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2047a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2047ac: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2047ACu;
    {
        const bool branch_taken_0x2047ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2047ac) {
            ctx->pc = 0x2047B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2047ACu;
            // 0x2047b0: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204778;
        }
    }
    ctx->pc = 0x2047B4u;
    // 0x2047b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2047b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2047b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2047b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2047bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2047bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2047c0: 0x80811d2  j           func_204748
    ctx->pc = 0x2047C0u;
    ctx->pc = 0x2047C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2047C0u;
    // 0x2047c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204748u;
    soundRestartAfter_0x204748(rdram, ctx, runtime); return;
    ctx->pc = 0x2047C8u;
}

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

// Function: creditsRestartTunnel
// Address: 0x2ae750 - 0x2ae838
void creditsRestartTunnel_0x2ae750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsRestartTunnel_0x2ae750");
#endif

    switch (ctx->pc) {
        case 0x2ae790u: goto label_2ae790;
        case 0x2ae7c0u: goto label_2ae7c0;
        case 0x2ae7e8u: goto label_2ae7e8;
        case 0x2ae7f8u: goto label_2ae7f8;
        default: break;
    }

    ctx->pc = 0x2ae750u;

    // 0x2ae750: 0x8f84b34c  lw          $a0, -0x4CB4($gp)
    ctx->pc = 0x2ae750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947660)));
    // 0x2ae754: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ae754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ae758: 0x34421820  ori         $v0, $v0, 0x1820
    ctx->pc = 0x2ae758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6176);
    // 0x2ae75c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2ae75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2ae760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ae760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ae764: 0x34631830  ori         $v1, $v1, 0x1830
    ctx->pc = 0x2ae764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6192);
    // 0x2ae768: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2ae768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae76c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ae76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ae770: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ae770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae774: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ae774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae778: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae77c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ae77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae780: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae784: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x2ae784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2ae788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae78c: 0xaf84b348  sw          $a0, -0x4CB8($gp)
    ctx->pc = 0x2ae78cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947656), GPR_U32(ctx, 4));
label_2ae790:
    // 0x2ae790: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ae790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ae794: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ae794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ae798: 0x24a5ebb0  addiu       $a1, $a1, -0x1450
    ctx->pc = 0x2ae798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962096));
    // 0x2ae79c: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x2ae79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x2ae7a0: 0x0  nop
    ctx->pc = 0x2ae7a0u;
    // NOP
    // 0x2ae7a4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AE7A4u;
    {
        const bool branch_taken_0x2ae7a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ae7a4) {
            ctx->pc = 0x2AE790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae790;
        }
    }
    ctx->pc = 0x2AE7ACu;
    // 0x2ae7ac: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ae7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ae7b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ae7b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ae7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ae7b8: 0xac402c70  sw          $zero, 0x2C70($v0)
    ctx->pc = 0x2ae7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11376), GPR_U32(ctx, 0));
    // 0x2ae7bc: 0x0  nop
    ctx->pc = 0x2ae7bcu;
    // NOP
label_2ae7c0:
    // 0x2ae7c0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x2ae7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2ae7c4: 0x24031450  addiu       $v1, $zero, 0x1450
    ctx->pc = 0x2ae7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5200));
    // 0x2ae7c8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ae7cc: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x2ae7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ae7d0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x2ae7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ae7d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7d8: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x2ae7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ae7dc: 0xae331444  sw          $s3, 0x1444($s1)
    ctx->pc = 0x2ae7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5188), GPR_U32(ctx, 19));
    // 0x2ae7e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ae7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7e4: 0x0  nop
    ctx->pc = 0x2ae7e4u;
    // NOP
label_2ae7e8:
    // 0x2ae7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ae7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7f0: 0xc0abc8c  jal         func_2AF230
    ctx->pc = 0x2AE7F0u;
    SET_GPR_U32(ctx, 31, 0x2AE7F8u);
    ctx->pc = 0x2AE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7F0u;
    // 0x2ae7f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF230u, 0x2AE7F0u, 0x2AE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7F8u;
label_2ae7f8:
    // 0x2ae7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ae7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ae7fc: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2ae7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2ae800: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AE800u;
    {
        const bool branch_taken_0x2ae800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE800u;
        // 0x2ae804: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae800) {
            ctx->pc = 0x2AE7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae7e8;
        }
    }
    ctx->pc = 0x2AE808u;
    // 0x2ae808: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2ae808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae80c: 0x2a620028  slti        $v0, $s3, 0x28
    ctx->pc = 0x2ae80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2ae810: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AE810u;
    {
        const bool branch_taken_0x2ae810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE810u;
        // 0x2ae814: 0x8f84b34c  lw          $a0, -0x4CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae810) {
            ctx->pc = 0x2AE7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae7c0;
        }
    }
    ctx->pc = 0x2AE818u;
    // 0x2ae818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ae818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae81c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ae81cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae820: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae824: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae82c: 0xaf80b378  sw          $zero, -0x4C88($gp)
    ctx->pc = 0x2ae82cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947704), GPR_U32(ctx, 0));
    // 0x2ae830: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE830u;
        // 0x2ae834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE838u;
}

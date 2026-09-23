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

// Function: propRemovePropFromCollisionList
// Address: 0x2693c8 - 0x2694c0
void propRemovePropFromCollisionList_0x2693c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propRemovePropFromCollisionList_0x2693c8");
#endif

    switch (ctx->pc) {
        case 0x2693e0u: goto label_2693e0;
        case 0x269410u: goto label_269410;
        case 0x26944cu: goto label_26944c;
        case 0x269480u: goto label_269480;
        default: break;
    }

    ctx->pc = 0x2693c8u;

    // 0x2693c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2693c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2693cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2693ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2693d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2693d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2693d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2693d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693d8: 0xc09a146  jal         func_268518
    ctx->pc = 0x2693D8u;
    SET_GPR_U32(ctx, 31, 0x2693E0u);
    ctx->pc = 0x2693DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693D8u;
    // 0x2693dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268518u, 0x2693D8u, 0x2693E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693E0u;
label_2693e0:
    // 0x2693e0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2693E0u;
    {
        const bool branch_taken_0x2693e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693E0u;
        // 0x2693e4: 0x8f86b8fc  lw          $a2, -0x4704($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693e0) {
            ctx->pc = 0x269444u;
            goto label_269444;
        }
    }
    ctx->pc = 0x2693E8u;
    // 0x2693e8: 0x18c00031  blez        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2693E8u;
    {
        const bool branch_taken_0x2693e8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2693ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693E8u;
        // 0x2693ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693e8) {
            ctx->pc = 0x2694B0u;
            goto label_2694b0;
        }
    }
    ctx->pc = 0x2693F0u;
    // 0x2693f0: 0x3c0701fd  lui         $a3, 0x1FD
    ctx->pc = 0x2693f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)509 << 16));
    // 0x2693f4: 0x8ce23410  lw          $v0, 0x3410($a3)
    ctx->pc = 0x2693f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FD3410u));
    // 0x2693f8: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2693F8u;
    {
        const bool branch_taken_0x2693f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2693f8) {
            ctx->pc = 0x2693FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2693F8u;
            // 0x2693fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269410u;
            goto label_269410;
        }
    }
    ctx->pc = 0x269400u;
    // 0x269400: 0x8f82b904  lw          $v0, -0x46FC($gp)
    ctx->pc = 0x269400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949124)));
    // 0x269404: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x269404u;
    {
        const bool branch_taken_0x269404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269404u;
        // 0x269408: 0xace03410  sw          $zero, 0x3410($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 13328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269404) {
            ctx->pc = 0x269438u;
            goto label_269438;
        }
    }
    ctx->pc = 0x26940Cu;
    // 0x26940c: 0x0  nop
    ctx->pc = 0x26940cu;
    // NOP
label_269410:
    // 0x269410: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x269410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x269414: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x269414u;
    {
        const bool branch_taken_0x269414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269414u;
        // 0x269418: 0x24e23410  addiu       $v0, $a3, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269414) {
            ctx->pc = 0x2694B0u;
            goto label_2694b0;
        }
    }
    ctx->pc = 0x26941Cu;
    // 0x26941c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x269420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269424: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269428: 0x5490fff9  bnel        $a0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x269428u;
    {
        const bool branch_taken_0x269428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x269428) {
            ctx->pc = 0x26942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269428u;
            // 0x26942c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269410;
        }
    }
    ctx->pc = 0x269430u;
    // 0x269430: 0x8f82b904  lw          $v0, -0x46FC($gp)
    ctx->pc = 0x269430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949124)));
    // 0x269434: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x269434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_269438:
    // 0x269438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26943c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26943Cu;
    {
        const bool branch_taken_0x26943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26943Cu;
        // 0x269440: 0xaf82b904  sw          $v0, -0x46FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26943c) {
            ctx->pc = 0x2694B0u;
            goto label_2694b0;
        }
    }
    ctx->pc = 0x269444u;
label_269444:
    // 0x269444: 0xc09a13e  jal         func_2684F8
    ctx->pc = 0x269444u;
    SET_GPR_U32(ctx, 31, 0x26944Cu);
    ctx->pc = 0x269448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269444u;
    // 0x269448: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2684F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2684F8u, 0x269444u, 0x26944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26944Cu;
label_26944c:
    // 0x26944c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26944Cu;
    {
        const bool branch_taken_0x26944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26944Cu;
        // 0x269450: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26944c) {
            ctx->pc = 0x2694B4u;
            goto label_2694b4;
        }
    }
    ctx->pc = 0x269454u;
    // 0x269454: 0x8f86b8f8  lw          $a2, -0x4708($gp)
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x269458: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x269458u;
    {
        const bool branch_taken_0x269458 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269458u;
        // 0x26945c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269458) {
            ctx->pc = 0x2694B4u;
            goto label_2694b4;
        }
    }
    ctx->pc = 0x269460u;
    // 0x269460: 0x3c0701fd  lui         $a3, 0x1FD
    ctx->pc = 0x269460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)509 << 16));
    // 0x269464: 0x8ce22f60  lw          $v0, 0x2F60($a3)
    ctx->pc = 0x269464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FD2F60u));
    // 0x269468: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x269468u;
    {
        const bool branch_taken_0x269468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x269468) {
            ctx->pc = 0x26946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269468u;
            // 0x26946c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269480u;
            goto label_269480;
        }
    }
    ctx->pc = 0x269470u;
    // 0x269470: 0x8f82b900  lw          $v0, -0x4700($gp)
    ctx->pc = 0x269470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949120)));
    // 0x269474: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x269474u;
    {
        const bool branch_taken_0x269474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269474u;
        // 0x269478: 0xace02f60  sw          $zero, 0x2F60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269474) {
            ctx->pc = 0x2694A8u;
            goto label_2694a8;
        }
    }
    ctx->pc = 0x26947Cu;
    // 0x26947c: 0x0  nop
    ctx->pc = 0x26947cu;
    // NOP
label_269480:
    // 0x269480: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x269480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x269484: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x269484u;
    {
        const bool branch_taken_0x269484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269484u;
        // 0x269488: 0x24e22f60  addiu       $v0, $a3, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269484) {
            ctx->pc = 0x2694B0u;
            goto label_2694b0;
        }
    }
    ctx->pc = 0x26948Cu;
    // 0x26948c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x269490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x269490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x269494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269498: 0x5490fff9  bnel        $a0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x269498u;
    {
        const bool branch_taken_0x269498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x269498) {
            ctx->pc = 0x26949Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269498u;
            // 0x26949c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269480;
        }
    }
    ctx->pc = 0x2694A0u;
    // 0x2694a0: 0x8f82b900  lw          $v0, -0x4700($gp)
    ctx->pc = 0x2694a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949120)));
    // 0x2694a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2694a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2694a8:
    // 0x2694a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2694a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2694ac: 0xaf82b900  sw          $v0, -0x4700($gp)
    ctx->pc = 0x2694acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 2));
label_2694b0:
    // 0x2694b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2694b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2694b4:
    // 0x2694b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2694b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2694b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2694B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2694BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694B8u;
        // 0x2694bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2694B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2694C0u;
}

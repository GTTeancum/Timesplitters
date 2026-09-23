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

// Function: bulletGetMinesAttachedToProp
// Address: 0x28a688 - 0x28a72c
void bulletGetMinesAttachedToProp_0x28a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("bulletGetMinesAttachedToProp_0x28a688");
#endif

    switch (ctx->pc) {
        case 0x28a6b0u: goto label_28a6b0;
        default: break;
    }

    ctx->pc = 0x28a688u;

    // 0x28a688: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28a688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28a68c: 0x240c000f  addiu       $t4, $zero, 0xF
    ctx->pc = 0x28a68cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28a690: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x28a690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x28a694: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28a698: 0x8f82b948  lw          $v0, -0x46B8($gp)
    ctx->pc = 0x28a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949192)));
    // 0x28a69c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x28a69cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28a6a0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x28a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x28a6a4: 0x2409001d  addiu       $t1, $zero, 0x1D
    ctx->pc = 0x28a6a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x28a6a8: 0x24481590  addiu       $t0, $v0, 0x1590
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5520));
    // 0x28a6ac: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x28a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_28a6b0:
    // 0x28a6b0: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x28A6B0u;
    {
        const bool branch_taken_0x28a6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a6b0) {
            ctx->pc = 0x28A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6B0u;
            // 0x28a6b4: 0x25080114  addiu       $t0, $t0, 0x114 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A718u;
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A6B8u;
    // 0x28a6b8: 0x8d0200e0  lw          $v0, 0xE0($t0)
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 224)));
    // 0x28a6bc: 0x54440016  bnel        $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28A6BCu;
    {
        const bool branch_taken_0x28a6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28a6bc) {
            ctx->pc = 0x28A6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6BCu;
            // 0x28a6c0: 0x25080114  addiu       $t0, $t0, 0x114 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A718u;
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A6C4u;
    // 0x28a6c4: 0x106c0010  beq         $v1, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x28A6C4u;
    {
        const bool branch_taken_0x28a6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x28A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6C4u;
        // 0x28a6c8: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6c4) {
            ctx->pc = 0x28A708u;
            goto label_28a708;
        }
    }
    ctx->pc = 0x28A6CCu;
    // 0x28a6cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A6CCu;
    {
        const bool branch_taken_0x28a6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a6cc) {
            ctx->pc = 0x28A6E4u;
            goto label_28a6e4;
        }
    }
    ctx->pc = 0x28A6D4u;
    // 0x28a6d4: 0x506b0009  beql        $v1, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A6D4u;
    {
        const bool branch_taken_0x28a6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x28a6d4) {
            ctx->pc = 0x28A6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6D4u;
            // 0x28a6d8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A6FCu;
            goto label_28a6fc;
        }
    }
    ctx->pc = 0x28A6DCu;
    // 0x28a6dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28A6DCu;
    {
        const bool branch_taken_0x28a6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6DCu;
        // 0x28a6e0: 0x25080114  addiu       $t0, $t0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6dc) {
            ctx->pc = 0x28A718u;
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A6E4u;
label_28a6e4:
    // 0x28a6e4: 0x546a000c  bnel        $v1, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x28A6E4u;
    {
        const bool branch_taken_0x28a6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x28a6e4) {
            ctx->pc = 0x28A6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6E4u;
            // 0x28a6e8: 0x25080114  addiu       $t0, $t0, 0x114 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A718u;
            goto label_28a718;
        }
    }
    ctx->pc = 0x28A6ECu;
    // 0x28a6ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a6f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a6f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28A6F4u;
    {
        const bool branch_taken_0x28a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6F4u;
        // 0x28a6f8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6f4) {
            ctx->pc = 0x28A714u;
            goto label_28a714;
        }
    }
    ctx->pc = 0x28A6FCu;
label_28a6fc:
    // 0x28a6fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28A700u;
    {
        const bool branch_taken_0x28a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A700u;
        // 0x28a704: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a700) {
            ctx->pc = 0x28A714u;
            goto label_28a714;
        }
    }
    ctx->pc = 0x28A708u;
label_28a708:
    // 0x28a708: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a70c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x28a710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_28a714:
    // 0x28a714: 0x25080114  addiu       $t0, $t0, 0x114
    ctx->pc = 0x28a714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 276));
label_28a718:
    // 0x28a718: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x28a718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x28a71c: 0x523ffe4  bgezl       $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x28A71Cu;
    {
        const bool branch_taken_0x28a71c = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x28a71c) {
            ctx->pc = 0x28A720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A71Cu;
            // 0x28a720: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a6b0;
        }
    }
    ctx->pc = 0x28A724u;
    // 0x28a724: 0x3e00008  jr          $ra
    ctx->pc = 0x28A724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A72Cu;
}

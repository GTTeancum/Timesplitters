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

// Function: padGetLinkNum
// Address: 0x264978 - 0x264a18
void padGetLinkNum_0x264978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("padGetLinkNum_0x264978");
#endif

    switch (ctx->pc) {
        case 0x264990u: goto label_264990;
        case 0x26499cu: goto label_26499c;
        case 0x2649b8u: goto label_2649b8;
        default: break;
    }

    ctx->pc = 0x264978u;

    // 0x264978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26497c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264980: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x264980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x264984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264988: 0xc099380  jal         func_264E00
    ctx->pc = 0x264988u;
    SET_GPR_U32(ctx, 31, 0x264990u);
    ctx->pc = 0x26498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264988u;
    // 0x26498c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x264988u, 0x264990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264990u;
label_264990:
    // 0x264990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264994: 0xc099380  jal         func_264E00
    ctx->pc = 0x264994u;
    SET_GPR_U32(ctx, 31, 0x26499Cu);
    ctx->pc = 0x264998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264994u;
    // 0x264998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x264994u, 0x26499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26499Cu;
label_26499c:
    // 0x26499c: 0x8f88a34c  lw          $t0, -0x5CB4($gp)
    ctx->pc = 0x26499cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x2649a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2649a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649a4: 0x19000016  blez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2649A4u;
    {
        const bool branch_taken_0x2649a4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2649A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649A4u;
        // 0x2649a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649a4) {
            ctx->pc = 0x264A00u;
            goto label_264a00;
        }
    }
    ctx->pc = 0x2649ACu;
    // 0x2649ac: 0x8f86a2f0  lw          $a2, -0x5D10($gp)
    ctx->pc = 0x2649acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2649b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2649b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2649b4: 0x0  nop
    ctx->pc = 0x2649b4u;
    // NOP
label_2649b8:
    // 0x2649b8: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2649b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2649bc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2649bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2649c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2649c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2649c4: 0x14910004  bne         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2649C4u;
    {
        const bool branch_taken_0x2649c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x2649c4) {
            ctx->pc = 0x2649D8u;
            goto label_2649d8;
        }
    }
    ctx->pc = 0x2649CCu;
    // 0x2649cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2649ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2649d0: 0x1047000c  beq         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2649D0u;
    {
        const bool branch_taken_0x2649d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2649D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649D0u;
        // 0x2649d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649d0) {
            ctx->pc = 0x264A04u;
            goto label_264a04;
        }
    }
    ctx->pc = 0x2649D8u;
label_2649d8:
    // 0x2649d8: 0x54870006  bnel        $a0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2649D8u;
    {
        const bool branch_taken_0x2649d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2649d8) {
            ctx->pc = 0x2649DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649D8u;
            // 0x2649dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649F4u;
            goto label_2649f4;
        }
    }
    ctx->pc = 0x2649E0u;
    // 0x2649e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2649e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2649e4: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2649E4u;
    {
        const bool branch_taken_0x2649e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2649e4) {
            ctx->pc = 0x2649E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649E4u;
            // 0x2649e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649F4u;
            goto label_2649f4;
        }
    }
    ctx->pc = 0x2649ECu;
    // 0x2649ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2649ECu;
    {
        const bool branch_taken_0x2649ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649ECu;
        // 0x2649f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649ec) {
            ctx->pc = 0x264A04u;
            goto label_264a04;
        }
    }
    ctx->pc = 0x2649F4u;
label_2649f4:
    // 0x2649f4: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x2649f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2649f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2649F8u;
    {
        const bool branch_taken_0x2649f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2649FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649F8u;
        // 0x2649fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649f8) {
            ctx->pc = 0x2649B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2649b8;
        }
    }
    ctx->pc = 0x264A00u;
label_264a00:
    // 0x264a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x264a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264a04:
    // 0x264a04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264a08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a10: 0x3e00008  jr          $ra
    ctx->pc = 0x264A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A10u;
        // 0x264a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264A18u;
}

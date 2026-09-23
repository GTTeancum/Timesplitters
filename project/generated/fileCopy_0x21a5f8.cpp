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

// Function: fileCopy
// Address: 0x21a5f8 - 0x21a684
void fileCopy_0x21a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileCopy_0x21a5f8");
#endif

    switch (ctx->pc) {
        case 0x21a618u: goto label_21a618;
        case 0x21a630u: goto label_21a630;
        case 0x21a64cu: goto label_21a64c;
        default: break;
    }

    ctx->pc = 0x21a5f8u;

    // 0x21a5f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a5fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21a600: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21a604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21a604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a60c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a610: 0xc0868ce  jal         func_21A338
    ctx->pc = 0x21A610u;
    SET_GPR_U32(ctx, 31, 0x21A618u);
    ctx->pc = 0x21A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A610u;
    // 0x21a614: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A338u, 0x21A610u, 0x21A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A618u;
label_21a618:
    // 0x21a618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a61c: 0x8f82b690  lw          $v0, -0x4970($gp)
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948496)));
    // 0x21a620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A620u;
    {
        const bool branch_taken_0x21a620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a620) {
            ctx->pc = 0x21A634u;
            goto label_21a634;
        }
    }
    ctx->pc = 0x21A628u;
    // 0x21a628: 0xc0b9294  jal         func_2E4A50
    ctx->pc = 0x21A628u;
    SET_GPR_U32(ctx, 31, 0x21A630u);
    ctx->pc = 0x21A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A628u;
    // 0x21a62c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A50u, 0x21A628u, 0x21A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A630u;
label_21a630:
    // 0x21a630: 0xaf82b690  sw          $v0, -0x4970($gp)
    ctx->pc = 0x21a630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948496), GPR_U32(ctx, 2));
label_21a634:
    // 0x21a634: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x21A634u;
    {
        const bool branch_taken_0x21a634 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A634u;
        // 0x21a638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a634) {
            ctx->pc = 0x21A670u;
            goto label_21a670;
        }
    }
    ctx->pc = 0x21A63Cu;
    // 0x21a63c: 0x8f85b690  lw          $a1, -0x4970($gp)
    ctx->pc = 0x21a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948496)));
    // 0x21a640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a644: 0xc086922  jal         func_21A488
    ctx->pc = 0x21A644u;
    SET_GPR_U32(ctx, 31, 0x21A64Cu);
    ctx->pc = 0x21A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A644u;
    // 0x21a648: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A488u, 0x21A644u, 0x21A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A64Cu;
label_21a64c:
    // 0x21a64c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a650: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21a650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a654: 0x8f85b690  lw          $a1, -0x4970($gp)
    ctx->pc = 0x21a654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948496)));
    // 0x21a658: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21a658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a65c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21a65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a660: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21a660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a668: 0x8086966  j           func_21A598
    ctx->pc = 0x21A668u;
    ctx->pc = 0x21A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A668u;
    // 0x21a66c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A598u;
    fileSave_0x21a598(rdram, ctx, runtime); return;
    ctx->pc = 0x21A670u;
label_21a670:
    // 0x21a670: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21a670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a674: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21a674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a67c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A67Cu;
        // 0x21a680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A684u;
}

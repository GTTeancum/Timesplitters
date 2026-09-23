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

// Function: GetRootDirDetails
// Address: 0x2b35e8 - 0x2b366c
void GetRootDirDetails_0x2b35e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRootDirDetails_0x2b35e8");
#endif

    switch (ctx->pc) {
        case 0x2b361cu: goto label_2b361c;
        case 0x2b3630u: goto label_2b3630;
        case 0x2b3640u: goto label_2b3640;
        default: break;
    }

    ctx->pc = 0x2b35e8u;

    // 0x2b35e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b35e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b35ec: 0x8f82b430  lw          $v0, -0x4BD0($gp)
    ctx->pc = 0x2b35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947888)));
    // 0x2b35f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b35f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b35f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b35f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b35f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3600: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3600u;
    {
        const bool branch_taken_0x2b3600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3600u;
        // 0x2b3604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3600) {
            ctx->pc = 0x2B3624u;
            goto label_2b3624;
        }
    }
    ctx->pc = 0x2B3608u;
    // 0x2b3608: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2b3608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2b360c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2b360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2b3610: 0x24c6fdc0  addiu       $a2, $a2, -0x240
    ctx->pc = 0x2b3610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966720));
    // 0x2b3614: 0xc0acd68  jal         func_2B35A0
    ctx->pc = 0x2B3614u;
    SET_GPR_U32(ctx, 31, 0x2B361Cu);
    ctx->pc = 0x2B3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3614u;
    // 0x2b3618: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B35A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B35A0u, 0x2B3614u, 0x2B361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B361Cu;
label_2b361c:
    // 0x2b361c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3620: 0xaf82b430  sw          $v0, -0x4BD0($gp)
    ctx->pc = 0x2b3620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947888), GPR_U32(ctx, 2));
label_2b3624:
    // 0x2b3624: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b3624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b3628: 0xc0ace48  jal         func_2B3920
    ctx->pc = 0x2B3628u;
    SET_GPR_U32(ctx, 31, 0x2B3630u);
    ctx->pc = 0x2B362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3628u;
    // 0x2b362c: 0x2405009e  addiu       $a1, $zero, 0x9E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3920u, 0x2B3628u, 0x2B3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3630u;
label_2b3630:
    // 0x2b3630: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b3630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b3634: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b3634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b3638: 0xc0ace48  jal         func_2B3920
    ctx->pc = 0x2B3638u;
    SET_GPR_U32(ctx, 31, 0x2B3640u);
    ctx->pc = 0x2B363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3638u;
    // 0x2b363c: 0x240500a6  addiu       $a1, $zero, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3920u, 0x2B3638u, 0x2B3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3640u;
label_2b3640:
    // 0x2b3640: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b3640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3644: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x2b3644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x2b3648: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b3648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b364c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b364cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3650: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x2b3650u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2b3654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3658: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x2b3658u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x2b365c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b365cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b3660: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b3660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3664: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3664u;
        // 0x2b3668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B366Cu;
}

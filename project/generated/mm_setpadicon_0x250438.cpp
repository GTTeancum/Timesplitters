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

// Function: mm_setpadicon
// Address: 0x250438 - 0x2504fc
void mm_setpadicon_0x250438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mm_setpadicon_0x250438");
#endif

    switch (ctx->pc) {
        case 0x250464u: goto label_250464;
        default: break;
    }

    ctx->pc = 0x250438u;

    // 0x250438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25043c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x25043cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x250440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x250444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x250448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25044c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x250450: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x250450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250454: 0x8f84a20c  lw          $a0, -0x5DF4($gp)
    ctx->pc = 0x250454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943244)));
    // 0x250458: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x250458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25045c: 0xc0922e6  jal         func_248B98
    ctx->pc = 0x25045Cu;
    SET_GPR_U32(ctx, 31, 0x250464u);
    ctx->pc = 0x250460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25045Cu;
    // 0x250460: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B98u, 0x25045Cu, 0x250464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250464u;
label_250464:
    // 0x250464: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x250464u;
    {
        const bool branch_taken_0x250464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250464u;
        // 0x250468: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250464) {
            ctx->pc = 0x2504CCu;
            goto label_2504cc;
        }
    }
    ctx->pc = 0x25046Cu;
    // 0x25046c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x25046cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x250470: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x250470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x250474: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x250474u;
    {
        const bool branch_taken_0x250474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250474u;
        // 0x250478: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250474) {
            ctx->pc = 0x2504CCu;
            goto label_2504cc;
        }
    }
    ctx->pc = 0x25047Cu;
    // 0x25047c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25047cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x250480: 0x24422360  addiu       $v0, $v0, 0x2360
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9056));
    // 0x250484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250488: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25048c: 0x800008  jr          $a0
    ctx->pc = 0x25048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250494u: goto label_250494;
            case 0x25049Cu: goto label_25049c;
            case 0x2504A4u: goto label_2504a4;
            case 0x2504ACu: goto label_2504ac;
            case 0x2504B4u: goto label_2504b4;
            case 0x2504BCu: goto label_2504bc;
            case 0x2504C4u: goto label_2504c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25048Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250494u;
label_250494:
    // 0x250494: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250494u;
    {
        const bool branch_taken_0x250494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250494u;
        // 0x250498: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250494) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x25049Cu;
label_25049c:
    // 0x25049c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25049Cu;
    {
        const bool branch_taken_0x25049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25049Cu;
        // 0x2504a0: 0x24b00003  addiu       $s0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25049c) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x2504A4u;
label_2504a4:
    // 0x2504a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2504A4u;
    {
        const bool branch_taken_0x2504a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A4u;
        // 0x2504a8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504a4) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x2504ACu;
label_2504ac:
    // 0x2504ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2504ACu;
    {
        const bool branch_taken_0x2504ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504ACu;
        // 0x2504b0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504ac) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x2504B4u;
label_2504b4:
    // 0x2504b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2504B4u;
    {
        const bool branch_taken_0x2504b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504B4u;
        // 0x2504b8: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504b4) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x2504BCu;
label_2504bc:
    // 0x2504bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2504BCu;
    {
        const bool branch_taken_0x2504bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504BCu;
        // 0x2504c0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504bc) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x2504C4u;
label_2504c4:
    // 0x2504c4: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x2504c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2504c8:
    // 0x2504c8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2504c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2504cc:
    // 0x2504cc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2504ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2504d0: 0x246372a8  addiu       $v1, $v1, 0x72A8
    ctx->pc = 0x2504d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29352));
    // 0x2504d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2504d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2504d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2504d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2504dc: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2504dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2504e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2504e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2504e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2504e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2504e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2504e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2504ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2504ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2504f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2504f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2504f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2504F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2504F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504F4u;
        // 0x2504f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2504F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2504FCu;
}

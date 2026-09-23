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

// Function: teamGetScore
// Address: 0x289078 - 0x28915c
void teamGetScore_0x289078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("teamGetScore_0x289078");
#endif

    switch (ctx->pc) {
        case 0x2890b0u: goto label_2890b0;
        case 0x289108u: goto label_289108;
        default: break;
    }

    ctx->pc = 0x289078u;

    // 0x289078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28907c: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x28907cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x289080: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x289080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x289084: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x289084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x289088: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x289088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28908c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28908cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x289094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x289098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28909c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x28909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2890a0: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2890A0u;
    {
        const bool branch_taken_0x2890a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2890A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890A0u;
        // 0x2890a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890a0) {
            ctx->pc = 0x289140u;
            goto label_289140;
        }
    }
    ctx->pc = 0x2890A8u;
    // 0x2890a8: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x2890a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2890ac: 0x0  nop
    ctx->pc = 0x2890acu;
    // NOP
label_2890b0:
    // 0x2890b0: 0x8f85b238  lw          $a1, -0x4DC8($gp)
    ctx->pc = 0x2890b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x2890b4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2890b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2890b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2890bc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2890bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2890c0: 0x5472001b  bnel        $v1, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x2890C0u;
    {
        const bool branch_taken_0x2890c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2890c0) {
            ctx->pc = 0x2890C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2890C0u;
            // 0x2890c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289130u;
            goto label_289130;
        }
    }
    ctx->pc = 0x2890C8u;
    // 0x2890c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2890c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2890cc: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2890ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2890d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2890d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2890d4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2890d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2890d8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2890D8u;
    {
        const bool branch_taken_0x2890d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890D8u;
        // 0x2890dc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890d8) {
            ctx->pc = 0x28912Cu;
            goto label_28912c;
        }
    }
    ctx->pc = 0x2890E0u;
    // 0x2890e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2890e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2890e4: 0x24428a20  addiu       $v0, $v0, -0x75E0
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937120));
    // 0x2890e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2890e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2890ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2890ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2890f0: 0x800008  jr          $a0
    ctx->pc = 0x2890F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2890F8u: goto label_2890f8;
            case 0x289118u: goto label_289118;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2890F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2890F8u;
label_2890f8:
    // 0x2890f8: 0x24041210  addiu       $a0, $zero, 0x1210
    ctx->pc = 0x2890f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x2890fc: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x2890fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x289100: 0xc0a23da  jal         func_288F68
    ctx->pc = 0x289100u;
    SET_GPR_U32(ctx, 31, 0x289108u);
    ctx->pc = 0x289104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289100u;
    // 0x289104: 0x452021  addu        $a0, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F68u, 0x289100u, 0x289108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289108u;
label_289108:
    // 0x289108: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x289108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28910c: 0x8f879f74  lw          $a3, -0x608C($gp)
    ctx->pc = 0x28910cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x289110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x289110u;
    {
        const bool branch_taken_0x289110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289110u;
        // 0x289114: 0x8f86b59c  lw          $a2, -0x4A64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289110) {
            ctx->pc = 0x28912Cu;
            goto label_28912c;
        }
    }
    ctx->pc = 0x289118u;
label_289118:
    // 0x289118: 0x24021210  addiu       $v0, $zero, 0x1210
    ctx->pc = 0x289118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x28911c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x28911cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x289120: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x289120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x289124: 0x8c4300f8  lw          $v1, 0xF8($v0)
    ctx->pc = 0x289124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x289128: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x289128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_28912c:
    // 0x28912c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28912cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_289130:
    // 0x289130: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x289130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x289134: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x289134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x289138: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x289138u;
    {
        const bool branch_taken_0x289138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289138u;
        // 0x28913c: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289138) {
            ctx->pc = 0x2890B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2890b0;
        }
    }
    ctx->pc = 0x289140u;
label_289140:
    // 0x289140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289144: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x289144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289148: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x289148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28914c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28914cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289154: 0x3e00008  jr          $ra
    ctx->pc = 0x289154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289154u;
        // 0x289158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28915Cu;
}

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

// Function: hr_deleteroute
// Address: 0x266058 - 0x2660fc
void hr_deleteroute_0x266058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hr_deleteroute_0x266058");
#endif

    switch (ctx->pc) {
        case 0x2660a0u: goto label_2660a0;
        default: break;
    }

    ctx->pc = 0x266058u;

    // 0x266058: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x266058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26605c: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26605Cu;
    {
        const bool branch_taken_0x26605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x266060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26605Cu;
        // 0x266060: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26605c) {
            ctx->pc = 0x266084u;
            goto label_266084;
        }
    }
    ctx->pc = 0x266064u;
    // 0x266064: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x266064u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x266068: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x266068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x26606c: 0x25426490  addiu       $v0, $t2, 0x6490
    ctx->pc = 0x26606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 25744));
    // 0x266070: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x266070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x266074: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x266074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266078: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x266078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x26607c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26607Cu;
    {
        const bool branch_taken_0x26607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26607Cu;
        // 0x266080: 0x9788b8d0  lhu         $t0, -0x4730($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26607c) {
            ctx->pc = 0x2660E8u;
            goto label_2660e8;
        }
    }
    ctx->pc = 0x266084u;
label_266084:
    // 0x266084: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x266084u;
    {
        const bool branch_taken_0x266084 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x266088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266084u;
        // 0x266088: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266084) {
            ctx->pc = 0x2660DCu;
            goto label_2660dc;
        }
    }
    ctx->pc = 0x26608Cu;
    // 0x26608c: 0x9788b8d0  lhu         $t0, -0x4730($gp)
    ctx->pc = 0x26608cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x266090: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x266090u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x266094: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x266094u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x266098: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x266098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x26609c: 0x0  nop
    ctx->pc = 0x26609cu;
    // NOP
label_2660a0:
    // 0x2660a0: 0x25436490  addiu       $v1, $t2, 0x6490
    ctx->pc = 0x2660a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 25744));
    // 0x2660a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2660a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2660a8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2660a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2660ac: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2660ACu;
    {
        const bool branch_taken_0x2660ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2660ac) {
            ctx->pc = 0x2660B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2660ACu;
            // 0x2660b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2660C4u;
            goto label_2660c4;
        }
    }
    ctx->pc = 0x2660B4u;
    // 0x2660b4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2660b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2660b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2660b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2660bc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2660bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2660c0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2660c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2660c4:
    // 0x2660c4: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2660C4u;
    {
        const bool branch_taken_0x2660c4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2660C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660C4u;
        // 0x2660c8: 0x25426490  addiu       $v0, $t2, 0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 25744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660c4) {
            ctx->pc = 0x2660ECu;
            goto label_2660ec;
        }
    }
    ctx->pc = 0x2660CCu;
    // 0x2660cc: 0x5120fff4  beql        $t1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2660CCu;
    {
        const bool branch_taken_0x2660cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2660cc) {
            ctx->pc = 0x2660D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2660CCu;
            // 0x2660d0: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2660A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2660a0;
        }
    }
    ctx->pc = 0x2660D4u;
    // 0x2660d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2660D4u;
    {
        const bool branch_taken_0x2660d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660D4u;
        // 0x2660d8: 0xaf85b8d0  sw          $a1, -0x4730($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949072), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660d4) {
            ctx->pc = 0x2660F0u;
            goto label_2660f0;
        }
    }
    ctx->pc = 0x2660DCu;
label_2660dc:
    // 0x2660dc: 0x9788b8d0  lhu         $t0, -0x4730($gp)
    ctx->pc = 0x2660dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x2660e0: 0x3c0a01fc  lui         $t2, 0x1FC
    ctx->pc = 0x2660e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)508 << 16));
    // 0x2660e4: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x2660e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2660e8:
    // 0x2660e8: 0x25426490  addiu       $v0, $t2, 0x6490
    ctx->pc = 0x2660e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 25744));
label_2660ec:
    // 0x2660ec: 0xaf85b8d0  sw          $a1, -0x4730($gp)
    ctx->pc = 0x2660ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949072), GPR_U32(ctx, 5));
label_2660f0:
    // 0x2660f0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2660f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2660f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2660F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2660F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660F4u;
        // 0x2660f8: 0xa4480000  sh          $t0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2660F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2660FCu;
}

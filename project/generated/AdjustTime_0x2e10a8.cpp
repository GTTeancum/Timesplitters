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

// Function: AdjustTime
// Address: 0x2e10a8 - 0x2e1174
void AdjustTime_0x2e10a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AdjustTime_0x2e10a8");
#endif

    switch (ctx->pc) {
        case 0x2e10dcu: goto label_2e10dc;
        case 0x2e1100u: goto label_2e1100;
        case 0x2e1108u: goto label_2e1108;
        case 0x2e1128u: goto label_2e1128;
        case 0x2e1130u: goto label_2e1130;
        case 0x2e1148u: goto label_2e1148;
        case 0x2e1150u: goto label_2e1150;
        default: break;
    }

    ctx->pc = 0x2e10a8u;

    // 0x2e10a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e10ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e10acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e10b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e10b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e10b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e10bc: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E10BCu;
    {
        const bool branch_taken_0x2e10bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10BCu;
        // 0x2e10c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10bc) {
            ctx->pc = 0x2E10DCu;
            goto label_2e10dc;
        }
    }
    ctx->pc = 0x2E10C4u;
    // 0x2e10c4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2e10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2e10c8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e10c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e10cc: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e10ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e10d0: 0x24c6b730  addiu       $a2, $a2, -0x48D0
    ctx->pc = 0x2e10d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948656));
    // 0x2e10d4: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E10D4u;
    SET_GPR_U32(ctx, 31, 0x2E10DCu);
    ctx->pc = 0x2E10D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10D4u;
    // 0x2e10d8: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E10D4u, 0x2E10DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10DCu;
label_2e10dc:
    // 0x2e10dc: 0x260205a0  addiu       $v0, $s0, 0x5A0
    ctx->pc = 0x2e10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x2e10e0: 0x2c420b41  sltiu       $v0, $v0, 0xB41
    ctx->pc = 0x2e10e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2881) ? 1 : 0);
    // 0x2e10e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10E4u;
    {
        const bool branch_taken_0x2e10e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10E4u;
        // 0x2e10e8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10e4) {
            ctx->pc = 0x2E1100u;
            goto label_2e1100;
        }
    }
    ctx->pc = 0x2E10ECu;
    // 0x2e10ec: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2e10ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2e10f0: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x2e10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x2e10f4: 0x24c6b750  addiu       $a2, $a2, -0x48B0
    ctx->pc = 0x2e10f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948688));
    // 0x2e10f8: 0xc0b91aa  jal         func_2E46A8
    ctx->pc = 0x2E10F8u;
    SET_GPR_U32(ctx, 31, 0x2E1100u);
    ctx->pc = 0x2E10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10F8u;
    // 0x2e10fc: 0x240501a3  addiu       $a1, $zero, 0x1A3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46A8u, 0x2E10F8u, 0x2E1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1100u;
label_2e1100:
    // 0x2e1100: 0xc0b8340  jal         func_2E0D00
    ctx->pc = 0x2E1100u;
    SET_GPR_U32(ctx, 31, 0x2E1108u);
    ctx->pc = 0x2E1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1100u;
    // 0x2e1104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D00u, 0x2E1100u, 0x2E1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1108u;
label_2e1108:
    // 0x2e1108: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2e1108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e110c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2e110cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e1110: 0x602000d  bltzl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1110u;
    {
        const bool branch_taken_0x2e1110 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2e1110) {
            ctx->pc = 0x2E1114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1110u;
            // 0x2e1114: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1148u;
            goto label_2e1148;
        }
    }
    ctx->pc = 0x2E1118u;
    // 0x2e1118: 0x2a02003d  slti        $v0, $s0, 0x3D
    ctx->pc = 0x2e1118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2e111c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E111Cu;
    {
        const bool branch_taken_0x2e111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e111c) {
            ctx->pc = 0x2E1120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E111Cu;
            // 0x2e1120: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E115Cu;
            goto label_2e115c;
        }
    }
    ctx->pc = 0x2E1124u;
    // 0x2e1124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1128:
    // 0x2e1128: 0xc0b83f4  jal         func_2E0FD0
    ctx->pc = 0x2E1128u;
    SET_GPR_U32(ctx, 31, 0x2E1130u);
    ctx->pc = 0x2E112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1128u;
    // 0x2e112c: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FD0u, 0x2E1128u, 0x2E1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1130u;
label_2e1130:
    // 0x2e1130: 0x2a02003d  slti        $v0, $s0, 0x3D
    ctx->pc = 0x2e1130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2e1134: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E1134u;
    {
        const bool branch_taken_0x2e1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1134u;
        // 0x2e1138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1134) {
            ctx->pc = 0x2E1128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1128;
        }
    }
    ctx->pc = 0x2E113Cu;
    // 0x2e113c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E113Cu;
    {
        const bool branch_taken_0x2e113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E113Cu;
        // 0x2e1140: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e113c) {
            ctx->pc = 0x2E1160u;
            goto label_2e1160;
        }
    }
    ctx->pc = 0x2E1144u;
    // 0x2e1144: 0x0  nop
    ctx->pc = 0x2e1144u;
    // NOP
label_2e1148:
    // 0x2e1148: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E1148u;
    SET_GPR_U32(ctx, 31, 0x2E1150u);
    ctx->pc = 0x2E114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1148u;
    // 0x2e114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E1148u, 0x2E1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1150u;
label_2e1150:
    // 0x2e1150: 0x602fffd  bltzl       $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2E1150u;
    {
        const bool branch_taken_0x2e1150 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2e1150) {
            ctx->pc = 0x2E1154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1150u;
            // 0x2e1154: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1148;
        }
    }
    ctx->pc = 0x2E1158u;
    // 0x2e1158: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x2e1158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_2e115c:
    // 0x2e115c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1160:
    // 0x2e1160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1164: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e1164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e116c: 0x80b8362  j           func_2E0D88
    ctx->pc = 0x2E116Cu;
    ctx->pc = 0x2E1170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E116Cu;
    // 0x2e1170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D88u;
    converttobcd_0x2e0d88(rdram, ctx, runtime); return;
    ctx->pc = 0x2E1174u;
}

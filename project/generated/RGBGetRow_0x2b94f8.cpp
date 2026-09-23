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

// Function: RGBGetRow
// Address: 0x2b94f8 - 0x2b964c
void RGBGetRow_0x2b94f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RGBGetRow_0x2b94f8");
#endif

    switch (ctx->pc) {
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95d8u: goto label_2b95d8;
        default: break;
    }

    ctx->pc = 0x2b94f8u;

    // 0x2b94f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b94f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b94fc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2b94fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9500: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b9500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b9504: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2b9504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b9508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b950c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b950cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9510: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b9514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9518: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2b9518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b951c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b9520: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B9520u;
    {
        const bool branch_taken_0x2b9520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9520u;
        // 0x2b9524: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9520) {
            ctx->pc = 0x2B95FCu;
            goto label_2b95fc;
        }
    }
    ctx->pc = 0x2B9528u;
    // 0x2b9528: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2b9528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b952c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2b952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b9530: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2b9530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b9534: 0x8f87b4b8  lw          $a3, -0x4B48($gp)
    ctx->pc = 0x2b9534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9538: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2b9538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b953c: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x2b953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2b9540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b9544: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2b9544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b9548: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b954c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b9550: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b9550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9554: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b9554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9558: 0xc0b9516  jal         func_2E5458
    ctx->pc = 0x2B9558u;
    SET_GPR_U32(ctx, 31, 0x2B9560u);
    ctx->pc = 0x2B955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9558u;
    // 0x2b955c: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5458u, 0x2B9558u, 0x2B9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9560u;
label_2b9560:
    // 0x2b9560: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2b9560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b9564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9568: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9568u;
    {
        const bool branch_taken_0x2b9568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9568u;
        // 0x2b956c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9568) {
            ctx->pc = 0x2B9574u;
            goto label_2b9574;
        }
    }
    ctx->pc = 0x2B9570u;
label_2b9570:
    // 0x2b9570: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2b9570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_2b9574:
    // 0x2b9574: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x2b9574u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9578:
    // 0x2b9578: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x2b9578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x2b957c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B957Cu;
    {
        const bool branch_taken_0x2b957c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B957Cu;
        // 0x2b9580: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b957c) {
            ctx->pc = 0x2B9638u;
            goto label_2b9638;
        }
    }
    ctx->pc = 0x2B9584u;
    // 0x2b9584: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x2b9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x2b9588: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9588u;
    {
        const bool branch_taken_0x2b9588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9588u;
        // 0x2b958c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9588) {
            ctx->pc = 0x2B95C4u;
            goto label_2b95c4;
        }
    }
    ctx->pc = 0x2B9590u;
    // 0x2b9590: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b9594: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B9594u;
    {
        const bool branch_taken_0x2b9594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9594u;
        // 0x2b9598: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9594) {
            ctx->pc = 0x2B9574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9574;
        }
    }
    ctx->pc = 0x2B959Cu;
    // 0x2b959c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2b959cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b95a0:
    // 0x2b95a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2b95a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b95a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b95a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b95ac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b95acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b95b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b95b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b95b4: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B95B4u;
    {
        const bool branch_taken_0x2b95b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b95b4) {
            ctx->pc = 0x2B95A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b95a0;
        }
    }
    ctx->pc = 0x2B95BCu;
    // 0x2b95bc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B95BCu;
    {
        const bool branch_taken_0x2b95bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95BCu;
        // 0x2b95c0: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95bc) {
            ctx->pc = 0x2B9574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9574;
        }
    }
    ctx->pc = 0x2B95C4u;
label_2b95c4:
    // 0x2b95c4: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x2b95c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b95c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b95cc: 0x1062ffe8  beq         $v1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2B95CCu;
    {
        const bool branch_taken_0x2b95cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95CCu;
        // 0x2b95d0: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95cc) {
            ctx->pc = 0x2B9570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9570;
        }
    }
    ctx->pc = 0x2B95D4u;
    // 0x2b95d4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2b95d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_2b95d8:
    // 0x2b95d8: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x2b95d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b95dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b95e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b95e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b95e8: 0x0  nop
    ctx->pc = 0x2b95e8u;
    // NOP
    // 0x2b95ec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B95ECu;
    {
        const bool branch_taken_0x2b95ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b95ec) {
            ctx->pc = 0x2B95D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b95d8;
        }
    }
    ctx->pc = 0x2B95F4u;
    // 0x2b95f4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2B95F4u;
    {
        const bool branch_taken_0x2b95f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95F4u;
        // 0x2b95f8: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95f4) {
            ctx->pc = 0x2B9578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9578;
        }
    }
    ctx->pc = 0x2B95FCu;
label_2b95fc:
    // 0x2b95fc: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x2b95fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2b9600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9604: 0x96070008  lhu         $a3, 0x8($s0)
    ctx->pc = 0x2b9604u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b9608: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2b9608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b960c: 0x71061018  mult1       $v0, $t0, $a2
    ctx->pc = 0x2b960cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b9610: 0x8f83b4b8  lw          $v1, -0x4B48($gp)
    ctx->pc = 0x2b9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948024)));
    // 0x2b9614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9618: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b9618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b961c: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x2b961cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b9620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9624: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b9624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b9628: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2b9628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b962c: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x2b9630: 0x80b9516  j           func_2E5458
    ctx->pc = 0x2B9630u;
    ctx->pc = 0x2B9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9630u;
    // 0x2b9634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5458u;
    memcpy_0x2e5458(rdram, ctx, runtime); return;
    ctx->pc = 0x2B9638u;
label_2b9638:
    // 0x2b9638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b963c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b963cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9644: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9644u;
        // 0x2b9648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B964Cu;
}

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

// Function: textReset
// Address: 0x2020b0 - 0x202264
void textReset_0x2020b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("textReset_0x2020b0");
#endif

    switch (ctx->pc) {
        case 0x2020f0u: goto label_2020f0;
        case 0x202160u: goto label_202160;
        case 0x2021a0u: goto label_2021a0;
        case 0x2021e0u: goto label_2021e0;
        case 0x202220u: goto label_202220;
        default: break;
    }

    ctx->pc = 0x2020b0u;

    // 0x2020b0: 0x93829ab4  lbu         $v0, -0x654C($gp)
    ctx->pc = 0x2020b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941364)));
    // 0x2020b4: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2020B4u;
    {
        const bool branch_taken_0x2020b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2020B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020B4u;
        // 0x2020b8: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020b4) {
            ctx->pc = 0x20225Cu;
            goto label_20225c;
        }
    }
    ctx->pc = 0x2020BCu;
    // 0x2020bc: 0x8f899a94  lw          $t1, -0x656C($gp)
    ctx->pc = 0x2020bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2020c0: 0x2447b410  addiu       $a3, $v0, -0x4BF0
    ctx->pc = 0x2020c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947856));
    // 0x2020c4: 0x1920001a  blez        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2020C4u;
    {
        const bool branch_taken_0x2020c4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2020C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020C4u;
        // 0x2020c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020c4) {
            ctx->pc = 0x202130u;
            goto label_202130;
        }
    }
    ctx->pc = 0x2020CCu;
    // 0x2020cc: 0x8f8a9a98  lw          $t2, -0x6568($gp)
    ctx->pc = 0x2020ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941336)));
    // 0x2020d0: 0x3c0e0032  lui         $t6, 0x32
    ctx->pc = 0x2020d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)50 << 16));
    // 0x2020d4: 0x8f8b9ab8  lw          $t3, -0x6548($gp)
    ctx->pc = 0x2020d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941368)));
    // 0x2020d8: 0x3c0f0032  lui         $t7, 0x32
    ctx->pc = 0x2020d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)50 << 16));
    // 0x2020dc: 0x8f8c9abc  lw          $t4, -0x6544($gp)
    ctx->pc = 0x2020dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941372)));
    // 0x2020e0: 0x3c180032  lui         $t8, 0x32
    ctx->pc = 0x2020e0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)50 << 16));
    // 0x2020e4: 0x8f8d9ac0  lw          $t5, -0x6540($gp)
    ctx->pc = 0x2020e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941376)));
    // 0x2020e8: 0x3c190032  lui         $t9, 0x32
    ctx->pc = 0x2020e8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)50 << 16));
    // 0x2020ec: 0x0  nop
    ctx->pc = 0x2020ecu;
    // NOP
label_2020f0:
    // 0x2020f0: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x2020f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2020f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2020f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2020f8: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x2020f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2020fc: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x202100: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x202100u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x202104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202108: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x202108u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x20210c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x202110: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x202110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x202114: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202118: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x202118u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x20211c: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x20211cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x202120: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x202120u;
    {
        const bool branch_taken_0x202120 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x202124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202120u;
        // 0x202124: 0x24e7000a  addiu       $a3, $a3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202120) {
            ctx->pc = 0x2020F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2020f0;
        }
    }
    ctx->pc = 0x202128u;
    // 0x202128: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x202128u;
    {
        const bool branch_taken_0x202128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202128u;
        // 0x20212c: 0x25c7b7d0  addiu       $a3, $t6, -0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202128) {
            ctx->pc = 0x202154u;
            goto label_202154;
        }
    }
    ctx->pc = 0x202130u;
label_202130:
    // 0x202130: 0x8f8a9a98  lw          $t2, -0x6568($gp)
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941336)));
    // 0x202134: 0x3c0e0032  lui         $t6, 0x32
    ctx->pc = 0x202134u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)50 << 16));
    // 0x202138: 0x8f8b9ab8  lw          $t3, -0x6548($gp)
    ctx->pc = 0x202138u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941368)));
    // 0x20213c: 0x3c0f0032  lui         $t7, 0x32
    ctx->pc = 0x20213cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)50 << 16));
    // 0x202140: 0x8f8c9abc  lw          $t4, -0x6544($gp)
    ctx->pc = 0x202140u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941372)));
    // 0x202144: 0x3c180032  lui         $t8, 0x32
    ctx->pc = 0x202144u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)50 << 16));
    // 0x202148: 0x8f8d9ac0  lw          $t5, -0x6540($gp)
    ctx->pc = 0x202148u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941376)));
    // 0x20214c: 0x3c190032  lui         $t9, 0x32
    ctx->pc = 0x20214cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)50 << 16));
    // 0x202150: 0x25c7b7d0  addiu       $a3, $t6, -0x4830
    ctx->pc = 0x202150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948816));
label_202154:
    // 0x202154: 0x1940000f  blez        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x202154u;
    {
        const bool branch_taken_0x202154 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x202154) {
            ctx->pc = 0x202194u;
            goto label_202194;
        }
    }
    ctx->pc = 0x20215Cu;
    // 0x20215c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x20215cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_202160:
    // 0x202160: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x202160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202164: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x202164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x202168: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x202168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x20216c: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x20216cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x202170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202174: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x202174u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x202178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x202178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20217c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20217cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x202180: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x202180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202184: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x202184u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x202188: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x202188u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x20218c: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20218Cu;
    {
        const bool branch_taken_0x20218c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x202190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20218Cu;
        // 0x202190: 0x24e7000a  addiu       $a3, $a3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20218c) {
            ctx->pc = 0x202160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202160;
        }
    }
    ctx->pc = 0x202194u;
label_202194:
    // 0x202194: 0x1960000f  blez        $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x202194u;
    {
        const bool branch_taken_0x202194 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x202198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202194u;
        // 0x202198: 0x25e7bb90  addiu       $a3, $t7, -0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202194) {
            ctx->pc = 0x2021D4u;
            goto label_2021d4;
        }
    }
    ctx->pc = 0x20219Cu;
    // 0x20219c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2021a0:
    // 0x2021a0: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x2021a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2021a4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2021a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2021a8: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x2021a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2021ac: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x2021acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2021b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2021b4: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x2021b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2021b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2021b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2021bc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2021c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2021c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2021c4: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x2021c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2021c8: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x2021c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2021cc: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2021CCu;
    {
        const bool branch_taken_0x2021cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021CCu;
        // 0x2021d0: 0x24e7000a  addiu       $a3, $a3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021cc) {
            ctx->pc = 0x2021A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021a0;
        }
    }
    ctx->pc = 0x2021D4u;
label_2021d4:
    // 0x2021d4: 0x1980000f  blez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x2021D4u;
    {
        const bool branch_taken_0x2021d4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x2021D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021D4u;
        // 0x2021d8: 0x2707bf70  addiu       $a3, $t8, -0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 4294950768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021d4) {
            ctx->pc = 0x202214u;
            goto label_202214;
        }
    }
    ctx->pc = 0x2021DCu;
    // 0x2021dc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2021dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2021e0:
    // 0x2021e0: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x2021e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2021e4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2021e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2021e8: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x2021e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2021ec: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x2021ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2021f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2021f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2021f4: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x2021f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2021f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2021fc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2021fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x202200: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x202200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202204: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x202204u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x202208: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x202208u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x20220c: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20220Cu;
    {
        const bool branch_taken_0x20220c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x202210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20220Cu;
        // 0x202210: 0x24e7000a  addiu       $a3, $a3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20220c) {
            ctx->pc = 0x2021E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021e0;
        }
    }
    ctx->pc = 0x202214u;
label_202214:
    // 0x202214: 0x19a0000f  blez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x202214u;
    {
        const bool branch_taken_0x202214 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x202218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202214u;
        // 0x202218: 0x2727c330  addiu       $a3, $t9, -0x3CD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), 4294951728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202214) {
            ctx->pc = 0x202254u;
            goto label_202254;
        }
    }
    ctx->pc = 0x20221Cu;
    // 0x20221c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x20221cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_202220:
    // 0x202220: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x202220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x202224: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x202224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x202228: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x202228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x20222c: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x20222cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x202230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202234: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x202234u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x202238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x202238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20223c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20223cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x202240: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x202240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202244: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x202244u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x202248: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x202248u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x20224c: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20224Cu;
    {
        const bool branch_taken_0x20224c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x202250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20224Cu;
        // 0x202250: 0x24e7000a  addiu       $a3, $a3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20224c) {
            ctx->pc = 0x202220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202220;
        }
    }
    ctx->pc = 0x202254u;
label_202254:
    // 0x202254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202258: 0xa3829ab4  sb          $v0, -0x654C($gp)
    ctx->pc = 0x202258u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941364), (uint8_t)GPR_U32(ctx, 2));
label_20225c:
    // 0x20225c: 0x8080804  j           func_202010
    ctx->pc = 0x20225Cu;
    ctx->pc = 0x202010u;
    textRestart_0x202010(rdram, ctx, runtime); return;
    ctx->pc = 0x202264u;
}

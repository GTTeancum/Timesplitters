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

// Function: lvGetGunComboNums
// Address: 0x227790 - 0x227960
void lvGetGunComboNums_0x227790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvGetGunComboNums_0x227790");
#endif

    switch (ctx->pc) {
        case 0x2277f0u: goto label_2277f0;
        case 0x227834u: goto label_227834;
        case 0x227850u: goto label_227850;
        case 0x227858u: goto label_227858;
        case 0x2278f8u: goto label_2278f8;
        case 0x227928u: goto label_227928;
        case 0x227930u: goto label_227930;
        default: break;
    }

    ctx->pc = 0x227790u;

    // 0x227790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x227794: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x227798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22779c: 0x2445c4a8  addiu       $a1, $v0, -0x3B58
    ctx->pc = 0x22779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952104));
    // 0x2277a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2277a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2277a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2277a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2277a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2277a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2277ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2277acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2277b0: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x2277b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2277b4: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2277B4u;
    {
        const bool branch_taken_0x2277b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B4u;
        // 0x2277b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277b4) {
            ctx->pc = 0x227874u;
            goto label_227874;
        }
    }
    ctx->pc = 0x2277BCu;
    // 0x2277bc: 0x8f859f54  lw          $a1, -0x60AC($gp)
    ctx->pc = 0x2277bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2277c0: 0x8f849f4c  lw          $a0, -0x60B4($gp)
    ctx->pc = 0x2277c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2277c4: 0x8f839f50  lw          $v1, -0x60B0($gp)
    ctx->pc = 0x2277c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942544)));
    // 0x2277c8: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x2277c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x2277cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2277ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2277d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2277d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2277d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2277D4u;
    {
        const bool branch_taken_0x2277d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2277D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277D4u;
        // 0x2277d8: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277d4) {
            ctx->pc = 0x227814u;
            goto label_227814;
        }
    }
    ctx->pc = 0x2277DCu;
    // 0x2277dc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2277dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2277e0: 0x2642cc60  addiu       $v0, $s2, -0x33A0
    ctx->pc = 0x2277e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954080));
    // 0x2277e4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2277e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2277e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2277ec: 0x0  nop
    ctx->pc = 0x2277ecu;
    // NOP
label_2277f0:
    // 0x2277f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2277f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2277f4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2277f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2277f8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2277f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2277fc: 0x0  nop
    ctx->pc = 0x2277fcu;
    // NOP
    // 0x227800: 0x0  nop
    ctx->pc = 0x227800u;
    // NOP
    // 0x227804: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x227804u;
    {
        const bool branch_taken_0x227804 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x227804) {
            ctx->pc = 0x2277F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2277f0;
        }
    }
    ctx->pc = 0x22780Cu;
    // 0x22780c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x22780Cu;
    {
        const bool branch_taken_0x22780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22780Cu;
        // 0x227810: 0x2642cc60  addiu       $v0, $s2, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22780c) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x227814u;
label_227814:
    // 0x227814: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x227814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x227818: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x227818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x22781c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22781Cu;
    {
        const bool branch_taken_0x22781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22781Cu;
        // 0x227820: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22781c) {
            ctx->pc = 0x22782Cu;
            goto label_22782c;
        }
    }
    ctx->pc = 0x227824u;
    // 0x227824: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x227824u;
    {
        const bool branch_taken_0x227824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227824u;
        // 0x227828: 0x2442424c  addiu       $v0, $v0, 0x424C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227824) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x22782Cu;
label_22782c:
    // 0x22782c: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x22782Cu;
    SET_GPR_U32(ctx, 31, 0x227834u);
    ctx->pc = 0x227830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22782Cu;
    // 0x227830: 0x8f849f70  lw          $a0, -0x6090($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B90u, 0x22782Cu, 0x227834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227834u;
label_227834:
    // 0x227834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227834u;
    {
        const bool branch_taken_0x227834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227834u;
        // 0x227838: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227834) {
            ctx->pc = 0x227844u;
            goto label_227844;
        }
    }
    ctx->pc = 0x22783Cu;
    // 0x22783c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22783Cu;
    {
        const bool branch_taken_0x22783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22783Cu;
        // 0x227840: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22783c) {
            ctx->pc = 0x227904u;
            goto label_227904;
        }
    }
    ctx->pc = 0x227844u;
label_227844:
    // 0x227844: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x227844u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x227848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22784c: 0x2651cc60  addiu       $s1, $s2, -0x33A0
    ctx->pc = 0x22784cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954080));
label_227850:
    // 0x227850: 0xc08cb52  jal         func_232D48
    ctx->pc = 0x227850u;
    SET_GPR_U32(ctx, 31, 0x227858u);
    ctx->pc = 0x227854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227850u;
    // 0x227854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D48u, 0x227850u, 0x227858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227858u;
label_227858:
    // 0x227858: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x227858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22785c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22785cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x227860: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x227860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x227864: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x227864u;
    {
        const bool branch_taken_0x227864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227864u;
        // 0x227868: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227864) {
            ctx->pc = 0x227850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227850;
        }
    }
    ctx->pc = 0x22786Cu;
    // 0x22786c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x22786Cu;
    {
        const bool branch_taken_0x22786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22786Cu;
        // 0x227870: 0x2642cc60  addiu       $v0, $s2, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22786c) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x227874u;
label_227874:
    // 0x227874: 0x5482001b  bnel        $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x227874u;
    {
        const bool branch_taken_0x227874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x227874) {
            ctx->pc = 0x227878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227874u;
            // 0x227878: 0x8ca20050  lw          $v0, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2278E4u;
            goto label_2278e4;
        }
    }
    ctx->pc = 0x22787Cu;
    // 0x22787c: 0x8f839f70  lw          $v1, -0x6090($gp)
    ctx->pc = 0x22787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942576)));
    // 0x227880: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x227880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227884: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x227884u;
    {
        const bool branch_taken_0x227884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227884u;
        // 0x227888: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227884) {
            ctx->pc = 0x2278D4u;
            goto label_2278d4;
        }
    }
    ctx->pc = 0x22788Cu;
    // 0x22788c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x22788cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x227890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227890u;
    {
        const bool branch_taken_0x227890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227890u;
        // 0x227894: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227890) {
            ctx->pc = 0x2278A8u;
            goto label_2278a8;
        }
    }
    ctx->pc = 0x227898u;
    // 0x227898: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227898u;
    {
        const bool branch_taken_0x227898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227898) {
            ctx->pc = 0x22789Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227898u;
            // 0x22789c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2278CCu;
            goto label_2278cc;
        }
    }
    ctx->pc = 0x2278A0u;
    // 0x2278a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2278A0u;
    {
        const bool branch_taken_0x2278a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278A0u;
        // 0x2278a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278a0) {
            ctx->pc = 0x2278DCu;
            goto label_2278dc;
        }
    }
    ctx->pc = 0x2278A8u;
label_2278a8:
    // 0x2278a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2278a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2278ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2278ACu;
    {
        const bool branch_taken_0x2278ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2278B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278ACu;
        // 0x2278b0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278ac) {
            ctx->pc = 0x2278C4u;
            goto label_2278c4;
        }
    }
    ctx->pc = 0x2278B4u;
    // 0x2278b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2278b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2278b8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2278B8u;
    {
        const bool branch_taken_0x2278b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2278BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278B8u;
        // 0x2278bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278b8) {
            ctx->pc = 0x2278DCu;
            goto label_2278dc;
        }
    }
    ctx->pc = 0x2278C0u;
    // 0x2278c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2278c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2278c4:
    // 0x2278c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2278C4u;
    {
        const bool branch_taken_0x2278c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278C4u;
        // 0x2278c8: 0x24424184  addiu       $v0, $v0, 0x4184 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278c4) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x2278CCu;
label_2278cc:
    // 0x2278cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2278CCu;
    {
        const bool branch_taken_0x2278cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278CCu;
        // 0x2278d0: 0x24424148  addiu       $v0, $v0, 0x4148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278cc) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x2278D4u;
label_2278d4:
    // 0x2278d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2278D4u;
    {
        const bool branch_taken_0x2278d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278D4u;
        // 0x2278d8: 0x24424120  addiu       $v0, $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278d4) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x2278DCu;
label_2278dc:
    // 0x2278dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2278DCu;
    {
        const bool branch_taken_0x2278dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278DCu;
        // 0x2278e0: 0x244241e8  addiu       $v0, $v0, 0x41E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278dc) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x2278E4u;
label_2278e4:
    // 0x2278e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2278e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2278e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2278E8u;
    {
        const bool branch_taken_0x2278e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278E8u;
        // 0x2278ec: 0x3c1201fc  lui         $s2, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278e8) {
            ctx->pc = 0x227920u;
            goto label_227920;
        }
    }
    ctx->pc = 0x2278F0u;
    // 0x2278f0: 0xc087c18  jal         func_21F060
    ctx->pc = 0x2278F0u;
    SET_GPR_U32(ctx, 31, 0x2278F8u);
    ctx->pc = 0x21F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F060u, 0x2278F0u, 0x2278F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278F8u;
label_2278f8:
    // 0x2278f8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2278fc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2278FCu;
    {
        const bool branch_taken_0x2278fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x227900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278FCu;
        // 0x227900: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278fc) {
            ctx->pc = 0x227918u;
            goto label_227918;
        }
    }
    ctx->pc = 0x227904u;
label_227904:
    // 0x227904: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x227904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x227908: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x227908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22790c: 0x244240f8  addiu       $v0, $v0, 0x40F8
    ctx->pc = 0x22790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16632));
    // 0x227910: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x227910u;
    {
        const bool branch_taken_0x227910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227910u;
        // 0x227914: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227910) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x227918u;
label_227918:
    // 0x227918: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x227918u;
    {
        const bool branch_taken_0x227918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227918u;
        // 0x22791c: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227918) {
            ctx->pc = 0x227948u;
            goto label_227948;
        }
    }
    ctx->pc = 0x227920u;
label_227920:
    // 0x227920: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227924: 0x2651cc60  addiu       $s1, $s2, -0x33A0
    ctx->pc = 0x227924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954080));
label_227928:
    // 0x227928: 0xc08cb52  jal         func_232D48
    ctx->pc = 0x227928u;
    SET_GPR_U32(ctx, 31, 0x227930u);
    ctx->pc = 0x22792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227928u;
    // 0x22792c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D48u, 0x227928u, 0x227930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227930u;
label_227930:
    // 0x227930: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x227934: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x227934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x227938: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x227938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22793c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22793Cu;
    {
        const bool branch_taken_0x22793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22793Cu;
        // 0x227940: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22793c) {
            ctx->pc = 0x227928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227928;
        }
    }
    ctx->pc = 0x227944u;
    // 0x227944: 0x2642cc60  addiu       $v0, $s2, -0x33A0
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954080));
label_227948:
    // 0x227948: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x227948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22794c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22794cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227950: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x227950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227958: 0x3e00008  jr          $ra
    ctx->pc = 0x227958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227958u;
        // 0x22795c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227960u;
}

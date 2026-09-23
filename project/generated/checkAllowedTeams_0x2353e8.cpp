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

// Function: checkAllowedTeams
// Address: 0x2353e8 - 0x235590
void checkAllowedTeams_0x2353e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkAllowedTeams_0x2353e8");
#endif

    switch (ctx->pc) {
        case 0x23541cu: goto label_23541c;
        case 0x2354c8u: goto label_2354c8;
        case 0x2354d4u: goto label_2354d4;
        case 0x235520u: goto label_235520;
        case 0x235528u: goto label_235528;
        default: break;
    }

    ctx->pc = 0x2353e8u;

    // 0x2353e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2353e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2353ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2353ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2353f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2353f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2353f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2353f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2353f8: 0x3c1001fc  lui         $s0, 0x1FC
    ctx->pc = 0x2353f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)508 << 16));
    // 0x2353fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2353fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x235400: 0x26101234  addiu       $s0, $s0, 0x1234
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4660));
    // 0x235404: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x235404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x235408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23540c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x235410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x235414: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x235414u;
    SET_GPR_U32(ctx, 31, 0x23541Cu);
    ctx->pc = 0x235418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235414u;
    // 0x235418: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x235414u, 0x23541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23541Cu;
label_23541c:
    // 0x23541c: 0x2610ffc4  addiu       $s0, $s0, -0x3C
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    // 0x235420: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x235420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x235424: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x235424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x235428: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x235428u;
    {
        const bool branch_taken_0x235428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235428u;
        // 0x23542c: 0x3c1401fc  lui         $s4, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235428) {
            ctx->pc = 0x235550u;
            goto label_235550;
        }
    }
    ctx->pc = 0x235430u;
    // 0x235430: 0x8f82a0d0  lw          $v0, -0x5F30($gp)
    ctx->pc = 0x235430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x235434: 0x3c030132  lui         $v1, 0x132
    ctx->pc = 0x235434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)306 << 16));
    // 0x235438: 0x34634626  ori         $v1, $v1, 0x4626
    ctx->pc = 0x235438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17958);
    // 0x23543c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235440: 0x54830044  bnel        $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x235440u;
    {
        const bool branch_taken_0x235440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x235440) {
            ctx->pc = 0x235444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235440u;
            // 0x235444: 0x268411f8  addiu       $a0, $s4, 0x11F8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235554u;
            goto label_235554;
        }
    }
    ctx->pc = 0x235448u;
    // 0x235448: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x235448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x23544c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x235450: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235450u;
    {
        const bool branch_taken_0x235450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235450u;
        // 0x235454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235450) {
            ctx->pc = 0x235460u;
            goto label_235460;
        }
    }
    ctx->pc = 0x235458u;
    // 0x235458: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235458u;
    {
        const bool branch_taken_0x235458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235458u;
        // 0x23545c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235458) {
            ctx->pc = 0x235484u;
            goto label_235484;
        }
    }
    ctx->pc = 0x235460u;
label_235460:
    // 0x235460: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x235460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x235464: 0x8c433838  lw          $v1, 0x3838($v0)
    ctx->pc = 0x235464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353838u));
    // 0x235468: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x235468u;
    {
        const bool branch_taken_0x235468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235468u;
        // 0x23546c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235468) {
            ctx->pc = 0x23547Cu;
            goto label_23547c;
        }
    }
    ctx->pc = 0x235470u;
    // 0x235470: 0x8c433888  lw          $v1, 0x3888($v0)
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14472)));
    // 0x235474: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x235474u;
    {
        const bool branch_taken_0x235474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235474u;
        // 0x235478: 0x3c1401fc  lui         $s4, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235474) {
            ctx->pc = 0x2354B0u;
            goto label_2354b0;
        }
    }
    ctx->pc = 0x23547Cu;
label_23547c:
    // 0x23547c: 0x3c1401fc  lui         $s4, 0x1FC
    ctx->pc = 0x23547cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)508 << 16));
    // 0x235480: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x235480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235484:
    // 0x235484: 0x268311f8  addiu       $v1, $s4, 0x11F8
    ctx->pc = 0x235484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x235488: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x235488u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x23548c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x235490: 0x2664c3a8  addiu       $a0, $s3, -0x3C58
    ctx->pc = 0x235490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951848));
    // 0x235494: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x235494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x235498: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x235498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23549c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2354a0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2354A0u;
    {
        const bool branch_taken_0x2354a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354A0u;
        // 0x2354a4: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354a0) {
            ctx->pc = 0x2354F4u;
            goto label_2354f4;
        }
    }
    ctx->pc = 0x2354A8u;
    // 0x2354a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2354A8u;
    {
        const bool branch_taken_0x2354a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354A8u;
        // 0x2354ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354a8) {
            ctx->pc = 0x2354BCu;
            goto label_2354bc;
        }
    }
    ctx->pc = 0x2354B0u;
label_2354b0:
    // 0x2354b0: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2354b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x2354b4: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x2354b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x2354b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2354b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2354bc:
    // 0x2354bc: 0x24521234  addiu       $s2, $v0, 0x1234
    ctx->pc = 0x2354bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4660));
    // 0x2354c0: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x2354c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2354c4: 0x0  nop
    ctx->pc = 0x2354c4u;
    // NOP
label_2354c8:
    // 0x2354c8: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
    // 0x2354cc: 0xc094dec  jal         func_2537B0
    ctx->pc = 0x2354CCu;
    SET_GPR_U32(ctx, 31, 0x2354D4u);
    ctx->pc = 0x2354D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354CCu;
    // 0x2354d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2537B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2537B0u, 0x2354CCu, 0x2354D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354D4u;
label_2354d4:
    // 0x2354d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2354D4u;
    {
        const bool branch_taken_0x2354d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2354d4) {
            ctx->pc = 0x2354D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2354D4u;
            // 0x2354d8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2354E8u;
            goto label_2354e8;
        }
    }
    ctx->pc = 0x2354DCu;
    // 0x2354dc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2354dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2354e0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2354e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2354e4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2354e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2354e8:
    // 0x2354e8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2354e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2354ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2354ECu;
    {
        const bool branch_taken_0x2354ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2354F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354ECu;
        // 0x2354f0: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354ec) {
            ctx->pc = 0x2354C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2354c8;
        }
    }
    ctx->pc = 0x2354F4u;
label_2354f4:
    // 0x2354f4: 0x268511f8  addiu       $a1, $s4, 0x11F8
    ctx->pc = 0x2354f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    // 0x2354f8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2354f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2354fc: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x235500: 0x2664c3a8  addiu       $a0, $s3, -0x3C58
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951848));
    // 0x235504: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x235504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x235508: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x235508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23550c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x235510: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x235510u;
    {
        const bool branch_taken_0x235510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235510u;
        // 0x235514: 0x24b1003c  addiu       $s1, $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235510) {
            ctx->pc = 0x235550u;
            goto label_235550;
        }
    }
    ctx->pc = 0x235518u;
    // 0x235518: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x235518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23551c: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_235520:
    // 0x235520: 0xc094dec  jal         func_2537B0
    ctx->pc = 0x235520u;
    SET_GPR_U32(ctx, 31, 0x235528u);
    ctx->pc = 0x235524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235520u;
    // 0x235524: 0x26050005  addiu       $a1, $s0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2537B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2537B0u, 0x235520u, 0x235528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235528u;
label_235528:
    // 0x235528: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x235528u;
    {
        const bool branch_taken_0x235528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235528) {
            ctx->pc = 0x23552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235528u;
            // 0x23552c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23553Cu;
            goto label_23553c;
        }
    }
    ctx->pc = 0x235530u;
    // 0x235530: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x235534: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x235534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x235538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x235538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23553c:
    // 0x23553c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x23553cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x235540: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x235540u;
    {
        const bool branch_taken_0x235540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235540u;
        // 0x235544: 0x8f84a0d0  lw          $a0, -0x5F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235540) {
            ctx->pc = 0x235520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235520;
        }
    }
    ctx->pc = 0x235548u;
    // 0x235548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235548u;
    {
        const bool branch_taken_0x235548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235548u;
        // 0x23554c: 0x268411f8  addiu       $a0, $s4, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235548) {
            ctx->pc = 0x235554u;
            goto label_235554;
        }
    }
    ctx->pc = 0x235550u;
label_235550:
    // 0x235550: 0x268411f8  addiu       $a0, $s4, 0x11F8
    ctx->pc = 0x235550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
label_235554:
    // 0x235554: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x235554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235558: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x235558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23555c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23555Cu;
    {
        const bool branch_taken_0x23555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23555Cu;
        // 0x235560: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23555c) {
            ctx->pc = 0x235574u;
            goto label_235574;
        }
    }
    ctx->pc = 0x235564u;
    // 0x235564: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x235564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x235568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23556c: 0xa082003d  sb          $v0, 0x3D($a0)
    ctx->pc = 0x23556cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 2));
    // 0x235570: 0xa082003c  sb          $v0, 0x3C($a0)
    ctx->pc = 0x235570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 2));
label_235574:
    // 0x235574: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x235574u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235578: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x235578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23557c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235580: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235588: 0x3e00008  jr          $ra
    ctx->pc = 0x235588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235588u;
        // 0x23558c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235590u;
}

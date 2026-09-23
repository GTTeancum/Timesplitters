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

// Function: controllerTick
// Address: 0x2031a8 - 0x2035a8
void controllerTick_0x2031a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("controllerTick_0x2031a8");
#endif

    switch (ctx->pc) {
        case 0x2031fcu: goto label_2031fc;
        case 0x2032b0u: goto label_2032b0;
        case 0x2032ccu: goto label_2032cc;
        case 0x20331cu: goto label_20331c;
        case 0x203340u: goto label_203340;
        case 0x203360u: goto label_203360;
        case 0x203378u: goto label_203378;
        case 0x2033a0u: goto label_2033a0;
        case 0x2033e0u: goto label_2033e0;
        case 0x203408u: goto label_203408;
        case 0x203420u: goto label_203420;
        case 0x203460u: goto label_203460;
        case 0x2034f4u: goto label_2034f4;
        default: break;
    }

    ctx->pc = 0x2031a8u;

    // 0x2031a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2031ac: 0x27829ad0  addiu       $v0, $gp, -0x6530
    ctx->pc = 0x2031acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941392));
    // 0x2031b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2031b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2031b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2031b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2031b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2031b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2031bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2031c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2031c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2031c4: 0x8e060100  lw          $a2, 0x100($s0)
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2031c8: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2031cc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2031d0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2031d4: 0xae04010c  sw          $a0, 0x10C($s0)
    ctx->pc = 0x2031d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 4));
    // 0x2031d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2031dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2031e0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2031e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2031e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2031E4u;
    {
        const bool branch_taken_0x2031e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2031e4) {
            ctx->pc = 0x2031F4u;
            goto label_2031f4;
        }
    }
    ctx->pc = 0x2031ECu;
    // 0x2031ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2031ECu;
    {
        const bool branch_taken_0x2031ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031ECu;
        // 0x2031f0: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031ec) {
            ctx->pc = 0x203200u;
            goto label_203200;
        }
    }
    ctx->pc = 0x2031F4u;
label_2031f4:
    // 0x2031f4: 0xc0b53a8  jal         func_2D4EA0
    ctx->pc = 0x2031F4u;
    SET_GPR_U32(ctx, 31, 0x2031FCu);
    ctx->pc = 0x2031F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2031F4u;
    // 0x2031f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4EA0u, 0x2031F4u, 0x2031FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031FCu;
label_2031fc:
    // 0x2031fc: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x2031fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_203200:
    // 0x203200: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x203204: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x203204u;
    {
        const bool branch_taken_0x203204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203204) {
            ctx->pc = 0x203208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203204u;
            // 0x203208: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203224u;
            goto label_203224;
        }
    }
    ctx->pc = 0x20320Cu;
    // 0x20320c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x20320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x203210: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203210u;
    {
        const bool branch_taken_0x203210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203210u;
        // 0x203214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203210) {
            ctx->pc = 0x20321Cu;
            goto label_20321c;
        }
    }
    ctx->pc = 0x203218u;
    // 0x203218: 0xaf829ad8  sw          $v0, -0x6528($gp)
    ctx->pc = 0x203218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941400), GPR_U32(ctx, 2));
label_20321c:
    // 0x20321c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x20321cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x203220: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x203220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_203224:
    // 0x203224: 0x24120046  addiu       $s2, $zero, 0x46
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x203228: 0x10720058  beq         $v1, $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x203228u;
    {
        const bool branch_taken_0x203228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x20322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203228u;
        // 0x20322c: 0x28620047  slti        $v0, $v1, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)71) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203228) {
            ctx->pc = 0x20338Cu;
            goto label_20338c;
        }
    }
    ctx->pc = 0x203230u;
    // 0x203230: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x203230u;
    {
        const bool branch_taken_0x203230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203230u;
        // 0x203234: 0x24110029  addiu       $s1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203230) {
            ctx->pc = 0x203270u;
            goto label_203270;
        }
    }
    ctx->pc = 0x203238u;
    // 0x203238: 0x1071003c  beq         $v1, $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x203238u;
    {
        const bool branch_taken_0x203238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x20323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203238u;
        // 0x20323c: 0x2862002a  slti        $v0, $v1, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)42) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203238) {
            ctx->pc = 0x20332Cu;
            goto label_20332c;
        }
    }
    ctx->pc = 0x203240u;
    // 0x203240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203240u;
    {
        const bool branch_taken_0x203240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203240u;
        // 0x203244: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203240) {
            ctx->pc = 0x203260u;
            goto label_203260;
        }
    }
    ctx->pc = 0x203248u;
    // 0x203248: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x203248u;
    {
        const bool branch_taken_0x203248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203248u;
        // 0x20324c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203248) {
            ctx->pc = 0x203284u;
            goto label_203284;
        }
    }
    ctx->pc = 0x203250u;
    // 0x203250: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x203250u;
    {
        const bool branch_taken_0x203250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203250u;
        // 0x203254: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203250) {
            ctx->pc = 0x203308u;
            goto label_203308;
        }
    }
    ctx->pc = 0x203258u;
    // 0x203258: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x203258u;
    {
        const bool branch_taken_0x203258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203258) {
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x203260u;
label_203260:
    // 0x203260: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x203260u;
    {
        const bool branch_taken_0x203260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203260u;
        // 0x203264: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203260) {
            ctx->pc = 0x203354u;
            goto label_203354;
        }
    }
    ctx->pc = 0x203268u;
    // 0x203268: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x203268u;
    {
        const bool branch_taken_0x203268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203268) {
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x203270u;
label_203270:
    // 0x203270: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x203274: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x203274u;
    {
        const bool branch_taken_0x203274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203274u;
        // 0x203278: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203274) {
            ctx->pc = 0x2033FCu;
            goto label_2033fc;
        }
    }
    ctx->pc = 0x20327Cu;
    // 0x20327c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x20327Cu;
    {
        const bool branch_taken_0x20327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20327c) {
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x203284u;
label_203284:
    // 0x203284: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x203288: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x203288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20328c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20328Cu;
    {
        const bool branch_taken_0x20328c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x203290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20328Cu;
        // 0x203290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20328c) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203294u;
    // 0x203294: 0x1482006a  bne         $a0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x203294u;
    {
        const bool branch_taken_0x203294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x203298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203294u;
        // 0x203298: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203294) {
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x20329Cu;
label_20329c:
    // 0x20329c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x20329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2032a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2032a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2032a4: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2032a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2032a8: 0xc0b54a0  jal         func_2D5280
    ctx->pc = 0x2032A8u;
    SET_GPR_U32(ctx, 31, 0x2032B0u);
    ctx->pc = 0x2032ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032A8u;
    // 0x2032ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5280u, 0x2032A8u, 0x2032B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032B0u;
label_2032b0:
    // 0x2032b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2032b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032b4: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2032B4u;
    {
        const bool branch_taken_0x2032b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032B4u;
        // 0x2032b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032b4) {
            ctx->pc = 0x203438u;
            goto label_203438;
        }
    }
    ctx->pc = 0x2032BCu;
    // 0x2032bc: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2032c0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2032c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2032c4: 0xc0b54a0  jal         func_2D5280
    ctx->pc = 0x2032C4u;
    SET_GPR_U32(ctx, 31, 0x2032CCu);
    ctx->pc = 0x2032C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032C4u;
    // 0x2032c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5280u, 0x2032C4u, 0x2032CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032CCu;
label_2032cc:
    // 0x2032cc: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x2032ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2032d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2032d4: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x2032d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2032d8: 0x12240005  beq         $s1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2032D8u;
    {
        const bool branch_taken_0x2032d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2032DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D8u;
        // 0x2032dc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032d8) {
            ctx->pc = 0x2032F0u;
            goto label_2032f0;
        }
    }
    ctx->pc = 0x2032E0u;
    // 0x2032e0: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2032E0u;
    {
        const bool branch_taken_0x2032e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2032e0) {
            ctx->pc = 0x2032E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2032E0u;
            // 0x2032e4: 0xae120110  sw          $s2, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203300u;
            goto label_203300;
        }
    }
    ctx->pc = 0x2032E8u;
    // 0x2032e8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2032E8u;
    {
        const bool branch_taken_0x2032e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032E8u;
        // 0x2032ec: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032e8) {
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x2032F0u;
label_2032f0:
    // 0x2032f0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2032f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2032f4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2032f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2032f8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2032F8u;
    {
        const bool branch_taken_0x2032f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032F8u;
        // 0x2032fc: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032f8) {
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x203300u;
label_203300:
    // 0x203300: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x203300u;
    {
        const bool branch_taken_0x203300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203300u;
        // 0x203304: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203300) {
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x203308u;
label_203308:
    // 0x203308: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x203308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x20330c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203310: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x203310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x203314: 0xc0b54a0  jal         func_2D5280
    ctx->pc = 0x203314u;
    SET_GPR_U32(ctx, 31, 0x20331Cu);
    ctx->pc = 0x203318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203314u;
    // 0x203318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5280u, 0x203314u, 0x20331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20331Cu;
label_20331c:
    // 0x20331c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x20331Cu;
    {
        const bool branch_taken_0x20331c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20331c) {
            ctx->pc = 0x203320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20331Cu;
            // 0x203320: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203384u;
            goto label_203384;
        }
    }
    ctx->pc = 0x203324u;
    // 0x203324: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x203324u;
    {
        const bool branch_taken_0x203324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203324u;
        // 0x203328: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203324) {
            ctx->pc = 0x2033ECu;
            goto label_2033ec;
        }
    }
    ctx->pc = 0x20332Cu;
label_20332c:
    // 0x20332c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x20332cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203334: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x203334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x203338: 0xc0b54e2  jal         func_2D5388
    ctx->pc = 0x203338u;
    SET_GPR_U32(ctx, 31, 0x203340u);
    ctx->pc = 0x20333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203338u;
    // 0x20333c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5388u, 0x203338u, 0x203340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203340u;
label_203340:
    // 0x203340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203344: 0x5443003d  bnel        $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x203344u;
    {
        const bool branch_taken_0x203344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x203344) {
            ctx->pc = 0x203348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203344u;
            // 0x203348: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x20334Cu;
    // 0x20334c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x20334Cu;
    {
        const bool branch_taken_0x20334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20334Cu;
        // 0x203350: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20334c) {
            ctx->pc = 0x2033ECu;
            goto label_2033ec;
        }
    }
    ctx->pc = 0x203354u;
label_203354:
    // 0x203354: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x203354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203358: 0xc0b5402  jal         func_2D5008
    ctx->pc = 0x203358u;
    SET_GPR_U32(ctx, 31, 0x203360u);
    ctx->pc = 0x20335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203358u;
    // 0x20335c: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5008u, 0x203358u, 0x203360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203360u;
label_203360:
    // 0x203360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203364: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x203364u;
    {
        const bool branch_taken_0x203364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x203364) {
            ctx->pc = 0x203368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203364u;
            // 0x203368: 0xae110110  sw          $s1, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x20336Cu;
label_20336c:
    // 0x20336c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203370: 0xc0b5402  jal         func_2D5008
    ctx->pc = 0x203370u;
    SET_GPR_U32(ctx, 31, 0x203378u);
    ctx->pc = 0x203374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203370u;
    // 0x203374: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5008u, 0x203370u, 0x203378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203378u;
label_203378:
    // 0x203378: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x203378u;
    {
        const bool branch_taken_0x203378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203378) {
            ctx->pc = 0x20337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203378u;
            // 0x20337c: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x203380u;
    // 0x203380: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x203380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_203384:
    // 0x203384: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x203384u;
    {
        const bool branch_taken_0x203384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203384u;
        // 0x203388: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203384) {
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x20338Cu;
label_20338c:
    // 0x20338c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203390: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203394: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x203398: 0xc0b542a  jal         func_2D50A8
    ctx->pc = 0x203398u;
    SET_GPR_U32(ctx, 31, 0x2033A0u);
    ctx->pc = 0x20339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203398u;
    // 0x20339c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D50A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D50A8u, 0x203398u, 0x2033A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033A0u;
label_2033a0:
    // 0x2033a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2033A0u;
    {
        const bool branch_taken_0x2033a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a0) {
            ctx->pc = 0x2033B4u;
            goto label_2033b4;
        }
    }
    ctx->pc = 0x2033A8u;
    // 0x2033a8: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2033ac: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x2033acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x2033b0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2033b4:
    // 0x2033b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2033b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2033b8: 0xa2000146  sb          $zero, 0x146($s0)
    ctx->pc = 0x2033b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 326), (uint8_t)GPR_U32(ctx, 0));
    // 0x2033bc: 0x26060146  addiu       $a2, $s0, 0x146
    ctx->pc = 0x2033bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 326));
    // 0x2033c0: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x2033c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2033c4: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2033c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2033c8: 0xa2030147  sb          $v1, 0x147($s0)
    ctx->pc = 0x2033c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 327), (uint8_t)GPR_U32(ctx, 3));
    // 0x2033cc: 0xa202014b  sb          $v0, 0x14B($s0)
    ctx->pc = 0x2033ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 331), (uint8_t)GPR_U32(ctx, 2));
    // 0x2033d0: 0xa2020148  sb          $v0, 0x148($s0)
    ctx->pc = 0x2033d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 2));
    // 0x2033d4: 0xa2020149  sb          $v0, 0x149($s0)
    ctx->pc = 0x2033d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 329), (uint8_t)GPR_U32(ctx, 2));
    // 0x2033d8: 0xc0b5534  jal         func_2D54D0
    ctx->pc = 0x2033D8u;
    SET_GPR_U32(ctx, 31, 0x2033E0u);
    ctx->pc = 0x2033DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033D8u;
    // 0x2033dc: 0xa202014a  sb          $v0, 0x14A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 330), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D54D0u, 0x2033D8u, 0x2033E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033E0u;
label_2033e0:
    // 0x2033e0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2033E0u;
    {
        const bool branch_taken_0x2033e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2033e0) {
            ctx->pc = 0x2033E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2033E0u;
            // 0x2033e4: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x2033E8u;
    // 0x2033e8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2033ec:
    // 0x2033ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2033ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2033f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2033f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2033F4u;
    {
        const bool branch_taken_0x2033f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033F4u;
        // 0x2033f8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033f4) {
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x2033FCu;
label_2033fc:
    // 0x2033fc: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203400: 0xc0b5402  jal         func_2D5008
    ctx->pc = 0x203400u;
    SET_GPR_U32(ctx, 31, 0x203408u);
    ctx->pc = 0x203404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203400u;
    // 0x203404: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5008u, 0x203400u, 0x203408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203408u;
label_203408:
    // 0x203408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20340c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x20340Cu;
    {
        const bool branch_taken_0x20340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20340c) {
            ctx->pc = 0x203410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20340Cu;
            // 0x203410: 0xae120110  sw          $s2, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203414u;
            goto label_203414;
        }
    }
    ctx->pc = 0x203414u;
label_203414:
    // 0x203414: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x203414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203418: 0xc0b5402  jal         func_2D5008
    ctx->pc = 0x203418u;
    SET_GPR_U32(ctx, 31, 0x203420u);
    ctx->pc = 0x20341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203418u;
    // 0x20341c: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5008u, 0x203418u, 0x203420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203420u;
label_203420:
    // 0x203420: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x203420u;
    {
        const bool branch_taken_0x203420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203420) {
            ctx->pc = 0x203424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203420u;
            // 0x203424: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x203428u;
    // 0x203428: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x203428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x20342c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x20342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x203430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203430u;
    {
        const bool branch_taken_0x203430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203430) {
            ctx->pc = 0x203440u;
            goto label_203440;
        }
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x203438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_20343c:
    // 0x20343c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_203440:
    // 0x203440: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x203440u;
    {
        const bool branch_taken_0x203440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203440u;
        // 0x203444: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203440) {
            ctx->pc = 0x203574u;
            goto label_203574;
        }
    }
    ctx->pc = 0x203448u;
    // 0x203448: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x203448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x20344c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20344cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203450: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x203450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x203454: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x203458: 0xc0b5384  jal         func_2D4E10
    ctx->pc = 0x203458u;
    SET_GPR_U32(ctx, 31, 0x203460u);
    ctx->pc = 0x20345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203458u;
    // 0x20345c: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4E10u, 0x203458u, 0x203460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203460u;
label_203460:
    // 0x203460: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203460u;
    {
        const bool branch_taken_0x203460 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203460u;
        // 0x203464: 0x93a20002  lbu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203460) {
            ctx->pc = 0x2034FCu;
            goto label_2034fc;
        }
    }
    ctx->pc = 0x203468u;
    // 0x203468: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x203468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x20346c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x20346cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x203470: 0x93a60006  lbu         $a2, 0x6($sp)
    ctx->pc = 0x203470u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x203474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x203474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x203478: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x203478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x20347c: 0x93a50004  lbu         $a1, 0x4($sp)
    ctx->pc = 0x20347cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x203480: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x203480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x203484: 0x93a30005  lbu         $v1, 0x5($sp)
    ctx->pc = 0x203484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x203488: 0x93a80001  lbu         $t0, 0x1($sp)
    ctx->pc = 0x203488u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x20348c: 0x8e070118  lw          $a3, 0x118($s0)
    ctx->pc = 0x20348cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x203490: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x203490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x203494: 0xae06012c  sw          $a2, 0x12C($s0)
    ctx->pc = 0x203494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 6));
    // 0x203498: 0xae040134  sw          $a0, 0x134($s0)
    ctx->pc = 0x203498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 4));
    // 0x20349c: 0xae050130  sw          $a1, 0x130($s0)
    ctx->pc = 0x20349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 5));
    // 0x2034a0: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x2034a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
    // 0x2034a4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2034A4u;
    {
        const bool branch_taken_0x2034a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034A4u;
        // 0x2034a8: 0xae080114  sw          $t0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034a4) {
            ctx->pc = 0x2034BCu;
            goto label_2034bc;
        }
    }
    ctx->pc = 0x2034ACu;
    // 0x2034ac: 0x51070004  beql        $t0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2034ACu;
    {
        const bool branch_taken_0x2034ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x2034ac) {
            ctx->pc = 0x2034B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2034ACu;
            // 0x2034b0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2034C0u;
            goto label_2034c0;
        }
    }
    ctx->pc = 0x2034B4u;
    // 0x2034b4: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2034b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2034b8: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2034b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_2034bc:
    // 0x2034bc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2034bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2034c0:
    // 0x2034c0: 0x92030140  lbu         $v1, 0x140($s0)
    ctx->pc = 0x2034c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2034c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2034C4u;
    {
        const bool branch_taken_0x2034c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034C4u;
        // 0x2034c8: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034c4) {
            ctx->pc = 0x2034D4u;
            goto label_2034d4;
        }
    }
    ctx->pc = 0x2034CCu;
    // 0x2034cc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2034ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2034d0: 0xa2020140  sb          $v0, 0x140($s0)
    ctx->pc = 0x2034d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 320), (uint8_t)GPR_U32(ctx, 2));
label_2034d4:
    // 0x2034d4: 0x92020141  lbu         $v0, 0x141($s0)
    ctx->pc = 0x2034d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 321)));
    // 0x2034d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2034D8u;
    {
        const bool branch_taken_0x2034d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034D8u;
        // 0x2034dc: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034d8) {
            ctx->pc = 0x2034E4u;
            goto label_2034e4;
        }
    }
    ctx->pc = 0x2034E0u;
    // 0x2034e0: 0xa2020141  sb          $v0, 0x141($s0)
    ctx->pc = 0x2034e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 321), (uint8_t)GPR_U32(ctx, 2));
label_2034e4:
    // 0x2034e4: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x2034e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2034e8: 0x26060140  addiu       $a2, $s0, 0x140
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2034ec: 0xc0b550e  jal         func_2D5438
    ctx->pc = 0x2034ECu;
    SET_GPR_U32(ctx, 31, 0x2034F4u);
    ctx->pc = 0x2034F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034ECu;
    // 0x2034f0: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5438u, 0x2034ECu, 0x2034F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034F4u;
label_2034f4:
    // 0x2034f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2034F4u;
    {
        const bool branch_taken_0x2034f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034F4u;
        // 0x2034f8: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034f4) {
            ctx->pc = 0x203504u;
            goto label_203504;
        }
    }
    ctx->pc = 0x2034FCu;
label_2034fc:
    // 0x2034fc: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2034fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x203500: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_203504:
    // 0x203504: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x203508: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x203508u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x20350c: 0x22827  nor         $a1, $zero, $v0
    ctx->pc = 0x20350cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x203510: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x203510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x203514: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x203514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x203518: 0x3044f0f0  andi        $a0, $v0, 0xF0F0
    ctx->pc = 0x203518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61680);
    // 0x20351c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x20351cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x203520: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x203520u;
    {
        const bool branch_taken_0x203520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203520u;
        // 0x203524: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203520) {
            ctx->pc = 0x203564u;
            goto label_203564;
        }
    }
    ctx->pc = 0x203528u;
    // 0x203528: 0x8f849ac8  lw          $a0, -0x6538($gp)
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941384)));
    // 0x20352c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x203530: 0x96050120  lhu         $a1, 0x120($s0)
    ctx->pc = 0x203530u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x203534: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x203534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x203538: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x203538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20353c: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x20353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x203540: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x203540u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x203544: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x203544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x203548: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x203548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20354c: 0x30a5f0ff  andi        $a1, $a1, 0xF0FF
    ctx->pc = 0x20354cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61695);
    // 0x203550: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x203550u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x203554: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x203554u;
    {
        const bool branch_taken_0x203554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x203554) {
            ctx->pc = 0x203558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203554u;
            // 0x203558: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20355Cu;
            goto label_20355c;
        }
    }
    ctx->pc = 0x20355Cu;
label_20355c:
    // 0x20355c: 0x3810  mfhi        $a3
    ctx->pc = 0x20355cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x203560: 0xaf879ac8  sw          $a3, -0x6538($gp)
    ctx->pc = 0x203560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941384), GPR_U32(ctx, 7));
label_203564:
    // 0x203564: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x203564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x203568: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x203568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x20356c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20356Cu;
    {
        const bool branch_taken_0x20356c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20356Cu;
        // 0x203570: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20356c) {
            ctx->pc = 0x203590u;
            goto label_203590;
        }
    }
    ctx->pc = 0x203574u;
label_203574:
    // 0x203574: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x203574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x203578: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x203578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x20357c: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x20357cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x203580: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x203580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x203584: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x203584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x203588: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x203588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x20358c: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x20358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
label_203590:
    // 0x203590: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x203590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203594: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x203594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203598: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x203598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20359c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20359cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2035a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2035A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2035A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035A0u;
        // 0x2035a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2035A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2035A8u;
}

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

// Function: propTickAfter
// Address: 0x26f9e8 - 0x26fc20
void propTickAfter_0x26f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propTickAfter_0x26f9e8");
#endif

    switch (ctx->pc) {
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        case 0x26fae0u: goto label_26fae0;
        case 0x26fae4u: goto label_26fae4;
        case 0x26fae8u: goto label_26fae8;
        case 0x26faecu: goto label_26faec;
        case 0x26faf0u: goto label_26faf0;
        case 0x26faf4u: goto label_26faf4;
        case 0x26faf8u: goto label_26faf8;
        case 0x26fafcu: goto label_26fafc;
        case 0x26fb00u: goto label_26fb00;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb10u: goto label_26fb10;
        case 0x26fb14u: goto label_26fb14;
        case 0x26fb18u: goto label_26fb18;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb20u: goto label_26fb20;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb28u: goto label_26fb28;
        case 0x26fb2cu: goto label_26fb2c;
        case 0x26fb30u: goto label_26fb30;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb38u: goto label_26fb38;
        case 0x26fb3cu: goto label_26fb3c;
        case 0x26fb40u: goto label_26fb40;
        case 0x26fb44u: goto label_26fb44;
        case 0x26fb48u: goto label_26fb48;
        case 0x26fb4cu: goto label_26fb4c;
        case 0x26fb50u: goto label_26fb50;
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb5cu: goto label_26fb5c;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb64u: goto label_26fb64;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb6cu: goto label_26fb6c;
        case 0x26fb70u: goto label_26fb70;
        case 0x26fb74u: goto label_26fb74;
        case 0x26fb78u: goto label_26fb78;
        case 0x26fb7cu: goto label_26fb7c;
        case 0x26fb80u: goto label_26fb80;
        case 0x26fb84u: goto label_26fb84;
        case 0x26fb88u: goto label_26fb88;
        case 0x26fb8cu: goto label_26fb8c;
        case 0x26fb90u: goto label_26fb90;
        case 0x26fb94u: goto label_26fb94;
        case 0x26fb98u: goto label_26fb98;
        case 0x26fb9cu: goto label_26fb9c;
        case 0x26fba0u: goto label_26fba0;
        case 0x26fba4u: goto label_26fba4;
        case 0x26fba8u: goto label_26fba8;
        case 0x26fbacu: goto label_26fbac;
        case 0x26fbb0u: goto label_26fbb0;
        case 0x26fbb4u: goto label_26fbb4;
        case 0x26fbb8u: goto label_26fbb8;
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbc0u: goto label_26fbc0;
        case 0x26fbc4u: goto label_26fbc4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbccu: goto label_26fbcc;
        case 0x26fbd0u: goto label_26fbd0;
        case 0x26fbd4u: goto label_26fbd4;
        case 0x26fbd8u: goto label_26fbd8;
        case 0x26fbdcu: goto label_26fbdc;
        case 0x26fbe0u: goto label_26fbe0;
        case 0x26fbe4u: goto label_26fbe4;
        case 0x26fbe8u: goto label_26fbe8;
        case 0x26fbecu: goto label_26fbec;
        case 0x26fbf0u: goto label_26fbf0;
        case 0x26fbf4u: goto label_26fbf4;
        case 0x26fbf8u: goto label_26fbf8;
        case 0x26fbfcu: goto label_26fbfc;
        case 0x26fc00u: goto label_26fc00;
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc08u: goto label_26fc08;
        case 0x26fc0cu: goto label_26fc0c;
        case 0x26fc10u: goto label_26fc10;
        case 0x26fc14u: goto label_26fc14;
        case 0x26fc18u: goto label_26fc18;
        case 0x26fc1cu: goto label_26fc1c;
        default: break;
    }

    ctx->pc = 0x26f9e8u;

label_26f9e8:
    // 0x26f9e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26f9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26f9ec:
    // 0x26f9ec: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x26f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_26f9f0:
    // 0x26f9f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26f9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_26f9f4:
    // 0x26f9f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_26f9f8:
    // 0x26f9f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26f9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f9fc:
    // 0x26f9fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26f9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_26fa00:
    // 0x26fa00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26fa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_26fa04:
    // 0x26fa04: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_26fa08:
    // 0x26fa08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26fa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26fa0c:
    // 0x26fa0c: 0x18800039  blez        $a0, . + 4 + (0x39 << 2)
label_26fa10:
    if (ctx->pc == 0x26FA10u) {
        ctx->pc = 0x26FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA0Cu;
        // 0x26fa10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA14u;
        goto label_26fa14;
    }
    ctx->pc = 0x26FA0Cu;
    {
        const bool branch_taken_0x26fa0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA0Cu;
        // 0x26fa10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa0c) {
            ctx->pc = 0x26FAF4u;
            goto label_26faf4;
        }
    }
    ctx->pc = 0x26FA14u;
label_26fa14:
    // 0x26fa14: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x26fa14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_26fa18:
    // 0x26fa18: 0x3c150f00  lui         $s5, 0xF00
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3840 << 16));
label_26fa1c:
    // 0x26fa1c: 0x36520100  ori         $s2, $s2, 0x100
    ctx->pc = 0x26fa1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)256);
label_26fa20:
    // 0x26fa20: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x26fa20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26fa24:
    // 0x26fa24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fa24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fa28:
    // 0x26fa28: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x26fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
label_26fa2c:
    // 0x26fa2c: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_26fa30:
    // 0x26fa30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26fa34:
    // 0x26fa34: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x26fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_26fa38:
    // 0x26fa38: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_26fa3c:
    if (ctx->pc == 0x26FA3Cu) {
        ctx->pc = 0x26FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA38u;
        // 0x26fa3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA40u;
        goto label_26fa40;
    }
    ctx->pc = 0x26FA38u;
    {
        const bool branch_taken_0x26fa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fa38) {
            ctx->pc = 0x26FA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA38u;
            // 0x26fa3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26FA40u;
label_26fa40:
    // 0x26fa40: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26fa44:
    // 0x26fa44: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_26fa48:
    if (ctx->pc == 0x26FA48u) {
        ctx->pc = 0x26FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA44u;
        // 0x26fa48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA4Cu;
        goto label_26fa4c;
    }
    ctx->pc = 0x26FA44u;
    {
        const bool branch_taken_0x26fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fa44) {
            ctx->pc = 0x26FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA44u;
            // 0x26fa48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26FA4Cu;
label_26fa4c:
    // 0x26fa4c: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x26fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_26fa50:
    // 0x26fa50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_26fa54:
    if (ctx->pc == 0x26FA54u) {
        ctx->pc = 0x26FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA50u;
        // 0x26fa54: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA58u;
        goto label_26fa58;
    }
    ctx->pc = 0x26FA50u;
    {
        const bool branch_taken_0x26fa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa50) {
            ctx->pc = 0x26FA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA50u;
            // 0x26fa54: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FA68u;
            goto label_26fa68;
        }
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x8e0501ac  lw          $a1, 0x1AC($s0)
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_26fa5c:
    // 0x26fa5c: 0x40f809  jalr        $v0
label_26fa60:
    if (ctx->pc == 0x26FA60u) {
        ctx->pc = 0x26FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA5Cu;
        // 0x26fa60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA64u;
        goto label_26fa64;
    }
    ctx->pc = 0x26FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FA64u);
        ctx->pc = 0x26FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA5Cu;
        // 0x26fa60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FA5Cu, 0x26FA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FA64u;
label_26fa64:
    // 0x26fa64: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26fa68:
    // 0x26fa68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26fa6c:
    // 0x26fa6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26fa70:
    // 0x26fa70: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_26fa74:
    if (ctx->pc == 0x26FA74u) {
        ctx->pc = 0x26FA78u;
        goto label_26fa78;
    }
    ctx->pc = 0x26FA70u;
    {
        const bool branch_taken_0x26fa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa70) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26FA78u;
label_26fa78:
    // 0x26fa78: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_26fa7c:
    // 0x26fa7c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_26fa80:
    // 0x26fa80: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x26fa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
label_26fa84:
    // 0x26fa84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26fa88:
    if (ctx->pc == 0x26FA88u) {
        ctx->pc = 0x26FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA84u;
        // 0x26fa88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA8Cu;
        goto label_26fa8c;
    }
    ctx->pc = 0x26FA84u;
    {
        const bool branch_taken_0x26fa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA84u;
        // 0x26fa88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa84) {
            ctx->pc = 0x26FAB0u;
            goto label_26fab0;
        }
    }
    ctx->pc = 0x26FA8Cu;
label_26fa8c:
    // 0x26fa8c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x26fa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_26fa90:
    // 0x26fa90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26fa94:
    if (ctx->pc == 0x26FA94u) {
        ctx->pc = 0x26FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA90u;
        // 0x26fa94: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FA98u;
        goto label_26fa98;
    }
    ctx->pc = 0x26FA90u;
    {
        const bool branch_taken_0x26fa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA90u;
        // 0x26fa94: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa90) {
            ctx->pc = 0x26FAB0u;
            goto label_26fab0;
        }
    }
    ctx->pc = 0x26FA98u;
label_26fa98:
    // 0x26fa98: 0x8c4306e4  lw          $v1, 0x6E4($v0)
    ctx->pc = 0x26fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
label_26fa9c:
    // 0x26fa9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_26faa0:
    if (ctx->pc == 0x26FAA0u) {
        ctx->pc = 0x26FAA4u;
        goto label_26faa4;
    }
    ctx->pc = 0x26FA9Cu;
    {
        const bool branch_taken_0x26fa9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa9c) {
            ctx->pc = 0x26FAB0u;
            goto label_26fab0;
        }
    }
    ctx->pc = 0x26FAA4u;
label_26faa4:
    // 0x26faa4: 0xc097058  jal         func_25C160
label_26faa8:
    if (ctx->pc == 0x26FAA8u) {
        ctx->pc = 0x26FAACu;
        goto label_26faac;
    }
    ctx->pc = 0x26FAA4u;
    SET_GPR_U32(ctx, 31, 0x26FAACu);
    ctx->pc = 0x25C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C160u, 0x26FAA4u, 0x26FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAACu;
label_26faac:
    // 0x26faac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fab0:
    // 0x26fab0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_26fab4:
    if (ctx->pc == 0x26FAB4u) {
        ctx->pc = 0x26FAB8u;
        goto label_26fab8;
    }
    ctx->pc = 0x26FAB0u;
    {
        const bool branch_taken_0x26fab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fab0) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26FAB8u;
label_26fab8:
    // 0x26fab8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x26fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26fabc:
    // 0x26fabc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x26fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_26fac0:
    // 0x26fac0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x26fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_26fac4:
    // 0x26fac4: 0xc09a75e  jal         func_269D78
label_26fac8:
    if (ctx->pc == 0x26FAC8u) {
        ctx->pc = 0x26FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAC4u;
        // 0x26fac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FACCu;
        goto label_26facc;
    }
    ctx->pc = 0x26FAC4u;
    SET_GPR_U32(ctx, 31, 0x26FACCu);
    ctx->pc = 0x26FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAC4u;
    // 0x26fac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269D78u, 0x26FAC4u, 0x26FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FACCu;
label_26facc:
    // 0x26facc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26fad0:
    // 0x26fad0: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
label_26fad4:
    if (ctx->pc == 0x26FAD4u) {
        ctx->pc = 0x26FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD0u;
        // 0x26fad4: 0x8f84b15c  lw          $a0, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAD8u;
        goto label_26fad8;
    }
    ctx->pc = 0x26FAD0u;
    {
        const bool branch_taken_0x26fad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x26FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD0u;
        // 0x26fad4: 0x8f84b15c  lw          $a0, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fad0) {
            ctx->pc = 0x26FAE4u;
            goto label_26fae4;
        }
    }
    ctx->pc = 0x26FAD8u;
label_26fad8:
    // 0x26fad8: 0xc09ba36  jal         func_26E8D8
label_26fadc:
    if (ctx->pc == 0x26FADCu) {
        ctx->pc = 0x26FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD8u;
        // 0x26fadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAE0u;
        goto label_26fae0;
    }
    ctx->pc = 0x26FAD8u;
    SET_GPR_U32(ctx, 31, 0x26FAE0u);
    ctx->pc = 0x26FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAD8u;
    // 0x26fadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E8D8u, 0x26FAD8u, 0x26FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAE0u;
label_26fae0:
    // 0x26fae0: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_26fae4:
    // 0x26fae4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26fae8:
    // 0x26fae8: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x26fae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26faec:
    // 0x26faec: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_26faf0:
    if (ctx->pc == 0x26FAF0u) {
        ctx->pc = 0x26FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAECu;
        // 0x26faf0: 0x26730250  addiu       $s3, $s3, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAF4u;
        goto label_26faf4;
    }
    ctx->pc = 0x26FAECu;
    {
        const bool branch_taken_0x26faec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAECu;
        // 0x26faf0: 0x26730250  addiu       $s3, $s3, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26faec) {
            ctx->pc = 0x26FA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fa28;
        }
    }
    ctx->pc = 0x26FAF4u;
label_26faf4:
    // 0x26faf4: 0x18800041  blez        $a0, . + 4 + (0x41 << 2)
label_26faf8:
    if (ctx->pc == 0x26FAF8u) {
        ctx->pc = 0x26FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAF4u;
        // 0x26faf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FAFCu;
        goto label_26fafc;
    }
    ctx->pc = 0x26FAF4u;
    {
        const bool branch_taken_0x26faf4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAF4u;
        // 0x26faf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26faf4) {
            ctx->pc = 0x26FBFCu;
            goto label_26fbfc;
        }
    }
    ctx->pc = 0x26FAFCu;
label_26fafc:
    // 0x26fafc: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x26fafcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_26fb00:
    // 0x26fb00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb04:
    // 0x26fb04: 0x36520100  ori         $s2, $s2, 0x100
    ctx->pc = 0x26fb04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)256);
label_26fb08:
    // 0x26fb08: 0x24150800  addiu       $s5, $zero, 0x800
    ctx->pc = 0x26fb08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_26fb0c:
    // 0x26fb0c: 0x3c140f00  lui         $s4, 0xF00
    ctx->pc = 0x26fb0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3840 << 16));
label_26fb10:
    // 0x26fb10: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x26fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
label_26fb14:
    // 0x26fb14: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x26fb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_26fb18:
    // 0x26fb18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26fb1c:
    // 0x26fb1c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x26fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_26fb20:
    // 0x26fb20: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_26fb24:
    if (ctx->pc == 0x26FB24u) {
        ctx->pc = 0x26FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB20u;
        // 0x26fb24: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB28u;
        goto label_26fb28;
    }
    ctx->pc = 0x26FB20u;
    {
        const bool branch_taken_0x26fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fb20) {
            ctx->pc = 0x26FB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB20u;
            // 0x26fb24: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FBF0u;
            goto label_26fbf0;
        }
    }
    ctx->pc = 0x26FB28u;
label_26fb28:
    // 0x26fb28: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26fb2c:
    // 0x26fb2c: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_26fb30:
    if (ctx->pc == 0x26FB30u) {
        ctx->pc = 0x26FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB2Cu;
        // 0x26fb30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB34u;
        goto label_26fb34;
    }
    ctx->pc = 0x26FB2Cu;
    {
        const bool branch_taken_0x26fb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb2c) {
            ctx->pc = 0x26FB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB2Cu;
            // 0x26fb30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FBF0u;
            goto label_26fbf0;
        }
    }
    ctx->pc = 0x26FB34u;
label_26fb34:
    // 0x26fb34: 0xc09bfc4  jal         func_26FF10
label_26fb38:
    if (ctx->pc == 0x26FB38u) {
        ctx->pc = 0x26FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB34u;
        // 0x26fb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB3Cu;
        goto label_26fb3c;
    }
    ctx->pc = 0x26FB34u;
    SET_GPR_U32(ctx, 31, 0x26FB3Cu);
    ctx->pc = 0x26FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB34u;
    // 0x26fb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FF10u, 0x26FB34u, 0x26FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB3Cu;
label_26fb3c:
    // 0x26fb3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26fb40:
    // 0x26fb40: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
label_26fb44:
    if (ctx->pc == 0x26FB44u) {
        ctx->pc = 0x26FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB40u;
        // 0x26fb44: 0x8e0201a4  lw          $v0, 0x1A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB48u;
        goto label_26fb48;
    }
    ctx->pc = 0x26FB40u;
    {
        const bool branch_taken_0x26fb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x26fb40) {
            ctx->pc = 0x26FB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB40u;
            // 0x26fb44: 0x8e0201a4  lw          $v0, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FB54u;
            goto label_26fb54;
        }
    }
    ctx->pc = 0x26FB48u;
label_26fb48:
    // 0x26fb48: 0xc09adc4  jal         func_26B710
label_26fb4c:
    if (ctx->pc == 0x26FB4Cu) {
        ctx->pc = 0x26FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB48u;
        // 0x26fb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB50u;
        goto label_26fb50;
    }
    ctx->pc = 0x26FB48u;
    SET_GPR_U32(ctx, 31, 0x26FB50u);
    ctx->pc = 0x26FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB48u;
    // 0x26fb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B710u, 0x26FB48u, 0x26FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB50u;
label_26fb50:
    // 0x26fb50: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x26fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_26fb54:
    // 0x26fb54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_26fb58:
    if (ctx->pc == 0x26FB58u) {
        ctx->pc = 0x26FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB54u;
        // 0x26fb58: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB5Cu;
        goto label_26fb5c;
    }
    ctx->pc = 0x26FB54u;
    {
        const bool branch_taken_0x26fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb54) {
            ctx->pc = 0x26FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB54u;
            // 0x26fb58: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FB6Cu;
            goto label_26fb6c;
        }
    }
    ctx->pc = 0x26FB5Cu;
label_26fb5c:
    // 0x26fb5c: 0x8e0501ac  lw          $a1, 0x1AC($s0)
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_26fb60:
    // 0x26fb60: 0x40f809  jalr        $v0
label_26fb64:
    if (ctx->pc == 0x26FB64u) {
        ctx->pc = 0x26FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB60u;
        // 0x26fb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB68u;
        goto label_26fb68;
    }
    ctx->pc = 0x26FB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FB68u);
        ctx->pc = 0x26FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB60u;
        // 0x26fb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB60u, 0x26FB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FB68u;
label_26fb68:
    // 0x26fb68: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26fb6c:
    // 0x26fb6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26fb70:
    // 0x26fb70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26fb74:
    // 0x26fb74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_26fb78:
    if (ctx->pc == 0x26FB78u) {
        ctx->pc = 0x26FB7Cu;
        goto label_26fb7c;
    }
    ctx->pc = 0x26FB74u;
    {
        const bool branch_taken_0x26fb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb74) {
            ctx->pc = 0x26FBC8u;
            goto label_26fbc8;
        }
    }
    ctx->pc = 0x26FB7Cu;
label_26fb7c:
    // 0x26fb7c: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x26fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_26fb80:
    // 0x26fb80: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x26fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_26fb84:
    // 0x26fb84: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x26fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
label_26fb88:
    // 0x26fb88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26fb8c:
    if (ctx->pc == 0x26FB8Cu) {
        ctx->pc = 0x26FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB88u;
        // 0x26fb8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB90u;
        goto label_26fb90;
    }
    ctx->pc = 0x26FB88u;
    {
        const bool branch_taken_0x26fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB88u;
        // 0x26fb8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb88) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FB90u;
label_26fb90:
    // 0x26fb90: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x26fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_26fb94:
    // 0x26fb94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26fb98:
    if (ctx->pc == 0x26FB98u) {
        ctx->pc = 0x26FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB94u;
        // 0x26fb98: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB9Cu;
        goto label_26fb9c;
    }
    ctx->pc = 0x26FB94u;
    {
        const bool branch_taken_0x26fb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB94u;
        // 0x26fb98: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb94) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FB9Cu;
label_26fb9c:
    // 0x26fb9c: 0x8c4306e4  lw          $v1, 0x6E4($v0)
    ctx->pc = 0x26fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
label_26fba0:
    // 0x26fba0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_26fba4:
    if (ctx->pc == 0x26FBA4u) {
        ctx->pc = 0x26FBA8u;
        goto label_26fba8;
    }
    ctx->pc = 0x26FBA0u;
    {
        const bool branch_taken_0x26fba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fba0) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FBA8u;
label_26fba8:
    // 0x26fba8: 0xc097058  jal         func_25C160
label_26fbac:
    if (ctx->pc == 0x26FBACu) {
        ctx->pc = 0x26FBB0u;
        goto label_26fbb0;
    }
    ctx->pc = 0x26FBA8u;
    SET_GPR_U32(ctx, 31, 0x26FBB0u);
    ctx->pc = 0x25C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C160u, 0x26FBA8u, 0x26FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBB0u;
label_26fbb0:
    // 0x26fbb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fbb4:
    // 0x26fbb4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_26fbb8:
    if (ctx->pc == 0x26FBB8u) {
        ctx->pc = 0x26FBBCu;
        goto label_26fbbc;
    }
    ctx->pc = 0x26FBB4u;
    {
        const bool branch_taken_0x26fbb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fbb4) {
            ctx->pc = 0x26FBC8u;
            goto label_26fbc8;
        }
    }
    ctx->pc = 0x26FBBCu;
label_26fbbc:
    // 0x26fbbc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x26fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26fbc0:
    // 0x26fbc0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x26fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_26fbc4:
    // 0x26fbc4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x26fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_26fbc8:
    // 0x26fbc8: 0xc09a75e  jal         func_269D78
label_26fbcc:
    if (ctx->pc == 0x26FBCCu) {
        ctx->pc = 0x26FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBC8u;
        // 0x26fbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBD0u;
        goto label_26fbd0;
    }
    ctx->pc = 0x26FBC8u;
    SET_GPR_U32(ctx, 31, 0x26FBD0u);
    ctx->pc = 0x26FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBC8u;
    // 0x26fbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269D78u, 0x26FBC8u, 0x26FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBD0u;
label_26fbd0:
    // 0x26fbd0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26fbd4:
    // 0x26fbd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_26fbd8:
    // 0x26fbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26fbdc:
    if (ctx->pc == 0x26FBDCu) {
        ctx->pc = 0x26FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBD8u;
        // 0x26fbdc: 0x8f84b15c  lw          $a0, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBE0u;
        goto label_26fbe0;
    }
    ctx->pc = 0x26FBD8u;
    {
        const bool branch_taken_0x26fbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBD8u;
        // 0x26fbdc: 0x8f84b15c  lw          $a0, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbd8) {
            ctx->pc = 0x26FBECu;
            goto label_26fbec;
        }
    }
    ctx->pc = 0x26FBE0u;
label_26fbe0:
    // 0x26fbe0: 0xc09bd18  jal         func_26F460
label_26fbe4:
    if (ctx->pc == 0x26FBE4u) {
        ctx->pc = 0x26FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBE0u;
        // 0x26fbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBE8u;
        goto label_26fbe8;
    }
    ctx->pc = 0x26FBE0u;
    SET_GPR_U32(ctx, 31, 0x26FBE8u);
    ctx->pc = 0x26FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FBE0u;
    // 0x26fbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F460u, 0x26FBE0u, 0x26FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBE8u;
label_26fbe8:
    // 0x26fbe8: 0x8f84b15c  lw          $a0, -0x4EA4($gp)
    ctx->pc = 0x26fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_26fbec:
    // 0x26fbec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26fbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26fbf0:
    // 0x26fbf0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x26fbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26fbf4:
    // 0x26fbf4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_26fbf8:
    if (ctx->pc == 0x26FBF8u) {
        ctx->pc = 0x26FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBF4u;
        // 0x26fbf8: 0x26730250  addiu       $s3, $s3, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FBFCu;
        goto label_26fbfc;
    }
    ctx->pc = 0x26FBF4u;
    {
        const bool branch_taken_0x26fbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBF4u;
        // 0x26fbf8: 0x26730250  addiu       $s3, $s3, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbf4) {
            ctx->pc = 0x26FB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fb10;
        }
    }
    ctx->pc = 0x26FBFCu;
label_26fbfc:
    // 0x26fbfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26fc00:
    // 0x26fc00: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26fc00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26fc04:
    // 0x26fc04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26fc04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26fc08:
    // 0x26fc08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26fc08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26fc0c:
    // 0x26fc0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26fc0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fc10:
    // 0x26fc10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26fc10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26fc14:
    // 0x26fc14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fc14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fc18:
    // 0x26fc18: 0x3e00008  jr          $ra
label_26fc1c:
    if (ctx->pc == 0x26FC1Cu) {
        ctx->pc = 0x26FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC18u;
        // 0x26fc1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC20u;
        goto label_fallthrough_0x26fc18;
    }
    ctx->pc = 0x26FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC18u;
        // 0x26fc1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26fc18:
    ctx->pc = 0x26FC20u;
}

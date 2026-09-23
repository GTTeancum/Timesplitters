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

// Function: __sigtramp_r
// Address: 0x2ed2f0 - 0x2ed3a8
void ps2___sigtramp_r_0x2ed2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sigtramp_r_0x2ed2f0");
#endif

    switch (ctx->pc) {
        case 0x2ed2f0u: goto label_2ed2f0;
        case 0x2ed2f4u: goto label_2ed2f4;
        case 0x2ed2f8u: goto label_2ed2f8;
        case 0x2ed2fcu: goto label_2ed2fc;
        case 0x2ed300u: goto label_2ed300;
        case 0x2ed304u: goto label_2ed304;
        case 0x2ed308u: goto label_2ed308;
        case 0x2ed30cu: goto label_2ed30c;
        case 0x2ed310u: goto label_2ed310;
        case 0x2ed314u: goto label_2ed314;
        case 0x2ed318u: goto label_2ed318;
        case 0x2ed31cu: goto label_2ed31c;
        case 0x2ed320u: goto label_2ed320;
        case 0x2ed324u: goto label_2ed324;
        case 0x2ed328u: goto label_2ed328;
        case 0x2ed32cu: goto label_2ed32c;
        case 0x2ed330u: goto label_2ed330;
        case 0x2ed334u: goto label_2ed334;
        case 0x2ed338u: goto label_2ed338;
        case 0x2ed33cu: goto label_2ed33c;
        case 0x2ed340u: goto label_2ed340;
        case 0x2ed344u: goto label_2ed344;
        case 0x2ed348u: goto label_2ed348;
        case 0x2ed34cu: goto label_2ed34c;
        case 0x2ed350u: goto label_2ed350;
        case 0x2ed354u: goto label_2ed354;
        case 0x2ed358u: goto label_2ed358;
        case 0x2ed35cu: goto label_2ed35c;
        case 0x2ed360u: goto label_2ed360;
        case 0x2ed364u: goto label_2ed364;
        case 0x2ed368u: goto label_2ed368;
        case 0x2ed36cu: goto label_2ed36c;
        case 0x2ed370u: goto label_2ed370;
        case 0x2ed374u: goto label_2ed374;
        case 0x2ed378u: goto label_2ed378;
        case 0x2ed37cu: goto label_2ed37c;
        case 0x2ed380u: goto label_2ed380;
        case 0x2ed384u: goto label_2ed384;
        case 0x2ed388u: goto label_2ed388;
        case 0x2ed38cu: goto label_2ed38c;
        case 0x2ed390u: goto label_2ed390;
        case 0x2ed394u: goto label_2ed394;
        case 0x2ed398u: goto label_2ed398;
        case 0x2ed39cu: goto label_2ed39c;
        case 0x2ed3a0u: goto label_2ed3a0;
        case 0x2ed3a4u: goto label_2ed3a4;
        default: break;
    }

    ctx->pc = 0x2ed2f0u;

label_2ed2f0:
    // 0x2ed2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ed2f4:
    // 0x2ed2f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ed2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ed2f8:
    // 0x2ed2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ed2fc:
    // 0x2ed2fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ed2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed300:
    // 0x2ed300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ed304:
    // 0x2ed304: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2ed304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2ed308:
    // 0x2ed308: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ed30c:
    if (ctx->pc == 0x2ED30Cu) {
        ctx->pc = 0x2ED30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED308u;
        // 0x2ed30c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED310u;
        goto label_2ed310;
    }
    ctx->pc = 0x2ED308u;
    {
        const bool branch_taken_0x2ed308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED308u;
        // 0x2ed30c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed308) {
            ctx->pc = 0x2ED32Cu;
            goto label_2ed32c;
        }
    }
    ctx->pc = 0x2ED310u;
label_2ed310:
    // 0x2ed310: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x2ed310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2ed314:
    // 0x2ed314: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2ed318:
    if (ctx->pc == 0x2ED318u) {
        ctx->pc = 0x2ED318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED314u;
        // 0x2ed318: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED31Cu;
        goto label_2ed31c;
    }
    ctx->pc = 0x2ED314u;
    {
        const bool branch_taken_0x2ed314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED314u;
        // 0x2ed318: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed314) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED31Cu;
label_2ed31c:
    // 0x2ed31c: 0xc0bb440  jal         func_2ED100
label_2ed320:
    if (ctx->pc == 0x2ED320u) {
        ctx->pc = 0x2ED320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED31Cu;
        // 0x2ed320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED324u;
        goto label_2ed324;
    }
    ctx->pc = 0x2ED31Cu;
    SET_GPR_U32(ctx, 31, 0x2ED324u);
    ctx->pc = 0x2ED320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED31Cu;
    // 0x2ed320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED100u, 0x2ED31Cu, 0x2ED324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED324u;
label_2ed324:
    // 0x2ed324: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2ed328:
    if (ctx->pc == 0x2ED328u) {
        ctx->pc = 0x2ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED324u;
        // 0x2ed328: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED32Cu;
        goto label_2ed32c;
    }
    ctx->pc = 0x2ED324u;
    {
        const bool branch_taken_0x2ed324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed324) {
            ctx->pc = 0x2ED328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED324u;
            // 0x2ed328: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED334u;
            goto label_2ed334;
        }
    }
    ctx->pc = 0x2ED32Cu;
label_2ed32c:
    // 0x2ed32c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2ed330:
    if (ctx->pc == 0x2ED330u) {
        ctx->pc = 0x2ED330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED32Cu;
        // 0x2ed330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED334u;
        goto label_2ed334;
    }
    ctx->pc = 0x2ED32Cu;
    {
        const bool branch_taken_0x2ed32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED32Cu;
        // 0x2ed330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed32c) {
            ctx->pc = 0x2ED394u;
            goto label_2ed394;
        }
    }
    ctx->pc = 0x2ED334u;
label_2ed334:
    // 0x2ed334: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2ed334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2ed338:
    // 0x2ed338: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2ed338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ed33c:
    // 0x2ed33c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ed33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed340:
    // 0x2ed340: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2ed344:
    if (ctx->pc == 0x2ED344u) {
        ctx->pc = 0x2ED344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED340u;
        // 0x2ed344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED348u;
        goto label_2ed348;
    }
    ctx->pc = 0x2ED340u;
    {
        const bool branch_taken_0x2ed340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED340u;
        // 0x2ed344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed340) {
            ctx->pc = 0x2ED394u;
            goto label_2ed394;
        }
    }
    ctx->pc = 0x2ED348u;
label_2ed348:
    // 0x2ed348: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_2ed34c:
    if (ctx->pc == 0x2ED34Cu) {
        ctx->pc = 0x2ED350u;
        goto label_2ed350;
    }
    ctx->pc = 0x2ED348u;
    {
        const bool branch_taken_0x2ed348 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2ed348) {
            ctx->pc = 0x2ED364u;
            goto label_2ed364;
        }
    }
    ctx->pc = 0x2ED350u;
label_2ed350:
    // 0x2ed350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ed350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ed354:
    // 0x2ed354: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2ed358:
    if (ctx->pc == 0x2ED358u) {
        ctx->pc = 0x2ED358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED354u;
        // 0x2ed358: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED35Cu;
        goto label_2ed35c;
    }
    ctx->pc = 0x2ED354u;
    {
        const bool branch_taken_0x2ed354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED354u;
        // 0x2ed358: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed354) {
            ctx->pc = 0x2ED374u;
            goto label_2ed374;
        }
    }
    ctx->pc = 0x2ED35Cu;
label_2ed35c:
    // 0x2ed35c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ed360:
    if (ctx->pc == 0x2ED360u) {
        ctx->pc = 0x2ED360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED35Cu;
        // 0x2ed360: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED364u;
        goto label_2ed364;
    }
    ctx->pc = 0x2ED35Cu;
    {
        const bool branch_taken_0x2ed35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED35Cu;
        // 0x2ed360: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed35c) {
            ctx->pc = 0x2ED384u;
            goto label_2ed384;
        }
    }
    ctx->pc = 0x2ED364u;
label_2ed364:
    // 0x2ed364: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ed368:
    if (ctx->pc == 0x2ED368u) {
        ctx->pc = 0x2ED368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED364u;
        // 0x2ed368: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED36Cu;
        goto label_2ed36c;
    }
    ctx->pc = 0x2ED364u;
    {
        const bool branch_taken_0x2ed364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED364u;
        // 0x2ed368: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed364) {
            ctx->pc = 0x2ED37Cu;
            goto label_2ed37c;
        }
    }
    ctx->pc = 0x2ED36Cu;
label_2ed36c:
    // 0x2ed36c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ed370:
    if (ctx->pc == 0x2ED370u) {
        ctx->pc = 0x2ED370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED36Cu;
        // 0x2ed370: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED374u;
        goto label_2ed374;
    }
    ctx->pc = 0x2ED36Cu;
    {
        const bool branch_taken_0x2ed36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED36Cu;
        // 0x2ed370: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed36c) {
            ctx->pc = 0x2ED384u;
            goto label_2ed384;
        }
    }
    ctx->pc = 0x2ED374u;
label_2ed374:
    // 0x2ed374: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ed378:
    if (ctx->pc == 0x2ED378u) {
        ctx->pc = 0x2ED378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED374u;
        // 0x2ed378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED37Cu;
        goto label_2ed37c;
    }
    ctx->pc = 0x2ED374u;
    {
        const bool branch_taken_0x2ed374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED374u;
        // 0x2ed378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed374) {
            ctx->pc = 0x2ED394u;
            goto label_2ed394;
        }
    }
    ctx->pc = 0x2ED37Cu;
label_2ed37c:
    // 0x2ed37c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ed380:
    if (ctx->pc == 0x2ED380u) {
        ctx->pc = 0x2ED380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED37Cu;
        // 0x2ed380: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED384u;
        goto label_2ed384;
    }
    ctx->pc = 0x2ED37Cu;
    {
        const bool branch_taken_0x2ed37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED37Cu;
        // 0x2ed380: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed37c) {
            ctx->pc = 0x2ED394u;
            goto label_2ed394;
        }
    }
    ctx->pc = 0x2ED384u;
label_2ed384:
    // 0x2ed384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ed388:
    // 0x2ed388: 0x60f809  jalr        $v1
label_2ed38c:
    if (ctx->pc == 0x2ED38Cu) {
        ctx->pc = 0x2ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED388u;
        // 0x2ed38c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED390u;
        goto label_2ed390;
    }
    ctx->pc = 0x2ED388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ED390u);
        ctx->pc = 0x2ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED388u;
        // 0x2ed38c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED388u, 0x2ED390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED390u;
label_2ed390:
    // 0x2ed390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed394:
    // 0x2ed394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed398:
    // 0x2ed398: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ed398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed39c:
    // 0x2ed39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed3a0:
    // 0x2ed3a0: 0x3e00008  jr          $ra
label_2ed3a4:
    if (ctx->pc == 0x2ED3A4u) {
        ctx->pc = 0x2ED3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3A0u;
        // 0x2ed3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED3A8u;
        goto label_fallthrough_0x2ed3a0;
    }
    ctx->pc = 0x2ED3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3A0u;
        // 0x2ed3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed3a0:
    ctx->pc = 0x2ED3A8u;
}

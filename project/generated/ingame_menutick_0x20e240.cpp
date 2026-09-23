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

// Function: ingame_menutick
// Address: 0x20e240 - 0x20e59c
void ingame_menutick_0x20e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingame_menutick_0x20e240");
#endif

    switch (ctx->pc) {
        case 0x20e27cu: goto label_20e27c;
        case 0x20e298u: goto label_20e298;
        case 0x20e2c8u: goto label_20e2c8;
        case 0x20e2dcu: goto label_20e2dc;
        case 0x20e310u: goto label_20e310;
        case 0x20e340u: goto label_20e340;
        case 0x20e438u: goto label_20e438;
        case 0x20e470u: goto label_20e470;
        case 0x20e490u: goto label_20e490;
        case 0x20e49cu: goto label_20e49c;
        case 0x20e4d0u: goto label_20e4d0;
        case 0x20e4e4u: goto label_20e4e4;
        case 0x20e51cu: goto label_20e51c;
        case 0x20e530u: goto label_20e530;
        case 0x20e54cu: goto label_20e54c;
        default: break;
    }

    ctx->pc = 0x20e240u;

    // 0x20e240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20e244: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20e248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e24c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20e250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e254: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x20e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20e258: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x20e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20e25c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20e260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20e264: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x20e264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e268: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x20E268u;
    {
        const bool branch_taken_0x20e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E268u;
        // 0x20e26c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e268) {
            ctx->pc = 0x20E578u;
            goto label_20e578;
        }
    }
    ctx->pc = 0x20E270u;
    // 0x20e270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e274: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x20E274u;
    SET_GPR_U32(ctx, 31, 0x20E27Cu);
    ctx->pc = 0x20E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E274u;
    // 0x20e278: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x20E274u, 0x20E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E27Cu;
label_20e27c:
    // 0x20e27c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20e27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e280: 0x122000bd  beqz        $s1, . + 4 + (0xBD << 2)
    ctx->pc = 0x20E280u;
    {
        const bool branch_taken_0x20e280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E280u;
        // 0x20e284: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e280) {
            ctx->pc = 0x20E578u;
            goto label_20e578;
        }
    }
    ctx->pc = 0x20E288u;
    // 0x20e288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20e288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e28c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20e28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e290: 0x2415ffc3  addiu       $s5, $zero, -0x3D
    ctx->pc = 0x20e290u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x20e294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e298:
    // 0x20e298: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x20e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20e29c: 0xc81804  sllv        $v1, $t0, $a2
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x20e2a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20e2a4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20E2A4u;
    {
        const bool branch_taken_0x20e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A4u;
        // 0x20e2a8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2a4) {
            ctx->pc = 0x20E324u;
            goto label_20e324;
        }
    }
    ctx->pc = 0x20E2ACu;
    // 0x20e2ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20e2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2b0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x20e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20e2b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x20e2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e2b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20E2B8u;
    {
        const bool branch_taken_0x20e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2B8u;
        // 0x20e2bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2b8) {
            ctx->pc = 0x20E324u;
            goto label_20e324;
        }
    }
    ctx->pc = 0x20E2C0u;
    // 0x20e2c0: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x20e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x20e2c4: 0x0  nop
    ctx->pc = 0x20e2c4u;
    // NOP
label_20e2c8:
    // 0x20e2c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x20e2c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e2cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20e2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2d0: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x20e2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x20e2d4: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x20E2D4u;
    SET_GPR_U32(ctx, 31, 0x20E2DCu);
    ctx->pc = 0x20E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2D4u;
    // 0x20e2d8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x20E2D4u, 0x20E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2DCu;
label_20e2dc:
    // 0x20e2dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20e2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2e0: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x20e2e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20e2e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20e2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20e2e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E2E8u;
    {
        const bool branch_taken_0x20e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2E8u;
        // 0x20e2ec: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2e8) {
            ctx->pc = 0x20E304u;
            goto label_20e304;
        }
    }
    ctx->pc = 0x20E2F0u;
    // 0x20e2f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2f4: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20e2f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x20e2f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e2fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20E2FCu;
    {
        const bool branch_taken_0x20e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2FCu;
        // 0x20e300: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2fc) {
            ctx->pc = 0x20E2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e2c8;
        }
    }
    ctx->pc = 0x20E304u;
label_20e304:
    // 0x20e304: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x20e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x20e308: 0xc081546  jal         func_205518
    ctx->pc = 0x20E308u;
    SET_GPR_U32(ctx, 31, 0x20E310u);
    ctx->pc = 0x20E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E308u;
    // 0x20e30c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20E308u, 0x20E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E310u;
label_20e310:
    // 0x20e310: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x20e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20e314: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20e318: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x20e318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x20e31c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20E31Cu;
    {
        const bool branch_taken_0x20e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E31Cu;
        // 0x20e320: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e31c) {
            ctx->pc = 0x20E334u;
            goto label_20e334;
        }
    }
    ctx->pc = 0x20E324u;
label_20e324:
    // 0x20e324: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20e328: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x20e328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20e32c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x20E32Cu;
    {
        const bool branch_taken_0x20e32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E32Cu;
        // 0x20e330: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e32c) {
            ctx->pc = 0x20E298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e298;
        }
    }
    ctx->pc = 0x20E334u;
label_20e334:
    // 0x20e334: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x20e334u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e338: 0xc08b7b2  jal         func_22DEC8
    ctx->pc = 0x20E338u;
    SET_GPR_U32(ctx, 31, 0x20E340u);
    ctx->pc = 0x20E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E338u;
    // 0x20e33c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEC8u, 0x20E338u, 0x20E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E340u;
label_20e340:
    // 0x20e340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e344: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x20E344u;
    {
        const bool branch_taken_0x20e344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E344u;
        // 0x20e348: 0x8f87a004  lw          $a3, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e344) {
            ctx->pc = 0x20E3D8u;
            goto label_20e3d8;
        }
    }
    ctx->pc = 0x20E34Cu;
    // 0x20e34c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x20e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x20e350: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x20e350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20e354: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x20e354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x20e358: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x20e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20e35c: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x20e35cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20e360: 0x1033021  addu        $a2, $t0, $v1
    ctx->pc = 0x20e360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x20e364: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x20e364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20e368: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x20e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20e36c: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E36Cu;
    {
        const bool branch_taken_0x20e36c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20e36c) {
            ctx->pc = 0x20E370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E36Cu;
            // 0x20e370: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E38Cu;
            goto label_20e38c;
        }
    }
    ctx->pc = 0x20E374u;
    // 0x20e374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e378: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20e378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e37c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x20e37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20e380: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x20e380u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x20e384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E384u;
    {
        const bool branch_taken_0x20e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E384u;
        // 0x20e388: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e384) {
            ctx->pc = 0x20E3A8u;
            goto label_20e3a8;
        }
    }
    ctx->pc = 0x20E38Cu;
label_20e38c:
    // 0x20e38c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20e38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e390: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E390u;
    {
        const bool branch_taken_0x20e390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e390) {
            ctx->pc = 0x20E394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E390u;
            // 0x20e394: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E3B0u;
            goto label_20e3b0;
        }
    }
    ctx->pc = 0x20E398u;
    // 0x20e398: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x20e398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20e39c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x20e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20e3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e3a4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x20e3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_20e3a8:
    // 0x20e3a8: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x20e3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20e3ac: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x20e3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20e3b0:
    // 0x20e3b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20e3b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20e3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20e3b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E3B8u;
    {
        const bool branch_taken_0x20e3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e3b8) {
            ctx->pc = 0x20E3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E3B8u;
            // 0x20e3bc: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E3E0u;
            goto label_20e3e0;
        }
    }
    ctx->pc = 0x20E3C0u;
    // 0x20e3c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20e3c4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x20e3c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x20e3c8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x20e3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20e3cc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20e3d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20e3d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20e3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_20e3d8:
    // 0x20e3d8: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x20e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20e3dc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x20e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_20e3e0:
    // 0x20e3e0: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x20e3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x20e3e4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20E3E4u;
    {
        const bool branch_taken_0x20e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3E4u;
        // 0x20e3e8: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3e4) {
            ctx->pc = 0x20E494u;
            goto label_20e494;
        }
    }
    ctx->pc = 0x20E3ECu;
    // 0x20e3ec: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x20e3ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20e3f0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20e3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x20e3f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20E3F4u;
    {
        const bool branch_taken_0x20e3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3F4u;
        // 0x20e3f8: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3f4) {
            ctx->pc = 0x20E490u;
            goto label_20e490;
        }
    }
    ctx->pc = 0x20E3FCu;
    // 0x20e3fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20E3FCu;
    {
        const bool branch_taken_0x20e3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3FCu;
        // 0x20e400: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3fc) {
            ctx->pc = 0x20E468u;
            goto label_20e468;
        }
    }
    ctx->pc = 0x20E404u;
    // 0x20e404: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x20e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e408: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20e40c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20e410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E410u;
    {
        const bool branch_taken_0x20e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E410u;
        // 0x20e414: 0x8cf00010  lw          $s0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e410) {
            ctx->pc = 0x20E420u;
            goto label_20e420;
        }
    }
    ctx->pc = 0x20E418u;
    // 0x20e418: 0x2402028f  addiu       $v0, $zero, 0x28F
    ctx->pc = 0x20e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x20e41c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x20e41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_20e420:
    // 0x20e420: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x20e420u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
    // 0x20e424: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x20E424u;
    {
        const bool branch_taken_0x20e424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e424) {
            ctx->pc = 0x20E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E424u;
            // 0x20e428: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E478u;
            goto label_20e478;
        }
    }
    ctx->pc = 0x20E42Cu;
    // 0x20e42c: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x20e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x20e430: 0xc081546  jal         func_205518
    ctx->pc = 0x20E430u;
    SET_GPR_U32(ctx, 31, 0x20E438u);
    ctx->pc = 0x20E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E430u;
    // 0x20e434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20E430u, 0x20E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E438u;
label_20e438:
    // 0x20e438: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x20e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e43c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e440: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e444: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20e444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e448: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x20e448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x20e44c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20e44cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e450: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20e450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e454: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20e454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e458: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20e458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e460: 0x808b0c2  j           func_22C308
    ctx->pc = 0x20E460u;
    ctx->pc = 0x20E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E460u;
    // 0x20e464: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C308u;
    gvSetValue_0x22c308(rdram, ctx, runtime); return;
    ctx->pc = 0x20E468u;
label_20e468:
    // 0x20e468: 0xc081546  jal         func_205518
    ctx->pc = 0x20E468u;
    SET_GPR_U32(ctx, 31, 0x20E470u);
    ctx->pc = 0x20E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E468u;
    // 0x20e46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20E468u, 0x20E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E470u;
label_20e470:
    // 0x20e470: 0x8f87a004  lw          $a3, -0x5FFC($gp)
    ctx->pc = 0x20e470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x20e474: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x20e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_20e478:
    // 0x20e478: 0x2403ffc3  addiu       $v1, $zero, -0x3D
    ctx->pc = 0x20e478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x20e47c: 0x8f85b234  lw          $a1, -0x4DCC($gp)
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20e480: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20e480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20e484: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x20e484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x20e488: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x20E488u;
    SET_GPR_U32(ctx, 31, 0x20E490u);
    ctx->pc = 0x20E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E488u;
    // 0x20e48c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x20E488u, 0x20E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E490u;
label_20e490:
    // 0x20e490: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20e494:
    // 0x20e494: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20E494u;
    SET_GPR_U32(ctx, 31, 0x20E49Cu);
    ctx->pc = 0x20E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E494u;
    // 0x20e498: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20E494u, 0x20E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E49Cu;
label_20e49c:
    // 0x20e49c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20e49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20e4a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20E4A0u;
    {
        const bool branch_taken_0x20e4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4A0u;
        // 0x20e4a4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4a0) {
            ctx->pc = 0x20E514u;
            goto label_20e514;
        }
    }
    ctx->pc = 0x20E4A8u;
    // 0x20e4a8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x20e4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x20e4ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e4b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E4B0u;
    {
        const bool branch_taken_0x20e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4B0u;
        // 0x20e4b4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4b0) {
            ctx->pc = 0x20E510u;
            goto label_20e510;
        }
    }
    ctx->pc = 0x20E4B8u;
    // 0x20e4b8: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x20e4b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20e4bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E4BCu;
    {
        const bool branch_taken_0x20e4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4BCu;
        // 0x20e4c0: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4bc) {
            ctx->pc = 0x20E4D8u;
            goto label_20e4d8;
        }
    }
    ctx->pc = 0x20E4C4u;
    // 0x20e4c4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x20e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e4c8: 0xc08387a  jal         func_20E1E8
    ctx->pc = 0x20E4C8u;
    SET_GPR_U32(ctx, 31, 0x20E4D0u);
    ctx->pc = 0x20E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4C8u;
    // 0x20e4cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E1E8u, 0x20E4C8u, 0x20E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4D0u;
label_20e4d0:
    // 0x20e4d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20E4D0u;
    {
        const bool branch_taken_0x20e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4D0u;
        // 0x20e4d4: 0x8f82b234  lw          $v0, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4d0) {
            ctx->pc = 0x20E4E8u;
            goto label_20e4e8;
        }
    }
    ctx->pc = 0x20E4D8u;
label_20e4d8:
    // 0x20e4d8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x20e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20e4dc: 0xc083864  jal         func_20E190
    ctx->pc = 0x20E4DCu;
    SET_GPR_U32(ctx, 31, 0x20E4E4u);
    ctx->pc = 0x20E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4DCu;
    // 0x20e4e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E190u, 0x20E4DCu, 0x20E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4E4u;
label_20e4e4:
    // 0x20e4e4: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20e4e8:
    // 0x20e4e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e4ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e4f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20e4f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e4f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20e4f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e4f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20e4f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e4fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20e4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e500: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20e500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e508: 0x8080ea2  j           func_203A88
    ctx->pc = 0x20E508u;
    ctx->pc = 0x20E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E508u;
    // 0x20e50c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x20E510u;
label_20e510:
    // 0x20e510: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_20e514:
    // 0x20e514: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x20E514u;
    SET_GPR_U32(ctx, 31, 0x20E51Cu);
    ctx->pc = 0x20E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E514u;
    // 0x20e518: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x20E514u, 0x20E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E51Cu;
label_20e51c:
    // 0x20e51c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x20e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x20e520: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20E520u;
    {
        const bool branch_taken_0x20e520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E520u;
        // 0x20e524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e520) {
            ctx->pc = 0x20E578u;
            goto label_20e578;
        }
    }
    ctx->pc = 0x20E528u;
    // 0x20e528: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x20E528u;
    SET_GPR_U32(ctx, 31, 0x20E530u);
    ctx->pc = 0x20E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E528u;
    // 0x20e52c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCD8u, 0x20E528u, 0x20E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E530u;
label_20e530:
    // 0x20e530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20e530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e534: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20E534u;
    {
        const bool branch_taken_0x20e534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E534u;
        // 0x20e538: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e534) {
            ctx->pc = 0x20E57Cu;
            goto label_20e57c;
        }
    }
    ctx->pc = 0x20E53Cu;
    // 0x20e53c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20e540: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x20e540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x20e544: 0xc08387a  jal         func_20E1E8
    ctx->pc = 0x20E544u;
    SET_GPR_U32(ctx, 31, 0x20E54Cu);
    ctx->pc = 0x20E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E544u;
    // 0x20e548: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E1E8u, 0x20E544u, 0x20E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E54Cu;
label_20e54c:
    // 0x20e54c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x20e550: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e554: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e558: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20e558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e55c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20e55cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e560: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20e560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e564: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20e564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e568: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20e568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e570: 0x8080ea2  j           func_203A88
    ctx->pc = 0x20E570u;
    ctx->pc = 0x20E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E570u;
    // 0x20e574: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    joyClearAll_0x203a88(rdram, ctx, runtime); return;
    ctx->pc = 0x20E578u;
label_20e578:
    // 0x20e578: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20e57c:
    // 0x20e57c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20e57cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e580: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20e580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e584: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20e584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e588: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20e588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e58c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20e58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e594: 0x3e00008  jr          $ra
    ctx->pc = 0x20E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E594u;
        // 0x20e598: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E59Cu;
}

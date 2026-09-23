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

// Function: gametype_pageTick
// Address: 0x23dd70 - 0x23e088
void gametype_pageTick_0x23dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gametype_pageTick_0x23dd70");
#endif

    switch (ctx->pc) {
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde4u: goto label_23dde4;
        case 0x23de78u: goto label_23de78;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dfc0u: goto label_23dfc0;
        case 0x23dfd4u: goto label_23dfd4;
        case 0x23dfe4u: goto label_23dfe4;
        case 0x23e004u: goto label_23e004;
        case 0x23e01cu: goto label_23e01c;
        case 0x23e030u: goto label_23e030;
        case 0x23e038u: goto label_23e038;
        case 0x23e040u: goto label_23e040;
        case 0x23e048u: goto label_23e048;
        case 0x23e058u: goto label_23e058;
        case 0x23e064u: goto label_23e064;
        default: break;
    }

    ctx->pc = 0x23dd70u;

    // 0x23dd70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23dd74: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
    // 0x23dd78: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x23dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x23dd7c: 0x3c0501fc  lui         $a1, 0x1FC
    ctx->pc = 0x23dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)508 << 16));
    // 0x23dd80: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x23dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x23dd84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23dd88: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x23dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x23dd8c: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x23dd90: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x23dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x23dd94: 0x24a51308  addiu       $a1, $a1, 0x1308
    ctx->pc = 0x23dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4872));
    // 0x23dd98: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x23dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x23dd9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23dda0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x23dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x23dda4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dda8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x23dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x23ddac: 0x26722c18  addiu       $s2, $s3, 0x2C18
    ctx->pc = 0x23ddacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x23ddb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23ddb4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x23ddb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23ddbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ddbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ddc0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x23ddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ddc4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x23ddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x23ddc8: 0x24a550f0  addiu       $a1, $a1, 0x50F0
    ctx->pc = 0x23ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20720));
    // 0x23ddcc: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x23ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x23ddd0: 0x8cc401dc  lw          $a0, 0x1DC($a2)
    ctx->pc = 0x23ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 476)));
    // 0x23ddd4: 0xc08c086  jal         func_230218
    ctx->pc = 0x23DDD4u;
    SET_GPR_U32(ctx, 31, 0x23DDDCu);
    ctx->pc = 0x23DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DDD4u;
    // 0x23ddd8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x23DDD4u, 0x23DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0xc08a984  jal         func_22A610
    ctx->pc = 0x23DDDCu;
    SET_GPR_U32(ctx, 31, 0x23DDE4u);
    ctx->pc = 0x23DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DDDCu;
    // 0x23dde0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x23DDDCu, 0x23DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDE4u;
label_23dde4:
    // 0x23dde4: 0x26064ff0  addiu       $a2, $s0, 0x4FF0
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
    // 0x23dde8: 0x8f87b730  lw          $a3, -0x48D0($gp)
    ctx->pc = 0x23dde8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x23ddec: 0x94c2000a  lhu         $v0, 0xA($a2)
    ctx->pc = 0x23ddecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x23ddf0: 0x94c3002a  lhu         $v1, 0x2A($a2)
    ctx->pc = 0x23ddf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x23ddf4: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x23ddf4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ddf8: 0x94c4004a  lhu         $a0, 0x4A($a2)
    ctx->pc = 0x23ddf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 74)));
    // 0x23ddfc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x23ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x23de00: 0xa4c2000a  sh          $v0, 0xA($a2)
    ctx->pc = 0x23de00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23de04: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x23de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x23de08: 0x3082ffbf  andi        $v0, $a0, 0xFFBF
    ctx->pc = 0x23de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65471);
    // 0x23de0c: 0xa4c3002a  sh          $v1, 0x2A($a2)
    ctx->pc = 0x23de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x23de10: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DE10u;
    {
        const bool branch_taken_0x23de10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE10u;
        // 0x23de14: 0xa4c2004a  sh          $v0, 0x4A($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de10) {
            ctx->pc = 0x23DE20u;
            goto label_23de20;
        }
    }
    ctx->pc = 0x23DE18u;
    // 0x23de18: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23de1c: 0xa4c2004a  sh          $v0, 0x4A($a2)
    ctx->pc = 0x23de1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 74), (uint16_t)GPR_U32(ctx, 2));
label_23de20:
    // 0x23de20: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x23de20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23de24: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DE24u;
    {
        const bool branch_taken_0x23de24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de24) {
            ctx->pc = 0x23DE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE24u;
            // 0x23de28: 0x96230004  lhu         $v1, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE3Cu;
            goto label_23de3c;
        }
    }
    ctx->pc = 0x23DE2Cu;
    // 0x23de2c: 0x94c2000a  lhu         $v0, 0xA($a2)
    ctx->pc = 0x23de2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x23de30: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23de30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23de34: 0xa4c2000a  sh          $v0, 0xA($a2)
    ctx->pc = 0x23de34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x23de38: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x23de38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_23de3c:
    // 0x23de3c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23DE3Cu;
    {
        const bool branch_taken_0x23de3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE3Cu;
        // 0x23de40: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de3c) {
            ctx->pc = 0x23DE70u;
            goto label_23de70;
        }
    }
    ctx->pc = 0x23DE44u;
    // 0x23de44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DE44u;
    {
        const bool branch_taken_0x23de44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE44u;
        // 0x23de48: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de44) {
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE4Cu;
    // 0x23de4c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x23de4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x23de50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DE50u;
    {
        const bool branch_taken_0x23de50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE50u;
        // 0x23de54: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de50) {
            ctx->pc = 0x23DE70u;
            goto label_23de70;
        }
    }
    ctx->pc = 0x23DE58u;
    // 0x23de58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DE58u;
    {
        const bool branch_taken_0x23de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE58u;
        // 0x23de5c: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de58) {
            ctx->pc = 0x23DE70u;
            goto label_23de70;
        }
    }
    ctx->pc = 0x23DE60u;
label_23de60:
    // 0x23de60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23de60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23de64: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x23de68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23de6c: 0x8c740200  lw          $s4, 0x200($v1)
    ctx->pc = 0x23de6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
label_23de70:
    // 0x23de70: 0xc089404  jal         func_225010
    ctx->pc = 0x23DE70u;
    SET_GPR_U32(ctx, 31, 0x23DE78u);
    ctx->pc = 0x225010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225010u, 0x23DE70u, 0x23DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE78u;
label_23de78:
    // 0x23de78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DE78u;
    {
        const bool branch_taken_0x23de78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE78u;
        // 0x23de7c: 0x26024ff0  addiu       $v0, $s0, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de78) {
            ctx->pc = 0x23DEA8u;
            goto label_23dea8;
        }
    }
    ctx->pc = 0x23DE80u;
    // 0x23de80: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x23de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x23de84: 0x9443004a  lhu         $v1, 0x4A($v0)
    ctx->pc = 0x23de84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
    // 0x23de88: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23de8c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x23de90: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x23de90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x23de94: 0x3063bdff  andi        $v1, $v1, 0xBDFF
    ctx->pc = 0x23de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48639);
    // 0x23de98: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x23de98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
    // 0x23de9c: 0xa443004a  sh          $v1, 0x4A($v0)
    ctx->pc = 0x23de9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x23dea0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23DEA0u;
    {
        const bool branch_taken_0x23dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA0u;
        // 0x23dea4: 0xa4460026  sh          $a2, 0x26($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea0) {
            ctx->pc = 0x23DEDCu;
            goto label_23dedc;
        }
    }
    ctx->pc = 0x23DEA8u;
label_23dea8:
    // 0x23dea8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x23dea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23deac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23deacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23deb0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DEB0u;
    {
        const bool branch_taken_0x23deb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0x26044ff0  addiu       $a0, $s0, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb0) {
            ctx->pc = 0x23DEC0u;
            goto label_23dec0;
        }
    }
    ctx->pc = 0x23DEB8u;
    // 0x23deb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23debc: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x23debcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_23dec0:
    // 0x23dec0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x23dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x23dec4: 0x9483004a  lhu         $v1, 0x4A($a0)
    ctx->pc = 0x23dec4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 74)));
    // 0x23dec8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x23dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x23decc: 0xa4820026  sh          $v0, 0x26($a0)
    ctx->pc = 0x23deccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ded0: 0x34634200  ori         $v1, $v1, 0x4200
    ctx->pc = 0x23ded0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16896);
    // 0x23ded4: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x23ded4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ded8: 0xa483004a  sh          $v1, 0x4A($a0)
    ctx->pc = 0x23ded8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 3));
label_23dedc:
    // 0x23dedc: 0xc089374  jal         func_224DD0
    ctx->pc = 0x23DEDCu;
    SET_GPR_U32(ctx, 31, 0x23DEE4u);
    ctx->pc = 0x23DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEDCu;
    // 0x23dee0: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224DD0u, 0x23DEDCu, 0x23DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEE4u;
label_23dee4:
    // 0x23dee4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DEE4u;
    {
        const bool branch_taken_0x23dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x8f849354  lw          $a0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dee4) {
            ctx->pc = 0x23DF18u;
            goto label_23df18;
        }
    }
    ctx->pc = 0x23DEECu;
    // 0x23deec: 0x26622c18  addiu       $v0, $s3, 0x2C18
    ctx->pc = 0x23deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11288));
    // 0x23def0: 0x26054ff0  addiu       $a1, $s0, 0x4FF0
    ctx->pc = 0x23def0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
    // 0x23def4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23def8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23def8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23defc: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x23defcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x23df00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23df00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23df04: 0xa4a30052  sh          $v1, 0x52($a1)
    ctx->pc = 0x23df04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x23df08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23df0c: 0x8c430508  lw          $v1, 0x508($v0)
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1288)));
    // 0x23df10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23DF10u;
    {
        const bool branch_taken_0x23df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF10u;
        // 0x23df14: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df10) {
            ctx->pc = 0x23DF48u;
            goto label_23df48;
        }
    }
    ctx->pc = 0x23DF18u;
label_23df18:
    // 0x23df18: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x23df18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23df1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23df20: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DF20u;
    {
        const bool branch_taken_0x23df20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF20u;
        // 0x23df24: 0x26024ff0  addiu       $v0, $s0, 0x4FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df20) {
            ctx->pc = 0x23DF34u;
            goto label_23df34;
        }
    }
    ctx->pc = 0x23DF28u;
    // 0x23df28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23df2c: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x23df2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x23df30: 0x26024ff0  addiu       $v0, $s0, 0x4FF0
    ctx->pc = 0x23df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
label_23df34:
    // 0x23df34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23df38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23df3c: 0xa4430052  sh          $v1, 0x52($v0)
    ctx->pc = 0x23df3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x23df40: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x23df40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x23df44: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x23df44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_23df48:
    // 0x23df48: 0x26024ff0  addiu       $v0, $s0, 0x4FF0
    ctx->pc = 0x23df48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20464));
    // 0x23df4c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x23df4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23df50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23df54: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23DF54u;
    {
        const bool branch_taken_0x23df54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF54u;
        // 0x23df58: 0xac5400e0  sw          $s4, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df54) {
            ctx->pc = 0x23DF9Cu;
            goto label_23df9c;
        }
    }
    ctx->pc = 0x23DF5Cu;
    // 0x23df5c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x23df5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23df60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF60u;
    {
        const bool branch_taken_0x23df60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF60u;
        // 0x23df64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df60) {
            ctx->pc = 0x23DF78u;
            goto label_23df78;
        }
    }
    ctx->pc = 0x23DF68u;
    // 0x23df68: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23DF68u;
    {
        const bool branch_taken_0x23df68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF68u;
        // 0x23df6c: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df68) {
            ctx->pc = 0x23DF94u;
            goto label_23df94;
        }
    }
    ctx->pc = 0x23DF70u;
    // 0x23df70: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23DF70u;
    {
        const bool branch_taken_0x23df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df70) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23DF78u;
label_23df78:
    // 0x23df78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23df7c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DF7Cu;
    {
        const bool branch_taken_0x23df7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF7Cu;
        // 0x23df80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df7c) {
            ctx->pc = 0x23DFACu;
            goto label_23dfac;
        }
    }
    ctx->pc = 0x23DF84u;
    // 0x23df84: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23DF84u;
    {
        const bool branch_taken_0x23df84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23df84) {
            ctx->pc = 0x23DFB8u;
            goto label_23dfb8;
        }
    }
    ctx->pc = 0x23DF8Cu;
    // 0x23df8c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x23DF8Cu;
    {
        const bool branch_taken_0x23df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df8c) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23DF94u;
label_23df94:
    // 0x23df94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23DF94u;
    {
        const bool branch_taken_0x23df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF94u;
        // 0x23df98: 0xac441214  sw          $a0, 0x1214($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df94) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23DF9Cu;
label_23df9c:
    // 0x23df9c: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23dfa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23dfa4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23DFA4u;
    {
        const bool branch_taken_0x23dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA4u;
        // 0x23dfa8: 0xac621214  sw          $v0, 0x1214($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfa4) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23DFACu;
label_23dfac:
    // 0x23dfac: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23dfb0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23DFB0u;
    {
        const bool branch_taken_0x23dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB0u;
        // 0x23dfb4: 0xac621214  sw          $v0, 0x1214($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfb0) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23DFB8u;
label_23dfb8:
    // 0x23dfb8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23DFB8u;
    SET_GPR_U32(ctx, 31, 0x23DFC0u);
    ctx->pc = 0x23DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFB8u;
    // 0x23dfbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23DFB8u, 0x23DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23dfc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23DFC4u;
    {
        const bool branch_taken_0x23dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfc4) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23DFCCu;
    // 0x23dfcc: 0xc090144  jal         func_240510
    ctx->pc = 0x23DFCCu;
    SET_GPR_U32(ctx, 31, 0x23DFD4u);
    ctx->pc = 0x240510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240510u, 0x23DFCCu, 0x23DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFD4u;
label_23dfd4:
    // 0x23dfd4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x23dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23dfd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfdc: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x23DFDCu;
    SET_GPR_U32(ctx, 31, 0x23DFE4u);
    ctx->pc = 0x23DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFDCu;
    // 0x23dfe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x23DFDCu, 0x23DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFE4u;
label_23dfe4:
    // 0x23dfe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dfe8: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x23dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x23dfec: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23dff0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23dff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dff4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x23dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x23dff8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x23dffc: 0xc0879ea  jal         func_21E7A8
    ctx->pc = 0x23DFFCu;
    SET_GPR_U32(ctx, 31, 0x23E004u);
    ctx->pc = 0x23E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFFCu;
    // 0x23e000: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E7A8u, 0x23DFFCu, 0x23E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E004u;
label_23e004:
    // 0x23e004: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x23e008: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e00c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23E00Cu;
    {
        const bool branch_taken_0x23e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E00Cu;
        // 0x23e010: 0xac6211f8  sw          $v0, 0x11F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e00c) {
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23E014u;
label_23e014:
    // 0x23e014: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x23E014u;
    SET_GPR_U32(ctx, 31, 0x23E01Cu);
    ctx->pc = 0x23E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E014u;
    // 0x23e018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x23E014u, 0x23E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E01Cu;
label_23e01c:
    // 0x23e01c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23e01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23e020: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E020u;
    {
        const bool branch_taken_0x23e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E020u;
        // 0x23e024: 0x3c100035  lui         $s0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e020) {
            ctx->pc = 0x23E048u;
            goto label_23e048;
        }
    }
    ctx->pc = 0x23E028u;
    // 0x23e028: 0xc090560  jal         func_241580
    ctx->pc = 0x23E028u;
    SET_GPR_U32(ctx, 31, 0x23E030u);
    ctx->pc = 0x241580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241580u, 0x23E028u, 0x23E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E030u;
label_23e030:
    // 0x23e030: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23E030u;
    SET_GPR_U32(ctx, 31, 0x23E038u);
    ctx->pc = 0x23E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E030u;
    // 0x23e034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23E030u, 0x23E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E038u;
label_23e038:
    // 0x23e038: 0xc08c052  jal         func_230148
    ctx->pc = 0x23E038u;
    SET_GPR_U32(ctx, 31, 0x23E040u);
    ctx->pc = 0x230148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230148u, 0x23E038u, 0x23E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E040u;
label_23e040:
    // 0x23e040: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x23E040u;
    SET_GPR_U32(ctx, 31, 0x23E048u);
    ctx->pc = 0x23E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E040u;
    // 0x23e044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x23E040u, 0x23E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E048u;
label_23e048:
    // 0x23e048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e04c: 0x26104fe0  addiu       $s0, $s0, 0x4FE0
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20448));
    // 0x23e050: 0xc08c08e  jal         func_230238
    ctx->pc = 0x23E050u;
    SET_GPR_U32(ctx, 31, 0x23E058u);
    ctx->pc = 0x23E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E050u;
    // 0x23e054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x23E050u, 0x23E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E058u;
label_23e058:
    // 0x23e058: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e05c: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x23E05Cu;
    SET_GPR_U32(ctx, 31, 0x23E064u);
    ctx->pc = 0x23E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E05Cu;
    // 0x23e060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x23E05Cu, 0x23E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E064u;
label_23e064:
    // 0x23e064: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23e064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23e068:
    // 0x23e068: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x23e068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23e06c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x23e06cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23e070: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x23e070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23e074: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x23e074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23e078: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x23e078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23e07c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x23e07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e080: 0x3e00008  jr          $ra
    ctx->pc = 0x23E080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E080u;
        // 0x23e084: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E088u;
}

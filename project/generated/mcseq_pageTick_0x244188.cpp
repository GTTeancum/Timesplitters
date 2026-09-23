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

// Function: mcseq_pageTick
// Address: 0x244188 - 0x244a34
void mcseq_pageTick_0x244188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcseq_pageTick_0x244188");
#endif

    switch (ctx->pc) {
        case 0x2441c8u: goto label_2441c8;
        case 0x2441d0u: goto label_2441d0;
        case 0x244230u: goto label_244230;
        case 0x24432cu: goto label_24432c;
        case 0x244408u: goto label_244408;
        case 0x244428u: goto label_244428;
        case 0x244498u: goto label_244498;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444e0u: goto label_2444e0;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445dcu: goto label_2445dc;
        case 0x244608u: goto label_244608;
        case 0x244618u: goto label_244618;
        case 0x244648u: goto label_244648;
        case 0x24469cu: goto label_24469c;
        case 0x2446c0u: goto label_2446c0;
        case 0x244714u: goto label_244714;
        case 0x24473cu: goto label_24473c;
        case 0x244764u: goto label_244764;
        case 0x24478cu: goto label_24478c;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2448d0u: goto label_2448d0;
        case 0x244958u: goto label_244958;
        case 0x2449e0u: goto label_2449e0;
        default: break;
    }

    ctx->pc = 0x244188u;

    // 0x244188: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x244188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x24418c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x244190: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x244190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x244194: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x244194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x244198: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x244198u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24419c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x24419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2441a0: 0x24523770  addiu       $s2, $v0, 0x3770
    ctx->pc = 0x2441a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14192));
    // 0x2441a4: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2441a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2441a8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2441a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2441ac: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2441acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2441b0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2441b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2441b4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2441b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2441b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2441b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2441bc: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2441bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2441c0: 0xc090d2a  jal         func_2434A8
    ctx->pc = 0x2441C0u;
    SET_GPR_U32(ctx, 31, 0x2441C8u);
    ctx->pc = 0x2441C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441C0u;
    // 0x2441c4: 0x8ed30008  lw          $s3, 0x8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2434A8u, 0x2441C0u, 0x2441C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441C8u;
label_2441c8:
    // 0x2441c8: 0xc090fca  jal         func_243F28
    ctx->pc = 0x2441C8u;
    SET_GPR_U32(ctx, 31, 0x2441D0u);
    ctx->pc = 0x243F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F28u, 0x2441C8u, 0x2441D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441D0u;
label_2441d0:
    // 0x2441d0: 0x8f83a0a8  lw          $v1, -0x5F58($gp)
    ctx->pc = 0x2441d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942888)));
    // 0x2441d4: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2441d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2441d8: 0x1040018b  beqz        $v0, . + 4 + (0x18B << 2)
    ctx->pc = 0x2441D8u;
    {
        const bool branch_taken_0x2441d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441D8u;
        // 0x2441dc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441d8) {
            ctx->pc = 0x244808u;
            goto label_244808;
        }
    }
    ctx->pc = 0x2441E0u;
    // 0x2441e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2441e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2441e4: 0x24421f70  addiu       $v0, $v0, 0x1F70
    ctx->pc = 0x2441e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8048));
    // 0x2441e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2441e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2441ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2441ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2441f0: 0x800008  jr          $a0
    ctx->pc = 0x2441F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2441F8u: goto label_2441f8;
            case 0x244200u: goto label_244200;
            case 0x2446FCu: goto label_2446fc;
            case 0x244808u: goto label_244808;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2441F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2441F8u;
label_2441f8:
    // 0x2441f8: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x2441F8u;
    {
        const bool branch_taken_0x2441f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441F8u;
        // 0x2441fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441f8) {
            ctx->pc = 0x2449E4u;
            goto label_2449e4;
        }
    }
    ctx->pc = 0x244200u;
label_244200:
    // 0x244200: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x244200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x244204: 0x8f83b7e4  lw          $v1, -0x481C($gp)
    ctx->pc = 0x244204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948836)));
    // 0x244208: 0x96c60004  lhu         $a2, 0x4($s6)
    ctx->pc = 0x244208u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x24420c: 0x24453710  addiu       $a1, $v0, 0x3710
    ctx->pc = 0x24420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x244210: 0x8f87b7cc  lw          $a3, -0x4834($gp)
    ctx->pc = 0x244210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948812)));
    // 0x244214: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x244214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244218: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24421c: 0x3c1e0035  lui         $fp, 0x35
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)53 << 16));
    // 0x244220: 0x26770018  addiu       $s7, $s3, 0x18
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x244224: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x244224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x244228: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x244228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24422c: 0x0  nop
    ctx->pc = 0x24422cu;
    // NOP
label_244230:
    // 0x244230: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x244234: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x244234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x244238: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x244238u;
    {
        const bool branch_taken_0x244238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244238) {
            ctx->pc = 0x24423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244238u;
            // 0x24423c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244250u;
            goto label_244250;
        }
    }
    ctx->pc = 0x244240u;
    // 0x244240: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x244240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x244244: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x244244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x244248: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x244248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x24424c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24424cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_244250:
    // 0x244250: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x244250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x244254: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x244254u;
    {
        const bool branch_taken_0x244254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244254u;
        // 0x244258: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244254) {
            ctx->pc = 0x244230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244230;
        }
    }
    ctx->pc = 0x24425Cu;
    // 0x24425c: 0x2a3a021  addu        $s4, $s5, $v1
    ctx->pc = 0x24425cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x244260: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x244260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x244264: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x244264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x244268: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244268u;
    {
        const bool branch_taken_0x244268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244268u;
        // 0x24426c: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244268) {
            ctx->pc = 0x24427Cu;
            goto label_24427c;
        }
    }
    ctx->pc = 0x244270u;
    // 0x244270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244274: 0xa6c20004  sh          $v0, 0x4($s6)
    ctx->pc = 0x244274u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x244278: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x244278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_24427c:
    // 0x24427c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24427Cu;
    {
        const bool branch_taken_0x24427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24427c) {
            ctx->pc = 0x244280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24427Cu;
            // 0x244280: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442B4u;
            goto label_2442b4;
        }
    }
    ctx->pc = 0x244284u;
    // 0x244284: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x244284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x244288: 0x2683fffd  addiu       $v1, $s4, -0x3
    ctx->pc = 0x244288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x24428c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x24428cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x244290: 0x27c42e80  addiu       $a0, $fp, 0x2E80
    ctx->pc = 0x244290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 11904));
    // 0x244294: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x244294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x244298: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x244298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24429c: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x24429cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2442a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2442a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2442a4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2442a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2442a8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2442a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2442ac: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x2442acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x2442b0: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x2442b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
label_2442b4:
    // 0x2442b4: 0x27c32e80  addiu       $v1, $fp, 0x2E80
    ctx->pc = 0x2442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 11904));
    // 0x2442b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2442b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2442bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442c0: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x2442c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2442c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2442c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442c8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2442c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2442cc: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2442ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2442d0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2442d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2442d4: 0x244a6538  addiu       $t2, $v0, 0x6538
    ctx->pc = 0x2442d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 25912));
    // 0x2442d8: 0x69430007  ldl         $v1, 0x7($t2)
    ctx->pc = 0x2442d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2442dc: 0x6d430000  ldr         $v1, 0x0($t2)
    ctx->pc = 0x2442dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2442e0: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x2442e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2442e4: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x2442e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2442e8: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x2442e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2442ec: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x2442ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2442f0: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x2442f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2442f4: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x2442f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2442f8: 0xb248000f  sdl         $t0, 0xF($s2)
    ctx->pc = 0x2442f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2442fc: 0xb6480008  sdr         $t0, 0x8($s2)
    ctx->pc = 0x2442fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244300: 0xb2490017  sdl         $t1, 0x17($s2)
    ctx->pc = 0x244300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244304: 0xb6490010  sdr         $t1, 0x10($s2)
    ctx->pc = 0x244304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244308: 0x6943001f  ldl         $v1, 0x1F($t2)
    ctx->pc = 0x244308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x24430c: 0x6d430018  ldr         $v1, 0x18($t2)
    ctx->pc = 0x24430cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x244310: 0xb243001f  sdl         $v1, 0x1F($s2)
    ctx->pc = 0x244310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244314: 0xb6430018  sdr         $v1, 0x18($s2)
    ctx->pc = 0x244314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244318: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x244318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x24431c: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x24431cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x244320: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x244320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x244324: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x244324u;
    SET_GPR_U32(ctx, 31, 0x24432Cu);
    ctx->pc = 0x244328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244324u;
    // 0x244328: 0xa642000a  sh          $v0, 0xA($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x244324u, 0x24432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24432Cu;
label_24432c:
    // 0x24432c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24432cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x244330: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x244334: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x244334u;
    {
        const bool branch_taken_0x244334 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x244338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244334u;
        // 0x244338: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244334) {
            ctx->pc = 0x244344u;
            goto label_244344;
        }
    }
    ctx->pc = 0x24433Cu;
    // 0x24433c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x24433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x244340: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x244340u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
label_244344:
    // 0x244344: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x244344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244348: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x244348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24434c: 0x24466538  addiu       $a2, $v0, 0x6538
    ctx->pc = 0x24434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25912));
    // 0x244350: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x244350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x244354: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x244354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x244358: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x244358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x24435c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x24435cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x244360: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x244360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x244364: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x244364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244368: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x244368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24436c: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x24436cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244370: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x244370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244374: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x244374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244378: 0xb2450017  sdl         $a1, 0x17($s2)
    ctx->pc = 0x244378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24437c: 0xb6450010  sdr         $a1, 0x10($s2)
    ctx->pc = 0x24437cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244380: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x244380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x244384: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x244384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x244388: 0xb243001f  sdl         $v1, 0x1F($s2)
    ctx->pc = 0x244388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24438c: 0xb6430018  sdr         $v1, 0x18($s2)
    ctx->pc = 0x24438cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244390: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x244390u;
    {
        const bool branch_taken_0x244390 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x244394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244390u;
        // 0x244394: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244390) {
            ctx->pc = 0x2443B4u;
            goto label_2443b4;
        }
    }
    ctx->pc = 0x244398u;
    // 0x244398: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x244398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x24439c: 0x24e42c18  addiu       $a0, $a3, 0x2C18
    ctx->pc = 0x24439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 11288));
    // 0x2443a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2443a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2443a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2443a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2443a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2443a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2443ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2443ACu;
    {
        const bool branch_taken_0x2443ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ACu;
        // 0x2443b0: 0x8c62075c  lw          $v0, 0x75C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443ac) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x2443B4u;
label_2443b4:
    // 0x2443b4: 0x8f82b7e4  lw          $v0, -0x481C($gp)
    ctx->pc = 0x2443b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948836)));
    // 0x2443b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2443B8u;
    {
        const bool branch_taken_0x2443b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B8u;
        // 0x2443bc: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443b8) {
            ctx->pc = 0x2443DCu;
            goto label_2443dc;
        }
    }
    ctx->pc = 0x2443C0u;
    // 0x2443c0: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x2443c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x2443c4: 0x25042c18  addiu       $a0, $t0, 0x2C18
    ctx->pc = 0x2443c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 11288));
    // 0x2443c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2443c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2443cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2443d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2443d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2443d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2443D4u;
    {
        const bool branch_taken_0x2443d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D4u;
        // 0x2443d8: 0x8c620758  lw          $v0, 0x758($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443d4) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x2443DCu;
label_2443dc:
    // 0x2443dc: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x2443dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x2443e0: 0x25242c18  addiu       $a0, $t1, 0x2C18
    ctx->pc = 0x2443e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 11288));
    // 0x2443e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2443e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2443e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2443e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2443ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2443ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2443f0: 0x8c620774  lw          $v0, 0x774($v1)
    ctx->pc = 0x2443f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1908)));
label_2443f4:
    // 0x2443f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2443f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2443f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2443f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2443fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2443fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244400: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x244400u;
    SET_GPR_U32(ctx, 31, 0x244408u);
    ctx->pc = 0x244404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244400u;
    // 0x244404: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x244400u, 0x244408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244408u;
label_244408:
    // 0x244408: 0x26f30018  addiu       $s3, $s7, 0x18
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x24440c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x24440cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x244410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244414: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x244414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x244418: 0x1a800037  blez        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x244418u;
    {
        const bool branch_taken_0x244418 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244418) {
            ctx->pc = 0x2444F8u;
            goto label_2444f8;
        }
    }
    ctx->pc = 0x244420u;
    // 0x244420: 0x3c170035  lui         $s7, 0x35
    ctx->pc = 0x244420u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)53 << 16));
    // 0x244424: 0x0  nop
    ctx->pc = 0x244424u;
    // NOP
label_244428:
    // 0x244428: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x244428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x24442c: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x24442cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x244430: 0x26e56558  addiu       $a1, $s7, 0x6558
    ctx->pc = 0x244430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 25944));
    // 0x244434: 0x68aa0007  ldl         $t2, 0x7($a1)
    ctx->pc = 0x244434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x244438: 0x6caa0000  ldr         $t2, 0x0($a1)
    ctx->pc = 0x244438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24443c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x24443cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x244440: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x244440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x244444: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x244444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x244448: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x244448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x24444c: 0xb24a0007  sdl         $t2, 0x7($s2)
    ctx->pc = 0x24444cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244450: 0xb64a0000  sdr         $t2, 0x0($s2)
    ctx->pc = 0x244450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244454: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x244454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244458: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x244458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24445c: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x24445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244460: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x244460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244464: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x244464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x244468: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x244468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x24446c: 0xb24a001f  sdl         $t2, 0x1F($s2)
    ctx->pc = 0x24446cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244470: 0xb64a0018  sdr         $t2, 0x18($s2)
    ctx->pc = 0x244470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244474: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x244474u;
    {
        const bool branch_taken_0x244474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244474u;
        // 0x244478: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244474) {
            ctx->pc = 0x2444ACu;
            goto label_2444ac;
        }
    }
    ctx->pc = 0x24447Cu;
    // 0x24447c: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x24447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x244480: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x244484: 0x244238f0  addiu       $v0, $v0, 0x38F0
    ctx->pc = 0x244484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14576));
    // 0x244488: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x244488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24448c: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x24448cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x244490: 0xc090cca  jal         func_243328
    ctx->pc = 0x244490u;
    SET_GPR_U32(ctx, 31, 0x244498u);
    ctx->pc = 0x244494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244490u;
    // 0x244494: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243328u, 0x244490u, 0x244498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244498u;
label_244498:
    // 0x244498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x244498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24449c: 0xc0b97d7  jal         func_2E5F5C
    ctx->pc = 0x24449Cu;
    SET_GPR_U32(ctx, 31, 0x2444A4u);
    ctx->pc = 0x2444A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24449Cu;
    // 0x2444a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F5Cu, 0x24449Cu, 0x2444A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444A4u;
label_2444a4:
    // 0x2444a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2444A4u;
    {
        const bool branch_taken_0x2444a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2444A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444A4u;
        // 0x2444a8: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2444a4) {
            ctx->pc = 0x2444C4u;
            goto label_2444c4;
        }
    }
    ctx->pc = 0x2444ACu;
label_2444ac:
    // 0x2444ac: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x2444acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2444b0: 0x2784b7e8  addiu       $a0, $gp, -0x4818
    ctx->pc = 0x2444b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948840));
    // 0x2444b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2444b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2444b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2444b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2444bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2444bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2444c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2444c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2444c4:
    // 0x2444c4: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2444c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2444c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2444c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444cc: 0xa6500008  sh          $s0, 0x8($s2)
    ctx->pc = 0x2444ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x2444d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2444d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2444d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2444d8: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x2444D8u;
    SET_GPR_U32(ctx, 31, 0x2444E0u);
    ctx->pc = 0x2444DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444D8u;
    // 0x2444dc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x2444D8u, 0x2444E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444E0u;
label_2444e0:
    // 0x2444e0: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2444e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2444e4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2444e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2444e8: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x2444e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2444ec: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2444f0: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2444F0u;
    {
        const bool branch_taken_0x2444f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2444F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444F0u;
        // 0x2444f4: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2444f0) {
            ctx->pc = 0x244428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244428;
        }
    }
    ctx->pc = 0x2444F8u;
label_2444f8:
    // 0x2444f8: 0x27c22e80  addiu       $v0, $fp, 0x2E80
    ctx->pc = 0x2444f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 11904));
    // 0x2444fc: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2444fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x244500: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x244500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x244504: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x244504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x244508: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x244508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24450c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x244510: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x244510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x244514: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x244514u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x244518: 0x24ca6538  addiu       $t2, $a2, 0x6538
    ctx->pc = 0x244518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 25912));
    // 0x24451c: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x24451cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x244520: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x244520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244524: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x244524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x244528: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x244528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x24452c: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x24452cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x244530: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x244530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x244534: 0xb2470007  sdl         $a3, 0x7($s2)
    ctx->pc = 0x244534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244538: 0xb6470000  sdr         $a3, 0x0($s2)
    ctx->pc = 0x244538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24453c: 0xb248000f  sdl         $t0, 0xF($s2)
    ctx->pc = 0x24453cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244540: 0xb6480008  sdr         $t0, 0x8($s2)
    ctx->pc = 0x244540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244544: 0xb2490017  sdl         $t1, 0x17($s2)
    ctx->pc = 0x244544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244548: 0xb6490010  sdr         $t1, 0x10($s2)
    ctx->pc = 0x244548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24454c: 0x6947001f  ldl         $a3, 0x1F($t2)
    ctx->pc = 0x24454cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x244550: 0x6d470018  ldr         $a3, 0x18($t2)
    ctx->pc = 0x244550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244554: 0xb247001f  sdl         $a3, 0x1F($s2)
    ctx->pc = 0x244554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244558: 0xb6470018  sdr         $a3, 0x18($s2)
    ctx->pc = 0x244558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24455c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x24455Cu;
    {
        const bool branch_taken_0x24455c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x244560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24455Cu;
        // 0x244560: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24455c) {
            ctx->pc = 0x244580u;
            goto label_244580;
        }
    }
    ctx->pc = 0x244564u;
    // 0x244564: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x244564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x244568: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x244568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24456c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244570: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x244574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x244578u;
    {
        const bool branch_taken_0x244578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244578u;
        // 0x24457c: 0x8c6205c8  lw          $v0, 0x5C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244578) {
            ctx->pc = 0x244598u;
            goto label_244598;
        }
    }
    ctx->pc = 0x244580u;
label_244580:
    // 0x244580: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x244580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x244584: 0x24a42c18  addiu       $a0, $a1, 0x2C18
    ctx->pc = 0x244584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
    // 0x244588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24458c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x244590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244594: 0x8c6205cc  lw          $v0, 0x5CC($v1)
    ctx->pc = 0x244594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1484)));
label_244598:
    // 0x244598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24459c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x24459cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2445a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2445a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445a4: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x2445A4u;
    SET_GPR_U32(ctx, 31, 0x2445ACu);
    ctx->pc = 0x2445A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2445A4u;
    // 0x2445a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x2445A4u, 0x2445ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445ACu;
label_2445ac:
    // 0x2445ac: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2445acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2445b0: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2445B0u;
    SET_GPR_U32(ctx, 31, 0x2445B8u);
    ctx->pc = 0x2445B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2445B0u;
    // 0x2445b4: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2445B0u, 0x2445B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445B8u;
label_2445b8:
    // 0x2445b8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2445b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2445bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2445BCu;
    {
        const bool branch_taken_0x2445bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445bc) {
            ctx->pc = 0x2445D4u;
            goto label_2445d4;
        }
    }
    ctx->pc = 0x2445C4u;
    // 0x2445c4: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x2445c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2445c8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2445c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2445cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2445CCu;
    {
        const bool branch_taken_0x2445cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445cc) {
            ctx->pc = 0x2445F8u;
            goto label_2445f8;
        }
    }
    ctx->pc = 0x2445D4u;
label_2445d4:
    // 0x2445d4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2445D4u;
    SET_GPR_U32(ctx, 31, 0x2445DCu);
    ctx->pc = 0x2445D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2445D4u;
    // 0x2445d8: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2445D4u, 0x2445DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445DCu;
label_2445dc:
    // 0x2445dc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2445dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2445e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2445E0u;
    {
        const bool branch_taken_0x2445e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445e0) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x2445E8u;
    // 0x2445e8: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x2445e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2445ec: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2445ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2445f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2445F0u;
    {
        const bool branch_taken_0x2445f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F0u;
        // 0x2445f4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445f0) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x2445F8u;
label_2445f8:
    // 0x2445f8: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2445fc: 0xa6c20004  sh          $v0, 0x4($s6)
    ctx->pc = 0x2445fcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x244600: 0xc081546  jal         func_205518
    ctx->pc = 0x244600u;
    SET_GPR_U32(ctx, 31, 0x244608u);
    ctx->pc = 0x244604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244600u;
    // 0x244604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x244600u, 0x244608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244608u;
label_244608:
    // 0x244608: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x244608u;
    {
        const bool branch_taken_0x244608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244608u;
        // 0x24460c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244608) {
            ctx->pc = 0x2449ECu;
            goto label_2449ec;
        }
    }
    ctx->pc = 0x244610u;
label_244610:
    // 0x244610: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x244610u;
    SET_GPR_U32(ctx, 31, 0x244618u);
    ctx->pc = 0x244614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244610u;
    // 0x244614: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x244610u, 0x244618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244618u;
label_244618:
    // 0x244618: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x244618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x24461c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x24461Cu;
    {
        const bool branch_taken_0x24461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24461c) {
            ctx->pc = 0x2446B8u;
            goto label_2446b8;
        }
    }
    ctx->pc = 0x244624u;
    // 0x244624: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x244624u;
    {
        const bool branch_taken_0x244624 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x244628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244624u;
        // 0x244628: 0x8f84b7e4  lw          $a0, -0x481C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244624) {
            ctx->pc = 0x244678u;
            goto label_244678;
        }
    }
    ctx->pc = 0x24462Cu;
    // 0x24462c: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x24462cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x244630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x244630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x244634: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x244634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x244638: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x244638u;
    {
        const bool branch_taken_0x244638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244638u;
        // 0x24463c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244638) {
            ctx->pc = 0x244674u;
            goto label_244674;
        }
    }
    ctx->pc = 0x244640u;
    // 0x244640: 0xc081546  jal         func_205518
    ctx->pc = 0x244640u;
    SET_GPR_U32(ctx, 31, 0x244648u);
    ctx->pc = 0x244644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244640u;
    // 0x244644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x244640u, 0x244648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244648u;
label_244648:
    // 0x244648: 0x96c40004  lhu         $a0, 0x4($s6)
    ctx->pc = 0x244648u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x24464c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x244650: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x244654: 0xaf82b80c  sw          $v0, -0x47F4($gp)
    ctx->pc = 0x244654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948876), GPR_U32(ctx, 2));
    // 0x244658: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24465c: 0xaf83a0a8  sw          $v1, -0x5F58($gp)
    ctx->pc = 0x24465cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 3));
    // 0x244660: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x244660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244664: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x244668: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24466c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x24466Cu;
    {
        const bool branch_taken_0x24466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24466Cu;
        // 0x244670: 0xaf83b818  sw          $v1, -0x47E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24466c) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x244674u;
label_244674:
    // 0x244674: 0x8f84b7e4  lw          $a0, -0x481C($gp)
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948836)));
label_244678:
    // 0x244678: 0x188000db  blez        $a0, . + 4 + (0xDB << 2)
    ctx->pc = 0x244678u;
    {
        const bool branch_taken_0x244678 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244678u;
        // 0x24467c: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244678) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x244680u;
    // 0x244680: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x244680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x244684: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244688: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x244688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24468c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x24468Cu;
    {
        const bool branch_taken_0x24468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24468Cu;
        // 0x244690: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24468c) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x244694u;
    // 0x244694: 0xc081546  jal         func_205518
    ctx->pc = 0x244694u;
    SET_GPR_U32(ctx, 31, 0x24469Cu);
    ctx->pc = 0x244698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244694u;
    // 0x244698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x244694u, 0x24469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24469Cu;
label_24469c:
    // 0x24469c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2446a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2446a4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2446a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2446a8: 0xaf83b818  sw          $v1, -0x47E8($gp)
    ctx->pc = 0x2446a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 3));
    // 0x2446ac: 0xaf82a0a8  sw          $v0, -0x5F58($gp)
    ctx->pc = 0x2446acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
    // 0x2446b0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2446B0u;
    {
        const bool branch_taken_0x2446b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446B0u;
        // 0x2446b4: 0xaf84b808  sw          $a0, -0x47F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948872), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446b0) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x2446B8u;
label_2446b8:
    // 0x2446b8: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2446B8u;
    SET_GPR_U32(ctx, 31, 0x2446C0u);
    ctx->pc = 0x2446BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446B8u;
    // 0x2446bc: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2446B8u, 0x2446C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446C0u;
label_2446c0:
    // 0x2446c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2446c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2446c4: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2446C4u;
    {
        const bool branch_taken_0x2446c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446C4u;
        // 0x2446c8: 0x8f849354  lw          $a0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446c4) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x2446CCu;
    // 0x2446cc: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2446ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2446d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2446d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2446d4: 0x24c52c18  addiu       $a1, $a2, 0x2C18
    ctx->pc = 0x2446d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 11288));
    // 0x2446d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2446dc: 0xaf82a0a8  sw          $v0, -0x5F58($gp)
    ctx->pc = 0x2446dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942888), GPR_U32(ctx, 2));
    // 0x2446e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2446e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2446e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2446e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2446e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2446ec: 0xaf83b808  sw          $v1, -0x47F8($gp)
    ctx->pc = 0x2446ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948872), GPR_U32(ctx, 3));
    // 0x2446f0: 0x8c4305d0  lw          $v1, 0x5D0($v0)
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1488)));
    // 0x2446f4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2446F4u;
    {
        const bool branch_taken_0x2446f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446F4u;
        // 0x2446f8: 0xaf83b7d4  sw          $v1, -0x482C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948820), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446f4) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x2446FCu;
label_2446fc:
    // 0x2446fc: 0x8f83a0cc  lw          $v1, -0x5F34($gp)
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
    // 0x244700: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x244700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x244704: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x244704u;
    {
        const bool branch_taken_0x244704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244704u;
        // 0x244708: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244704) {
            ctx->pc = 0x24472Cu;
            goto label_24472c;
        }
    }
    ctx->pc = 0x24470Cu;
    // 0x24470c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24470Cu;
    SET_GPR_U32(ctx, 31, 0x244714u);
    ctx->pc = 0x244710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24470Cu;
    // 0x244710: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24470Cu, 0x244714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244714u;
label_244714:
    // 0x244714: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x244714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x244718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244718u;
    {
        const bool branch_taken_0x244718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244718u;
        // 0x24471c: 0x8f83a0cc  lw          $v1, -0x5F34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244718) {
            ctx->pc = 0x244728u;
            goto label_244728;
        }
    }
    ctx->pc = 0x244720u;
    // 0x244720: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x244720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x244724: 0xaf83a0cc  sw          $v1, -0x5F34($gp)
    ctx->pc = 0x244724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
label_244728:
    // 0x244728: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x244728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_24472c:
    // 0x24472c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24472Cu;
    {
        const bool branch_taken_0x24472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24472Cu;
        // 0x244730: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24472c) {
            ctx->pc = 0x244754u;
            goto label_244754;
        }
    }
    ctx->pc = 0x244734u;
    // 0x244734: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x244734u;
    SET_GPR_U32(ctx, 31, 0x24473Cu);
    ctx->pc = 0x244738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244734u;
    // 0x244738: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x244734u, 0x24473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24473Cu;
label_24473c:
    // 0x24473c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x24473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x244740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244740u;
    {
        const bool branch_taken_0x244740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244740u;
        // 0x244744: 0x8f83a0cc  lw          $v1, -0x5F34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244740) {
            ctx->pc = 0x244750u;
            goto label_244750;
        }
    }
    ctx->pc = 0x244748u;
    // 0x244748: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x244748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x24474c: 0xaf83a0cc  sw          $v1, -0x5F34($gp)
    ctx->pc = 0x24474cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
label_244750:
    // 0x244750: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x244750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_244754:
    // 0x244754: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x244754u;
    {
        const bool branch_taken_0x244754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244754u;
        // 0x244758: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244754) {
            ctx->pc = 0x24477Cu;
            goto label_24477c;
        }
    }
    ctx->pc = 0x24475Cu;
    // 0x24475c: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x24475Cu;
    SET_GPR_U32(ctx, 31, 0x244764u);
    ctx->pc = 0x244760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24475Cu;
    // 0x244760: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x24475Cu, 0x244764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244764u;
label_244764:
    // 0x244764: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x244764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x244768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244768u;
    {
        const bool branch_taken_0x244768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x8f83a0cc  lw          $v1, -0x5F34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244768) {
            ctx->pc = 0x244778u;
            goto label_244778;
        }
    }
    ctx->pc = 0x244770u;
    // 0x244770: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x244770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x244774: 0xaf83a0cc  sw          $v1, -0x5F34($gp)
    ctx->pc = 0x244774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
label_244778:
    // 0x244778: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x244778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_24477c:
    // 0x24477c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24477Cu;
    {
        const bool branch_taken_0x24477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24477c) {
            ctx->pc = 0x2447A0u;
            goto label_2447a0;
        }
    }
    ctx->pc = 0x244784u;
    // 0x244784: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x244784u;
    SET_GPR_U32(ctx, 31, 0x24478Cu);
    ctx->pc = 0x244788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244784u;
    // 0x244788: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x244784u, 0x24478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24478Cu;
label_24478c:
    // 0x24478c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x24478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x244790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244790u;
    {
        const bool branch_taken_0x244790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244790u;
        // 0x244794: 0x8f82a0cc  lw          $v0, -0x5F34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244790) {
            ctx->pc = 0x2447A0u;
            goto label_2447a0;
        }
    }
    ctx->pc = 0x244798u;
    // 0x244798: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x244798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x24479c: 0xaf83a0cc  sw          $v1, -0x5F34($gp)
    ctx->pc = 0x24479cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942924), GPR_U32(ctx, 3));
label_2447a0:
    // 0x2447a0: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x2447A0u;
    SET_GPR_U32(ctx, 31, 0x2447A8u);
    ctx->pc = 0x2447A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447A0u;
    // 0x2447a4: 0x8f84b7ec  lw          $a0, -0x4814($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x2447A0u, 0x2447A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447A8u;
label_2447a8:
    // 0x2447a8: 0x8f84b7d4  lw          $a0, -0x482C($gp)
    ctx->pc = 0x2447a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948820)));
    // 0x2447ac: 0x5080008f  beql        $a0, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x2447ACu;
    {
        const bool branch_taken_0x2447ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2447ac) {
            ctx->pc = 0x2447B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447ACu;
            // 0x2447b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2449ECu;
            goto label_2449ec;
        }
    }
    ctx->pc = 0x2447B4u;
    // 0x2447b4: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2447B4u;
    SET_GPR_U32(ctx, 31, 0x2447BCu);
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2447B4u, 0x2447BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447BCu;
label_2447bc:
    // 0x2447bc: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x2447bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2447c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2447c4: 0x24462e80  addiu       $a2, $v0, 0x2E80
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x2447c8: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x352E9Cu));
    // 0x2447cc: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2447ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2447d0: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2447D0u;
    {
        const bool branch_taken_0x2447d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447D0u;
        // 0x2447d4: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447d0) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x2447D8u;
    // 0x2447d8: 0x8c6299fc  lw          $v0, -0x6604($v1)
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941180)));
    // 0x2447dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2447dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2447e0: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2447E0u;
    {
        const bool branch_taken_0x2447e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E0u;
        // 0x2447e4: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447e0) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x2447E8u;
    // 0x2447e8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2447e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2447ec: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2447ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2447f0: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x2447f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x2447f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2447f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2447f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2447fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2447fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244800: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x244800u;
    {
        const bool branch_taken_0x244800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244800u;
        // 0x244804: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244800) {
            ctx->pc = 0x2449E8u;
            goto label_2449e8;
        }
    }
    ctx->pc = 0x244808u;
label_244808:
    // 0x244808: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x244808u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x24480c: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x244810: 0x26022e80  addiu       $v0, $s0, 0x2E80
    ctx->pc = 0x244810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11904));
    // 0x244814: 0x3c140035  lui         $s4, 0x35
    ctx->pc = 0x244814u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    // 0x244818: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x244818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x352E98u));
    // 0x24481c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x24481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x244820: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x244820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x244824: 0x268a6538  addiu       $t2, $s4, 0x6538
    ctx->pc = 0x244824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 25912));
    // 0x244828: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x244828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24482c: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x24482cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244830: 0x6948000f  ldl         $t0, 0xF($t2)
    ctx->pc = 0x244830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x244834: 0x6d480008  ldr         $t0, 0x8($t2)
    ctx->pc = 0x244834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x244838: 0x69490017  ldl         $t1, 0x17($t2)
    ctx->pc = 0x244838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x24483c: 0x6d490010  ldr         $t1, 0x10($t2)
    ctx->pc = 0x24483cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x244840: 0xb2470007  sdl         $a3, 0x7($s2)
    ctx->pc = 0x244840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244844: 0xb6470000  sdr         $a3, 0x0($s2)
    ctx->pc = 0x244844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244848: 0xb248000f  sdl         $t0, 0xF($s2)
    ctx->pc = 0x244848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24484c: 0xb6480008  sdr         $t0, 0x8($s2)
    ctx->pc = 0x24484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244850: 0xb2490017  sdl         $t1, 0x17($s2)
    ctx->pc = 0x244850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244854: 0xb6490010  sdr         $t1, 0x10($s2)
    ctx->pc = 0x244854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244858: 0x6947001f  ldl         $a3, 0x1F($t2)
    ctx->pc = 0x244858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24485c: 0x6d470018  ldr         $a3, 0x18($t2)
    ctx->pc = 0x24485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244860: 0xb247001f  sdl         $a3, 0x1F($s2)
    ctx->pc = 0x244860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244864: 0xb6470018  sdr         $a3, 0x18($s2)
    ctx->pc = 0x244864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244868: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x244868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
    // 0x24486c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x24486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x244870: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x244870u;
    {
        const bool branch_taken_0x244870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244870u;
        // 0x244874: 0x8f82b7cc  lw          $v0, -0x4834($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244870) {
            ctx->pc = 0x2448A8u;
            goto label_2448a8;
        }
    }
    ctx->pc = 0x244878u;
    // 0x244878: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x244878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x24487c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24487Cu;
    {
        const bool branch_taken_0x24487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24487Cu;
        // 0x244880: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24487c) {
            ctx->pc = 0x2448A4u;
            goto label_2448a4;
        }
    }
    ctx->pc = 0x244884u;
    // 0x244884: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x244884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x244888: 0x24642c18  addiu       $a0, $v1, 0x2C18
    ctx->pc = 0x244888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11288));
    // 0x24488c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24488cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244890: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x244890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x244894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244898: 0x8c640770  lw          $a0, 0x770($v1)
    ctx->pc = 0x244898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1904)));
    // 0x24489c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24489Cu;
    {
        const bool branch_taken_0x24489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24489Cu;
        // 0x2448a0: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24489c) {
            ctx->pc = 0x2448ACu;
            goto label_2448ac;
        }
    }
    ctx->pc = 0x2448A4u;
label_2448a4:
    // 0x2448a4: 0x8f82b7d0  lw          $v0, -0x4830($gp)
    ctx->pc = 0x2448a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948816)));
label_2448a8:
    // 0x2448a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2448a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2448ac:
    // 0x2448ac: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2448acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2448b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2448b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2448b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2448b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448bc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2448bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2448c0: 0x26102e80  addiu       $s0, $s0, 0x2E80
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11904));
    // 0x2448c4: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x2448c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2448c8: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x2448C8u;
    SET_GPR_U32(ctx, 31, 0x2448D0u);
    ctx->pc = 0x2448CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448C8u;
    // 0x2448cc: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x2448C8u, 0x2448D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448D0u;
label_2448d0:
    // 0x2448d0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2448d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2448d4: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x2448d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2448d8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2448dc: 0x24912c18  addiu       $s1, $a0, 0x2C18
    ctx->pc = 0x2448dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 11288));
    // 0x2448e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2448e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448e4: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x2448e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x2448e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2448e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2448ec: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2448ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2448f0: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2448f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2448f4: 0x26896538  addiu       $t1, $s4, 0x6538
    ctx->pc = 0x2448f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 25912));
    // 0x2448f8: 0x69250007  ldl         $a1, 0x7($t1)
    ctx->pc = 0x2448f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2448fc: 0x6d250000  ldr         $a1, 0x0($t1)
    ctx->pc = 0x2448fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244900: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x244900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x244904: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x244904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244908: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x244908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x24490c: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x24490cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x244910: 0xb2450007  sdl         $a1, 0x7($s2)
    ctx->pc = 0x244910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244914: 0xb6450000  sdr         $a1, 0x0($s2)
    ctx->pc = 0x244914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244918: 0xb247000f  sdl         $a3, 0xF($s2)
    ctx->pc = 0x244918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24491c: 0xb6470008  sdr         $a3, 0x8($s2)
    ctx->pc = 0x24491cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244920: 0xb2480017  sdl         $t0, 0x17($s2)
    ctx->pc = 0x244920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244924: 0xb6480010  sdr         $t0, 0x10($s2)
    ctx->pc = 0x244924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244928: 0x6925001f  ldl         $a1, 0x1F($t1)
    ctx->pc = 0x244928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x24492c: 0x6d250018  ldr         $a1, 0x18($t1)
    ctx->pc = 0x24492cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244930: 0xb245001f  sdl         $a1, 0x1F($s2)
    ctx->pc = 0x244930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244934: 0xb6450018  sdr         $a1, 0x18($s2)
    ctx->pc = 0x244934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24493c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x24493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x244940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244944: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x244948: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24494c: 0x8c6705d4  lw          $a3, 0x5D4($v1)
    ctx->pc = 0x24494cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1492)));
    // 0x244950: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x244950u;
    SET_GPR_U32(ctx, 31, 0x244958u);
    ctx->pc = 0x244954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244950u;
    // 0x244954: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x244950u, 0x244958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244958u;
label_244958:
    // 0x244958: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x24495c: 0x26846538  addiu       $a0, $s4, 0x6538
    ctx->pc = 0x24495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25912));
    // 0x244960: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x244960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x244964: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x244964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x244968: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x244968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24496c: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x24496cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x244970: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x244970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x244974: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x244974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x244978: 0xb24a0007  sdl         $t2, 0x7($s2)
    ctx->pc = 0x244978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24497c: 0xb64a0000  sdr         $t2, 0x0($s2)
    ctx->pc = 0x24497cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244980: 0xb242000f  sdl         $v0, 0xF($s2)
    ctx->pc = 0x244980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244984: 0xb6420008  sdr         $v0, 0x8($s2)
    ctx->pc = 0x244984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244988: 0xb2430017  sdl         $v1, 0x17($s2)
    ctx->pc = 0x244988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24498c: 0xb6430010  sdr         $v1, 0x10($s2)
    ctx->pc = 0x24498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244990: 0x688a001f  ldl         $t2, 0x1F($a0)
    ctx->pc = 0x244990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x244994: 0x6c8a0018  ldr         $t2, 0x18($a0)
    ctx->pc = 0x244994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x244998: 0xb24a001f  sdl         $t2, 0x1F($s2)
    ctx->pc = 0x244998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24499c: 0xb64a0018  sdr         $t2, 0x18($s2)
    ctx->pc = 0x24499cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2449a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2449a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2449a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2449a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449ac: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2449acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2449b0: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2449b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2449b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2449b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2449b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2449bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2449c0: 0x8c670778  lw          $a3, 0x778($v1)
    ctx->pc = 0x2449c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1912)));
    // 0x2449c4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x2449c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x2449c8: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x2449c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2449cc: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x2449ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2449d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2449d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2449d4: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x2449d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x2449d8: 0xc08b5f0  jal         func_22D7C0
    ctx->pc = 0x2449D8u;
    SET_GPR_U32(ctx, 31, 0x2449E0u);
    ctx->pc = 0x2449DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449D8u;
    // 0x2449dc: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7C0u, 0x2449D8u, 0x2449E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449E0u;
label_2449e0:
    // 0x2449e0: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x2449e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
label_2449e4:
    // 0x2449e4: 0xa6c20004  sh          $v0, 0x4($s6)
    ctx->pc = 0x2449e4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 2));
label_2449e8:
    // 0x2449e8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2449e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2449ec:
    // 0x2449ec: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x2449ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x2449f0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x2449f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x2449f4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2449f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2449f8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2449fc: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2449fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x244a00: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x244a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x244a04: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x244a04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x244a08: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x244a08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x244a0c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x244a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x244a10: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x244a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x244a14: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x244a18: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x244a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x244a1c: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x244a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x244a20: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x244a20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x244a24: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x244a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244a28: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x244a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x244A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A2Cu;
        // 0x244a30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244A34u;
}

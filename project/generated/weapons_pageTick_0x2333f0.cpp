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

// Function: weapons_pageTick
// Address: 0x2333f0 - 0x23380c
void weapons_pageTick_0x2333f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weapons_pageTick_0x2333f0");
#endif

    switch (ctx->pc) {
        case 0x233448u: goto label_233448;
        case 0x233450u: goto label_233450;
        case 0x233460u: goto label_233460;
        case 0x233470u: goto label_233470;
        case 0x233574u: goto label_233574;
        case 0x23359cu: goto label_23359c;
        case 0x2335acu: goto label_2335ac;
        case 0x2335e4u: goto label_2335e4;
        case 0x233618u: goto label_233618;
        case 0x233674u: goto label_233674;
        case 0x233680u: goto label_233680;
        case 0x233688u: goto label_233688;
        case 0x23369cu: goto label_23369c;
        case 0x2336d0u: goto label_2336d0;
        case 0x233718u: goto label_233718;
        case 0x23373cu: goto label_23373c;
        case 0x23374cu: goto label_23374c;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337e4u: goto label_2337e4;
        default: break;
    }

    ctx->pc = 0x2333f0u;

    // 0x2333f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2333f4: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x2333f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x2333f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2333f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2333fc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2333fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x233400: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x233400u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x233404: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x233404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x233408: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x233408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23340c: 0x26832c18  addiu       $v1, $s4, 0x2C18
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x233410: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x233410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x233414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233418: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x233418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23341c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233428: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x233428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23342c: 0x24a53b38  addiu       $a1, $a1, 0x3B38
    ctx->pc = 0x23342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15160));
    // 0x233430: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233434: 0x3c150035  lui         $s5, 0x35
    ctx->pc = 0x233434u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)53 << 16));
    // 0x233438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x233438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23343c: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x23343cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x233440: 0xc08c086  jal         func_230218
    ctx->pc = 0x233440u;
    SET_GPR_U32(ctx, 31, 0x233448u);
    ctx->pc = 0x233444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233440u;
    // 0x233444: 0x8c6401f4  lw          $a0, 0x1F4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x233440u, 0x233448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233448u;
label_233448:
    // 0x233448: 0xc08a984  jal         func_22A610
    ctx->pc = 0x233448u;
    SET_GPR_U32(ctx, 31, 0x233450u);
    ctx->pc = 0x23344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233448u;
    // 0x23344c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x233448u, 0x233450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233450u;
label_233450:
    // 0x233450: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x233454: 0xaf80b75c  sw          $zero, -0x48A4($gp)
    ctx->pc = 0x233454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948700), GPR_U32(ctx, 0));
    // 0x233458: 0x24522a00  addiu       $s2, $v0, 0x2A00
    ctx->pc = 0x233458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x23345c: 0x0  nop
    ctx->pc = 0x23345cu;
    // NOP
label_233460:
    // 0x233460: 0x16130005  bne         $s0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x233460u;
    {
        const bool branch_taken_0x233460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x233464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233460u;
        // 0x233464: 0x8f83b75c  lw          $v1, -0x48A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233460) {
            ctx->pc = 0x233478u;
            goto label_233478;
        }
    }
    ctx->pc = 0x233468u;
    // 0x233468: 0xc08cb64  jal         func_232D90
    ctx->pc = 0x233468u;
    SET_GPR_U32(ctx, 31, 0x233470u);
    ctx->pc = 0x23346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233468u;
    // 0x23346c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D90u, 0x233468u, 0x233470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233470u;
label_233470:
    // 0x233470: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233470u;
    {
        const bool branch_taken_0x233470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233470u;
        // 0x233474: 0x8f83b75c  lw          $v1, -0x48A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233470) {
            ctx->pc = 0x23348Cu;
            goto label_23348c;
        }
    }
    ctx->pc = 0x233478u;
label_233478:
    // 0x233478: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x233478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23347c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x233480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x233480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x233484: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x233484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x233488: 0xaf83b75c  sw          $v1, -0x48A4($gp)
    ctx->pc = 0x233488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948700), GPR_U32(ctx, 3));
label_23348c:
    // 0x23348c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23348cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x233490: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x233490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x233494: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x233494u;
    {
        const bool branch_taken_0x233494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233494) {
            ctx->pc = 0x233460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233460;
        }
    }
    ctx->pc = 0x23349Cu;
    // 0x23349c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2334a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2334a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2334a4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2334a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2334a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2334A8u;
    {
        const bool branch_taken_0x2334a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2334ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A8u;
        // 0x2334ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334a8) {
            ctx->pc = 0x233500u;
            goto label_233500;
        }
    }
    ctx->pc = 0x2334B0u;
    // 0x2334b0: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x2334b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2334b4: 0x14a200a7  bne         $a1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2334B4u;
    {
        const bool branch_taken_0x2334b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334B4u;
        // 0x2334b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334b4) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x2334BCu;
    // 0x2334bc: 0x8f84a04c  lw          $a0, -0x5FB4($gp)
    ctx->pc = 0x2334bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
    // 0x2334c0: 0x8f82b75c  lw          $v0, -0x48A4($gp)
    ctx->pc = 0x2334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
    // 0x2334c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2334c8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2334c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2334cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2334CCu;
    {
        const bool branch_taken_0x2334cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2334D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334CCu;
        // 0x2334d0: 0xaf84a04c  sw          $a0, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334cc) {
            ctx->pc = 0x2334E0u;
            goto label_2334e0;
        }
    }
    ctx->pc = 0x2334D4u;
    // 0x2334d4: 0xaf80a04c  sw          $zero, -0x5FB4($gp)
    ctx->pc = 0x2334d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
    // 0x2334d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2334d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334dc: 0xaf80a048  sw          $zero, -0x5FB8($gp)
    ctx->pc = 0x2334dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 0));
label_2334e0:
    // 0x2334e0: 0x8f82a048  lw          $v0, -0x5FB8($gp)
    ctx->pc = 0x2334e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
    // 0x2334e4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2334e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2334e8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2334e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2334ec: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2334ECu;
    {
        const bool branch_taken_0x2334ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2334F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334ECu;
        // 0x2334f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334ec) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x2334F4u;
    // 0x2334f4: 0x2482fff7  addiu       $v0, $a0, -0x9
    ctx->pc = 0x2334f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x2334f8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2334F8u;
    {
        const bool branch_taken_0x2334f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2334FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334F8u;
        // 0x2334fc: 0xaf82a048  sw          $v0, -0x5FB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334f8) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x233500u;
label_233500:
    // 0x233500: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x233500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x233504: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x233504u;
    {
        const bool branch_taken_0x233504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233504u;
        // 0x233508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233504) {
            ctx->pc = 0x233554u;
            goto label_233554;
        }
    }
    ctx->pc = 0x23350Cu;
    // 0x23350c: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x23350cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233510: 0x14a20090  bne         $a1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x233510u;
    {
        const bool branch_taken_0x233510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x233514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233510u;
        // 0x233514: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233510) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x233518u;
    // 0x233518: 0x8f84a04c  lw          $a0, -0x5FB4($gp)
    ctx->pc = 0x233518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
    // 0x23351c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x233520: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233520u;
    {
        const bool branch_taken_0x233520 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x233524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233520u;
        // 0x233524: 0xaf84a04c  sw          $a0, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233520) {
            ctx->pc = 0x23353Cu;
            goto label_23353c;
        }
    }
    ctx->pc = 0x233528u;
    // 0x233528: 0x8f82b75c  lw          $v0, -0x48A4($gp)
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
    // 0x23352c: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x23352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x233530: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x233530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x233534: 0xaf83a048  sw          $v1, -0x5FB8($gp)
    ctx->pc = 0x233534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 3));
    // 0x233538: 0xaf84a04c  sw          $a0, -0x5FB4($gp)
    ctx->pc = 0x233538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 4));
label_23353c:
    // 0x23353c: 0x8f82a048  lw          $v0, -0x5FB8($gp)
    ctx->pc = 0x23353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942792)));
    // 0x233540: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x233540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x233544: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x233544u;
    {
        const bool branch_taken_0x233544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233544) {
            ctx->pc = 0x233548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233544u;
            // 0x233548: 0xaf84a048  sw          $a0, -0x5FB8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x23354Cu;
    // 0x23354c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x23354Cu;
    {
        const bool branch_taken_0x23354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23354Cu;
        // 0x233550: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23354c) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x233554u;
label_233554:
    // 0x233554: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x233554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x233558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233558u;
    {
        const bool branch_taken_0x233558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233558u;
        // 0x23355c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233558) {
            ctx->pc = 0x23357Cu;
            goto label_23357c;
        }
    }
    ctx->pc = 0x233560u;
    // 0x233560: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x233560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233564: 0x14620090  bne         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x233564u;
    {
        const bool branch_taken_0x233564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233564) {
            ctx->pc = 0x2337A8u;
            goto label_2337a8;
        }
    }
    ctx->pc = 0x23356Cu;
    // 0x23356c: 0xc08cb7c  jal         func_232DF0
    ctx->pc = 0x23356Cu;
    SET_GPR_U32(ctx, 31, 0x233574u);
    ctx->pc = 0x232DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DF0u, 0x23356Cu, 0x233574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233574u;
label_233574:
    // 0x233574: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x233574u;
    {
        const bool branch_taken_0x233574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233574u;
        // 0x233578: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233574) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x23357Cu;
label_23357c:
    // 0x23357c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x23357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x233580: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233580u;
    {
        const bool branch_taken_0x233580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233580u;
        // 0x233584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233580) {
            ctx->pc = 0x2335A4u;
            goto label_2335a4;
        }
    }
    ctx->pc = 0x233588u;
    // 0x233588: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x233588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23358c: 0x14620086  bne         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x23358Cu;
    {
        const bool branch_taken_0x23358c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23358Cu;
        // 0x233590: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23358c) {
            ctx->pc = 0x2337A8u;
            goto label_2337a8;
        }
    }
    ctx->pc = 0x233594u;
    // 0x233594: 0xc08cb9a  jal         func_232E68
    ctx->pc = 0x233594u;
    SET_GPR_U32(ctx, 31, 0x23359Cu);
    ctx->pc = 0x232E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232E68u, 0x233594u, 0x23359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23359Cu;
label_23359c:
    // 0x23359c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x23359Cu;
    {
        const bool branch_taken_0x23359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23359Cu;
        // 0x2335a0: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23359c) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x2335A4u;
label_2335a4:
    // 0x2335a4: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x2335A4u;
    SET_GPR_U32(ctx, 31, 0x2335ACu);
    ctx->pc = 0x2335A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335A4u;
    // 0x2335a8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x2335A4u, 0x2335ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335ACu;
label_2335ac:
    // 0x2335ac: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2335acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2335b0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2335B0u;
    {
        const bool branch_taken_0x2335b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335B0u;
        // 0x2335b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335b0) {
            ctx->pc = 0x233690u;
            goto label_233690;
        }
    }
    ctx->pc = 0x2335B8u;
    // 0x2335b8: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x2335b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2335bc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2335c0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2335C0u;
    {
        const bool branch_taken_0x2335c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2335C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335C0u;
        // 0x2335c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335c0) {
            ctx->pc = 0x2335F4u;
            goto label_2335f4;
        }
    }
    ctx->pc = 0x2335C8u;
    // 0x2335c8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2335c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2335cc: 0x8c433a30  lw          $v1, 0x3A30($v0)
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x353A30u));
    // 0x2335d0: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2335D0u;
    {
        const bool branch_taken_0x2335d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335D0u;
        // 0x2335d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335d0) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x2335D8u;
    // 0x2335d8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2335d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2335dc: 0xc081546  jal         func_205518
    ctx->pc = 0x2335DCu;
    SET_GPR_U32(ctx, 31, 0x2335E4u);
    ctx->pc = 0x2335E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335DCu;
    // 0x2335e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2335DCu, 0x2335E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335E4u;
label_2335e4:
    // 0x2335e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2335e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335ec: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2335ECu;
    {
        const bool branch_taken_0x2335ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335ECu;
        // 0x2335f0: 0xa6230004  sh          $v1, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335ec) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x2335F4u;
label_2335f4:
    // 0x2335f4: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2335F4u;
    {
        const bool branch_taken_0x2335f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335F4u;
        // 0x2335f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335f4) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x2335FCu;
    // 0x2335fc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x233600: 0x8c823a90  lw          $v0, 0x3A90($a0)
    ctx->pc = 0x233600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A90u));
    // 0x233604: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233604u;
    {
        const bool branch_taken_0x233604 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x233608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233604u;
        // 0x233608: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233604) {
            ctx->pc = 0x233638u;
            goto label_233638;
        }
    }
    ctx->pc = 0x23360Cu;
    // 0x23360c: 0x24853a90  addiu       $a1, $a0, 0x3A90
    ctx->pc = 0x23360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 14992));
    // 0x233610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x233614: 0x0  nop
    ctx->pc = 0x233614u;
    // NOP
label_233618:
    // 0x233618: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x233618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23361c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23361Cu;
    {
        const bool branch_taken_0x23361c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23361Cu;
        // 0x233620: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23361c) {
            ctx->pc = 0x23367Cu;
            goto label_23367c;
        }
    }
    ctx->pc = 0x233624u;
    // 0x233624: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x233624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233628: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x233628u;
    {
        const bool branch_taken_0x233628 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x233628) {
            ctx->pc = 0x23362Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233628u;
            // 0x23362c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233618;
        }
    }
    ctx->pc = 0x233630u;
    // 0x233630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x233630u;
    {
        const bool branch_taken_0x233630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233630) {
            ctx->pc = 0x23363Cu;
            goto label_23363c;
        }
    }
    ctx->pc = 0x233638u;
label_233638:
    // 0x233638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23363c:
    // 0x23363c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x23363Cu;
    {
        const bool branch_taken_0x23363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23363Cu;
        // 0x233640: 0x8f83a04c  lw          $v1, -0x5FB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23363c) {
            ctx->pc = 0x23367Cu;
            goto label_23367c;
        }
    }
    ctx->pc = 0x233644u;
    // 0x233644: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x233644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x233648: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x233648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x23364c: 0x24843a90  addiu       $a0, $a0, 0x3A90
    ctx->pc = 0x23364cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14992));
    // 0x233650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233654: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x233654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x233658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23365c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x23365cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x233660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233664: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x233664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x233668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23366c: 0xc081546  jal         func_205518
    ctx->pc = 0x23366Cu;
    SET_GPR_U32(ctx, 31, 0x233674u);
    ctx->pc = 0x233670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23366Cu;
    // 0x233670: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x23366Cu, 0x233674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233674u;
label_233674:
    // 0x233674: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x233674u;
    {
        const bool branch_taken_0x233674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233674u;
        // 0x233678: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233674) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x23367Cu;
label_23367c:
    // 0x23367c: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_233680:
    // 0x233680: 0xc081546  jal         func_205518
    ctx->pc = 0x233680u;
    SET_GPR_U32(ctx, 31, 0x233688u);
    ctx->pc = 0x233684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233680u;
    // 0x233684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x233680u, 0x233688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233688u;
label_233688:
    // 0x233688: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x233688u;
    {
        const bool branch_taken_0x233688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233688u;
        // 0x23368c: 0x96250004  lhu         $a1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233688) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x233690u;
label_233690:
    // 0x233690: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x233690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x233694: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x233694u;
    SET_GPR_U32(ctx, 31, 0x23369Cu);
    ctx->pc = 0x233698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233694u;
    // 0x233698: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x233694u, 0x23369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23369Cu;
label_23369c:
    // 0x23369c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x23369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2336a0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2336A0u;
    {
        const bool branch_taken_0x2336a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336A0u;
        // 0x2336a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336a0) {
            ctx->pc = 0x23370Cu;
            goto label_23370c;
        }
    }
    ctx->pc = 0x2336A8u;
    // 0x2336a8: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x2336a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2336ac: 0x14a20029  bne         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2336ACu;
    {
        const bool branch_taken_0x2336ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2336B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336ACu;
        // 0x2336b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336ac) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x2336B4u;
    // 0x2336b4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2336b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2336b8: 0x8c623a90  lw          $v0, 0x3A90($v1)
    ctx->pc = 0x2336b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A90u));
    // 0x2336bc: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2336BCu;
    {
        const bool branch_taken_0x2336bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2336C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336BCu;
        // 0x2336c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336bc) {
            ctx->pc = 0x2336E8u;
            goto label_2336e8;
        }
    }
    ctx->pc = 0x2336C4u;
    // 0x2336c4: 0x24643a90  addiu       $a0, $v1, 0x3A90
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14992));
    // 0x2336c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2336cc: 0x0  nop
    ctx->pc = 0x2336ccu;
    // NOP
label_2336d0:
    // 0x2336d0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2336d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2336d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2336D4u;
    {
        const bool branch_taken_0x2336d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336D4u;
        // 0x2336d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336d4) {
            ctx->pc = 0x2336E8u;
            goto label_2336e8;
        }
    }
    ctx->pc = 0x2336DCu;
    // 0x2336dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2336dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2336e0: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2336E0u;
    {
        const bool branch_taken_0x2336e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2336e0) {
            ctx->pc = 0x2336E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336E0u;
            // 0x2336e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2336d0;
        }
    }
    ctx->pc = 0x2336E8u;
label_2336e8:
    // 0x2336e8: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2336E8u;
    {
        const bool branch_taken_0x2336e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2336ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336E8u;
        // 0x2336ec: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336e8) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x2336F0u;
    // 0x2336f0: 0x24633a90  addiu       $v1, $v1, 0x3A90
    ctx->pc = 0x2336f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14992));
    // 0x2336f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2336f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2336f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2336fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2336fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233700: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x233700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x233704: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x233704u;
    {
        const bool branch_taken_0x233704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233704u;
        // 0x233708: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233704) {
            ctx->pc = 0x233680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233680;
        }
    }
    ctx->pc = 0x23370Cu;
label_23370c:
    // 0x23370c: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x23370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x233710: 0xc080e3a  jal         func_2038E8
    ctx->pc = 0x233710u;
    SET_GPR_U32(ctx, 31, 0x233718u);
    ctx->pc = 0x233714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233710u;
    // 0x233714: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2038E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2038E8u, 0x233710u, 0x233718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233718u;
label_233718:
    // 0x233718: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x233718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23371c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23371Cu;
    {
        const bool branch_taken_0x23371c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23371Cu;
        // 0x233720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23371c) {
            ctx->pc = 0x23374Cu;
            goto label_23374c;
        }
    }
    ctx->pc = 0x233724u;
    // 0x233724: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x233724u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x233728: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x233728u;
    {
        const bool branch_taken_0x233728 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233728u;
        // 0x23372c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233728) {
            ctx->pc = 0x233754u;
            goto label_233754;
        }
    }
    ctx->pc = 0x233730u;
    // 0x233730: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x233730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x233734: 0xc081546  jal         func_205518
    ctx->pc = 0x233734u;
    SET_GPR_U32(ctx, 31, 0x23373Cu);
    ctx->pc = 0x233738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233734u;
    // 0x233738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x233734u, 0x23373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23373Cu;
label_23373c:
    // 0x23373c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x233740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233744: 0xc080ea2  jal         func_203A88
    ctx->pc = 0x233744u;
    SET_GPR_U32(ctx, 31, 0x23374Cu);
    ctx->pc = 0x233748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233744u;
    // 0x233748: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A88u, 0x233744u, 0x23374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23374Cu;
label_23374c:
    // 0x23374c: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x23374cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_233750:
    // 0x233750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233754:
    // 0x233754: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x233754u;
    {
        const bool branch_taken_0x233754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x233758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233754u;
        // 0x233758: 0x8f829354  lw          $v0, -0x6CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233754) {
            ctx->pc = 0x2337A8u;
            goto label_2337a8;
        }
    }
    ctx->pc = 0x23375Cu;
    // 0x23375c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23375cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x233760: 0x8c623a30  lw          $v0, 0x3A30($v1)
    ctx->pc = 0x233760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x353A30u));
    // 0x233764: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233764u;
    {
        const bool branch_taken_0x233764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233764u;
        // 0x233768: 0x26a53ab8  addiu       $a1, $s5, 0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233764) {
            ctx->pc = 0x233788u;
            goto label_233788;
        }
    }
    ctx->pc = 0x23376Cu;
    // 0x23376c: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x23376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x233770: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x233774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x233778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23377c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x233780u;
    {
        const bool branch_taken_0x233780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233780u;
        // 0x233784: 0x8c620678  lw          $v0, 0x678($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233780) {
            ctx->pc = 0x23378Cu;
            goto label_23378c;
        }
    }
    ctx->pc = 0x233788u;
label_233788:
    // 0x233788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23378c:
    // 0x23378c: 0x8f84a004  lw          $a0, -0x5FFC($gp)
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x233790: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x233790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x233794: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x233794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x233798: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23379c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2337a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2337A0u;
    {
        const bool branch_taken_0x2337a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337A0u;
        // 0x2337a4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337a0) {
            ctx->pc = 0x2337C4u;
            goto label_2337c4;
        }
    }
    ctx->pc = 0x2337A8u;
label_2337a8:
    // 0x2337a8: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x2337a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x2337ac: 0x26a53ab8  addiu       $a1, $s5, 0x3AB8
    ctx->pc = 0x2337acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15032));
    // 0x2337b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2337b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2337b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2337b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2337b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2337b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2337bc: 0x8c64067c  lw          $a0, 0x67C($v1)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
    // 0x2337c0: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x2337c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
label_2337c4:
    // 0x2337c4: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x2337c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2337c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337cc: 0x26103aa8  addiu       $s0, $s0, 0x3AA8
    ctx->pc = 0x2337ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15016));
    // 0x2337d0: 0xc08c08e  jal         func_230238
    ctx->pc = 0x2337D0u;
    SET_GPR_U32(ctx, 31, 0x2337D8u);
    ctx->pc = 0x2337D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337D0u;
    // 0x2337d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230238u, 0x2337D0u, 0x2337D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337D8u;
label_2337d8:
    // 0x2337d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2337d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2337dc: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x2337DCu;
    SET_GPR_U32(ctx, 31, 0x2337E4u);
    ctx->pc = 0x2337E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337DCu;
    // 0x2337e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x2337DCu, 0x2337E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337E4u;
label_2337e4:
    // 0x2337e4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2337e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2337e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2337ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2337ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2337f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2337f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2337f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2337f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2337f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2337f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2337fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2337fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233804: 0x3e00008  jr          $ra
    ctx->pc = 0x233804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233804u;
        // 0x233808: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23380Cu;
}

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

// Function: message_pageTick
// Address: 0x24c990 - 0x24ca7c
void message_pageTick_0x24c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("message_pageTick_0x24c990");
#endif

    switch (ctx->pc) {
        case 0x24c990u: goto label_24c990;
        case 0x24c994u: goto label_24c994;
        case 0x24c998u: goto label_24c998;
        case 0x24c99cu: goto label_24c99c;
        case 0x24c9a0u: goto label_24c9a0;
        case 0x24c9a4u: goto label_24c9a4;
        case 0x24c9a8u: goto label_24c9a8;
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9b0u: goto label_24c9b0;
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9bcu: goto label_24c9bc;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c4u: goto label_24c9c4;
        case 0x24c9c8u: goto label_24c9c8;
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24c9d0u: goto label_24c9d0;
        case 0x24c9d4u: goto label_24c9d4;
        case 0x24c9d8u: goto label_24c9d8;
        case 0x24c9dcu: goto label_24c9dc;
        case 0x24c9e0u: goto label_24c9e0;
        case 0x24c9e4u: goto label_24c9e4;
        case 0x24c9e8u: goto label_24c9e8;
        case 0x24c9ecu: goto label_24c9ec;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24c9f4u: goto label_24c9f4;
        case 0x24c9f8u: goto label_24c9f8;
        case 0x24c9fcu: goto label_24c9fc;
        case 0x24ca00u: goto label_24ca00;
        case 0x24ca04u: goto label_24ca04;
        case 0x24ca08u: goto label_24ca08;
        case 0x24ca0cu: goto label_24ca0c;
        case 0x24ca10u: goto label_24ca10;
        case 0x24ca14u: goto label_24ca14;
        case 0x24ca18u: goto label_24ca18;
        case 0x24ca1cu: goto label_24ca1c;
        case 0x24ca20u: goto label_24ca20;
        case 0x24ca24u: goto label_24ca24;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca2cu: goto label_24ca2c;
        case 0x24ca30u: goto label_24ca30;
        case 0x24ca34u: goto label_24ca34;
        case 0x24ca38u: goto label_24ca38;
        case 0x24ca3cu: goto label_24ca3c;
        case 0x24ca40u: goto label_24ca40;
        case 0x24ca44u: goto label_24ca44;
        case 0x24ca48u: goto label_24ca48;
        case 0x24ca4cu: goto label_24ca4c;
        case 0x24ca50u: goto label_24ca50;
        case 0x24ca54u: goto label_24ca54;
        case 0x24ca58u: goto label_24ca58;
        case 0x24ca5cu: goto label_24ca5c;
        case 0x24ca60u: goto label_24ca60;
        case 0x24ca64u: goto label_24ca64;
        case 0x24ca68u: goto label_24ca68;
        case 0x24ca6cu: goto label_24ca6c;
        case 0x24ca70u: goto label_24ca70;
        case 0x24ca74u: goto label_24ca74;
        case 0x24ca78u: goto label_24ca78;
        default: break;
    }

    ctx->pc = 0x24c990u;

label_24c990:
    // 0x24c990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24c994:
    // 0x24c994: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_24c998:
    // 0x24c998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24c99c:
    // 0x24c99c: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x24c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
label_24c9a0:
    // 0x24c9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24c9a4:
    // 0x24c9a4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x24c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_24c9a8:
    // 0x24c9a8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x24c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_24c9ac:
    // 0x24c9ac: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x24c9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_24c9b0:
    // 0x24c9b0: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x24c9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_24c9b4:
    // 0x24c9b4: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_24c9b8:
    // 0x24c9b8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x24c9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24c9bc:
    // 0x24c9bc: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x24c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_24c9c0:
    // 0x24c9c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_24c9c4:
    // 0x24c9c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x24c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_24c9c8:
    // 0x24c9c8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x24c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_24c9cc:
    // 0x24c9cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x24c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_24c9d0:
    // 0x24c9d0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x24c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_24c9d4:
    // 0x24c9d4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x24c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_24c9d8:
    // 0x24c9d8: 0xc091a48  jal         func_246920
label_24c9dc:
    if (ctx->pc == 0x24C9DCu) {
        ctx->pc = 0x24C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9D8u;
        // 0x24c9dc: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9E0u;
        goto label_24c9e0;
    }
    ctx->pc = 0x24C9D8u;
    SET_GPR_U32(ctx, 31, 0x24C9E0u);
    ctx->pc = 0x24C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9D8u;
    // 0x24c9dc: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246920u, 0x24C9D8u, 0x24C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9E0u;
label_24c9e0:
    // 0x24c9e0: 0x8f82b838  lw          $v0, -0x47C8($gp)
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948920)));
label_24c9e4:
    // 0x24c9e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24c9e8:
    if (ctx->pc == 0x24C9E8u) {
        ctx->pc = 0x24C9ECu;
        goto label_24c9ec;
    }
    ctx->pc = 0x24C9E4u;
    {
        const bool branch_taken_0x24c9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9e4) {
            ctx->pc = 0x24C9FCu;
            goto label_24c9fc;
        }
    }
    ctx->pc = 0x24C9ECu;
label_24c9ec:
    // 0x24c9ec: 0x40f809  jalr        $v0
label_24c9f0:
    if (ctx->pc == 0x24C9F0u) {
        ctx->pc = 0x24C9F4u;
        goto label_24c9f4;
    }
    ctx->pc = 0x24C9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C9F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9ECu, 0x24C9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C9F4u;
label_24c9f4:
    // 0x24c9f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_24c9f8:
    if (ctx->pc == 0x24C9F8u) {
        ctx->pc = 0x24C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9F4u;
        // 0x24c9f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9FCu;
        goto label_24c9fc;
    }
    ctx->pc = 0x24C9F4u;
    {
        const bool branch_taken_0x24c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9F4u;
        // 0x24c9f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9f4) {
            ctx->pc = 0x24CA08u;
            goto label_24ca08;
        }
    }
    ctx->pc = 0x24C9FCu;
label_24c9fc:
    // 0x24c9fc: 0xc09325a  jal         func_24C968
label_24ca00:
    if (ctx->pc == 0x24CA00u) {
        ctx->pc = 0x24CA04u;
        goto label_24ca04;
    }
    ctx->pc = 0x24C9FCu;
    SET_GPR_U32(ctx, 31, 0x24CA04u);
    ctx->pc = 0x24C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C968u, 0x24C9FCu, 0x24CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA04u;
label_24ca04:
    // 0x24ca04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24ca04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ca08:
    // 0x24ca08: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_24ca0c:
    if (ctx->pc == 0x24CA0Cu) {
        ctx->pc = 0x24CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA08u;
        // 0x24ca0c: 0xaf83b840  sw          $v1, -0x47C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA10u;
        goto label_24ca10;
    }
    ctx->pc = 0x24CA08u;
    {
        const bool branch_taken_0x24ca08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA08u;
        // 0x24ca0c: 0xaf83b840  sw          $v1, -0x47C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca08) {
            ctx->pc = 0x24CA68u;
            goto label_24ca68;
        }
    }
    ctx->pc = 0x24CA10u;
label_24ca10:
    // 0x24ca10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ca14:
    // 0x24ca14: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_24ca18:
    if (ctx->pc == 0x24CA18u) {
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA1Cu;
        goto label_24ca1c;
    }
    ctx->pc = 0x24CA14u;
    {
        const bool branch_taken_0x24ca14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x2404008e  addiu       $a0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca14) {
            ctx->pc = 0x24CA30u;
            goto label_24ca30;
        }
    }
    ctx->pc = 0x24CA1Cu;
label_24ca1c:
    // 0x24ca1c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x24ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_24ca20:
    // 0x24ca20: 0xc081546  jal         func_205518
label_24ca24:
    if (ctx->pc == 0x24CA24u) {
        ctx->pc = 0x24CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA20u;
        // 0x24ca24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA28u;
        goto label_24ca28;
    }
    ctx->pc = 0x24CA20u;
    SET_GPR_U32(ctx, 31, 0x24CA28u);
    ctx->pc = 0x24CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA20u;
    // 0x24ca24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24CA20u, 0x24CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA28u;
label_24ca28:
    // 0x24ca28: 0x10000004  b           . + 4 + (0x4 << 2)
label_24ca2c:
    if (ctx->pc == 0x24CA2Cu) {
        ctx->pc = 0x24CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA28u;
        // 0x24ca2c: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA30u;
        goto label_24ca30;
    }
    ctx->pc = 0x24CA28u;
    {
        const bool branch_taken_0x24ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA28u;
        // 0x24ca2c: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca28) {
            ctx->pc = 0x24CA3Cu;
            goto label_24ca3c;
        }
    }
    ctx->pc = 0x24CA30u;
label_24ca30:
    // 0x24ca30: 0xc081546  jal         func_205518
label_24ca34:
    if (ctx->pc == 0x24CA34u) {
        ctx->pc = 0x24CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA30u;
        // 0x24ca34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA38u;
        goto label_24ca38;
    }
    ctx->pc = 0x24CA30u;
    SET_GPR_U32(ctx, 31, 0x24CA38u);
    ctx->pc = 0x24CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA30u;
    // 0x24ca34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x24CA30u, 0x24CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA38u;
label_24ca38:
    // 0x24ca38: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x24ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_24ca3c:
    // 0x24ca3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_24ca40:
    // 0x24ca40: 0x8f84a0d8  lw          $a0, -0x5F28($gp)
    ctx->pc = 0x24ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
label_24ca44:
    // 0x24ca44: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x24ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
label_24ca48:
    // 0x24ca48: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x24ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_24ca4c:
    // 0x24ca4c: 0x8f86b844  lw          $a2, -0x47BC($gp)
    ctx->pc = 0x24ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
label_24ca50:
    // 0x24ca50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x24ca50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_24ca54:
    // 0x24ca54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24ca58:
    // 0x24ca58: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x24ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_24ca5c:
    // 0x24ca5c: 0xaf84a0d8  sw          $a0, -0x5F28($gp)
    ctx->pc = 0x24ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 4));
label_24ca60:
    // 0x24ca60: 0x10000003  b           . + 4 + (0x3 << 2)
label_24ca64:
    if (ctx->pc == 0x24CA64u) {
        ctx->pc = 0x24CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA60u;
        // 0x24ca64: 0xaca6000c  sw          $a2, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA68u;
        goto label_24ca68;
    }
    ctx->pc = 0x24CA60u;
    {
        const bool branch_taken_0x24ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA60u;
        // 0x24ca64: 0xaca6000c  sw          $a2, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca60) {
            ctx->pc = 0x24CA70u;
            goto label_24ca70;
        }
    }
    ctx->pc = 0x24CA68u;
label_24ca68:
    // 0x24ca68: 0xc08bbf4  jal         func_22EFD0
label_24ca6c:
    if (ctx->pc == 0x24CA6Cu) {
        ctx->pc = 0x24CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA68u;
        // 0x24ca6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA70u;
        goto label_24ca70;
    }
    ctx->pc = 0x24CA68u;
    SET_GPR_U32(ctx, 31, 0x24CA70u);
    ctx->pc = 0x24CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA68u;
    // 0x24ca6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x24CA68u, 0x24CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA70u;
label_24ca70:
    // 0x24ca70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ca70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24ca74:
    // 0x24ca74: 0x3e00008  jr          $ra
label_24ca78:
    if (ctx->pc == 0x24CA78u) {
        ctx->pc = 0x24CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA74u;
        // 0x24ca78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA7Cu;
        goto label_fallthrough_0x24ca74;
    }
    ctx->pc = 0x24CA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA74u;
        // 0x24ca78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24ca74:
    ctx->pc = 0x24CA7Cu;
}

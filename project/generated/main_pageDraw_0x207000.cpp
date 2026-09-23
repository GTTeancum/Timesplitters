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

// Function: main_pageDraw
// Address: 0x207000 - 0x2073bc
void main_pageDraw_0x207000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_pageDraw_0x207000");
#endif

    switch (ctx->pc) {
        case 0x207038u: goto label_207038;
        case 0x20705cu: goto label_20705c;
        case 0x207068u: goto label_207068;
        case 0x207074u: goto label_207074;
        case 0x207088u: goto label_207088;
        case 0x207098u: goto label_207098;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070c8u: goto label_2070c8;
        case 0x2070d8u: goto label_2070d8;
        case 0x207108u: goto label_207108;
        case 0x20712cu: goto label_20712c;
        case 0x20717cu: goto label_20717c;
        case 0x207188u: goto label_207188;
        case 0x2071acu: goto label_2071ac;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071f0u: goto label_2071f0;
        case 0x207218u: goto label_207218;
        case 0x207264u: goto label_207264;
        case 0x207280u: goto label_207280;
        case 0x207294u: goto label_207294;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072e0u: goto label_2072e0;
        case 0x207314u: goto label_207314;
        case 0x207320u: goto label_207320;
        case 0x207364u: goto label_207364;
        case 0x207390u: goto label_207390;
        default: break;
    }

    ctx->pc = 0x207000u;

    // 0x207000: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x207000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x207004: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x207004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x207008: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x207008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20700c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x20700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x207010: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x207010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x207014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207018: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x207018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x20701c: 0x3c170032  lui         $s7, 0x32
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
    // 0x207020: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x207020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x207024: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x207024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x207028: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x207028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20702c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x20702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x207030: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x207030u;
    SET_GPR_U32(ctx, 31, 0x207038u);
    ctx->pc = 0x207034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207030u;
    // 0x207034: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x207030u, 0x207038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207038u;
label_207038:
    // 0x207038: 0x8f839b40  lw          $v1, -0x64C0($gp)
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x20703c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x207040: 0x26e5e180  addiu       $a1, $s7, -0x1E80
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959488));
    // 0x207044: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207048: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x207048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20704c: 0x24849b88  addiu       $a0, $a0, -0x6478
    ctx->pc = 0x20704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941576));
    // 0x207050: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207054: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x207054u;
    SET_GPR_U32(ctx, 31, 0x20705Cu);
    ctx->pc = 0x207058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207054u;
    // 0x207058: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x207054u, 0x20705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20705Cu;
label_20705c:
    // 0x20705c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20705cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207060: 0xc08195e  jal         func_206578
    ctx->pc = 0x207060u;
    SET_GPR_U32(ctx, 31, 0x207068u);
    ctx->pc = 0x207064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207060u;
    // 0x207064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206578u, 0x207060u, 0x207068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207068u;
label_207068:
    // 0x207068: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x207068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20706c: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x20706Cu;
    SET_GPR_U32(ctx, 31, 0x207074u);
    ctx->pc = 0x207070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20706Cu;
    // 0x207070: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x20706Cu, 0x207074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207074u;
label_207074:
    // 0x207074: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x207074u;
    {
        const bool branch_taken_0x207074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207074u;
        // 0x207078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207074) {
            ctx->pc = 0x207390u;
            goto label_207390;
        }
    }
    ctx->pc = 0x20707Cu;
    // 0x20707c: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x20707cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x207080: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x207084: 0x0  nop
    ctx->pc = 0x207084u;
    // NOP
label_207088:
    // 0x207088: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x207088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20708c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x20708cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x207090: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x207090u;
    SET_GPR_U32(ctx, 31, 0x207098u);
    ctx->pc = 0x207094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207090u;
    // 0x207094: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x207090u, 0x207098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207098u;
label_207098:
    // 0x207098: 0xc081b96  jal         func_206E58
    ctx->pc = 0x207098u;
    SET_GPR_U32(ctx, 31, 0x2070A0u);
    ctx->pc = 0x20709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207098u;
    // 0x20709c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206E58u, 0x207098u, 0x2070A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070A0u;
label_2070a0:
    // 0x2070a0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2070a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2070a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2070A4u;
    {
        const bool branch_taken_0x2070a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2070A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070A4u;
        // 0x2070a8: 0x26050005  addiu       $a1, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070a4) {
            ctx->pc = 0x207088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207088;
        }
    }
    ctx->pc = 0x2070ACu;
    // 0x2070ac: 0x8f829b40  lw          $v0, -0x64C0($gp)
    ctx->pc = 0x2070acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x2070b0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2070b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2070b4: 0x26e4e180  addiu       $a0, $s7, -0x1E80
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959488));
    // 0x2070b8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2070b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2070bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2070bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2070c0: 0xc0817e6  jal         func_205F98
    ctx->pc = 0x2070C0u;
    SET_GPR_U32(ctx, 31, 0x2070C8u);
    ctx->pc = 0x2070C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070C0u;
    // 0x2070c4: 0x94440012  lhu         $a0, 0x12($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F98u, 0x2070C0u, 0x2070C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070C8u;
label_2070c8:
    // 0x2070c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2070c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2070ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070d0: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x2070D0u;
    SET_GPR_U32(ctx, 31, 0x2070D8u);
    ctx->pc = 0x2070D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070D0u;
    // 0x2070d4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x2070D0u, 0x2070D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070D8u;
label_2070d8:
    // 0x2070d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2070d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070dc: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2070dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2070e0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2070e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2070e4: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x2070e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2070e8: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2070ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2070ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2070f0: 0x16240010  bne         $s1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2070F0u;
    {
        const bool branch_taken_0x2070f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x2070F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F0u;
        // 0x2070f4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070f0) {
            ctx->pc = 0x207134u;
            goto label_207134;
        }
    }
    ctx->pc = 0x2070F8u;
    // 0x2070f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2070f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2070fc: 0x2452e3b0  addiu       $s2, $v0, -0x1C50
    ctx->pc = 0x2070fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960048));
    // 0x207100: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x207100u;
    SET_GPR_U32(ctx, 31, 0x207108u);
    ctx->pc = 0x207104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207100u;
    // 0x207104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x207100u, 0x207108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207108u;
label_207108:
    // 0x207108: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20710c: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x207110: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x207110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207118: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x207118u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20711c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20711cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207120: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x207120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x207124: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x207124u;
    SET_GPR_U32(ctx, 31, 0x20712Cu);
    ctx->pc = 0x207128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207124u;
    // 0x207128: 0x34e76480  ori         $a3, $a3, 0x6480 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x207124u, 0x20712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20712Cu;
label_20712c:
    // 0x20712c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x20712Cu;
    {
        const bool branch_taken_0x20712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20712Cu;
        // 0x207130: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20712c) {
            ctx->pc = 0x2072C0u;
            goto label_2072c0;
        }
    }
    ctx->pc = 0x207134u;
label_207134:
    // 0x207134: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207138: 0x26230007  addiu       $v1, $s1, 0x7
    ctx->pc = 0x207138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x20713c: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x20713cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x207140: 0x2634fee0  addiu       $s4, $s1, -0x120
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967008));
    // 0x207144: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x207144u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x207148: 0x94202a  slt         $a0, $a0, $s4
    ctx->pc = 0x207148u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x20714c: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x207150: 0x2622fee7  addiu       $v0, $s1, -0x119
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967015));
    // 0x207154: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x207154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x207158: 0x284100b  movn        $v0, $s4, $a0
    ctx->pc = 0x207158u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
    // 0x20715c: 0x2232823  subu        $a1, $s1, $v1
    ctx->pc = 0x20715cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x207160: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x207160u;
    {
        const bool branch_taken_0x207160 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x207164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207160u;
        // 0x207164: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207160) {
            ctx->pc = 0x207170u;
            goto label_207170;
        }
    }
    ctx->pc = 0x207168u;
    // 0x207168: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x207168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20716c: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x20716cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_207170:
    // 0x207170: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207174: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x207174u;
    SET_GPR_U32(ctx, 31, 0x20717Cu);
    ctx->pc = 0x207178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207174u;
    // 0x207178: 0x24849b98  addiu       $a0, $a0, -0x6468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x207174u, 0x20717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20717Cu;
label_20717c:
    // 0x20717c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20717cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207180: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x207180u;
    SET_GPR_U32(ctx, 31, 0x207188u);
    ctx->pc = 0x207184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207180u;
    // 0x207184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x207180u, 0x207188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207188u;
label_207188:
    // 0x207188: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20718c: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x20718cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x207190: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207194: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x207194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207198: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20719c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20719cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2071a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2071a4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2071A4u;
    SET_GPR_U32(ctx, 31, 0x2071ACu);
    ctx->pc = 0x2071A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071A4u;
    // 0x2071a8: 0x34e76480  ori         $a3, $a3, 0x6480 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2071A4u, 0x2071ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071ACu;
label_2071ac:
    // 0x2071ac: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2071ACu;
    {
        const bool branch_taken_0x2071ac = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2071B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071ACu;
        // 0x2071b0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071ac) {
            ctx->pc = 0x2071C8u;
            goto label_2071c8;
        }
    }
    ctx->pc = 0x2071B4u;
    // 0x2071b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2071b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071b8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2071B8u;
    SET_GPR_U32(ctx, 31, 0x2071C0u);
    ctx->pc = 0x2071BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071B8u;
    // 0x2071bc: 0x2484e3b8  addiu       $a0, $a0, -0x1C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2071B8u, 0x2071C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071C0u;
label_2071c0:
    // 0x2071c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2071C0u;
    {
        const bool branch_taken_0x2071c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C0u;
        // 0x2071c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c0) {
            ctx->pc = 0x2071E0u;
            goto label_2071e0;
        }
    }
    ctx->pc = 0x2071C8u;
label_2071c8:
    // 0x2071c8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2071C8u;
    {
        const bool branch_taken_0x2071c8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2071CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C8u;
        // 0x2071cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c8) {
            ctx->pc = 0x2071E0u;
            goto label_2071e0;
        }
    }
    ctx->pc = 0x2071D0u;
    // 0x2071d0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2071d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2071d4: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2071D4u;
    SET_GPR_U32(ctx, 31, 0x2071DCu);
    ctx->pc = 0x2071D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071D4u;
    // 0x2071d8: 0x2484e3c0  addiu       $a0, $a0, -0x1C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2071D4u, 0x2071DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071DCu;
label_2071dc:
    // 0x2071dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2071dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2071e0:
    // 0x2071e0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2071E0u;
    {
        const bool branch_taken_0x2071e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071E0u;
        // 0x2071e4: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071e0) {
            ctx->pc = 0x20721Cu;
            goto label_20721c;
        }
    }
    ctx->pc = 0x2071E8u;
    // 0x2071e8: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x2071E8u;
    SET_GPR_U32(ctx, 31, 0x2071F0u);
    ctx->pc = 0x2071ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071E8u;
    // 0x2071ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x2071E8u, 0x2071F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071F0u;
label_2071f0:
    // 0x2071f0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2071f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2071f4: 0x2442febc  addiu       $v0, $v0, -0x144
    ctx->pc = 0x2071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966972));
    // 0x2071f8: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x2071f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x2071fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2071fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207200: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207204: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x207204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207208: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x207208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20720c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20720cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207210: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x207210u;
    SET_GPR_U32(ctx, 31, 0x207218u);
    ctx->pc = 0x207214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207210u;
    // 0x207214: 0x34e76480  ori         $a3, $a3, 0x6480 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x207210u, 0x207218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207218u;
label_207218:
    // 0x207218: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x207218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_20721c:
    // 0x20721c: 0x283001a  div         $zero, $s4, $v1
    ctx->pc = 0x20721cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x207220: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207220u;
    {
        const bool branch_taken_0x207220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207220) {
            ctx->pc = 0x207224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207220u;
            // 0x207224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207228u;
            goto label_207228;
        }
    }
    ctx->pc = 0x207228u;
label_207228:
    // 0x207228: 0x1012  mflo        $v0
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20722c: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x20722Cu;
    {
        const bool branch_taken_0x20722c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20722c) {
            ctx->pc = 0x207250u;
            goto label_207250;
        }
    }
    ctx->pc = 0x207234u;
    // 0x207234: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x207234u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x207238: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x207238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x20723c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x20723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x207240: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207240u;
    {
        const bool branch_taken_0x207240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207240) {
            ctx->pc = 0x207244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207240u;
            // 0x207244: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207248u;
            goto label_207248;
        }
    }
    ctx->pc = 0x207248u;
label_207248:
    // 0x207248: 0x2010  mfhi        $a0
    ctx->pc = 0x207248u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20724c: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x20724cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_207250:
    // 0x207250: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207250u;
    {
        const bool branch_taken_0x207250 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x207254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207250u;
        // 0x207254: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207250) {
            ctx->pc = 0x20726Cu;
            goto label_20726c;
        }
    }
    ctx->pc = 0x207258u;
    // 0x207258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20725c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20725Cu;
    SET_GPR_U32(ctx, 31, 0x207264u);
    ctx->pc = 0x207260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20725Cu;
    // 0x207260: 0x2484e3c8  addiu       $a0, $a0, -0x1C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20725Cu, 0x207264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207264u;
label_207264:
    // 0x207264: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x207264u;
    {
        const bool branch_taken_0x207264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207264u;
        // 0x207268: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207264) {
            ctx->pc = 0x207284u;
            goto label_207284;
        }
    }
    ctx->pc = 0x20726Cu;
label_20726c:
    // 0x20726c: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20726Cu;
    {
        const bool branch_taken_0x20726c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x207270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20726Cu;
        // 0x207270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20726c) {
            ctx->pc = 0x207284u;
            goto label_207284;
        }
    }
    ctx->pc = 0x207274u;
    // 0x207274: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x207274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x207278: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x207278u;
    SET_GPR_U32(ctx, 31, 0x207280u);
    ctx->pc = 0x20727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207278u;
    // 0x20727c: 0x2484e3d0  addiu       $a0, $a0, -0x1C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x207278u, 0x207280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207280u;
label_207280:
    // 0x207280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207284:
    // 0x207284: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x207284u;
    {
        const bool branch_taken_0x207284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x207284) {
            ctx->pc = 0x207288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207284u;
            // 0x207288: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2072C0u;
            goto label_2072c0;
        }
    }
    ctx->pc = 0x20728Cu;
    // 0x20728c: 0xc080a8e  jal         func_202A38
    ctx->pc = 0x20728Cu;
    SET_GPR_U32(ctx, 31, 0x207294u);
    ctx->pc = 0x207290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20728Cu;
    // 0x207290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A38u, 0x20728Cu, 0x207294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207294u;
label_207294:
    // 0x207294: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x207294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x207298: 0x2442fe58  addiu       $v0, $v0, -0x1A8
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966872));
    // 0x20729c: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x20729cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x2072a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2072a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2072a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2072a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2072a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2072acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2072b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2072b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072b4: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x2072B4u;
    SET_GPR_U32(ctx, 31, 0x2072BCu);
    ctx->pc = 0x2072B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072B4u;
    // 0x2072b8: 0x34e76480  ori         $a3, $a3, 0x6480 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x2072B4u, 0x2072BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072BCu;
label_2072bc:
    // 0x2072bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2072bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2072c0:
    // 0x2072c0: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x2072C0u;
    SET_GPR_U32(ctx, 31, 0x2072C8u);
    ctx->pc = 0x2072C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072C0u;
    // 0x2072c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x2072C0u, 0x2072C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072C8u;
label_2072c8:
    // 0x2072c8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x2072cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2072d0: 0x8c659558  lw          $a1, -0x6AA8($v1)
    ctx->pc = 0x2072d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x329558u));
    // 0x2072d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2072d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072d8: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x2072D8u;
    SET_GPR_U32(ctx, 31, 0x2072E0u);
    ctx->pc = 0x2072DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072D8u;
    // 0x2072dc: 0x24849ba8  addiu       $a0, $a0, -0x6458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x2072D8u, 0x2072E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072E0u;
label_2072e0:
    // 0x2072e0: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x2072e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2072e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2072e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072e8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2072e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2072ec: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x2072ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x2072f0: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x2072f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2072f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2072f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2072f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2072fc: 0x34e76480  ori         $a3, $a3, 0x6480
    ctx->pc = 0x2072fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    // 0x207300: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x207304: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x207304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207308: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x207308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x20730c: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x20730Cu;
    SET_GPR_U32(ctx, 31, 0x207314u);
    ctx->pc = 0x207310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20730Cu;
    // 0x207310: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x20730Cu, 0x207314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207314u;
label_207314:
    // 0x207314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x207314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207318: 0xc08b11c  jal         func_22C470
    ctx->pc = 0x207318u;
    SET_GPR_U32(ctx, 31, 0x207320u);
    ctx->pc = 0x20731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207318u;
    // 0x20731c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C470u, 0x207318u, 0x207320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207320u;
label_207320:
    // 0x207320: 0x8f859b40  lw          $a1, -0x64C0($gp)
    ctx->pc = 0x207320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x207324: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x207324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x207328: 0x24035800  addiu       $v1, $zero, 0x5800
    ctx->pc = 0x207328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
    // 0x20732c: 0x26e6e180  addiu       $a2, $s7, -0x1E80
    ctx->pc = 0x20732cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959488));
    // 0x207330: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x207330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x207334: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207334u;
    {
        const bool branch_taken_0x207334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207334) {
            ctx->pc = 0x207338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207334u;
            // 0x207338: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20733Cu;
            goto label_20733c;
        }
    }
    ctx->pc = 0x20733Cu;
label_20733c:
    // 0x20733c: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x207340: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x207344: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x207344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207348: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x207348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20734c: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x20734cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x207350: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x207350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x207354: 0x70a3001a  div1        $zero, $a1, $v1
    ctx->pc = 0x207354u;
    { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 5); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x207358: 0x70002812  mflo1       $a1
    ctx->pc = 0x207358u;
    SET_GPR_U64(ctx, 5, ctx->lo1);
    // 0x20735c: 0xc0ad21a  jal         func_2B4868
    ctx->pc = 0x20735Cu;
    SET_GPR_U32(ctx, 31, 0x207364u);
    ctx->pc = 0x207360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20735Cu;
    // 0x207360: 0x24849bb8  addiu       $a0, $a0, -0x6448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4868u, 0x20735Cu, 0x207364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207364u;
label_207364:
    // 0x207364: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x207364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x207368: 0x3c076464  lui         $a3, 0x6464
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25700 << 16));
    // 0x20736c: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x20736cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x207370: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x207370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207374: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x207374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x207378: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20737c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20737cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x207380: 0x34e76480  ori         $a3, $a3, 0x6480
    ctx->pc = 0x207380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25728);
    // 0x207384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207388: 0xc08093c  jal         func_2024F0
    ctx->pc = 0x207388u;
    SET_GPR_U32(ctx, 31, 0x207390u);
    ctx->pc = 0x20738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207388u;
    // 0x20738c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024F0u, 0x207388u, 0x207390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207390u;
label_207390:
    // 0x207390: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x207390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207394: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x207394u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207398: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x207398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20739c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x20739cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2073a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2073a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2073a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2073a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2073a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2073a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2073ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2073acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2073b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2073b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2073b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2073B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B4u;
        // 0x2073b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2073B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2073BCu;
}

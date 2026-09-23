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

// Function: statsupdate_pageTick
// Address: 0x240100 - 0x2402d4
void statsupdate_pageTick_0x240100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statsupdate_pageTick_0x240100");
#endif

    switch (ctx->pc) {
        case 0x24012cu: goto label_24012c;
        case 0x24014cu: goto label_24014c;
        case 0x240154u: goto label_240154;
        case 0x240168u: goto label_240168;
        case 0x240188u: goto label_240188;
        case 0x240198u: goto label_240198;
        case 0x2401bcu: goto label_2401bc;
        case 0x2401d0u: goto label_2401d0;
        case 0x240218u: goto label_240218;
        case 0x240230u: goto label_240230;
        case 0x24024cu: goto label_24024c;
        case 0x240294u: goto label_240294;
        default: break;
    }

    ctx->pc = 0x240100u;

    // 0x240100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x240100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x240104: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x240104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x240108: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x240108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24010c: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x24010cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x240110: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x240110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x240114: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x240114u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x240118: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x240118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24011c: 0x3c1201fc  lui         $s2, 0x1FC
    ctx->pc = 0x24011cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)508 << 16));
    // 0x240120: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240124: 0xc08c050  jal         func_230140
    ctx->pc = 0x240124u;
    SET_GPR_U32(ctx, 31, 0x24012Cu);
    ctx->pc = 0x240128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240124u;
    // 0x240128: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x240124u, 0x24012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24012Cu;
label_24012c:
    // 0x24012c: 0x8f839354  lw          $v1, -0x6CAC($gp)
    ctx->pc = 0x24012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x240130: 0x26842c18  addiu       $a0, $s4, 0x2C18
    ctx->pc = 0x240130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x240134: 0x266564e0  addiu       $a1, $s3, 0x64E0
    ctx->pc = 0x240134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25824));
    // 0x240138: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24013c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x240140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240144: 0xc08c086  jal         func_230218
    ctx->pc = 0x240144u;
    SET_GPR_U32(ctx, 31, 0x24014Cu);
    ctx->pc = 0x240148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240144u;
    // 0x240148: 0x8c4401d4  lw          $a0, 0x1D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x240144u, 0x24014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24014Cu;
label_24014c:
    // 0x24014c: 0xc08a984  jal         func_22A610
    ctx->pc = 0x24014Cu;
    SET_GPR_U32(ctx, 31, 0x240154u);
    ctx->pc = 0x240150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24014Cu;
    // 0x240150: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A610u, 0x24014Cu, 0x240154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240154u;
label_240154:
    // 0x240154: 0x264211f8  addiu       $v0, $s2, 0x11F8
    ctx->pc = 0x240154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
    // 0x240158: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24015c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x24015cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x240160: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x240160u;
    {
        const bool branch_taken_0x240160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240160u;
        // 0x240164: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240160) {
            ctx->pc = 0x2401ACu;
            goto label_2401ac;
        }
    }
    ctx->pc = 0x240168u;
label_240168:
    // 0x240168: 0x8f829354  lw          $v0, -0x6CAC($gp)
    ctx->pc = 0x240168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939476)));
    // 0x24016c: 0x26852c18  addiu       $a1, $s4, 0x2C18
    ctx->pc = 0x24016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11288));
    // 0x240170: 0x8f84b748  lw          $a0, -0x48B8($gp)
    ctx->pc = 0x240170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    // 0x240174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240178: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x240178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24017c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240180: 0xc08c58e  jal         func_231638
    ctx->pc = 0x240180u;
    SET_GPR_U32(ctx, 31, 0x240188u);
    ctx->pc = 0x240184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240180u;
    // 0x240184: 0x8c650784  lw          $a1, 0x784($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1924)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231638u, 0x240180u, 0x240188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240188u;
label_240188:
    // 0x240188: 0x8f84b748  lw          $a0, -0x48B8($gp)
    ctx->pc = 0x240188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    // 0x24018c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24018cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240190: 0xc08c2a2  jal         func_230A88
    ctx->pc = 0x240190u;
    SET_GPR_U32(ctx, 31, 0x240198u);
    ctx->pc = 0x240194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240190u;
    // 0x240194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A88u, 0x240190u, 0x240198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240198u;
label_240198:
    // 0x240198: 0x264311f8  addiu       $v1, $s2, 0x11F8
    ctx->pc = 0x240198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
    // 0x24019c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2401a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2401a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2401a4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2401A4u;
    {
        const bool branch_taken_0x2401a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401A4u;
        // 0x2401a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401a4) {
            ctx->pc = 0x2402B4u;
            goto label_2402b4;
        }
    }
    ctx->pc = 0x2401ACu;
label_2401ac:
    // 0x2401ac: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2401ACu;
    {
        const bool branch_taken_0x2401ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2401ac) {
            ctx->pc = 0x240210u;
            goto label_240210;
        }
    }
    ctx->pc = 0x2401B4u;
    // 0x2401b4: 0xc08c2ec  jal         func_230BB0
    ctx->pc = 0x2401B4u;
    SET_GPR_U32(ctx, 31, 0x2401BCu);
    ctx->pc = 0x2401B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401B4u;
    // 0x2401b8: 0x8f84b748  lw          $a0, -0x48B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BB0u, 0x2401B4u, 0x2401BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401BCu;
label_2401bc:
    // 0x2401bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2401bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2401C0u;
    {
        const bool branch_taken_0x2401c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C0u;
        // 0x2401c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401c0) {
            ctx->pc = 0x2401D4u;
            goto label_2401d4;
        }
    }
    ctx->pc = 0x2401C8u;
    // 0x2401c8: 0xc08c2b8  jal         func_230AE0
    ctx->pc = 0x2401C8u;
    SET_GPR_U32(ctx, 31, 0x2401D0u);
    ctx->pc = 0x2401CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401C8u;
    // 0x2401cc: 0x8f84b748  lw          $a0, -0x48B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AE0u, 0x2401C8u, 0x2401D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401D0u;
label_2401d0:
    // 0x2401d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2401d4:
    // 0x2401d4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2401D4u;
    {
        const bool branch_taken_0x2401d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2401D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401D4u;
        // 0x2401d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401d4) {
            ctx->pc = 0x240200u;
            goto label_240200;
        }
    }
    ctx->pc = 0x2401DCu;
    // 0x2401dc: 0x8f84b748  lw          $a0, -0x48B8($gp)
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    // 0x2401e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2401e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2401e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2401e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2401e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2401e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2401ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2401ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2401f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2401f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2401f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2401f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2401f8: 0x808c746  j           func_231D18
    ctx->pc = 0x2401F8u;
    ctx->pc = 0x2401FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401F8u;
    // 0x2401fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D18u;
    signonUpdateStart_0x231d18(rdram, ctx, runtime); return;
    ctx->pc = 0x240200u;
label_240200:
    // 0x240200: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240200u;
    {
        const bool branch_taken_0x240200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x240204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240200u;
        // 0x240204: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240200) {
            ctx->pc = 0x240220u;
            goto label_240220;
        }
    }
    ctx->pc = 0x240208u;
    // 0x240208: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x240208u;
    {
        const bool branch_taken_0x240208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240208u;
        // 0x24020c: 0xdfb40040  ld          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240208) {
            ctx->pc = 0x2402BCu;
            goto label_2402bc;
        }
    }
    ctx->pc = 0x240210u;
label_240210:
    // 0x240210: 0xc08c754  jal         func_231D50
    ctx->pc = 0x240210u;
    SET_GPR_U32(ctx, 31, 0x240218u);
    ctx->pc = 0x240214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240210u;
    // 0x240214: 0x8f84b748  lw          $a0, -0x48B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D50u, 0x240210u, 0x240218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240218u;
label_240218:
    // 0x240218: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x240218u;
    {
        const bool branch_taken_0x240218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240218u;
        // 0x24021c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240218) {
            ctx->pc = 0x2402B8u;
            goto label_2402b8;
        }
    }
    ctx->pc = 0x240220u;
label_240220:
    // 0x240220: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x240224: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x240224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x240228: 0x2450e1c8  addiu       $s0, $v0, -0x1E38
    ctx->pc = 0x240228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x24022c: 0x8f83b748  lw          $v1, -0x48B8($gp)
    ctx->pc = 0x24022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
label_240230:
    // 0x240230: 0x8f82b730  lw          $v0, -0x48D0($gp)
    ctx->pc = 0x240230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x240234: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x240234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x240238: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x240238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24023c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24023Cu;
    {
        const bool branch_taken_0x24023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24023Cu;
        // 0x240240: 0xaf84b748  sw          $a0, -0x48B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24023c) {
            ctx->pc = 0x240288u;
            goto label_240288;
        }
    }
    ctx->pc = 0x240244u;
    // 0x240244: 0xc08828c  jal         func_220A30
    ctx->pc = 0x240244u;
    SET_GPR_U32(ctx, 31, 0x24024Cu);
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x240244u, 0x24024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24024Cu;
label_24024c:
    // 0x24024c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24024cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x240250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x240254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x240254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240258: 0x1071fff5  beq         $v1, $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x240258u;
    {
        const bool branch_taken_0x240258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x24025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240258u;
        // 0x24025c: 0x8f83b748  lw          $v1, -0x48B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240258) {
            ctx->pc = 0x240230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240230;
        }
    }
    ctx->pc = 0x240260u;
    // 0x240260: 0x8f82b748  lw          $v0, -0x48B8($gp)
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
    // 0x240264: 0x8f83b730  lw          $v1, -0x48D0($gp)
    ctx->pc = 0x240264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948656)));
    // 0x240268: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x240268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24026c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24026Cu;
    {
        const bool branch_taken_0x24026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24026Cu;
        // 0x240270: 0x264411f8  addiu       $a0, $s2, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24026c) {
            ctx->pc = 0x240288u;
            goto label_240288;
        }
    }
    ctx->pc = 0x240274u;
    // 0x240274: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x240274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x240278: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24027c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x240280: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x240280u;
    {
        const bool branch_taken_0x240280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240280u;
        // 0x240284: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240280) {
            ctx->pc = 0x240168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240168;
        }
    }
    ctx->pc = 0x240288u;
label_240288:
    // 0x240288: 0x266564e0  addiu       $a1, $s3, 0x64E0
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25824));
    // 0x24028c: 0xc08c086  jal         func_230218
    ctx->pc = 0x24028Cu;
    SET_GPR_U32(ctx, 31, 0x240294u);
    ctx->pc = 0x240290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24028Cu;
    // 0x240290: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230218u, 0x24028Cu, 0x240294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240294u;
label_240294:
    // 0x240294: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x240294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240298: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x240298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24029c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24029cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2402a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2402a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2402a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2402a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2402a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2402a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2402ac: 0x808ffd4  j           func_23FF50
    ctx->pc = 0x2402ACu;
    ctx->pc = 0x2402B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402ACu;
    // 0x2402b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FF50u;
    setlastgamemodepage_0x23ff50(rdram, ctx, runtime); return;
    ctx->pc = 0x2402B4u;
label_2402b4:
    // 0x2402b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2402b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2402b8:
    // 0x2402b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2402b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2402bc:
    // 0x2402bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2402bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2402c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2402c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2402c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2402c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2402c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2402c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2402cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2402CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2402D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402CCu;
        // 0x2402d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2402CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2402D4u;
}

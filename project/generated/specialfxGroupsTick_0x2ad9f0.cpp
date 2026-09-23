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

// Function: specialfxGroupsTick
// Address: 0x2ad9f0 - 0x2adb50
void specialfxGroupsTick_0x2ad9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxGroupsTick_0x2ad9f0");
#endif

    switch (ctx->pc) {
        case 0x2ad9f0u: goto label_2ad9f0;
        case 0x2ad9f4u: goto label_2ad9f4;
        case 0x2ad9f8u: goto label_2ad9f8;
        case 0x2ad9fcu: goto label_2ad9fc;
        case 0x2ada00u: goto label_2ada00;
        case 0x2ada04u: goto label_2ada04;
        case 0x2ada08u: goto label_2ada08;
        case 0x2ada0cu: goto label_2ada0c;
        case 0x2ada10u: goto label_2ada10;
        case 0x2ada14u: goto label_2ada14;
        case 0x2ada18u: goto label_2ada18;
        case 0x2ada1cu: goto label_2ada1c;
        case 0x2ada20u: goto label_2ada20;
        case 0x2ada24u: goto label_2ada24;
        case 0x2ada28u: goto label_2ada28;
        case 0x2ada2cu: goto label_2ada2c;
        case 0x2ada30u: goto label_2ada30;
        case 0x2ada34u: goto label_2ada34;
        case 0x2ada38u: goto label_2ada38;
        case 0x2ada3cu: goto label_2ada3c;
        case 0x2ada40u: goto label_2ada40;
        case 0x2ada44u: goto label_2ada44;
        case 0x2ada48u: goto label_2ada48;
        case 0x2ada4cu: goto label_2ada4c;
        case 0x2ada50u: goto label_2ada50;
        case 0x2ada54u: goto label_2ada54;
        case 0x2ada58u: goto label_2ada58;
        case 0x2ada5cu: goto label_2ada5c;
        case 0x2ada60u: goto label_2ada60;
        case 0x2ada64u: goto label_2ada64;
        case 0x2ada68u: goto label_2ada68;
        case 0x2ada6cu: goto label_2ada6c;
        case 0x2ada70u: goto label_2ada70;
        case 0x2ada74u: goto label_2ada74;
        case 0x2ada78u: goto label_2ada78;
        case 0x2ada7cu: goto label_2ada7c;
        case 0x2ada80u: goto label_2ada80;
        case 0x2ada84u: goto label_2ada84;
        case 0x2ada88u: goto label_2ada88;
        case 0x2ada8cu: goto label_2ada8c;
        case 0x2ada90u: goto label_2ada90;
        case 0x2ada94u: goto label_2ada94;
        case 0x2ada98u: goto label_2ada98;
        case 0x2ada9cu: goto label_2ada9c;
        case 0x2adaa0u: goto label_2adaa0;
        case 0x2adaa4u: goto label_2adaa4;
        case 0x2adaa8u: goto label_2adaa8;
        case 0x2adaacu: goto label_2adaac;
        case 0x2adab0u: goto label_2adab0;
        case 0x2adab4u: goto label_2adab4;
        case 0x2adab8u: goto label_2adab8;
        case 0x2adabcu: goto label_2adabc;
        case 0x2adac0u: goto label_2adac0;
        case 0x2adac4u: goto label_2adac4;
        case 0x2adac8u: goto label_2adac8;
        case 0x2adaccu: goto label_2adacc;
        case 0x2adad0u: goto label_2adad0;
        case 0x2adad4u: goto label_2adad4;
        case 0x2adad8u: goto label_2adad8;
        case 0x2adadcu: goto label_2adadc;
        case 0x2adae0u: goto label_2adae0;
        case 0x2adae4u: goto label_2adae4;
        case 0x2adae8u: goto label_2adae8;
        case 0x2adaecu: goto label_2adaec;
        case 0x2adaf0u: goto label_2adaf0;
        case 0x2adaf4u: goto label_2adaf4;
        case 0x2adaf8u: goto label_2adaf8;
        case 0x2adafcu: goto label_2adafc;
        case 0x2adb00u: goto label_2adb00;
        case 0x2adb04u: goto label_2adb04;
        case 0x2adb08u: goto label_2adb08;
        case 0x2adb0cu: goto label_2adb0c;
        case 0x2adb10u: goto label_2adb10;
        case 0x2adb14u: goto label_2adb14;
        case 0x2adb18u: goto label_2adb18;
        case 0x2adb1cu: goto label_2adb1c;
        case 0x2adb20u: goto label_2adb20;
        case 0x2adb24u: goto label_2adb24;
        case 0x2adb28u: goto label_2adb28;
        case 0x2adb2cu: goto label_2adb2c;
        case 0x2adb30u: goto label_2adb30;
        case 0x2adb34u: goto label_2adb34;
        case 0x2adb38u: goto label_2adb38;
        case 0x2adb3cu: goto label_2adb3c;
        case 0x2adb40u: goto label_2adb40;
        case 0x2adb44u: goto label_2adb44;
        case 0x2adb48u: goto label_2adb48;
        case 0x2adb4cu: goto label_2adb4c;
        default: break;
    }

    ctx->pc = 0x2ad9f0u;

label_2ad9f0:
    // 0x2ad9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ad9f4:
    // 0x2ad9f4: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x2ad9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ad9f8:
    // 0x2ad9f8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2ad9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_2ad9fc:
    // 0x2ad9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ada00:
    // 0x2ada00: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2ada00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2ada04:
    // 0x2ada04: 0x0  nop
    ctx->pc = 0x2ada04u;
    // NOP
label_2ada08:
    // 0x2ada08: 0x0  nop
    ctx->pc = 0x2ada08u;
    // NOP
label_2ada0c:
    // 0x2ada0c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2ada0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2ada10:
    // 0x2ada10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ada10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ada14:
    // 0x2ada14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ada14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ada18:
    // 0x2ada18: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x2ada18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_2ada1c:
    // 0x2ada1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ada1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ada20:
    // 0x2ada20: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2ada20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_2ada24:
    // 0x2ada24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ada24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ada28:
    // 0x2ada28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ada28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ada2c:
    // 0x2ada2c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ada2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ada30:
    // 0x2ada30: 0x2646c268  addiu       $a2, $s2, -0x3D98
    ctx->pc = 0x2ada30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951528));
label_2ada34:
    // 0x2ada34: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x2ada34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2ada38:
    // 0x2ada38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ada38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ada3c:
    // 0x2ada3c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2ada3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ada40:
    // 0x2ada40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ada40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ada44:
    // 0x2ada44: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_2ada48:
    if (ctx->pc == 0x2ADA48u) {
        ctx->pc = 0x2ADA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA44u;
        // 0x2ada48: 0x24c20030  addiu       $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA4Cu;
        goto label_2ada4c;
    }
    ctx->pc = 0x2ADA44u;
    {
        const bool branch_taken_0x2ada44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ADA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA44u;
        // 0x2ada48: 0x24c20030  addiu       $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada44) {
            ctx->pc = 0x2ADB24u;
            goto label_2adb24;
        }
    }
    ctx->pc = 0x2ADA4Cu;
label_2ada4c:
    // 0x2ada4c: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x2ada4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2ada50:
    // 0x2ada50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ada50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2ada54:
    // 0x2ada54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ada54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ada58:
    // 0x2ada58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2ada58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2ada5c:
    // 0x2ada5c: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_2ada60:
    if (ctx->pc == 0x2ADA60u) {
        ctx->pc = 0x2ADA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA5Cu;
        // 0x2ada60: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA64u;
        goto label_2ada64;
    }
    ctx->pc = 0x2ADA5Cu;
    {
        const bool branch_taken_0x2ada5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA5Cu;
        // 0x2ada60: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada5c) {
            ctx->pc = 0x2ADB24u;
            goto label_2adb24;
        }
    }
    ctx->pc = 0x2ADA64u;
label_2ada64:
    // 0x2ada64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ada64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ada68:
    // 0x2ada68: 0x262397b0  addiu       $v1, $s1, -0x6850
    ctx->pc = 0x2ada68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940592));
label_2ada6c:
    // 0x2ada6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ada6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ada70:
    // 0x2ada70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ada70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ada74:
    // 0x2ada74: 0x800008  jr          $a0
label_2ada78:
    if (ctx->pc == 0x2ADA78u) {
        ctx->pc = 0x2ADA7Cu;
        goto label_2ada7c;
    }
    ctx->pc = 0x2ADA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADA74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ADA7Cu;
label_2ada7c:
    // 0x2ada7c: 0xc0ab0dc  jal         func_2AC370
label_2ada80:
    if (ctx->pc == 0x2ADA80u) {
        ctx->pc = 0x2ADA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA7Cu;
        // 0x2ada80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA84u;
        goto label_2ada84;
    }
    ctx->pc = 0x2ADA7Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA84u);
    ctx->pc = 0x2ADA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA7Cu;
    // 0x2ada80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC370u, 0x2ADA7Cu, 0x2ADA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA84u;
label_2ada84:
    // 0x2ada84: 0x10000028  b           . + 4 + (0x28 << 2)
label_2ada88:
    if (ctx->pc == 0x2ADA88u) {
        ctx->pc = 0x2ADA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA84u;
        // 0x2ada88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA8Cu;
        goto label_2ada8c;
    }
    ctx->pc = 0x2ADA84u;
    {
        const bool branch_taken_0x2ada84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA84u;
        // 0x2ada88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada84) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADA8Cu;
label_2ada8c:
    // 0x2ada8c: 0xc0ab144  jal         func_2AC510
label_2ada90:
    if (ctx->pc == 0x2ADA90u) {
        ctx->pc = 0x2ADA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA8Cu;
        // 0x2ada90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA94u;
        goto label_2ada94;
    }
    ctx->pc = 0x2ADA8Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA94u);
    ctx->pc = 0x2ADA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA8Cu;
    // 0x2ada90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC510u, 0x2ADA8Cu, 0x2ADA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA94u;
label_2ada94:
    // 0x2ada94: 0x10000024  b           . + 4 + (0x24 << 2)
label_2ada98:
    if (ctx->pc == 0x2ADA98u) {
        ctx->pc = 0x2ADA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA94u;
        // 0x2ada98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA9Cu;
        goto label_2ada9c;
    }
    ctx->pc = 0x2ADA94u;
    {
        const bool branch_taken_0x2ada94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA94u;
        // 0x2ada98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada94) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADA9Cu;
label_2ada9c:
    // 0x2ada9c: 0xc0ab1ec  jal         func_2AC7B0
label_2adaa0:
    if (ctx->pc == 0x2ADAA0u) {
        ctx->pc = 0x2ADAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA9Cu;
        // 0x2adaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAA4u;
        goto label_2adaa4;
    }
    ctx->pc = 0x2ADA9Cu;
    SET_GPR_U32(ctx, 31, 0x2ADAA4u);
    ctx->pc = 0x2ADAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA9Cu;
    // 0x2adaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC7B0u, 0x2ADA9Cu, 0x2ADAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAA4u;
label_2adaa4:
    // 0x2adaa4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2adaa8:
    if (ctx->pc == 0x2ADAA8u) {
        ctx->pc = 0x2ADAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAA4u;
        // 0x2adaa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAACu;
        goto label_2adaac;
    }
    ctx->pc = 0x2ADAA4u;
    {
        const bool branch_taken_0x2adaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAA4u;
        // 0x2adaa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adaa4) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADAACu;
label_2adaac:
    // 0x2adaac: 0xc0ab2b0  jal         func_2ACAC0
label_2adab0:
    if (ctx->pc == 0x2ADAB0u) {
        ctx->pc = 0x2ADAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAACu;
        // 0x2adab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAB4u;
        goto label_2adab4;
    }
    ctx->pc = 0x2ADAACu;
    SET_GPR_U32(ctx, 31, 0x2ADAB4u);
    ctx->pc = 0x2ADAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAACu;
    // 0x2adab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACAC0u, 0x2ADAACu, 0x2ADAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAB4u;
label_2adab4:
    // 0x2adab4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2adab8:
    if (ctx->pc == 0x2ADAB8u) {
        ctx->pc = 0x2ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAB4u;
        // 0x2adab8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADABCu;
        goto label_2adabc;
    }
    ctx->pc = 0x2ADAB4u;
    {
        const bool branch_taken_0x2adab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAB4u;
        // 0x2adab8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adab4) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADABCu;
label_2adabc:
    // 0x2adabc: 0xc0ab2de  jal         func_2ACB78
label_2adac0:
    if (ctx->pc == 0x2ADAC0u) {
        ctx->pc = 0x2ADAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADABCu;
        // 0x2adac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAC4u;
        goto label_2adac4;
    }
    ctx->pc = 0x2ADABCu;
    SET_GPR_U32(ctx, 31, 0x2ADAC4u);
    ctx->pc = 0x2ADAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADABCu;
    // 0x2adac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB78u, 0x2ADABCu, 0x2ADAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAC4u;
label_2adac4:
    // 0x2adac4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2adac8:
    if (ctx->pc == 0x2ADAC8u) {
        ctx->pc = 0x2ADAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAC4u;
        // 0x2adac8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADACCu;
        goto label_2adacc;
    }
    ctx->pc = 0x2ADAC4u;
    {
        const bool branch_taken_0x2adac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAC4u;
        // 0x2adac8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adac4) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADACCu;
label_2adacc:
    // 0x2adacc: 0xc0ab336  jal         func_2ACCD8
label_2adad0:
    if (ctx->pc == 0x2ADAD0u) {
        ctx->pc = 0x2ADAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADACCu;
        // 0x2adad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAD4u;
        goto label_2adad4;
    }
    ctx->pc = 0x2ADACCu;
    SET_GPR_U32(ctx, 31, 0x2ADAD4u);
    ctx->pc = 0x2ADAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADACCu;
    // 0x2adad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCD8u, 0x2ADACCu, 0x2ADAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAD4u;
label_2adad4:
    // 0x2adad4: 0x10000014  b           . + 4 + (0x14 << 2)
label_2adad8:
    if (ctx->pc == 0x2ADAD8u) {
        ctx->pc = 0x2ADAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAD4u;
        // 0x2adad8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADADCu;
        goto label_2adadc;
    }
    ctx->pc = 0x2ADAD4u;
    {
        const bool branch_taken_0x2adad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAD4u;
        // 0x2adad8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adad4) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADADCu;
label_2adadc:
    // 0x2adadc: 0xc0ab3bc  jal         func_2ACEF0
label_2adae0:
    if (ctx->pc == 0x2ADAE0u) {
        ctx->pc = 0x2ADAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADADCu;
        // 0x2adae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAE4u;
        goto label_2adae4;
    }
    ctx->pc = 0x2ADADCu;
    SET_GPR_U32(ctx, 31, 0x2ADAE4u);
    ctx->pc = 0x2ADAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADADCu;
    // 0x2adae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACEF0u, 0x2ADADCu, 0x2ADAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAE4u;
label_2adae4:
    // 0x2adae4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2adae8:
    if (ctx->pc == 0x2ADAE8u) {
        ctx->pc = 0x2ADAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAE4u;
        // 0x2adae8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAECu;
        goto label_2adaec;
    }
    ctx->pc = 0x2ADAE4u;
    {
        const bool branch_taken_0x2adae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAE4u;
        // 0x2adae8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adae4) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADAECu;
label_2adaec:
    // 0x2adaec: 0xc0ab45c  jal         func_2AD170
label_2adaf0:
    if (ctx->pc == 0x2ADAF0u) {
        ctx->pc = 0x2ADAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAECu;
        // 0x2adaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAF4u;
        goto label_2adaf4;
    }
    ctx->pc = 0x2ADAECu;
    SET_GPR_U32(ctx, 31, 0x2ADAF4u);
    ctx->pc = 0x2ADAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAECu;
    // 0x2adaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD170u, 0x2ADAECu, 0x2ADAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAF4u;
label_2adaf4:
    // 0x2adaf4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2adaf8:
    if (ctx->pc == 0x2ADAF8u) {
        ctx->pc = 0x2ADAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAF4u;
        // 0x2adaf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAFCu;
        goto label_2adafc;
    }
    ctx->pc = 0x2ADAF4u;
    {
        const bool branch_taken_0x2adaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAF4u;
        // 0x2adaf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adaf4) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADAFCu;
label_2adafc:
    // 0x2adafc: 0xc0ab500  jal         func_2AD400
label_2adb00:
    if (ctx->pc == 0x2ADB00u) {
        ctx->pc = 0x2ADB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAFCu;
        // 0x2adb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB04u;
        goto label_2adb04;
    }
    ctx->pc = 0x2ADAFCu;
    SET_GPR_U32(ctx, 31, 0x2ADB04u);
    ctx->pc = 0x2ADB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAFCu;
    // 0x2adb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD400u, 0x2ADAFCu, 0x2ADB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB04u;
label_2adb04:
    // 0x2adb04: 0x10000008  b           . + 4 + (0x8 << 2)
label_2adb08:
    if (ctx->pc == 0x2ADB08u) {
        ctx->pc = 0x2ADB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB04u;
        // 0x2adb08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB0Cu;
        goto label_2adb0c;
    }
    ctx->pc = 0x2ADB04u;
    {
        const bool branch_taken_0x2adb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB04u;
        // 0x2adb08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb04) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADB0Cu;
label_2adb0c:
    // 0x2adb0c: 0xc0ab5e2  jal         func_2AD788
label_2adb10:
    if (ctx->pc == 0x2ADB10u) {
        ctx->pc = 0x2ADB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB0Cu;
        // 0x2adb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB14u;
        goto label_2adb14;
    }
    ctx->pc = 0x2ADB0Cu;
    SET_GPR_U32(ctx, 31, 0x2ADB14u);
    ctx->pc = 0x2ADB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB0Cu;
    // 0x2adb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD788u, 0x2ADB0Cu, 0x2ADB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB14u;
label_2adb14:
    // 0x2adb14: 0x10000004  b           . + 4 + (0x4 << 2)
label_2adb18:
    if (ctx->pc == 0x2ADB18u) {
        ctx->pc = 0x2ADB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB14u;
        // 0x2adb18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB1Cu;
        goto label_2adb1c;
    }
    ctx->pc = 0x2ADB14u;
    {
        const bool branch_taken_0x2adb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB14u;
        // 0x2adb18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb14) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADB1Cu;
label_2adb1c:
    // 0x2adb1c: 0xc0ab548  jal         func_2AD520
label_2adb20:
    if (ctx->pc == 0x2ADB20u) {
        ctx->pc = 0x2ADB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB1Cu;
        // 0x2adb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB24u;
        goto label_2adb24;
    }
    ctx->pc = 0x2ADB1Cu;
    SET_GPR_U32(ctx, 31, 0x2ADB24u);
    ctx->pc = 0x2ADB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB1Cu;
    // 0x2adb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2ADB1Cu, 0x2ADB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB24u;
label_2adb24:
    // 0x2adb24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2adb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2adb28:
    // 0x2adb28: 0x2a020038  slti        $v0, $s0, 0x38
    ctx->pc = 0x2adb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
label_2adb2c:
    // 0x2adb2c: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
label_2adb30:
    if (ctx->pc == 0x2ADB30u) {
        ctx->pc = 0x2ADB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB2Cu;
        // 0x2adb30: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB34u;
        goto label_2adb34;
    }
    ctx->pc = 0x2ADB2Cu;
    {
        const bool branch_taken_0x2adb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adb2c) {
            ctx->pc = 0x2ADB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADB2Cu;
            // 0x2adb30: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ada30;
        }
    }
    ctx->pc = 0x2ADB34u;
label_2adb34:
    // 0x2adb34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2adb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2adb38:
    // 0x2adb38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2adb38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2adb3c:
    // 0x2adb3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2adb3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2adb40:
    // 0x2adb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2adb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2adb44:
    // 0x2adb44: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2adb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2adb48:
    // 0x2adb48: 0x3e00008  jr          $ra
label_2adb4c:
    if (ctx->pc == 0x2ADB4Cu) {
        ctx->pc = 0x2ADB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB48u;
        // 0x2adb4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB50u;
        goto label_fallthrough_0x2adb48;
    }
    ctx->pc = 0x2ADB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB48u;
        // 0x2adb4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2adb48:
    ctx->pc = 0x2ADB50u;
}

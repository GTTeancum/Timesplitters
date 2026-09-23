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

// Function: animMtxTick
// Address: 0x273bb0 - 0x274240
void animMtxTick_0x273bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("animMtxTick_0x273bb0");
#endif

    switch (ctx->pc) {
        case 0x273be0u: goto label_273be0;
        case 0x273c54u: goto label_273c54;
        case 0x273c80u: goto label_273c80;
        case 0x273c98u: goto label_273c98;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d10u: goto label_273d10;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d80u: goto label_273d80;
        case 0x273d9cu: goto label_273d9c;
        case 0x273ddcu: goto label_273ddc;
        case 0x273df0u: goto label_273df0;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e78u: goto label_273e78;
        case 0x273eb4u: goto label_273eb4;
        case 0x273f18u: goto label_273f18;
        case 0x273f54u: goto label_273f54;
        case 0x273f90u: goto label_273f90;
        case 0x273fa4u: goto label_273fa4;
        case 0x273fb8u: goto label_273fb8;
        case 0x273fecu: goto label_273fec;
        case 0x274000u: goto label_274000;
        case 0x274018u: goto label_274018;
        case 0x274034u: goto label_274034;
        case 0x274088u: goto label_274088;
        case 0x27409cu: goto label_27409c;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740ccu: goto label_2740cc;
        case 0x274114u: goto label_274114;
        case 0x274128u: goto label_274128;
        case 0x274140u: goto label_274140;
        case 0x27415cu: goto label_27415c;
        case 0x2741a4u: goto label_2741a4;
        case 0x2741b8u: goto label_2741b8;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741ecu: goto label_2741ec;
        default: break;
    }

    ctx->pc = 0x273bb0u;

    // 0x273bb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x273bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x273bb4: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
    // 0x273bb8: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x273bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x273bbc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x273bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x273bc0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x273bc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bc4: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x273bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x273bc8: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x273bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x273bcc: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x273bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x273bd0: 0x18a00193  blez        $a1, . + 4 + (0x193 << 2)
    ctx->pc = 0x273BD0u;
    {
        const bool branch_taken_0x273bd0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x273BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BD0u;
        // 0x273bd4: 0xffb00080  sd          $s0, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bd0) {
            ctx->pc = 0x274220u;
            goto label_274220;
        }
    }
    ctx->pc = 0x273BD8u;
    // 0x273bd8: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x273bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x273bdc: 0x0  nop
    ctx->pc = 0x273bdcu;
    // NOP
label_273be0:
    // 0x273be0: 0x8f83b07c  lw          $v1, -0x4F84($gp)
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946940)));
    // 0x273be4: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x273be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x273be8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x273be8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273bec: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x273bf0: 0x4820188  bltzl       $a0, . + 4 + (0x188 << 2)
    ctx->pc = 0x273BF0u;
    {
        const bool branch_taken_0x273bf0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x273bf0) {
            ctx->pc = 0x273BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273BF0u;
            // 0x273bf4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x273BF8u;
    // 0x273bf8: 0x8e530020  lw          $s3, 0x20($s2)
    ctx->pc = 0x273bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x273bfc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x273bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x273c00: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x273C00u;
    {
        const bool branch_taken_0x273c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C00u;
        // 0x273c04: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c00) {
            ctx->pc = 0x274208u;
            goto label_274208;
        }
    }
    ctx->pc = 0x273C08u;
    // 0x273c08: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x273c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x273c0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273C0Cu;
    {
        const bool branch_taken_0x273c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C0Cu;
        // 0x273c10: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c0c) {
            ctx->pc = 0x273C20u;
            goto label_273c20;
        }
    }
    ctx->pc = 0x273C14u;
    // 0x273c14: 0x8c433710  lw          $v1, 0x3710($v0)
    ctx->pc = 0x273c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14096)));
    // 0x273c18: 0x56430083  bnel        $s2, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x273C18u;
    {
        const bool branch_taken_0x273c18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x273c18) {
            ctx->pc = 0x273C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273C18u;
            // 0x273c1c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E28u;
            goto label_273e28;
        }
    }
    ctx->pc = 0x273C20u;
label_273c20:
    // 0x273c20: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x273c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x273c24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c28: 0xc780859c  lwc1        $f0, -0x7A64($gp)
    ctx->pc = 0x273c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c2c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x273c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x273c30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273c34: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x273c34u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x273c38: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x273c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273c3c: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x273c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273c40: 0x0  nop
    ctx->pc = 0x273c40u;
    // NOP
    // 0x273c44: 0x0  nop
    ctx->pc = 0x273c44u;
    // NOP
    // 0x273c48: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x273c48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x273c4c: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x273C4Cu;
    SET_GPR_U32(ctx, 31, 0x273C54u);
    ctx->pc = 0x273C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C4Cu;
    // 0x273c50: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x273C4Cu, 0x273C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C54u;
label_273c54:
    // 0x273c54: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x273c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x273c58: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x273c5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x273c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x273c60: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x273C60u;
    {
        const bool branch_taken_0x273c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C60u;
        // 0x273c64: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c60) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273C68u;
    // 0x273c68: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x273c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x273c6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x273c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c74: 0x8c4506e4  lw          $a1, 0x6E4($v0)
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x273c78: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273C78u;
    SET_GPR_U32(ctx, 31, 0x273C80u);
    ctx->pc = 0x273C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C78u;
    // 0x273c7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273C78u, 0x273C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C80u;
label_273c80:
    // 0x273c80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273c84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x273c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x273c88: 0x58600011  blezl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x273C88u;
    {
        const bool branch_taken_0x273c88 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x273c88) {
            ctx->pc = 0x273C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273C88u;
            // 0x273c8c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273C90u;
    // 0x273c90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x273c90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x273c94: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_273c98:
    // 0x273c98: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x273c9c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x273c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x273ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ca4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x273ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273cac: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273CACu;
    SET_GPR_U32(ctx, 31, 0x273CB4u);
    ctx->pc = 0x273CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CACu;
    // 0x273cb0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273CACu, 0x273CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CB4u;
label_273cb4:
    // 0x273cb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273cb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x273cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x273cbc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x273cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x273cc0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x273CC0u;
    {
        const bool branch_taken_0x273cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273cc0) {
            ctx->pc = 0x273CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273CC0u;
            // 0x273cc4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273c98;
        }
    }
    ctx->pc = 0x273CC8u;
    // 0x273cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273CC8u;
    {
        const bool branch_taken_0x273cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CC8u;
        // 0x273ccc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cc8) {
            ctx->pc = 0x273CD4u;
            goto label_273cd4;
        }
    }
    ctx->pc = 0x273CD0u;
label_273cd0:
    // 0x273cd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_273cd4:
    // 0x273cd4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x273cd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x273cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x273cdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273CDCu;
    {
        const bool branch_taken_0x273cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CDCu;
        // 0x273ce0: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cdc) {
            ctx->pc = 0x273D44u;
            goto label_273d44;
        }
    }
    ctx->pc = 0x273CE4u;
    // 0x273ce4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x273ce8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x273ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cf0: 0x8c450e00  lw          $a1, 0xE00($v0)
    ctx->pc = 0x273cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3584)));
    // 0x273cf4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273CF4u;
    SET_GPR_U32(ctx, 31, 0x273CFCu);
    ctx->pc = 0x273CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CF4u;
    // 0x273cf8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273CF4u, 0x273CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CFCu;
label_273cfc:
    // 0x273cfc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x273cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273d00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x273d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x273d04: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x273D04u;
    {
        const bool branch_taken_0x273d04 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x273d04) {
            ctx->pc = 0x273D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D04u;
            // 0x273d08: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273D44u;
            goto label_273d44;
        }
    }
    ctx->pc = 0x273D0Cu;
    // 0x273d0c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x273d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_273d10:
    // 0x273d10: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x273d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x273d14: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x273d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x273d18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273d20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x273d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273d24: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273D24u;
    SET_GPR_U32(ctx, 31, 0x273D2Cu);
    ctx->pc = 0x273D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D24u;
    // 0x273d28: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273D24u, 0x273D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D2Cu;
label_273d2c:
    // 0x273d2c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x273d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273d30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x273d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x273d34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x273d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x273d38: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x273D38u;
    {
        const bool branch_taken_0x273d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273d38) {
            ctx->pc = 0x273D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D38u;
            // 0x273d3c: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273d10;
        }
    }
    ctx->pc = 0x273D40u;
    // 0x273d40: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_273d44:
    // 0x273d44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x273d48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x273d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x273d4c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x273D4Cu;
    {
        const bool branch_taken_0x273d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D4Cu;
        // 0x273d50: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d4c) {
            ctx->pc = 0x273DB4u;
            goto label_273db4;
        }
    }
    ctx->pc = 0x273D54u;
    // 0x273d54: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x273d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x273d58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x273d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d60: 0x8c45151c  lw          $a1, 0x151C($v0)
    ctx->pc = 0x273d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5404)));
    // 0x273d64: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273D64u;
    SET_GPR_U32(ctx, 31, 0x273D6Cu);
    ctx->pc = 0x273D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D64u;
    // 0x273d68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273D64u, 0x273D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D6Cu;
label_273d6c:
    // 0x273d6c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x273d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273d70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x273d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x273d74: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x273D74u;
    {
        const bool branch_taken_0x273d74 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x273d74) {
            ctx->pc = 0x273D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D74u;
            // 0x273d78: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273DB4u;
            goto label_273db4;
        }
    }
    ctx->pc = 0x273D7Cu;
    // 0x273d7c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x273d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_273d80:
    // 0x273d80: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x273d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x273d84: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x273d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x273d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273d90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x273d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273d94: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273D94u;
    SET_GPR_U32(ctx, 31, 0x273D9Cu);
    ctx->pc = 0x273D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D94u;
    // 0x273d98: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273D94u, 0x273D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D9Cu;
label_273d9c:
    // 0x273d9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x273d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273da0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x273da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x273da4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x273da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x273da8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x273DA8u;
    {
        const bool branch_taken_0x273da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273da8) {
            ctx->pc = 0x273DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273DA8u;
            // 0x273dac: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273d80;
        }
    }
    ctx->pc = 0x273DB0u;
    // 0x273db0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x273db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_273db4:
    // 0x273db4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x273db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x273db8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x273db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x273dbc: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x273DBCu;
    {
        const bool branch_taken_0x273dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DBCu;
        // 0x273dc0: 0x8f82b230  lw          $v0, -0x4DD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dbc) {
            ctx->pc = 0x274210u;
            goto label_274210;
        }
    }
    ctx->pc = 0x273DC4u;
    // 0x273dc4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x273dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x273dc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x273dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273dd0: 0x8c451c38  lw          $a1, 0x1C38($v0)
    ctx->pc = 0x273dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7224)));
    // 0x273dd4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273DD4u;
    SET_GPR_U32(ctx, 31, 0x273DDCu);
    ctx->pc = 0x273DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DD4u;
    // 0x273dd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273DD4u, 0x273DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DDCu;
label_273ddc:
    // 0x273ddc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273de0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x273de4: 0x1860010b  blez        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x273DE4u;
    {
        const bool branch_taken_0x273de4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x273DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE4u;
        // 0x273de8: 0x8f85b15c  lw          $a1, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273de4) {
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x273DECu;
    // 0x273dec: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_273df0:
    // 0x273df0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x273df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x273df4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x273df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x273df8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273dfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273e00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273e04: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273E04u;
    SET_GPR_U32(ctx, 31, 0x273E0Cu);
    ctx->pc = 0x273E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E04u;
    // 0x273e08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273E04u, 0x273E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E0Cu;
label_273e0c:
    // 0x273e0c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x273e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x273e10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x273e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x273e14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x273e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x273e18: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x273E18u;
    {
        const bool branch_taken_0x273e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e18) {
            ctx->pc = 0x273E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E18u;
            // 0x273e1c: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273df0;
        }
    }
    ctx->pc = 0x273E20u;
    // 0x273e20: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x273E20u;
    {
        const bool branch_taken_0x273e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E20u;
        // 0x273e24: 0x8f85b15c  lw          $a1, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e20) {
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x273E28u;
label_273e28:
    // 0x273e28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x273e2c: 0x586000f9  blezl       $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x273E2Cu;
    {
        const bool branch_taken_0x273e2c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x273e2c) {
            ctx->pc = 0x273E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E2Cu;
            // 0x273e30: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x273E34u;
    // 0x273e34: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x273e38: 0x544000f6  bnel        $v0, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x273E38u;
    {
        const bool branch_taken_0x273e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e38) {
            ctx->pc = 0x273E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E38u;
            // 0x273e3c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x273E40u;
    // 0x273e40: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x273e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x273e44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273e48: 0x106200ef  beq         $v1, $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x273E48u;
    {
        const bool branch_taken_0x273e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E48u;
        // 0x273e4c: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e48) {
            ctx->pc = 0x274208u;
            goto label_274208;
        }
    }
    ctx->pc = 0x273E50u;
    // 0x273e50: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x273E50u;
    {
        const bool branch_taken_0x273e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E50u;
        // 0x273e54: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e50) {
            ctx->pc = 0x273FBCu;
            goto label_273fbc;
        }
    }
    ctx->pc = 0x273E58u;
    // 0x273e58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273e5c: 0x244280c0  addiu       $v0, $v0, -0x7F40
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934720));
    // 0x273e60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273e64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273e68: 0x800008  jr          $a0
    ctx->pc = 0x273E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273E70u: goto label_273e70;
            case 0x273E80u: goto label_273e80;
            case 0x273EBCu: goto label_273ebc;
            case 0x273F20u: goto label_273f20;
            case 0x273F5Cu: goto label_273f5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273E68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273E70u;
label_273e70:
    // 0x273e70: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x273E70u;
    SET_GPR_U32(ctx, 31, 0x273E78u);
    ctx->pc = 0x273E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E70u;
    // 0x273e74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x273E70u, 0x273E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E78u;
label_273e78:
    // 0x273e78: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x273E78u;
    {
        const bool branch_taken_0x273e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E78u;
        // 0x273e7c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e78) {
            ctx->pc = 0x273FBCu;
            goto label_273fbc;
        }
    }
    ctx->pc = 0x273E80u;
label_273e80:
    // 0x273e80: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x273e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x273e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e88: 0xc78085a0  lwc1        $f0, -0x7A60($gp)
    ctx->pc = 0x273e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273e8c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x273e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x273e90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273e94: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x273e94u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x273e98: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x273e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273e9c: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x273e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273ea0: 0x0  nop
    ctx->pc = 0x273ea0u;
    // NOP
    // 0x273ea4: 0x0  nop
    ctx->pc = 0x273ea4u;
    // NOP
    // 0x273ea8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x273ea8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x273eac: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x273EACu;
    SET_GPR_U32(ctx, 31, 0x273EB4u);
    ctx->pc = 0x273EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EACu;
    // 0x273eb0: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x273EACu, 0x273EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EB4u;
label_273eb4:
    // 0x273eb4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x273EB4u;
    {
        const bool branch_taken_0x273eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EB4u;
        // 0x273eb8: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273eb4) {
            ctx->pc = 0x273FBCu;
            goto label_273fbc;
        }
    }
    ctx->pc = 0x273EBCu;
label_273ebc:
    // 0x273ebc: 0xc78185a4  lwc1        $f1, -0x7A5C($gp)
    ctx->pc = 0x273ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ec4: 0xc64f0048  lwc1        $f15, 0x48($s2)
    ctx->pc = 0x273ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x273ec8: 0xc650004c  lwc1        $f16, 0x4C($s2)
    ctx->pc = 0x273ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x273ecc: 0xc6510058  lwc1        $f17, 0x58($s2)
    ctx->pc = 0x273eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x273ed0: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x273ed0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x273ed4: 0x46018402  mul.s       $f16, $f16, $f1
    ctx->pc = 0x273ed4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x273ed8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x273ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x273edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ee0: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x273ee0u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x273ee4: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x273ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273ee8: 0x0  nop
    ctx->pc = 0x273ee8u;
    // NOP
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
    // 0x273ef0: 0x46007bc3  div.s       $f15, $f15, $f0
    ctx->pc = 0x273ef0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x273ef4: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x273ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273ef8: 0x0  nop
    ctx->pc = 0x273ef8u;
    // NOP
    // 0x273efc: 0x0  nop
    ctx->pc = 0x273efcu;
    // NOP
    // 0x273f00: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x273f00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
    // 0x273f04: 0x0  nop
    ctx->pc = 0x273f04u;
    // NOP
    // 0x273f08: 0x0  nop
    ctx->pc = 0x273f08u;
    // NOP
    // 0x273f0c: 0x46008c43  div.s       $f17, $f17, $f0
    ctx->pc = 0x273f0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[0];
    // 0x273f10: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x273F10u;
    SET_GPR_U32(ctx, 31, 0x273F18u);
    ctx->pc = 0x273F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F10u;
    // 0x273f14: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x273F10u, 0x273F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F18u;
label_273f18:
    // 0x273f18: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x273F18u;
    {
        const bool branch_taken_0x273f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F18u;
        // 0x273f1c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f18) {
            ctx->pc = 0x273FBCu;
            goto label_273fbc;
        }
    }
    ctx->pc = 0x273F20u;
label_273f20:
    // 0x273f20: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x273f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x273f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f28: 0xc78085a8  lwc1        $f0, -0x7A58($gp)
    ctx->pc = 0x273f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273f2c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x273f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273f34: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x273f34u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x273f38: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x273f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273f3c: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x273f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273f40: 0x0  nop
    ctx->pc = 0x273f40u;
    // NOP
    // 0x273f44: 0x0  nop
    ctx->pc = 0x273f44u;
    // NOP
    // 0x273f48: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x273f48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x273f4c: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x273F4Cu;
    SET_GPR_U32(ctx, 31, 0x273F54u);
    ctx->pc = 0x273F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F4Cu;
    // 0x273f50: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x273F4Cu, 0x273F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F54u;
label_273f54:
    // 0x273f54: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x273F54u;
    {
        const bool branch_taken_0x273f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F54u;
        // 0x273f58: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f54) {
            ctx->pc = 0x273FBCu;
            goto label_273fbc;
        }
    }
    ctx->pc = 0x273F5Cu;
label_273f5c:
    // 0x273f5c: 0xc64f004c  lwc1        $f15, 0x4C($s2)
    ctx->pc = 0x273f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x273f60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f64: 0xc78085ac  lwc1        $f0, -0x7A54($gp)
    ctx->pc = 0x273f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273f68: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x273f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x273f6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273f70: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x273f70u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x273f74: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x273f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273f78: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x273f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273f7c: 0x0  nop
    ctx->pc = 0x273f7cu;
    // NOP
    // 0x273f80: 0x0  nop
    ctx->pc = 0x273f80u;
    // NOP
    // 0x273f84: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x273f84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x273f88: 0xc0ad314  jal         func_2B4C50
    ctx->pc = 0x273F88u;
    SET_GPR_U32(ctx, 31, 0x273F90u);
    ctx->pc = 0x273F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F88u;
    // 0x273f8c: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C50u, 0x273F88u, 0x273F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F90u;
label_273f90:
    // 0x273f90: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x273f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x273f94: 0x26450064  addiu       $a1, $s2, 0x64
    ctx->pc = 0x273f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x273f98: 0xc64c005c  lwc1        $f12, 0x5C($s2)
    ctx->pc = 0x273f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273f9c: 0xc0ad70a  jal         func_2B5C28
    ctx->pc = 0x273F9Cu;
    SET_GPR_U32(ctx, 31, 0x273FA4u);
    ctx->pc = 0x273FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F9Cu;
    // 0x273fa0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C28u, 0x273F9Cu, 0x273FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273FA4u;
label_273fa4:
    // 0x273fa4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x273fa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x273facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fb0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273FB0u;
    SET_GPR_U32(ctx, 31, 0x273FB8u);
    ctx->pc = 0x273FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FB0u;
    // 0x273fb4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273FB0u, 0x273FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273FB8u;
label_273fb8:
    // 0x273fb8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x273fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_273fbc:
    // 0x273fbc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x273fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x273fc0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x273fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x273fc4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x273FC4u;
    {
        const bool branch_taken_0x273fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FC4u;
        // 0x273fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fc4) {
            ctx->pc = 0x274054u;
            goto label_274054;
        }
    }
    ctx->pc = 0x273FCCu;
    // 0x273fcc: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x273fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x273fd0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273FD0u;
    {
        const bool branch_taken_0x273fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FD0u;
        // 0x273fd4: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fd0) {
            ctx->pc = 0x273FF4u;
            goto label_273ff4;
        }
    }
    ctx->pc = 0x273FD8u;
    // 0x273fd8: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x273fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x273fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fe0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x273fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fe4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x273FE4u;
    SET_GPR_U32(ctx, 31, 0x273FECu);
    ctx->pc = 0x273FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FE4u;
    // 0x273fe8: 0x8c4506e4  lw          $a1, 0x6E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x273FE4u, 0x273FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273FECu;
label_273fec:
    // 0x273fec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x273FECu;
    {
        const bool branch_taken_0x273fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FECu;
        // 0x273ff0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fec) {
            ctx->pc = 0x274004u;
            goto label_274004;
        }
    }
    ctx->pc = 0x273FF4u;
label_273ff4:
    // 0x273ff4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x273ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ff8: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x273FF8u;
    SET_GPR_U32(ctx, 31, 0x274000u);
    ctx->pc = 0x273FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FF8u;
    // 0x273ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x273FF8u, 0x274000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274000u;
label_274000:
    // 0x274000: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x274000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_274004:
    // 0x274004: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x274004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x274008: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x274008u;
    {
        const bool branch_taken_0x274008 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274008u;
        // 0x27400c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274008) {
            ctx->pc = 0x274050u;
            goto label_274050;
        }
    }
    ctx->pc = 0x274010u;
    // 0x274010: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x274010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x274014: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x274014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_274018:
    // 0x274018: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x274018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x27401c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x27401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x274020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274024: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x274024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x274028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27402c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27402Cu;
    SET_GPR_U32(ctx, 31, 0x274034u);
    ctx->pc = 0x274030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27402Cu;
    // 0x274030: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27402Cu, 0x274034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274034u;
label_274034:
    // 0x274034: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274038: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x274038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27403c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27403cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x274040: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x274040u;
    {
        const bool branch_taken_0x274040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274040) {
            ctx->pc = 0x274044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274040u;
            // 0x274044: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274018;
        }
    }
    ctx->pc = 0x274048u;
    // 0x274048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274048u;
    {
        const bool branch_taken_0x274048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274048u;
        // 0x27404c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274048) {
            ctx->pc = 0x274058u;
            goto label_274058;
        }
    }
    ctx->pc = 0x274050u;
label_274050:
    // 0x274050: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x274050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_274054:
    // 0x274054: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x274054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_274058:
    // 0x274058: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x274058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x27405c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x27405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x274060: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x274060u;
    {
        const bool branch_taken_0x274060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274060u;
        // 0x274064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274060) {
            ctx->pc = 0x2740E4u;
            goto label_2740e4;
        }
    }
    ctx->pc = 0x274068u;
    // 0x274068: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x274068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x27406c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27406Cu;
    {
        const bool branch_taken_0x27406c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27406Cu;
        // 0x274070: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27406c) {
            ctx->pc = 0x274090u;
            goto label_274090;
        }
    }
    ctx->pc = 0x274074u;
    // 0x274074: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x274074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x274078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27407c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27407cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274080: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x274080u;
    SET_GPR_U32(ctx, 31, 0x274088u);
    ctx->pc = 0x274084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274080u;
    // 0x274084: 0x8c450e00  lw          $a1, 0xE00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x274080u, 0x274088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274088u;
label_274088:
    // 0x274088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274088u;
    {
        const bool branch_taken_0x274088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274088u;
        // 0x27408c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274088) {
            ctx->pc = 0x2740A0u;
            goto label_2740a0;
        }
    }
    ctx->pc = 0x274090u;
label_274090:
    // 0x274090: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x274090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274094: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x274094u;
    SET_GPR_U32(ctx, 31, 0x27409Cu);
    ctx->pc = 0x274098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274094u;
    // 0x274098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x274094u, 0x27409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27409Cu;
label_27409c:
    // 0x27409c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2740a0:
    // 0x2740a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2740a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2740a4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2740A4u;
    {
        const bool branch_taken_0x2740a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2740A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740A4u;
        // 0x2740a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740a4) {
            ctx->pc = 0x2740E0u;
            goto label_2740e0;
        }
    }
    ctx->pc = 0x2740ACu;
    // 0x2740ac: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2740acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2740b0:
    // 0x2740b0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2740b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2740b4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2740b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2740b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2740b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2740bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2740c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2740c4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2740C4u;
    SET_GPR_U32(ctx, 31, 0x2740CCu);
    ctx->pc = 0x2740C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2740C4u;
    // 0x2740c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2740C4u, 0x2740CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740CCu;
label_2740cc:
    // 0x2740cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2740ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2740d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2740d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2740d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2740d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2740d8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2740D8u;
    {
        const bool branch_taken_0x2740d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2740d8) {
            ctx->pc = 0x2740DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2740D8u;
            // 0x2740dc: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2740B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2740b0;
        }
    }
    ctx->pc = 0x2740E0u;
label_2740e0:
    // 0x2740e0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2740e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2740e4:
    // 0x2740e4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2740e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2740e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2740ec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2740ECu;
    {
        const bool branch_taken_0x2740ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740ECu;
        // 0x2740f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740ec) {
            ctx->pc = 0x274174u;
            goto label_274174;
        }
    }
    ctx->pc = 0x2740F4u;
    // 0x2740f4: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x2740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2740f8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2740F8u;
    {
        const bool branch_taken_0x2740f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2740FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740F8u;
        // 0x2740fc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740f8) {
            ctx->pc = 0x27411Cu;
            goto label_27411c;
        }
    }
    ctx->pc = 0x274100u;
    // 0x274100: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x274104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274108: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27410c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27410Cu;
    SET_GPR_U32(ctx, 31, 0x274114u);
    ctx->pc = 0x274110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27410Cu;
    // 0x274110: 0x8c45151c  lw          $a1, 0x151C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27410Cu, 0x274114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274114u;
label_274114:
    // 0x274114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274114u;
    {
        const bool branch_taken_0x274114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274114u;
        // 0x274118: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274114) {
            ctx->pc = 0x27412Cu;
            goto label_27412c;
        }
    }
    ctx->pc = 0x27411Cu;
label_27411c:
    // 0x27411c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27411cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274120: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x274120u;
    SET_GPR_U32(ctx, 31, 0x274128u);
    ctx->pc = 0x274124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274120u;
    // 0x274124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x274120u, 0x274128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274128u;
label_274128:
    // 0x274128: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x274128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27412c:
    // 0x27412c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x27412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x274130: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x274130u;
    {
        const bool branch_taken_0x274130 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x274134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274130u;
        // 0x274134: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274130) {
            ctx->pc = 0x274170u;
            goto label_274170;
        }
    }
    ctx->pc = 0x274138u;
    // 0x274138: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x274138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x27413c: 0x0  nop
    ctx->pc = 0x27413cu;
    // NOP
label_274140:
    // 0x274140: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x274140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x274144: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x274148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27414c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x274150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x274154: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x274154u;
    SET_GPR_U32(ctx, 31, 0x27415Cu);
    ctx->pc = 0x274158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274154u;
    // 0x274158: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x274154u, 0x27415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27415Cu;
label_27415c:
    // 0x27415c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274160: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x274160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x274164: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x274164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x274168: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x274168u;
    {
        const bool branch_taken_0x274168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274168) {
            ctx->pc = 0x27416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274168u;
            // 0x27416c: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274140;
        }
    }
    ctx->pc = 0x274170u;
label_274170:
    // 0x274170: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x274170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_274174:
    // 0x274174: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x274178: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x274178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x27417c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x27417Cu;
    {
        const bool branch_taken_0x27417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27417Cu;
        // 0x274180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27417c) {
            ctx->pc = 0x274210u;
            goto label_274210;
        }
    }
    ctx->pc = 0x274184u;
    // 0x274184: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x274184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x274188: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274188u;
    {
        const bool branch_taken_0x274188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274188u;
        // 0x27418c: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274188) {
            ctx->pc = 0x2741ACu;
            goto label_2741ac;
        }
    }
    ctx->pc = 0x274190u;
    // 0x274190: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x274190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
    // 0x274194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274198: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27419c: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x27419Cu;
    SET_GPR_U32(ctx, 31, 0x2741A4u);
    ctx->pc = 0x2741A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27419Cu;
    // 0x2741a0: 0x8c451c38  lw          $a1, 0x1C38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x27419Cu, 0x2741A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741A4u;
label_2741a4:
    // 0x2741a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2741A4u;
    {
        const bool branch_taken_0x2741a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741A4u;
        // 0x2741a8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741a4) {
            ctx->pc = 0x2741BCu;
            goto label_2741bc;
        }
    }
    ctx->pc = 0x2741ACu;
label_2741ac:
    // 0x2741ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2741acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741b0: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x2741B0u;
    SET_GPR_U32(ctx, 31, 0x2741B8u);
    ctx->pc = 0x2741B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741B0u;
    // 0x2741b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x2741B0u, 0x2741B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741B8u;
label_2741b8:
    // 0x2741b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2741b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2741bc:
    // 0x2741bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2741bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2741c0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2741C0u;
    {
        const bool branch_taken_0x2741c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741c0) {
            ctx->pc = 0x274210u;
            goto label_274210;
        }
    }
    ctx->pc = 0x2741C8u;
    // 0x2741c8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2741c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2741cc: 0x0  nop
    ctx->pc = 0x2741ccu;
    // NOP
label_2741d0:
    // 0x2741d0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2741d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2741d4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2741d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2741d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2741d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2741dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2741e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2741e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2741e4: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2741E4u;
    SET_GPR_U32(ctx, 31, 0x2741ECu);
    ctx->pc = 0x2741E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741E4u;
    // 0x2741e8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2741E4u, 0x2741ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741ECu;
label_2741ec:
    // 0x2741ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2741ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2741f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2741f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2741f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2741f8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2741F8u;
    {
        const bool branch_taken_0x2741f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2741f8) {
            ctx->pc = 0x2741FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2741F8u;
            // 0x2741fc: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2741d0;
        }
    }
    ctx->pc = 0x274200u;
    // 0x274200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x274200u;
    {
        const bool branch_taken_0x274200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274200u;
        // 0x274204: 0x8f85b15c  lw          $a1, -0x4EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274200) {
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x274208u;
label_274208:
    // 0x274208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274208u;
    {
        const bool branch_taken_0x274208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274208u;
        // 0x27420c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274208) {
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x274210u;
label_274210:
    // 0x274210: 0x8f85b15c  lw          $a1, -0x4EA4($gp)
    ctx->pc = 0x274210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_274214:
    // 0x274214: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x274214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x274218: 0x1440fe71  bnez        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x274218u;
    {
        const bool branch_taken_0x274218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274218u;
        // 0x27421c: 0x24020250  addiu       $v0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274218) {
            ctx->pc = 0x273BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273be0;
        }
    }
    ctx->pc = 0x274220u;
label_274220:
    // 0x274220: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x274220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x274224: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x274224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x274228: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x274228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27422c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x27422cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274230: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x274230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274234: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x274234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274238: 0x3e00008  jr          $ra
    ctx->pc = 0x274238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274238u;
        // 0x27423c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274240u;
}

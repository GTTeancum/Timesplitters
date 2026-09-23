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

// Function: drawChar
// Address: 0x2369a0 - 0x236e5c
void drawChar_0x2369a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawChar_0x2369a0");
#endif

    switch (ctx->pc) {
        case 0x236a0cu: goto label_236a0c;
        case 0x236a1cu: goto label_236a1c;
        case 0x236a74u: goto label_236a74;
        case 0x236a8cu: goto label_236a8c;
        case 0x236b18u: goto label_236b18;
        case 0x236b24u: goto label_236b24;
        case 0x236b78u: goto label_236b78;
        case 0x236b80u: goto label_236b80;
        case 0x236b90u: goto label_236b90;
        case 0x236be0u: goto label_236be0;
        case 0x236c34u: goto label_236c34;
        case 0x236c64u: goto label_236c64;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cbcu: goto label_236cbc;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cd0u: goto label_236cd0;
        case 0x236d20u: goto label_236d20;
        case 0x236d70u: goto label_236d70;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc8u: goto label_236dc8;
        default: break;
    }

    ctx->pc = 0x2369a0u;

    // 0x2369a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2369a4: 0xc78181d4  lwc1        $f1, -0x7E2C($gp)
    ctx->pc = 0x2369a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2369a8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2369a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2369ac: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2369acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2369b0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2369b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2369b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2369b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369b8: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2369b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2369bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2369bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369c0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2369c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2369c4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2369c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2369c8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2369c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2369cc: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2369ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2369d0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2369d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2369d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2369d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2369d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2369dc: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x2369dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2369e0: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2369e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2369e4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2369e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2369e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2369e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2369ec: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x2369ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2369f0: 0x0  nop
    ctx->pc = 0x2369f0u;
    // NOP
    // 0x2369f4: 0x0  nop
    ctx->pc = 0x2369f4u;
    // NOP
    // 0x2369f8: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x2369f8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x2369fc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2369fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x236a00: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x236a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236a04: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x236A04u;
    SET_GPR_U32(ctx, 31, 0x236A0Cu);
    ctx->pc = 0x236A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A04u;
    // 0x236a08: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x236A04u, 0x236A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A0Cu;
label_236a0c:
    // 0x236a0c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x236a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x236a10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x236a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a14: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x236A14u;
    SET_GPR_U32(ctx, 31, 0x236A1Cu);
    ctx->pc = 0x236A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A14u;
    // 0x236a18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x236A14u, 0x236A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A1Cu;
label_236a1c:
    // 0x236a1c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x236a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236a20: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x236a24: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x236a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236a28: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x236a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x236a2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x236a30: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x236a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x236a34: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x236a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x236a38: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x236A38u;
    {
        const bool branch_taken_0x236a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x236A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A38u;
        // 0x236a3c: 0x2882002f  slti        $v0, $a0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a38) {
            ctx->pc = 0x236A64u;
            goto label_236a64;
        }
    }
    ctx->pc = 0x236A40u;
    // 0x236a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236A40u;
    {
        const bool branch_taken_0x236a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A40u;
        // 0x236a44: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a40) {
            ctx->pc = 0x236A58u;
            goto label_236a58;
        }
    }
    ctx->pc = 0x236A48u;
    // 0x236a48: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236A48u;
    {
        const bool branch_taken_0x236a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x236a48) {
            ctx->pc = 0x236A64u;
            goto label_236a64;
        }
    }
    ctx->pc = 0x236A50u;
    // 0x236a50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x236A50u;
    {
        const bool branch_taken_0x236a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a50) {
            ctx->pc = 0x236A7Cu;
            goto label_236a7c;
        }
    }
    ctx->pc = 0x236A58u;
label_236a58:
    // 0x236a58: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x236a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x236a5c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236A5Cu;
    {
        const bool branch_taken_0x236a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x236a5c) {
            ctx->pc = 0x236A7Cu;
            goto label_236a7c;
        }
    }
    ctx->pc = 0x236A64u;
label_236a64:
    // 0x236a64: 0x3c014346  lui         $at, 0x4346
    ctx->pc = 0x236a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17222 << 16));
    // 0x236a68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x236a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236a6c: 0xc08da62  jal         func_236988
    ctx->pc = 0x236A6Cu;
    SET_GPR_U32(ctx, 31, 0x236A74u);
    ctx->pc = 0x236A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A6Cu;
    // 0x236a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236988u, 0x236A6Cu, 0x236A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A74u;
label_236a74:
    // 0x236a74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x236A74u;
    {
        const bool branch_taken_0x236a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A74u;
        // 0x236a78: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a74) {
            ctx->pc = 0x236A90u;
            goto label_236a90;
        }
    }
    ctx->pc = 0x236A7Cu;
label_236a7c:
    // 0x236a7c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x236a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x236a80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x236a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236a84: 0xc08da62  jal         func_236988
    ctx->pc = 0x236A84u;
    SET_GPR_U32(ctx, 31, 0x236A8Cu);
    ctx->pc = 0x236A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A84u;
    // 0x236a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236988u, 0x236A84u, 0x236A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A8Cu;
label_236a8c:
    // 0x236a8c: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_236a90:
    // 0x236a90: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x236a90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x236a94: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x236a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236a98: 0x26723710  addiu       $s2, $s3, 0x3710
    ctx->pc = 0x236a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 14096));
    // 0x236a9c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x236a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236aa0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236aa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x236aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236aac: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x236aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x236ab0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x236ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236ab4: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x236AB4u;
    {
        const bool branch_taken_0x236ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AB4u;
        // 0x236ab8: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ab4) {
            ctx->pc = 0x236B60u;
            goto label_236b60;
        }
    }
    ctx->pc = 0x236ABCu;
    // 0x236abc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x236abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x236ac0: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x236ac4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236ac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236acc: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x236ACCu;
    {
        const bool branch_taken_0x236acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236acc) {
            ctx->pc = 0x236AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236ACCu;
            // 0x236ad0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236B64u;
            goto label_236b64;
        }
    }
    ctx->pc = 0x236AD4u;
    // 0x236ad4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x236ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x236ad8: 0xc78281d8  lwc1        $f2, -0x7E28($gp)
    ctx->pc = 0x236ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236adc: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x236adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236ae0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x236ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x236ae4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236ae8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x236ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x236aec: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x236aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236af0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x236af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x236af4: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x236af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236af8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x236af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x236afc: 0xc4cc004c  lwc1        $f12, 0x4C($a2)
    ctx->pc = 0x236afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x236b00: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x236b00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x236b04: 0x0  nop
    ctx->pc = 0x236b04u;
    // NOP
    // 0x236b08: 0x0  nop
    ctx->pc = 0x236b08u;
    // NOP
    // 0x236b0c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x236b0cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x236b10: 0xc0ad296  jal         func_2B4A58
    ctx->pc = 0x236B10u;
    SET_GPR_U32(ctx, 31, 0x236B18u);
    ctx->pc = 0x236B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B10u;
    // 0x236b14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A58u, 0x236B10u, 0x236B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B18u;
label_236b18:
    // 0x236b18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b1c: 0xc0ad58e  jal         func_2B5638
    ctx->pc = 0x236B1Cu;
    SET_GPR_U32(ctx, 31, 0x236B24u);
    ctx->pc = 0x236B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B1Cu;
    // 0x236b20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5638u, 0x236B1Cu, 0x236B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B24u;
label_236b24:
    // 0x236b24: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x236b28: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x236b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236b2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x236b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236b30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236b34: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x236b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x236b38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236b3c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x236b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236b40: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x236b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236b44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x236b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x236b48: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x236b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x236b4c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x236b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236b50: 0xe474004c  swc1        $f20, 0x4C($v1)
    ctx->pc = 0x236b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x236b54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x236b54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x236b58: 0xe4740054  swc1        $f20, 0x54($v1)
    ctx->pc = 0x236b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x236b5c: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x236b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_236b60:
    // 0x236b60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x236b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_236b64:
    // 0x236b64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x236b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x236b68: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x236B68u;
    {
        const bool branch_taken_0x236b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B68u;
        // 0x236b6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b68) {
            ctx->pc = 0x236DD0u;
            goto label_236dd0;
        }
    }
    ctx->pc = 0x236B70u;
    // 0x236b70: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x236B70u;
    SET_GPR_U32(ctx, 31, 0x236B78u);
    ctx->pc = 0x236B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B70u;
    // 0x236b74: 0x3c140035  lui         $s4, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)53 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x236B70u, 0x236B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B78u;
label_236b78:
    // 0x236b78: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x236B78u;
    SET_GPR_U32(ctx, 31, 0x236B80u);
    ctx->pc = 0x236B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B78u;
    // 0x236b7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x236B78u, 0x236B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B80u;
label_236b80:
    // 0x236b80: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x236b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x236b84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x236b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b88: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236B88u;
    SET_GPR_U32(ctx, 31, 0x236B90u);
    ctx->pc = 0x236B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B88u;
    // 0x236b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236B88u, 0x236B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B90u;
label_236b90:
    // 0x236b90: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x236b94: 0x268236f0  addiu       $v0, $s4, 0x36F0
    ctx->pc = 0x236b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 14064));
    // 0x236b98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236b9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236ba0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236ba4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x236ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236ba8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x236BA8u;
    {
        const bool branch_taken_0x236ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BA8u;
        // 0x236bac: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ba8) {
            ctx->pc = 0x236BE4u;
            goto label_236be4;
        }
    }
    ctx->pc = 0x236BB0u;
    // 0x236bb0: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x236bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x236bb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236bbc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x236BBCu;
    {
        const bool branch_taken_0x236bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236bbc) {
            ctx->pc = 0x236BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BBCu;
            // 0x236bc0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BE8u;
            goto label_236be8;
        }
    }
    ctx->pc = 0x236BC4u;
    // 0x236bc4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x236bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236bc8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x236bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x236bcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236BCCu;
    {
        const bool branch_taken_0x236bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236bcc) {
            ctx->pc = 0x236BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236BCCu;
            // 0x236bd0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BE8u;
            goto label_236be8;
        }
    }
    ctx->pc = 0x236BD4u;
    // 0x236bd4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x236bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x236bd8: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236BD8u;
    SET_GPR_U32(ctx, 31, 0x236BE0u);
    ctx->pc = 0x236BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236BD8u;
    // 0x236bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236BD8u, 0x236BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BE0u;
label_236be0:
    // 0x236be0: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_236be4:
    // 0x236be4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_236be8:
    // 0x236be8: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x236be8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x236bec: 0x26223700  addiu       $v0, $s1, 0x3700
    ctx->pc = 0x236becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 14080));
    // 0x236bf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236bf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236bf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x236bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236bfc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x236BFCu;
    {
        const bool branch_taken_0x236bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BFCu;
        // 0x236c00: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236bfc) {
            ctx->pc = 0x236C38u;
            goto label_236c38;
        }
    }
    ctx->pc = 0x236C04u;
    // 0x236c04: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x236c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
    // 0x236c08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c10: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x236C10u;
    {
        const bool branch_taken_0x236c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c10) {
            ctx->pc = 0x236C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236C10u;
            // 0x236c14: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C3Cu;
            goto label_236c3c;
        }
    }
    ctx->pc = 0x236C18u;
    // 0x236c18: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x236c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236c1c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x236c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x236c20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236C20u;
    {
        const bool branch_taken_0x236c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236c20) {
            ctx->pc = 0x236C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236C20u;
            // 0x236c24: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C3Cu;
            goto label_236c3c;
        }
    }
    ctx->pc = 0x236C28u;
    // 0x236c28: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x236c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x236c2c: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236C2Cu;
    SET_GPR_U32(ctx, 31, 0x236C34u);
    ctx->pc = 0x236C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C2Cu;
    // 0x236c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236C2Cu, 0x236C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C34u;
label_236c34:
    // 0x236c34: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_236c38:
    // 0x236c38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x236c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_236c3c:
    // 0x236c3c: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x236c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x236c40: 0x26433750  addiu       $v1, $s2, 0x3750
    ctx->pc = 0x236c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 14160));
    // 0x236c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236c4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x236c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236C50u;
    {
        const bool branch_taken_0x236c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c50) {
            ctx->pc = 0x236C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236C50u;
            // 0x236c54: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C6Cu;
            goto label_236c6c;
        }
    }
    ctx->pc = 0x236C58u;
    // 0x236c58: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x236c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x236c5c: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236C5Cu;
    SET_GPR_U32(ctx, 31, 0x236C64u);
    ctx->pc = 0x236C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C5Cu;
    // 0x236c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236C5Cu, 0x236C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C64u;
label_236c64:
    // 0x236c64: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x236c68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_236c6c:
    // 0x236c6c: 0x26623710  addiu       $v0, $s3, 0x3710
    ctx->pc = 0x236c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 14096));
    // 0x236c70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236c74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236c78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x236c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c7c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x236C7Cu;
    {
        const bool branch_taken_0x236c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C7Cu;
        // 0x236c80: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c7c) {
            ctx->pc = 0x236CB4u;
            goto label_236cb4;
        }
    }
    ctx->pc = 0x236C84u;
    // 0x236c84: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x236c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x236c88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236c8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x236C90u;
    {
        const bool branch_taken_0x236c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c90) {
            ctx->pc = 0x236CB4u;
            goto label_236cb4;
        }
    }
    ctx->pc = 0x236C98u;
    // 0x236c98: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x236c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236c9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x236c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x236ca0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236CA0u;
    {
        const bool branch_taken_0x236ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236ca0) {
            ctx->pc = 0x236CB4u;
            goto label_236cb4;
        }
    }
    ctx->pc = 0x236CA8u;
    // 0x236ca8: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x236ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x236cac: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236CACu;
    SET_GPR_U32(ctx, 31, 0x236CB4u);
    ctx->pc = 0x236CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CACu;
    // 0x236cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236CACu, 0x236CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CB4u;
label_236cb4:
    // 0x236cb4: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x236CB4u;
    SET_GPR_U32(ctx, 31, 0x236CBCu);
    ctx->pc = 0x236CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CB4u;
    // 0x236cb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x236CB4u, 0x236CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CBCu;
label_236cbc:
    // 0x236cbc: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x236CBCu;
    SET_GPR_U32(ctx, 31, 0x236CC4u);
    ctx->pc = 0x236CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CBCu;
    // 0x236cc0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x236CBCu, 0x236CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CC4u;
label_236cc4:
    // 0x236cc4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x236cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x236cc8: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236CC8u;
    SET_GPR_U32(ctx, 31, 0x236CD0u);
    ctx->pc = 0x236CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CC8u;
    // 0x236ccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236CC8u, 0x236CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CD0u;
label_236cd0:
    // 0x236cd0: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x236cd4: 0x268236f0  addiu       $v0, $s4, 0x36F0
    ctx->pc = 0x236cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 14064));
    // 0x236cd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236cdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236ce0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236ce4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x236ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236ce8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x236CE8u;
    {
        const bool branch_taken_0x236ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CE8u;
        // 0x236cec: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ce8) {
            ctx->pc = 0x236D24u;
            goto label_236d24;
        }
    }
    ctx->pc = 0x236CF0u;
    // 0x236cf0: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x236cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x236cf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236cf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236cfc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x236CFCu;
    {
        const bool branch_taken_0x236cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236cfc) {
            ctx->pc = 0x236D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236CFCu;
            // 0x236d00: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D28u;
            goto label_236d28;
        }
    }
    ctx->pc = 0x236D04u;
    // 0x236d04: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x236d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236d08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x236d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x236d0c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236D0Cu;
    {
        const bool branch_taken_0x236d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236d0c) {
            ctx->pc = 0x236D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D0Cu;
            // 0x236d10: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D28u;
            goto label_236d28;
        }
    }
    ctx->pc = 0x236D14u;
    // 0x236d14: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x236d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x236d18: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236D18u;
    SET_GPR_U32(ctx, 31, 0x236D20u);
    ctx->pc = 0x236D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D18u;
    // 0x236d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236D18u, 0x236D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D20u;
label_236d20:
    // 0x236d20: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_236d24:
    // 0x236d24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_236d28:
    // 0x236d28: 0x26223700  addiu       $v0, $s1, 0x3700
    ctx->pc = 0x236d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 14080));
    // 0x236d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236d30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236d34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x236d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236d38: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x236D38u;
    {
        const bool branch_taken_0x236d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D38u;
        // 0x236d3c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d38) {
            ctx->pc = 0x236D74u;
            goto label_236d74;
        }
    }
    ctx->pc = 0x236D40u;
    // 0x236d40: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x236d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
    // 0x236d44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236d4c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x236D4Cu;
    {
        const bool branch_taken_0x236d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d4c) {
            ctx->pc = 0x236D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D4Cu;
            // 0x236d50: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D78u;
            goto label_236d78;
        }
    }
    ctx->pc = 0x236D54u;
    // 0x236d54: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x236d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236d58: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x236d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x236d5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236D5Cu;
    {
        const bool branch_taken_0x236d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236d5c) {
            ctx->pc = 0x236D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D5Cu;
            // 0x236d60: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D78u;
            goto label_236d78;
        }
    }
    ctx->pc = 0x236D64u;
    // 0x236d64: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x236d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x236d68: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236D68u;
    SET_GPR_U32(ctx, 31, 0x236D70u);
    ctx->pc = 0x236D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D68u;
    // 0x236d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236D68u, 0x236D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D70u;
label_236d70:
    // 0x236d70: 0x8f85a004  lw          $a1, -0x5FFC($gp)
    ctx->pc = 0x236d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
label_236d74:
    // 0x236d74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x236d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_236d78:
    // 0x236d78: 0x26623710  addiu       $v0, $s3, 0x3710
    ctx->pc = 0x236d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 14096));
    // 0x236d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x236d80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236d84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x236d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236d88: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x236D88u;
    {
        const bool branch_taken_0x236d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D88u;
        // 0x236d8c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d88) {
            ctx->pc = 0x236DC0u;
            goto label_236dc0;
        }
    }
    ctx->pc = 0x236D90u;
    // 0x236d90: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x236d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x236d94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x236d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236d98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236d9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x236D9Cu;
    {
        const bool branch_taken_0x236d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d9c) {
            ctx->pc = 0x236DC0u;
            goto label_236dc0;
        }
    }
    ctx->pc = 0x236DA4u;
    // 0x236da4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x236da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x236da8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x236da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x236dac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236DACu;
    {
        const bool branch_taken_0x236dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236dac) {
            ctx->pc = 0x236DC0u;
            goto label_236dc0;
        }
    }
    ctx->pc = 0x236DB4u;
    // 0x236db4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x236db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x236db8: 0xc098a98  jal         func_262A60
    ctx->pc = 0x236DB8u;
    SET_GPR_U32(ctx, 31, 0x236DC0u);
    ctx->pc = 0x236DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DB8u;
    // 0x236dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A60u, 0x236DB8u, 0x236DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DC0u;
label_236dc0:
    // 0x236dc0: 0xc0adf34  jal         func_2B7CD0
    ctx->pc = 0x236DC0u;
    SET_GPR_U32(ctx, 31, 0x236DC8u);
    ctx->pc = 0x236DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC0u;
    // 0x236dc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CD0u, 0x236DC0u, 0x236DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DC8u;
label_236dc8:
    // 0x236dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x236DC8u;
    {
        const bool branch_taken_0x236dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC8u;
        // 0x236dcc: 0x8f85a004  lw          $a1, -0x5FFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dc8) {
            ctx->pc = 0x236DD4u;
            goto label_236dd4;
        }
    }
    ctx->pc = 0x236DD0u;
label_236dd0:
    // 0x236dd0: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x236dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
label_236dd4:
    // 0x236dd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x236dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x236dd8: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x236ddc: 0x24631258  addiu       $v1, $v1, 0x1258
    ctx->pc = 0x236ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4696));
    // 0x236de0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x236de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236de8: 0x26443750  addiu       $a0, $s2, 0x3750
    ctx->pc = 0x236de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14160));
    // 0x236dec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x236decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236df0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x236df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x236df4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x236df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236df8: 0x26633710  addiu       $v1, $s3, 0x3710
    ctx->pc = 0x236df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 14096));
    // 0x236dfc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x236dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236e04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x236e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x236e08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x236e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236e0c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x236e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x236e10: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x236e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e14: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x236e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236e18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x236e1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236E1Cu;
    {
        const bool branch_taken_0x236e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E1Cu;
        // 0x236e20: 0xe4a00030  swc1        $f0, 0x30($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e1c) {
            ctx->pc = 0x236E34u;
            goto label_236e34;
        }
    }
    ctx->pc = 0x236E24u;
    // 0x236e24: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x236e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236e28: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x236e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x236e30: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x236e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_236e34:
    // 0x236e34: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x236e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x236e38: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x236e38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x236e3c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x236e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x236e40: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x236e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x236e44: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x236e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x236e48: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x236e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236e4c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x236e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236e50: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x236e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236e54: 0x3e00008  jr          $ra
    ctx->pc = 0x236E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E54u;
        // 0x236e58: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E5Cu;
}

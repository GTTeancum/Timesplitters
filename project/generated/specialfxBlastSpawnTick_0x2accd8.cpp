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

// Function: specialfxBlastSpawnTick
// Address: 0x2accd8 - 0x2aceec
void specialfxBlastSpawnTick_0x2accd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialfxBlastSpawnTick_0x2accd8");
#endif

    switch (ctx->pc) {
        case 0x2acd6cu: goto label_2acd6c;
        case 0x2acd78u: goto label_2acd78;
        case 0x2acd84u: goto label_2acd84;
        case 0x2acd90u: goto label_2acd90;
        case 0x2acd98u: goto label_2acd98;
        case 0x2acde8u: goto label_2acde8;
        case 0x2acdf4u: goto label_2acdf4;
        case 0x2ace00u: goto label_2ace00;
        case 0x2ace0cu: goto label_2ace0c;
        case 0x2ace14u: goto label_2ace14;
        case 0x2ace60u: goto label_2ace60;
        default: break;
    }

    ctx->pc = 0x2accd8u;

    // 0x2accd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2accd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2accdc: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2accdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2acce0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2acce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2acce4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2acce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acce8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2acce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2accec: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x2accecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2accf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2accf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2accf4: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x2accf4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x2accf8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2accf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2accfc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2accfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2acd00: 0x2670c268  addiu       $s0, $s3, -0x3D98
    ctx->pc = 0x2acd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2acd04: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2acd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2acd08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2acd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2acd0c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2acd10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2acd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2acd14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2acd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2acd18: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2acd18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2acd1c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2acd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2acd20: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2ACD20u;
    {
        const bool branch_taken_0x2acd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD20u;
        // 0x2acd24: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd20) {
            ctx->pc = 0x2ACE64u;
            goto label_2ace64;
        }
    }
    ctx->pc = 0x2ACD28u;
    // 0x2acd28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2acd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2acd2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2acd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2acd30: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2acd34: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2acd38: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2acd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acd3c: 0x24575c60  addiu       $s7, $v0, 0x5C60
    ctx->pc = 0x2acd3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x2acd40: 0x0  nop
    ctx->pc = 0x2acd40u;
    // NOP
    // 0x2acd44: 0x0  nop
    ctx->pc = 0x2acd44u;
    // NOP
    // 0x2acd48: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2acd48u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2acd4c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2acd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2acd50: 0xdc349768  ld          $s4, -0x6898($at)
    ctx->pc = 0x2acd50u;
    SET_GPR_U64(ctx, 20, FAST_READ64(0x3A9768u));
    // 0x2acd54: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2acd58: 0xdc359770  ld          $s5, -0x6890($at)
    ctx->pc = 0x2acd58u;
    SET_GPR_U64(ctx, 21, FAST_READ64(0x3A9770u));
    // 0x2acd5c: 0x3416ff80  ori         $s6, $zero, 0xFF80
    ctx->pc = 0x2acd5cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2acd60: 0x16b3bc  dsll32      $s6, $s6, 14
    ctx->pc = 0x2acd60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 14));
    // 0x2acd64: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2ACD64u;
    SET_GPR_U32(ctx, 31, 0x2ACD6Cu);
    ctx->pc = 0x2ACD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD64u;
    // 0x2acd68: 0x8c910160  lw          $s1, 0x160($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2ACD64u, 0x2ACD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD6Cu;
label_2acd6c:
    // 0x2acd6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd70: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACD70u;
    SET_GPR_U32(ctx, 31, 0x2ACD78u);
    ctx->pc = 0x2ACD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD70u;
    // 0x2acd74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACD70u, 0x2ACD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD78u;
label_2acd78:
    // 0x2acd78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd7c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACD7Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD84u);
    ctx->pc = 0x2ACD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD7Cu;
    // 0x2acd80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACD7Cu, 0x2ACD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD84u;
label_2acd84:
    // 0x2acd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd88: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ACD88u;
    SET_GPR_U32(ctx, 31, 0x2ACD90u);
    ctx->pc = 0x2ACD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD88u;
    // 0x2acd8c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ACD88u, 0x2ACD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD90u;
label_2acd90:
    // 0x2acd90: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2ACD90u;
    SET_GPR_U32(ctx, 31, 0x2ACD98u);
    ctx->pc = 0x2ACD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD90u;
    // 0x2acd94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2ACD90u, 0x2ACD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD98u;
label_2acd98:
    // 0x2acd98: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2acd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2acd9c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2acd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2acda0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2acda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2acda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2acda8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2acda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2acdac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2acdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdb0: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2acdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2acdb4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2acdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2acdb8: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x2acdb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acdbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACDBCu;
    {
        const bool branch_taken_0x2acdbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2acdbc) {
            ctx->pc = 0x2ACDD4u;
            goto label_2acdd4;
        }
    }
    ctx->pc = 0x2ACDC4u;
    // 0x2acdc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2acdc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2acdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acdcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2ACDCCu;
    {
        const bool branch_taken_0x2acdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDCCu;
        // 0x2acdd0: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdcc) {
            ctx->pc = 0x2ACE28u;
            goto label_2ace28;
        }
    }
    ctx->pc = 0x2ACDD4u;
label_2acdd4:
    // 0x2acdd4: 0x0  nop
    ctx->pc = 0x2acdd4u;
    // NOP
    // 0x2acdd8: 0x0  nop
    ctx->pc = 0x2acdd8u;
    // NOP
    // 0x2acddc: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2acddcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2acde0: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2ACDE0u;
    SET_GPR_U32(ctx, 31, 0x2ACDE8u);
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2ACDE0u, 0x2ACDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDE8u;
label_2acde8:
    // 0x2acde8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdec: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACDECu;
    SET_GPR_U32(ctx, 31, 0x2ACDF4u);
    ctx->pc = 0x2ACDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDECu;
    // 0x2acdf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACDECu, 0x2ACDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDF4u;
label_2acdf4:
    // 0x2acdf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdf8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2ACDF8u;
    SET_GPR_U32(ctx, 31, 0x2ACE00u);
    ctx->pc = 0x2ACDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDF8u;
    // 0x2acdfc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2ACDF8u, 0x2ACE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE00u;
label_2ace00:
    // 0x2ace00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ace00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace04: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2ACE04u;
    SET_GPR_U32(ctx, 31, 0x2ACE0Cu);
    ctx->pc = 0x2ACE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE04u;
    // 0x2ace08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2ACE04u, 0x2ACE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE0Cu;
label_2ace0c:
    // 0x2ace0c: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2ACE0Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE14u);
    ctx->pc = 0x2ACE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE0Cu;
    // 0x2ace10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2ACE0Cu, 0x2ACE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE14u;
label_2ace14:
    // 0x2ace14: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2ace14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2ace18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ace18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ace1c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2ace1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2ace20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ace20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace24: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2ace24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_2ace28:
    // 0x2ace28: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ace28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ace2c: 0x2670c268  addiu       $s0, $s3, -0x3D98
    ctx->pc = 0x2ace2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2ace30: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x2ace30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ace34: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ace34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ace38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ace38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ace3c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2ace3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ace40: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ace40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ace44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ace48: 0x0  nop
    ctx->pc = 0x2ace48u;
    // NOP
    // 0x2ace4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACE4Cu;
    {
        const bool branch_taken_0x2ace4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE4Cu;
        // 0x2ace50: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace4c) {
            ctx->pc = 0x2ACE64u;
            goto label_2ace64;
        }
    }
    ctx->pc = 0x2ACE54u;
    // 0x2ace54: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x2ace54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ace58: 0xc09e0f0  jal         func_2783C0
    ctx->pc = 0x2ACE58u;
    SET_GPR_U32(ctx, 31, 0x2ACE60u);
    ctx->pc = 0x2ACE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE58u;
    // 0x2ace5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783C0u, 0x2ACE58u, 0x2ACE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE60u;
label_2ace60:
    // 0x2ace60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ace60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ace64:
    // 0x2ace64: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2ace64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ace68: 0x2663c268  addiu       $v1, $s3, -0x3D98
    ctx->pc = 0x2ace68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951528));
    // 0x2ace6c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2ace6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ace70: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ace70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2ace74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ace74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ace78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ace7c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2ace7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ace80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ace84: 0x0  nop
    ctx->pc = 0x2ace84u;
    // NOP
    // 0x2ace88: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2ACE88u;
    {
        const bool branch_taken_0x2ace88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE88u;
        // 0x2ace8c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace88) {
            ctx->pc = 0x2ACEC0u;
            goto label_2acec0;
        }
    }
    ctx->pc = 0x2ACE90u;
    // 0x2ace90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ace90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace94: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2ace94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ace98: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ace98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ace9c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ace9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acea0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2acea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acea4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2acea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acea8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2acea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aceac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aceacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aceb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aceb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aceb4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2aceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aceb8: 0x80aabb6  j           func_2AAED8
    ctx->pc = 0x2ACEB8u;
    ctx->pc = 0x2ACEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEB8u;
    // 0x2acebc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAED8u;
    specialfxFree_0x2aaed8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ACEC0u;
label_2acec0:
    // 0x2acec0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2acec0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2acec4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2acec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acec8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2acec8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acecc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2aceccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aced0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2aced0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aced4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aced4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aced8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aced8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acee0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2acee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2acee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEE4u;
        // 0x2acee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACEECu;
}

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

// Function: crateDamage
// Address: 0x274998 - 0x274bb0
void crateDamage_0x274998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("crateDamage_0x274998");
#endif

    switch (ctx->pc) {
        case 0x274a3cu: goto label_274a3c;
        case 0x274a54u: goto label_274a54;
        case 0x274a70u: goto label_274a70;
        case 0x274a78u: goto label_274a78;
        case 0x274a98u: goto label_274a98;
        case 0x274b1cu: goto label_274b1c;
        case 0x274b34u: goto label_274b34;
        case 0x274b64u: goto label_274b64;
        case 0x274b6cu: goto label_274b6c;
        case 0x274b8cu: goto label_274b8c;
        default: break;
    }

    ctx->pc = 0x274998u;

    // 0x274998: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x274998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27499c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27499cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2749a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2749a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2749a4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2749a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2749a8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2749a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2749ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2749acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749b0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2749b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2749b4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2749b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2749b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2749bc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2749bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2749c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2749c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2749c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2749c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2749c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2749ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2749d0: 0xc6210214  lwc1        $f1, 0x214($s1)
    ctx->pc = 0x2749d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2749d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2749d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2749d8: 0x0  nop
    ctx->pc = 0x2749d8u;
    // NOP
    // 0x2749dc: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x2749DCu;
    {
        const bool branch_taken_0x2749dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2749E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749DCu;
        // 0x2749e0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749dc) {
            ctx->pc = 0x274A9Cu;
            goto label_274a9c;
        }
    }
    ctx->pc = 0x2749E4u;
    // 0x2749e4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2749e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2749e8: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x2749e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2749ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2749ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2749f0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2749F0u;
    {
        const bool branch_taken_0x2749f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749F0u;
        // 0x2749f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749f0) {
            ctx->pc = 0x274A9Cu;
            goto label_274a9c;
        }
    }
    ctx->pc = 0x2749F8u;
    // 0x2749f8: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x2749f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2749fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2749fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a00: 0xc62001fc  lwc1        $f0, 0x1FC($s1)
    ctx->pc = 0x274a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274a04: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x274a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274a08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x274a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x274a10: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x274a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x274a14: 0xc6220204  lwc1        $f2, 0x204($s1)
    ctx->pc = 0x274a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274a18: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x274a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274a1c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x274a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x274a20: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x274a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x274a24: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x274a24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x274a28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x274a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x274a2c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274a2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a34: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x274A34u;
    SET_GPR_U32(ctx, 31, 0x274A3Cu);
    ctx->pc = 0x274A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A34u;
    // 0x274a38: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x274A34u, 0x274A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A3Cu;
label_274a3c:
    // 0x274a3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x274a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x274a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274a48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a4c: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x274A4Cu;
    SET_GPR_U32(ctx, 31, 0x274A54u);
    ctx->pc = 0x274A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A4Cu;
    // 0x274a50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x274A4Cu, 0x274A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A54u;
label_274a54:
    // 0x274a54: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x274a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a5c: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x274a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x274a60: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x274a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x274a64: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x274a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x274a68: 0xc0a92c4  jal         func_2A4B10
    ctx->pc = 0x274A68u;
    SET_GPR_U32(ctx, 31, 0x274A70u);
    ctx->pc = 0x274A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A68u;
    // 0x274a6c: 0xa4620124  sh          $v0, 0x124($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 292), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B10u, 0x274A68u, 0x274A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A70u;
label_274a70:
    // 0x274a70: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x274A70u;
    SET_GPR_U32(ctx, 31, 0x274A78u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x274A70u, 0x274A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A78u;
label_274a78:
    // 0x274a78: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x274a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x274a7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x274a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a80: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274a80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274a84: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274A84u;
    {
        const bool branch_taken_0x274a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a84) {
            ctx->pc = 0x274A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274A84u;
            // 0x274a88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274A8Cu;
            goto label_274a8c;
        }
    }
    ctx->pc = 0x274A8Cu;
label_274a8c:
    // 0x274a8c: 0x2010  mfhi        $a0
    ctx->pc = 0x274a8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x274a90: 0xc081546  jal         func_205518
    ctx->pc = 0x274A90u;
    SET_GPR_U32(ctx, 31, 0x274A98u);
    ctx->pc = 0x274A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A90u;
    // 0x274a94: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x274A90u, 0x274A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A98u;
label_274a98:
    // 0x274a98: 0xc6210214  lwc1        $f1, 0x214($s1)
    ctx->pc = 0x274a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274a9c:
    // 0x274a9c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x274a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x274aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274aa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274aa8: 0x0  nop
    ctx->pc = 0x274aa8u;
    // NOP
    // 0x274aac: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x274AACu;
    {
        const bool branch_taken_0x274aac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AACu;
        // 0x274ab0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aac) {
            ctx->pc = 0x274B90u;
            goto label_274b90;
        }
    }
    ctx->pc = 0x274AB4u;
    // 0x274ab4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x274ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274ab8: 0x94620124  lhu         $v0, 0x124($v1)
    ctx->pc = 0x274ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x274abc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x274abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x274ac0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x274AC0u;
    {
        const bool branch_taken_0x274ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AC0u;
        // 0x274ac4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ac0) {
            ctx->pc = 0x274B90u;
            goto label_274b90;
        }
    }
    ctx->pc = 0x274AC8u;
    // 0x274ac8: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x274ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274acc: 0xc62001fc  lwc1        $f0, 0x1FC($s1)
    ctx->pc = 0x274accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274ad0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x274ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ad4: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x274ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274ad8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x274ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274adc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x274adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x274ae0: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x274ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x274ae4: 0xc6220204  lwc1        $f2, 0x204($s1)
    ctx->pc = 0x274ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274ae8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x274ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274aec: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x274aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274af0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x274af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x274af4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x274af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x274af8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274af8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274afc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x274afcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x274b00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b04: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x274b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x274b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x274b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274b10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b14: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x274B14u;
    SET_GPR_U32(ctx, 31, 0x274B1Cu);
    ctx->pc = 0x274B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B14u;
    // 0x274b18: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x274B14u, 0x274B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B1Cu;
label_274b1c:
    // 0x274b1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x274b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x274b20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x274b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b24: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x274b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x274b28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x274b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b2c: 0xc0a60f8  jal         func_2983E0
    ctx->pc = 0x274B2Cu;
    SET_GPR_U32(ctx, 31, 0x274B34u);
    ctx->pc = 0x274B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B2Cu;
    // 0x274b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983E0u, 0x274B2Cu, 0x274B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B34u;
label_274b34:
    // 0x274b34: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x274b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x274b38: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x274b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x274b3c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x274b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x274b40: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x274b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x274b44: 0x94c20124  lhu         $v0, 0x124($a2)
    ctx->pc = 0x274b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x274b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b4c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x274b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x274b50: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x274b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x274b54: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x274b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x274b58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x274b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x274b5c: 0xc0a92c4  jal         func_2A4B10
    ctx->pc = 0x274B5Cu;
    SET_GPR_U32(ctx, 31, 0x274B64u);
    ctx->pc = 0x274B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B5Cu;
    // 0x274b60: 0xa4c20124  sh          $v0, 0x124($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 292), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B10u, 0x274B5Cu, 0x274B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B64u;
label_274b64:
    // 0x274b64: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x274B64u;
    SET_GPR_U32(ctx, 31, 0x274B6Cu);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x274B64u, 0x274B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B6Cu;
label_274b6c:
    // 0x274b6c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x274b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x274b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b74: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x274b74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x274b78: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274B78u;
    {
        const bool branch_taken_0x274b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b78) {
            ctx->pc = 0x274B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274B78u;
            // 0x274b7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x274B80u;
            goto label_274b80;
        }
    }
    ctx->pc = 0x274B80u;
label_274b80:
    // 0x274b80: 0x2010  mfhi        $a0
    ctx->pc = 0x274b80u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x274b84: 0xc081546  jal         func_205518
    ctx->pc = 0x274B84u;
    SET_GPR_U32(ctx, 31, 0x274B8Cu);
    ctx->pc = 0x274B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B84u;
    // 0x274b88: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x274B84u, 0x274B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B8Cu;
label_274b8c:
    // 0x274b8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x274b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_274b90:
    // 0x274b90: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x274b90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274b94: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x274b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274b98: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x274b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274b9c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x274b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274ba0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x274ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274ba4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x274ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x274BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BA8u;
        // 0x274bac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274BB0u;
}

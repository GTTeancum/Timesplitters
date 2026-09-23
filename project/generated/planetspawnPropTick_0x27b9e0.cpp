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

// Function: planetspawnPropTick
// Address: 0x27b9e0 - 0x27bbfc
void planetspawnPropTick_0x27b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("planetspawnPropTick_0x27b9e0");
#endif

    switch (ctx->pc) {
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba80u: goto label_27ba80;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bba0u: goto label_27bba0;
        default: break;
    }

    ctx->pc = 0x27b9e0u;

    // 0x27b9e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27b9e4: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x27b9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27b9e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b9f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b9f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27b9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba00: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x27ba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x27ba04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27ba08: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x27ba08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ba0c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27ba10: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27ba14: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27ba18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27ba1c: 0xe7bf00f8  swc1        $f31, 0xF8($sp)
    ctx->pc = 0x27ba1cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x27ba20: 0xe7be00f0  swc1        $f30, 0xF0($sp)
    ctx->pc = 0x27ba20u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x27ba24: 0xe7bd00e8  swc1        $f29, 0xE8($sp)
    ctx->pc = 0x27ba24u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x27ba28: 0xe7bc00e0  swc1        $f28, 0xE0($sp)
    ctx->pc = 0x27ba28u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x27ba2c: 0xe7bb00d8  swc1        $f27, 0xD8($sp)
    ctx->pc = 0x27ba2cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x27ba30: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x27ba30u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x27ba34: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x27ba34u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x27ba38: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x27ba38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27ba3c: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x27ba3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27ba40: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x27ba40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27ba44: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x27ba44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27ba48: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x27ba48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27ba4c: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x27ba4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27ba50: 0x8e130160  lw          $s3, 0x160($s0)
    ctx->pc = 0x27ba50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x27ba54: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x27ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27ba58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ba5c: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x27ba5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27ba60: 0xc09d194  jal         func_274650
    ctx->pc = 0x27BA60u;
    SET_GPR_U32(ctx, 31, 0x27BA68u);
    ctx->pc = 0x27BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA60u;
    // 0x27ba64: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274650u, 0x27BA60u, 0x27BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA68u;
label_27ba68:
    // 0x27ba68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ba6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ba74: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x27ba74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ba78: 0xc09d11a  jal         func_274468
    ctx->pc = 0x27BA78u;
    SET_GPR_U32(ctx, 31, 0x27BA80u);
    ctx->pc = 0x27BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BA78u;
    // 0x27ba7c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274468u, 0x27BA78u, 0x27BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA80u;
label_27ba80:
    // 0x27ba80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27ba80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba84: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x27BA84u;
    {
        const bool branch_taken_0x27ba84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA84u;
        // 0x27ba88: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba84) {
            ctx->pc = 0x27BB84u;
            goto label_27bb84;
        }
    }
    ctx->pc = 0x27BA8Cu;
    // 0x27ba8c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x27ba8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba90: 0x8e350030  lw          $s5, 0x30($s1)
    ctx->pc = 0x27ba90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x27ba94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27ba94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba98: 0xc67f0034  lwc1        $f31, 0x34($s3)
    ctx->pc = 0x27ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x27ba9c: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27BA9Cu;
    {
        const bool branch_taken_0x27ba9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA9Cu;
        // 0x27baa0: 0xc67e0038  lwc1        $f30, 0x38($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba9c) {
            ctx->pc = 0x27BB84u;
            goto label_27bb84;
        }
    }
    ctx->pc = 0x27BAA4u;
    // 0x27baa4: 0x8e170020  lw          $s7, 0x20($s0)
    ctx->pc = 0x27baa4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27baa8: 0xc67d004c  lwc1        $f29, 0x4C($s3)
    ctx->pc = 0x27baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x27baac: 0xc67c0058  lwc1        $f28, 0x58($s3)
    ctx->pc = 0x27baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27bab0: 0xc67b0050  lwc1        $f27, 0x50($s3)
    ctx->pc = 0x27bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27bab4: 0xc67a005c  lwc1        $f26, 0x5C($s3)
    ctx->pc = 0x27bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27bab8: 0xc6790054  lwc1        $f25, 0x54($s3)
    ctx->pc = 0x27bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27babc: 0xc6780060  lwc1        $f24, 0x60($s3)
    ctx->pc = 0x27babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_27bac0:
    // 0x27bac0: 0xc6b50004  lwc1        $f21, 0x4($s5)
    ctx->pc = 0x27bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27bac4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27bac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27bac8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27bacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27baccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bad0: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x27bad0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x27bad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27bad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27bad8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27bad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27badc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x27badcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x27bae0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x27bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x27bae4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x27bae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27bae8: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x27bae8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x27baec: 0x4615fb02  mul.s       $f12, $f31, $f21
    ctx->pc = 0x27baecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[31], ctx->f[21]);
    // 0x27baf0: 0x4614f002  mul.s       $f0, $f30, $f20
    ctx->pc = 0x27baf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[20]);
    // 0x27baf4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x27baf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x27baf8: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x27BAF8u;
    SET_GPR_U32(ctx, 31, 0x27BB00u);
    ctx->pc = 0x27BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAF8u;
    // 0x27bafc: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x27BAF8u, 0x27BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB00u;
label_27bb00:
    // 0x27bb00: 0x461ca842  mul.s       $f1, $f21, $f28
    ctx->pc = 0x27bb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[28]);
    // 0x27bb04: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x27bb04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27bb08: 0x461da302  mul.s       $f12, $f20, $f29
    ctx->pc = 0x27bb08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[29]);
    // 0x27bb0c: 0x461aa802  mul.s       $f0, $f21, $f26
    ctx->pc = 0x27bb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
    // 0x27bb10: 0x461ba582  mul.s       $f22, $f20, $f27
    ctx->pc = 0x27bb10u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
    // 0x27bb14: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x27bb14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x27bb18: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x27bb18u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x27bb1c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x27bb1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x27bb20: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x27bb20u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x27bb24: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x27bb24u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x27bb28: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x27bb28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x27bb2c: 0x4617b582  mul.s       $f22, $f22, $f23
    ctx->pc = 0x27bb2cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x27bb30: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x27BB30u;
    SET_GPR_U32(ctx, 31, 0x27BB38u);
    ctx->pc = 0x27BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB30u;
    // 0x27bb34: 0x4617a502  mul.s       $f20, $f20, $f23 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x27BB30u, 0x27BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB38u;
label_27bb38:
    // 0x27bb38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27bb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb3c: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x27BB3Cu;
    SET_GPR_U32(ctx, 31, 0x27BB44u);
    ctx->pc = 0x27BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB3Cu;
    // 0x27bb40: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x27BB3Cu, 0x27BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB44u;
label_27bb44:
    // 0x27bb44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb48: 0xc0b9142  jal         func_2E4508
    ctx->pc = 0x27BB48u;
    SET_GPR_U32(ctx, 31, 0x27BB50u);
    ctx->pc = 0x27BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB48u;
    // 0x27bb4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4508u, 0x27BB48u, 0x27BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB50u;
label_27bb50:
    // 0x27bb50: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x27bb50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x27bb54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27bb58: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x27bb58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x27bb5c: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x27bb5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x27bb60: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x27bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x27bb64: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x27bb64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x27bb68: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x27bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x27bb6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bb70: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27bb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27bb74: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x27BB74u;
    {
        const bool branch_taken_0x27bb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB74u;
        // 0x27bb78: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb74) {
            ctx->pc = 0x27BAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bac0;
        }
    }
    ctx->pc = 0x27BB7Cu;
    // 0x27bb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BB7Cu;
    {
        const bool branch_taken_0x27bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb7c) {
            ctx->pc = 0x27BB88u;
            goto label_27bb88;
        }
    }
    ctx->pc = 0x27BB84u;
label_27bb84:
    // 0x27bb84: 0x8e170020  lw          $s7, 0x20($s0)
    ctx->pc = 0x27bb84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_27bb88:
    // 0x27bb88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27bb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27bb8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27bb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27bb90: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x27bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x27bb94: 0xc66d002c  lwc1        $f13, 0x2C($s3)
    ctx->pc = 0x27bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27bb98: 0xc0ad3c8  jal         func_2B4F20
    ctx->pc = 0x27BB98u;
    SET_GPR_U32(ctx, 31, 0x27BBA0u);
    ctx->pc = 0x27BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB98u;
    // 0x27bb9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F20u, 0x27BB98u, 0x27BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBA0u;
label_27bba0:
    // 0x27bba0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27bba4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27bba4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27bba8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27bba8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27bbac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27bbacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27bbb0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27bbb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27bbb4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27bbb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27bbb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27bbb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bbbc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27bbbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bbc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27bbc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bbc4: 0xc7bf00f8  lwc1        $f31, 0xF8($sp)
    ctx->pc = 0x27bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x27bbc8: 0xc7be00f0  lwc1        $f30, 0xF0($sp)
    ctx->pc = 0x27bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x27bbcc: 0xc7bd00e8  lwc1        $f29, 0xE8($sp)
    ctx->pc = 0x27bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x27bbd0: 0xc7bc00e0  lwc1        $f28, 0xE0($sp)
    ctx->pc = 0x27bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27bbd4: 0xc7bb00d8  lwc1        $f27, 0xD8($sp)
    ctx->pc = 0x27bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27bbd8: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x27bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27bbdc: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x27bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27bbe0: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x27bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27bbe4: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x27bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27bbe8: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x27bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27bbec: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x27bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27bbf0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x27bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27bbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBF4u;
        // 0x27bbf8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BBFCu;
}

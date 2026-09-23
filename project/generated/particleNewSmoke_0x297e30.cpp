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

// Function: particleNewSmoke
// Address: 0x297e30 - 0x297fa8
void particleNewSmoke_0x297e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleNewSmoke_0x297e30");
#endif

    switch (ctx->pc) {
        case 0x297e60u: goto label_297e60;
        case 0x297e94u: goto label_297e94;
        case 0x297ec0u: goto label_297ec0;
        case 0x297ec8u: goto label_297ec8;
        case 0x297f84u: goto label_297f84;
        default: break;
    }

    ctx->pc = 0x297e30u;

    // 0x297e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x297e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x297e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297e38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x297e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x297e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297e48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297e4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x297e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297e50: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x297e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x297e54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x297e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e58: 0xc0a5b24  jal         func_296C90
    ctx->pc = 0x297E58u;
    SET_GPR_U32(ctx, 31, 0x297E60u);
    ctx->pc = 0x297E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E58u;
    // 0x297e5c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C90u, 0x297E58u, 0x297E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E60u;
label_297e60:
    // 0x297e60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x297e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x297e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297e6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297e74: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x297e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x297e78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x297e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x297e7c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x297e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x297e80: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x297e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x297e84: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x297e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x297e88: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x297e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x297e8c: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x297E8Cu;
    SET_GPR_U32(ctx, 31, 0x297E94u);
    ctx->pc = 0x297E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E8Cu;
    // 0x297e90: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x297E8Cu, 0x297E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E94u;
label_297e94:
    // 0x297e94: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x297e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e98: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x297e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x297e9c: 0xe62003a0  swc1        $f0, 0x3A0($s1)
    ctx->pc = 0x297e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
    // 0x297ea0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x297ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x297ea4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x297ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297ea8: 0xe62003a4  swc1        $f0, 0x3A4($s1)
    ctx->pc = 0x297ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 932), bits); }
    // 0x297eac: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x297eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297eb0: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x297EB0u;
    {
        const bool branch_taken_0x297eb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EB0u;
        // 0x297eb4: 0xe62103a8  swc1        $f1, 0x3A8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297eb0) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297EB8u;
    // 0x297eb8: 0x263003b4  addiu       $s0, $s1, 0x3B4
    ctx->pc = 0x297eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    // 0x297ebc: 0x26330048  addiu       $s3, $s1, 0x48
    ctx->pc = 0x297ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_297ec0:
    // 0x297ec0: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x297EC0u;
    SET_GPR_U32(ctx, 31, 0x297EC8u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x297EC0u, 0x297EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EC8u;
label_297ec8:
    // 0x297ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ecc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x297eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x297ed0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297ED0u;
    {
        const bool branch_taken_0x297ed0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297ED0u;
        // 0x297ed4: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ed0) {
            ctx->pc = 0x297EE4u;
            goto label_297ee4;
        }
    }
    ctx->pc = 0x297ED8u;
    // 0x297ed8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297ed8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297edc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297EDCu;
    {
        const bool branch_taken_0x297edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EDCu;
        // 0x297ee0: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297edc) {
            ctx->pc = 0x297EFCu;
            goto label_297efc;
        }
    }
    ctx->pc = 0x297EE4u;
label_297ee4:
    // 0x297ee4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x297ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x297ee8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x297ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x297eec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297ef4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297ef8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x297ef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297efc:
    // 0x297efc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x297efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x297f00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297f04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x297f08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x297f0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x297f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297f10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x297f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297f14: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x297f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x297f18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297f1c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x297f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x297f20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297f24: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x297f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x297f28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x297f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x297f2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x297f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x297f30: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x297F30u;
    {
        const bool branch_taken_0x297f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297f30) {
            ctx->pc = 0x297EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297ec0;
        }
    }
    ctx->pc = 0x297F38u;
    // 0x297f38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297F38u;
    {
        const bool branch_taken_0x297f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F38u;
        // 0x297f3c: 0xc68e0004  lwc1        $f14, 0x4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f38) {
            ctx->pc = 0x297F48u;
            goto label_297f48;
        }
    }
    ctx->pc = 0x297F40u;
label_297f40:
    // 0x297f40: 0x26330048  addiu       $s3, $s1, 0x48
    ctx->pc = 0x297f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x297f44: 0xc68e0004  lwc1        $f14, 0x4($s4)
    ctx->pc = 0x297f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_297f48:
    // 0x297f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x297f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x297f50: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x297f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x297f54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x297f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x297f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297f5c: 0xc6900008  lwc1        $f16, 0x8($s4)
    ctx->pc = 0x297f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x297f60: 0x460f73c0  add.s       $f15, $f14, $f15
    ctx->pc = 0x297f60u;
    ctx->f[15] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x297f64: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x297f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297f68: 0x46007381  sub.s       $f14, $f14, $f0
    ctx->pc = 0x297f68u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x297f6c: 0x46008440  add.s       $f17, $f16, $f0
    ctx->pc = 0x297f6cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[16], ctx->f[0]);
    // 0x297f70: 0x46006340  add.s       $f13, $f12, $f0
    ctx->pc = 0x297f70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x297f74: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x297f74u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x297f78: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x297f78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x297f7c: 0xc095046  jal         func_254118
    ctx->pc = 0x297F7Cu;
    SET_GPR_U32(ctx, 31, 0x297F84u);
    ctx->pc = 0x297F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F7Cu;
    // 0x297f80: 0x46008401  sub.s       $f16, $f16, $f0 (Delay Slot)
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254118u, 0x297F7Cu, 0x297F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F84u;
label_297f84:
    // 0x297f84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x297f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x297f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297f8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x297f8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297f90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x297f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297f94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297f98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x297FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FA0u;
        // 0x297fa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297FA8u;
}

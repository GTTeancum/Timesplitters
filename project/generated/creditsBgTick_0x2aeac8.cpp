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

// Function: creditsBgTick
// Address: 0x2aeac8 - 0x2aeea8
void creditsBgTick_0x2aeac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("creditsBgTick_0x2aeac8");
#endif

    switch (ctx->pc) {
        case 0x2aeb28u: goto label_2aeb28;
        case 0x2aeb40u: goto label_2aeb40;
        case 0x2aeb5cu: goto label_2aeb5c;
        case 0x2aebc4u: goto label_2aebc4;
        case 0x2aebccu: goto label_2aebcc;
        case 0x2aebd4u: goto label_2aebd4;
        case 0x2aebe4u: goto label_2aebe4;
        case 0x2aebecu: goto label_2aebec;
        case 0x2aec50u: goto label_2aec50;
        case 0x2aecd4u: goto label_2aecd4;
        case 0x2aecf0u: goto label_2aecf0;
        case 0x2aed0cu: goto label_2aed0c;
        case 0x2aed1cu: goto label_2aed1c;
        case 0x2aed28u: goto label_2aed28;
        case 0x2aed34u: goto label_2aed34;
        case 0x2aed3cu: goto label_2aed3c;
        case 0x2aed44u: goto label_2aed44;
        case 0x2aed88u: goto label_2aed88;
        case 0x2aedd0u: goto label_2aedd0;
        case 0x2aee18u: goto label_2aee18;
        case 0x2aee30u: goto label_2aee30;
        case 0x2aee58u: goto label_2aee58;
        case 0x2aee74u: goto label_2aee74;
        default: break;
    }

    ctx->pc = 0x2aeac8u;

    // 0x2aeac8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aeac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aeacc: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x2aeaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aead0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2aead4: 0xc7818f68  lwc1        $f1, -0x7098($gp)
    ctx->pc = 0x2aead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aead8: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x2aead8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x2aeadc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aeadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aeae0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2aeae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2aeae4: 0x2672f718  addiu       $s2, $s3, -0x8E8
    ctx->pc = 0x2aeae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965016));
    // 0x2aeae8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aeae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aeaec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aeaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aeaf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aeaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aeaf4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2aeaf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aeaf8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2aeaf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2aeafc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2aeafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aeb00: 0xc7818f6c  lwc1        $f1, -0x7094($gp)
    ctx->pc = 0x2aeb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aeb04: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2aeb04u;
    { uint32_t bits = FAST_READ32(0x36F720u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aeb08: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2aeb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2aeb0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aeb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aeb10: 0x0  nop
    ctx->pc = 0x2aeb10u;
    // NOP
    // 0x2aeb14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEB14u;
    {
        const bool branch_taken_0x2aeb14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB14u;
        // 0x2aeb18: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb14) {
            ctx->pc = 0x2AEB28u;
            goto label_2aeb28;
        }
    }
    ctx->pc = 0x2AEB1Cu;
    // 0x2aeb1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2aeb1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2aeb20: 0xc0ab9d4  jal         func_2AE750
    ctx->pc = 0x2AEB20u;
    SET_GPR_U32(ctx, 31, 0x2AEB28u);
    ctx->pc = 0x2AEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB20u;
    // 0x2aeb24: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE750u, 0x2AEB20u, 0x2AEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB28u;
label_2aeb28:
    // 0x2aeb28: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2aeb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aeb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aeb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb30: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2aeb34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2aeb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2aeb38: 0xc0abbaa  jal         func_2AEEA8
    ctx->pc = 0x2AEB38u;
    SET_GPR_U32(ctx, 31, 0x2AEB40u);
    ctx->pc = 0x2AEB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB38u;
    // 0x2aeb3c: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEEA8u, 0x2AEB38u, 0x2AEB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB40u;
label_2aeb40:
    // 0x2aeb40: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2aeb40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2aeb44: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2aeb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aeb48: 0x2611f730  addiu       $s1, $s0, -0x8D0
    ctx->pc = 0x2aeb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965040));
    // 0x2aeb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aeb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb50: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2aeb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2aeb54: 0xc0abbaa  jal         func_2AEEA8
    ctx->pc = 0x2AEB54u;
    SET_GPR_U32(ctx, 31, 0x2AEB5Cu);
    ctx->pc = 0x2AEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB54u;
    // 0x2aeb58: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEEA8u, 0x2AEB54u, 0x2AEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB5Cu;
label_2aeb5c:
    // 0x2aeb5c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2aeb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aeb60: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2aeb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aeb64: 0xc600f730  lwc1        $f0, -0x8D0($s0)
    ctx->pc = 0x2aeb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aeb68: 0xc664f718  lwc1        $f4, -0x8E8($s3)
    ctx->pc = 0x2aeb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294965016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aeb6c: 0x460309c1  sub.s       $f7, $f1, $f3
    ctx->pc = 0x2aeb6cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aeb70: 0xc786b340  lwc1        $f6, -0x4CC0($gp)
    ctx->pc = 0x2aeb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aeb74: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2aeb74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2aeb78: 0xc785b344  lwc1        $f5, -0x4CBC($gp)
    ctx->pc = 0x2aeb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2aeb7c: 0x46053801  sub.s       $f0, $f7, $f5
    ctx->pc = 0x2aeb7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x2aeb80: 0x46061041  sub.s       $f1, $f2, $f6
    ctx->pc = 0x2aeb80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2aeb84: 0xc7828f70  lwc1        $f2, -0x7090($gp)
    ctx->pc = 0x2aeb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aeb88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2aeb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2aeb8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2aeb8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2aeb90: 0x460029c0  add.s       $f7, $f5, $f0
    ctx->pc = 0x2aeb90u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2aeb94: 0x46013080  add.s       $f2, $f6, $f1
    ctx->pc = 0x2aeb94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2aeb98: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x2aeb98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2aeb9c: 0xe787b344  swc1        $f7, -0x4CBC($gp)
    ctx->pc = 0x2aeb9cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947652), bits); }
    // 0x2aeba0: 0x46021502  mul.s       $f20, $f2, $f2
    ctx->pc = 0x2aeba0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2aeba4: 0xe782b340  swc1        $f2, -0x4CC0($gp)
    ctx->pc = 0x2aeba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947648), bits); }
    // 0x2aeba8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2aeba8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2aebac: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2aebacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2aebb0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2aebb0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2aebb4: 0xe604f730  swc1        $f4, -0x8D0($s0)
    ctx->pc = 0x2aebb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965040), bits); }
    // 0x2aebb8: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x2aebb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2aebbc: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AEBBCu;
    SET_GPR_U32(ctx, 31, 0x2AEBC4u);
    ctx->pc = 0x2AEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBBCu;
    // 0x2aebc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AEBBCu, 0x2AEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBC4u;
label_2aebc4:
    // 0x2aebc4: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AEBC4u;
    SET_GPR_U32(ctx, 31, 0x2AEBCCu);
    ctx->pc = 0x2AEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBC4u;
    // 0x2aebc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AEBC4u, 0x2AEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBCCu;
label_2aebcc:
    // 0x2aebcc: 0xc0b5e96  jal         func_2D7A58
    ctx->pc = 0x2AEBCCu;
    SET_GPR_U32(ctx, 31, 0x2AEBD4u);
    ctx->pc = 0x2AEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBCCu;
    // 0x2aebd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7A58u, 0x2AEBCCu, 0x2AEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBD4u;
label_2aebd4:
    // 0x2aebd4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2aebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2aebd8: 0xdc259888  ld          $a1, -0x6778($at)
    ctx->pc = 0x2aebd8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3A9888u));
    // 0x2aebdc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AEBDCu;
    SET_GPR_U32(ctx, 31, 0x2AEBE4u);
    ctx->pc = 0x2AEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBDCu;
    // 0x2aebe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AEBDCu, 0x2AEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBE4u;
label_2aebe4:
    // 0x2aebe4: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2AEBE4u;
    SET_GPR_U32(ctx, 31, 0x2AEBECu);
    ctx->pc = 0x2AEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBE4u;
    // 0x2aebe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2AEBE4u, 0x2AEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBECu;
label_2aebec:
    // 0x2aebec: 0xc786b468  lwc1        $f6, -0x4B98($gp)
    ctx->pc = 0x2aebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2aebf0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2aebf0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2aebf4: 0xc7828f74  lwc1        $f2, -0x708C($gp)
    ctx->pc = 0x2aebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aebf8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2aebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2aebfc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2aebfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2aec00: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2aec00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2aec04: 0xc783b37c  lwc1        $f3, -0x4C84($gp)
    ctx->pc = 0x2aec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aec08: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2aec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aec0c: 0xc781b370  lwc1        $f1, -0x4C90($gp)
    ctx->pc = 0x2aec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aec10: 0x0  nop
    ctx->pc = 0x2aec10u;
    // NOP
    // 0x2aec14: 0x0  nop
    ctx->pc = 0x2aec14u;
    // NOP
    // 0x2aec18: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2aec18u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x2aec1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aec1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aec20: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aec20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aec24: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2aec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2aec28: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2aec28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2aec2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2aec2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2aec30: 0xe781b370  swc1        $f1, -0x4C90($gp)
    ctx->pc = 0x2aec30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947696), bits); }
    // 0x2aec34: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2aec34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2aec38: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x2aec38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aec3c: 0x0  nop
    ctx->pc = 0x2aec3cu;
    // NOP
    // 0x2aec40: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2AEC40u;
    {
        const bool branch_taken_0x2aec40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC40u;
        // 0x2aec44: 0xe783b37c  swc1        $f3, -0x4C84($gp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947708), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec40) {
            ctx->pc = 0x2AECA4u;
            goto label_2aeca4;
        }
    }
    ctx->pc = 0x2AEC48u;
    // 0x2aec48: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x2AEC48u;
    SET_GPR_U32(ctx, 31, 0x2AEC50u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x2AEC48u, 0x2AEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC50u;
label_2aec50:
    // 0x2aec50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEC50u;
    {
        const bool branch_taken_0x2aec50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC50u;
        // 0x2aec54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec50) {
            ctx->pc = 0x2AEC64u;
            goto label_2aec64;
        }
    }
    ctx->pc = 0x2AEC58u;
    // 0x2aec58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aec58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aec5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEC5Cu;
    {
        const bool branch_taken_0x2aec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC5Cu;
        // 0x2aec60: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec5c) {
            ctx->pc = 0x2AEC78u;
            goto label_2aec78;
        }
    }
    ctx->pc = 0x2AEC64u;
label_2aec64:
    // 0x2aec64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2aec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2aec68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aec6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aec6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aec70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aec70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aec74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2aec74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2aec78:
    // 0x2aec78: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x2aec78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x2aec7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aec7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aec80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aec84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2aec84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aec88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aec88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aec8c: 0xaf80b37c  sw          $zero, -0x4C84($gp)
    ctx->pc = 0x2aec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947708), GPR_U32(ctx, 0));
    // 0x2aec90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2aec90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2aec94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aec94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aec98: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2aec98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2aec9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aec9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aeca0: 0xe781b380  swc1        $f1, -0x4C80($gp)
    ctx->pc = 0x2aeca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294947712), bits); }
label_2aeca4:
    // 0x2aeca4: 0xc7809da8  lwc1        $f0, -0x6258($gp)
    ctx->pc = 0x2aeca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aeca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2aeca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2aecac: 0xc78c8f78  lwc1        $f12, -0x7088($gp)
    ctx->pc = 0x2aecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aecb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aecb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2aecb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2aecb8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x2aecb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x2aecbc: 0x2612f740  addiu       $s2, $s0, -0x8C0
    ctx->pc = 0x2aecbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965056));
    // 0x2aecc0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2aecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2aecc4: 0xdc319890  ld          $s1, -0x6770($at)
    ctx->pc = 0x2aecc4u;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x3A9890u));
    // 0x2aecc8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2aecc8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aeccc: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2AECCCu;
    SET_GPR_U32(ctx, 31, 0x2AECD4u);
    ctx->pc = 0x2AECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECCCu;
    // 0x2aecd0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2AECCCu, 0x2AECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECD4u;
label_2aecd4:
    // 0x2aecd4: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x2aecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aecd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aecd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aecdc: 0xc78c8f7c  lwc1        $f12, -0x7084($gp)
    ctx->pc = 0x2aecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aece0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2aece0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2aece4: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2aece4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2aece8: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2AECE8u;
    SET_GPR_U32(ctx, 31, 0x2AECF0u);
    ctx->pc = 0x2AECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECE8u;
    // 0x2aecec: 0xe600f740  swc1        $f0, -0x8C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965056), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2AECE8u, 0x2AECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECF0u;
label_2aecf0:
    // 0x2aecf0: 0xc7819da8  lwc1        $f1, -0x6258($gp)
    ctx->pc = 0x2aecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aecf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aecf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aecf8: 0xc78c8f80  lwc1        $f12, -0x7080($gp)
    ctx->pc = 0x2aecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aecfc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2aecfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2aed00: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2aed00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2aed04: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2AED04u;
    SET_GPR_U32(ctx, 31, 0x2AED0Cu);
    ctx->pc = 0x2AED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED04u;
    // 0x2aed08: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2AED04u, 0x2AED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED0Cu;
label_2aed0c:
    // 0x2aed0c: 0xc78cb37c  lwc1        $f12, -0x4C84($gp)
    ctx->pc = 0x2aed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aed10: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x2aed10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2aed14: 0xc0b9182  jal         func_2E4608
    ctx->pc = 0x2AED14u;
    SET_GPR_U32(ctx, 31, 0x2AED1Cu);
    ctx->pc = 0x2AED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED14u;
    // 0x2aed18: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4608u, 0x2AED14u, 0x2AED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED1Cu;
label_2aed1c:
    // 0x2aed1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed20: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2AED20u;
    SET_GPR_U32(ctx, 31, 0x2AED28u);
    ctx->pc = 0x2AED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED20u;
    // 0x2aed24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3240u, 0x2AED20u, 0x2AED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED28u;
label_2aed28:
    // 0x2aed28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed2c: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2AED2Cu;
    SET_GPR_U32(ctx, 31, 0x2AED34u);
    ctx->pc = 0x2AED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED2Cu;
    // 0x2aed30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2AED2Cu, 0x2AED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED34u;
label_2aed34:
    // 0x2aed34: 0xc0b8e84  jal         func_2E3A10
    ctx->pc = 0x2AED34u;
    SET_GPR_U32(ctx, 31, 0x2AED3Cu);
    ctx->pc = 0x2AED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED34u;
    // 0x2aed38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A10u, 0x2AED34u, 0x2AED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED3Cu;
label_2aed3c:
    // 0x2aed3c: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x2AED3Cu;
    SET_GPR_U32(ctx, 31, 0x2AED44u);
    ctx->pc = 0x2AED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED3Cu;
    // 0x2aed40: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x2AED3Cu, 0x2AED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED44u;
label_2aed44:
    // 0x2aed44: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2aed44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2aed48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2aed48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2aed4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2aed4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aed50: 0xc782b380  lwc1        $f2, -0x4C80($gp)
    ctx->pc = 0x2aed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aed54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2aed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2aed58: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2aed58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2aed5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2aed5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2aed60: 0x2446f718  addiu       $a2, $v0, -0x8E8
    ctx->pc = 0x2aed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x2aed64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aed64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aed68: 0x8f87b34c  lw          $a3, -0x4CB4($gp)
    ctx->pc = 0x2aed68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947660)));
    // 0x2aed6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2aed6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2aed74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2aed78: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2aed78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2aed7c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2aed7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2aed80: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2aed80u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2aed84: 0xe6540008  swc1        $f20, 0x8($s2)
    ctx->pc = 0x2aed84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2aed88:
    // 0x2aed88: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x2aed88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2aed8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2aed8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2aed90: 0x8c621440  lw          $v0, 0x1440($v1)
    ctx->pc = 0x2aed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5184)));
    // 0x2aed94: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AED94u;
    {
        const bool branch_taken_0x2aed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED94u;
        // 0x2aed98: 0x2a640028  slti        $a0, $s3, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed94) {
            ctx->pc = 0x2AEE44u;
            goto label_2aee44;
        }
    }
    ctx->pc = 0x2AED9Cu;
    // 0x2aed9c: 0xc4611444  lwc1        $f1, 0x1444($v1)
    ctx->pc = 0x2aed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aeda0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2aeda0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2aeda4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aeda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aeda8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2aeda8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2aedac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2aedacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2aedb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aedb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aedb4: 0x0  nop
    ctx->pc = 0x2aedb4u;
    // NOP
    // 0x2aedb8: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2AEDB8u;
    {
        const bool branch_taken_0x2aedb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDB8u;
        // 0x2aedbc: 0xe54021  addu        $t0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedb8) {
            ctx->pc = 0x2AEE44u;
            goto label_2aee44;
        }
    }
    ctx->pc = 0x2AEDC0u;
    // 0x2aedc0: 0x8f86b378  lw          $a2, -0x4C88($gp)
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947704)));
    // 0x2aedc4: 0x8f85b348  lw          $a1, -0x4CB8($gp)
    ctx->pc = 0x2aedc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947656)));
    // 0x2aedc8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2aedc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedcc: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x2aedccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2aedd0:
    // 0x2aedd0: 0x8c621440  lw          $v0, 0x1440($v1)
    ctx->pc = 0x2aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5184)));
    // 0x2aedd4: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEDD4u;
    {
        const bool branch_taken_0x2aedd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2AEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDD4u;
        // 0x2aedd8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedd4) {
            ctx->pc = 0x2AEDE0u;
            goto label_2aede0;
        }
    }
    ctx->pc = 0x2AEDDCu;
    // 0x2aeddc: 0xac601440  sw          $zero, 0x1440($v1)
    ctx->pc = 0x2aeddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5184), GPR_U32(ctx, 0));
label_2aede0:
    // 0x2aede0: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AEDE0u;
    {
        const bool branch_taken_0x2aede0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2AEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDE0u;
        // 0x2aede4: 0x24631450  addiu       $v1, $v1, 0x1450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aede0) {
            ctx->pc = 0x2AEDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aedd0;
        }
    }
    ctx->pc = 0x2AEDE8u;
    // 0x2aede8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2aede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2aedec: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2aedecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedf0: 0x24c40028  addiu       $a0, $a2, 0x28
    ctx->pc = 0x2aedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x2aedf4: 0xac451440  sw          $a1, 0x1440($v0)
    ctx->pc = 0x2aedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5184), GPR_U32(ctx, 5));
    // 0x2aedf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aedf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedfc: 0xac441444  sw          $a0, 0x1444($v0)
    ctx->pc = 0x2aedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5188), GPR_U32(ctx, 4));
    // 0x2aee00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2aee00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2aee04: 0x24710029  addiu       $s1, $v1, 0x29
    ctx->pc = 0x2aee04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 41));
    // 0x2aee08: 0xaf86b378  sw          $a2, -0x4C88($gp)
    ctx->pc = 0x2aee08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947704), GPR_U32(ctx, 6));
    // 0x2aee0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2aee0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee10: 0xaf85b348  sw          $a1, -0x4CB8($gp)
    ctx->pc = 0x2aee10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947656), GPR_U32(ctx, 5));
    // 0x2aee14: 0x0  nop
    ctx->pc = 0x2aee14u;
    // NOP
label_2aee18:
    // 0x2aee18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2aee1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee20: 0x8c851444  lw          $a1, 0x1444($a0)
    ctx->pc = 0x2aee20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5188)));
    // 0x2aee24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2aee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee28: 0xc0abc8c  jal         func_2AF230
    ctx->pc = 0x2AEE28u;
    SET_GPR_U32(ctx, 31, 0x2AEE30u);
    ctx->pc = 0x2AEE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE28u;
    // 0x2aee2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF230u, 0x2AEE28u, 0x2AEE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE30u;
label_2aee30:
    // 0x2aee30: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2aee30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2aee34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AEE34u;
    {
        const bool branch_taken_0x2aee34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE34u;
        // 0x2aee38: 0x8f85b348  lw          $a1, -0x4CB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee34) {
            ctx->pc = 0x2AEE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee18;
        }
    }
    ctx->pc = 0x2AEE3Cu;
    // 0x2aee3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEE3Cu;
    {
        const bool branch_taken_0x2aee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE3Cu;
        // 0x2aee40: 0x8f87b34c  lw          $a3, -0x4CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee3c) {
            ctx->pc = 0x2AEE50u;
            goto label_2aee50;
        }
    }
    ctx->pc = 0x2AEE44u;
label_2aee44:
    // 0x2aee44: 0x25291450  addiu       $t1, $t1, 0x1450
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5200));
    // 0x2aee48: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2AEE48u;
    {
        const bool branch_taken_0x2aee48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE48u;
        // 0x2aee4c: 0x24a51450  addiu       $a1, $a1, 0x1450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee48) {
            ctx->pc = 0x2AED88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aed88;
        }
    }
    ctx->pc = 0x2AEE50u;
label_2aee50:
    // 0x2aee50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2aee50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee54: 0x0  nop
    ctx->pc = 0x2aee54u;
    // NOP
label_2aee58:
    // 0x2aee58: 0x24041450  addiu       $a0, $zero, 0x1450
    ctx->pc = 0x2aee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5200));
    // 0x2aee5c: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x2aee5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aee60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2aee60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2aee64: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x2aee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2aee68: 0x8c851444  lw          $a1, 0x1444($a0)
    ctx->pc = 0x2aee68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5188)));
    // 0x2aee6c: 0xc0abe1a  jal         func_2AF868
    ctx->pc = 0x2AEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE74u);
    ctx->pc = 0x2AEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE6Cu;
    // 0x2aee70: 0x24a60001  addiu       $a2, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF868u, 0x2AEE6Cu, 0x2AEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE74u;
label_2aee74:
    // 0x2aee74: 0x2a620028  slti        $v0, $s3, 0x28
    ctx->pc = 0x2aee74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2aee78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AEE78u;
    {
        const bool branch_taken_0x2aee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE78u;
        // 0x2aee7c: 0x8f87b34c  lw          $a3, -0x4CB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee78) {
            ctx->pc = 0x2AEE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee58;
        }
    }
    ctx->pc = 0x2AEE80u;
    // 0x2aee80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2aee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aee84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2aee84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aee88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aee88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aee8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aee90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aee94: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2aee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2aee98: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2aee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aee9c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2aee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aeea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEA0u;
        // 0x2aeea4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEEA8u;
}

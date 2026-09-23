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

// Function: moveCylGfx
// Address: 0x27dff8 - 0x27e2f4
void moveCylGfx_0x27dff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveCylGfx_0x27dff8");
#endif

    switch (ctx->pc) {
        case 0x27e064u: goto label_27e064;
        case 0x27e070u: goto label_27e070;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e128u: goto label_27e128;
        case 0x27e16cu: goto label_27e16c;
        case 0x27e178u: goto label_27e178;
        case 0x27e1b4u: goto label_27e1b4;
        case 0x27e1c0u: goto label_27e1c0;
        case 0x27e250u: goto label_27e250;
        default: break;
    }

    ctx->pc = 0x27dff8u;

    // 0x27dff8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27dff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27dffc: 0x24040310  addiu       $a0, $zero, 0x310
    ctx->pc = 0x27dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x27e000: 0xe7bd00a8  swc1        $f29, 0xA8($sp)
    ctx->pc = 0x27e000u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27e004: 0xe7bc00a0  swc1        $f28, 0xA0($sp)
    ctx->pc = 0x27e004u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27e008: 0x46006746  mov.s       $f29, $f12
    ctx->pc = 0x27e008u;
    ctx->f[29] = FPU_MOV_S(ctx->f[12]);
    // 0x27e00c: 0xe7bb0098  swc1        $f27, 0x98($sp)
    ctx->pc = 0x27e00cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27e010: 0x46007706  mov.s       $f28, $f14
    ctx->pc = 0x27e010u;
    ctx->f[28] = FPU_MOV_S(ctx->f[14]);
    // 0x27e014: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x27e014u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27e018: 0x46006ec6  mov.s       $f27, $f13
    ctx->pc = 0x27e018u;
    ctx->f[27] = FPU_MOV_S(ctx->f[13]);
    // 0x27e01c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27e01cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27e020: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x27e020u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x27e024: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27e028: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x27e028u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x27e02c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27e030: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27e038: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27e03c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27e040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27e040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e044: 0xe7bf00b8  swc1        $f31, 0xB8($sp)
    ctx->pc = 0x27e044u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27e048: 0xe7be00b0  swc1        $f30, 0xB0($sp)
    ctx->pc = 0x27e048u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27e04c: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x27e04cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27e050: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x27e050u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27e054: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x27e054u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27e058: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x27e058u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27e05c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x27E05Cu;
    SET_GPR_U32(ctx, 31, 0x27E064u);
    ctx->pc = 0x27E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E05Cu;
    // 0x27e060: 0xe7b50068  swc1        $f21, 0x68($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x27E05Cu, 0x27E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E064u;
label_27e064:
    // 0x27e064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e068: 0xc0adf26  jal         func_2B7C98
    ctx->pc = 0x27E068u;
    SET_GPR_U32(ctx, 31, 0x27E070u);
    ctx->pc = 0x27E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E068u;
    // 0x27e06c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C98u, 0x27E068u, 0x27E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E070u;
label_27e070:
    // 0x27e070: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x27e070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x27e074: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x27e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27e078: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x27e078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x27e07c: 0x4614d800  add.s       $f0, $f27, $f20
    ctx->pc = 0x27e07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[20]);
    // 0x27e080: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x27e080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x27e084: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27e088: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x27e088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x27e08c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x27e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x27e090: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x27e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x27e094: 0x3c063026  lui         $a2, 0x3026
    ctx->pc = 0x27e094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12326 << 16));
    // 0x27e098: 0x34088004  ori         $t0, $zero, 0x8004
    ctx->pc = 0x27e098u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x27e09c: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x27e09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x27e0a0: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x27e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x27e0a4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x27e0a8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27e0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x27e0ac: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x27e0acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e0b0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x27e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x27e0b4: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x27e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x27e0b8: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x27e0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x27e0bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27e0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e0c0:
    // 0x27e0c0: 0x3a820007  xori        $v0, $s4, 0x7
    ctx->pc = 0x27e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)7);
    // 0x27e0c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e0c8: 0x102180a  movz        $v1, $t0, $v0
    ctx->pc = 0x27e0c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x27e0cc: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x27e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x27e0d0: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x27e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x27e0d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27e0d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27e0d8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x27e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x27e0dc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x27e0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x27e0e0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x27e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x27e0e4: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x27e0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x27e0e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x27e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x27e0ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27E0ECu;
    {
        const bool branch_taken_0x27e0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0ECu;
        // 0x27e0f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0ec) {
            ctx->pc = 0x27E0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e0c0;
        }
    }
    ctx->pc = 0x27E0F4u;
    // 0x27e0f4: 0x3c026c20  lui         $v0, 0x6C20
    ctx->pc = 0x27e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27680 << 16));
    // 0x27e0f8: 0xc79f87d4  lwc1        $f31, -0x782C($gp)
    ctx->pc = 0x27e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x27e0fc: 0x34428018  ori         $v0, $v0, 0x8018
    ctx->pc = 0x27e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32792);
    // 0x27e100: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27e100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x27e104: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x27e104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x27e108: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x27e108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x27e10c: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x27e10cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x27e110: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27e110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x27e114: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27e114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27e118: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x27e118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x27e11c: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x27e11cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x27e120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e124: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x27e124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27e128:
    // 0x27e128: 0x4494a000  mtc1        $s4, $f20
    ctx->pc = 0x27e128u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27e12c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x27e12cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27e130: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e138: 0x26900001  addiu       $s0, $s4, 0x1
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27e13c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x27e13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x27e140: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x27e140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e144: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27e144u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e148: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x27e148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x27e14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e150: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27e150u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e154: 0x461fa502  mul.s       $f20, $f20, $f31
    ctx->pc = 0x27e154u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[31]);
    // 0x27e158: 0x0  nop
    ctx->pc = 0x27e158u;
    // NOP
    // 0x27e15c: 0x0  nop
    ctx->pc = 0x27e15cu;
    // NOP
    // 0x27e160: 0x461ea503  div.s       $f20, $f20, $f30
    ctx->pc = 0x27e160u;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[30];
    // 0x27e164: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27E164u;
    SET_GPR_U32(ctx, 31, 0x27E16Cu);
    ctx->pc = 0x27E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E164u;
    // 0x27e168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27E164u, 0x27E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E16Cu;
label_27e16c:
    // 0x27e16c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27e16cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27e170: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27E170u;
    SET_GPR_U32(ctx, 31, 0x27E178u);
    ctx->pc = 0x27E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E170u;
    // 0x27e174: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27E170u, 0x27E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E178u;
label_27e178:
    // 0x27e178: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27e178u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x27e17c: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x27e17cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27e180: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x27e180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27e184: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x27e184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x27e188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e18c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27e18cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e190: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x27e190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x27e194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e198: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27e198u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e19c: 0x461fa502  mul.s       $f20, $f20, $f31
    ctx->pc = 0x27e19cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[31]);
    // 0x27e1a0: 0x0  nop
    ctx->pc = 0x27e1a0u;
    // NOP
    // 0x27e1a4: 0x0  nop
    ctx->pc = 0x27e1a4u;
    // NOP
    // 0x27e1a8: 0x461ea503  div.s       $f20, $f20, $f30
    ctx->pc = 0x27e1a8u;
    if (ctx->f[30] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[30];
    // 0x27e1ac: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x27E1ACu;
    SET_GPR_U32(ctx, 31, 0x27E1B4u);
    ctx->pc = 0x27E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1ACu;
    // 0x27e1b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x27E1ACu, 0x27E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1B4u;
label_27e1b4:
    // 0x27e1b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27e1b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27e1b8: 0xc0b5c72  jal         func_2D71C8
    ctx->pc = 0x27E1B8u;
    SET_GPR_U32(ctx, 31, 0x27E1C0u);
    ctx->pc = 0x27E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1B8u;
    // 0x27e1bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71C8u, 0x27E1B8u, 0x27E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1C0u;
label_27e1c0:
    // 0x27e1c0: 0x4618bdc2  mul.s       $f23, $f23, $f24
    ctx->pc = 0x27e1c0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x27e1c4: 0xe63bfffc  swc1        $f27, -0x4($s1)
    ctx->pc = 0x27e1c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), bits); }
    // 0x27e1c8: 0x4618b582  mul.s       $f22, $f22, $f24
    ctx->pc = 0x27e1c8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x27e1cc: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x27e1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x27e1d0: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x27e1d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x27e1d4: 0x4617edc0  add.s       $f23, $f29, $f23
    ctx->pc = 0x27e1d4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[29], ctx->f[23]);
    // 0x27e1d8: 0x4616e580  add.s       $f22, $f28, $f22
    ctx->pc = 0x27e1d8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[28], ctx->f[22]);
    // 0x27e1dc: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x27e1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x27e1e0: 0xe637fff8  swc1        $f23, -0x8($s1)
    ctx->pc = 0x27e1e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), bits); }
    // 0x27e1e4: 0x4615ed40  add.s       $f21, $f29, $f21
    ctx->pc = 0x27e1e4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[29], ctx->f[21]);
    // 0x27e1e8: 0xe6760000  swc1        $f22, 0x0($s3)
    ctx->pc = 0x27e1e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x27e1ec: 0xe6790004  swc1        $f25, 0x4($s3)
    ctx->pc = 0x27e1ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x27e1f0: 0x4600e000  add.s       $f0, $f28, $f0
    ctx->pc = 0x27e1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
    // 0x27e1f4: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x27e1f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27e1f8: 0xe67a000c  swc1        $f26, 0xC($s3)
    ctx->pc = 0x27e1f8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x27e1fc: 0xe6360010  swc1        $f22, 0x10($s1)
    ctx->pc = 0x27e1fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x27e200: 0xe6390014  swc1        $f25, 0x14($s1)
    ctx->pc = 0x27e200u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x27e204: 0xe6750018  swc1        $f21, 0x18($s3)
    ctx->pc = 0x27e204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x27e208: 0xe63b001c  swc1        $f27, 0x1C($s1)
    ctx->pc = 0x27e208u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x27e20c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x27e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x27e210: 0xe6350028  swc1        $f21, 0x28($s1)
    ctx->pc = 0x27e210u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x27e214: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x27e214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x27e218: 0xe6390024  swc1        $f25, 0x24($s1)
    ctx->pc = 0x27e218u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x27e21c: 0xe63a002c  swc1        $f26, 0x2C($s1)
    ctx->pc = 0x27e21cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x27e220: 0xe6390034  swc1        $f25, 0x34($s1)
    ctx->pc = 0x27e220u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x27e224: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x27e224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x27e228: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x27E228u;
    {
        const bool branch_taken_0x27e228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E228u;
        // 0x27e22c: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e228) {
            ctx->pc = 0x27E128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e128;
        }
    }
    ctx->pc = 0x27E230u;
    // 0x27e230: 0x3c026e20  lui         $v0, 0x6E20
    ctx->pc = 0x27e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28192 << 16));
    // 0x27e234: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e238: 0x3442c058  ori         $v0, $v0, 0xC058
    ctx->pc = 0x27e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49240);
    // 0x27e23c: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x27e23cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x27e240: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x27e240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x27e244: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27e244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x27e248: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x27e24c: 0x0  nop
    ctx->pc = 0x27e24cu;
    // NOP
label_27e250:
    // 0x27e250: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x27e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x27e254: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27e258: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x27e258u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x27e25c: 0x32840002  andi        $a0, $s4, 0x2
    ctx->pc = 0x27e25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x27e260: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x27e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x27e264: 0x32850004  andi        $a1, $s4, 0x4
    ctx->pc = 0x27e264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x27e268: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x27e268u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x27e26c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27e26cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27e270: 0x346200ff  ori         $v0, $v1, 0xFF
    ctx->pc = 0x27e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x27e274: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x27e274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x27e278: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x27e278u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x27e27c: 0x2a840008  slti        $a0, $s4, 0x8
    ctx->pc = 0x27e27cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x27e280: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x27e280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x27e284: 0xacc2fffc  sw          $v0, -0x4($a2)
    ctx->pc = 0x27e284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 2));
    // 0x27e288: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x27e288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x27e28c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x27e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x27e290: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27E290u;
    {
        const bool branch_taken_0x27e290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e290) {
            ctx->pc = 0x27E250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e250;
        }
    }
    ctx->pc = 0x27E298u;
    // 0x27e298: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x27e298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x27e29c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e2a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x27e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x27e2a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e2a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27e2a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e2ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27e2acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e2b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27e2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e2b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27e2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27e2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e2bc: 0xc7bf00b8  lwc1        $f31, 0xB8($sp)
    ctx->pc = 0x27e2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x27e2c0: 0xc7be00b0  lwc1        $f30, 0xB0($sp)
    ctx->pc = 0x27e2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x27e2c4: 0xc7bd00a8  lwc1        $f29, 0xA8($sp)
    ctx->pc = 0x27e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x27e2c8: 0xc7bc00a0  lwc1        $f28, 0xA0($sp)
    ctx->pc = 0x27e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x27e2cc: 0xc7bb0098  lwc1        $f27, 0x98($sp)
    ctx->pc = 0x27e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27e2d0: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x27e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27e2d4: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x27e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27e2d8: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x27e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27e2dc: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x27e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27e2e0: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x27e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27e2e4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x27e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27e2e8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e2ec: 0x80adf26  j           func_2B7C98
    ctx->pc = 0x27E2ECu;
    ctx->pc = 0x27E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2ECu;
    // 0x27e2f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C98u;
    dlSetClipTag_0x2b7c98(rdram, ctx, runtime); return;
    ctx->pc = 0x27E2F4u;
}

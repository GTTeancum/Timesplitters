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

// Function: particleSpriteSparkGroupGfx
// Address: 0x29ce70 - 0x29d52c
void particleSpriteSparkGroupGfx_0x29ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleSpriteSparkGroupGfx_0x29ce70");
#endif

    switch (ctx->pc) {
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf94u: goto label_29cf94;
        case 0x29d010u: goto label_29d010;
        case 0x29d15cu: goto label_29d15c;
        default: break;
    }

    ctx->pc = 0x29ce70u;

    // 0x29ce70: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x29ce74: 0xc7848d30  lwc1        $f4, -0x72D0($gp)
    ctx->pc = 0x29ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29ce78: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x29ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x29ce7c: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x29ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x29ce80: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x29ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x29ce84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29ce84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce88: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x29ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x29ce8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29ce8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce90: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x29ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x29ce94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ce94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce98: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x29ce98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x29ce9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29ce9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cea0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x29cea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29cea4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x29cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x29cea8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x29cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x29ceac: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x29ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x29ceb0: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x29ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x29ceb4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x29ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x29ceb8: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x29ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
    // 0x29cebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29cebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cec0: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x29cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29cec4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x29cec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x29cec8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x29cec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29cecc: 0x46062041  sub.s       $f1, $f4, $f6
    ctx->pc = 0x29ceccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x29ced0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x29ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29ced4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x29ced4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x29ced8: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x29ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x29cedc: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29cee0: 0x0  nop
    ctx->pc = 0x29cee0u;
    // NOP
    // 0x29cee4: 0x0  nop
    ctx->pc = 0x29cee4u;
    // NOP
    // 0x29cee8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x29cee8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x29ceec: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29ceecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29cef0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29cef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29cef4: 0xc4420104  lwc1        $f2, 0x104($v0)
    ctx->pc = 0x29cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29cef8: 0x46060542  mul.s       $f21, $f0, $f6
    ctx->pc = 0x29cef8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x29cefc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29cf00: 0x0  nop
    ctx->pc = 0x29cf00u;
    // NOP
    // 0x29cf04: 0x0  nop
    ctx->pc = 0x29cf04u;
    // NOP
    // 0x29cf08: 0x46021d03  div.s       $f20, $f3, $f2
    ctx->pc = 0x29cf08u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[2];
    // 0x29cf0c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x29cf0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x29cf10: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cf10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29cf14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x29cf14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29cf18: 0x1860014f  blez        $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x29CF18u;
    {
        const bool branch_taken_0x29cf18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF18u;
        // 0x29cf1c: 0x305e00ff  andi        $fp, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf18) {
            ctx->pc = 0x29D458u;
            goto label_29d458;
        }
    }
    ctx->pc = 0x29CF20u;
    // 0x29cf20: 0x263703b0  addiu       $s7, $s1, 0x3B0
    ctx->pc = 0x29cf20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x29cf24: 0x263603b4  addiu       $s6, $s1, 0x3B4
    ctx->pc = 0x29cf24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    // 0x29cf28: 0x263503b8  addiu       $s5, $s1, 0x3B8
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 952));
    // 0x29cf2c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x29cf2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29cf30:
    // 0x29cf30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cf34: 0xc62303a8  lwc1        $f3, 0x3A8($s1)
    ctx->pc = 0x29cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29cf38: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x29cf38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29cf3c: 0xc62403a4  lwc1        $f4, 0x3A4($s1)
    ctx->pc = 0x29cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29cf40: 0xc62503ac  lwc1        $f5, 0x3AC($s1)
    ctx->pc = 0x29cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29cf44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29cf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf48: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x29cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x29cf4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29cf4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf50: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x29cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x29cf54: 0x2a23821  addu        $a3, $s5, $v0
    ctx->pc = 0x29cf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x29cf58: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29cf5c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x29cf60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cf64: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x29cf64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x29cf68: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x29cf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cf6c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x29cf6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x29cf70: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x29cf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x29cf74: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x29cf74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x29cf78: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x29cf78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x29cf7c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x29cf7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x29cf80: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x29cf80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x29cf84: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x29cf84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29cf88: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x29cf88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29cf8c: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29CF8Cu;
    SET_GPR_U32(ctx, 31, 0x29CF94u);
    ctx->pc = 0x29CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF8Cu;
    // 0x29cf90: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29CF8Cu, 0x29CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF94u;
label_29cf94:
    // 0x29cf94: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x29cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29cf98: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x29cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cf9c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x29cf9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x29cfa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cfa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cfa4: 0x0  nop
    ctx->pc = 0x29cfa4u;
    // NOP
    // 0x29cfa8: 0x45020127  bc1fl       . + 4 + (0x127 << 2)
    ctx->pc = 0x29CFA8u;
    {
        const bool branch_taken_0x29cfa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cfa8) {
            ctx->pc = 0x29CFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CFA8u;
            // 0x29cfac: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D448u;
            goto label_29d448;
        }
    }
    ctx->pc = 0x29CFB0u;
    // 0x29cfb0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x29cfb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cfb4: 0x0  nop
    ctx->pc = 0x29cfb4u;
    // NOP
    // 0x29cfb8: 0x45000122  bc1f        . + 4 + (0x122 << 2)
    ctx->pc = 0x29CFB8u;
    {
        const bool branch_taken_0x29cfb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFB8u;
        // 0x29cfbc: 0xc7a40014  lwc1        $f4, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfb8) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29CFC0u;
    // 0x29cfc0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x29cfc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cfc4: 0x0  nop
    ctx->pc = 0x29cfc4u;
    // NOP
    // 0x29cfc8: 0x4502011f  bc1fl       . + 4 + (0x11F << 2)
    ctx->pc = 0x29CFC8u;
    {
        const bool branch_taken_0x29cfc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cfc8) {
            ctx->pc = 0x29CFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CFC8u;
            // 0x29cfcc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D448u;
            goto label_29d448;
        }
    }
    ctx->pc = 0x29CFD0u;
    // 0x29cfd0: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x29cfd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cfd4: 0x0  nop
    ctx->pc = 0x29cfd4u;
    // NOP
    // 0x29cfd8: 0x4500011a  bc1f        . + 4 + (0x11A << 2)
    ctx->pc = 0x29CFD8u;
    {
        const bool branch_taken_0x29cfd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFD8u;
        // 0x29cfdc: 0xc7aa0018  lwc1        $f10, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfd8) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29CFE0u;
    // 0x29cfe0: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x29cfe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cfe4: 0x0  nop
    ctx->pc = 0x29cfe4u;
    // NOP
    // 0x29cfe8: 0x45020117  bc1fl       . + 4 + (0x117 << 2)
    ctx->pc = 0x29CFE8u;
    {
        const bool branch_taken_0x29cfe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cfe8) {
            ctx->pc = 0x29CFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CFE8u;
            // 0x29cfec: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D448u;
            goto label_29d448;
        }
    }
    ctx->pc = 0x29CFF0u;
    // 0x29cff0: 0x46025034  c.lt.s      $f10, $f2
    ctx->pc = 0x29cff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cff4: 0x0  nop
    ctx->pc = 0x29cff4u;
    // NOP
    // 0x29cff8: 0x45020113  bc1fl       . + 4 + (0x113 << 2)
    ctx->pc = 0x29CFF8u;
    {
        const bool branch_taken_0x29cff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cff8) {
            ctx->pc = 0x29CFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CFF8u;
            // 0x29cffc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D448u;
            goto label_29d448;
        }
    }
    ctx->pc = 0x29D000u;
    // 0x29d000: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D000u;
    {
        const bool branch_taken_0x29d000 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d000) {
            ctx->pc = 0x29D048u;
            goto label_29d048;
        }
    }
    ctx->pc = 0x29D008u;
    // 0x29d008: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29D008u;
    SET_GPR_U32(ctx, 31, 0x29D010u);
    ctx->pc = 0x29D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D008u;
    // 0x29d00c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29D008u, 0x29D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D010u;
label_29d010:
    // 0x29d010: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x29d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d014: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x29d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29d018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d01c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d020: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x29d020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x29d024: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d028: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x29d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d02c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x29d02cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29d030: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29d034: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x29d034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x29d038: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x29d038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
    // 0x29d03c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x29d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d040: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x29d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29d044: 0xc7aa0018  lwc1        $f10, 0x18($sp)
    ctx->pc = 0x29d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_29d048:
    // 0x29d048: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29d048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29d04c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x29d04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29d050: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x29d054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d05c: 0x246399f0  addiu       $v1, $v1, -0x6610
    ctx->pc = 0x29d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x29d060: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x29d060u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x29d064: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x29d064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A14u));
    // 0x29d068: 0x0  nop
    ctx->pc = 0x29d068u;
    // NOP
    // 0x29d06c: 0x0  nop
    ctx->pc = 0x29d06cu;
    // NOP
    // 0x29d070: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29d070u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x29d074: 0xc7868d34  lwc1        $f6, -0x72CC($gp)
    ctx->pc = 0x29d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29d078: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29d078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29d07c: 0xc4680010  lwc1        $f8, 0x10($v1)
    ctx->pc = 0x29d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29d080: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x29d080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x29d084: 0x0  nop
    ctx->pc = 0x29d084u;
    // NOP
    // 0x29d088: 0x0  nop
    ctx->pc = 0x29d088u;
    // NOP
    // 0x29d08c: 0x460a2943  div.s       $f5, $f5, $f10
    ctx->pc = 0x29d08cu;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[10];
    // 0x29d090: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29d090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29d094: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x29d094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x29d098: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x29d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d09c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x29d09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29d0a0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x29d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x29d0a4: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x29d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d0a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29d0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29d0ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29d0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29d0b0: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x29d0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29d0b4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x29d0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x29d0b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29d0b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29d0bc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x29d0bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29d0c0: 0x46002ae4  .word       0x46002AE4                   # cvt.w.s     $f11, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d0c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[11], &tmp, sizeof(tmp)); }
    // 0x29d0c4: 0x44035800  mfc1        $v1, $f11
    ctx->pc = 0x29d0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d0c8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x29d0c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x29d0cc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29d0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29d0d0: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x29d0d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x29d0d4: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x29d0d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29d0d8: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x29d0d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x29d0dc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29d0e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d0e4: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x29d0e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x29d0e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d0ec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x29d0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29d0f0: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x29d0f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x29d0f4: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x29d0f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x29d0f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29d0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d0fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29d0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29d100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29d104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29d108: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x29d108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d10c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x29d10cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d110: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x29d110u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x29d114: 0x46011140  add.s       $f5, $f2, $f1
    ctx->pc = 0x29d114u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29d118: 0x46001900  add.s       $f4, $f3, $f0
    ctx->pc = 0x29d118u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x29d11c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x29d11cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29d120: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x29d120u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29d124: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x29d124u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x29d128: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x29d128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29d12c: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x29d12cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29d130: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x29d130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29d134: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x29d134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29d138: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x29d138u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d13c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x29d13cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d140: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x29d140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d144: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x29d144u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d148: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x29d148u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29d14c: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x29d14cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29d150: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x29d150u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29d154: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29D154u;
    SET_GPR_U32(ctx, 31, 0x29D15Cu);
    ctx->pc = 0x29D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D154u;
    // 0x29d158: 0xe7a60048  swc1        $f6, 0x48($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29D154u, 0x29D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D15Cu;
label_29d15c:
    // 0x29d15c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x29d15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d160: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x29d160u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29d164: 0x8f8493a0  lw          $a0, -0x6C60($gp)
    ctx->pc = 0x29d164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d168: 0x1e1e00  sll         $v1, $fp, 24
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 24));
    // 0x29d16c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x29d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29d170: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d174: 0xa08e0003  sb          $t6, 0x3($a0)
    ctx->pc = 0x29d174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x29d178: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x29d178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x29d17c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29d180: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d184: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x29d184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d188: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x29d188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29d18c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x29d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d190: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x29d190u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
    // 0x29d194: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x29d194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x29d198: 0x24cd0010  addiu       $t5, $a2, 0x10
    ctx->pc = 0x29d198u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x29d19c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d1a0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d1a4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29d1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d1a8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29d1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d1ac: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x29d1acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29d1b0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29d1b4: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d1b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d1bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d1bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d1c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29d1c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d1c4: 0xac4f0000  sw          $t7, 0x0($v0)
    ctx->pc = 0x29d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
    // 0x29d1c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29d1cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d1d0: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29d1d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d1d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d1dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d1e0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29d1e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d1e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29d1ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d1f0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29d1f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29d1f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d1f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29d1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d1fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d200: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d204: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d208: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x29d208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x29d20c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d210: 0xaf8d93a0  sw          $t5, -0x6C60($gp)
    ctx->pc = 0x29d210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 13));
    // 0x29d214: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d218: 0x34e70800  ori         $a3, $a3, 0x800
    ctx->pc = 0x29d218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
    // 0x29d21c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d220: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d224: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29d224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d228: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29d228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29d22c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d230: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d234: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29d238: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x29d238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29d23c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x29d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d240: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d244: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29d244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29d248: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d24c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29d24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d250: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d254: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d258: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29d258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d25c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d260: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d264: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29d264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29d268: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29d268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29d26c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d270: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d274: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29d278: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d27c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29d280: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29d284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29d288: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d28c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29d28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29d290: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d294: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29d294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d298: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d29c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2a0: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x29d2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29d2a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29d2a8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x29d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x29d2ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2b0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d2b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d2b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29d2b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2bc: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29d2c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d2c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2cc: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x29d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x29d2d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d2d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x29d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d2dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2e0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x29d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d2e4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d2e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29d2e8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29d2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d2ec: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d2f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d2f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d2f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29d2f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d2f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d2fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d300: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29d300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29d304: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d308: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d30c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29d310: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29d314: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29d314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29d318: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29d318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29d31c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d320: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x29d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d324: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29d324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d328: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29d328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29d32c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d330: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x29d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d334: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29d338: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x29d338u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29d33c: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x29d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29d340: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d344: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29d344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29d348: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d34c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29d34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29d350: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d354: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d358: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29d358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29d35c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d360: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d364: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29d364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29d368: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29d368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29d36c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d370: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d374: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29d378: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d37c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29d380: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d384: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29d384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29d388: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29d388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29d38c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29d38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29d390: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d394: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29d394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d398: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d39c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d3a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29d3a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d3a8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d3a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29d3ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29d3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29d3b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29d3b4: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29d3b8: 0x16450022  bne         $s2, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29D3B8u;
    {
        const bool branch_taken_0x29d3b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x29D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B8u;
        // 0x29d3bc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3b8) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29D3C0u;
    // 0x29d3c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29d3c4: 0x3c026cd0  lui         $v0, 0x6CD0
    ctx->pc = 0x29d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27856 << 16));
    // 0x29d3c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d3cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29d3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29d3d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29d3d4: 0x34068017  ori         $a2, $zero, 0x8017
    ctx->pc = 0x29d3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32791);
    // 0x29d3d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d3dc: 0x3c0490ae  lui         $a0, 0x90AE
    ctx->pc = 0x29d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37038 << 16));
    // 0x29d3e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29d3e4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x29d3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x29d3e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d3ec: 0x3c03eeee  lui         $v1, 0xEEEE
    ctx->pc = 0x29d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61166 << 16));
    // 0x29d3f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29d3f4: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x29d3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x29d3f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d3fc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29d400: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x29d400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x29d404: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29d404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29d408: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d40c: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x29d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x29d410: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x29d410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x29d414: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29d414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d418: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d41c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29d420: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d424: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29d424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29d428: 0xa1ae0003  sb          $t6, 0x3($t5)
    ctx->pc = 0x29d428u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x29d42c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d430: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d434: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29d438: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x29d438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x29d43c: 0xa44f0000  sh          $t7, 0x0($v0)
    ctx->pc = 0x29d43cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x29d440: 0xaf8393a0  sw          $v1, -0x6C60($gp)
    ctx->pc = 0x29d440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 3));
label_29d444:
    // 0x29d444: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29d448:
    // 0x29d448: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29d448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29d44c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x29d44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29d450: 0x5440feb7  bnel        $v0, $zero, . + 4 + (-0x149 << 2)
    ctx->pc = 0x29D450u;
    {
        const bool branch_taken_0x29d450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d450) {
            ctx->pc = 0x29D454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D450u;
            // 0x29d454: 0xc626000c  lwc1        $f6, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cf30;
        }
    }
    ctx->pc = 0x29D458u;
label_29d458:
    // 0x29d458: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x29D458u;
    {
        const bool branch_taken_0x29d458 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D458u;
        // 0x29d45c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d458) {
            ctx->pc = 0x29D4F4u;
            goto label_29d4f4;
        }
    }
    ctx->pc = 0x29D460u;
    // 0x29d460: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29d464: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d468: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29d46c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29d470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d474: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d478: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x29d478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x29d47c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29d480: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29d480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29d484: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29d484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29d488: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d48c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29d490: 0x36458000  ori         $a1, $s2, 0x8000
    ctx->pc = 0x29d490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
    // 0x29d494: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29d494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29d498: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29d498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29d49c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d4a0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29d4a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x29d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x29d4a8: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29d4ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d4b0: 0x8f8693a0  lw          $a2, -0x6C60($gp)
    ctx->pc = 0x29d4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d4b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x29d4b8: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29d4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29d4bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d4c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29d4c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29d4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29d4c8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x29d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29d4cc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x29d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x29d4d0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29d4d4: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x29d4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x29d4d8: 0x24639700  addiu       $v1, $v1, -0x6900
    ctx->pc = 0x29d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940416));
    // 0x29d4dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d4e0: 0x8f8293a0  lw          $v0, -0x6C60($gp)
    ctx->pc = 0x29d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29d4e4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x29d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29d4e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x29d4ec: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x29d4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x29d4f0: 0xaf8493a0  sw          $a0, -0x6C60($gp)
    ctx->pc = 0x29d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 4));
label_29d4f4:
    // 0x29d4f4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x29d4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29d4f8: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x29d4f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29d4fc: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x29d4fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29d500: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x29d500u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29d504: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29d508: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x29d508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29d50c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x29d50cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29d510: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x29d510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29d514: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x29d514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29d518: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x29d518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29d51c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x29d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29d520: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x29d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d524: 0x3e00008  jr          $ra
    ctx->pc = 0x29D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D524u;
        // 0x29d528: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D52Cu;
}

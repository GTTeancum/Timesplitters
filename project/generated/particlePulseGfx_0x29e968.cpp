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

// Function: particlePulseGfx
// Address: 0x29e968 - 0x29efb8
void particlePulseGfx_0x29e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particlePulseGfx_0x29e968");
#endif

    switch (ctx->pc) {
        case 0x29e9e0u: goto label_29e9e0;
        case 0x29ea60u: goto label_29ea60;
        case 0x29ec58u: goto label_29ec58;
        default: break;
    }

    ctx->pc = 0x29e968u;

    // 0x29e968: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29e968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29e96c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29e970: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x29e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x29e974: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x29e974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29e978: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29e978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e97c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x29e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29e980: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x29e980u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x29e984: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x29e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x29e988: 0x2683a1b0  addiu       $v1, $s4, -0x5E50
    ctx->pc = 0x29e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943152));
    // 0x29e98c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x29e98cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x29e990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e994: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x29e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x29e998: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e99c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x29e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x29e9a0: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x29e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29e9a4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x29e9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x29e9a8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x29e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29e9ac: 0x8e1203a0  lw          $s2, 0x3A0($s0)
    ctx->pc = 0x29e9acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x29e9b0: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x29e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e9b4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29e9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29e9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29e9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e9bc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x29e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e9c4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29e9c8: 0x0  nop
    ctx->pc = 0x29e9c8u;
    // NOP
    // 0x29e9cc: 0x0  nop
    ctx->pc = 0x29e9ccu;
    // NOP
    // 0x29e9d0: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x29e9d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
    // 0x29e9d4: 0x1880016c  blez        $a0, . + 4 + (0x16C << 2)
    ctx->pc = 0x29E9D4u;
    {
        const bool branch_taken_0x29e9d4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x29E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9D4u;
        // 0x29e9d8: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9d4) {
            ctx->pc = 0x29EF88u;
            goto label_29ef88;
        }
    }
    ctx->pc = 0x29E9DCu;
    // 0x29e9dc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x29e9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29e9e0:
    // 0x29e9e0: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x29e9e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29e9e4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x29e9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x29e9e8: 0xc60403b0  lwc1        $f4, 0x3B0($s0)
    ctx->pc = 0x29e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29e9ec: 0xc60503b4  lwc1        $f5, 0x3B4($s0)
    ctx->pc = 0x29e9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29e9f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9f4: 0xc60203b8  lwc1        $f2, 0x3B8($s0)
    ctx->pc = 0x29e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e9f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9fc: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x29e9fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x29ea00: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x29ea00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x29ea04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ea04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ea08: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x29ea08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x29ea0c: 0xc60603a4  lwc1        $f6, 0x3A4($s0)
    ctx->pc = 0x29ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29ea10: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x29ea10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x29ea14: 0xc60303a8  lwc1        $f3, 0x3A8($s0)
    ctx->pc = 0x29ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ea18: 0x0  nop
    ctx->pc = 0x29ea18u;
    // NOP
    // 0x29ea1c: 0x0  nop
    ctx->pc = 0x29ea1cu;
    // NOP
    // 0x29ea20: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x29ea20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x29ea24: 0xc60103ac  lwc1        $f1, 0x3AC($s0)
    ctx->pc = 0x29ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ea28: 0x0  nop
    ctx->pc = 0x29ea28u;
    // NOP
    // 0x29ea2c: 0x0  nop
    ctx->pc = 0x29ea2cu;
    // NOP
    // 0x29ea30: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x29ea30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[5] = ctx->f[5] / ctx->f[0];
    // 0x29ea34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29ea34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea38: 0x0  nop
    ctx->pc = 0x29ea38u;
    // NOP
    // 0x29ea3c: 0x0  nop
    ctx->pc = 0x29ea3cu;
    // NOP
    // 0x29ea40: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x29ea40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x29ea44: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x29ea44u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x29ea48: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x29ea48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x29ea4c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29ea4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29ea50: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x29ea50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ea54: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x29ea54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29ea58: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29EA58u;
    SET_GPR_U32(ctx, 31, 0x29EA60u);
    ctx->pc = 0x29EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA58u;
    // 0x29ea5c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29EA58u, 0x29EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA60u;
label_29ea60:
    // 0x29ea60: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x29ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29ea64: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x29ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29ea68: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x29ea68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x29ea6c: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x29ea6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ea70: 0x0  nop
    ctx->pc = 0x29ea70u;
    // NOP
    // 0x29ea74: 0x45020140  bc1fl       . + 4 + (0x140 << 2)
    ctx->pc = 0x29EA74u;
    {
        const bool branch_taken_0x29ea74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ea74) {
            ctx->pc = 0x29EA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA74u;
            // 0x29ea78: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EF78u;
            goto label_29ef78;
        }
    }
    ctx->pc = 0x29EA7Cu;
    // 0x29ea7c: 0x46055036  c.le.s      $f10, $f5
    ctx->pc = 0x29ea7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ea80: 0x0  nop
    ctx->pc = 0x29ea80u;
    // NOP
    // 0x29ea84: 0x4500013b  bc1f        . + 4 + (0x13B << 2)
    ctx->pc = 0x29EA84u;
    {
        const bool branch_taken_0x29ea84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA84u;
        // 0x29ea88: 0xc7a80014  lwc1        $f8, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea84) {
            ctx->pc = 0x29EF74u;
            goto label_29ef74;
        }
    }
    ctx->pc = 0x29EA8Cu;
    // 0x29ea8c: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x29ea8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ea90: 0x0  nop
    ctx->pc = 0x29ea90u;
    // NOP
    // 0x29ea94: 0x45020138  bc1fl       . + 4 + (0x138 << 2)
    ctx->pc = 0x29EA94u;
    {
        const bool branch_taken_0x29ea94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ea94) {
            ctx->pc = 0x29EA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA94u;
            // 0x29ea98: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EF78u;
            goto label_29ef78;
        }
    }
    ctx->pc = 0x29EA9Cu;
    // 0x29ea9c: 0x46054036  c.le.s      $f8, $f5
    ctx->pc = 0x29ea9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eaa0: 0x0  nop
    ctx->pc = 0x29eaa0u;
    // NOP
    // 0x29eaa4: 0x45000133  bc1f        . + 4 + (0x133 << 2)
    ctx->pc = 0x29EAA4u;
    {
        const bool branch_taken_0x29eaa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAA4u;
        // 0x29eaa8: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eaa4) {
            ctx->pc = 0x29EF74u;
            goto label_29ef74;
        }
    }
    ctx->pc = 0x29EAACu;
    // 0x29eaac: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x29eaacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eab0: 0x0  nop
    ctx->pc = 0x29eab0u;
    // NOP
    // 0x29eab4: 0x45020130  bc1fl       . + 4 + (0x130 << 2)
    ctx->pc = 0x29EAB4u;
    {
        const bool branch_taken_0x29eab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29eab4) {
            ctx->pc = 0x29EAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EAB4u;
            // 0x29eab8: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EF78u;
            goto label_29ef78;
        }
    }
    ctx->pc = 0x29EABCu;
    // 0x29eabc: 0x46056836  c.le.s      $f13, $f5
    ctx->pc = 0x29eabcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eac0: 0x0  nop
    ctx->pc = 0x29eac0u;
    // NOP
    // 0x29eac4: 0x4500012b  bc1f        . + 4 + (0x12B << 2)
    ctx->pc = 0x29EAC4u;
    {
        const bool branch_taken_0x29eac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAC4u;
        // 0x29eac8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eac4) {
            ctx->pc = 0x29EF74u;
            goto label_29ef74;
        }
    }
    ctx->pc = 0x29EACCu;
    // 0x29eacc: 0xc7828d54  lwc1        $f2, -0x72AC($gp)
    ctx->pc = 0x29eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ead0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ead4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x29ead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x29ead8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29ead8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29eadc: 0xc44003bc  lwc1        $f0, 0x3BC($v0)
    ctx->pc = 0x29eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eae0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x29eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x29eae4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29eae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29eae8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29eae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29eaec: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x29eaecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x29eaf0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29eaf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29eaf4: 0xc7848d58  lwc1        $f4, -0x72A8($gp)
    ctx->pc = 0x29eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29eaf8: 0x24c699f0  addiu       $a2, $a2, -0x6610
    ctx->pc = 0x29eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    // 0x29eafc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29eb00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29eb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29eb04: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x29eb04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x29eb08: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x29eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x329A14u));
    // 0x29eb0c: 0x0  nop
    ctx->pc = 0x29eb0cu;
    // NOP
    // 0x29eb10: 0x0  nop
    ctx->pc = 0x29eb10u;
    // NOP
    // 0x29eb14: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x29eb14u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x29eb18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29eb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29eb1c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x29eb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29eb20: 0x0  nop
    ctx->pc = 0x29eb20u;
    // NOP
    // 0x29eb24: 0x0  nop
    ctx->pc = 0x29eb24u;
    // NOP
    // 0x29eb28: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x29eb28u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[5];
    // 0x29eb2c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29eb30: 0x0  nop
    ctx->pc = 0x29eb30u;
    // NOP
    // 0x29eb34: 0x0  nop
    ctx->pc = 0x29eb34u;
    // NOP
    // 0x29eb38: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x29eb38u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x29eb3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29eb40: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x29eb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x29eb44: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x29eb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x29eb48: 0x24a55c60  addiu       $a1, $a1, 0x5C60
    ctx->pc = 0x29eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23648));
    // 0x29eb4c: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x29eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29eb50: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x29eb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x29eb54: 0xc78b8d5c  lwc1        $f11, -0x72A4($gp)
    ctx->pc = 0x29eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x29eb58: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x29eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29eb5c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x29eb5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29eb60: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29eb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29eb64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29eb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29eb68: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x29eb68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29eb6c: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x29eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x29eb70: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x29eb70u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x29eb74: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29eb74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x29eb78: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x29eb78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29eb7c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x29eb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x29eb80: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x29eb80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x29eb84: 0xe7aa0010  swc1        $f10, 0x10($sp)
    ctx->pc = 0x29eb84u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29eb88: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x29eb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29eb8c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x29eb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x29eb90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29eb90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29eb94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29eb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29eb98: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x29eb98u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29eb9c: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x29eb9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x29eba0: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x29eba0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x29eba4: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x29eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x29eba8: 0x46084a42  mul.s       $f9, $f9, $f8
    ctx->pc = 0x29eba8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x29ebac: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x29ebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x29ebb0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x29ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x29ebb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29ebb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29ebbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29ebc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29ebc4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x29ebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29ebc8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x29ebc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x29ebcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ebd0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x29ebd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29ebd4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x29ebd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x29ebd8: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x29ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ebdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29ebdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29ebe0: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x29ebe0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x29ebe4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x29ebe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29ebe8: 0x46070a82  mul.s       $f10, $f1, $f7
    ctx->pc = 0x29ebe8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x29ebec: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x29ebecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x29ebf0: 0x460731c2  mul.s       $f7, $f6, $f7
    ctx->pc = 0x29ebf0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x29ebf4: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x29ebf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x29ebf8: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x29ebf8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x29ebfc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x29ebfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29ec00: 0x46070141  sub.s       $f5, $f0, $f7
    ctx->pc = 0x29ec00u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x29ec04: 0x46061a01  sub.s       $f8, $f3, $f6
    ctx->pc = 0x29ec04u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x29ec08: 0x460a0240  add.s       $f9, $f0, $f10
    ctx->pc = 0x29ec08u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x29ec0c: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x29ec0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29ec10: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x29ec10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x29ec14: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x29ec14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29ec18: 0x460701c0  add.s       $f7, $f0, $f7
    ctx->pc = 0x29ec18u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x29ec1c: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x29ec1cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29ec20: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x29ec20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x29ec24: 0xe7a90044  swc1        $f9, 0x44($sp)
    ctx->pc = 0x29ec24u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29ec28: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x29ec28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x29ec2c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x29ec2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29ec30: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x29ec30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x29ec34: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x29ec34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29ec38: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x29ec38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29ec3c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x29ec3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29ec40: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x29ec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29ec44: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x29ec44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ec48: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x29ec48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29ec4c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x29ec4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29ec50: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29EC50u;
    SET_GPR_U32(ctx, 31, 0x29EC58u);
    ctx->pc = 0x29EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC50u;
    // 0x29ec54: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29EC50u, 0x29EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC58u;
label_29ec58:
    // 0x29ec58: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29ec5c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29ec60: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x29ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x29ec64: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x29ec64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x29ec68: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x29ec68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ec6c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29ec70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29ec74: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29ec78: 0x8f8c93a0  lw          $t4, -0x6C60($gp)
    ctx->pc = 0x29ec78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29ec7c: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29ec80: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29ec80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29ec84: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29ec84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29ec88: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x29ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
    // 0x29ec8c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x29ec8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29ec90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ec94: 0x3c057f00  lui         $a1, 0x7F00
    ctx->pc = 0x29ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32512 << 16));
    // 0x29ec98: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29ec9c: 0x2c52825  or          $a1, $s6, $a1
    ctx->pc = 0x29ec9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | GPR_U64(ctx, 5));
    // 0x29eca0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eca4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x29eca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x29eca8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29ecac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29ecacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ecb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ecb4: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x29ecb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ecb8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29ecbc: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x29ecbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29ecc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ecc4: 0x1250c0  sll         $t2, $s2, 3
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29ecc8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x29ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eccc: 0x25890010  addiu       $t1, $t4, 0x10
    ctx->pc = 0x29ecccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x29ecd0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29ecd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ecd8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ecd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29ecdc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29ecdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29ece0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ece4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29ece8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ecec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ececu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29ecf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29ecf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29ecf4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29ecf8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29ecfc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed00: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29ed04: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29ed08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ed0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed10: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29ed14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ed18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29ed1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed20: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29ed20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29ed24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ed28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29ed28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29ed2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed30: 0x2685a1b0  addiu       $a1, $s4, -0x5E50
    ctx->pc = 0x29ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943152));
    // 0x29ed34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ed38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29ed3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed40: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x29ed40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x29ed44: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ed48: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x29ed48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x29ed4c: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29ed50: 0x25089810  addiu       $t0, $t0, -0x67F0
    ctx->pc = 0x29ed50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940688));
    // 0x29ed54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed58: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x29ed5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ed60: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x29ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29ed64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed68: 0xaf8993a0  sw          $t1, -0x6C60($gp)
    ctx->pc = 0x29ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 9));
    // 0x29ed6c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29ed70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x29ed70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x29ed74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed78: 0x3c091400  lui         $t1, 0x1400
    ctx->pc = 0x29ed78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)5120 << 16));
    // 0x29ed7c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x29ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ed80: 0x352907fc  ori         $t1, $t1, 0x7FC
    ctx->pc = 0x29ed80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2044);
    // 0x29ed84: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ed84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29ed88: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29ed88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29ed8c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x29ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ed90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ed94: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x29ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x29ed98: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ed98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29ed9c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x29ed9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x29eda0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eda4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29eda4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29eda8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29eda8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29edac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29edacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29edb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29edb4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29edb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29edb8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x29edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29edbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29edc0: 0xa5860000  sh          $a2, 0x0($t4)
    ctx->pc = 0x29edc0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x29edc4: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x29edc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
    // 0x29edc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29edcc: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x29edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x29edd0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29edd4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x29edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x29edd8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29eddc: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x29eddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x29ede0: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x29ede0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x29ede4: 0x3c0c1100  lui         $t4, 0x1100
    ctx->pc = 0x29ede4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4352 << 16));
    // 0x29ede8: 0x52d00  sll         $a1, $a1, 20
    ctx->pc = 0x29ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x29edec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29edecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29edf0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29edf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29edf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29edfc: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29ee00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ee08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee0c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29ee10: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ee14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee18: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ee1c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ee1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29ee20: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29ee20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29ee24: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x29ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ee28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee2c: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x29ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x29ee30: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ee30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29ee34: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x29ee34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29ee38: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ee38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29ee3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29ee3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29ee40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee44: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x29ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ee48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ee4c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ee4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ee50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee54: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29ee58: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x29ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29ee5c: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x29ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x29ee60: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x29ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ee64: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x29ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x29ee68: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29ee6c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x29ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ee70: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x29ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x29ee74: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x29ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x29ee78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29ee7c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x29ee7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x29ee80: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x29ee80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x29ee84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ee88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29ee8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ee90: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ee90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29ee94: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x29ee94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x29ee98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ee9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ee9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29eea0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29eea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29eea4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eea8: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29eeac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29eeacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29eeb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eeb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29eeb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29eebc: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x29eebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
    // 0x29eec0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eec4: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29eec8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29eecc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29eed0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x29eed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x29eed4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eed8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x29eed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x29eedc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29eedcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29eee0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29eee4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eee8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eeec: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x29eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x29eef0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eef4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29eef8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29eefc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x29eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x29ef00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ef04: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x29ef04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29ef08: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29ef0c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x29ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x29ef10: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x29ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ef14: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x29ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x29ef18: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29ef1c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29ef1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29ef20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29ef24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ef2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef30: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x29ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x29ef34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ef3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef40: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29ef44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ef48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29ef4c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29ef4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29ef50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef54: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x29ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x29ef58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ef60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef64: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x29ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x29ef68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29ef6c: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29ef70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29ef74:
    // 0x29ef74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x29ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_29ef78:
    // 0x29ef78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29ef78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29ef7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29ef7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ef80: 0x5440fe97  bnel        $v0, $zero, . + 4 + (-0x169 << 2)
    ctx->pc = 0x29EF80u;
    {
        const bool branch_taken_0x29ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ef80) {
            ctx->pc = 0x29EF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EF80u;
            // 0x29ef84: 0x8e1203a0  lw          $s2, 0x3A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e9e0;
        }
    }
    ctx->pc = 0x29EF88u;
label_29ef88:
    // 0x29ef88: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x29ef88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29ef8c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x29ef8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29ef90: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x29ef90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29ef94: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x29ef94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ef98: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x29ef98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ef9c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x29ef9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29efa0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x29efa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29efa4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x29efa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29efa8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x29efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29efac: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x29efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29efb0: 0x3e00008  jr          $ra
    ctx->pc = 0x29EFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFB0u;
        // 0x29efb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EFB8u;
}

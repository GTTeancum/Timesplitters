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

// Function: DistFromWallSq
// Address: 0x27cb68 - 0x27ccdc
void DistFromWallSq_0x27cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DistFromWallSq_0x27cb68");
#endif

    switch (ctx->pc) {
        case 0x27cc94u: goto label_27cc94;
        default: break;
    }

    ctx->pc = 0x27cb68u;

    // 0x27cb68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27cb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27cb6c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x27cb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x27cb70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27cb74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27cb78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27cb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb7c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x27cb7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27cb80: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x27cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27cb84: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x27cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cb88: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x27cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cb8c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x27cb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27cb90: 0x46030181  sub.s       $f6, $f0, $f3
    ctx->pc = 0x27cb90u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27cb94: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x27cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27cb98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cb9c: 0x46020941  sub.s       $f5, $f1, $f2
    ctx->pc = 0x27cb9cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27cba0: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x27cba0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x27cba4: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x27cba4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27cba8: 0x460301c1  sub.s       $f7, $f0, $f3
    ctx->pc = 0x27cba8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27cbac: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x27cbacu;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x27cbb0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x27cbb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27cbb4: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x27cbb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27cbb8: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x27cbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x27cbbc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27cbbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27cbc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27cbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27cbc4: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x27cbc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cbc8: 0x0  nop
    ctx->pc = 0x27cbc8u;
    // NOP
    // 0x27cbcc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27CBCCu;
    {
        const bool branch_taken_0x27cbcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBCCu;
        // 0x27cbd0: 0xe7a70000  swc1        $f7, 0x0($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbcc) {
            ctx->pc = 0x27CBE0u;
            goto label_27cbe0;
        }
    }
    ctx->pc = 0x27CBD4u;
    // 0x27cbd4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27cbd8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x27CBD8u;
    {
        const bool branch_taken_0x27cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBD8u;
        // 0x27cbdc: 0xc440f9d0  lwc1        $f0, -0x630($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbd8) {
            ctx->pc = 0x27CCC8u;
            goto label_27ccc8;
        }
    }
    ctx->pc = 0x27CBE0u;
label_27cbe0:
    // 0x27cbe0: 0x460638c2  mul.s       $f3, $f7, $f6
    ctx->pc = 0x27cbe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x27cbe4: 0x46052042  mul.s       $f1, $f4, $f5
    ctx->pc = 0x27cbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x27cbe8: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x27cbe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x27cbec: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x27cbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x27cbf0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x27cbf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x27cbf4: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x27cbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cbf8: 0x0  nop
    ctx->pc = 0x27cbf8u;
    // NOP
    // 0x27cbfc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x27CBFCu;
    {
        const bool branch_taken_0x27cbfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBFCu;
        // 0x27cc00: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbfc) {
            ctx->pc = 0x27CC48u;
            goto label_27cc48;
        }
    }
    ctx->pc = 0x27CC04u;
    // 0x27cc04: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x27cc04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cc08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27CC08u;
    {
        const bool branch_taken_0x27cc08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cc08) {
            ctx->pc = 0x27CC24u;
            goto label_27cc24;
        }
    }
    ctx->pc = 0x27CC10u;
    // 0x27cc10: 0x46063801  sub.s       $f0, $f7, $f6
    ctx->pc = 0x27cc10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x27cc14: 0x46052041  sub.s       $f1, $f4, $f5
    ctx->pc = 0x27cc14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x27cc18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27cc1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27CC1Cu;
    {
        const bool branch_taken_0x27cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC1Cu;
        // 0x27cc20: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc1c) {
            ctx->pc = 0x27CC48u;
            goto label_27cc48;
        }
    }
    ctx->pc = 0x27CC24u;
label_27cc24:
    // 0x27cc24: 0x0  nop
    ctx->pc = 0x27cc24u;
    // NOP
    // 0x27cc28: 0x0  nop
    ctx->pc = 0x27cc28u;
    // NOP
    // 0x27cc2c: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x27cc2cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[12];
    // 0x27cc30: 0x46050802  mul.s       $f0, $f1, $f5
    ctx->pc = 0x27cc30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27cc34: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27cc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x27cc38: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x27cc38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x27cc3c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x27cc3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x27cc40: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x27cc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27cc44: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27cc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27cc48:
    // 0x27cc48: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x27cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cc4c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cc50: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x27cc50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27cc54: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27cc54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27cc58: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27CC58u;
    {
        const bool branch_taken_0x27cc58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC58u;
        // 0x27cc5c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc58) {
            ctx->pc = 0x27CCC4u;
            goto label_27ccc4;
        }
    }
    ctx->pc = 0x27CC60u;
    // 0x27cc60: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x27cc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cc64: 0x0  nop
    ctx->pc = 0x27cc64u;
    // NOP
    // 0x27cc68: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x27CC68u;
    {
        const bool branch_taken_0x27cc68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC68u;
        // 0x27cc6c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc68) {
            ctx->pc = 0x27CCC8u;
            goto label_27ccc8;
        }
    }
    ctx->pc = 0x27CC70u;
    // 0x27cc70: 0x0  nop
    ctx->pc = 0x27cc70u;
    // NOP
    // 0x27cc74: 0x0  nop
    ctx->pc = 0x27cc74u;
    // NOP
    // 0x27cc78: 0x460c00c4  c1          0xC00C4
    ctx->pc = 0x27cc78u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[12]);
    // 0x27cc7c: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x27cc7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cc80: 0x0  nop
    ctx->pc = 0x27cc80u;
    // NOP
    // 0x27cc84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27CC84u;
    {
        const bool branch_taken_0x27cc84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC84u;
        // 0x27cc88: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc84) {
            ctx->pc = 0x27CC9Cu;
            goto label_27cc9c;
        }
    }
    ctx->pc = 0x27CC8Cu;
    // 0x27cc8c: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27CC8Cu;
    SET_GPR_U32(ctx, 31, 0x27CC94u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27CC8Cu, 0x27CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC94u;
label_27cc94:
    // 0x27cc94: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27cc94u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x27cc98: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x27cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cc9c:
    // 0x27cc9c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x27cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cca0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27cca0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27cca4: 0x0  nop
    ctx->pc = 0x27cca4u;
    // NOP
    // 0x27cca8: 0x0  nop
    ctx->pc = 0x27cca8u;
    // NOP
    // 0x27ccac: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x27ccacu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x27ccb0: 0x0  nop
    ctx->pc = 0x27ccb0u;
    // NOP
    // 0x27ccb4: 0x0  nop
    ctx->pc = 0x27ccb4u;
    // NOP
    // 0x27ccb8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x27ccb8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x27ccbc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x27ccbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27ccc0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x27ccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_27ccc4:
    // 0x27ccc4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x27ccc4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_27ccc8:
    // 0x27ccc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27ccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cccc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27ccccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ccd0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ccd4: 0x3e00008  jr          $ra
    ctx->pc = 0x27CCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CCD4u;
        // 0x27ccd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CCDCu;
}

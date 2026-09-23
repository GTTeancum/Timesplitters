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

// Function: specialParticlesGfx
// Address: 0x2a8b48 - 0x2a9064
void specialParticlesGfx_0x2a8b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("specialParticlesGfx_0x2a8b48");
#endif

    switch (ctx->pc) {
        case 0x2a8bb8u: goto label_2a8bb8;
        case 0x2a8bc8u: goto label_2a8bc8;
        case 0x2a8bdcu: goto label_2a8bdc;
        case 0x2a8d64u: goto label_2a8d64;
        default: break;
    }

    ctx->pc = 0x2a8b48u;

    // 0x2a8b48: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a8b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2a8b4c: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x2a8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x2a8b50: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x2a8b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
    // 0x2a8b54: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x2a8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x2a8b58: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2a8b58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b5c: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x2a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
    // 0x2a8b60: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a8b60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b64: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2a8b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2a8b68: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a8b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b6c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2a8b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2a8b70: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a8b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b74: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2a8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2a8b78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a8b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b7c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2a8b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a8b80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a8b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b84: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2a8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2a8b88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a8b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b8c: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x2a8b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x2a8b90: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x2a8b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x2a8b94: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a8b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a8b98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8b9c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x2a8b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ba0: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x2a8ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
    // 0x2a8ba4: 0x0  nop
    ctx->pc = 0x2a8ba4u;
    // NOP
    // 0x2a8ba8: 0x0  nop
    ctx->pc = 0x2a8ba8u;
    // NOP
    // 0x2a8bac: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2a8bacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2a8bb0: 0xc0b57a6  jal         func_2D5E98
    ctx->pc = 0x2A8BB0u;
    SET_GPR_U32(ctx, 31, 0x2A8BB8u);
    ctx->pc = 0x2A8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BB0u;
    // 0x2a8bb4: 0x8c4506e0  lw          $a1, 0x6E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E98u, 0x2A8BB0u, 0x2A8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BB8u;
label_2a8bb8:
    // 0x2a8bb8: 0x1a40011e  blez        $s2, . + 4 + (0x11E << 2)
    ctx->pc = 0x2A8BB8u;
    {
        const bool branch_taken_0x2a8bb8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BB8u;
        // 0x2a8bbc: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bb8) {
            ctx->pc = 0x2A9034u;
            goto label_2a9034;
        }
    }
    ctx->pc = 0x2A8BC0u;
    // 0x2a8bc0: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2a8bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x2a8bc4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2a8bc8:
    // 0x2a8bc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a8bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bcc: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x2a8bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a8bd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a8bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bd4: 0xc0ad53e  jal         func_2B54F8
    ctx->pc = 0x2A8BD4u;
    SET_GPR_U32(ctx, 31, 0x2A8BDCu);
    ctx->pc = 0x2A8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BD4u;
    // 0x2a8bd8: 0x562821  addu        $a1, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54F8u, 0x2A8BD4u, 0x2A8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BDCu;
label_2a8bdc:
    // 0x2a8bdc: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2a8bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8be0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2a8be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8be4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2a8be4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2a8be8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8bec: 0x0  nop
    ctx->pc = 0x2a8becu;
    // NOP
    // 0x2a8bf0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8BF0u;
    {
        const bool branch_taken_0x2a8bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BF0u;
        // 0x2a8bf4: 0xc7a50054  lwc1        $f5, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bf0) {
            ctx->pc = 0x2A8C4Cu;
            goto label_2a8c4c;
        }
    }
    ctx->pc = 0x2A8BF8u;
    // 0x2a8bf8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2a8bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8bfc: 0x0  nop
    ctx->pc = 0x2a8bfcu;
    // NOP
    // 0x2a8c00: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2A8C00u;
    {
        const bool branch_taken_0x2a8c00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C00u;
        // 0x2a8c04: 0xc7aa0058  lwc1        $f10, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c00) {
            ctx->pc = 0x2A8C50u;
            goto label_2a8c50;
        }
    }
    ctx->pc = 0x2A8C08u;
    // 0x2a8c08: 0xc7a50054  lwc1        $f5, 0x54($sp)
    ctx->pc = 0x2a8c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8c0c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2a8c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8c10: 0x0  nop
    ctx->pc = 0x2a8c10u;
    // NOP
    // 0x2a8c14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2A8C14u;
    {
        const bool branch_taken_0x2a8c14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C14u;
        // 0x2a8c18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c14) {
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C1Cu;
    // 0x2a8c1c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x2a8c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8c20: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2A8C20u;
    {
        const bool branch_taken_0x2a8c20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8c20) {
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C28u;
    // 0x2a8c28: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x2a8c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8c2c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8C2Cu;
    {
        const bool branch_taken_0x2a8c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8c2c) {
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C34u;
    // 0x2a8c34: 0x460a1834  c.lt.s      $f3, $f10
    ctx->pc = 0x2a8c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8c38: 0x0  nop
    ctx->pc = 0x2a8c38u;
    // NOP
    // 0x2a8c3c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8C3Cu;
    {
        const bool branch_taken_0x2a8c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8c3c) {
            ctx->pc = 0x2A8C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8C3Cu;
            // 0x2a8c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C44u;
    // 0x2a8c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8C44u;
    {
        const bool branch_taken_0x2a8c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c44) {
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C4Cu;
label_2a8c4c:
    // 0x2a8c4c: 0xc7aa0058  lwc1        $f10, 0x58($sp)
    ctx->pc = 0x2a8c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2a8c50:
    // 0x2a8c50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8c54:
    // 0x2a8c54: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2a8c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x2a8c58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8c5c: 0x266399f0  addiu       $v1, $s3, -0x6610
    ctx->pc = 0x2a8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941168));
    // 0x2a8c60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8c68: 0xc4680010  lwc1        $f8, 0x10($v1)
    ctx->pc = 0x2a8c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a8c6c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2a8c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2a8c70: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2a8c70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2a8c74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2a8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2a8c78: 0x0  nop
    ctx->pc = 0x2a8c78u;
    // NOP
    // 0x2a8c7c: 0x0  nop
    ctx->pc = 0x2a8c7cu;
    // NOP
    // 0x2a8c80: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2a8c80u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2a8c84: 0xc7868e54  lwc1        $f6, -0x71AC($gp)
    ctx->pc = 0x2a8c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a8c88: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2a8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8c8c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2a8c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2a8c90: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a8c94: 0x0  nop
    ctx->pc = 0x2a8c94u;
    // NOP
    // 0x2a8c98: 0x0  nop
    ctx->pc = 0x2a8c98u;
    // NOP
    // 0x2a8c9c: 0x460a1083  div.s       $f2, $f2, $f10
    ctx->pc = 0x2a8c9cu;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[10];
    // 0x2a8ca0: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2a8ca4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2a8ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2a8ca8: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x2a8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8cac: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a8cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a8cb0: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2a8cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a8cb4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2a8cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2a8cb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a8cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8cbc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a8cbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a8cc0: 0x460012e4  .word       0x460012E4                   # cvt.w.s     $f11, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8cc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[11], &tmp, sizeof(tmp)); }
    // 0x2a8cc4: 0x44035800  mfc1        $v1, $f11
    ctx->pc = 0x2a8cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8cc8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2a8cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2a8ccc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2a8cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a8cd0: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x2a8cd0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2a8cd4: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x2a8cd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a8cd8: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x2a8cd8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2a8cdc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a8ce0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8ce4: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x2a8ce4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a8ce8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a8ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a8cec: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a8cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a8cf0: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2a8cf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2a8cf4: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2a8cf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2a8cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a8cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8cfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a8cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a8d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8d04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a8d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a8d08: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2a8d08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a8d0c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2a8d0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a8d10: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x2a8d10u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x2a8d14: 0x46011940  add.s       $f5, $f3, $f1
    ctx->pc = 0x2a8d14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a8d18: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x2a8d18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a8d1c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a8d1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a8d20: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x2a8d20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a8d24: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a8d24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a8d28: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x2a8d28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a8d2c: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2a8d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a8d30: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x2a8d30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a8d34: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x2a8d34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a8d38: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x2a8d38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a8d3c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2a8d3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a8d40: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x2a8d40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a8d44: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x2a8d44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a8d48: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2a8d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a8d4c: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x2a8d4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a8d50: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x2a8d50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a8d54: 0x148000b3  bnez        $a0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2A8D54u;
    {
        const bool branch_taken_0x2a8d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D54u;
        // 0x2a8d58: 0xe7a60088  swc1        $f6, 0x88($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d54) {
            ctx->pc = 0x2A9024u;
            goto label_2a9024;
        }
    }
    ctx->pc = 0x2A8D5Cu;
    // 0x2a8d5c: 0xc0807de  jal         func_201F78
    ctx->pc = 0x2A8D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D64u);
    ctx->pc = 0x2A8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D5Cu;
    // 0x2a8d60: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x2A8D5Cu, 0x2A8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D64u;
label_2a8d64:
    // 0x2a8d64: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x2a8d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a8d68: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2a8d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a8d6c: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x2a8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x2a8d70: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2a8d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a8d74: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x2a8d74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a8d78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a8d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a8d7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a8d80: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x2a8d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2a8d84: 0x8f8a93a0  lw          $t2, -0x6C60($gp)
    ctx->pc = 0x2a8d84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x2a8d88: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x2a8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x2a8d8c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2a8d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2a8d90: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x2a8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x2a8d94: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x2a8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x2a8d98: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x2a8d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x2a8d9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8da0: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2a8da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a8da4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a8da8: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x2a8da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2a8dac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8db0: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2a8db0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8db4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a8db8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a8db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8dbc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8dc0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x2a8dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8dc4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a8dc8: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x2a8dc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a8dcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8dd0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8dd4: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2a8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2a8dd8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8dd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a8ddc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2a8ddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a8de0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8de4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2a8de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a8de8: 0x143d00  sll         $a3, $s4, 20
    ctx->pc = 0x2a8de8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 20));
    // 0x2a8dec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a8decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8df0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2a8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8df4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a8df8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a8dfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8dfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8e00: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a8e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8e04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e08: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a8e0c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2a8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2a8e10: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a8e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a8e14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a8e1c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2a8e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2a8e20: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a8e24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8e2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8e30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a8e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a8e34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e38: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2a8e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a8e3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8e40: 0x25490010  addiu       $t1, $t2, 0x10
    ctx->pc = 0x2a8e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2a8e44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e48: 0xaf8993a0  sw          $t1, -0x6C60($gp)
    ctx->pc = 0x2a8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 9));
    // 0x2a8e4c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2a8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8e54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e58: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a8e5c: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x2a8e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2a8e60: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2a8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e64: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a8e68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8e70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a8e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8e74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8e78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a8e7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e80: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x2a8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x2a8e84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a8e88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a8e8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8e90: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a8e94: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a8e98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8e9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8ea0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ea4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2a8ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a8ea8: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x2a8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x2a8eac: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2a8eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2a8eb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8eb4: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x2a8eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a8eb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8ebc: 0x154100  sll         $t0, $s5, 4
    ctx->pc = 0x2a8ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2a8ec0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ec4: 0x1076825  or          $t5, $t0, $a3
    ctx->pc = 0x2a8ec4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2a8ec8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2a8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2a8ecc: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x2a8eccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x2a8ed0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ed4: 0x34c607fc  ori         $a2, $a2, 0x7FC
    ctx->pc = 0x2a8ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2044);
    // 0x2a8ed8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8edc: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x2a8edcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x2a8ee0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ee4: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a8ee8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8eec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8ef0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ef4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a8ef8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2a8ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8efc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f00: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2a8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f04: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2a8f08: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a8f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8f0c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2a8f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8f10: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f14: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x2a8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x2a8f18: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a8f1c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2a8f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a8f20: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a8f24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2a8f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8f28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f2c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2a8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8f30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8f34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a8f38: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a8f40: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2a8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2a8f44: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2a8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2a8f48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f4c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a8f50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8f54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8f58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a8f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a8f60: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a8f64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a8f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a8f68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f6c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2a8f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8f74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f78: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a8f7c: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x2a8f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2a8f80: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2a8f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2a8f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a8f88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8f8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a8f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a8f90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8f94: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8f94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a8f98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a8f9c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a8f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a8fa0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2a8fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fa4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8fa8: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x2a8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x2a8fac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a8facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a8fb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8fb4: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x2a8fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x2a8fb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8fbc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2a8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2a8fc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8fc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a8fc8: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x2a8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x2a8fcc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2a8fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a8fd0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8fd4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2a8fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2a8fd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8fdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8fe0: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x2a8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a8fe4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8fe8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a8fec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ff0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a8ff4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a8ff8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a8ff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a8ffc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2a8ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a9000: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a9000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a9004: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x2a9004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x2a9008: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a9008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a900c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a900cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a9010: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a9014: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2a9014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2a9018: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a901c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2a901cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2a9020: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a9020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a9024:
    // 0x2a9024: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a9024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a9028: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2a9028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a902c: 0x1440fee6  bnez        $v0, . + 4 + (-0x11A << 2)
    ctx->pc = 0x2A902Cu;
    {
        const bool branch_taken_0x2a902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A902Cu;
        // 0x2a9030: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a902c) {
            ctx->pc = 0x2A8BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8bc8;
        }
    }
    ctx->pc = 0x2A9034u;
label_2a9034:
    // 0x2a9034: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2a9034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a9038: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x2a9038u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a903c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x2a903cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a9040: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x2a9040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a9044: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2a9044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a9048: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x2a9048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a904c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x2a904cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a9050: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x2a9050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a9054: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2a9054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a9058: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2a9058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a905c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A905Cu;
        // 0x2a9060: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9064u;
}

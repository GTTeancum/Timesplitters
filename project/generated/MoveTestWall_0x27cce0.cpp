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

// Function: MoveTestWall
// Address: 0x27cce0 - 0x27d0c0
void MoveTestWall_0x27cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveTestWall_0x27cce0");
#endif

    switch (ctx->pc) {
        case 0x27cd68u: goto label_27cd68;
        case 0x27cea0u: goto label_27cea0;
        case 0x27cf64u: goto label_27cf64;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27d060u: goto label_27d060;
        default: break;
    }

    ctx->pc = 0x27cce0u;

    // 0x27cce0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x27cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x27cce4: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x27cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x27cce8: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x27cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x27ccec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x27ccecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccf0: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x27ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x27ccf4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x27ccf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ccf8: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x27ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x27ccfc: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x27ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x27cd00: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x27cd00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd04: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x27cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x27cd08: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x27cd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd0c: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x27cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x27cd10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27cd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd14: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x27cd14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x27cd18: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27cd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd1c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x27cd1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x27cd20: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x27cd20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x27cd24: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x27cd24u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x27cd28: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x27cd28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x27cd2c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x27cd2cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x27cd30: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x27cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x27cd34: 0x4616b542  mul.s       $f21, $f22, $f22
    ctx->pc = 0x27cd34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x27cd38: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x27cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x27cd3c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x27cd3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x27cd40: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x27cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x27cd44: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27cd48: 0xafab0080  sw          $t3, 0x80($sp)
    ctx->pc = 0x27cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 11));
    // 0x27cd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27cd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27cd50: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x27cd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x27cd54: 0x120000af  beqz        $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x27CD54u;
    {
        const bool branch_taken_0x27cd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD54u;
        // 0x27cd58: 0x8fb60160  lw          $s6, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd54) {
            ctx->pc = 0x27D014u;
            goto label_27d014;
        }
    }
    ctx->pc = 0x27CD5Cu;
    // 0x27cd5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27cd5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd60: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27cd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27cd64: 0x0  nop
    ctx->pc = 0x27cd64u;
    // NOP
label_27cd68:
    // 0x27cd68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CD68u;
    {
        const bool branch_taken_0x27cd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD68u;
        // 0x27cd6c: 0x5e1024  and         $v0, $v0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd68) {
            ctx->pc = 0x27CD78u;
            goto label_27cd78;
        }
    }
    ctx->pc = 0x27CD70u;
    // 0x27cd70: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x27CD70u;
    {
        const bool branch_taken_0x27cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd70) {
            ctx->pc = 0x27CD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CD70u;
            // 0x27cd74: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D008u;
            goto label_27d008;
        }
    }
    ctx->pc = 0x27CD78u;
label_27cd78:
    // 0x27cd78: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x27cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cd7c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cd80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27cd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cd84: 0x0  nop
    ctx->pc = 0x27cd84u;
    // NOP
    // 0x27cd88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27CD88u;
    {
        const bool branch_taken_0x27cd88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cd88) {
            ctx->pc = 0x27CD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CD88u;
            // 0x27cd8c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD9Cu;
            goto label_27cd9c;
        }
    }
    ctx->pc = 0x27CD90u;
    // 0x27cd90: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x27cd90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27cd94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27CD94u;
    {
        const bool branch_taken_0x27cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CD94u;
        // 0x27cd98: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd94) {
            ctx->pc = 0x27CDA0u;
            goto label_27cda0;
        }
    }
    ctx->pc = 0x27CD9Cu;
label_27cd9c:
    // 0x27cd9c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cda0:
    // 0x27cda0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27cda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27cda4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cda8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27cda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27cdac: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x27cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cdb0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x27cdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27cdb4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cdb8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x27cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27cdbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cdc0: 0x0  nop
    ctx->pc = 0x27cdc0u;
    // NOP
    // 0x27cdc4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27CDC4u;
    {
        const bool branch_taken_0x27cdc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cdc4) {
            ctx->pc = 0x27CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CDC4u;
            // 0x27cdc8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CDD8u;
            goto label_27cdd8;
        }
    }
    ctx->pc = 0x27CDCCu;
    // 0x27cdcc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x27cdccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27cdd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27CDD0u;
    {
        const bool branch_taken_0x27cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CDD0u;
        // 0x27cdd4: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdd0) {
            ctx->pc = 0x27CDDCu;
            goto label_27cddc;
        }
    }
    ctx->pc = 0x27CDD8u;
label_27cdd8:
    // 0x27cdd8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x27cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cddc:
    // 0x27cddc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27cde0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x27cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cde4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27cde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27cde8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27cde8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cdec: 0x0  nop
    ctx->pc = 0x27cdecu;
    // NOP
    // 0x27cdf0: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x27CDF0u;
    {
        const bool branch_taken_0x27cdf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27cdf0) {
            ctx->pc = 0x27CDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CDF0u;
            // 0x27cdf4: 0xc641000c  lwc1        $f1, 0xC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CEC0u;
            goto label_27cec0;
        }
    }
    ctx->pc = 0x27CDF8u;
    // 0x27cdf8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x27cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cdfc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27cdfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce00: 0x0  nop
    ctx->pc = 0x27ce00u;
    // NOP
    // 0x27ce04: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x27CE04u;
    {
        const bool branch_taken_0x27ce04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE04u;
        // 0x27ce08: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce04) {
            ctx->pc = 0x27CEBCu;
            goto label_27cebc;
        }
    }
    ctx->pc = 0x27CE0Cu;
    // 0x27ce0c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x27ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ce10: 0x46161000  add.s       $f0, $f2, $f22
    ctx->pc = 0x27ce10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x27ce14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ce14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce18: 0x0  nop
    ctx->pc = 0x27ce18u;
    // NOP
    // 0x27ce1c: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x27CE1Cu;
    {
        const bool branch_taken_0x27ce1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE1Cu;
        // 0x27ce20: 0xc7a0003c  lwc1        $f0, 0x3C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce1c) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CE24u;
    // 0x27ce24: 0x46161041  sub.s       $f1, $f2, $f22
    ctx->pc = 0x27ce24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x27ce28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ce28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce2c: 0x0  nop
    ctx->pc = 0x27ce2cu;
    // NOP
    // 0x27ce30: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x27CE30u;
    {
        const bool branch_taken_0x27ce30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE30u;
        // 0x27ce34: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce30) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CE38u;
    // 0x27ce38: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x27ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ce3c: 0x46171000  add.s       $f0, $f2, $f23
    ctx->pc = 0x27ce3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x27ce40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ce40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce44: 0x0  nop
    ctx->pc = 0x27ce44u;
    // NOP
    // 0x27ce48: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x27CE48u;
    {
        const bool branch_taken_0x27ce48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE48u;
        // 0x27ce4c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce48) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CE50u;
    // 0x27ce50: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27ce50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce54: 0x0  nop
    ctx->pc = 0x27ce54u;
    // NOP
    // 0x27ce58: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x27CE58u;
    {
        const bool branch_taken_0x27ce58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE58u;
        // 0x27ce5c: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce58) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CE60u;
    // 0x27ce60: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x27ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ce64: 0x46161000  add.s       $f0, $f2, $f22
    ctx->pc = 0x27ce64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x27ce68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ce68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce6c: 0x0  nop
    ctx->pc = 0x27ce6cu;
    // NOP
    // 0x27ce70: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x27CE70u;
    {
        const bool branch_taken_0x27ce70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE70u;
        // 0x27ce74: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce70) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CE78u;
    // 0x27ce78: 0x46161041  sub.s       $f1, $f2, $f22
    ctx->pc = 0x27ce78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x27ce7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ce7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ce80: 0x0  nop
    ctx->pc = 0x27ce80u;
    // NOP
    // 0x27ce84: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x27CE84u;
    {
        const bool branch_taken_0x27ce84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE84u;
        // 0x27ce88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce84) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CE8Cu;
    // 0x27ce8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce90: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27ce90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27ce94: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27ce98: 0xc09f2da  jal         func_27CB68
    ctx->pc = 0x27CE98u;
    SET_GPR_U32(ctx, 31, 0x27CEA0u);
    ctx->pc = 0x27CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CE98u;
    // 0x27ce9c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CB68u, 0x27CE98u, 0x27CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEA0u;
label_27cea0:
    // 0x27cea0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x27cea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cea4: 0x0  nop
    ctx->pc = 0x27cea4u;
    // NOP
    // 0x27cea8: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x27CEA8u;
    {
        const bool branch_taken_0x27cea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEA8u;
        // 0x27ceac: 0xc7a10050  lwc1        $f1, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cea8) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CEB0u;
    // 0x27ceb0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27ceb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27ceb4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x27CEB4u;
    {
        const bool branch_taken_0x27ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEB4u;
        // 0x27ceb8: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceb4) {
            ctx->pc = 0x27CFFCu;
            goto label_27cffc;
        }
    }
    ctx->pc = 0x27CEBCu;
label_27cebc:
    // 0x27cebc: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x27cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27cec0:
    // 0x27cec0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x27cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cec4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27cec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cec8: 0x0  nop
    ctx->pc = 0x27cec8u;
    // NOP
    // 0x27cecc: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x27CECCu;
    {
        const bool branch_taken_0x27cecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CECCu;
        // 0x27ced0: 0xc7a0003c  lwc1        $f0, 0x3C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cecc) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CED4u;
    // 0x27ced4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x27ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ced8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ced8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cedc: 0x0  nop
    ctx->pc = 0x27cedcu;
    // NOP
    // 0x27cee0: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x27CEE0u;
    {
        const bool branch_taken_0x27cee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEE0u;
        // 0x27cee4: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cee0) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CEE8u;
    // 0x27cee8: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x27cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ceec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ceecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cef0: 0x0  nop
    ctx->pc = 0x27cef0u;
    // NOP
    // 0x27cef4: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x27CEF4u;
    {
        const bool branch_taken_0x27cef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEF4u;
        // 0x27cef8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cef4) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CEFCu;
    // 0x27cefc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x27cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cf00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27cf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cf04: 0x0  nop
    ctx->pc = 0x27cf04u;
    // NOP
    // 0x27cf08: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x27CF08u;
    {
        const bool branch_taken_0x27cf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF08u;
        // 0x27cf0c: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf08) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CF10u;
    // 0x27cf10: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x27cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cf14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27cf14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cf18: 0x0  nop
    ctx->pc = 0x27cf18u;
    // NOP
    // 0x27cf1c: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x27CF1Cu;
    {
        const bool branch_taken_0x27cf1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF1Cu;
        // 0x27cf20: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf1c) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CF24u;
    // 0x27cf24: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x27cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cf28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27cf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cf2c: 0x0  nop
    ctx->pc = 0x27cf2cu;
    // NOP
    // 0x27cf30: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x27CF30u;
    {
        const bool branch_taken_0x27cf30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF30u;
        // 0x27cf34: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf30) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CF38u;
    // 0x27cf38: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x27cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cf3c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x27cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27cf40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27cf44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27cf48: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x27cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27cf4c: 0xc66f0000  lwc1        $f15, 0x0($s3)
    ctx->pc = 0x27cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27cf50: 0xc6700004  lwc1        $f16, 0x4($s3)
    ctx->pc = 0x27cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27cf54: 0xc6110004  lwc1        $f17, 0x4($s0)
    ctx->pc = 0x27cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x27cf58: 0xc612000c  lwc1        $f18, 0xC($s0)
    ctx->pc = 0x27cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x27cf5c: 0xc082454  jal         func_209150
    ctx->pc = 0x27CF5Cu;
    SET_GPR_U32(ctx, 31, 0x27CF64u);
    ctx->pc = 0x27CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF5Cu;
    // 0x27cf60: 0xc6130014  lwc1        $f19, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209150u, 0x27CF5Cu, 0x27CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF64u;
label_27cf64:
    // 0x27cf64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27cf64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27cf68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27cf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27cf6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cf70: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27cf70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cf74: 0x0  nop
    ctx->pc = 0x27cf74u;
    // NOP
    // 0x27cf78: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x27CF78u;
    {
        const bool branch_taken_0x27cf78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF78u;
        // 0x27cf7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf78) {
            ctx->pc = 0x27CFB0u;
            goto label_27cfb0;
        }
    }
    ctx->pc = 0x27CF80u;
    // 0x27cf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27cf84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27cf88: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x27cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27cf8c: 0xc09f2da  jal         func_27CB68
    ctx->pc = 0x27CF8Cu;
    SET_GPR_U32(ctx, 31, 0x27CF94u);
    ctx->pc = 0x27CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF8Cu;
    // 0x27cf90: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CB68u, 0x27CF8Cu, 0x27CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF94u;
label_27cf94:
    // 0x27cf94: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x27cf94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cf98: 0x0  nop
    ctx->pc = 0x27cf98u;
    // NOP
    // 0x27cf9c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x27CF9Cu;
    {
        const bool branch_taken_0x27cf9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF9Cu;
        // 0x27cfa0: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf9c) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CFA4u;
    // 0x27cfa4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27cfa4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27cfa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27CFA8u;
    {
        const bool branch_taken_0x27cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFA8u;
        // 0x27cfac: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfa8) {
            ctx->pc = 0x27CFFCu;
            goto label_27cffc;
        }
    }
    ctx->pc = 0x27CFB0u;
label_27cfb0:
    // 0x27cfb0: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x27cfb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cfb4: 0x0  nop
    ctx->pc = 0x27cfb4u;
    // NOP
    // 0x27cfb8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x27CFB8u;
    {
        const bool branch_taken_0x27cfb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFB8u;
        // 0x27cfbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfb8) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CFC0u;
    // 0x27cfc0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x27cfc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27cfc4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27cfc8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27cfc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27cfcc: 0xc09f2da  jal         func_27CB68
    ctx->pc = 0x27CFCCu;
    SET_GPR_U32(ctx, 31, 0x27CFD4u);
    ctx->pc = 0x27CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CFCCu;
    // 0x27cfd0: 0x4600a606  mov.s       $f24, $f20 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CB68u, 0x27CFCCu, 0x27CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CFD4u;
label_27cfd4:
    // 0x27cfd4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x27cfd4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x27cfd8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x27cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cfdc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x27cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27cfe0: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x27cfe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27cfe4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x27cfe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27cfe8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27CFE8u;
    {
        const bool branch_taken_0x27cfe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFE8u;
        // 0x27cfec: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfe8) {
            ctx->pc = 0x27D004u;
            goto label_27d004;
        }
    }
    ctx->pc = 0x27CFF0u;
    // 0x27cff0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x27cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27cff4: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x27cff4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
    // 0x27cff8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x27cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27cffc:
    // 0x27cffc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x27cffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d000: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27d004:
    // 0x27d004: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x27d004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_27d008:
    // 0x27d008: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x27d008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27d00c: 0x5600ff56  bnel        $s0, $zero, . + 4 + (-0xAA << 2)
    ctx->pc = 0x27D00Cu;
    {
        const bool branch_taken_0x27d00c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d00c) {
            ctx->pc = 0x27D010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D00Cu;
            // 0x27d010: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cd68;
        }
    }
    ctx->pc = 0x27D014u;
label_27d014:
    // 0x27d014: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27D014u;
    {
        const bool branch_taken_0x27d014 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d014) {
            ctx->pc = 0x27D018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D014u;
            // 0x27d018: 0xe6f80000  swc1        $f24, 0x0($s7) (Delay Slot)
            { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D01Cu;
            goto label_27d01c;
        }
    }
    ctx->pc = 0x27D01Cu;
label_27d01c:
    // 0x27d01c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D01Cu;
    {
        const bool branch_taken_0x27d01c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D01Cu;
        // 0x27d020: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d01c) {
            ctx->pc = 0x27D030u;
            goto label_27d030;
        }
    }
    ctx->pc = 0x27D024u;
    // 0x27d024: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x27d024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d028: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x27d028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x27d02c: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x27d02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_27d030:
    // 0x27d030: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x27d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27d034: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27D034u;
    {
        const bool branch_taken_0x27d034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d034) {
            ctx->pc = 0x27D068u;
            goto label_27d068;
        }
    }
    ctx->pc = 0x27D03Cu;
    // 0x27d03c: 0x0  nop
    ctx->pc = 0x27d03cu;
    // NOP
    // 0x27d040: 0x0  nop
    ctx->pc = 0x27d040u;
    // NOP
    // 0x27d044: 0x46150004  c1          0x150004
    ctx->pc = 0x27d044u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[21]);
    // 0x27d048: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x27d048u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d04c: 0x0  nop
    ctx->pc = 0x27d04cu;
    // NOP
    // 0x27d050: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x27D050u;
    {
        const bool branch_taken_0x27d050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d050) {
            ctx->pc = 0x27D054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D050u;
            // 0x27d054: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D068u;
            goto label_27d068;
        }
    }
    ctx->pc = 0x27D058u;
    // 0x27d058: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x27D058u;
    SET_GPR_U32(ctx, 31, 0x27D060u);
    ctx->pc = 0x27D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D058u;
    // 0x27d05c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x27D058u, 0x27D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D060u;
label_27d060:
    // 0x27d060: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x27d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27d064: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27d068:
    // 0x27d068: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D068u;
    {
        const bool branch_taken_0x27d068 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D068u;
        // 0x27d06c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d068) {
            ctx->pc = 0x27D07Cu;
            goto label_27d07c;
        }
    }
    ctx->pc = 0x27D070u;
    // 0x27d070: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27d070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d074: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x27d074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x27d078: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x27d078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_27d07c:
    // 0x27d07c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x27d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27d080: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x27d080u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27d084: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x27d084u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27d088: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x27d088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27d08c: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x27d08cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27d090: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x27d090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27d094: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x27d094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27d098: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x27d098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27d09c: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x27d09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27d0a0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x27d0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27d0a4: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x27d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27d0a8: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x27d0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27d0ac: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x27d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d0b0: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x27d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d0b4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x27d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D0C0u;
}

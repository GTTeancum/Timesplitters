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

// Function: playerDeathView
// Address: 0x280b60 - 0x281248
void playerDeathView_0x280b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("playerDeathView_0x280b60");
#endif

    switch (ctx->pc) {
        case 0x280d68u: goto label_280d68;
        case 0x280db8u: goto label_280db8;
        case 0x280e7cu: goto label_280e7c;
        case 0x280f18u: goto label_280f18;
        case 0x280f98u: goto label_280f98;
        case 0x280fd4u: goto label_280fd4;
        case 0x2811c4u: goto label_2811c4;
        default: break;
    }

    ctx->pc = 0x280b60u;

    // 0x280b60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x280b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x280b64: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x280b64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280b68: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x280b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x280b6c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x280b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x280b70: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x280b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x280b74: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x280b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x280b78: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x280b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x280b7c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x280b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b80: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x280b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x280b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b88: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x280b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x280b8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x280b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b90: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x280b90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x280b94: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x280b94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x280b98: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x280b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x280b9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x280b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x280ba0: 0xc5210070  lwc1        $f1, 0x70($t1)
    ctx->pc = 0x280ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280ba4: 0xc5220068  lwc1        $f2, 0x68($t1)
    ctx->pc = 0x280ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280ba8: 0xc523007c  lwc1        $f3, 0x7C($t1)
    ctx->pc = 0x280ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280bac: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x280bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x280bb0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x280bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x280bb4: 0x460310c0  add.s       $f3, $f2, $f3
    ctx->pc = 0x280bb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x280bb8: 0xc525006c  lwc1        $f5, 0x6C($t1)
    ctx->pc = 0x280bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280bbc: 0x8d240180  lw          $a0, 0x180($t1)
    ctx->pc = 0x280bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 384)));
    // 0x280bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280bc4: 0x0  nop
    ctx->pc = 0x280bc4u;
    // NOP
    // 0x280bc8: 0x0  nop
    ctx->pc = 0x280bc8u;
    // NOP
    // 0x280bcc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x280bccu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x280bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280bd4: 0x8c930160  lw          $s3, 0x160($a0)
    ctx->pc = 0x280bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x280bd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x280bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x280bdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x280bdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280be0: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x280be0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x280be4: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x280be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280be8: 0x0  nop
    ctx->pc = 0x280be8u;
    // NOP
    // 0x280bec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280BECu;
    {
        const bool branch_taken_0x280bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BECu;
        // 0x280bf0: 0xe5210070  swc1        $f1, 0x70($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bec) {
            ctx->pc = 0x280BFCu;
            goto label_280bfc;
        }
    }
    ctx->pc = 0x280BF4u;
    // 0x280bf4: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x280bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x280bf8: 0xe5200070  swc1        $f0, 0x70($t1)
    ctx->pc = 0x280bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 112), bits); }
label_280bfc:
    // 0x280bfc: 0xc5210074  lwc1        $f1, 0x74($t1)
    ctx->pc = 0x280bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280c00: 0xc5200090  lwc1        $f0, 0x90($t1)
    ctx->pc = 0x280c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280c04: 0xc523007c  lwc1        $f3, 0x7C($t1)
    ctx->pc = 0x280c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280c08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280c0c: 0xc522008c  lwc1        $f2, 0x8C($t1)
    ctx->pc = 0x280c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280c10: 0xc5210094  lwc1        $f1, 0x94($t1)
    ctx->pc = 0x280c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280c14: 0x8d220710  lw          $v0, 0x710($t1)
    ctx->pc = 0x280c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1808)));
    // 0x280c18: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x280c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x280c1c: 0xe5220098  swc1        $f2, 0x98($t1)
    ctx->pc = 0x280c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 152), bits); }
    // 0x280c20: 0xe52100a0  swc1        $f1, 0xA0($t1)
    ctx->pc = 0x280c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 160), bits); }
    // 0x280c24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280C24u;
    {
        const bool branch_taken_0x280c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C24u;
        // 0x280c28: 0xe520009c  swc1        $f0, 0x9C($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c24) {
            ctx->pc = 0x280C3Cu;
            goto label_280c3c;
        }
    }
    ctx->pc = 0x280C2Cu;
    // 0x280c2c: 0x8d220700  lw          $v0, 0x700($t1)
    ctx->pc = 0x280c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1792)));
    // 0x280c30: 0x8f83b460  lw          $v1, -0x4BA0($gp)
    ctx->pc = 0x280c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x280c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280c38: 0xad220700  sw          $v0, 0x700($t1)
    ctx->pc = 0x280c38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1792), GPR_U32(ctx, 2));
label_280c3c:
    // 0x280c3c: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x280c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x280c40: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x280C40u;
    {
        const bool branch_taken_0x280c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280c40) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280C48u;
    // 0x280c48: 0x5464000e  bnel        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x280C48u;
    {
        const bool branch_taken_0x280c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x280c48) {
            ctx->pc = 0x280C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280C48u;
            // 0x280c4c: 0xc5200098  lwc1        $f0, 0x98($t1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280C84u;
            goto label_280c84;
        }
    }
    ctx->pc = 0x280C50u;
    // 0x280c50: 0x8d220710  lw          $v0, 0x710($t1)
    ctx->pc = 0x280c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1808)));
    // 0x280c54: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x280C54u;
    {
        const bool branch_taken_0x280c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280c54) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280C5Cu;
    // 0x280c5c: 0xc5210700  lwc1        $f1, 0x700($t1)
    ctx->pc = 0x280c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280c60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x280c64: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x280c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x280c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280c6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c70: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x280C70u;
    {
        const bool branch_taken_0x280c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c70) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280C78u;
    // 0x280c78: 0xad200700  sw          $zero, 0x700($t1)
    ctx->pc = 0x280c78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1792), GPR_U32(ctx, 0));
    // 0x280c7c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x280C7Cu;
    {
        const bool branch_taken_0x280c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C7Cu;
        // 0x280c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c7c) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280C84u;
label_280c84:
    // 0x280c84: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x280c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280c88: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x280c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x280c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x280c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x280c90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280c90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280c94: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x280c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x280c98: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x280c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x280c9c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x280c9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ca0: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x280ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ca4: 0xc521009c  lwc1        $f1, 0x9C($t1)
    ctx->pc = 0x280ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280ca8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x280ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x280cac: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x280cacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x280cb0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x280cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x280cb4: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x280cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280cb8: 0xc52000a0  lwc1        $f0, 0xA0($t1)
    ctx->pc = 0x280cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280cbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280cbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280cc0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x280CC0u;
    {
        const bool branch_taken_0x280cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CC0u;
        // 0x280cc4: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cc0) {
            ctx->pc = 0x280CE4u;
            goto label_280ce4;
        }
    }
    ctx->pc = 0x280CC8u;
    // 0x280cc8: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x280cc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ccc: 0x0  nop
    ctx->pc = 0x280cccu;
    // NOP
    // 0x280cd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x280CD0u;
    {
        const bool branch_taken_0x280cd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CD0u;
        // 0x280cd4: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cd0) {
            ctx->pc = 0x280CE8u;
            goto label_280ce8;
        }
    }
    ctx->pc = 0x280CD8u;
    // 0x280cd8: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x280cd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280cdc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x280CDCu;
    {
        const bool branch_taken_0x280cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280cdc) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280CE4u;
label_280ce4:
    // 0x280ce4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x280ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280ce8:
    // 0x280ce8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x280ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280cec: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x280cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280cf0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x280cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280cf4: 0x8cc20710  lw          $v0, 0x710($a2)
    ctx->pc = 0x280cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1808)));
    // 0x280cf8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x280cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x280cfc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x280cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x280d00: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x280D00u;
    {
        const bool branch_taken_0x280d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D00u;
        // 0x280d04: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d00) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280D08u;
    // 0x280d08: 0xc5210700  lwc1        $f1, 0x700($t1)
    ctx->pc = 0x280d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280d0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x280d10: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x280d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x280d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280d18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280d1c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x280D1Cu;
    {
        const bool branch_taken_0x280d1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280d1c) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280D24u;
    // 0x280d24: 0x8c630160  lw          $v1, 0x160($v1)
    ctx->pc = 0x280d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x280d28: 0xad200700  sw          $zero, 0x700($t1)
    ctx->pc = 0x280d28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1792), GPR_U32(ctx, 0));
    // 0x280d2c: 0x8c620a94  lw          $v0, 0xA94($v1)
    ctx->pc = 0x280d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2708)));
    // 0x280d30: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x280d34: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x280D34u;
    {
        const bool branch_taken_0x280d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D34u;
        // 0x280d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d34) {
            ctx->pc = 0x280D74u;
            goto label_280d74;
        }
    }
    ctx->pc = 0x280D3Cu;
    // 0x280d3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x280d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x280d40: 0x25250098  addiu       $a1, $t1, 0x98
    ctx->pc = 0x280d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 152));
    // 0x280d44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x280d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x280d48: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x280d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d54: 0x8d24031c  lw          $a0, 0x31C($t1)
    ctx->pc = 0x280d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 796)));
    // 0x280d58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x280d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d60: 0xc09640e  jal         func_259038
    ctx->pc = 0x280D60u;
    SET_GPR_U32(ctx, 31, 0x280D68u);
    ctx->pc = 0x280D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D60u;
    // 0x280d64: 0x240bfffd  addiu       $t3, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x280D60u, 0x280D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D68u;
label_280d68:
    // 0x280d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d6c: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x280d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280d70: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x280d70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_280d74:
    // 0x280d74: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x280D74u;
    {
        const bool branch_taken_0x280d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D74u;
        // 0x280d78: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d74) {
            ctx->pc = 0x280D94u;
            goto label_280d94;
        }
    }
    ctx->pc = 0x280D7Cu;
    // 0x280d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280d80: 0xc440fa04  lwc1        $f0, -0x5FC($v0)
    ctx->pc = 0x280d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280d84: 0xad230710  sw          $v1, 0x710($t1)
    ctx->pc = 0x280d84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1808), GPR_U32(ctx, 3));
    // 0x280d88: 0xe5200718  swc1        $f0, 0x718($t1)
    ctx->pc = 0x280d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1816), bits); }
    // 0x280d8c: 0xad200700  sw          $zero, 0x700($t1)
    ctx->pc = 0x280d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1792), GPR_U32(ctx, 0));
    // 0x280d90: 0xad200714  sw          $zero, 0x714($t1)
    ctx->pc = 0x280d90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1812), GPR_U32(ctx, 0));
label_280d94:
    // 0x280d94: 0x8d220710  lw          $v0, 0x710($t1)
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1808)));
    // 0x280d98: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x280D98u;
    {
        const bool branch_taken_0x280d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280d98) {
            ctx->pc = 0x280F74u;
            goto label_280f74;
        }
    }
    ctx->pc = 0x280DA0u;
    // 0x280da0: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x280da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x280da4: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x280da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x280da8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x280da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x280dac: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x280DACu;
    {
        const bool branch_taken_0x280dac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DACu;
        // 0x280db0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dac) {
            ctx->pc = 0x280F4Cu;
            goto label_280f4c;
        }
    }
    ctx->pc = 0x280DB4u;
    // 0x280db4: 0x8d230700  lw          $v1, 0x700($t1)
    ctx->pc = 0x280db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1792)));
label_280db8:
    // 0x280db8: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x280db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x280dbc: 0x5443005f  bnel        $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x280DBCu;
    {
        const bool branch_taken_0x280dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x280dbc) {
            ctx->pc = 0x280DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280DBCu;
            // 0x280dc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F3Cu;
            goto label_280f3c;
        }
    }
    ctx->pc = 0x280DC4u;
    // 0x280dc4: 0x24031210  addiu       $v1, $zero, 0x1210
    ctx->pc = 0x280dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
    // 0x280dc8: 0x8f84b238  lw          $a0, -0x4DC8($gp)
    ctx->pc = 0x280dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
    // 0x280dcc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x280dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280dd0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280dd4: 0x8c820a94  lw          $v0, 0xA94($a0)
    ctx->pc = 0x280dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2708)));
    // 0x280dd8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x280dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x280ddc: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x280DDCu;
    {
        const bool branch_taken_0x280ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ddc) {
            ctx->pc = 0x280DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280DDCu;
            // 0x280de0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F3Cu;
            goto label_280f3c;
        }
    }
    ctx->pc = 0x280DE4u;
    // 0x280de4: 0x8c830a9c  lw          $v1, 0xA9C($a0)
    ctx->pc = 0x280de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2716)));
    // 0x280de8: 0x30622010  andi        $v0, $v1, 0x2010
    ctx->pc = 0x280de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8208);
    // 0x280dec: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x280DECu;
    {
        const bool branch_taken_0x280dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280dec) {
            ctx->pc = 0x280DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280DECu;
            // 0x280df0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F3Cu;
            goto label_280f3c;
        }
    }
    ctx->pc = 0x280DF4u;
    // 0x280df4: 0x50600051  beql        $v1, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x280DF4u;
    {
        const bool branch_taken_0x280df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280df4) {
            ctx->pc = 0x280DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280DF4u;
            // 0x280df8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F3Cu;
            goto label_280f3c;
        }
    }
    ctx->pc = 0x280DFCu;
    // 0x280dfc: 0x8c900bcc  lw          $s0, 0xBCC($a0)
    ctx->pc = 0x280dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3020)));
    // 0x280e00: 0xc5200098  lwc1        $f0, 0x98($t1)
    ctx->pc = 0x280e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e04: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x280e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280e08: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x280e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x280e0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x280e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x280e10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280e14: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x280e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x280e18: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x280e18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x280e1c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x280e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x280e20: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x280e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e24: 0xc521009c  lwc1        $f1, 0x9C($t1)
    ctx->pc = 0x280e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280e28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x280e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x280e2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x280e30: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x280e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x280e34: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x280e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x280e38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x280e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x280e3c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x280e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280e40: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x280e40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x280e44: 0xc52000a0  lwc1        $f0, 0xA0($t1)
    ctx->pc = 0x280e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280e48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280e4c: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x280e4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x280e50: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x280e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x280e54: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x280e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x280e58: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x280e58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x280e5c: 0x0  nop
    ctx->pc = 0x280e5cu;
    // NOP
    // 0x280e60: 0x0  nop
    ctx->pc = 0x280e60u;
    // NOP
    // 0x280e64: 0x460c0044  c1          0xC0044
    ctx->pc = 0x280e64u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[12]);
    // 0x280e68: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x280e68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280e6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280E6Cu;
    {
        const bool branch_taken_0x280e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280e6c) {
            ctx->pc = 0x280E84u;
            goto label_280e84;
        }
    }
    ctx->pc = 0x280E74u;
    // 0x280e74: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x280E74u;
    SET_GPR_U32(ctx, 31, 0x280E7Cu);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x280E74u, 0x280E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E7Cu;
label_280e7c:
    // 0x280e7c: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x280e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280e80: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x280e80u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_280e84:
    // 0x280e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280e8c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x280e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280e90: 0x0  nop
    ctx->pc = 0x280e90u;
    // NOP
    // 0x280e94: 0x0  nop
    ctx->pc = 0x280e94u;
    // NOP
    // 0x280e98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x280e98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x280e9c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x280e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280ea0: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x280ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280ea4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x280ea4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x280ea8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x280ea8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x280eac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x280eacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x280eb0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x280eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x280eb4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x280eb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x280eb8: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x280eb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x280ebc: 0xc5210704  lwc1        $f1, 0x704($t1)
    ctx->pc = 0x280ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280ec0: 0xc5220708  lwc1        $f2, 0x708($t1)
    ctx->pc = 0x280ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280ec4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x280ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x280ec8: 0xc520070c  lwc1        $f0, 0x70C($t1)
    ctx->pc = 0x280ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ecc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x280eccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x280ed0: 0xc5230718  lwc1        $f3, 0x718($t1)
    ctx->pc = 0x280ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280ed4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x280ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x280ed8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x280ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x280edc: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x280edcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280ee0: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x280ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ee4: 0x0  nop
    ctx->pc = 0x280ee4u;
    // NOP
    // 0x280ee8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x280EE8u;
    {
        const bool branch_taken_0x280ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EE8u;
        // 0x280eec: 0x25250098  addiu       $a1, $t1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ee8) {
            ctx->pc = 0x280F30u;
            goto label_280f30;
        }
    }
    ctx->pc = 0x280EF0u;
    // 0x280ef0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x280ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x280ef4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x280ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x280ef8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f04: 0x8d24031c  lw          $a0, 0x31C($t1)
    ctx->pc = 0x280f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 796)));
    // 0x280f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x280f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f10: 0xc09640e  jal         func_259038
    ctx->pc = 0x280F10u;
    SET_GPR_U32(ctx, 31, 0x280F18u);
    ctx->pc = 0x280F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280F10u;
    // 0x280f14: 0x240bfffd  addiu       $t3, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x280F10u, 0x280F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F18u;
label_280f18:
    // 0x280f18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280F18u;
    {
        const bool branch_taken_0x280f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F18u;
        // 0x280f1c: 0x8f89b234  lw          $t1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f18) {
            ctx->pc = 0x280F30u;
            goto label_280f30;
        }
    }
    ctx->pc = 0x280F20u;
    // 0x280f20: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x280f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
    // 0x280f24: 0xe5340718  swc1        $f20, 0x718($t1)
    ctx->pc = 0x280f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1816), bits); }
    // 0x280f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280F28u;
    {
        const bool branch_taken_0x280f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F28u;
        // 0x280f2c: 0xad300714  sw          $s0, 0x714($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1812), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f28) {
            ctx->pc = 0x280F34u;
            goto label_280f34;
        }
    }
    ctx->pc = 0x280F30u;
label_280f30:
    // 0x280f30: 0x8f86b59c  lw          $a2, -0x4A64($gp)
    ctx->pc = 0x280f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948252)));
label_280f34:
    // 0x280f34: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x280f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
    // 0x280f38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x280f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_280f3c:
    // 0x280f3c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x280f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x280f40: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x280f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x280f44: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x280F44u;
    {
        const bool branch_taken_0x280f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f44) {
            ctx->pc = 0x280F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F44u;
            // 0x280f48: 0x8d230700  lw          $v1, 0x700($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280db8;
        }
    }
    ctx->pc = 0x280F4Cu;
label_280f4c:
    // 0x280f4c: 0x8d220700  lw          $v0, 0x700($t1)
    ctx->pc = 0x280f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1792)));
    // 0x280f50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280f54: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x280f54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x280f58: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x280F58u;
    {
        const bool branch_taken_0x280f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F58u;
        // 0x280f5c: 0xad220700  sw          $v0, 0x700($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f58) {
            ctx->pc = 0x280F74u;
            goto label_280f74;
        }
    }
    ctx->pc = 0x280F60u;
    // 0x280f60: 0x8d220714  lw          $v0, 0x714($t1)
    ctx->pc = 0x280f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1812)));
    // 0x280f64: 0xad200700  sw          $zero, 0x700($t1)
    ctx->pc = 0x280f64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1792), GPR_U32(ctx, 0));
    // 0x280f68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280F68u;
    {
        const bool branch_taken_0x280f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F68u;
        // 0x280f6c: 0xad200710  sw          $zero, 0x710($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f68) {
            ctx->pc = 0x280F74u;
            goto label_280f74;
        }
    }
    ctx->pc = 0x280F70u;
    // 0x280f70: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x280f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
label_280f74:
    // 0x280f74: 0x124000a5  beqz        $s2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x280F74u;
    {
        const bool branch_taken_0x280f74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F74u;
        // 0x280f78: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f74) {
            ctx->pc = 0x28120Cu;
            goto label_28120c;
        }
    }
    ctx->pc = 0x280F7Cu;
    // 0x280f7c: 0x184000a3  blez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x280F7Cu;
    {
        const bool branch_taken_0x280f7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F7Cu;
        // 0x280f80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f7c) {
            ctx->pc = 0x28120Cu;
            goto label_28120c;
        }
    }
    ctx->pc = 0x280F84u;
    // 0x280f84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280f88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x280f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x280f8c: 0xc79487fc  lwc1        $f20, -0x7804($gp)
    ctx->pc = 0x280f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280f90: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x280f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280f94: 0x0  nop
    ctx->pc = 0x280f94u;
    // NOP
label_280f98:
    // 0x280f98: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x280f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280f9c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x280f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x280fa0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x280fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280fa4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x280fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x280fa8: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x280fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x280fac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280fb0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x280fb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x280fb4: 0x0  nop
    ctx->pc = 0x280fb4u;
    // NOP
    // 0x280fb8: 0x0  nop
    ctx->pc = 0x280fb8u;
    // NOP
    // 0x280fbc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x280fbcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x280fc0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x280fc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280fc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x280FC4u;
    {
        const bool branch_taken_0x280fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280fc4) {
            ctx->pc = 0x280FE4u;
            goto label_280fe4;
        }
    }
    ctx->pc = 0x280FCCu;
    // 0x280fcc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x280FCCu;
    SET_GPR_U32(ctx, 31, 0x280FD4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x280FCCu, 0x280FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FD4u;
label_280fd4:
    // 0x280fd4: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x280fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x280fd8: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x280fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280fdc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x280fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280fe0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x280fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_280fe4:
    // 0x280fe4: 0x0  nop
    ctx->pc = 0x280fe4u;
    // NOP
    // 0x280fe8: 0x0  nop
    ctx->pc = 0x280fe8u;
    // NOP
    // 0x280fec: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x280fecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x280ff0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x280ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x280ff4: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x280ff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x280ff8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x280ff8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x280ffc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x280ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x281000: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x281000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x281004: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x281004u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x281008: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x281008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28100c: 0xc5200704  lwc1        $f0, 0x704($t1)
    ctx->pc = 0x28100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281010: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x281010u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281014: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x281014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281018: 0x0  nop
    ctx->pc = 0x281018u;
    // NOP
    // 0x28101c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28101Cu;
    {
        const bool branch_taken_0x28101c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28101c) {
            ctx->pc = 0x281020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28101Cu;
            // 0x281020: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
            ctx->f[3] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281024u;
            goto label_281024;
        }
    }
    ctx->pc = 0x281024u;
label_281024:
    // 0x281024: 0xc5200708  lwc1        $f0, 0x708($t1)
    ctx->pc = 0x281024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281028: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x281028u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x28102c: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x28102cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281030: 0x0  nop
    ctx->pc = 0x281030u;
    // NOP
    // 0x281034: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x281034u;
    {
        const bool branch_taken_0x281034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281034) {
            ctx->pc = 0x281038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281034u;
            // 0x281038: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28103Cu;
            goto label_28103c;
        }
    }
    ctx->pc = 0x28103Cu;
label_28103c:
    // 0x28103c: 0xc520070c  lwc1        $f0, 0x70C($t1)
    ctx->pc = 0x28103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281040: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x281040u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x281044: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x281044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281048: 0x0  nop
    ctx->pc = 0x281048u;
    // NOP
    // 0x28104c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28104Cu;
    {
        const bool branch_taken_0x28104c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28104c) {
            ctx->pc = 0x281050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28104Cu;
            // 0x281050: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281054u;
            goto label_281054;
        }
    }
    ctx->pc = 0x281054u;
label_281054:
    // 0x281054: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x281054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281058: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x281058u;
    {
        const bool branch_taken_0x281058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281058) {
            ctx->pc = 0x28109Cu;
            goto label_28109c;
        }
    }
    ctx->pc = 0x281060u;
    // 0x281060: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x281060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281064: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x281064u;
    {
        const bool branch_taken_0x281064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281064) {
            ctx->pc = 0x28109Cu;
            goto label_28109c;
        }
    }
    ctx->pc = 0x28106Cu;
    // 0x28106c: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x28106cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x281070: 0xc7818800  lwc1        $f1, -0x7800($gp)
    ctx->pc = 0x281070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281074: 0xc7848804  lwc1        $f4, -0x77FC($gp)
    ctx->pc = 0x281074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x281078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28107c: 0x0  nop
    ctx->pc = 0x28107cu;
    // NOP
    // 0x281080: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x281080u;
    {
        const bool branch_taken_0x281080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281080u;
        // 0x281084: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281080) {
            ctx->pc = 0x281110u;
            goto label_281110;
        }
    }
    ctx->pc = 0x281088u;
    // 0x281088: 0x0  nop
    ctx->pc = 0x281088u;
    // NOP
    // 0x28108c: 0x0  nop
    ctx->pc = 0x28108cu;
    // NOP
    // 0x281090: 0x46030903  div.s       $f4, $f1, $f3
    ctx->pc = 0x281090u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[3];
    // 0x281094: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x281094u;
    {
        const bool branch_taken_0x281094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281094u;
        // 0x281098: 0xc5210704  lwc1        $f1, 0x704($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281094) {
            ctx->pc = 0x281118u;
            goto label_281118;
        }
    }
    ctx->pc = 0x28109Cu;
label_28109c:
    // 0x28109c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x28109cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2810a0: 0x0  nop
    ctx->pc = 0x2810a0u;
    // NOP
    // 0x2810a4: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2810A4u;
    {
        const bool branch_taken_0x2810a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2810a4) {
            ctx->pc = 0x2810A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2810A4u;
            // 0x2810a8: 0x46141002  mul.s       $f0, $f2, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2810ECu;
            goto label_2810ec;
        }
    }
    ctx->pc = 0x2810ACu;
    // 0x2810ac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2810acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2810b0: 0x0  nop
    ctx->pc = 0x2810b0u;
    // NOP
    // 0x2810b4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2810B4u;
    {
        const bool branch_taken_0x2810b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2810b4) {
            ctx->pc = 0x2810B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2810B4u;
            // 0x2810b8: 0x46141002  mul.s       $f0, $f2, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2810ECu;
            goto label_2810ec;
        }
    }
    ctx->pc = 0x2810BCu;
    // 0x2810bc: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x2810bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2810c0: 0xc7828808  lwc1        $f2, -0x77F8($gp)
    ctx->pc = 0x2810c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2810c4: 0xc784880c  lwc1        $f4, -0x77F4($gp)
    ctx->pc = 0x2810c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2810c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2810c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2810cc: 0x0  nop
    ctx->pc = 0x2810ccu;
    // NOP
    // 0x2810d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2810D0u;
    {
        const bool branch_taken_0x2810d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2810D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810D0u;
        // 0x2810d4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810d0) {
            ctx->pc = 0x281110u;
            goto label_281110;
        }
    }
    ctx->pc = 0x2810D8u;
    // 0x2810d8: 0x0  nop
    ctx->pc = 0x2810d8u;
    // NOP
    // 0x2810dc: 0x0  nop
    ctx->pc = 0x2810dcu;
    // NOP
    // 0x2810e0: 0x46011103  div.s       $f4, $f2, $f1
    ctx->pc = 0x2810e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[1];
    // 0x2810e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2810E4u;
    {
        const bool branch_taken_0x2810e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2810E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810E4u;
        // 0x2810e8: 0xc5210704  lwc1        $f1, 0x704($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810e4) {
            ctx->pc = 0x281118u;
            goto label_281118;
        }
    }
    ctx->pc = 0x2810ECu;
label_2810ec:
    // 0x2810ec: 0xc7818810  lwc1        $f1, -0x77F0($gp)
    ctx->pc = 0x2810ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2810f0: 0xc7848814  lwc1        $f4, -0x77EC($gp)
    ctx->pc = 0x2810f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2810f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2810f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2810f8: 0x0  nop
    ctx->pc = 0x2810f8u;
    // NOP
    // 0x2810fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2810FCu;
    {
        const bool branch_taken_0x2810fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810FCu;
        // 0x281100: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810fc) {
            ctx->pc = 0x281114u;
            goto label_281114;
        }
    }
    ctx->pc = 0x281104u;
    // 0x281104: 0x0  nop
    ctx->pc = 0x281104u;
    // NOP
    // 0x281108: 0x0  nop
    ctx->pc = 0x281108u;
    // NOP
    // 0x28110c: 0x46020903  div.s       $f4, $f1, $f2
    ctx->pc = 0x28110cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[2];
label_281110:
    // 0x281110: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x281110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281114:
    // 0x281114: 0xc5210704  lwc1        $f1, 0x704($t1)
    ctx->pc = 0x281114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281118:
    // 0x281118: 0xc5220708  lwc1        $f2, 0x708($t1)
    ctx->pc = 0x281118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28111c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28111cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281120: 0xc523070c  lwc1        $f3, 0x70C($t1)
    ctx->pc = 0x281120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281124: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x281124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x281128: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x281128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28112c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28112cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281130: 0xe5210704  swc1        $f1, 0x704($t1)
    ctx->pc = 0x281130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1796), bits); }
    // 0x281134: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x281134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281138: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x281138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28113c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28113cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x281140: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x281140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x281144: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x281144u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x281148: 0xe5220708  swc1        $f2, 0x708($t1)
    ctx->pc = 0x281148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1800), bits); }
    // 0x28114c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281150: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x281150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x281154: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x281154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x281158: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x281158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28115c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x28115Cu;
    {
        const bool branch_taken_0x28115c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28115Cu;
        // 0x281160: 0xe520070c  swc1        $f0, 0x70C($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1804), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28115c) {
            ctx->pc = 0x281184u;
            goto label_281184;
        }
    }
    ctx->pc = 0x281164u;
    // 0x281164: 0x46051032  c.eq.s      $f2, $f5
    ctx->pc = 0x281164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281168: 0x0  nop
    ctx->pc = 0x281168u;
    // NOP
    // 0x28116c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x28116Cu;
    {
        const bool branch_taken_0x28116c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28116c) {
            ctx->pc = 0x281170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28116Cu;
            // 0x281170: 0xc5200704  lwc1        $f0, 0x704($t1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x281188u;
            goto label_281188;
        }
    }
    ctx->pc = 0x281174u;
    // 0x281174: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x281174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281178: 0x0  nop
    ctx->pc = 0x281178u;
    // NOP
    // 0x28117c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x28117Cu;
    {
        const bool branch_taken_0x28117c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x281180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28117Cu;
        // 0x281180: 0x8f82b460  lw          $v0, -0x4BA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28117c) {
            ctx->pc = 0x2811FCu;
            goto label_2811fc;
        }
    }
    ctx->pc = 0x281184u;
label_281184:
    // 0x281184: 0xc5200704  lwc1        $f0, 0x704($t1)
    ctx->pc = 0x281184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281188:
    // 0x281188: 0xc5220708  lwc1        $f2, 0x708($t1)
    ctx->pc = 0x281188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28118c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28118cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x281190: 0xc521070c  lwc1        $f1, 0x70C($t1)
    ctx->pc = 0x281190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281194: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x281194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x281198: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x281198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28119c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28119cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2811a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2811a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2811a4: 0x0  nop
    ctx->pc = 0x2811a4u;
    // NOP
    // 0x2811a8: 0x0  nop
    ctx->pc = 0x2811a8u;
    // NOP
    // 0x2811ac: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2811acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x2811b0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2811b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2811b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2811B4u;
    {
        const bool branch_taken_0x2811b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2811b4) {
            ctx->pc = 0x2811C8u;
            goto label_2811c8;
        }
    }
    ctx->pc = 0x2811BCu;
    // 0x2811bc: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2811BCu;
    SET_GPR_U32(ctx, 31, 0x2811C4u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2811BCu, 0x2811C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811C4u;
label_2811c4:
    // 0x2811c4: 0x8f89b234  lw          $t1, -0x4DCC($gp)
    ctx->pc = 0x2811c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_2811c8:
    // 0x2811c8: 0x0  nop
    ctx->pc = 0x2811c8u;
    // NOP
    // 0x2811cc: 0x0  nop
    ctx->pc = 0x2811ccu;
    // NOP
    // 0x2811d0: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x2811d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x2811d4: 0xc5220704  lwc1        $f2, 0x704($t1)
    ctx->pc = 0x2811d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2811d8: 0xc5230708  lwc1        $f3, 0x708($t1)
    ctx->pc = 0x2811d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2811dc: 0xc520070c  lwc1        $f0, 0x70C($t1)
    ctx->pc = 0x2811dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2811e0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2811e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2811e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2811e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2811e8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2811e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2811ec: 0xe5220704  swc1        $f2, 0x704($t1)
    ctx->pc = 0x2811ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1796), bits); }
    // 0x2811f0: 0xe520070c  swc1        $f0, 0x70C($t1)
    ctx->pc = 0x2811f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1804), bits); }
    // 0x2811f4: 0xe5230708  swc1        $f3, 0x708($t1)
    ctx->pc = 0x2811f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1800), bits); }
    // 0x2811f8: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2811f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_2811fc:
    // 0x2811fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2811fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x281200: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x281200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x281204: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x281204u;
    {
        const bool branch_taken_0x281204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281204u;
        // 0x281208: 0xc7a50010  lwc1        $f5, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281204) {
            ctx->pc = 0x280F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280f98;
        }
    }
    ctx->pc = 0x28120Cu;
label_28120c:
    // 0x28120c: 0xc5200704  lwc1        $f0, 0x704($t1)
    ctx->pc = 0x28120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281210: 0xc5220708  lwc1        $f2, 0x708($t1)
    ctx->pc = 0x281210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281214: 0xc521070c  lwc1        $f1, 0x70C($t1)
    ctx->pc = 0x281214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x281218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28121c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x28121cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281220: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x281220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281224: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x281224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281228: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x281228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28122c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x28122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281230: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x281230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x281234: 0xe52000bc  swc1        $f0, 0xBC($t1)
    ctx->pc = 0x281234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 188), bits); }
    // 0x281238: 0xe52100c4  swc1        $f1, 0xC4($t1)
    ctx->pc = 0x281238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 196), bits); }
    // 0x28123c: 0xe52200c0  swc1        $f2, 0xC0($t1)
    ctx->pc = 0x28123cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 192), bits); }
    // 0x281240: 0x3e00008  jr          $ra
    ctx->pc = 0x281240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281240u;
        // 0x281244: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281248u;
}

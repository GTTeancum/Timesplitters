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

// Function: particleSmokeGfx
// Address: 0x29dc40 - 0x29e2c4
void particleSmokeGfx_0x29dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleSmokeGfx_0x29dc40");
#endif

    switch (ctx->pc) {
        case 0x29dcd8u: goto label_29dcd8;
        case 0x29ddacu: goto label_29ddac;
        case 0x29dfb4u: goto label_29dfb4;
        default: break;
    }

    ctx->pc = 0x29dc40u;

    // 0x29dc40: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x29dc44: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x29dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
    // 0x29dc48: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x29dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x29dc4c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x29dc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x29dc50: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x29dc50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc54: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x29dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x29dc58: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x29dc58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x29dc5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29dc5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc60: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x29dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x29dc64: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x29dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x29dc68: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x29dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x29dc6c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x29dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x29dc70: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x29dc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x29dc74: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x29dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x29dc78: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x29dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x29dc7c: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x29dc7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x29dc80: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x29dc80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x29dc84: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x29dc84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29dc88: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x29dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29dc8c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x29dc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x29dc90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29dc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29dc94: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x29dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dc98: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29dc9c: 0x0  nop
    ctx->pc = 0x29dc9cu;
    // NOP
    // 0x29dca0: 0x0  nop
    ctx->pc = 0x29dca0u;
    // NOP
    // 0x29dca4: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x29dca4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
    // 0x29dca8: 0x18800176  blez        $a0, . + 4 + (0x176 << 2)
    ctx->pc = 0x29DCA8u;
    {
        const bool branch_taken_0x29dca8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x29DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCA8u;
        // 0x29dcac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dca8) {
            ctx->pc = 0x29E284u;
            goto label_29e284;
        }
    }
    ctx->pc = 0x29DCB0u;
    // 0x29dcb0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x29dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x29dcb4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x29dcb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29dcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29dcbc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29dcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29dcc0: 0x245699f0  addiu       $s6, $v0, -0x6610
    ctx->pc = 0x29dcc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x29dcc4: 0x24775c60  addiu       $s7, $v1, 0x5C60
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x29dcc8: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x29dcc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29dccc: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x29dcccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29dcd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29dcd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcd4: 0x0  nop
    ctx->pc = 0x29dcd4u;
    // NOP
label_29dcd8:
    // 0x29dcd8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x29dcd8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29dcdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29dcdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29dce0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x29dce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x29dce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29dce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29dce8: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x29dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29dcec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x29dcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29dcf0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x29dcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x29dcf4: 0x0  nop
    ctx->pc = 0x29dcf4u;
    // NOP
    // 0x29dcf8: 0x0  nop
    ctx->pc = 0x29dcf8u;
    // NOP
    // 0x29dcfc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29dcfcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29dd00: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x29dd00u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29dd04: 0x46141836  c.le.s      $f3, $f20
    ctx->pc = 0x29dd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dd08: 0x0  nop
    ctx->pc = 0x29dd08u;
    // NOP
    // 0x29dd0c: 0x4502015a  bc1fl       . + 4 + (0x15A << 2)
    ctx->pc = 0x29DD0Cu;
    {
        const bool branch_taken_0x29dd0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dd0c) {
            ctx->pc = 0x29DD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD0Cu;
            // 0x29dd10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E278u;
            goto label_29e278;
        }
    }
    ctx->pc = 0x29DD14u;
    // 0x29dd14: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29dd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x29dd18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29dd18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29dd1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29dd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dd20: 0x0  nop
    ctx->pc = 0x29dd20u;
    // NOP
    // 0x29dd24: 0x45000153  bc1f        . + 4 + (0x153 << 2)
    ctx->pc = 0x29DD24u;
    {
        const bool branch_taken_0x29dd24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD24u;
        // 0x29dd28: 0x263003b4  addiu       $s0, $s1, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd24) {
            ctx->pc = 0x29E274u;
            goto label_29e274;
        }
    }
    ctx->pc = 0x29DD2Cu;
    // 0x29dd2c: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x29dd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dd30: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x29dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x29dd34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29dd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29dd38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29dd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29dd3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29DD3Cu;
    {
        const bool branch_taken_0x29dd3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD3Cu;
        // 0x29dd40: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd3c) {
            ctx->pc = 0x29DD4Cu;
            goto label_29dd4c;
        }
    }
    ctx->pc = 0x29DD44u;
    // 0x29dd44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29DD44u;
    {
        const bool branch_taken_0x29dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD44u;
        // 0x29dd48: 0x4614a540  add.s       $f21, $f20, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd44) {
            ctx->pc = 0x29DD60u;
            goto label_29dd60;
        }
    }
    ctx->pc = 0x29DD4Cu;
label_29dd4c:
    // 0x29dd4c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x29dd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dd50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29DD50u;
    {
        const bool branch_taken_0x29dd50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dd50) {
            ctx->pc = 0x29DD60u;
            goto label_29dd60;
        }
    }
    ctx->pc = 0x29DD58u;
    // 0x29dd58: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x29dd58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x29dd5c: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x29dd5cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29dd60:
    // 0x29dd60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29dd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29dd64: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x29dd64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dd68: 0x0  nop
    ctx->pc = 0x29dd68u;
    // NOP
    // 0x29dd6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29DD6Cu;
    {
        const bool branch_taken_0x29dd6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dd6c) {
            ctx->pc = 0x29DD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD6Cu;
            // 0x29dd70: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD74u;
            goto label_29dd74;
        }
    }
    ctx->pc = 0x29DD74u;
label_29dd74:
    // 0x29dd74: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x29dd74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x29dd78: 0xc7848d3c  lwc1        $f4, -0x72C4($gp)
    ctx->pc = 0x29dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29dd7c: 0xc62103a4  lwc1        $f1, 0x3A4($s1)
    ctx->pc = 0x29dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dd80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29dd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd84: 0xc62303a0  lwc1        $f3, 0x3A0($s1)
    ctx->pc = 0x29dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29dd88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29dd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd8c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x29dd8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x29dd90: 0xc62003a8  lwc1        $f0, 0x3A8($s1)
    ctx->pc = 0x29dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd94: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x29dd94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29dd98: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x29dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29dd9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x29dd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29dda0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29dda0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29dda4: 0xc0ad55c  jal         func_2B5570
    ctx->pc = 0x29DDA4u;
    SET_GPR_U32(ctx, 31, 0x29DDACu);
    ctx->pc = 0x29DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDA4u;
    // 0x29dda8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5570u, 0x29DDA4u, 0x29DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDACu;
label_29ddac:
    // 0x29ddac: 0xc7a8001c  lwc1        $f8, 0x1C($sp)
    ctx->pc = 0x29ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29ddb0: 0xc7af0010  lwc1        $f15, 0x10($sp)
    ctx->pc = 0x29ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29ddb4: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x29ddb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x29ddb8: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x29ddb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ddbc: 0x0  nop
    ctx->pc = 0x29ddbcu;
    // NOP
    // 0x29ddc0: 0x4502012c  bc1fl       . + 4 + (0x12C << 2)
    ctx->pc = 0x29DDC0u;
    {
        const bool branch_taken_0x29ddc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ddc0) {
            ctx->pc = 0x29DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DDC0u;
            // 0x29ddc4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E274u;
            goto label_29e274;
        }
    }
    ctx->pc = 0x29DDC8u;
    // 0x29ddc8: 0x46087836  c.le.s      $f15, $f8
    ctx->pc = 0x29ddc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ddcc: 0x0  nop
    ctx->pc = 0x29ddccu;
    // NOP
    // 0x29ddd0: 0x45000127  bc1f        . + 4 + (0x127 << 2)
    ctx->pc = 0x29DDD0u;
    {
        const bool branch_taken_0x29ddd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDD0u;
        // 0x29ddd4: 0xc7ae0014  lwc1        $f14, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddd0) {
            ctx->pc = 0x29E270u;
            goto label_29e270;
        }
    }
    ctx->pc = 0x29DDD8u;
    // 0x29ddd8: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x29ddd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dddc: 0x0  nop
    ctx->pc = 0x29dddcu;
    // NOP
    // 0x29dde0: 0x45020124  bc1fl       . + 4 + (0x124 << 2)
    ctx->pc = 0x29DDE0u;
    {
        const bool branch_taken_0x29dde0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dde0) {
            ctx->pc = 0x29DDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DDE0u;
            // 0x29dde4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E274u;
            goto label_29e274;
        }
    }
    ctx->pc = 0x29DDE8u;
    // 0x29dde8: 0x46087036  c.le.s      $f14, $f8
    ctx->pc = 0x29dde8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ddec: 0x0  nop
    ctx->pc = 0x29ddecu;
    // NOP
    // 0x29ddf0: 0x4500011f  bc1f        . + 4 + (0x11F << 2)
    ctx->pc = 0x29DDF0u;
    {
        const bool branch_taken_0x29ddf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDF0u;
        // 0x29ddf4: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddf0) {
            ctx->pc = 0x29E270u;
            goto label_29e270;
        }
    }
    ctx->pc = 0x29DDF8u;
    // 0x29ddf8: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x29ddf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ddfc: 0x0  nop
    ctx->pc = 0x29ddfcu;
    // NOP
    // 0x29de00: 0x4502011c  bc1fl       . + 4 + (0x11C << 2)
    ctx->pc = 0x29DE00u;
    {
        const bool branch_taken_0x29de00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29de00) {
            ctx->pc = 0x29DE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DE00u;
            // 0x29de04: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E274u;
            goto label_29e274;
        }
    }
    ctx->pc = 0x29DE08u;
    // 0x29de08: 0x46086836  c.le.s      $f13, $f8
    ctx->pc = 0x29de08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29de0c: 0x0  nop
    ctx->pc = 0x29de0cu;
    // NOP
    // 0x29de10: 0x45000117  bc1f        . + 4 + (0x117 << 2)
    ctx->pc = 0x29DE10u;
    {
        const bool branch_taken_0x29de10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE10u;
        // 0x29de14: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de10) {
            ctx->pc = 0x29E270u;
            goto label_29e270;
        }
    }
    ctx->pc = 0x29DE18u;
    // 0x29de18: 0xc7838d40  lwc1        $f3, -0x72C0($gp)
    ctx->pc = 0x29de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29de1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de20: 0xc6c70010  lwc1        $f7, 0x10($s6)
    ctx->pc = 0x29de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29de24: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x29de24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x29de28: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x29de28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x29de2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29de2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29de30: 0xc6c90008  lwc1        $f9, 0x8($s6)
    ctx->pc = 0x29de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x29de34: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x29de34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x29de38: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x29de38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29de3c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x29de3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x29de40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29de40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29de44: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x29de44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x29de48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29de48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29de4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29de4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29de50: 0xc7858d44  lwc1        $f5, -0x72BC($gp)
    ctx->pc = 0x29de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29de54: 0xc6c6001c  lwc1        $f6, 0x1C($s6)
    ctx->pc = 0x29de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x29de58: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x29de58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x29de5c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x29de5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29de60: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x29de64: 0x0  nop
    ctx->pc = 0x29de64u;
    // NOP
    // 0x29de68: 0x0  nop
    ctx->pc = 0x29de68u;
    // NOP
    // 0x29de6c: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x29de6cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[13];
    // 0x29de70: 0xc78a8d48  lwc1        $f10, -0x72B8($gp)
    ctx->pc = 0x29de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29de74: 0x4602a0c0  add.s       $f3, $f20, $f2
    ctx->pc = 0x29de74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x29de78: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29de78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29de7c: 0x0  nop
    ctx->pc = 0x29de7cu;
    // NOP
    // 0x29de80: 0x0  nop
    ctx->pc = 0x29de80u;
    // NOP
    // 0x29de84: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x29de84u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x29de88: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x29de88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x29de8c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x29de8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x29de90: 0x0  nop
    ctx->pc = 0x29de90u;
    // NOP
    // 0x29de94: 0x0  nop
    ctx->pc = 0x29de94u;
    // NOP
    // 0x29de98: 0x46081083  div.s       $f2, $f2, $f8
    ctx->pc = 0x29de98u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[8];
    // 0x29de9c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29de9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29dea0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29dea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29dea4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x29dea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29dea8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x29dea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x29deac: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x29deacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x29deb0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x29deb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x29deb4: 0x460baac2  mul.s       $f11, $f21, $f11
    ctx->pc = 0x29deb4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[21], ctx->f[11]);
    // 0x29deb8: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x29deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x29debc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x29debcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x29dec0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x29dec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x29dec4: 0x46000964  .word       0x46000964                   # cvt.w.s     $f5, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29dec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x29dec8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x29dec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29decc: 0x46027842  mul.s       $f1, $f15, $f2
    ctx->pc = 0x29deccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x29ded0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x29ded0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x29ded4: 0x460268c2  mul.s       $f3, $f13, $f2
    ctx->pc = 0x29ded4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x29ded8: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x29ded8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x29dedc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29dedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29dee0: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29dee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x29dee4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x29dee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29dee8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x29dee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29deec: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x29deecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x29def0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x29def0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29def4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x29def4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29def8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x29def8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x29defc: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x29defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x29df00: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x29df00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x29df04: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x29df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x29df08: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x29df08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x29df0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29df10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29df10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29df14: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x29df14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x29df18: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x29df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x29df1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29df20: 0x46074a40  add.s       $f9, $f9, $f7
    ctx->pc = 0x29df20u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[7]);
    // 0x29df24: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29df28: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x29df28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x29df2c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x29df2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x29df30: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x29df30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x29df34: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x29df34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29df38: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x29df38u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x29df3c: 0x46160282  mul.s       $f10, $f0, $f22
    ctx->pc = 0x29df3cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x29df40: 0x46004841  sub.s       $f1, $f9, $f0
    ctx->pc = 0x29df40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x29df44: 0x46162882  mul.s       $f2, $f5, $f22
    ctx->pc = 0x29df44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x29df48: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x29df48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29df4c: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x29df4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x29df50: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x29df50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x29df54: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x29df54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29df58: 0x46023101  sub.s       $f4, $f6, $f2
    ctx->pc = 0x29df58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x29df5c: 0x460549c1  sub.s       $f7, $f9, $f5
    ctx->pc = 0x29df5cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x29df60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x29df60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29df64: 0x460a3200  add.s       $f8, $f6, $f10
    ctx->pc = 0x29df64u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x29df68: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x29df68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x29df6c: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x29df6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29df70: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x29df70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x29df74: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x29df74u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29df78: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x29df78u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x29df7c: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x29df7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29df80: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x29df80u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x29df84: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x29df84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29df88: 0x46005824  .word       0x46005824                   # cvt.w.s     $f0, $f11 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29df88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[11]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29df8c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x29df8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x29df90: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x29df90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29df94: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x29df94u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29df98: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x29df98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29df9c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x29df9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29dfa0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x29dfa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29dfa4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x29dfa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29dfa8: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x29dfa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29dfac: 0xc0807de  jal         func_201F78
    ctx->pc = 0x29DFACu;
    SET_GPR_U32(ctx, 31, 0x29DFB4u);
    ctx->pc = 0x29DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFACu;
    // 0x29dfb0: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F78u, 0x29DFACu, 0x29DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFB4u;
label_29dfb4:
    // 0x29dfb4: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29dfb8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x29dfbc: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x29dfc0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x29dfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29dfc4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x29dfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x29dfc8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29dfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29dfcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29dfd0: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x29dfd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x29dfd4: 0x8f8993a0  lw          $t1, -0x6C60($gp)
    ctx->pc = 0x29dfd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x29dfd8: 0x3c0390ae  lui         $v1, 0x90AE
    ctx->pc = 0x29dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37038 << 16));
    // 0x29dfdc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x29dfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x29dfe0: 0x3c04eeee  lui         $a0, 0xEEEE
    ctx->pc = 0x29dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61166 << 16));
    // 0x29dfe4: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x29dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x29dfe8: 0x3484eeee  ori         $a0, $a0, 0xEEEE
    ctx->pc = 0x29dfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61166);
    // 0x29dfec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29dff0: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x29dff0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x29dff4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29dff8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x29dffc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x29dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e000: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e004: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29e004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29e008: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29e008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e00c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e010: 0xb08025  or          $s0, $a1, $s0
    ctx->pc = 0x29e010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x29e014: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e018: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x29e018u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
    // 0x29e01c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e020: 0x252b0010  addiu       $t3, $t1, 0x10
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x29e024: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x29e024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e028: 0x240c0800  addiu       $t4, $zero, 0x800
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e02c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e030: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e034: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29e038: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x29e038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x29e03c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e040: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x29e044: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x29e044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x29e048: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x29e048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x29e04c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e050: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e054: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29e054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e058: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29e058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29e05c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29e060: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e064: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x29e064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x29e068: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x29e068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x29e06c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e070: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e074: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e078: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e07c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e080: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e084: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x29e084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29e088: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e08c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x29e08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29e090: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e094: 0xaf8b93a0  sw          $t3, -0x6C60($gp)
    ctx->pc = 0x29e094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939552), GPR_U32(ctx, 11));
    // 0x29e098: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e09c: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x29e09cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
    // 0x29e0a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e0a4: 0x34e707fc  ori         $a3, $a3, 0x7FC
    ctx->pc = 0x29e0a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2044);
    // 0x29e0a8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e0ac: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x29e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x29e0b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e0b4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x29e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e0b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e0bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e0c0: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e0c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29e0c4: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x29e0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e0c8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x29e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e0cc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29e0d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e0d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e0d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29e0d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e0d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e0dc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e0dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e0e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e0e4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e0e8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x29e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e0ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e0f0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x29e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x29e0f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e0f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e0fc: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e100: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e104: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e108: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e10c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e110: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x29e110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x29e114: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e118: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e11c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e120: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e124: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x29e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29e128: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e12c: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x29e12cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e130: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x29e130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x29e134: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x29e134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x29e138: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e13c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e140: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e144: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e148: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e14c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e14cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e150: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29e150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e154: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e158: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e15c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x29e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x29e160: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e164: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29e168: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29e168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e16c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x29e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e170: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e174: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e178: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e17c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29e17cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e180: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x29e180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x29e184: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e188: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e18c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e190: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e194: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e198: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e19c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e1a0: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x29e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x29e1a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e1a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e1ac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e1b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e1b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e1b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e1bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e1c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e1c4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29e1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e1c8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x29e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e1cc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x29e1d0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29e1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e1d4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x29e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e1d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e1dc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x29e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x29e1e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e1e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e1e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x29e1e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e1e8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29e1ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29e1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e1f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e1f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e1f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e1fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x29e200: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e204: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e208: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29e208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x29e20c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x29e210: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e214: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x29e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x29e218: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e21c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e220: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e224: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x29e224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x29e228: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x29e228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x29e22c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e230: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e234: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e238: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e23c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29e240: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e244: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e248: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29e248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29e24c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e250: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x29e250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x29e254: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e258: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29e258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29e25c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e260: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x29e260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x29e264: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e268: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x29e268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x29e26c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29e270:
    // 0x29e270: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29e274:
    // 0x29e274: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29e274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29e278:
    // 0x29e278: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x29e278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e27c: 0x1440fe96  bnez        $v0, . + 4 + (-0x16A << 2)
    ctx->pc = 0x29E27Cu;
    {
        const bool branch_taken_0x29e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E27Cu;
        // 0x29e280: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e27c) {
            ctx->pc = 0x29DCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dcd8;
        }
    }
    ctx->pc = 0x29E284u;
label_29e284:
    // 0x29e284: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x29e284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29e288: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x29e288u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29e28c: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x29e28cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29e290: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x29e290u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29e294: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x29e294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29e298: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x29e298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29e29c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x29e29cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e2a0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x29e2a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e2a4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x29e2a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e2a8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e2ac: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x29e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29e2b0: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x29e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29e2b4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x29e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29e2b8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x29e2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29e2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2BCu;
        // 0x29e2c0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2C4u;
}

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

// Function: mmSetLightFromRGB
// Address: 0x246318 - 0x2464f8
void mmSetLightFromRGB_0x246318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmSetLightFromRGB_0x246318");
#endif

    ctx->pc = 0x246318u;

    // 0x246318: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x246318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x24631c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x24631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x246320: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246320u;
    {
        const bool branch_taken_0x246320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x246320) {
            ctx->pc = 0x246324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246320u;
            // 0x246324: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246334u;
            goto label_246334;
        }
    }
    ctx->pc = 0x246328u;
    // 0x246328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x246328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24632c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24632Cu;
    {
        const bool branch_taken_0x24632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24632Cu;
        // 0x246330: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24632c) {
            ctx->pc = 0x246340u;
            goto label_246340;
        }
    }
    ctx->pc = 0x246334u;
label_246334:
    // 0x246334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x246334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x246338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24633c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24633cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_246340:
    // 0x246340: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x246340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x246344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x246344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246348: 0x413c2  srl         $v0, $a0, 15
    ctx->pc = 0x246348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 15));
    // 0x24634c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x24634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x246350: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246350u;
    {
        const bool branch_taken_0x246350 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246350u;
        // 0x246354: 0x46000942  mul.s       $f5, $f1, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246350) {
            ctx->pc = 0x246368u;
            goto label_246368;
        }
    }
    ctx->pc = 0x246358u;
    // 0x246358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x246358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24635c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24635cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x246360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246360u;
    {
        const bool branch_taken_0x246360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246360u;
        // 0x246364: 0x411c2  srl         $v0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246360) {
            ctx->pc = 0x246384u;
            goto label_246384;
        }
    }
    ctx->pc = 0x246368u;
label_246368:
    // 0x246368: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x246368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24636c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24636cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246370: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x246370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x246374: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x246374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x246378: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x246378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x24637c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24637cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246380: 0x411c2  srl         $v0, $a0, 7
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_246384:
    // 0x246384: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x246384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x246388: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246388u;
    {
        const bool branch_taken_0x246388 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246388u;
        // 0x24638c: 0x46000902  mul.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246388) {
            ctx->pc = 0x24639Cu;
            goto label_24639c;
        }
    }
    ctx->pc = 0x246390u;
    // 0x246390: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x246390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246394: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246394u;
    {
        const bool branch_taken_0x246394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246394u;
        // 0x246398: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246394) {
            ctx->pc = 0x2463ACu;
            goto label_2463ac;
        }
    }
    ctx->pc = 0x24639Cu;
label_24639c:
    // 0x24639c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x24639cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2463a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2463a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2463a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2463a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2463a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2463a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2463ac:
    // 0x2463ac: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2463acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2463b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2463b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2463b4: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x2463b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2463b8: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x2463b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x2463bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2463BCu;
    {
        const bool branch_taken_0x2463bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2463C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463BCu;
        // 0x2463c0: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463bc) {
            ctx->pc = 0x2463C8u;
            goto label_2463c8;
        }
    }
    ctx->pc = 0x2463C4u;
    // 0x2463c4: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x2463c4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
label_2463c8:
    // 0x2463c8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2463c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2463cc: 0x0  nop
    ctx->pc = 0x2463ccu;
    // NOP
    // 0x2463d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2463D0u;
    {
        const bool branch_taken_0x2463d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2463D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D0u;
        // 0x2463d4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463d0) {
            ctx->pc = 0x2463DCu;
            goto label_2463dc;
        }
    }
    ctx->pc = 0x2463D8u;
    // 0x2463d8: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x2463d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_2463dc:
    // 0x2463dc: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x2463dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2463e0: 0x0  nop
    ctx->pc = 0x2463e0u;
    // NOP
    // 0x2463e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2463E4u;
    {
        const bool branch_taken_0x2463e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2463E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463E4u;
        // 0x2463e8: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463e4) {
            ctx->pc = 0x2463F0u;
            goto label_2463f0;
        }
    }
    ctx->pc = 0x2463ECu;
    // 0x2463ec: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x2463ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_2463f0:
    // 0x2463f0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2463f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2463f4: 0x0  nop
    ctx->pc = 0x2463f4u;
    // NOP
    // 0x2463f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2463F8u;
    {
        const bool branch_taken_0x2463f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2463FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463F8u;
        // 0x2463fc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463f8) {
            ctx->pc = 0x246404u;
            goto label_246404;
        }
    }
    ctx->pc = 0x246400u;
    // 0x246400: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x246400u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_246404:
    // 0x246404: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246408: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x246408u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24640c: 0x0  nop
    ctx->pc = 0x24640cu;
    // NOP
    // 0x246410: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x246410u;
    {
        const bool branch_taken_0x246410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x246414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246410u;
        // 0x246414: 0xe781a204  swc1        $f1, -0x5DFC($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246410) {
            ctx->pc = 0x246428u;
            goto label_246428;
        }
    }
    ctx->pc = 0x246418u;
    // 0x246418: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x246418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x24641c: 0x0  nop
    ctx->pc = 0x24641cu;
    // NOP
    // 0x246420: 0x0  nop
    ctx->pc = 0x246420u;
    // NOP
    // 0x246424: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x246424u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_246428:
    // 0x246428: 0xe780a200  swc1        $f0, -0x5E00($gp)
    ctx->pc = 0x246428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943232), bits); }
    // 0x24642c: 0xc780a200  lwc1        $f0, -0x5E00($gp)
    ctx->pc = 0x24642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246430: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x246430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x246434: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x246434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246438: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x246438u;
    {
        const bool branch_taken_0x246438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246438) {
            ctx->pc = 0x246448u;
            goto label_246448;
        }
    }
    ctx->pc = 0x246440u;
    // 0x246440: 0x3e00008  jr          $ra
    ctx->pc = 0x246440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246440u;
        // 0x246444: 0xe786a1fc  swc1        $f6, -0x5E04($gp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943228), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246448u;
label_246448:
    // 0x246448: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x246448u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24644c: 0x0  nop
    ctx->pc = 0x24644cu;
    // NOP
    // 0x246450: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x246450u;
    {
        const bool branch_taken_0x246450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246450u;
        // 0x246454: 0x46020881  sub.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246450) {
            ctx->pc = 0x246470u;
            goto label_246470;
        }
    }
    ctx->pc = 0x246458u;
    // 0x246458: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x246458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x24645c: 0x0  nop
    ctx->pc = 0x24645cu;
    // NOP
    // 0x246460: 0x0  nop
    ctx->pc = 0x246460u;
    // NOP
    // 0x246464: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x246464u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x246468: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x246468u;
    {
        const bool branch_taken_0x246468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246468u;
        // 0x24646c: 0xe780a1fc  swc1        $f0, -0x5E04($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246468) {
            ctx->pc = 0x2464BCu;
            goto label_2464bc;
        }
    }
    ctx->pc = 0x246470u;
label_246470:
    // 0x246470: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x246470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246474: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x246474u;
    {
        const bool branch_taken_0x246474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246474) {
            ctx->pc = 0x24648Cu;
            goto label_24648c;
        }
    }
    ctx->pc = 0x24647Cu;
    // 0x24647c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24647cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x246480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x246480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246484u;
    {
        const bool branch_taken_0x246484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246484u;
        // 0x246488: 0x46051801  sub.s       $f0, $f3, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246484) {
            ctx->pc = 0x2464A8u;
            goto label_2464a8;
        }
    }
    ctx->pc = 0x24648Cu;
label_24648c:
    // 0x24648c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x24648cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246490: 0x0  nop
    ctx->pc = 0x246490u;
    // NOP
    // 0x246494: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x246494u;
    {
        const bool branch_taken_0x246494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246494u;
        // 0x246498: 0xc780a1fc  lwc1        $f0, -0x5E04($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246494) {
            ctx->pc = 0x2464C0u;
            goto label_2464c0;
        }
    }
    ctx->pc = 0x24649Cu;
    // 0x24649c: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x24649cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2464a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2464a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2464a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2464a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2464a8:
    // 0x2464a8: 0x0  nop
    ctx->pc = 0x2464a8u;
    // NOP
    // 0x2464ac: 0x0  nop
    ctx->pc = 0x2464acu;
    // NOP
    // 0x2464b0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2464b0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2464b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2464b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2464b8: 0xe780a1fc  swc1        $f0, -0x5E04($gp)
    ctx->pc = 0x2464b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943228), bits); }
label_2464bc:
    // 0x2464bc: 0xc780a1fc  lwc1        $f0, -0x5E04($gp)
    ctx->pc = 0x2464bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2464c0:
    // 0x2464c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2464c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2464c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2464c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2464c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2464c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2464cc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2464ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2464d0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2464d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2464d4: 0x0  nop
    ctx->pc = 0x2464d4u;
    // NOP
    // 0x2464d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2464D8u;
    {
        const bool branch_taken_0x2464d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2464DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464D8u;
        // 0x2464dc: 0xe781a1fc  swc1        $f1, -0x5E04($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464d8) {
            ctx->pc = 0x2464F0u;
            goto label_2464f0;
        }
    }
    ctx->pc = 0x2464E0u;
    // 0x2464e0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2464e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2464e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2464e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2464e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2464e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2464ec: 0xe780a1fc  swc1        $f0, -0x5E04($gp)
    ctx->pc = 0x2464ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943228), bits); }
label_2464f0:
    // 0x2464f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2464F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2464F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2464F8u;
}

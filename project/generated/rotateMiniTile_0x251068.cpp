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

// Function: rotateMiniTile
// Address: 0x251068 - 0x2512ac
void rotateMiniTile_0x251068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rotateMiniTile_0x251068");
#endif

    switch (ctx->pc) {
        case 0x25107cu: goto label_25107c;
        case 0x251170u: goto label_251170;
        case 0x2511d0u: goto label_2511d0;
        case 0x251208u: goto label_251208;
        case 0x251230u: goto label_251230;
        case 0x251254u: goto label_251254;
        default: break;
    }

    ctx->pc = 0x251068u;

    // 0x251068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25106c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251074: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x251074u;
    SET_GPR_U32(ctx, 31, 0x25107Cu);
    ctx->pc = 0x251078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251074u;
    // 0x251078: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x251074u, 0x25107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25107Cu;
label_25107c:
    // 0x25107c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25107cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x251080: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x251080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x251084: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x251084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x251088: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x251088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25108c: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x25108cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x251090: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x251090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251094: 0x0  nop
    ctx->pc = 0x251094u;
    // NOP
    // 0x251098: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x251098u;
    {
        const bool branch_taken_0x251098 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251098u;
        // 0x25109c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251098) {
            ctx->pc = 0x2510A4u;
            goto label_2510a4;
        }
    }
    ctx->pc = 0x2510A0u;
    // 0x2510a0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2510a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_2510a4:
    // 0x2510a4: 0x8f82a208  lw          $v0, -0x5DF8($gp)
    ctx->pc = 0x2510a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943240)));
    // 0x2510a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2510a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2510ac: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2510ACu;
    {
        const bool branch_taken_0x2510ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510ac) {
            ctx->pc = 0x2510B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510ACu;
            // 0x2510b0: 0xc780a218  lwc1        $f0, -0x5DE8($gp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25115Cu;
            goto label_25115c;
        }
    }
    ctx->pc = 0x2510B4u;
    // 0x2510b4: 0xc7858278  lwc1        $f5, -0x7D88($gp)
    ctx->pc = 0x2510b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2510b8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2510b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2510bc: 0x0  nop
    ctx->pc = 0x2510bcu;
    // NOP
    // 0x2510c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2510C0u;
    {
        const bool branch_taken_0x2510c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2510C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510C0u;
        // 0x2510c4: 0xc782b88c  lwc1        $f2, -0x4774($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510c0) {
            ctx->pc = 0x2510F0u;
            goto label_2510f0;
        }
    }
    ctx->pc = 0x2510C8u;
    // 0x2510c8: 0xc780827c  lwc1        $f0, -0x7D84($gp)
    ctx->pc = 0x2510c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2510cc: 0xc7818280  lwc1        $f1, -0x7D80($gp)
    ctx->pc = 0x2510ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2510d0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2510d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2510d4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2510d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2510d8: 0x0  nop
    ctx->pc = 0x2510d8u;
    // NOP
    // 0x2510dc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2510DCu;
    {
        const bool branch_taken_0x2510dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2510E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510DCu;
        // 0x2510e0: 0xe782b88c  swc1        $f2, -0x4774($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510dc) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x2510E4u;
    // 0x2510e4: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x2510e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x2510e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2510E8u;
    {
        const bool branch_taken_0x2510e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510E8u;
        // 0x2510ec: 0xe782b88c  swc1        $f2, -0x4774($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510e8) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x2510F0u;
label_2510f0:
    // 0x2510f0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2510f0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2510f4: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2510f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2510f8: 0x0  nop
    ctx->pc = 0x2510f8u;
    // NOP
    // 0x2510fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2510FCu;
    {
        const bool branch_taken_0x2510fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510FCu;
        // 0x251100: 0xe782b88c  swc1        $f2, -0x4774($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510fc) {
            ctx->pc = 0x251108u;
            goto label_251108;
        }
    }
    ctx->pc = 0x251104u;
    // 0x251104: 0xe784b88c  swc1        $f4, -0x4774($gp)
    ctx->pc = 0x251104u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), bits); }
label_251108:
    // 0x251108: 0xc782b88c  lwc1        $f2, -0x4774($gp)
    ctx->pc = 0x251108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25110c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x25110cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251110: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251110u;
    {
        const bool branch_taken_0x251110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251110) {
            ctx->pc = 0x251120u;
            goto label_251120;
        }
    }
    ctx->pc = 0x251118u;
    // 0x251118: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x251118u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x25111c: 0xe783b88c  swc1        $f3, -0x4774($gp)
    ctx->pc = 0x25111cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949004), bits); }
label_251120:
    // 0x251120: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x251120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251124: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x251124u;
    {
        const bool branch_taken_0x251124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251124) {
            ctx->pc = 0x25113Cu;
            goto label_25113c;
        }
    }
    ctx->pc = 0x25112Cu;
    // 0x25112c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x251130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251134u;
    {
        const bool branch_taken_0x251134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251134u;
        // 0x251138: 0xe780b890  swc1        $f0, -0x4770($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949008), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251134) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x25113Cu;
label_25113c:
    // 0x25113c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25113cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251144: 0xe780b890  swc1        $f0, -0x4770($gp)
    ctx->pc = 0x251144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949008), bits); }
label_251148:
    // 0x251148: 0xc780b890  lwc1        $f0, -0x4770($gp)
    ctx->pc = 0x251148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25114c: 0xc781a218  lwc1        $f1, -0x5DE8($gp)
    ctx->pc = 0x25114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251150: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x251150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x251154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251154u;
    {
        const bool branch_taken_0x251154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251154u;
        // 0x251158: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251154) {
            ctx->pc = 0x251160u;
            goto label_251160;
        }
    }
    ctx->pc = 0x25115Cu;
label_25115c:
    // 0x25115c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25115cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_251160:
    // 0x251160: 0xe780a218  swc1        $f0, -0x5DE8($gp)
    ctx->pc = 0x251160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943256), bits); }
    // 0x251164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x251164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251168: 0xc080eee  jal         func_203BB8
    ctx->pc = 0x251168u;
    SET_GPR_U32(ctx, 31, 0x251170u);
    ctx->pc = 0x25116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251168u;
    // 0x25116c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BB8u, 0x251168u, 0x251170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251170u;
label_251170:
    // 0x251170: 0xc781a21c  lwc1        $f1, -0x5DE4($gp)
    ctx->pc = 0x251170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251174: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x251174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x251178: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25117c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25117cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251180: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x251180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251184: 0x0  nop
    ctx->pc = 0x251184u;
    // NOP
    // 0x251188: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251188u;
    {
        const bool branch_taken_0x251188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251188u;
        // 0x25118c: 0xe781a21c  swc1        $f1, -0x5DE4($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251188) {
            ctx->pc = 0x251198u;
            goto label_251198;
        }
    }
    ctx->pc = 0x251190u;
    // 0x251190: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x251190u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x251194: 0xe781a21c  swc1        $f1, -0x5DE4($gp)
    ctx->pc = 0x251194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
label_251198:
    // 0x251198: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x251198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
    // 0x25119c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25119cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2511a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2511a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2511a4: 0x0  nop
    ctx->pc = 0x2511a4u;
    // NOP
    // 0x2511a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2511A8u;
    {
        const bool branch_taken_0x2511a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2511a8) {
            ctx->pc = 0x2511ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2511A8u;
            // 0x2511ac: 0xe780a21c  swc1        $f0, -0x5DE4($gp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943260), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2511B0u;
            goto label_2511b0;
        }
    }
    ctx->pc = 0x2511B0u;
label_2511b0:
    // 0x2511b0: 0xc780a218  lwc1        $f0, -0x5DE8($gp)
    ctx->pc = 0x2511b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2511b4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2511b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2511b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2511b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2511bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2511bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2511c0: 0x0  nop
    ctx->pc = 0x2511c0u;
    // NOP
    // 0x2511c4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2511C4u;
    {
        const bool branch_taken_0x2511c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2511C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511C4u;
        // 0x2511c8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511c4) {
            ctx->pc = 0x2511F0u;
            goto label_2511f0;
        }
    }
    ctx->pc = 0x2511CCu;
    // 0x2511cc: 0x0  nop
    ctx->pc = 0x2511ccu;
    // NOP
label_2511d0:
    // 0x2511d0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2511d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2511d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2511d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2511d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2511d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2511dc: 0x0  nop
    ctx->pc = 0x2511dcu;
    // NOP
    // 0x2511e0: 0x0  nop
    ctx->pc = 0x2511e0u;
    // NOP
    // 0x2511e4: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2511E4u;
    {
        const bool branch_taken_0x2511e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2511e4) {
            ctx->pc = 0x2511D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2511d0;
        }
    }
    ctx->pc = 0x2511ECu;
    // 0x2511ec: 0xe780a218  swc1        $f0, -0x5DE8($gp)
    ctx->pc = 0x2511ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943256), bits); }
label_2511f0:
    // 0x2511f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2511f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2511f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2511f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2511f8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2511F8u;
    {
        const bool branch_taken_0x2511f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2511f8) {
            ctx->pc = 0x251228u;
            goto label_251228;
        }
    }
    ctx->pc = 0x251200u;
    // 0x251200: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x251200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x251204: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x251204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_251208:
    // 0x251208: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x251208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25120c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x25120cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251210: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x251210u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x251214: 0x0  nop
    ctx->pc = 0x251214u;
    // NOP
    // 0x251218: 0x0  nop
    ctx->pc = 0x251218u;
    // NOP
    // 0x25121c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x25121Cu;
    {
        const bool branch_taken_0x25121c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25121c) {
            ctx->pc = 0x251208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251208;
        }
    }
    ctx->pc = 0x251224u;
    // 0x251224: 0xe782a218  swc1        $f2, -0x5DE8($gp)
    ctx->pc = 0x251224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943256), bits); }
label_251228:
    // 0x251228: 0xc080e18  jal         func_203860
    ctx->pc = 0x251228u;
    SET_GPR_U32(ctx, 31, 0x251230u);
    ctx->pc = 0x25122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251228u;
    // 0x25122c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x251228u, 0x251230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251230u;
label_251230:
    // 0x251230: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x251230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x251234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251234u;
    {
        const bool branch_taken_0x251234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251234u;
        // 0x251238: 0xc781a214  lwc1        $f1, -0x5DEC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251234) {
            ctx->pc = 0x25124Cu;
            goto label_25124c;
        }
    }
    ctx->pc = 0x25123Cu;
    // 0x25123c: 0xc7808284  lwc1        $f0, -0x7D7C($gp)
    ctx->pc = 0x25123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251240: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x251240u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251244: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x251244u;
    {
        const bool branch_taken_0x251244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251244u;
        // 0x251248: 0xe781a214  swc1        $f1, -0x5DEC($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251244) {
            ctx->pc = 0x25126Cu;
            goto label_25126c;
        }
    }
    ctx->pc = 0x25124Cu;
label_25124c:
    // 0x25124c: 0xc080e18  jal         func_203860
    ctx->pc = 0x25124Cu;
    SET_GPR_U32(ctx, 31, 0x251254u);
    ctx->pc = 0x251250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25124Cu;
    // 0x251250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203860u, 0x25124Cu, 0x251254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251254u;
label_251254:
    // 0x251254: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x251254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x251258: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251258u;
    {
        const bool branch_taken_0x251258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251258u;
        // 0x25125c: 0xc781a214  lwc1        $f1, -0x5DEC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251258) {
            ctx->pc = 0x25126Cu;
            goto label_25126c;
        }
    }
    ctx->pc = 0x251260u;
    // 0x251260: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x251260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251264: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251264u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251268: 0xe781a214  swc1        $f1, -0x5DEC($gp)
    ctx->pc = 0x251268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
label_25126c:
    // 0x25126c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25126cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251278: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251278u;
    {
        const bool branch_taken_0x251278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251278) {
            ctx->pc = 0x251288u;
            goto label_251288;
        }
    }
    ctx->pc = 0x251280u;
    // 0x251280: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251280u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251284: 0xe780a214  swc1        $f0, -0x5DEC($gp)
    ctx->pc = 0x251284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
label_251288:
    // 0x251288: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x251288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x25128c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25128cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251294: 0x0  nop
    ctx->pc = 0x251294u;
    // NOP
    // 0x251298: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x251298u;
    {
        const bool branch_taken_0x251298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251298) {
            ctx->pc = 0x25129Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251298u;
            // 0x25129c: 0xe780a214  swc1        $f0, -0x5DEC($gp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943252), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2512A0u;
            goto label_2512a0;
        }
    }
    ctx->pc = 0x2512A0u;
label_2512a0:
    // 0x2512a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2512a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2512a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2512A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2512A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512A4u;
        // 0x2512a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2512A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2512ACu;
}

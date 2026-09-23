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

// Function: updateProximityProps
// Address: 0x289638 - 0x289c6c
void updateProximityProps_0x289638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateProximityProps_0x289638");
#endif

    switch (ctx->pc) {
        case 0x2896d8u: goto label_2896d8;
        case 0x289710u: goto label_289710;
        case 0x289868u: goto label_289868;
        case 0x2898f8u: goto label_2898f8;
        case 0x289938u: goto label_289938;
        case 0x28996cu: goto label_28996c;
        case 0x289974u: goto label_289974;
        case 0x289998u: goto label_289998;
        case 0x2899c0u: goto label_2899c0;
        case 0x2899d0u: goto label_2899d0;
        case 0x2899f4u: goto label_2899f4;
        case 0x2899fcu: goto label_2899fc;
        case 0x289aacu: goto label_289aac;
        case 0x289ad0u: goto label_289ad0;
        case 0x289b34u: goto label_289b34;
        case 0x289b80u: goto label_289b80;
        default: break;
    }

    ctx->pc = 0x289638u;

    // 0x289638: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x289638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x28963c: 0xc78089cc  lwc1        $f0, -0x7634($gp)
    ctx->pc = 0x28963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289640: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x289640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x289644: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x289644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x289648: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x289648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x28964c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28964cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289650: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x289650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x289654: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x289654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x289658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28965c: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x28965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
    // 0x289660: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x289660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289664: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x289664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x289668: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x289668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x28966c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x28966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x289670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289674: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x289674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x289678: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x289678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28967c: 0xc44f0048  lwc1        $f15, 0x48($v0)
    ctx->pc = 0x28967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x289680: 0xc450004c  lwc1        $f16, 0x4C($v0)
    ctx->pc = 0x289680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x289684: 0xc4510058  lwc1        $f17, 0x58($v0)
    ctx->pc = 0x289684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x289688: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x289688u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x28968c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289690: 0x46008402  mul.s       $f16, $f16, $f0
    ctx->pc = 0x289690u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x289694: 0x46008c42  mul.s       $f17, $f17, $f0
    ctx->pc = 0x289694u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x289698: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x289698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28969c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2896a0: 0x0  nop
    ctx->pc = 0x2896a0u;
    // NOP
    // 0x2896a4: 0x0  nop
    ctx->pc = 0x2896a4u;
    // NOP
    // 0x2896a8: 0x46017bc3  div.s       $f15, $f15, $f1
    ctx->pc = 0x2896a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[1];
    // 0x2896ac: 0x0  nop
    ctx->pc = 0x2896acu;
    // NOP
    // 0x2896b0: 0x0  nop
    ctx->pc = 0x2896b0u;
    // NOP
    // 0x2896b4: 0x46018403  div.s       $f16, $f16, $f1
    ctx->pc = 0x2896b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[1];
    // 0x2896b8: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x2896b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2896bc: 0x0  nop
    ctx->pc = 0x2896bcu;
    // NOP
    // 0x2896c0: 0x0  nop
    ctx->pc = 0x2896c0u;
    // NOP
    // 0x2896c4: 0x46018c43  div.s       $f17, $f17, $f1
    ctx->pc = 0x2896c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[17] = ctx->f[17] / ctx->f[1];
    // 0x2896c8: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2896c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2896cc: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x2896ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2896d0: 0xc0ad338  jal         func_2B4CE0
    ctx->pc = 0x2896D0u;
    SET_GPR_U32(ctx, 31, 0x2896D8u);
    ctx->pc = 0x2896D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2896D0u;
    // 0x2896d4: 0xa38823  subu        $s1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CE0u, 0x2896D0u, 0x2896D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896D8u;
label_2896d8:
    // 0x2896d8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2896d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2896dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2896dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2896e0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2896E0u;
    {
        const bool branch_taken_0x2896e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2896E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896E0u;
        // 0x2896e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896e0) {
            ctx->pc = 0x28973Cu;
            goto label_28973c;
        }
    }
    ctx->pc = 0x2896E8u;
    // 0x2896e8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2896e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2896ec: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2896ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2896f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2896f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2896f4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2896f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2896f8: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x2896f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2896fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2896fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289700: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x289700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x289704: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x289704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289708: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x289708u;
    SET_GPR_U32(ctx, 31, 0x289710u);
    ctx->pc = 0x28970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289708u;
    // 0x28970c: 0xe4410038  swc1        $f1, 0x38($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x289708u, 0x289710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289710u;
label_289710:
    // 0x289710: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x289710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x289714: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x289714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x289718: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x289718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28971c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x28971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x289720: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x289720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x289724: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x289724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x289728: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x289728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28972c: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x28972cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x289730: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x289730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289734: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x289734u;
    {
        const bool branch_taken_0x289734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289734u;
        // 0x289738: 0xe4610058  swc1        $f1, 0x58($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289734) {
            ctx->pc = 0x28982Cu;
            goto label_28982c;
        }
    }
    ctx->pc = 0x28973Cu;
label_28973c:
    // 0x28973c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x28973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x289740: 0xc780b468  lwc1        $f0, -0x4B98($gp)
    ctx->pc = 0x289740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289744: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x289748: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x289748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28974c: 0xc4870040  lwc1        $f7, 0x40($a0)
    ctx->pc = 0x28974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x289750: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x289750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x289754: 0xc48c003c  lwc1        $f12, 0x3C($a0)
    ctx->pc = 0x289754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x289758: 0xc48b0044  lwc1        $f11, 0x44($a0)
    ctx->pc = 0x289758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28975c: 0x46003a02  mul.s       $f8, $f7, $f0
    ctx->pc = 0x28975cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x289760: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x289760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x289764: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x289764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x289768: 0x46006242  mul.s       $f9, $f12, $f0
    ctx->pc = 0x289768u;
    ctx->f[9] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28976c: 0xc78589d0  lwc1        $f5, -0x7630($gp)
    ctx->pc = 0x28976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x289770: 0x46005a82  mul.s       $f10, $f11, $f0
    ctx->pc = 0x289770u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x289774: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x289774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289778: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x289778u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28977c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x289780: 0xc4830058  lwc1        $f3, 0x58($a0)
    ctx->pc = 0x289780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289784: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x289784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x289788: 0xc4850030  lwc1        $f5, 0x30($a0)
    ctx->pc = 0x289788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28978c: 0xc4860034  lwc1        $f6, 0x34($a0)
    ctx->pc = 0x28978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x289790: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x289790u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x289794: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x289794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289798: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x289798u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x28979c: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x28979cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2897a0: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x2897a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2897a4: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2897a4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2897a8: 0xe4830058  swc1        $f3, 0x58($a0)
    ctx->pc = 0x2897a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2897ac: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x2897acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x2897b0: 0xe4870040  swc1        $f7, 0x40($a0)
    ctx->pc = 0x2897b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2897b4: 0xe4860034  swc1        $f6, 0x34($a0)
    ctx->pc = 0x2897b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2897b8: 0xe4850030  swc1        $f5, 0x30($a0)
    ctx->pc = 0x2897b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2897bc: 0xe4820038  swc1        $f2, 0x38($a0)
    ctx->pc = 0x2897bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2897c0: 0xc78189d4  lwc1        $f1, -0x762C($gp)
    ctx->pc = 0x2897c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2897c4: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x2897c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2897c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2897c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2897cc: 0x0  nop
    ctx->pc = 0x2897ccu;
    // NOP
    // 0x2897d0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2897D0u;
    {
        const bool branch_taken_0x2897d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897d0) {
            ctx->pc = 0x2897D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2897D0u;
            // 0x2897d4: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28981Cu;
            goto label_28981c;
        }
    }
    ctx->pc = 0x2897D8u;
    // 0x2897d8: 0xc6030094  lwc1        $f3, 0x94($s0)
    ctx->pc = 0x2897d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2897dc: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x2897dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2897e0: 0x0  nop
    ctx->pc = 0x2897e0u;
    // NOP
    // 0x2897e4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2897E4u;
    {
        const bool branch_taken_0x2897e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897e4) {
            ctx->pc = 0x2897E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2897E4u;
            // 0x2897e8: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28981Cu;
            goto label_28981c;
        }
    }
    ctx->pc = 0x2897ECu;
    // 0x2897ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2897ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2897f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2897f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2897f4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2897f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2897f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2897f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2897fc: 0x46005882  mul.s       $f2, $f11, $f0
    ctx->pc = 0x2897fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x289800: 0xe4830034  swc1        $f3, 0x34($a0)
    ctx->pc = 0x289800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x289804: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x289804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x289808: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x289808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28980c: 0xe4820044  swc1        $f2, 0x44($a0)
    ctx->pc = 0x28980cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x289810: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x289810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x289814: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x289814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x289818: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_28981c:
    // 0x28981c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x28981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x289820: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x289820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x289824: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289828: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x289828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_28982c:
    // 0x28982c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x28982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x289830: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x289830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289834: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x289834u;
    {
        const bool branch_taken_0x289834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289834u;
        // 0x289838: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289834) {
            ctx->pc = 0x289894u;
            goto label_289894;
        }
    }
    ctx->pc = 0x28983Cu;
    // 0x28983c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x28983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x289840: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x289840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x289844: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x289844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289848: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x289848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28984c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x28984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x289850: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x289850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x289854: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x289854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289858: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x289858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x28985c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289860: 0xc0ad50a  jal         func_2B5428
    ctx->pc = 0x289860u;
    SET_GPR_U32(ctx, 31, 0x289868u);
    ctx->pc = 0x289864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289860u;
    // 0x289864: 0xe4410038  swc1        $f1, 0x38($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5428u, 0x289860u, 0x289868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289868u;
label_289868:
    // 0x289868: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x28986c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x28986cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x289870: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x289870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289874: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x289874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x289878: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x289878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x28987c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x28987cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x289880: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x289880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289884: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x289884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x289888: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x289888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28988c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x28988Cu;
    {
        const bool branch_taken_0x28988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28988Cu;
        // 0x289890: 0xe4a10058  swc1        $f1, 0x58($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28988c) {
            ctx->pc = 0x289A4Cu;
            goto label_289a4c;
        }
    }
    ctx->pc = 0x289894u;
label_289894:
    // 0x289894: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x289894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x289898: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x289898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28989c: 0xc782b468  lwc1        $f2, -0x4B98($gp)
    ctx->pc = 0x28989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2898a0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2898a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2898a4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2898a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2898a8: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x2898a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2898ac: 0x244a000c  addiu       $t2, $v0, 0xC
    ctx->pc = 0x2898acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2898b0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2898b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2898b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2898b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2898b8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2898b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2898bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2898bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2898c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898c4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2898c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898c8: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2898c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2898cc: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2898ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2898d0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2898d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2898d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2898d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2898d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2898d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2898dc: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2898dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2898e0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2898e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2898e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2898e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2898e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2898e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2898ec: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2898ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2898f0: 0xc09640e  jal         func_259038
    ctx->pc = 0x2898F0u;
    SET_GPR_U32(ctx, 31, 0x2898F8u);
    ctx->pc = 0x2898F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898F0u;
    // 0x2898f4: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259038u, 0x2898F0u, 0x2898F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898F8u;
label_2898f8:
    // 0x2898f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2898f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2898fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289900: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x289900u;
    {
        const bool branch_taken_0x289900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289900u;
        // 0x289904: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289900) {
            ctx->pc = 0x289938u;
            goto label_289938;
        }
    }
    ctx->pc = 0x289908u;
    // 0x289908: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x289908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28990c: 0x24478a60  addiu       $a3, $v0, -0x75A0
    ctx->pc = 0x28990cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937184));
    // 0x289910: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x289910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x289914: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x289914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x289918: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x289918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x28991c: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x28991cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289920: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x289920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289924: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x289924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x289928: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x289928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28992c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x28992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x289930: 0xc096824  jal         func_25A090
    ctx->pc = 0x289930u;
    SET_GPR_U32(ctx, 31, 0x289938u);
    ctx->pc = 0x289934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289930u;
    // 0x289934: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A090u, 0x289930u, 0x289938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289938u;
label_289938:
    // 0x289938: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x289938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28993c: 0xc78089d8  lwc1        $f0, -0x7628($gp)
    ctx->pc = 0x28993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289944: 0x0  nop
    ctx->pc = 0x289944u;
    // NOP
    // 0x289948: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x289948u;
    {
        const bool branch_taken_0x289948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289948) {
            ctx->pc = 0x28994Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289948u;
            // 0x28994c: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28995Cu;
            goto label_28995c;
        }
    }
    ctx->pc = 0x289950u;
    // 0x289950: 0x5220002c  beql        $s1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x289950u;
    {
        const bool branch_taken_0x289950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289950) {
            ctx->pc = 0x289954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289950u;
            // 0x289954: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289A04u;
            goto label_289a04;
        }
    }
    ctx->pc = 0x289958u;
    // 0x289958: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x289958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_28995c:
    // 0x28995c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28995Cu;
    {
        const bool branch_taken_0x28995c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28995c) {
            ctx->pc = 0x28996Cu;
            goto label_28996c;
        }
    }
    ctx->pc = 0x289964u;
    // 0x289964: 0xc081528  jal         func_2054A0
    ctx->pc = 0x289964u;
    SET_GPR_U32(ctx, 31, 0x28996Cu);
    ctx->pc = 0x2054A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054A0u, 0x289964u, 0x28996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28996Cu;
label_28996c:
    // 0x28996c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x28996Cu;
    SET_GPR_U32(ctx, 31, 0x289974u);
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x28996Cu, 0x289974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289974u;
label_289974:
    // 0x289974: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x289974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x289978: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x289978u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x28997c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28997Cu;
    {
        const bool branch_taken_0x28997c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28997c) {
            ctx->pc = 0x289980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28997Cu;
            // 0x289980: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x289984u;
            goto label_289984;
        }
    }
    ctx->pc = 0x289984u;
label_289984:
    // 0x289984: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x289984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x289988: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x289988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x28998c: 0x2010  mfhi        $a0
    ctx->pc = 0x28998cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x289990: 0xc081546  jal         func_205518
    ctx->pc = 0x289990u;
    SET_GPR_U32(ctx, 31, 0x289998u);
    ctx->pc = 0x289994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289990u;
    // 0x289994: 0x24840062  addiu       $a0, $a0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x289990u, 0x289998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289998u;
label_289998:
    // 0x289998: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x28999c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x28999cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899a0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2899a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2899a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2899a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899a8: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2899a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2899ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2899acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899b0: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x2899b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2899b4: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x2899b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2899b8: 0xc0a5e30  jal         func_2978C0
    ctx->pc = 0x2899B8u;
    SET_GPR_U32(ctx, 31, 0x2899C0u);
    ctx->pc = 0x2899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899B8u;
    // 0x2899bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978C0u, 0x2899B8u, 0x2899C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899C0u;
label_2899c0:
    // 0x2899c0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2899c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2899c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2899c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899c8: 0xc0a5f8c  jal         func_297E30
    ctx->pc = 0x2899C8u;
    SET_GPR_U32(ctx, 31, 0x2899D0u);
    ctx->pc = 0x2899CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899C8u;
    // 0x2899cc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E30u, 0x2899C8u, 0x2899D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899D0u;
label_2899d0:
    // 0x2899d0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2899D0u;
    {
        const bool branch_taken_0x2899d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899D0u;
        // 0x2899d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899d0) {
            ctx->pc = 0x2899E0u;
            goto label_2899e0;
        }
    }
    ctx->pc = 0x2899D8u;
    // 0x2899d8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2899d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2899dc: 0x24470030  addiu       $a3, $v0, 0x30
    ctx->pc = 0x2899dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2899e0:
    // 0x2899e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2899e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2899e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899e8: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x2899e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2899ec: 0xc0a900a  jal         func_2A4028
    ctx->pc = 0x2899ECu;
    SET_GPR_U32(ctx, 31, 0x2899F4u);
    ctx->pc = 0x2899F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899ECu;
    // 0x2899f0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4028u, 0x2899ECu, 0x2899F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899F4u;
label_2899f4:
    // 0x2899f4: 0xc0a2572  jal         func_2895C8
    ctx->pc = 0x2899F4u;
    SET_GPR_U32(ctx, 31, 0x2899FCu);
    ctx->pc = 0x2899F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899F4u;
    // 0x2899f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895C8u, 0x2899F4u, 0x2899FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899FCu;
label_2899fc:
    // 0x2899fc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2899FCu;
    {
        const bool branch_taken_0x2899fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899FCu;
        // 0x289a00: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899fc) {
            ctx->pc = 0x289C4Cu;
            goto label_289c4c;
        }
    }
    ctx->pc = 0x289A04u;
label_289a04:
    // 0x289a04: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x289a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289a08: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x289a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289a0c: 0xc781b468  lwc1        $f1, -0x4B98($gp)
    ctx->pc = 0x289a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294947944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289a10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x289a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x289a14: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x289a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289a18: 0xc78289dc  lwc1        $f2, -0x7624($gp)
    ctx->pc = 0x289a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289a1c: 0xc4a40038  lwc1        $f4, 0x38($a1)
    ctx->pc = 0x289a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x289a20: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x289a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x289a24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x289a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x289a28: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x289a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289a2c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x289a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289a30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x289a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x289a34: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x289a34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x289a38: 0xe4a30034  swc1        $f3, 0x34($a1)
    ctx->pc = 0x289a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x289a3c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x289a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289a40: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x289a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x289a44: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x289a44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x289a48: 0xe4a40038  swc1        $f4, 0x38($a1)
    ctx->pc = 0x289a48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_289a4c:
    // 0x289a4c: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x289a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x289a50: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x289a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x289a54: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x289A54u;
    {
        const bool branch_taken_0x289a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A54u;
        // 0x289a58: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a54) {
            ctx->pc = 0x289C48u;
            goto label_289c48;
        }
    }
    ctx->pc = 0x289A5Cu;
    // 0x289a5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x289a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x289a60: 0x24428a70  addiu       $v0, $v0, -0x7590
    ctx->pc = 0x289a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937200));
    // 0x289a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289a68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289a6c: 0x800008  jr          $a0
    ctx->pc = 0x289A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289A74u: goto label_289a74;
            case 0x289A98u: goto label_289a98;
            case 0x289AC0u: goto label_289ac0;
            case 0x289BECu: goto label_289bec;
            case 0x289C40u: goto label_289c40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289A6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289A74u;
label_289a74:
    // 0x289a74: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x289a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289a78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x289a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289a80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289a84: 0x0  nop
    ctx->pc = 0x289a84u;
    // NOP
    // 0x289a88: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x289A88u;
    {
        const bool branch_taken_0x289a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A88u;
        // 0x289a8c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a88) {
            ctx->pc = 0x289C48u;
            goto label_289c48;
        }
    }
    ctx->pc = 0x289A90u;
    // 0x289a90: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x289A90u;
    {
        const bool branch_taken_0x289a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A90u;
        // 0x289a94: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a90) {
            ctx->pc = 0x289C44u;
            goto label_289c44;
        }
    }
    ctx->pc = 0x289A98u;
label_289a98:
    // 0x289a98: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x289a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x289a9c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x289a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x289aa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289aa4: 0xc09d090  jal         func_274240
    ctx->pc = 0x289AA4u;
    SET_GPR_U32(ctx, 31, 0x289AACu);
    ctx->pc = 0x289AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AA4u;
    // 0x289aa8: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274240u, 0x289AA4u, 0x289AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AACu;
label_289aac:
    // 0x289aac: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x289AACu;
    {
        const bool branch_taken_0x289aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AACu;
        // 0x289ab0: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289aac) {
            ctx->pc = 0x289C4Cu;
            goto label_289c4c;
        }
    }
    ctx->pc = 0x289AB4u;
    // 0x289ab4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x289ab8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x289AB8u;
    {
        const bool branch_taken_0x289ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AB8u;
        // 0x289abc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ab8) {
            ctx->pc = 0x289C44u;
            goto label_289c44;
        }
    }
    ctx->pc = 0x289AC0u;
label_289ac0:
    // 0x289ac0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x289ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x289ac4: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x289ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289ac8: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x289AC8u;
    SET_GPR_U32(ctx, 31, 0x289AD0u);
    ctx->pc = 0x289ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AC8u;
    // 0x289acc: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x289AC8u, 0x289AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AD0u;
label_289ad0:
    // 0x289ad0: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x289ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289ad4: 0xc78089e0  lwc1        $f0, -0x7620($gp)
    ctx->pc = 0x289ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289ad8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x289ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x289adc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289ADCu;
    {
        const bool branch_taken_0x289adc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x289AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289ADCu;
        // 0x289ae0: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289adc) {
            ctx->pc = 0x289AF0u;
            goto label_289af0;
        }
    }
    ctx->pc = 0x289AE4u;
    // 0x289ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289ae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289AE8u;
    {
        const bool branch_taken_0x289ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AE8u;
        // 0x289aec: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ae8) {
            ctx->pc = 0x289B08u;
            goto label_289b08;
        }
    }
    ctx->pc = 0x289AF0u;
label_289af0:
    // 0x289af0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x289af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x289af4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289af8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289afc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289b00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x289b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289b04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x289b04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_289b08:
    // 0x289b08: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x289b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x289b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x289b14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x289b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289b18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x289b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289b1c: 0xc78189e4  lwc1        $f1, -0x761C($gp)
    ctx->pc = 0x289b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289b20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x289b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x289b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x289b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x289b28: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x289b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x289b2c: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x289B2Cu;
    SET_GPR_U32(ctx, 31, 0x289B34u);
    ctx->pc = 0x289B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B2Cu;
    // 0x289b30: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x289B2Cu, 0x289B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B34u;
label_289b34:
    // 0x289b34: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289B34u;
    {
        const bool branch_taken_0x289b34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x289B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B34u;
        // 0x289b38: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b34) {
            ctx->pc = 0x289B48u;
            goto label_289b48;
        }
    }
    ctx->pc = 0x289B3Cu;
    // 0x289b3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289b40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289B40u;
    {
        const bool branch_taken_0x289b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B40u;
        // 0x289b44: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b40) {
            ctx->pc = 0x289B60u;
            goto label_289b60;
        }
    }
    ctx->pc = 0x289B48u;
label_289b48:
    // 0x289b48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x289b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x289b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289b50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289b58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x289b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289b5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x289b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_289b60:
    // 0x289b60: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x289b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x289b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b68: 0xc79489e8  lwc1        $f20, -0x7618($gp)
    ctx->pc = 0x289b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289b6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x289b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289b70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x289b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x289b74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x289b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x289b78: 0xc0ada34  jal         func_2B68D0
    ctx->pc = 0x289B78u;
    SET_GPR_U32(ctx, 31, 0x289B80u);
    ctx->pc = 0x289B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B78u;
    // 0x289b7c: 0xe4800040  swc1        $f0, 0x40($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68D0u, 0x289B78u, 0x289B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B80u;
label_289b80:
    // 0x289b80: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x289b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289b84: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x289b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x289b88: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289B88u;
    {
        const bool branch_taken_0x289b88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x289B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B88u;
        // 0x289b8c: 0x461400c2  mul.s       $f3, $f0, $f20 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b88) {
            ctx->pc = 0x289B9Cu;
            goto label_289b9c;
        }
    }
    ctx->pc = 0x289B90u;
    // 0x289b90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x289b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289b94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289B94u;
    {
        const bool branch_taken_0x289b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B94u;
        // 0x289b98: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b94) {
            ctx->pc = 0x289BB4u;
            goto label_289bb4;
        }
    }
    ctx->pc = 0x289B9Cu;
label_289b9c:
    // 0x289b9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x289b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x289ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289ba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289ba8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x289ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289bac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x289bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x289bb0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x289bb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_289bb4:
    // 0x289bb4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x289bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x289bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289bbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x289bc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289bc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x289bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289bc8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x289bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x289bcc: 0xc78289ec  lwc1        $f2, -0x7614($gp)
    ctx->pc = 0x289bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x289bd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x289bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x289bd8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x289bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x289bdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x289bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x289be0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x289be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x289be4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x289BE4u;
    {
        const bool branch_taken_0x289be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BE4u;
        // 0x289be8: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289be4) {
            ctx->pc = 0x289C48u;
            goto label_289c48;
        }
    }
    ctx->pc = 0x289BECu;
label_289bec:
    // 0x289bec: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x289becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289bf0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x289bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x289bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289bf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289bfc: 0x0  nop
    ctx->pc = 0x289bfcu;
    // NOP
    // 0x289c00: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x289C00u;
    {
        const bool branch_taken_0x289c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C00u;
        // 0x289c04: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c00) {
            ctx->pc = 0x289C48u;
            goto label_289c48;
        }
    }
    ctx->pc = 0x289C08u;
    // 0x289c08: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x289c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289c0c: 0xc78389f0  lwc1        $f3, -0x7610($gp)
    ctx->pc = 0x289c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x289c10: 0xc78289f4  lwc1        $f2, -0x760C($gp)
    ctx->pc = 0x289c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x289c14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x289c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x289c18: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x289c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x289c1c: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x289c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x289c20: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x289c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289c24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x289c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x289c28: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x289c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x289c2c: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x289c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289c30: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x289c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x289c34: 0xe4a10044  swc1        $f1, 0x44($a1)
    ctx->pc = 0x289c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x289c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289C38u;
    {
        const bool branch_taken_0x289c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C38u;
        // 0x289c3c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c38) {
            ctx->pc = 0x289C48u;
            goto label_289c48;
        }
    }
    ctx->pc = 0x289C40u;
label_289c40:
    // 0x289c40: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x289c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_289c44:
    // 0x289c44: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x289c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_289c48:
    // 0x289c48: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x289c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_289c4c:
    // 0x289c4c: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x289c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x289c50: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x289c50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289c54: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x289c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x289c58: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x289c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289c5c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x289c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289c60: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x289c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289c64: 0x3e00008  jr          $ra
    ctx->pc = 0x289C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C64u;
        // 0x289c68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289C6Cu;
}

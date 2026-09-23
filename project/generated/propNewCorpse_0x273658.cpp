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

// Function: propNewCorpse
// Address: 0x273658 - 0x273a80
void propNewCorpse_0x273658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propNewCorpse_0x273658");
#endif

    switch (ctx->pc) {
        case 0x273690u: goto label_273690;
        case 0x273788u: goto label_273788;
        case 0x273794u: goto label_273794;
        case 0x273960u: goto label_273960;
        case 0x273970u: goto label_273970;
        case 0x2739d4u: goto label_2739d4;
        case 0x273a28u: goto label_273a28;
        default: break;
    }

    ctx->pc = 0x273658u;

    // 0x273658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x273658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27365c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x273660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x273664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x273668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27366c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x273670: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x273670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x273674: 0x8e120160  lw          $s2, 0x160($s0)
    ctx->pc = 0x273674u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x273678: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x273678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27367c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x27367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273680: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x273680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x273684: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x273684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x273688: 0xc09a1be  jal         func_2686F8
    ctx->pc = 0x273688u;
    SET_GPR_U32(ctx, 31, 0x273690u);
    ctx->pc = 0x27368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273688u;
    // 0x27368c: 0xc60f004c  lwc1        $f15, 0x4C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686F8u, 0x273688u, 0x273690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273690u;
label_273690:
    // 0x273690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x273690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273694: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x273694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x273698: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x273698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27369c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2736a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2736A0u;
    {
        const bool branch_taken_0x2736a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736a0) {
            ctx->pc = 0x2736A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2736A0u;
            // 0x2736a4: 0xc6010024  lwc1        $f1, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736B8u;
            goto label_2736b8;
        }
    }
    ctx->pc = 0x2736A8u;
    // 0x2736a8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2736ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2736acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2736b0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2736b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2736b4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2736b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2736b8:
    // 0x2736b8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2736b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2736bc: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x2736bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2736c0: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2736c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2736c4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2736c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736c8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2736c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2736cc: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x2736ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2736d0: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x2736d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2736d4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2736d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736d8: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x2736d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2736dc: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2736dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2736e0: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x2736e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2736e4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2736e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736e8: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2736e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2736ec: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2736ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2736f0: 0xe6210048  swc1        $f1, 0x48($s1)
    ctx->pc = 0x2736f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2736f4: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2736f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736f8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2736f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x2736fc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x2736fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273700: 0xe6210058  swc1        $f1, 0x58($s1)
    ctx->pc = 0x273700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x273704: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x273704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273708: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x273708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x27370c: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x27370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273710: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x273710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x273714: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x273714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273718: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x273718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x27371c: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273720: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x273720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x273724: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x273724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273728: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x273728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x27372c: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x27372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273730: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x273730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x273734: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x273734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273738: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x273738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x27373c: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x27373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273740: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x273740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x273744: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x273744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273748: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x273748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x27374c: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x27374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x273750: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x273750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x273754: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x273754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273758: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x273758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x27375c: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x27375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x273760: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x273760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x273764: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x273764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273768: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x273768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x27376c: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x27376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273770: 0xe621007c  swc1        $f1, 0x7C($s1)
    ctx->pc = 0x273770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x273774: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x273774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273778: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x273778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x27377c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x27377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273780: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x273780u;
    SET_GPR_U32(ctx, 31, 0x273788u);
    ctx->pc = 0x273784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273780u;
    // 0x273784: 0xe6210084  swc1        $f1, 0x84($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x273780u, 0x273788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273788u;
label_273788:
    // 0x273788: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x273788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x27378c: 0xc0b5848  jal         func_2D6120
    ctx->pc = 0x27378Cu;
    SET_GPR_U32(ctx, 31, 0x273794u);
    ctx->pc = 0x273790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27378Cu;
    // 0x273790: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6120u, 0x27378Cu, 0x273794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273794u;
label_273794:
    // 0x273794: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x273794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x273798: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x273798u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x27379c: 0xc6000228  lwc1        $f0, 0x228($s0)
    ctx->pc = 0x27379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737a0: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x2737a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2737a4: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x2737a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x2737a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2737a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737ac: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x2737acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x2737b0: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x2737b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x2737b4: 0x96030220  lhu         $v1, 0x220($s0)
    ctx->pc = 0x2737b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x2737b8: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x2737b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x2737bc: 0xc600022c  lwc1        $f0, 0x22C($s0)
    ctx->pc = 0x2737bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737c0: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x2737c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x2737c4: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x2737c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x2737c8: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x2737c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x2737cc: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x2737ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    // 0x2737d0: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x2737d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2737d4: 0x96040222  lhu         $a0, 0x222($s0)
    ctx->pc = 0x2737d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x2737d8: 0xae22015c  sw          $v0, 0x15C($s1)
    ctx->pc = 0x2737d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 2));
    // 0x2737dc: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x2737dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737e0: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x2737e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x2737e4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2737e8: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x2737e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x2737ec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2737f0: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2737f4: 0xa6240222  sh          $a0, 0x222($s1)
    ctx->pc = 0x2737f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 4));
    // 0x2737f8: 0xae220224  sw          $v0, 0x224($s1)
    ctx->pc = 0x2737f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
    // 0x2737fc: 0xe6200230  swc1        $f0, 0x230($s1)
    ctx->pc = 0x2737fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
    // 0x273800: 0x68620067  ldl         $v0, 0x67($v1)
    ctx->pc = 0x273800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x273804: 0x6c620060  ldr         $v0, 0x60($v1)
    ctx->pc = 0x273804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x273808: 0x6864006f  ldl         $a0, 0x6F($v1)
    ctx->pc = 0x273808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27380c: 0x6c640068  ldr         $a0, 0x68($v1)
    ctx->pc = 0x27380cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x273810: 0x68670077  ldl         $a3, 0x77($v1)
    ctx->pc = 0x273810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x273814: 0x6c670070  ldr         $a3, 0x70($v1)
    ctx->pc = 0x273814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x273818: 0x6868007f  ldl         $t0, 0x7F($v1)
    ctx->pc = 0x273818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27381c: 0x6c680078  ldr         $t0, 0x78($v1)
    ctx->pc = 0x27381cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x273820: 0xb0a20067  sdl         $v0, 0x67($a1)
    ctx->pc = 0x273820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273824: 0xb4a20060  sdr         $v0, 0x60($a1)
    ctx->pc = 0x273824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273828: 0xb0a4006f  sdl         $a0, 0x6F($a1)
    ctx->pc = 0x273828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27382c: 0xb4a40068  sdr         $a0, 0x68($a1)
    ctx->pc = 0x27382cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273830: 0xb0a70077  sdl         $a3, 0x77($a1)
    ctx->pc = 0x273830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273834: 0xb4a70070  sdr         $a3, 0x70($a1)
    ctx->pc = 0x273834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273838: 0xb0a8007f  sdl         $t0, 0x7F($a1)
    ctx->pc = 0x273838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27383c: 0xb4a80078  sdr         $t0, 0x78($a1)
    ctx->pc = 0x27383cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273840: 0x68620087  ldl         $v0, 0x87($v1)
    ctx->pc = 0x273840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x273844: 0x6c620080  ldr         $v0, 0x80($v1)
    ctx->pc = 0x273844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x273848: 0x6864008f  ldl         $a0, 0x8F($v1)
    ctx->pc = 0x273848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27384c: 0x6c640088  ldr         $a0, 0x88($v1)
    ctx->pc = 0x27384cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x273850: 0x68670097  ldl         $a3, 0x97($v1)
    ctx->pc = 0x273850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x273854: 0x6c670090  ldr         $a3, 0x90($v1)
    ctx->pc = 0x273854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x273858: 0x6868009f  ldl         $t0, 0x9F($v1)
    ctx->pc = 0x273858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27385c: 0x6c680098  ldr         $t0, 0x98($v1)
    ctx->pc = 0x27385cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x273860: 0xb0a20087  sdl         $v0, 0x87($a1)
    ctx->pc = 0x273860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273864: 0xb4a20080  sdr         $v0, 0x80($a1)
    ctx->pc = 0x273864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273868: 0xb0a4008f  sdl         $a0, 0x8F($a1)
    ctx->pc = 0x273868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27386c: 0xb4a40088  sdr         $a0, 0x88($a1)
    ctx->pc = 0x27386cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273870: 0xb0a70097  sdl         $a3, 0x97($a1)
    ctx->pc = 0x273870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273874: 0xb4a70090  sdr         $a3, 0x90($a1)
    ctx->pc = 0x273874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273878: 0xb0a8009f  sdl         $t0, 0x9F($a1)
    ctx->pc = 0x273878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27387c: 0xb4a80098  sdr         $t0, 0x98($a1)
    ctx->pc = 0x27387cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273880: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x273884: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x273884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x273888: 0x684300a7  ldl         $v1, 0xA7($v0)
    ctx->pc = 0x273888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27388c: 0x6c4300a0  ldr         $v1, 0xA0($v0)
    ctx->pc = 0x27388cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x273890: 0x684500af  ldl         $a1, 0xAF($v0)
    ctx->pc = 0x273890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x273894: 0x6c4500a8  ldr         $a1, 0xA8($v0)
    ctx->pc = 0x273894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x273898: 0x684700b7  ldl         $a3, 0xB7($v0)
    ctx->pc = 0x273898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27389c: 0x6c4700b0  ldr         $a3, 0xB0($v0)
    ctx->pc = 0x27389cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2738a0: 0x684800bf  ldl         $t0, 0xBF($v0)
    ctx->pc = 0x2738a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2738a4: 0x6c4800b8  ldr         $t0, 0xB8($v0)
    ctx->pc = 0x2738a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2738a8: 0xb08300a7  sdl         $v1, 0xA7($a0)
    ctx->pc = 0x2738a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738ac: 0xb48300a0  sdr         $v1, 0xA0($a0)
    ctx->pc = 0x2738acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738b0: 0xb08500af  sdl         $a1, 0xAF($a0)
    ctx->pc = 0x2738b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738b4: 0xb48500a8  sdr         $a1, 0xA8($a0)
    ctx->pc = 0x2738b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738b8: 0xb08700b7  sdl         $a3, 0xB7($a0)
    ctx->pc = 0x2738b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738bc: 0xb48700b0  sdr         $a3, 0xB0($a0)
    ctx->pc = 0x2738bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738c0: 0xb08800bf  sdl         $t0, 0xBF($a0)
    ctx->pc = 0x2738c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738c4: 0xb48800b8  sdr         $t0, 0xB8($a0)
    ctx->pc = 0x2738c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738c8: 0x684300c7  ldl         $v1, 0xC7($v0)
    ctx->pc = 0x2738c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2738cc: 0x6c4300c0  ldr         $v1, 0xC0($v0)
    ctx->pc = 0x2738ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2738d0: 0x684500cf  ldl         $a1, 0xCF($v0)
    ctx->pc = 0x2738d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2738d4: 0x6c4500c8  ldr         $a1, 0xC8($v0)
    ctx->pc = 0x2738d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2738d8: 0x684700d7  ldl         $a3, 0xD7($v0)
    ctx->pc = 0x2738d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2738dc: 0x6c4700d0  ldr         $a3, 0xD0($v0)
    ctx->pc = 0x2738dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2738e0: 0x684800df  ldl         $t0, 0xDF($v0)
    ctx->pc = 0x2738e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2738e4: 0x6c4800d8  ldr         $t0, 0xD8($v0)
    ctx->pc = 0x2738e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2738e8: 0xb08300c7  sdl         $v1, 0xC7($a0)
    ctx->pc = 0x2738e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738ec: 0xb48300c0  sdr         $v1, 0xC0($a0)
    ctx->pc = 0x2738ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738f0: 0xb08500cf  sdl         $a1, 0xCF($a0)
    ctx->pc = 0x2738f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738f4: 0xb48500c8  sdr         $a1, 0xC8($a0)
    ctx->pc = 0x2738f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738f8: 0xb08700d7  sdl         $a3, 0xD7($a0)
    ctx->pc = 0x2738f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2738fc: 0xb48700d0  sdr         $a3, 0xD0($a0)
    ctx->pc = 0x2738fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273900: 0xb08800df  sdl         $t0, 0xDF($a0)
    ctx->pc = 0x273900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273904: 0xb48800d8  sdr         $t0, 0xD8($a0)
    ctx->pc = 0x273904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x273908: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x273908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27390c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x27390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x273910: 0x94640124  lhu         $a0, 0x124($v1)
    ctx->pc = 0x273910u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x273914: 0x24680040  addiu       $t0, $v1, 0x40
    ctx->pc = 0x273914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x273918: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x273918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x27391c: 0xa4440124  sh          $a0, 0x124($v0)
    ctx->pc = 0x27391cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 292), (uint16_t)GPR_U32(ctx, 4));
    // 0x273920: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x273920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273924: 0x8c6400ec  lw          $a0, 0xEC($v1)
    ctx->pc = 0x273924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x273928: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x273928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x27392c: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x27392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x273930: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x273930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273934: 0xac4400ec  sw          $a0, 0xEC($v0)
    ctx->pc = 0x273934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 4));
    // 0x273938: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x273938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x27393c: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x27393cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x273940: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x273940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273944: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x273944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x273948: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x273948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x27394c: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x27394cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x273950: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x273950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x273954: 0xac450024  sw          $a1, 0x24($v0)
    ctx->pc = 0x273954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
    // 0x273958: 0xca1018  mult        $v0, $a2, $t2
    ctx->pc = 0x273958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27395c: 0x0  nop
    ctx->pc = 0x27395cu;
    // NOP
label_273960:
    // 0x273960: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x273960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x273964: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273968: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x273968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27396c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x27396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_273970:
    // 0x273970: 0xc460ffe8  lwc1        $f0, -0x18($v1)
    ctx->pc = 0x273970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273974: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x273974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x273978: 0xe440ffe8  swc1        $f0, -0x18($v0)
    ctx->pc = 0x273978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), bits); }
    // 0x27397c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273980: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x273980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x273984: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x273984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273988: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x273988u;
    {
        const bool branch_taken_0x273988 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x27398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273988u;
        // 0x27398c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273988) {
            ctx->pc = 0x273970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273970;
        }
    }
    ctx->pc = 0x273990u;
    // 0x273990: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x273990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273994: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x273994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273998: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x273998u;
    {
        const bool branch_taken_0x273998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273998u;
        // 0x27399c: 0xca1018  mult        $v0, $a2, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273998) {
            ctx->pc = 0x273960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273960;
        }
    }
    ctx->pc = 0x2739A0u;
    // 0x2739a0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2739a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2739a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2739a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2739a8: 0x8d22eb60  lw          $v0, -0x14A0($t1)
    ctx->pc = 0x2739a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294962016)));
    // 0x2739ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2739ACu;
    {
        const bool branch_taken_0x2739ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2739B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739ACu;
        // 0x2739b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739ac) {
            ctx->pc = 0x2739D0u;
            goto label_2739d0;
        }
    }
    ctx->pc = 0x2739B4u;
    // 0x2739b4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2739b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2739b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2739b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2739bc: 0x2463e980  addiu       $v1, $v1, -0x1680
    ctx->pc = 0x2739bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961536));
    // 0x2739c0: 0xad22eb60  sw          $v0, -0x14A0($t1)
    ctx->pc = 0x2739c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294962016), GPR_U32(ctx, 2));
    // 0x2739c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2739c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2739C8u;
    {
        const bool branch_taken_0x2739c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739C8u;
        // 0x2739cc: 0xae230160  sw          $v1, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739c8) {
            ctx->pc = 0x273A14u;
            goto label_273a14;
        }
    }
    ctx->pc = 0x2739D0u;
label_2739d0:
    // 0x2739d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2739d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2739d4:
    // 0x2739d4: 0x28c2001e  slti        $v0, $a2, 0x1E
    ctx->pc = 0x2739d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2739d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2739D8u;
    {
        const bool branch_taken_0x2739d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739D8u;
        // 0x2739dc: 0x2522eb60  addiu       $v0, $t1, -0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739d8) {
            ctx->pc = 0x273A14u;
            goto label_273a14;
        }
    }
    ctx->pc = 0x2739E0u;
    // 0x2739e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2739e4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2739e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2739e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2739e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2739ec: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2739ECu;
    {
        const bool branch_taken_0x2739ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739ec) {
            ctx->pc = 0x2739F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2739ECu;
            // 0x2739f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2739D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2739d4;
        }
    }
    ctx->pc = 0x2739F4u;
    // 0x2739f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2739f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739f8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2739f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2739fc: 0x2442e980  addiu       $v0, $v0, -0x1680
    ctx->pc = 0x2739fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x273a00: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x273a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x273a04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x273a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x273a10: 0xae240160  sw          $a0, 0x160($s1)
    ctx->pc = 0x273a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 4));
label_273a14:
    // 0x273a14: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x273a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x273a18: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273A18u;
    {
        const bool branch_taken_0x273a18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x273a18) {
            ctx->pc = 0x273A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273A18u;
            // 0x273a1c: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273A30u;
            goto label_273a30;
        }
    }
    ctx->pc = 0x273A20u;
    // 0x273a20: 0xc09a4d0  jal         func_269340
    ctx->pc = 0x273A20u;
    SET_GPR_U32(ctx, 31, 0x273A28u);
    ctx->pc = 0x273A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A20u;
    // 0x273a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269340u, 0x273A20u, 0x273A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A28u;
label_273a28:
    // 0x273a28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x273A28u;
    {
        const bool branch_taken_0x273a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A28u;
        // 0x273a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a28) {
            ctx->pc = 0x273A64u;
            goto label_273a64;
        }
    }
    ctx->pc = 0x273A30u;
label_273a30:
    // 0x273a30: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x273a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x273a34: 0xc6400b98  lwc1        $f0, 0xB98($s2)
    ctx->pc = 0x273a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273a38: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x273a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x273a3c: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x273a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
    // 0x273a40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x273a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a44: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x273a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x273a48: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x273a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x273a4c: 0xc6400b9c  lwc1        $f0, 0xB9C($s2)
    ctx->pc = 0x273a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273a50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x273a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x273a54: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x273a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x273a58: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x273a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x273a5c: 0xc6400b18  lwc1        $f0, 0xB18($s2)
    ctx->pc = 0x273a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273a60: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x273a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_273a64:
    // 0x273a64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x273a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273a68: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x273a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273a6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x273a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273a70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x273a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273a78: 0x3e00008  jr          $ra
    ctx->pc = 0x273A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A78u;
        // 0x273a7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273A80u;
}

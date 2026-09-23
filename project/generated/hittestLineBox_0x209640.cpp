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

// Function: hittestLineBox
// Address: 0x209640 - 0x209814
void hittestLineBox_0x209640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hittestLineBox_0x209640");
#endif

    ctx->pc = 0x209640u;

    // 0x209640: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x209640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x209644: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x209644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x209648: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x209648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20964c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x20964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209650: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x209650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209654: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x209654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209658: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x209658u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20965c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20965Cu;
    {
        const bool branch_taken_0x20965c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20965Cu;
        // 0x209660: 0x460010c1  sub.s       $f3, $f2, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20965c) {
            ctx->pc = 0x209670u;
            goto label_209670;
        }
    }
    ctx->pc = 0x209664u;
    // 0x209664: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x209664u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x209668: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x209668u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x20966c: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x20966cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_209670:
    // 0x209670: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x209670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209674: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x209674u;
    {
        const bool branch_taken_0x209674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209674) {
            ctx->pc = 0x209688u;
            goto label_209688;
        }
    }
    ctx->pc = 0x20967Cu;
    // 0x20967c: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x20967cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209680: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x209680u;
    {
        const bool branch_taken_0x209680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209680) {
            ctx->pc = 0x2097F0u;
            goto label_2097f0;
        }
    }
    ctx->pc = 0x209688u;
label_209688:
    // 0x209688: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x209688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20968c: 0x0  nop
    ctx->pc = 0x20968cu;
    // NOP
    // 0x209690: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x209690u;
    {
        const bool branch_taken_0x209690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209690u;
        // 0x209694: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209690) {
            ctx->pc = 0x2096A0u;
            goto label_2096a0;
        }
    }
    ctx->pc = 0x209698u;
    // 0x209698: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x209698u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x20969c: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x20969cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_2096a0:
    // 0x2096a0: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2096a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2096a4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2096a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2096a8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2096a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2096ac: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2096acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2096b0: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x2096b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2096b4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2096b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2096b8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2096b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2096bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2096BCu;
    {
        const bool branch_taken_0x2096bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096BCu;
        // 0x2096c0: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096bc) {
            ctx->pc = 0x2096D0u;
            goto label_2096d0;
        }
    }
    ctx->pc = 0x2096C4u;
    // 0x2096c4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2096c4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x2096c8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2096c8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2096cc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2096ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2096d0:
    // 0x2096d0: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x2096d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2096d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2096D4u;
    {
        const bool branch_taken_0x2096d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2096d4) {
            ctx->pc = 0x2096E8u;
            goto label_2096e8;
        }
    }
    ctx->pc = 0x2096DCu;
    // 0x2096dc: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x2096dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2096e0: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x2096E0u;
    {
        const bool branch_taken_0x2096e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2096e0) {
            ctx->pc = 0x2097F0u;
            goto label_2097f0;
        }
    }
    ctx->pc = 0x2096E8u;
label_2096e8:
    // 0x2096e8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2096e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2096ec: 0x0  nop
    ctx->pc = 0x2096ecu;
    // NOP
    // 0x2096f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2096F0u;
    {
        const bool branch_taken_0x2096f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2096F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096F0u;
        // 0x2096f4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096f0) {
            ctx->pc = 0x209700u;
            goto label_209700;
        }
    }
    ctx->pc = 0x2096F8u;
    // 0x2096f8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2096f8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2096fc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2096fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_209700:
    // 0x209700: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x209700u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x209704: 0x46071002  mul.s       $f0, $f2, $f7
    ctx->pc = 0x209704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x209708: 0x46042a42  mul.s       $f9, $f5, $f4
    ctx->pc = 0x209708u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x20970c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20970cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209710: 0x0  nop
    ctx->pc = 0x209710u;
    // NOP
    // 0x209714: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x209714u;
    {
        const bool branch_taken_0x209714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209714u;
        // 0x209718: 0x46070a02  mul.s       $f8, $f1, $f7 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209714) {
            ctx->pc = 0x209734u;
            goto label_209734;
        }
    }
    ctx->pc = 0x20971Cu;
    // 0x20971c: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x20971cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209720: 0x0  nop
    ctx->pc = 0x209720u;
    // NOP
    // 0x209724: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x209724u;
    {
        const bool branch_taken_0x209724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209724u;
        // 0x209728: 0x46001a86  mov.s       $f10, $f3 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209724) {
            ctx->pc = 0x2097F0u;
            goto label_2097f0;
        }
    }
    ctx->pc = 0x20972Cu;
    // 0x20972c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20972Cu;
    {
        const bool branch_taken_0x20972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20972Cu;
        // 0x209730: 0x46003986  mov.s       $f6, $f7 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20972c) {
            ctx->pc = 0x209748u;
            goto label_209748;
        }
    }
    ctx->pc = 0x209734u;
label_209734:
    // 0x209734: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x209734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209738: 0x0  nop
    ctx->pc = 0x209738u;
    // NOP
    // 0x20973c: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x20973Cu;
    {
        const bool branch_taken_0x20973c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20973Cu;
        // 0x209740: 0x46001286  mov.s       $f10, $f2 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20973c) {
            ctx->pc = 0x2097F0u;
            goto label_2097f0;
        }
    }
    ctx->pc = 0x209744u;
    // 0x209744: 0x46002186  mov.s       $f6, $f4
    ctx->pc = 0x209744u;
    ctx->f[6] = FPU_MOV_S(ctx->f[4]);
label_209748:
    // 0x209748: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x209748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20974c: 0x0  nop
    ctx->pc = 0x20974cu;
    // NOP
    // 0x209750: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x209750u;
    {
        const bool branch_taken_0x209750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209750u;
        // 0x209754: 0x46002a06  mov.s       $f8, $f5 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209750) {
            ctx->pc = 0x209760u;
            goto label_209760;
        }
    }
    ctx->pc = 0x209758u;
    // 0x209758: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x209758u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
    // 0x20975c: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x20975cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
label_209760:
    // 0x209760: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x209760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x209764: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x209764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x209768: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x209768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20976c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x20976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209770: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x209770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209774: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x209774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209778: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x209778u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x20977c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20977Cu;
    {
        const bool branch_taken_0x20977c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20977Cu;
        // 0x209780: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20977c) {
            ctx->pc = 0x209790u;
            goto label_209790;
        }
    }
    ctx->pc = 0x209784u;
    // 0x209784: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x209784u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x209788: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x209788u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x20978c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x20978cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_209790:
    // 0x209790: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x209790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209794: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x209794u;
    {
        const bool branch_taken_0x209794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209794) {
            ctx->pc = 0x2097A8u;
            goto label_2097a8;
        }
    }
    ctx->pc = 0x20979Cu;
    // 0x20979c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x20979cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2097a0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2097A0u;
    {
        const bool branch_taken_0x2097a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2097a0) {
            ctx->pc = 0x2097F0u;
            goto label_2097f0;
        }
    }
    ctx->pc = 0x2097A8u;
label_2097a8:
    // 0x2097a8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2097a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2097ac: 0x0  nop
    ctx->pc = 0x2097acu;
    // NOP
    // 0x2097b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2097B0u;
    {
        const bool branch_taken_0x2097b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2097B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097B0u;
        // 0x2097b4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097b0) {
            ctx->pc = 0x2097C0u;
            goto label_2097c0;
        }
    }
    ctx->pc = 0x2097B8u;
    // 0x2097b8: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x2097b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x2097bc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2097bcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2097c0:
    // 0x2097c0: 0x46045082  mul.s       $f2, $f10, $f4
    ctx->pc = 0x2097c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x2097c4: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x2097c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2097c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2097c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2097cc: 0x0  nop
    ctx->pc = 0x2097ccu;
    // NOP
    // 0x2097d0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2097D0u;
    {
        const bool branch_taken_0x2097d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2097d0) {
            ctx->pc = 0x2097D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2097D0u;
            // 0x2097d4: 0x46061802  mul.s       $f0, $f3, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097F8u;
            goto label_2097f8;
        }
    }
    ctx->pc = 0x2097D8u;
    // 0x2097d8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2097d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2097dc: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x2097dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2097e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2097e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2097e4: 0x0  nop
    ctx->pc = 0x2097e4u;
    // NOP
    // 0x2097e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2097E8u;
    {
        const bool branch_taken_0x2097e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2097ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097E8u;
        // 0x2097ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097e8) {
            ctx->pc = 0x20980Cu;
            goto label_20980c;
        }
    }
    ctx->pc = 0x2097F0u;
label_2097f0:
    // 0x2097f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2097F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2097F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097F0u;
        // 0x2097f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2097F8u;
label_2097f8:
    // 0x2097f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2097f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2097fc: 0x0  nop
    ctx->pc = 0x2097fcu;
    // NOP
    // 0x209800: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x209800u;
    {
        const bool branch_taken_0x209800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209800u;
        // 0x209804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209800) {
            ctx->pc = 0x20980Cu;
            goto label_20980c;
        }
    }
    ctx->pc = 0x209808u;
    // 0x209808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20980c:
    // 0x20980c: 0x3e00008  jr          $ra
    ctx->pc = 0x20980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209814u;
}

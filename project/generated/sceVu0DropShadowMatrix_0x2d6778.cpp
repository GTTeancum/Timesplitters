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

// Function: sceVu0DropShadowMatrix
// Address: 0x2d6778 - 0x2d6908
void sceVu0DropShadowMatrix_0x2d6778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0DropShadowMatrix_0x2d6778");
#endif

    ctx->pc = 0x2d6778u;

    // 0x2d6778: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x2d6778u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x2d677c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D677Cu;
    {
        const bool branch_taken_0x2d677c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D677Cu;
        // 0x2d6780: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d677c) {
            ctx->pc = 0x2D6828u;
            goto label_2d6828;
        }
    }
    ctx->pc = 0x2D6784u;
    // 0x2d6784: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d6784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6788: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d6788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d678c: 0x46018242  mul.s       $f9, $f16, $f1
    ctx->pc = 0x2d678cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2d6790: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2d6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6794: 0x46027a82  mul.s       $f10, $f15, $f2
    ctx->pc = 0x2d6794u;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2d6798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d6798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d679c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d679cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d67a0: 0x46037182  mul.s       $f6, $f14, $f3
    ctx->pc = 0x2d67a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x2d67a4: 0xe490000c  swc1        $f16, 0xC($a0)
    ctx->pc = 0x2d67a4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d67a8: 0x460009c7  neg.s       $f7, $f1
    ctx->pc = 0x2d67a8u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
    // 0x2d67ac: 0xe48f001c  swc1        $f15, 0x1C($a0)
    ctx->pc = 0x2d67acu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2d67b0: 0x460a4800  add.s       $f0, $f9, $f10
    ctx->pc = 0x2d67b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x2d67b4: 0xe48e002c  swc1        $f14, 0x2C($a0)
    ctx->pc = 0x2d67b4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2d67b8: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x2d67b8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
    // 0x2d67bc: 0xe4870030  swc1        $f7, 0x30($a0)
    ctx->pc = 0x2d67bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2d67c0: 0x46001a07  neg.s       $f8, $f3
    ctx->pc = 0x2d67c0u;
    ctx->f[8] = FPU_NEG_S(ctx->f[3]);
    // 0x2d67c4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d67c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d67c8: 0xe4840034  swc1        $f4, 0x34($a0)
    ctx->pc = 0x2d67c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2d67cc: 0x460179c2  mul.s       $f7, $f15, $f1
    ctx->pc = 0x2d67ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2d67d0: 0x46028102  mul.s       $f4, $f16, $f2
    ctx->pc = 0x2d67d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x2d67d4: 0xe4880038  swc1        $f8, 0x38($a0)
    ctx->pc = 0x2d67d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2d67d8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2d67d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2d67dc: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x2d67dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2d67e0: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x2d67e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2d67e4: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x2d67e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2d67e8: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2d67e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d67ec: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x2d67ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2d67f0: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2d67f0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2d67f4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2d67f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2d67f8: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2d67f8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2d67fc: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x2d67fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2d6800: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2d6800u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2d6804: 0xe485003c  swc1        $f5, 0x3C($a0)
    ctx->pc = 0x2d6804u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2d6808: 0x46038002  mul.s       $f0, $f16, $f3
    ctx->pc = 0x2d6808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x2d680c: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x2d680cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d6810: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x2d6810u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x2d6814: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x2d6814u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d6818: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x2d6818u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2d681c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d6820: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6820u;
        // 0x2d6824: 0xe4830018  swc1        $f3, 0x18($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6828u;
label_2d6828:
    // 0x2d6828: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2d6828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d682c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2d682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d6830: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->pc = 0x2d6830u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x2d6834: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x2d6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d6838: 0x46047982  mul.s       $f6, $f15, $f4
    ctx->pc = 0x2d6838u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x2d683c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d683cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d6840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d6840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6844: 0x46077202  mul.s       $f8, $f14, $f7
    ctx->pc = 0x2d6844u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x2d6848: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d6848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d684c: 0x46001247  neg.s       $f9, $f2
    ctx->pc = 0x2d684cu;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    // 0x2d6850: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2d6850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2d6854: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x2d6854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2d6858: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2d6858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2d685c: 0x46047282  mul.s       $f10, $f14, $f4
    ctx->pc = 0x2d685cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x2d6860: 0x460022c7  neg.s       $f11, $f4
    ctx->pc = 0x2d6860u;
    ctx->f[11] = FPU_NEG_S(ctx->f[4]);
    // 0x2d6864: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2d6864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2d6868: 0x460278c2  mul.s       $f3, $f15, $f2
    ctx->pc = 0x2d6868u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x2d686c: 0x46078302  mul.s       $f12, $f16, $f7
    ctx->pc = 0x2d686cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x2d6870: 0x0  nop
    ctx->pc = 0x2d6870u;
    // NOP
    // 0x2d6874: 0x0  nop
    ctx->pc = 0x2d6874u;
    // NOP
    // 0x2d6878: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d6878u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2d687c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2d687cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2d6880: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2d6880u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2d6884: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x2d6884u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2d6888: 0x46077b42  mul.s       $f13, $f15, $f7
    ctx->pc = 0x2d6888u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x2d688c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d688cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6890: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x2d6890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2d6894: 0x46048102  mul.s       $f4, $f16, $f4
    ctx->pc = 0x2d6894u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x2d6898: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x2d6898u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x2d689c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d689cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d68a0: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x2d68a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2d68a4: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2d68a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d68a8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2d68a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d68ac: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2d68acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2d68b0: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x2d68b0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2d68b4: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x2d68b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d68b8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x2d68b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2d68bc: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x2d68bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2d68c0: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x2d68c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2d68c4: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x2d68c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2d68c8: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x2d68c8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2d68cc: 0xe4890030  swc1        $f9, 0x30($a0)
    ctx->pc = 0x2d68ccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2d68d0: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x2d68d0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x2d68d4: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2d68d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d68d8: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2d68d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2d68dc: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x2d68dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d68e0: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x2d68e0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2d68e4: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x2d68e4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2d68e8: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x2d68e8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2d68ec: 0xe48b0034  swc1        $f11, 0x34($a0)
    ctx->pc = 0x2d68ecu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2d68f0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2d68f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2d68f4: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x2d68f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d68f8: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x2d68f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2d68fc: 0xe4880028  swc1        $f8, 0x28($a0)
    ctx->pc = 0x2d68fcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2d6900: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6900u;
        // 0x2d6904: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6908u;
}

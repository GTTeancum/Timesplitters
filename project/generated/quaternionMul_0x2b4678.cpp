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

// Function: quaternionMul
// Address: 0x2b4678 - 0x2b477c
void quaternionMul_0x2b4678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quaternionMul_0x2b4678");
#endif

    ctx->pc = 0x2b4678u;

    // 0x2b4678: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b467c: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x2b467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4680: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2b4680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4684: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2b4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b468c: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2b468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4690: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2b4690u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b4694: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b4694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4698: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2b4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b469c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b469cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b46a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46a4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2b46a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2b46a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b46a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b46ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b46acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b46b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b46b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b46b4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2b46b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b46b8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b46bc: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x2b46bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b46c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2b46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46c4: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2b46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b46c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b46c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b46cc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2b46ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b46d0: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2b46d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b46d4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2b46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b46d8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b46d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b46dc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b46dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b46e0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b46e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b46e4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2b46e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2b46e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b46e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b46ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b46ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b46f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b46f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b46f4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b46f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b46f8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2b46f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46fc: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x2b46fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4700: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2b4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4704: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x2b4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4708: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b470c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2b470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4710: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2b4710u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b4714: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2b4714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4718: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2b4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b471c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b471cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b4720: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4724: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2b4724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2b4728: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b4728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b472c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b472cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b4730: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b4730u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b4734: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b4734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b4738: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2b4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b473c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2b473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4740: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2b4740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4744: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2b4744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b4748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b474c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4750: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2b4750u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2b4754: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2b4754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4758: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b4758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b475c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b475cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b4760: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2b4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4764: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2b4764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2b4768: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b4768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b476c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b476cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b4770: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b4770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b4774: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4774u;
        // 0x2b4778: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B477Cu;
}

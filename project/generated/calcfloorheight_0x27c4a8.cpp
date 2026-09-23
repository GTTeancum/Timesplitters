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

// Function: calcfloorheight
// Address: 0x27c4a8 - 0x27c574
void calcfloorheight_0x27c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcfloorheight_0x27c4a8");
#endif

    switch (ctx->pc) {
        case 0x27c4c8u: goto label_27c4c8;
        default: break;
    }

    ctx->pc = 0x27c4a8u;

    // 0x27c4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c4ac: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x27c4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x27c4b0: 0xc4880004  lwc1        $f8, 0x4($a0)
    ctx->pc = 0x27c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27c4b4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x27c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27c4b8: 0xc48a0008  lwc1        $f10, 0x8($a0)
    ctx->pc = 0x27c4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x27c4bc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x27c4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27c4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c4c4: 0x0  nop
    ctx->pc = 0x27c4c4u;
    // NOP
label_27c4c8:
    // 0x27c4c8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x27c4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c4cc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x27c4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x27c4d0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x27c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c4d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27c4d8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27c4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c4dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x27c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x27c4e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27c4e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x27c4e4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x27c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x27c4e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27c4e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27c4ec: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x27c4ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27c4f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27c4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27c4f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x27c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27c4f8: 0x4e1fff3  bgez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x27C4F8u;
    {
        const bool branch_taken_0x27c4f8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x27C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4F8u;
        // 0x27c4fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4f8) {
            ctx->pc = 0x27C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c4c8;
        }
    }
    ctx->pc = 0x27C500u;
    // 0x27c500: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x27c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27c504: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c508: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x27c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27c50c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x27c50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c510: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x27c510u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x27c514: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x27c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c518: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x27c518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c51c: 0x46023142  mul.s       $f5, $f6, $f2
    ctx->pc = 0x27c51cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x27c520: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27c520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x27c524: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c528: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x27c528u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x27c52c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x27c52cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x27c530: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27c530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27c534: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27c534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x27c538: 0x46092002  mul.s       $f0, $f4, $f9
    ctx->pc = 0x27c538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x27c53c: 0x46081142  mul.s       $f5, $f2, $f8
    ctx->pc = 0x27c53cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x27c540: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x27c540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x27c544: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x27c544u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x27c548: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27c548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27c54c: 0x460a08c2  mul.s       $f3, $f1, $f10
    ctx->pc = 0x27c54cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x27c550: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x27c550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x27c554: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27c554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27c558: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x27c558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x27c55c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27c55cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27c560: 0x0  nop
    ctx->pc = 0x27c560u;
    // NOP
    // 0x27c564: 0x0  nop
    ctx->pc = 0x27c564u;
    // NOP
    // 0x27c568: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27c568u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x27c56c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C56Cu;
        // 0x27c570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C574u;
}

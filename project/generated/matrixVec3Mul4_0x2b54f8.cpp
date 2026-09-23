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

// Function: matrixVec3Mul4
// Address: 0x2b54f8 - 0x2b556c
void matrixVec3Mul4_0x2b54f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matrixVec3Mul4_0x2b54f8");
#endif

    switch (ctx->pc) {
        case 0x2b5510u: goto label_2b5510;
        default: break;
    }

    ctx->pc = 0x2b54f8u;

    // 0x2b54f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b54f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54fc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2b54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2b5500: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b5504: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2b5504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5508: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2b5508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b550c: 0x0  nop
    ctx->pc = 0x2b550cu;
    // NOP
label_2b5510:
    // 0x2b5510: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2b5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5514: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2b5514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2b5518: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2b5518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b551c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b551cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b5520: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b5520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5524: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b5524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b5528: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b552c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b552cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b5530: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2b5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5534: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2b5534u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2b5538: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b5538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b553c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2b553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5540: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b5544: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b5544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b5548: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b5548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b554c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b554cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b5550: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5554: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2b5554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2b5558: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b5558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b555c: 0x501ffec  bgez        $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2B555Cu;
    {
        const bool branch_taken_0x2b555c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2B5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B555Cu;
        // 0x2b5560: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b555c) {
            ctx->pc = 0x2B5510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5510;
        }
    }
    ctx->pc = 0x2B5564u;
    // 0x2b5564: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B556Cu;
}

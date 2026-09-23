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

// Function: trigMake
// Address: 0x2b6930 - 0x2b69a4
void trigMake_0x2b6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("trigMake_0x2b6930");
#endif

    switch (ctx->pc) {
        case 0x2b6960u: goto label_2b6960;
        case 0x2b6978u: goto label_2b6978;
        default: break;
    }

    ctx->pc = 0x2b6930u;

    // 0x2b6930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6934: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b6934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2b6938: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2b6938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b693c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b693cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b6940: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b6944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6948: 0x24515c60  addiu       $s1, $v0, 0x5C60
    ctx->pc = 0x2b6948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x2b694c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b6950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b6950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6954: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x2b6954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x2b6958: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b6958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b695c: 0xc7948fdc  lwc1        $f20, -0x7024($gp)
    ctx->pc = 0x2b695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b6960:
    // 0x2b6960: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x2b6960u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6964: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b6964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b6968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b6968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b696c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x2b696cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x2b6970: 0xc0b5ce6  jal         func_2D7398
    ctx->pc = 0x2B6970u;
    SET_GPR_U32(ctx, 31, 0x2B6978u);
    ctx->pc = 0x2B6974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6970u;
    // 0x2b6974: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7398u, 0x2B6970u, 0x2B6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6978u;
label_2b6978:
    // 0x2b6978: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b697c: 0x2a020800  slti        $v0, $s0, 0x800
    ctx->pc = 0x2b697cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2b6980: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B6980u;
    {
        const bool branch_taken_0x2b6980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6980u;
        // 0x2b6984: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6980) {
            ctx->pc = 0x2B6960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6960;
        }
    }
    ctx->pc = 0x2B6988u;
    // 0x2b6988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b698c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b698cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6994: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2b6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6998: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b699c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B699Cu;
        // 0x2b69a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B699Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B69A4u;
}

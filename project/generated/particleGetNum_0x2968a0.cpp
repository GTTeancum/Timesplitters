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

// Function: particleGetNum
// Address: 0x2968a0 - 0x2968d8
void particleGetNum_0x2968a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGetNum_0x2968a0");
#endif

    switch (ctx->pc) {
        case 0x2968b4u: goto label_2968b4;
        default: break;
    }

    ctx->pc = 0x2968a0u;

    // 0x2968a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2968a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2968a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2968a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2968a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2968a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2968ac: 0xc0a5a0e  jal         func_296838
    ctx->pc = 0x2968ACu;
    SET_GPR_U32(ctx, 31, 0x2968B4u);
    ctx->pc = 0x2968B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968ACu;
    // 0x2968b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296838u, 0x2968ACu, 0x2968B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968B4u;
label_2968b4:
    // 0x2968b4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2968b4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2968b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2968b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2968bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2968bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2968c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2968c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2968c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2968c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2968c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2968c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2968cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2968ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2968d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2968D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2968D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968D0u;
        // 0x2968d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2968D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2968D8u;
}

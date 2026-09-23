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

// Function: particleUpdateRate
// Address: 0x296e50 - 0x296e88
void particleUpdateRate_0x296e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleUpdateRate_0x296e50");
#endif

    switch (ctx->pc) {
        case 0x296e74u: goto label_296e74;
        default: break;
    }

    ctx->pc = 0x296e50u;

    // 0x296e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e5c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296E5Cu;
    {
        const bool branch_taken_0x296e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E5Cu;
        // 0x296e60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e5c) {
            ctx->pc = 0x296E78u;
            goto label_296e78;
        }
    }
    ctx->pc = 0x296E64u;
    // 0x296e64: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x296e68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x296e68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296e6c: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x296E6Cu;
    SET_GPR_U32(ctx, 31, 0x296E74u);
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x296E6Cu, 0x296E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E74u;
label_296e74:
    // 0x296e74: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x296e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_296e78:
    // 0x296e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e80: 0x3e00008  jr          $ra
    ctx->pc = 0x296E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E80u;
        // 0x296e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E88u;
}

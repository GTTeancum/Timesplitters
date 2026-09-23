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

// Function: particleGroupIsVisible
// Address: 0x2a18a0 - 0x2a1904
void particleGroupIsVisible_0x2a18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("particleGroupIsVisible_0x2a18a0");
#endif

    ctx->pc = 0x2a18a0u;

    // 0x2a18a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a18a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a18a4: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2a18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a18a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a18a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a18ac: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2A18ACu;
    {
        const bool branch_taken_0x2a18ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a18ac) {
            ctx->pc = 0x2A18FCu;
            goto label_2a18fc;
        }
    }
    ctx->pc = 0x2A18B4u;
    // 0x2a18b4: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x2a18b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2a18b8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A18B8u;
    {
        const bool branch_taken_0x2a18b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18B8u;
        // 0x2a18bc: 0x8f83b234  lw          $v1, -0x4DCC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18b8) {
            ctx->pc = 0x2A18D4u;
            goto label_2a18d4;
        }
    }
    ctx->pc = 0x2A18C0u;
    // 0x2a18c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a18c4: 0x461007  srav        $v0, $a2, $v0
    ctx->pc = 0x2a18c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a18c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a18c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a18cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A18CCu;
    {
        const bool branch_taken_0x2a18cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18cc) {
            ctx->pc = 0x2A18FCu;
            goto label_2a18fc;
        }
    }
    ctx->pc = 0x2A18D4u;
label_2a18d4:
    // 0x2a18d4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a18d8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2a18d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a18dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A18DCu;
    {
        const bool branch_taken_0x2a18dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18DCu;
        // 0x2a18e0: 0x851024  and         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18dc) {
            ctx->pc = 0x2A18F4u;
            goto label_2a18f4;
        }
    }
    ctx->pc = 0x2A18E4u;
    // 0x2a18e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A18E4u;
    {
        const bool branch_taken_0x2a18e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18E4u;
        // 0x2a18e8: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18e4) {
            ctx->pc = 0x2A18F4u;
            goto label_2a18f4;
        }
    }
    ctx->pc = 0x2A18ECu;
    // 0x2a18ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A18ECu;
    {
        const bool branch_taken_0x2a18ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a18ec) {
            ctx->pc = 0x2A18FCu;
            goto label_2a18fc;
        }
    }
    ctx->pc = 0x2A18F4u;
label_2a18f4:
    // 0x2a18f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A18F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18F4u;
        // 0x2a18f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A18F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A18FCu;
label_2a18fc:
    // 0x2a18fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A18FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18FCu;
        // 0x2a1900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A18FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1904u;
}

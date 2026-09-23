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

// Function: gmLastStandAllBasesDestroyed
// Address: 0x21df90 - 0x21e014
void gmLastStandAllBasesDestroyed_0x21df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gmLastStandAllBasesDestroyed_0x21df90");
#endif

    switch (ctx->pc) {
        case 0x21dfb0u: goto label_21dfb0;
        case 0x21dfb8u: goto label_21dfb8;
        case 0x21dfccu: goto label_21dfcc;
        case 0x21dff0u: goto label_21dff0;
        default: break;
    }

    ctx->pc = 0x21df90u;

    // 0x21df90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21df94: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x21df94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21df98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21df9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21dfa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21dfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21dfa4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21dfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21dfac: 0x0  nop
    ctx->pc = 0x21dfacu;
    // NOP
label_21dfb0:
    // 0x21dfb0: 0xc0b1fb4  jal         func_2C7ED0
    ctx->pc = 0x21DFB0u;
    SET_GPR_U32(ctx, 31, 0x21DFB8u);
    ctx->pc = 0x2C7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED0u, 0x21DFB0u, 0x21DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFB8u;
label_21dfb8:
    // 0x21dfb8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21dfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21dfbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DFBCu;
    {
        const bool branch_taken_0x21dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dfbc) {
            ctx->pc = 0x21DFE0u;
            goto label_21dfe0;
        }
    }
    ctx->pc = 0x21DFC4u;
    // 0x21dfc4: 0xc0b1fb6  jal         func_2C7ED8
    ctx->pc = 0x21DFC4u;
    SET_GPR_U32(ctx, 31, 0x21DFCCu);
    ctx->pc = 0x21DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFC4u;
    // 0x21dfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED8u, 0x21DFC4u, 0x21DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFCCu;
label_21dfcc:
    // 0x21dfcc: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x21dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dfd0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x21dfd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dfd4: 0x0  nop
    ctx->pc = 0x21dfd4u;
    // NOP
    // 0x21dfd8: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x21DFD8u;
    {
        const bool branch_taken_0x21dfd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21dfd8) {
            ctx->pc = 0x21DFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DFD8u;
            // 0x21dfdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dfb0;
        }
    }
    ctx->pc = 0x21DFE0u;
label_21dfe0:
    // 0x21dfe0: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DFE0u;
    {
        const bool branch_taken_0x21dfe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dfe0) {
            ctx->pc = 0x21DFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DFE0u;
            // 0x21dfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E000u;
            goto label_21e000;
        }
    }
    ctx->pc = 0x21DFE8u;
    // 0x21dfe8: 0xc0b1fb4  jal         func_2C7ED0
    ctx->pc = 0x21DFE8u;
    SET_GPR_U32(ctx, 31, 0x21DFF0u);
    ctx->pc = 0x2C7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7ED0u, 0x21DFE8u, 0x21DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFF0u;
label_21dff0:
    // 0x21dff0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21dff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dff4: 0x12030002  beq         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DFF4u;
    {
        const bool branch_taken_0x21dff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x21DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFF4u;
        // 0x21dff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dff4) {
            ctx->pc = 0x21E000u;
            goto label_21e000;
        }
    }
    ctx->pc = 0x21DFFCu;
    // 0x21dffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21dffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e000:
    // 0x21e000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e008: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x21e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21e00c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E00Cu;
        // 0x21e010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E014u;
}

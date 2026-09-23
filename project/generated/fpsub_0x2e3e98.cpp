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

// Function: fpsub
// Address: 0x2e3e98 - 0x2e3efc
void fpsub_0x2e3e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpsub_0x2e3e98");
#endif

    switch (ctx->pc) {
        case 0x2e3eb8u: goto label_2e3eb8;
        case 0x2e3ec8u: goto label_2e3ec8;
        case 0x2e3ee4u: goto label_2e3ee4;
        case 0x2e3eecu: goto label_2e3eec;
        default: break;
    }

    ctx->pc = 0x2e3e98u;

    // 0x2e3e98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e3e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e3e9c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e3e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e3ea0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e3ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e3ea8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3eac: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2e3eacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3eb0: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E3EB0u;
    SET_GPR_U32(ctx, 31, 0x2E3EB8u);
    ctx->pc = 0x2E3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EB0u;
    // 0x2e3eb4: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E3EB0u, 0x2E3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EB8u;
label_2e3eb8:
    // 0x2e3eb8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e3eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3ebc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2e3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2e3ec0: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E3EC0u;
    SET_GPR_U32(ctx, 31, 0x2E3EC8u);
    ctx->pc = 0x2E3EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EC0u;
    // 0x2e3ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E3EC0u, 0x2E3EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EC8u;
label_2e3ec8:
    // 0x2e3ec8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e3ecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ed0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3ed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e3ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ed8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e3ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e3edc: 0xc0b8f02  jal         func_2E3C08
    ctx->pc = 0x2E3EDCu;
    SET_GPR_U32(ctx, 31, 0x2E3EE4u);
    ctx->pc = 0x2E3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EDCu;
    // 0x2e3ee0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C08u, 0x2E3EDCu, 0x2E3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EE4u;
label_2e3ee4:
    // 0x2e3ee4: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E3EE4u;
    SET_GPR_U32(ctx, 31, 0x2E3EECu);
    ctx->pc = 0x2E3EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EE4u;
    // 0x2e3ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E3EE4u, 0x2E3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EECu;
label_2e3eec:
    // 0x2e3eec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e3eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3ef0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e3ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3EF4u;
        // 0x2e3ef8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3EFCu;
}

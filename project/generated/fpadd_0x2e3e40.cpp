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

// Function: fpadd
// Address: 0x2e3e40 - 0x2e3e98
void fpadd_0x2e3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpadd_0x2e3e40");
#endif

    switch (ctx->pc) {
        case 0x2e3e60u: goto label_2e3e60;
        case 0x2e3e70u: goto label_2e3e70;
        case 0x2e3e80u: goto label_2e3e80;
        case 0x2e3e88u: goto label_2e3e88;
        default: break;
    }

    ctx->pc = 0x2e3e40u;

    // 0x2e3e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e3e44: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e3e48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3e4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e3e50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e3e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e54: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2e3e54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3e58: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E3E58u;
    SET_GPR_U32(ctx, 31, 0x2E3E60u);
    ctx->pc = 0x2E3E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E58u;
    // 0x2e3e5c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E3E58u, 0x2E3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E60u;
label_2e3e60:
    // 0x2e3e60: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e3e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3e64: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2e3e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2e3e68: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E3E68u;
    SET_GPR_U32(ctx, 31, 0x2E3E70u);
    ctx->pc = 0x2E3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E68u;
    // 0x2e3e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E3E68u, 0x2E3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E70u;
label_2e3e70:
    // 0x2e3e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e74: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e3e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3e78: 0xc0b8f02  jal         func_2E3C08
    ctx->pc = 0x2E3E78u;
    SET_GPR_U32(ctx, 31, 0x2E3E80u);
    ctx->pc = 0x2E3E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E78u;
    // 0x2e3e7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C08u, 0x2E3E78u, 0x2E3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E80u;
label_2e3e80:
    // 0x2e3e80: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E3E80u;
    SET_GPR_U32(ctx, 31, 0x2E3E88u);
    ctx->pc = 0x2E3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E80u;
    // 0x2e3e84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E3E80u, 0x2E3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E88u;
label_2e3e88:
    // 0x2e3e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e3e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3e8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e3e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E90u;
        // 0x2e3e94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E98u;
}

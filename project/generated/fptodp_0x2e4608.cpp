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

// Function: fptodp
// Address: 0x2e4608 - 0x2e4648
void fptodp_0x2e4608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x2e4608");
#endif

    switch (ctx->pc) {
        case 0x2e4620u: goto label_2e4620;
        case 0x2e463cu: goto label_2e463c;
        default: break;
    }

    ctx->pc = 0x2e4608u;

    // 0x2e4608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e460c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e460cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4610: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e4610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4614: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2e4614u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4618: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4618u;
    SET_GPR_U32(ctx, 31, 0x2E4620u);
    ctx->pc = 0x2E461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4618u;
    // 0x2e461c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4618u, 0x2E4620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4620u;
label_2e4620:
    // 0x2e4620: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2e4620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e4624: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2e4624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4628: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2e4628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2e462c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2e462cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e4630: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2e4630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4634: 0xc0b8e78  jal         func_2E39E0
    ctx->pc = 0x2E4634u;
    SET_GPR_U32(ctx, 31, 0x2E463Cu);
    ctx->pc = 0x2E4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4634u;
    // 0x2e4638: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E39E0u, 0x2E4634u, 0x2E463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E463Cu;
label_2e463c:
    // 0x2e463c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4640: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4640u;
        // 0x2e4644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4648u;
}

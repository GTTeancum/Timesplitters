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

// Function: ingamemenuClear
// Address: 0x212a90 - 0x212ae4
void ingamemenuClear_0x212a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ingamemenuClear_0x212a90");
#endif

    switch (ctx->pc) {
        case 0x212aa4u: goto label_212aa4;
        case 0x212ab0u: goto label_212ab0;
        default: break;
    }

    ctx->pc = 0x212a90u;

    // 0x212a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212a9c: 0xc08b2d0  jal         func_22CB40
    ctx->pc = 0x212A9Cu;
    SET_GPR_U32(ctx, 31, 0x212AA4u);
    ctx->pc = 0x212AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A9Cu;
    // 0x212aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB40u, 0x212A9Cu, 0x212AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AA4u;
label_212aa4:
    // 0x212aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212aa8: 0xc08b2d0  jal         func_22CB40
    ctx->pc = 0x212AA8u;
    SET_GPR_U32(ctx, 31, 0x212AB0u);
    ctx->pc = 0x212AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AA8u;
    // 0x212aac: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB40u, 0x212AA8u, 0x212AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AB0u;
label_212ab0:
    // 0x212ab0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x212ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x212ab4: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x212ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x212ab8: 0x2048018  mult        $s0, $s0, $a0
    ctx->pc = 0x212ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x212abc: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x212abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x212ac0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x212ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x212ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ac8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x212ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x212acc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x212accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212ad0: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x212ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x212ad4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x212ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x212ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212adc: 0x3e00008  jr          $ra
    ctx->pc = 0x212ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ADCu;
        // 0x212ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212AE4u;
}

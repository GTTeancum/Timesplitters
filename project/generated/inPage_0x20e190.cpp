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

// Function: inPage
// Address: 0x20e190 - 0x20e1e8
void inPage_0x20e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("inPage_0x20e190");
#endif

    switch (ctx->pc) {
        case 0x20e1ccu: goto label_20e1cc;
        default: break;
    }

    ctx->pc = 0x20e190u;

    // 0x20e190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e194: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x20e198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e19c: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x20e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x20e1a0: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x20e1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x20e1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e1a8: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x20e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x20e1ac: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x20e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x20e1b0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20e1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20e1b4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x20e1b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e1b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e1bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20e1c0: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x20e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x20e1c4: 0xc081546  jal         func_205518
    ctx->pc = 0x20E1C4u;
    SET_GPR_U32(ctx, 31, 0x20E1CCu);
    ctx->pc = 0x20E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1C4u;
    // 0x20e1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20E1C4u, 0x20E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1CCu;
label_20e1cc:
    // 0x20e1cc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x20e1ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x20e1d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e1d8: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x20e1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1E0u;
        // 0x20e1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E1E8u;
}

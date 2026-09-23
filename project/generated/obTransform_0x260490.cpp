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

// Function: obTransform
// Address: 0x260490 - 0x2604dc
void obTransform_0x260490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obTransform_0x260490");
#endif

    switch (ctx->pc) {
        case 0x2604b8u: goto label_2604b8;
        default: break;
    }

    ctx->pc = 0x260490u;

    // 0x260490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x260494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26049c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2604a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2604a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2604a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2604a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2604acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2604b0: 0xc098096  jal         func_260258
    ctx->pc = 0x2604B0u;
    SET_GPR_U32(ctx, 31, 0x2604B8u);
    ctx->pc = 0x2604B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604B0u;
    // 0x2604b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260258u, 0x2604B0u, 0x2604B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604B8u;
label_2604b8:
    // 0x2604b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2604b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2604bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2604c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2604c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2604c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2604c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2604cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2604ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2604d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2604d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2604d4: 0x8098096  j           func_260258
    ctx->pc = 0x2604D4u;
    ctx->pc = 0x2604D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604D4u;
    // 0x2604d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260258u;
    partTransform_0x260258(rdram, ctx, runtime); return;
    ctx->pc = 0x2604DCu;
}

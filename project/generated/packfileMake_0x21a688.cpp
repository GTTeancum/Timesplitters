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

// Function: packfileMake
// Address: 0x21a688 - 0x21a6ec
void packfileMake_0x21a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("packfileMake_0x21a688");
#endif

    switch (ctx->pc) {
        case 0x21a6a8u: goto label_21a6a8;
        case 0x21a6bcu: goto label_21a6bc;
        case 0x21a6d0u: goto label_21a6d0;
        default: break;
    }

    ctx->pc = 0x21a688u;

    // 0x21a688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a68c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21a690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a694: 0x24840708  addiu       $a0, $a0, 0x708
    ctx->pc = 0x21a694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1800));
    // 0x21a698: 0xaf80b6b8  sw          $zero, -0x4948($gp)
    ctx->pc = 0x21a698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948536), GPR_U32(ctx, 0));
    // 0x21a69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6a0: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x21A6A0u;
    SET_GPR_U32(ctx, 31, 0x21A6A8u);
    ctx->pc = 0x21A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6A0u;
    // 0x21a6a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F10u, 0x21A6A0u, 0x21A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6A8u;
label_21a6a8:
    // 0x21a6a8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21a6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6b0: 0x24840720  addiu       $a0, $a0, 0x720
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1824));
    // 0x21a6b4: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x21A6B4u;
    SET_GPR_U32(ctx, 31, 0x21A6BCu);
    ctx->pc = 0x21A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6B4u;
    // 0x21a6b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F10u, 0x21A6B4u, 0x21A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6BCu;
label_21a6bc:
    // 0x21a6bc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21a6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6c4: 0x24840738  addiu       $a0, $a0, 0x738
    ctx->pc = 0x21a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    // 0x21a6c8: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x21A6C8u;
    SET_GPR_U32(ctx, 31, 0x21A6D0u);
    ctx->pc = 0x21A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6C8u;
    // 0x21a6cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F10u, 0x21A6C8u, 0x21A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6D0u;
label_21a6d0:
    // 0x21a6d0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x21a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x21a6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6dc: 0x24840750  addiu       $a0, $a0, 0x750
    ctx->pc = 0x21a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x21a6e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21a6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a6e4: 0x80867c4  j           func_219F10
    ctx->pc = 0x21A6E4u;
    ctx->pc = 0x21A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6E4u;
    // 0x21a6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F10u;
    packfileLoad_0x219f10(rdram, ctx, runtime); return;
    ctx->pc = 0x21A6ECu;
}

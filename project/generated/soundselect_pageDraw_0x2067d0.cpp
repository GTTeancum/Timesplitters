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

// Function: soundselect_pageDraw
// Address: 0x2067d0 - 0x206804
void soundselect_pageDraw_0x2067d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundselect_pageDraw_0x2067d0");
#endif

    switch (ctx->pc) {
        case 0x2067e8u: goto label_2067e8;
        default: break;
    }

    ctx->pc = 0x2067d0u;

    // 0x2067d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2067d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2067d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2067d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2067d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2067dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2067e0: 0xc0adfaa  jal         func_2B7EA8
    ctx->pc = 0x2067E0u;
    SET_GPR_U32(ctx, 31, 0x2067E8u);
    ctx->pc = 0x2067E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067E0u;
    // 0x2067e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EA8u, 0x2067E0u, 0x2067E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067E8u;
label_2067e8:
    // 0x2067e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2067e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067ec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2067f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2067f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2067f4: 0x24a59b08  addiu       $a1, $a1, -0x64F8
    ctx->pc = 0x2067f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941448));
    // 0x2067f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2067f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2067fc: 0x808195e  j           func_206578
    ctx->pc = 0x2067FCu;
    ctx->pc = 0x206800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067FCu;
    // 0x206800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206578u;
    pagedrawbg_0x206578(rdram, ctx, runtime); return;
    ctx->pc = 0x206804u;
}

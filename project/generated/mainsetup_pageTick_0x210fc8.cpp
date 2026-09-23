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

// Function: mainsetup_pageTick
// Address: 0x210fc8 - 0x211018
void mainsetup_pageTick_0x210fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mainsetup_pageTick_0x210fc8");
#endif

    switch (ctx->pc) {
        case 0x210fecu: goto label_210fec;
        case 0x210ff8u: goto label_210ff8;
        default: break;
    }

    ctx->pc = 0x210fc8u;

    // 0x210fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210fd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x210fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x210fd4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x210fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x210fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fdc: 0x2610aa60  addiu       $s0, $s0, -0x55A0
    ctx->pc = 0x210fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945376));
    // 0x210fe0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210fe4: 0xc083890  jal         func_20E240
    ctx->pc = 0x210FE4u;
    SET_GPR_U32(ctx, 31, 0x210FECu);
    ctx->pc = 0x210FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FE4u;
    // 0x210fe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E240u, 0x210FE4u, 0x210FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FECu;
label_210fec:
    // 0x210fec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x210fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x210ff0: 0xc08b6be  jal         func_22DAF8
    ctx->pc = 0x210FF0u;
    SET_GPR_U32(ctx, 31, 0x210FF8u);
    ctx->pc = 0x210FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FF0u;
    // 0x210ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAF8u, 0x210FF0u, 0x210FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FF8u;
label_210ff8:
    // 0x210ff8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x210ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x210ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211008: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x211008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x21100c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21100cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211010: 0x3e00008  jr          $ra
    ctx->pc = 0x211010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211010u;
        // 0x211014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211018u;
}

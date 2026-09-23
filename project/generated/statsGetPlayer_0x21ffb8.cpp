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

// Function: statsGetPlayer
// Address: 0x21ffb8 - 0x220010
void statsGetPlayer_0x21ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("statsGetPlayer_0x21ffb8");
#endif

    switch (ctx->pc) {
        case 0x21ffc8u: goto label_21ffc8;
        default: break;
    }

    ctx->pc = 0x21ffb8u;

    // 0x21ffb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ffbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ffc0: 0xc08828c  jal         func_220A30
    ctx->pc = 0x21FFC0u;
    SET_GPR_U32(ctx, 31, 0x21FFC8u);
    ctx->pc = 0x220A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220A30u, 0x21FFC0u, 0x21FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFC8u;
label_21ffc8:
    // 0x21ffc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffcc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21ffd0: 0x8c62c4f8  lw          $v0, -0x3B08($v1)
    ctx->pc = 0x21ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x32C4F8u));
    // 0x21ffd4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x21ffd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x21ffd8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FFD8u;
    {
        const bool branch_taken_0x21ffd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ffd8) {
            ctx->pc = 0x21FFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FFD8u;
            // 0x21ffdc: 0x3c0201fc  lui         $v0, 0x1FC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FFECu;
            goto label_21ffec;
        }
    }
    ctx->pc = 0x21FFE0u;
    // 0x21ffe0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FFE0u;
    {
        const bool branch_taken_0x21ffe0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x21FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFE0u;
        // 0x21ffe4: 0x24030b78  addiu       $v1, $zero, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffe0) {
            ctx->pc = 0x21FFF4u;
            goto label_21fff4;
        }
    }
    ctx->pc = 0x21FFE8u;
    // 0x21ffe8: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x21ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
label_21ffec:
    // 0x21ffec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21FFECu;
    {
        const bool branch_taken_0x21ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFECu;
        // 0x21fff0: 0x2442c168  addiu       $v0, $v0, -0x3E98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffec) {
            ctx->pc = 0x220004u;
            goto label_220004;
        }
    }
    ctx->pc = 0x21FFF4u;
label_21fff4:
    // 0x21fff4: 0x8f829dd8  lw          $v0, -0x6228($gp)
    ctx->pc = 0x21fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942168)));
    // 0x21fff8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x21fff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21fffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220000: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x220000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_220004:
    // 0x220004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220008: 0x3e00008  jr          $ra
    ctx->pc = 0x220008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220008u;
        // 0x22000c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220010u;
}

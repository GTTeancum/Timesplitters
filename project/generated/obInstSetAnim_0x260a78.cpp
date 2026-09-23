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

// Function: obInstSetAnim
// Address: 0x260a78 - 0x260adc
void obInstSetAnim_0x260a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("obInstSetAnim_0x260a78");
#endif

    ctx->pc = 0x260a78u;

    // 0x260a78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x260a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260a7c: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x260a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x260a80: 0xe48c008c  swc1        $f12, 0x8C($a0)
    ctx->pc = 0x260a80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x260a84: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x260a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x260a88: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x260a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x260a8c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x260a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x260a90: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x260a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x260a94: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x260a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x260a98: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x260a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x260a9c: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x260a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x260aa0: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x260aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x260aa4: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x260aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x260aa8: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x260aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x260aac: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x260aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x260ab0: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x260ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x260ab4: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x260ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x260ab8: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x260ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x260abc: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x260abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x260ac0: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x260ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x260ac4: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x260ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x260ac8: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x260ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x260acc: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x260accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x260ad0: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x260ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x260ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x260AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AD4u;
        // 0x260ad8: 0xac8000b8  sw          $zero, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260ADCu;
}

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

// Function: weatherSet
// Address: 0x2a8038 - 0x2a8074
void weatherSet_0x2a8038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("weatherSet_0x2a8038");
#endif

    ctx->pc = 0x2a8038u;

    // 0x2a8038: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2a8038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2a803c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a803cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8040: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2a8040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2a8044: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a8044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a8048: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x2a8048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x2a804c: 0x2463a690  addiu       $v1, $v1, -0x5970
    ctx->pc = 0x2a804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944400));
    // 0x2a8050: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2a8050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A708u, _value); } while (0); }
    // 0x2a8054: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a8054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36A6D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A6D4u, _value); } while (0);
    // 0x2a8058: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2a8058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A70Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A70Cu, _value); } while (0);
    // 0x2a805c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a805cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A6DCu, _value); } while (0);
    // 0x2a8060: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2a8060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A6E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A6E8u, _value); } while (0);
    // 0x2a8064: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2a8064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A6F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A6F4u, _value); } while (0);
    // 0x2a8068: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2a8068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A700u, _value); } while (0); }
    // 0x2a806c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A806Cu;
        // 0x2a8070: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8074u;
}

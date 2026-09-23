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

// Function: blastringNew
// Address: 0x2a7298 - 0x2a72ec
void blastringNew_0x2a7298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("blastringNew_0x2a7298");
#endif

    ctx->pc = 0x2a7298u;

    // 0x2a7298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a729c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a729cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a72a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a72a4: 0x8f83b328  lw          $v1, -0x4CD8($gp)
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947624)));
    // 0x2a72a8: 0x2482a5d8  addiu       $v0, $a0, -0x5A28
    ctx->pc = 0x2a72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944216));
    // 0x2a72ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a72acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2a72b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a72b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a72b4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2a72b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2a72b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a72b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a72bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a72c0: 0xe480a5d8  swc1        $f0, -0x5A28($a0)
    ctx->pc = 0x2a72c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5D8u, _value); } while (0); }
    // 0x2a72c4: 0xaf83b328  sw          $v1, -0x4CD8($gp)
    ctx->pc = 0x2a72c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947624), GPR_U32(ctx, 3));
    // 0x2a72c8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2a72c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A5DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5DCu, _value); } while (0); }
    // 0x2a72cc: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2a72ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5E8u, _value); } while (0); }
    // 0x2a72d0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a72d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5F0u, _value); } while (0); }
    // 0x2a72d4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2a72d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A5F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5F8u, _value); } while (0);
    // 0x2a72d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a72d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x36A5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5E0u, _value); } while (0); }
    // 0x2a72dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a72dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A5E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5E4u, _value); } while (0);
    // 0x2a72e0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a72e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36A5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36A5ECu, _value); } while (0);
    // 0x2a72e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A72E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72E4u;
        // 0x2a72e8: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A72ECu;
}

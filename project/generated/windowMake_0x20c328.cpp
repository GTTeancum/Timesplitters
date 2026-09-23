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

// Function: windowMake
// Address: 0x20c328 - 0x20c374
void windowMake_0x20c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("windowMake_0x20c328");
#endif

    ctx->pc = 0x20c328u;

    // 0x20c328: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20c328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20c32c: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x20c32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x20c330: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x20c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x20c334: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x20c334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x20c338: 0x2403027f  addiu       $v1, $zero, 0x27F
    ctx->pc = 0x20c338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x20c33c: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x20c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x20c340: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x20c340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x20c344: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x20c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20c348: 0xac48004c  sw          $t0, 0x4C($v0)
    ctx->pc = 0x20c348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x329A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A3Cu, _value); } while (0);
    // 0x20c34c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x20c34cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x329A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A1Cu, _value); } while (0);
    // 0x20c350: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x20c350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x329A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A24u, _value); } while (0);
    // 0x20c354: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x20c354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x329A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A28u, _value); } while (0);
    // 0x20c358: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x20c358u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x329A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A30u, _value); } while (0);
    // 0x20c35c: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x20c35cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x329A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A38u, _value); } while (0);
    // 0x20c360: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x20c360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x329A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A18u, _value); } while (0);
    // 0x20c364: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x20c364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x329A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A20u, _value); } while (0);
    // 0x20c368: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x20c368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x329A2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x329A2Cu, _value); } while (0);
    // 0x20c36c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C36Cu;
        // 0x20c370: 0xac480044  sw          $t0, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C374u;
}

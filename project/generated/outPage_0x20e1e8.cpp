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

// Function: outPage
// Address: 0x20e1e8 - 0x20e240
void outPage_0x20e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("outPage_0x20e1e8");
#endif

    switch (ctx->pc) {
        case 0x20e224u: goto label_20e224;
        default: break;
    }

    ctx->pc = 0x20e1e8u;

    // 0x20e1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e1ec: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x20e1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e1f4: 0x3c0301fb  lui         $v1, 0x1FB
    ctx->pc = 0x20e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)507 << 16));
    // 0x20e1f8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x20e1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x20e1fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e200: 0x24633240  addiu       $v1, $v1, 0x3240
    ctx->pc = 0x20e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12864));
    // 0x20e204: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x20e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x20e208: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20e208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20e20c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x20e20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20e210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e214: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20e218: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x20e218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x20e21c: 0xc081546  jal         func_205518
    ctx->pc = 0x20E21Cu;
    SET_GPR_U32(ctx, 31, 0x20E224u);
    ctx->pc = 0x20E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E21Cu;
    // 0x20e220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x20E21Cu, 0x20E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E224u;
label_20e224:
    // 0x20e224: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x20e224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x20e228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e22c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20e230: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x20e230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e238: 0x3e00008  jr          $ra
    ctx->pc = 0x20E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E238u;
        // 0x20e23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E240u;
}

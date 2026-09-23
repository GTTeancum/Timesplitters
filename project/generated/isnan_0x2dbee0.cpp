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

// Function: isnan
// Address: 0x2dbee0 - 0x2dbf18
void isnan_0x2dbee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isnan_0x2dbee0");
#endif

    ctx->pc = 0x2dbee0u;

    // 0x2dbee0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2dbee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2dbee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2dbee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dbee8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2dbee8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2dbeec: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2dbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2dbef0: 0x22823  negu        $a1, $v0
    ctx->pc = 0x2dbef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2dbef4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dbef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dbef8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2dbef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2dbefc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2dbefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2dbf00: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2dbf04: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2dbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2dbf08: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2dbf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2dbf0c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x2dbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dbf10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF10u;
        // 0x2dbf14: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBF18u;
}

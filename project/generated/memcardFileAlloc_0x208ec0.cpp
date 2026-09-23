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

// Function: memcardFileAlloc
// Address: 0x208ec0 - 0x208ee8
void memcardFileAlloc_0x208ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memcardFileAlloc_0x208ec0");
#endif

    switch (ctx->pc) {
        case 0x208edcu: goto label_208edc;
        default: break;
    }

    ctx->pc = 0x208ec0u;

    // 0x208ec0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x208ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x208ec4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208ec8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x208ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x208ecc: 0x24840017  addiu       $a0, $a0, 0x17
    ctx->pc = 0x208eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23));
    // 0x208ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208ed4: 0xc08070e  jal         func_201C38
    ctx->pc = 0x208ED4u;
    SET_GPR_U32(ctx, 31, 0x208EDCu);
    ctx->pc = 0x208ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208ED4u;
    // 0x208ed8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C38u, 0x208ED4u, 0x208EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EDCu;
label_208edc:
    // 0x208edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x208EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EE0u;
        // 0x208ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208EE8u;
}

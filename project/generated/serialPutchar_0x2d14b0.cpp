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

// Function: serialPutchar
// Address: 0x2d14b0 - 0x2d14e4
void serialPutchar_0x2d14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("serialPutchar_0x2d14b0");
#endif

    switch (ctx->pc) {
        case 0x2d14c8u: goto label_2d14c8;
        default: break;
    }

    ctx->pc = 0x2d14b0u;

    // 0x2d14b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d14b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d14b8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D14B8u;
    {
        const bool branch_taken_0x2d14b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14B8u;
        // 0x2d14bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14b8) {
            ctx->pc = 0x2D14D8u;
            goto label_2d14d8;
        }
    }
    ctx->pc = 0x2D14C0u;
    // 0x2d14c0: 0xc0b44f2  jal         func_2D13C8
    ctx->pc = 0x2D14C0u;
    SET_GPR_U32(ctx, 31, 0x2D14C8u);
    ctx->pc = 0x2D14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14C0u;
    // 0x2d14c4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D13C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D13C8u, 0x2D14C0u, 0x2D14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14C8u;
label_2d14c8:
    // 0x2d14c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d14c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d14cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d14ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d14d0: 0x80b44f2  j           func_2D13C8
    ctx->pc = 0x2D14D0u;
    ctx->pc = 0x2D14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14D0u;
    // 0x2d14d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D13C8u;
    kputchar_0x2d13c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D14D8u;
label_2d14d8:
    // 0x2d14d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d14d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d14dc: 0x80b44f2  j           func_2D13C8
    ctx->pc = 0x2D14DCu;
    ctx->pc = 0x2D14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14DCu;
    // 0x2d14e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D13C8u;
    kputchar_0x2d13c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D14E4u;
}

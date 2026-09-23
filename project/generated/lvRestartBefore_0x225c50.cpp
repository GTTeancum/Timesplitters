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

// Function: lvRestartBefore
// Address: 0x225c50 - 0x225cd4
void lvRestartBefore_0x225c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvRestartBefore_0x225c50");
#endif

    switch (ctx->pc) {
        case 0x225c60u: goto label_225c60;
        case 0x225c68u: goto label_225c68;
        case 0x225c70u: goto label_225c70;
        case 0x225c78u: goto label_225c78;
        case 0x225c80u: goto label_225c80;
        case 0x225c88u: goto label_225c88;
        case 0x225c90u: goto label_225c90;
        case 0x225c98u: goto label_225c98;
        case 0x225ca0u: goto label_225ca0;
        case 0x225ca8u: goto label_225ca8;
        case 0x225cb0u: goto label_225cb0;
        case 0x225cb8u: goto label_225cb8;
        case 0x225cc0u: goto label_225cc0;
        case 0x225cc8u: goto label_225cc8;
        default: break;
    }

    ctx->pc = 0x225c50u;

    // 0x225c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225c58: 0xc0869bc  jal         func_21A6F0
    ctx->pc = 0x225C58u;
    SET_GPR_U32(ctx, 31, 0x225C60u);
    ctx->pc = 0x21A6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6F0u, 0x225C58u, 0x225C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C60u;
label_225c60:
    // 0x225c60: 0xc08574c  jal         func_215D30
    ctx->pc = 0x225C60u;
    SET_GPR_U32(ctx, 31, 0x225C68u);
    ctx->pc = 0x215D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215D30u, 0x225C60u, 0x225C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C68u;
label_225c68:
    // 0x225c68: 0xc0807a6  jal         func_201E98
    ctx->pc = 0x225C68u;
    SET_GPR_U32(ctx, 31, 0x225C70u);
    ctx->pc = 0x225C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C68u;
    // 0x225c6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E98u, 0x225C68u, 0x225C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C70u;
label_225c70:
    // 0x225c70: 0xc0adab2  jal         func_2B6AC8
    ctx->pc = 0x225C70u;
    SET_GPR_U32(ctx, 31, 0x225C78u);
    ctx->pc = 0x2B6AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AC8u, 0x225C70u, 0x225C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C78u;
label_225c78:
    // 0x225c78: 0xc0a9982  jal         func_2A6608
    ctx->pc = 0x225C78u;
    SET_GPR_U32(ctx, 31, 0x225C80u);
    ctx->pc = 0x2A6608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6608u, 0x225C78u, 0x225C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C80u;
label_225c80:
    // 0x225c80: 0xc0b36be  jal         func_2CDAF8
    ctx->pc = 0x225C80u;
    SET_GPR_U32(ctx, 31, 0x225C88u);
    ctx->pc = 0x2CDAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDAF8u, 0x225C80u, 0x225C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C88u;
label_225c88:
    // 0x225c88: 0xc097462  jal         func_25D188
    ctx->pc = 0x225C88u;
    SET_GPR_U32(ctx, 31, 0x225C90u);
    ctx->pc = 0x25D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D188u, 0x225C88u, 0x225C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C90u;
label_225c90:
    // 0x225c90: 0xc099bb0  jal         func_266EC0
    ctx->pc = 0x225C90u;
    SET_GPR_U32(ctx, 31, 0x225C98u);
    ctx->pc = 0x266EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266EC0u, 0x225C90u, 0x225C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C98u;
label_225c98:
    // 0x225c98: 0xc0a13f2  jal         func_284FC8
    ctx->pc = 0x225C98u;
    SET_GPR_U32(ctx, 31, 0x225CA0u);
    ctx->pc = 0x284FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC8u, 0x225C98u, 0x225CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CA0u;
label_225ca0:
    // 0x225ca0: 0xc09f8be  jal         func_27E2F8
    ctx->pc = 0x225CA0u;
    SET_GPR_U32(ctx, 31, 0x225CA8u);
    ctx->pc = 0x27E2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E2F8u, 0x225CA0u, 0x225CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CA8u;
label_225ca8:
    // 0x225ca8: 0xc0830de  jal         func_20C378
    ctx->pc = 0x225CA8u;
    SET_GPR_U32(ctx, 31, 0x225CB0u);
    ctx->pc = 0x20C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C378u, 0x225CA8u, 0x225CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CB0u;
label_225cb0:
    // 0x225cb0: 0xc08b29c  jal         func_22CA70
    ctx->pc = 0x225CB0u;
    SET_GPR_U32(ctx, 31, 0x225CB8u);
    ctx->pc = 0x22CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CA70u, 0x225CB0u, 0x225CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CB8u;
label_225cb8:
    // 0x225cb8: 0xc0ae75c  jal         func_2B9D70
    ctx->pc = 0x225CB8u;
    SET_GPR_U32(ctx, 31, 0x225CC0u);
    ctx->pc = 0x2B9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9D70u, 0x225CB8u, 0x225CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CC0u;
label_225cc0:
    // 0x225cc0: 0xc081130  jal         func_2044C0
    ctx->pc = 0x225CC0u;
    SET_GPR_U32(ctx, 31, 0x225CC8u);
    ctx->pc = 0x2044C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044C0u, 0x225CC0u, 0x225CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CC8u;
label_225cc8:
    // 0x225cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225ccc: 0x80969c4  j           func_25A710
    ctx->pc = 0x225CCCu;
    ctx->pc = 0x225CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CCCu;
    // 0x225cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A710u;
    bglightRestart_0x25a710(rdram, ctx, runtime); return;
    ctx->pc = 0x225CD4u;
}

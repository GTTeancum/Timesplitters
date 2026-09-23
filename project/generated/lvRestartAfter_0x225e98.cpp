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

// Function: lvRestartAfter
// Address: 0x225e98 - 0x225f64
void lvRestartAfter_0x225e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lvRestartAfter_0x225e98");
#endif

    switch (ctx->pc) {
        case 0x225ea8u: goto label_225ea8;
        case 0x225eb0u: goto label_225eb0;
        case 0x225eb8u: goto label_225eb8;
        case 0x225ec0u: goto label_225ec0;
        case 0x225ec8u: goto label_225ec8;
        case 0x225ed0u: goto label_225ed0;
        case 0x225ed8u: goto label_225ed8;
        case 0x225ee0u: goto label_225ee0;
        case 0x225ee8u: goto label_225ee8;
        case 0x225ef0u: goto label_225ef0;
        case 0x225ef8u: goto label_225ef8;
        case 0x225f00u: goto label_225f00;
        case 0x225f08u: goto label_225f08;
        case 0x225f10u: goto label_225f10;
        case 0x225f18u: goto label_225f18;
        case 0x225f20u: goto label_225f20;
        case 0x225f28u: goto label_225f28;
        case 0x225f30u: goto label_225f30;
        case 0x225f38u: goto label_225f38;
        case 0x225f40u: goto label_225f40;
        case 0x225f48u: goto label_225f48;
        case 0x225f50u: goto label_225f50;
        case 0x225f58u: goto label_225f58;
        default: break;
    }

    ctx->pc = 0x225e98u;

    // 0x225e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225ea0: 0xc0882e8  jal         func_220BA0
    ctx->pc = 0x225EA0u;
    SET_GPR_U32(ctx, 31, 0x225EA8u);
    ctx->pc = 0x220BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BA0u, 0x225EA0u, 0x225EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EA8u;
label_225ea8:
    // 0x225ea8: 0xc080804  jal         func_202010
    ctx->pc = 0x225EA8u;
    SET_GPR_U32(ctx, 31, 0x225EB0u);
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x225EA8u, 0x225EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EB0u;
label_225eb0:
    // 0x225eb0: 0xc0811d2  jal         func_204748
    ctx->pc = 0x225EB0u;
    SET_GPR_U32(ctx, 31, 0x225EB8u);
    ctx->pc = 0x204748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204748u, 0x225EB0u, 0x225EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EB8u;
label_225eb8:
    // 0x225eb8: 0xc09caa2  jal         func_272A88
    ctx->pc = 0x225EB8u;
    SET_GPR_U32(ctx, 31, 0x225EC0u);
    ctx->pc = 0x272A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A88u, 0x225EB8u, 0x225EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC0u;
label_225ec0:
    // 0x225ec0: 0xc0a5a4a  jal         func_296928
    ctx->pc = 0x225EC0u;
    SET_GPR_U32(ctx, 31, 0x225EC8u);
    ctx->pc = 0x296928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296928u, 0x225EC0u, 0x225EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC8u;
label_225ec8:
    // 0x225ec8: 0xc0aa006  jal         func_2A8018
    ctx->pc = 0x225EC8u;
    SET_GPR_U32(ctx, 31, 0x225ED0u);
    ctx->pc = 0x2A8018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8018u, 0x225EC8u, 0x225ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225ED0u;
label_225ed0:
    // 0x225ed0: 0xc0a99ca  jal         func_2A6728
    ctx->pc = 0x225ED0u;
    SET_GPR_U32(ctx, 31, 0x225ED8u);
    ctx->pc = 0x2A6728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6728u, 0x225ED0u, 0x225ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225ED8u;
label_225ed8:
    // 0x225ed8: 0xc0aa1de  jal         func_2A8778
    ctx->pc = 0x225ED8u;
    SET_GPR_U32(ctx, 31, 0x225EE0u);
    ctx->pc = 0x2A8778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8778u, 0x225ED8u, 0x225EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EE0u;
label_225ee0:
    // 0x225ee0: 0xc09dedc  jal         func_277B70
    ctx->pc = 0x225EE0u;
    SET_GPR_U32(ctx, 31, 0x225EE8u);
    ctx->pc = 0x277B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B70u, 0x225EE0u, 0x225EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EE8u;
label_225ee8:
    // 0x225ee8: 0xc0aa5e0  jal         func_2A9780
    ctx->pc = 0x225EE8u;
    SET_GPR_U32(ctx, 31, 0x225EF0u);
    ctx->pc = 0x2A9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9780u, 0x225EE8u, 0x225EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EF0u;
label_225ef0:
    // 0x225ef0: 0xc0807a6  jal         func_201E98
    ctx->pc = 0x225EF0u;
    SET_GPR_U32(ctx, 31, 0x225EF8u);
    ctx->pc = 0x225EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EF0u;
    // 0x225ef4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E98u, 0x225EF0u, 0x225EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EF8u;
label_225ef8:
    // 0x225ef8: 0xc08492a  jal         func_2124A8
    ctx->pc = 0x225EF8u;
    SET_GPR_U32(ctx, 31, 0x225F00u);
    ctx->pc = 0x2124A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124A8u, 0x225EF8u, 0x225F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F00u;
label_225f00:
    // 0x225f00: 0xc09599c  jal         func_256670
    ctx->pc = 0x225F00u;
    SET_GPR_U32(ctx, 31, 0x225F08u);
    ctx->pc = 0x256670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256670u, 0x225F00u, 0x225F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F08u;
label_225f08:
    // 0x225f08: 0xc0a9e10  jal         func_2A7840
    ctx->pc = 0x225F08u;
    SET_GPR_U32(ctx, 31, 0x225F10u);
    ctx->pc = 0x2A7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7840u, 0x225F08u, 0x225F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F10u;
label_225f10:
    // 0x225f10: 0xc099080  jal         func_264200
    ctx->pc = 0x225F10u;
    SET_GPR_U32(ctx, 31, 0x225F18u);
    ctx->pc = 0x264200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264200u, 0x225F10u, 0x225F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F18u;
label_225f18:
    // 0x225f18: 0xc0ac224  jal         func_2B0890
    ctx->pc = 0x225F18u;
    SET_GPR_U32(ctx, 31, 0x225F20u);
    ctx->pc = 0x2B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0890u, 0x225F18u, 0x225F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F20u;
label_225f20:
    // 0x225f20: 0xc0a3606  jal         func_28D818
    ctx->pc = 0x225F20u;
    SET_GPR_U32(ctx, 31, 0x225F28u);
    ctx->pc = 0x28D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D818u, 0x225F20u, 0x225F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F28u;
label_225f28:
    // 0x225f28: 0xc0a2480  jal         func_289200
    ctx->pc = 0x225F28u;
    SET_GPR_U32(ctx, 31, 0x225F30u);
    ctx->pc = 0x289200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289200u, 0x225F28u, 0x225F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F30u;
label_225f30:
    // 0x225f30: 0xc0a549a  jal         func_295268
    ctx->pc = 0x225F30u;
    SET_GPR_U32(ctx, 31, 0x225F38u);
    ctx->pc = 0x295268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295268u, 0x225F30u, 0x225F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F38u;
label_225f38:
    // 0x225f38: 0xc09fe02  jal         func_27F808
    ctx->pc = 0x225F38u;
    SET_GPR_U32(ctx, 31, 0x225F40u);
    ctx->pc = 0x27F808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F808u, 0x225F38u, 0x225F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F40u;
label_225f40:
    // 0x225f40: 0xc08171e  jal         func_205C78
    ctx->pc = 0x225F40u;
    SET_GPR_U32(ctx, 31, 0x225F48u);
    ctx->pc = 0x205C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C78u, 0x225F40u, 0x225F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F48u;
label_225f48:
    // 0x225f48: 0xc083512  jal         func_20D448
    ctx->pc = 0x225F48u;
    SET_GPR_U32(ctx, 31, 0x225F50u);
    ctx->pc = 0x20D448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D448u, 0x225F48u, 0x225F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F50u;
label_225f50:
    // 0x225f50: 0xc0a8938  jal         func_2A24E0
    ctx->pc = 0x225F50u;
    SET_GPR_U32(ctx, 31, 0x225F58u);
    ctx->pc = 0x2A24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A24E0u, 0x225F50u, 0x225F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F58u;
label_225f58:
    // 0x225f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f5c: 0x8089afa  j           func_226BE8
    ctx->pc = 0x225F5Cu;
    ctx->pc = 0x225F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F5Cu;
    // 0x225f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BE8u;
    lvSoundsRestart_0x226be8(rdram, ctx, runtime); return;
    ctx->pc = 0x225F64u;
}

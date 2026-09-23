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

// Function: soundtoolStart
// Address: 0x207790 - 0x2077d8
void soundtoolStart_0x207790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("soundtoolStart_0x207790");
#endif

    switch (ctx->pc) {
        case 0x2077a0u: goto label_2077a0;
        case 0x2077bcu: goto label_2077bc;
        default: break;
    }

    ctx->pc = 0x207790u;

    // 0x207790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207798: 0xc0817a2  jal         func_205E88
    ctx->pc = 0x207798u;
    SET_GPR_U32(ctx, 31, 0x2077A0u);
    ctx->pc = 0x205E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E88u, 0x207798u, 0x2077A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2077A0u;
label_2077a0:
    // 0x2077a0: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2077a4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x2077a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x2077a8: 0x24a59710  addiu       $a1, $a1, -0x68F0
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940432));
    // 0x2077ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2077acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077b0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2077b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2077b4: 0xc08b3ac  jal         func_22CEB0
    ctx->pc = 0x2077B4u;
    SET_GPR_U32(ctx, 31, 0x2077BCu);
    ctx->pc = 0x2077B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2077B4u;
    // 0x2077b8: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB0u, 0x2077B4u, 0x2077BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2077BCu;
label_2077bc:
    // 0x2077bc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2077c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2077c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2077c4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2077c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2077c8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2077c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2077cc: 0x8f849b40  lw          $a0, -0x64C0($gp)
    ctx->pc = 0x2077ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941504)));
    // 0x2077d0: 0x8081800  j           func_206000
    ctx->pc = 0x2077D0u;
    ctx->pc = 0x2077D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2077D0u;
    // 0x2077d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206000u;
    setcursound_0x206000(rdram, ctx, runtime); return;
    ctx->pc = 0x2077D8u;
}

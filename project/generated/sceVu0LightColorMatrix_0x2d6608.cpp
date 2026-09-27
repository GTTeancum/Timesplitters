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

// Function: sceVu0LightColorMatrix
// Address: 0x2d6608 - 0x2d6670
void sceVu0LightColorMatrix_0x2d6608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0LightColorMatrix_0x2d6608");
#endif

    switch (ctx->pc) {
        case 0x2d6634u: goto label_2d6634;
        case 0x2d6640u: goto label_2d6640;
        case 0x2d664cu: goto label_2d664c;
        default: break;
    }

    ctx->pc = 0x2d6608u;

    // 0x2d6608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d660c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6614: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2d6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d6618: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d6618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d661c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d661cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6620: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d6620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6624: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d6624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6628: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d6628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d662c: 0xc0b5844  jal         func_2D6110
    ctx->pc = 0x2D662Cu;
    SET_GPR_U32(ctx, 31, 0x2D6634u);
    ctx->pc = 0x2D6630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D662Cu;
    // 0x2d6630: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6110u, 0x2D662Cu, 0x2D6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6634u;
label_2d6634:
    // 0x2d6634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6638: 0xc0b5844  jal         func_2D6110
    ctx->pc = 0x2D6638u;
    SET_GPR_U32(ctx, 31, 0x2D6640u);
    ctx->pc = 0x2D663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6638u;
    // 0x2d663c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6110u, 0x2D6638u, 0x2D6640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6640u;
label_2d6640:
    // 0x2d6640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6644: 0xc0b5844  jal         func_2D6110
    ctx->pc = 0x2D6644u;
    SET_GPR_U32(ctx, 31, 0x2D664Cu);
    ctx->pc = 0x2D6648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6644u;
    // 0x2d6648: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6110u, 0x2D6644u, 0x2D664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D664Cu;
label_2d664c:
    // 0x2d664c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2d664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d6650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d6650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6654: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d6654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6658: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2d6658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d665c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d665cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6660: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d6660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6668: 0x80b5844  j           func_2D6110
    ctx->pc = 0x2D6668u;
    ctx->pc = 0x2D666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6668u;
    // 0x2d666c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6110u;
    sceVu0CopyVector_0x2d6110(rdram, ctx, runtime); return;
    ctx->pc = 0x2D6670u;
}

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

// Function: frontmpgStoreGoodies
// Address: 0x240510 - 0x240558
void frontmpgStoreGoodies_0x240510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontmpgStoreGoodies_0x240510");
#endif

    switch (ctx->pc) {
        case 0x240524u: goto label_240524;
        case 0x24052cu: goto label_24052c;
        case 0x240534u: goto label_240534;
        case 0x240544u: goto label_240544;
        default: break;
    }

    ctx->pc = 0x240510u;

    // 0x240510: 0x8f829f4c  lw          $v0, -0x60B4($gp)
    ctx->pc = 0x240510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x240514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24051c: 0xc0900c8  jal         func_240320
    ctx->pc = 0x24051Cu;
    SET_GPR_U32(ctx, 31, 0x240524u);
    ctx->pc = 0x240520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24051Cu;
    // 0x240520: 0xaf82b7b0  sw          $v0, -0x4850($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948784), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240320u, 0x24051Cu, 0x240524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240524u;
label_240524:
    // 0x240524: 0xc09012c  jal         func_2404B0
    ctx->pc = 0x240524u;
    SET_GPR_U32(ctx, 31, 0x24052Cu);
    ctx->pc = 0x240528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240524u;
    // 0x240528: 0xaf82b7b4  sw          $v0, -0x484C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948788), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2404B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2404B0u, 0x240524u, 0x24052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24052Cu;
label_24052c:
    // 0x24052c: 0xc0900b6  jal         func_2402D8
    ctx->pc = 0x24052Cu;
    SET_GPR_U32(ctx, 31, 0x240534u);
    ctx->pc = 0x240530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24052Cu;
    // 0x240530: 0xaf82b7b8  sw          $v0, -0x4848($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402D8u, 0x24052Cu, 0x240534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240534u;
label_240534:
    // 0x240534: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x240534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x240538: 0xa382b7bc  sb          $v0, -0x4844($gp)
    ctx->pc = 0x240538u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948796), (uint8_t)GPR_U32(ctx, 2));
    // 0x24053c: 0xc0900e0  jal         func_240380
    ctx->pc = 0x24053Cu;
    SET_GPR_U32(ctx, 31, 0x240544u);
    ctx->pc = 0x240540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24053Cu;
    // 0x240540: 0x248433b0  addiu       $a0, $a0, 0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240380u, 0x24053Cu, 0x240544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240544u;
label_240544:
    // 0x240544: 0x3c0401fc  lui         $a0, 0x1FC
    ctx->pc = 0x240544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)508 << 16));
    // 0x240548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24054c: 0x248433c0  addiu       $a0, $a0, 0x33C0
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13248));
    // 0x240550: 0x8090106  j           func_240418
    ctx->pc = 0x240550u;
    ctx->pc = 0x240554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240550u;
    // 0x240554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240418u;
    goodiesGetPlayableChrs_0x240418(rdram, ctx, runtime); return;
    ctx->pc = 0x240558u;
}

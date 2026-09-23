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

// Function: memReset
// Address: 0x201bb0 - 0x201c10
void memReset_0x201bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memReset_0x201bb0");
#endif

    switch (ctx->pc) {
        case 0x201bf0u: goto label_201bf0;
        case 0x201c04u: goto label_201c04;
        default: break;
    }

    ctx->pc = 0x201bb0u;

    // 0x201bb0: 0x8f839a7c  lw          $v1, -0x6584($gp)
    ctx->pc = 0x201bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941308)));
    // 0x201bb4: 0x3c060072  lui         $a2, 0x72
    ctx->pc = 0x201bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)114 << 16));
    // 0x201bb8: 0x8f849a80  lw          $a0, -0x6580($gp)
    ctx->pc = 0x201bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941312)));
    // 0x201bbc: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x201bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x201bc0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x201bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x201bc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201bc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201bcc: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x201bd0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x201bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bd8: 0xaf879a70  sw          $a3, -0x6590($gp)
    ctx->pc = 0x201bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941296), GPR_U32(ctx, 7));
    // 0x201bdc: 0xaf829a68  sw          $v0, -0x6598($gp)
    ctx->pc = 0x201bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941288), GPR_U32(ctx, 2));
    // 0x201be0: 0xaf839a6c  sw          $v1, -0x6594($gp)
    ctx->pc = 0x201be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941292), GPR_U32(ctx, 3));
    // 0x201be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201be8: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x201BE8u;
    SET_GPR_U32(ctx, 31, 0x201BF0u);
    ctx->pc = 0x201BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BE8u;
    // 0x201bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x201BE8u, 0x201BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201BF0u;
label_201bf0:
    // 0x201bf0: 0x8f839a6c  lw          $v1, -0x6594($gp)
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941292)));
    // 0x201bf4: 0x8f849a68  lw          $a0, -0x6598($gp)
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941288)));
    // 0x201bf8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x201bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bfc: 0xc080698  jal         func_201A60
    ctx->pc = 0x201BFCu;
    SET_GPR_U32(ctx, 31, 0x201C04u);
    ctx->pc = 0x201C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BFCu;
    // 0x201c00: 0xaf839a74  sw          $v1, -0x658C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941300), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201A60u, 0x201BFCu, 0x201C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C04u;
label_201c04:
    // 0x201c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c08: 0x80806ea  j           func_201BA8
    ctx->pc = 0x201C08u;
    ctx->pc = 0x201C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C08u;
    // 0x201c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201BA8u;
    memRestart_0x201ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x201C10u;
}

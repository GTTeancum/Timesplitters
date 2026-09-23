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

// Function: frontReset
// Address: 0x22caa8 - 0x22cb1c
void frontReset_0x22caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frontReset_0x22caa8");
#endif

    switch (ctx->pc) {
        case 0x22caccu: goto label_22cacc;
        case 0x22cae0u: goto label_22cae0;
        case 0x22cb0cu: goto label_22cb0c;
        default: break;
    }

    ctx->pc = 0x22caa8u;

    // 0x22caa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22caac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22caacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22cab4: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x22cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x22cab8: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x22cab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
    // 0x22cabc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22cac0: 0x26102da0  addiu       $s0, $s0, 0x2DA0
    ctx->pc = 0x22cac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11680));
    // 0x22cac4: 0xc0b9583  jal         func_2E560C
    ctx->pc = 0x22CAC4u;
    SET_GPR_U32(ctx, 31, 0x22CACCu);
    ctx->pc = 0x22CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CAC4u;
    // 0x22cac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E560Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E560Cu, 0x22CAC4u, 0x22CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CACCu;
label_22cacc:
    // 0x22cacc: 0x3c0301fc  lui         $v1, 0x1FC
    ctx->pc = 0x22caccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)508 << 16));
    // 0x22cad0: 0x3c0201fc  lui         $v0, 0x1FC
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)508 << 16));
    // 0x22cad4: 0x2445d1d0  addiu       $a1, $v0, -0x2E30
    ctx->pc = 0x22cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955472));
    // 0x22cad8: 0x246301d0  addiu       $v1, $v1, 0x1D0
    ctx->pc = 0x22cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x22cadc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cae0:
    // 0x22cae0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x22cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x22cae4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x22cae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22caec: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x22caecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x22caf0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x22caf4: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x22caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
    // 0x22caf8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x22caf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22cafc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22CAFCu;
    {
        const bool branch_taken_0x22cafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAFCu;
        // 0x22cb00: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cafc) {
            ctx->pc = 0x22CAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cae0;
        }
    }
    ctx->pc = 0x22CB04u;
    // 0x22cb04: 0xc08b2c8  jal         func_22CB20
    ctx->pc = 0x22CB04u;
    SET_GPR_U32(ctx, 31, 0x22CB0Cu);
    ctx->pc = 0x22CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB04u;
    // 0x22cb08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB20u, 0x22CB04u, 0x22CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB0Cu;
label_22cb0c:
    // 0x22cb0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22cb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cb14: 0x808b29c  j           func_22CA70
    ctx->pc = 0x22CB14u;
    ctx->pc = 0x22CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB14u;
    // 0x22cb18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CA70u;
    frontRestart_0x22ca70(rdram, ctx, runtime); return;
    ctx->pc = 0x22CB1Cu;
}

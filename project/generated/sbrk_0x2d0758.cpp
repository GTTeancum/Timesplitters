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

// Function: sbrk
// Address: 0x2d0758 - 0x2d0800
void sbrk_0x2d0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sbrk_0x2d0758");
#endif

    switch (ctx->pc) {
        case 0x2d0788u: goto label_2d0788;
        case 0x2d07b0u: goto label_2d07b0;
        case 0x2d07c4u: goto label_2d07c4;
        default: break;
    }

    ctx->pc = 0x2d0758u;

    // 0x2d0758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d075c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d075cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d0760: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d0760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0764: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d076c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2d076cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2d0770: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d0770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d0774: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2d0774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d0778: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0778u;
    {
        const bool branch_taken_0x2d0778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0778u;
        // 0x2d077c: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0778) {
            ctx->pc = 0x2D07A4u;
            goto label_2d07a4;
        }
    }
    ctx->pc = 0x2D0780u;
    // 0x2d0780: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d0784: 0x0  nop
    ctx->pc = 0x2d0784u;
    // NOP
label_2d0788:
    // 0x2d0788: 0x42000039  di
    ctx->pc = 0x2d0788u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x2d078c: 0x40f  sync.p
    ctx->pc = 0x2d078cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d0790: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2d0794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0798: 0x0  nop
    ctx->pc = 0x2d0798u;
    // NOP
    // 0x2d079c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D079Cu;
    {
        const bool branch_taken_0x2d079c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d079c) {
            ctx->pc = 0x2D0788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0788;
        }
    }
    ctx->pc = 0x2D07A4u;
label_2d07a4:
    // 0x2d07a4: 0x8e422e54  lw          $v0, 0x2E54($s2)
    ctx->pc = 0x2d07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11860)));
    // 0x2d07a8: 0xc0b4040  jal         func_2D0100
    ctx->pc = 0x2D07A8u;
    SET_GPR_U32(ctx, 31, 0x2D07B0u);
    ctx->pc = 0x2D07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07A8u;
    // 0x2d07ac: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0100u, 0x2D07A8u, 0x2D07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07B0u;
label_2d07b0:
    // 0x2d07b0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2d07b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d07b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D07B4u;
    {
        const bool branch_taken_0x2d07b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d07b4) {
            ctx->pc = 0x2D07B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07B4u;
            // 0x2d07b8: 0x8e422e54  lw          $v0, 0x2E54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D07DCu;
            goto label_2d07dc;
        }
    }
    ctx->pc = 0x2D07BCu;
    // 0x2d07bc: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D07BCu;
    SET_GPR_U32(ctx, 31, 0x2D07C4u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D07BCu, 0x2D07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07C4u;
label_2d07c4:
    // 0x2d07c4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2d07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d07c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d07cc: 0x42000038  ei
    ctx->pc = 0x2d07ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2d07d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d07d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D07D4u;
    {
        const bool branch_taken_0x2d07d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07D4u;
        // 0x2d07d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07d4) {
            ctx->pc = 0x2D07E8u;
            goto label_2d07e8;
        }
    }
    ctx->pc = 0x2D07DCu;
label_2d07dc:
    // 0x2d07dc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D07DCu;
    {
        const bool branch_taken_0x2d07dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07DCu;
        // 0x2d07e0: 0xae512e54  sw          $s1, 0x2E54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11860), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07dc) {
            ctx->pc = 0x2D07E8u;
            goto label_2d07e8;
        }
    }
    ctx->pc = 0x2D07E4u;
    // 0x2d07e4: 0x42000038  ei
    ctx->pc = 0x2d07e4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2d07e8:
    // 0x2d07e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d07e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d07ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d07ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d07f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2d07f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d07f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d07f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d07f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D07F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07F8u;
        // 0x2d07fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D07F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0800u;
}

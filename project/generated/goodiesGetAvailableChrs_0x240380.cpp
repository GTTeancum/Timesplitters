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

// Function: goodiesGetAvailableChrs
// Address: 0x240380 - 0x240418
void goodiesGetAvailableChrs_0x240380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodiesGetAvailableChrs_0x240380");
#endif

    switch (ctx->pc) {
        case 0x2403c0u: goto label_2403c0;
        case 0x2403c8u: goto label_2403c8;
        default: break;
    }

    ctx->pc = 0x240380u;

    // 0x240380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x240384: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x240388: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24038c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x240390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240394: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x240394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x240398: 0x245336b0  addiu       $s3, $v0, 0x36B0
    ctx->pc = 0x240398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x24039c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2403a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2403a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2403a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2403a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2403a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403ac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2403acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2403b0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2403b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2403b4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2403b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2403b8: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2403b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2403bc: 0x0  nop
    ctx->pc = 0x2403bcu;
    // NOP
label_2403c0:
    // 0x2403c0: 0xc089300  jal         func_224C00
    ctx->pc = 0x2403C0u;
    SET_GPR_U32(ctx, 31, 0x2403C8u);
    ctx->pc = 0x2403C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403C0u;
    // 0x2403c4: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224C00u, 0x2403C0u, 0x2403C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403C8u;
label_2403c8:
    // 0x2403c8: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2403c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2403cc: 0x101943  sra         $v1, $s0, 5
    ctx->pc = 0x2403ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
    // 0x2403d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2403d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2403d4: 0x922804  sllv        $a1, $s2, $a0
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2403d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2403d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2403dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2403dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2403e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2403E0u;
    {
        const bool branch_taken_0x2403e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403E0u;
        // 0x2403e4: 0x2e040040  sltiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403e0) {
            ctx->pc = 0x2403F4u;
            goto label_2403f4;
        }
    }
    ctx->pc = 0x2403E8u;
    // 0x2403e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2403e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2403ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2403ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2403f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2403f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2403f4:
    // 0x2403f4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2403F4u;
    {
        const bool branch_taken_0x2403f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2403F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403F4u;
        // 0x2403f8: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403f4) {
            ctx->pc = 0x2403C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2403c0;
        }
    }
    ctx->pc = 0x2403FCu;
    // 0x2403fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2403fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240400: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x240400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240404: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x240404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240408: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x240408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24040c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24040cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240410: 0x3e00008  jr          $ra
    ctx->pc = 0x240410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240410u;
        // 0x240414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240418u;
}

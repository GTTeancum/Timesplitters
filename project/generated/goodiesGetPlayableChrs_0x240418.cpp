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

// Function: goodiesGetPlayableChrs
// Address: 0x240418 - 0x2404b0
void goodiesGetPlayableChrs_0x240418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("goodiesGetPlayableChrs_0x240418");
#endif

    switch (ctx->pc) {
        case 0x240458u: goto label_240458;
        case 0x240460u: goto label_240460;
        default: break;
    }

    ctx->pc = 0x240418u;

    // 0x240418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24041c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x240420: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x240420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x240424: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x240424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x240428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24042c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x240430: 0x245336b0  addiu       $s3, $v0, 0x36B0
    ctx->pc = 0x240430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x240434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240438: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x240438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24043c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x240440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240444: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x240444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x240448: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x240448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x24044c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x24044cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x240450: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x240450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x240454: 0x0  nop
    ctx->pc = 0x240454u;
    // NOP
label_240458:
    // 0x240458: 0xc0892ec  jal         func_224BB0
    ctx->pc = 0x240458u;
    SET_GPR_U32(ctx, 31, 0x240460u);
    ctx->pc = 0x24045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240458u;
    // 0x24045c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BB0u, 0x240458u, 0x240460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240460u;
label_240460:
    // 0x240460: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x240464: 0x101943  sra         $v1, $s0, 5
    ctx->pc = 0x240464u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
    // 0x240468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24046c: 0x922804  sllv        $a1, $s2, $a0
    ctx->pc = 0x24046cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x240470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240474: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x240478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240478u;
    {
        const bool branch_taken_0x240478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240478u;
        // 0x24047c: 0x2e040040  sltiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240478) {
            ctx->pc = 0x24048Cu;
            goto label_24048c;
        }
    }
    ctx->pc = 0x240480u;
    // 0x240480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240484: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x240484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x240488: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x240488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24048c:
    // 0x24048c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24048Cu;
    {
        const bool branch_taken_0x24048c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24048Cu;
        // 0x240490: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24048c) {
            ctx->pc = 0x240458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240458;
        }
    }
    ctx->pc = 0x240494u;
    // 0x240494: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x240494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240498: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x240498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24049c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24049cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2404a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2404a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2404a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2404a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2404a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2404A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2404ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404A8u;
        // 0x2404ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2404A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2404B0u;
}

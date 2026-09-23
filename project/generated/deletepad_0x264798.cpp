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

// Function: deletepad
// Address: 0x264798 - 0x264864
void deletepad_0x264798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deletepad_0x264798");
#endif

    switch (ctx->pc) {
        case 0x2647e0u: goto label_2647e0;
        case 0x264818u: goto label_264818;
        default: break;
    }

    ctx->pc = 0x264798u;

    // 0x264798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26479c: 0x8f83a2ec  lw          $v1, -0x5D14($gp)
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943468)));
    // 0x2647a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2647a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2647a4: 0x3c02b6db  lui         $v0, 0xB6DB
    ctx->pc = 0x2647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46811 << 16));
    // 0x2647a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2647a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647ac: 0x34426db7  ori         $v0, $v0, 0x6DB7
    ctx->pc = 0x2647acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28087);
    // 0x2647b0: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2647b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2647b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2647b8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2647b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2647bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2647bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2647c0: 0x8f85a34c  lw          $a1, -0x5CB4($gp)
    ctx->pc = 0x2647c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x2647c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2647c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2647c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2647cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2647ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2647d0: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2647D0u;
    {
        const bool branch_taken_0x2647d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2647D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647D0u;
        // 0x2647d4: 0x38883  sra         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647d0) {
            ctx->pc = 0x264828u;
            goto label_264828;
        }
    }
    ctx->pc = 0x2647D8u;
    // 0x2647d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2647d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647dc: 0x0  nop
    ctx->pc = 0x2647dcu;
    // NOP
label_2647e0:
    // 0x2647e0: 0x8f83a2f0  lw          $v1, -0x5D10($gp)
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943472)));
    // 0x2647e4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x2647e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2647e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2647e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2647ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2647ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2647f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2647F0u;
    {
        const bool branch_taken_0x2647f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2647f0) {
            ctx->pc = 0x2647F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647F0u;
            // 0x2647f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26481Cu;
            goto label_26481c;
        }
    }
    ctx->pc = 0x2647F8u;
    // 0x2647f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2647f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2647fc: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2647FCu;
    {
        const bool branch_taken_0x2647fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2647fc) {
            ctx->pc = 0x264810u;
            goto label_264810;
        }
    }
    ctx->pc = 0x264804u;
    // 0x264804: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x264804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x264808: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264808u;
    {
        const bool branch_taken_0x264808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x264808) {
            ctx->pc = 0x26480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264808u;
            // 0x26480c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26481Cu;
            goto label_26481c;
        }
    }
    ctx->pc = 0x264810u;
label_264810:
    // 0x264810: 0xc0991ce  jal         func_264738
    ctx->pc = 0x264810u;
    SET_GPR_U32(ctx, 31, 0x264818u);
    ctx->pc = 0x264814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264810u;
    // 0x264814: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264738u, 0x264810u, 0x264818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264818u;
label_264818:
    // 0x264818: 0x8f85a34c  lw          $a1, -0x5CB4($gp)
    ctx->pc = 0x264818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
label_26481c:
    // 0x26481c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x26481cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x264820: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x264820u;
    {
        const bool branch_taken_0x264820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264820u;
        // 0x264824: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264820) {
            ctx->pc = 0x2647E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2647e0;
        }
    }
    ctx->pc = 0x264828u;
label_264828:
    // 0x264828: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26482c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26482cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x264830: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x264830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x264834: 0x8f84b8b0  lw          $a0, -0x4750($gp)
    ctx->pc = 0x264834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x264838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x264838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26483c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264840: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x264840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x264844: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x264844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x264848: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x264848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26484c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26484cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264850: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264858: 0xaf84b8b0  sw          $a0, -0x4750($gp)
    ctx->pc = 0x264858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949040), GPR_U32(ctx, 4));
    // 0x26485c: 0x3e00008  jr          $ra
    ctx->pc = 0x26485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26485Cu;
        // 0x264860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264864u;
}

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

// Function: propUnattach
// Address: 0x26f460 - 0x26f4fc
void propUnattach_0x26f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("propUnattach_0x26f460");
#endif

    switch (ctx->pc) {
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4d0u: goto label_26f4d0;
        default: break;
    }

    ctx->pc = 0x26f460u;

    // 0x26f460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f464: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x26f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x26f468: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26f46c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26f470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26f474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26f474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f47c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f480: 0xae2400c0  sw          $a0, 0xC0($s1)
    ctx->pc = 0x26f480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 4));
    // 0x26f484: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x26f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x26f488: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26f488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f48c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f490: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x26f490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x26f494: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x26f494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x26f498: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x26F498u;
    {
        const bool branch_taken_0x26f498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F498u;
        // 0x26f49c: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f498) {
            ctx->pc = 0x26F4E8u;
            goto label_26f4e8;
        }
    }
    ctx->pc = 0x26F4A0u;
    // 0x26f4a0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x26f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26f4a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26F4A4u;
    {
        const bool branch_taken_0x26f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4A4u;
        // 0x26f4a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4a4) {
            ctx->pc = 0x26F4ECu;
            goto label_26f4ec;
        }
    }
    ctx->pc = 0x26F4ACu;
    // 0x26f4ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26f4b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26f4b4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26F4B4u;
    {
        const bool branch_taken_0x26f4b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4B4u;
        // 0x26f4b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4b4) {
            ctx->pc = 0x26F4ECu;
            goto label_26f4ec;
        }
    }
    ctx->pc = 0x26F4BCu;
    // 0x26f4bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x26f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_26f4c0:
    // 0x26f4c0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x26f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x26f4c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26f4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26f4c8: 0xc0b5862  jal         func_2D6188
    ctx->pc = 0x26F4C8u;
    SET_GPR_U32(ctx, 31, 0x26F4D0u);
    ctx->pc = 0x26F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4C8u;
    // 0x26f4cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6188u, 0x26F4C8u, 0x26F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4D0u;
label_26f4d0:
    // 0x26f4d0: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x26f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x26f4d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26f4d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26f4dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26f4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f4e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x26F4E0u;
    {
        const bool branch_taken_0x26f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f4e0) {
            ctx->pc = 0x26F4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F4E0u;
            // 0x26f4e4: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F4E8u;
label_26f4e8:
    // 0x26f4e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26f4ec:
    // 0x26f4ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26f4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x26F4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4F4u;
        // 0x26f4f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F4FCu;
}

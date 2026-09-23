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

// Function: enemyInformHit
// Address: 0x2c7000 - 0x2c70e4
void enemyInformHit_0x2c7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyInformHit_0x2c7000");
#endif

    switch (ctx->pc) {
        case 0x2c708cu: goto label_2c708c;
        default: break;
    }

    ctx->pc = 0x2c7000u;

    // 0x2c7000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c7004: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c7004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c700c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c700cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7014: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x2c7014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2c7018: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c7018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c701c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C701Cu;
    {
        const bool branch_taken_0x2c701c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C701Cu;
        // 0x2c7020: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c701c) {
            ctx->pc = 0x2C70D4u;
            goto label_2c70d4;
        }
    }
    ctx->pc = 0x2C7024u;
    // 0x2c7024: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2c7024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2c7028: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c702c: 0x8c43c4f0  lw          $v1, -0x3B10($v0)
    ctx->pc = 0x2c702cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x32C4F0u));
    // 0x2c7030: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7030u;
    {
        const bool branch_taken_0x2c7030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c7030) {
            ctx->pc = 0x2C7034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7030u;
            // 0x2c7034: 0x8e030a9c  lw          $v1, 0xA9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C704Cu;
            goto label_2c704c;
        }
    }
    ctx->pc = 0x2C7038u;
    // 0x2c7038: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x2c703c: 0x8c432010  lw          $v1, 0x2010($v0)
    ctx->pc = 0x2c703cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x382010u));
    // 0x2c7040: 0x52230025  beql        $s1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C7040u;
    {
        const bool branch_taken_0x2c7040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c7040) {
            ctx->pc = 0x2C7044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7040u;
            // 0x2c7044: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C70D8u;
            goto label_2c70d8;
        }
    }
    ctx->pc = 0x2C7048u;
    // 0x2c7048: 0x8e030a9c  lw          $v1, 0xA9C($s0)
    ctx->pc = 0x2c7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
label_2c704c:
    // 0x2c704c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7050: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7050u;
    {
        const bool branch_taken_0x2c7050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7050u;
        // 0x2c7054: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7050) {
            ctx->pc = 0x2C7070u;
            goto label_2c7070;
        }
    }
    ctx->pc = 0x2C7058u;
    // 0x2c7058: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7058u;
    {
        const bool branch_taken_0x2c7058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7058u;
        // 0x2c705c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7058) {
            ctx->pc = 0x2C7070u;
            goto label_2c7070;
        }
    }
    ctx->pc = 0x2C7060u;
    // 0x2c7060: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7060u;
    {
        const bool branch_taken_0x2c7060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7060u;
        // 0x2c7064: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7060) {
            ctx->pc = 0x2C7070u;
            goto label_2c7070;
        }
    }
    ctx->pc = 0x2C7068u;
    // 0x2c7068: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C7068u;
    {
        const bool branch_taken_0x2c7068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7068u;
        // 0x2c706c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7068) {
            ctx->pc = 0x2C70C0u;
            goto label_2c70c0;
        }
    }
    ctx->pc = 0x2C7070u;
label_2c7070:
    // 0x2c7070: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x2c7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x2c7074: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c7074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c7078: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2c7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c707c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C707Cu;
    {
        const bool branch_taken_0x2c707c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C707Cu;
        // 0x2c7080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c707c) {
            ctx->pc = 0x2C70BCu;
            goto label_2c70bc;
        }
    }
    ctx->pc = 0x2C7084u;
    // 0x2c7084: 0xc0b179a  jal         func_2C5E68
    ctx->pc = 0x2C7084u;
    SET_GPR_U32(ctx, 31, 0x2C708Cu);
    ctx->pc = 0x2C7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7084u;
    // 0x2c7088: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E68u, 0x2C7084u, 0x2C708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C708Cu;
label_2c708c:
    // 0x2c708c: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2c708cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2c7090: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c7090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7094: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x2c7094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2c7098: 0xae000a84  sw          $zero, 0xA84($s0)
    ctx->pc = 0x2c7098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2692), GPR_U32(ctx, 0));
    // 0x2c709c: 0x8e060a9c  lw          $a2, 0xA9C($s0)
    ctx->pc = 0x2c709cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2716)));
    // 0x2c70a0: 0x8c8302a8  lw          $v1, 0x2A8($a0)
    ctx->pc = 0x2c70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x2c70a4: 0xae050a9c  sw          $a1, 0xA9C($s0)
    ctx->pc = 0x2c70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 5));
    // 0x2c70a8: 0xae0302ac  sw          $v1, 0x2AC($s0)
    ctx->pc = 0x2c70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
    // 0x2c70ac: 0xae060aa0  sw          $a2, 0xAA0($s0)
    ctx->pc = 0x2c70acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2720), GPR_U32(ctx, 6));
    // 0x2c70b0: 0xae020ae4  sw          $v0, 0xAE4($s0)
    ctx->pc = 0x2c70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2788), GPR_U32(ctx, 2));
    // 0x2c70b4: 0xae000b5c  sw          $zero, 0xB5C($s0)
    ctx->pc = 0x2c70b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2908), GPR_U32(ctx, 0));
    // 0x2c70b8: 0xae000b4c  sw          $zero, 0xB4C($s0)
    ctx->pc = 0x2c70b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2892), GPR_U32(ctx, 0));
label_2c70bc:
    // 0x2c70bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c70c0:
    // 0x2c70c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c70c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c70c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c70c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c70c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c70c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c70cc: 0x80b2e42  j           func_2CB908
    ctx->pc = 0x2C70CCu;
    ctx->pc = 0x2C70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C70CCu;
    // 0x2c70d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB908u;
    enemyInformOthers_0x2cb908(rdram, ctx, runtime); return;
    ctx->pc = 0x2C70D4u;
label_2c70d4:
    // 0x2c70d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c70d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c70d8:
    // 0x2c70d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c70d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c70dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C70DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70DCu;
        // 0x2c70e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C70DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C70E4u;
}

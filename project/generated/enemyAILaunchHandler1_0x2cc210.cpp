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

// Function: enemyAILaunchHandler1
// Address: 0x2cc210 - 0x2cc39c
void enemyAILaunchHandler1_0x2cc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("enemyAILaunchHandler1_0x2cc210");
#endif

    switch (ctx->pc) {
        case 0x2cc248u: goto label_2cc248;
        case 0x2cc258u: goto label_2cc258;
        case 0x2cc260u: goto label_2cc260;
        case 0x2cc278u: goto label_2cc278;
        case 0x2cc284u: goto label_2cc284;
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc29cu: goto label_2cc29c;
        case 0x2cc2acu: goto label_2cc2ac;
        case 0x2cc2b4u: goto label_2cc2b4;
        case 0x2cc2ccu: goto label_2cc2cc;
        case 0x2cc2d8u: goto label_2cc2d8;
        case 0x2cc2e0u: goto label_2cc2e0;
        case 0x2cc2f0u: goto label_2cc2f0;
        case 0x2cc300u: goto label_2cc300;
        case 0x2cc308u: goto label_2cc308;
        case 0x2cc320u: goto label_2cc320;
        case 0x2cc32cu: goto label_2cc32c;
        case 0x2cc334u: goto label_2cc334;
        case 0x2cc344u: goto label_2cc344;
        case 0x2cc354u: goto label_2cc354;
        case 0x2cc35cu: goto label_2cc35c;
        case 0x2cc374u: goto label_2cc374;
        case 0x2cc380u: goto label_2cc380;
        case 0x2cc388u: goto label_2cc388;
        default: break;
    }

    ctx->pc = 0x2cc210u;

    // 0x2cc210: 0x8f839f78  lw          $v1, -0x6088($gp)
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942584)));
    // 0x2cc214: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc218: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2cc218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cc21c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2CC21Cu;
    {
        const bool branch_taken_0x2cc21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC21Cu;
        // 0x2cc220: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc21c) {
            ctx->pc = 0x2CC390u;
            goto label_2cc390;
        }
    }
    ctx->pc = 0x2CC224u;
    // 0x2cc224: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cc224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cc228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc22c: 0x24429f60  addiu       $v0, $v0, -0x60A0
    ctx->pc = 0x2cc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942560));
    // 0x2cc230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc234: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc238: 0x800008  jr          $a0
    ctx->pc = 0x2CC238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC240u: goto label_2cc240;
            case 0x2CC294u: goto label_2cc294;
            case 0x2CC2E8u: goto label_2cc2e8;
            case 0x2CC33Cu: goto label_2cc33c;
            case 0x2CC390u: goto label_2cc390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC238u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CC240u;
label_2cc240:
    // 0x2cc240: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CC240u;
    SET_GPR_U32(ctx, 31, 0x2CC248u);
    ctx->pc = 0x2CC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC240u;
    // 0x2cc244: 0x240406d3  addiu       $a0, $zero, 0x6D3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1747));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CC240u, 0x2CC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC248u;
label_2cc248:
    // 0x2cc248: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2CC248u;
    {
        const bool branch_taken_0x2cc248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC248u;
        // 0x2cc24c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc248) {
            ctx->pc = 0x2CC394u;
            goto label_2cc394;
        }
    }
    ctx->pc = 0x2CC250u;
    // 0x2cc250: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC250u;
    SET_GPR_U32(ctx, 31, 0x2CC258u);
    ctx->pc = 0x2CC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC250u;
    // 0x2cc254: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC250u, 0x2CC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC258u;
label_2cc258:
    // 0x2cc258: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC258u;
    SET_GPR_U32(ctx, 31, 0x2CC260u);
    ctx->pc = 0x2CC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC258u;
    // 0x2cc25c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC258u, 0x2CC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC260u;
label_2cc260:
    // 0x2cc260: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2cc260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cc264: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC264u;
    {
        const bool branch_taken_0x2cc264 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc264) {
            ctx->pc = 0x2CC268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC264u;
            // 0x2cc268: 0x240406ce  addiu       $a0, $zero, 0x6CE (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1742));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC27Cu;
            goto label_2cc27c;
        }
    }
    ctx->pc = 0x2CC26Cu;
    // 0x2cc26c: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2cc26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2cc270: 0xc081546  jal         func_205518
    ctx->pc = 0x2CC270u;
    SET_GPR_U32(ctx, 31, 0x2CC278u);
    ctx->pc = 0x2CC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC270u;
    // 0x2cc274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CC270u, 0x2CC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC278u;
label_2cc278:
    // 0x2cc278: 0x240406ce  addiu       $a0, $zero, 0x6CE
    ctx->pc = 0x2cc278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1742));
label_2cc27c:
    // 0x2cc27c: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC27Cu;
    SET_GPR_U32(ctx, 31, 0x2CC284u);
    ctx->pc = 0x2CC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC27Cu;
    // 0x2cc280: 0x240503fa  addiu       $a1, $zero, 0x3FA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC27Cu, 0x2CC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC284u;
label_2cc284:
    // 0x2cc284: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC284u;
    SET_GPR_U32(ctx, 31, 0x2CC28Cu);
    ctx->pc = 0x2CC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC284u;
    // 0x2cc288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC284u, 0x2CC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC28Cu;
label_2cc28c:
    // 0x2cc28c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2CC28Cu;
    {
        const bool branch_taken_0x2cc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC28Cu;
        // 0x2cc290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc28c) {
            ctx->pc = 0x2CC38Cu;
            goto label_2cc38c;
        }
    }
    ctx->pc = 0x2CC294u;
label_2cc294:
    // 0x2cc294: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CC294u;
    SET_GPR_U32(ctx, 31, 0x2CC29Cu);
    ctx->pc = 0x2CC298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC294u;
    // 0x2cc298: 0x24040403  addiu       $a0, $zero, 0x403 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CC294u, 0x2CC29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC29Cu;
label_2cc29c:
    // 0x2cc29c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2CC29Cu;
    {
        const bool branch_taken_0x2cc29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC29Cu;
        // 0x2cc2a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc29c) {
            ctx->pc = 0x2CC394u;
            goto label_2cc394;
        }
    }
    ctx->pc = 0x2CC2A4u;
    // 0x2cc2a4: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC2A4u;
    SET_GPR_U32(ctx, 31, 0x2CC2ACu);
    ctx->pc = 0x2CC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2A4u;
    // 0x2cc2a8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC2A4u, 0x2CC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2ACu;
label_2cc2ac:
    // 0x2cc2ac: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC2ACu;
    SET_GPR_U32(ctx, 31, 0x2CC2B4u);
    ctx->pc = 0x2CC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2ACu;
    // 0x2cc2b0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC2ACu, 0x2CC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2B4u;
label_2cc2b4:
    // 0x2cc2b4: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2cc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cc2b8: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC2B8u;
    {
        const bool branch_taken_0x2cc2b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc2b8) {
            ctx->pc = 0x2CC2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2B8u;
            // 0x2cc2bc: 0x24040405  addiu       $a0, $zero, 0x405 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC2D0u;
            goto label_2cc2d0;
        }
    }
    ctx->pc = 0x2CC2C0u;
    // 0x2cc2c0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2cc2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2cc2c4: 0xc081546  jal         func_205518
    ctx->pc = 0x2CC2C4u;
    SET_GPR_U32(ctx, 31, 0x2CC2CCu);
    ctx->pc = 0x2CC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2C4u;
    // 0x2cc2c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CC2C4u, 0x2CC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2CCu;
label_2cc2cc:
    // 0x2cc2cc: 0x24040405  addiu       $a0, $zero, 0x405
    ctx->pc = 0x2cc2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
label_2cc2d0:
    // 0x2cc2d0: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC2D0u;
    SET_GPR_U32(ctx, 31, 0x2CC2D8u);
    ctx->pc = 0x2CC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2D0u;
    // 0x2cc2d4: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC2D0u, 0x2CC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2D8u;
label_2cc2d8:
    // 0x2cc2d8: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC2D8u;
    SET_GPR_U32(ctx, 31, 0x2CC2E0u);
    ctx->pc = 0x2CC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2D8u;
    // 0x2cc2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC2D8u, 0x2CC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2E0u;
label_2cc2e0:
    // 0x2cc2e0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CC2E0u;
    {
        const bool branch_taken_0x2cc2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2E0u;
        // 0x2cc2e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2e0) {
            ctx->pc = 0x2CC38Cu;
            goto label_2cc38c;
        }
    }
    ctx->pc = 0x2CC2E8u;
label_2cc2e8:
    // 0x2cc2e8: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CC2E8u;
    SET_GPR_U32(ctx, 31, 0x2CC2F0u);
    ctx->pc = 0x2CC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2E8u;
    // 0x2cc2ec: 0x24040423  addiu       $a0, $zero, 0x423 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1059));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CC2E8u, 0x2CC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2F0u;
label_2cc2f0:
    // 0x2cc2f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CC2F0u;
    {
        const bool branch_taken_0x2cc2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2F0u;
        // 0x2cc2f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2f0) {
            ctx->pc = 0x2CC394u;
            goto label_2cc394;
        }
    }
    ctx->pc = 0x2CC2F8u;
    // 0x2cc2f8: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC2F8u;
    SET_GPR_U32(ctx, 31, 0x2CC300u);
    ctx->pc = 0x2CC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2F8u;
    // 0x2cc2fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC2F8u, 0x2CC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC300u;
label_2cc300:
    // 0x2cc300: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC300u;
    SET_GPR_U32(ctx, 31, 0x2CC308u);
    ctx->pc = 0x2CC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC300u;
    // 0x2cc304: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC300u, 0x2CC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC308u;
label_2cc308:
    // 0x2cc308: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2cc308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cc30c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC30Cu;
    {
        const bool branch_taken_0x2cc30c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc30c) {
            ctx->pc = 0x2CC310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC30Cu;
            // 0x2cc310: 0x24040429  addiu       $a0, $zero, 0x429 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC324u;
            goto label_2cc324;
        }
    }
    ctx->pc = 0x2CC314u;
    // 0x2cc314: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2cc314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2cc318: 0xc081546  jal         func_205518
    ctx->pc = 0x2CC318u;
    SET_GPR_U32(ctx, 31, 0x2CC320u);
    ctx->pc = 0x2CC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC318u;
    // 0x2cc31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CC318u, 0x2CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC320u;
label_2cc320:
    // 0x2cc320: 0x24040429  addiu       $a0, $zero, 0x429
    ctx->pc = 0x2cc320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
label_2cc324:
    // 0x2cc324: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC324u;
    SET_GPR_U32(ctx, 31, 0x2CC32Cu);
    ctx->pc = 0x2CC328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC324u;
    // 0x2cc328: 0x2405042b  addiu       $a1, $zero, 0x42B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC324u, 0x2CC32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC32Cu;
label_2cc32c:
    // 0x2cc32c: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC32Cu;
    SET_GPR_U32(ctx, 31, 0x2CC334u);
    ctx->pc = 0x2CC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC32Cu;
    // 0x2cc330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC32Cu, 0x2CC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC334u;
label_2cc334:
    // 0x2cc334: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC334u;
    {
        const bool branch_taken_0x2cc334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC334u;
        // 0x2cc338: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc334) {
            ctx->pc = 0x2CC38Cu;
            goto label_2cc38c;
        }
    }
    ctx->pc = 0x2CC33Cu;
label_2cc33c:
    // 0x2cc33c: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CC33Cu;
    SET_GPR_U32(ctx, 31, 0x2CC344u);
    ctx->pc = 0x2CC340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC33Cu;
    // 0x2cc340: 0x24040428  addiu       $a0, $zero, 0x428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CC33Cu, 0x2CC344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC344u;
label_2cc344:
    // 0x2cc344: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CC344u;
    {
        const bool branch_taken_0x2cc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC344u;
        // 0x2cc348: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc344) {
            ctx->pc = 0x2CC394u;
            goto label_2cc394;
        }
    }
    ctx->pc = 0x2CC34Cu;
    // 0x2cc34c: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC34Cu;
    SET_GPR_U32(ctx, 31, 0x2CC354u);
    ctx->pc = 0x2CC350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC34Cu;
    // 0x2cc350: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC34Cu, 0x2CC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC354u;
label_2cc354:
    // 0x2cc354: 0xc09b060  jal         func_26C180
    ctx->pc = 0x2CC354u;
    SET_GPR_U32(ctx, 31, 0x2CC35Cu);
    ctx->pc = 0x2CC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC354u;
    // 0x2cc358: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C180u, 0x2CC354u, 0x2CC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC35Cu;
label_2cc35c:
    // 0x2cc35c: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x2cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
    // 0x2cc360: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC360u;
    {
        const bool branch_taken_0x2cc360 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc360) {
            ctx->pc = 0x2CC364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC360u;
            // 0x2cc364: 0x2404042e  addiu       $a0, $zero, 0x42E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC378u;
            goto label_2cc378;
        }
    }
    ctx->pc = 0x2CC368u;
    // 0x2cc368: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2cc368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2cc36c: 0xc081546  jal         func_205518
    ctx->pc = 0x2CC36Cu;
    SET_GPR_U32(ctx, 31, 0x2CC374u);
    ctx->pc = 0x2CC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC36Cu;
    // 0x2cc370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205518u, 0x2CC36Cu, 0x2CC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC374u;
label_2cc374:
    // 0x2cc374: 0x2404042e  addiu       $a0, $zero, 0x42E
    ctx->pc = 0x2cc374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
label_2cc378:
    // 0x2cc378: 0xc09925e  jal         func_264978
    ctx->pc = 0x2CC378u;
    SET_GPR_U32(ctx, 31, 0x2CC380u);
    ctx->pc = 0x2CC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC378u;
    // 0x2cc37c: 0x24050622  addiu       $a1, $zero, 0x622 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1570));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264978u, 0x2CC378u, 0x2CC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC380u;
label_2cc380:
    // 0x2cc380: 0xc099392  jal         func_264E48
    ctx->pc = 0x2CC380u;
    SET_GPR_U32(ctx, 31, 0x2CC388u);
    ctx->pc = 0x2CC384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC380u;
    // 0x2cc384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E48u, 0x2CC380u, 0x2CC388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC388u;
label_2cc388:
    // 0x2cc388: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cc388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cc38c:
    // 0x2cc38c: 0xaf829f78  sw          $v0, -0x6088($gp)
    ctx->pc = 0x2cc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
label_2cc390:
    // 0x2cc390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc394:
    // 0x2cc394: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC394u;
        // 0x2cc398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC39Cu;
}

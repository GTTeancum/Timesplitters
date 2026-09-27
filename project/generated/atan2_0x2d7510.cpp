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

// Function: atan2
// Address: 0x2d7510 - 0x2d7628
void atan2_0x2d7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atan2_0x2d7510");
#endif

    switch (ctx->pc) {
        case 0x2d7538u: goto label_2d7538;
        case 0x2d7558u: goto label_2d7558;
        case 0x2d7568u: goto label_2d7568;
        case 0x2d7580u: goto label_2d7580;
        case 0x2d7594u: goto label_2d7594;
        case 0x2d75d0u: goto label_2d75d0;
        case 0x2d75e0u: goto label_2d75e0;
        case 0x2d75fcu: goto label_2d75fc;
        default: break;
    }

    ctx->pc = 0x2d7510u;

    // 0x2d7510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d7514: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2d7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2d7518: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d751c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d751cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7524: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2d7524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2d7528: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2d7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2d752c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d7530: 0xc0b612c  jal         func_2D84B0
    ctx->pc = 0x2D7530u;
    SET_GPR_U32(ctx, 31, 0x2D7538u);
    ctx->pc = 0x2D7534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7530u;
    // 0x2d7534: 0xffb20050  sd          $s2, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D84B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D84B0u, 0x2D7530u, 0x2D7538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7538u;
label_2d7538:
    // 0x2d7538: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d7538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d753c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7540: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7544: 0x8c54b118  lw          $s4, -0x4EE8($v0)
    ctx->pc = 0x2d7544u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3AB118u));
    // 0x2d7548: 0x1283002f  beq         $s4, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D7548u;
    {
        const bool branch_taken_0x2d7548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7548u;
        // 0x2d754c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7548) {
            ctx->pc = 0x2D7608u;
            goto label_2d7608;
        }
    }
    ctx->pc = 0x2D7550u;
    // 0x2d7550: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2D7550u;
    SET_GPR_U32(ctx, 31, 0x2D7558u);
    ctx->pc = 0x2D7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7550u;
    // 0x2d7554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2D7550u, 0x2D7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7558u;
label_2d7558:
    // 0x2d7558: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D7558u;
    {
        const bool branch_taken_0x2d7558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7558u;
        // 0x2d755c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7558) {
            ctx->pc = 0x2D7608u;
            goto label_2d7608;
        }
    }
    ctx->pc = 0x2D7560u;
    // 0x2d7560: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2D7560u;
    SET_GPR_U32(ctx, 31, 0x2D7568u);
    ctx->pc = 0x2D7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7560u;
    // 0x2d7564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2D7560u, 0x2D7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7568u;
label_2d7568:
    // 0x2d7568: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D7568u;
    {
        const bool branch_taken_0x2d7568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7568u;
        // 0x2d756c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7568) {
            ctx->pc = 0x2D7608u;
            goto label_2d7608;
        }
    }
    ctx->pc = 0x2D7570u;
    // 0x2d7570: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d7570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7578: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7578u;
    SET_GPR_U32(ctx, 31, 0x2D7580u);
    ctx->pc = 0x2D757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7578u;
    // 0x2d757c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7578u, 0x2D7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7580u;
label_2d7580:
    // 0x2d7580: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D7580u;
    {
        const bool branch_taken_0x2d7580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7580u;
        // 0x2d7584: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7580) {
            ctx->pc = 0x2D7608u;
            goto label_2d7608;
        }
    }
    ctx->pc = 0x2D7588u;
    // 0x2d7588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d758c: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D758Cu;
    SET_GPR_U32(ctx, 31, 0x2D7594u);
    ctx->pc = 0x2D7590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D758Cu;
    // 0x2d7590: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D758Cu, 0x2D7594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7594u;
label_2d7594:
    // 0x2d7594: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D7594u;
    {
        const bool branch_taken_0x2d7594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7594u;
        // 0x2d7598: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7594) {
            ctx->pc = 0x2D7608u;
            goto label_2d7608;
        }
    }
    ctx->pc = 0x2D759Cu;
    // 0x2d759c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d75a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d75a4: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x2d75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x2d75a8: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2d75a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2d75ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2d75acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d75b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d75b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d75b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d75b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d75b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d75bc: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x2d75bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x2d75c0: 0x12840005  beq         $s4, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D75C0u;
    {
        const bool branch_taken_0x2d75c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75C0u;
        // 0x2d75c4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75c0) {
            ctx->pc = 0x2D75D8u;
            goto label_2d75d8;
        }
    }
    ctx->pc = 0x2D75C8u;
    // 0x2d75c8: 0xc0b6fc6  jal         func_2DBF18
    ctx->pc = 0x2D75C8u;
    SET_GPR_U32(ctx, 31, 0x2D75D0u);
    ctx->pc = 0x2D75CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D75C8u;
    // 0x2d75cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF18u, 0x2D75C8u, 0x2D75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75D0u;
label_2d75d0:
    // 0x2d75d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D75D0u;
    {
        const bool branch_taken_0x2d75d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75D0u;
        // 0x2d75d4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75d0) {
            ctx->pc = 0x2D75ECu;
            goto label_2d75ec;
        }
    }
    ctx->pc = 0x2D75D8u;
label_2d75d8:
    // 0x2d75d8: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D75D8u;
    SET_GPR_U32(ctx, 31, 0x2D75E0u);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D75D8u, 0x2D75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75E0u;
label_2d75e0:
    // 0x2d75e0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d75e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d75e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d75ec:
    // 0x2d75ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D75ECu;
    {
        const bool branch_taken_0x2d75ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d75ec) {
            ctx->pc = 0x2D75F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D75ECu;
            // 0x2d75f0: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7608u;
            goto label_2d7608;
        }
    }
    ctx->pc = 0x2D75F4u;
    // 0x2d75f4: 0xc0b91c6  jal         func_2E4718
    ctx->pc = 0x2D75F4u;
    SET_GPR_U32(ctx, 31, 0x2D75FCu);
    ctx->pc = 0x2E4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4718u, 0x2D75F4u, 0x2D75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75FCu;
label_2d75fc:
    // 0x2d75fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7600: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d7600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d7604: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2d7604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d7608:
    // 0x2d7608: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d7608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d760c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2d760cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7610: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2d7610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7614: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d7614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7618: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2d7618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d761c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d761cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7620: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7620u;
        // 0x2d7624: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7628u;
}

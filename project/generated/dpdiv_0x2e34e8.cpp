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

// Function: dpdiv
// Address: 0x2e34e8 - 0x2e3650
void dpdiv_0x2e34e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x2e34e8");
#endif

    switch (ctx->pc) {
        case 0x2e3508u: goto label_2e3508;
        case 0x2e3518u: goto label_2e3518;
        case 0x2e35e8u: goto label_2e35e8;
        case 0x2e3640u: goto label_2e3640;
        default: break;
    }

    ctx->pc = 0x2e34e8u;

    // 0x2e34e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e34e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e34ec: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2e34ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2e34f0: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2e34f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2e34f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e34f8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2e34f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2e34fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e34fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e3500: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3500u;
    SET_GPR_U32(ctx, 31, 0x2E3508u);
    ctx->pc = 0x2E3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3500u;
    // 0x2e3504: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3500u, 0x2E3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3508u;
label_2e3508:
    // 0x2e3508: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e3508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e350c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2e350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2e3510: 0xc0b8ba8  jal         func_2E2EA0
    ctx->pc = 0x2E3510u;
    SET_GPR_U32(ctx, 31, 0x2E3518u);
    ctx->pc = 0x2E3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3510u;
    // 0x2e3514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2EA0u, 0x2E3510u, 0x2E3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3518u;
label_2e3518:
    // 0x2e3518: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2e3518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e351c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x2e351cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3520u;
    {
        const bool branch_taken_0x2e3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3520u;
        // 0x2e3524: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3520) {
            ctx->pc = 0x2E3530u;
            goto label_2e3530;
        }
    }
    ctx->pc = 0x2E3528u;
    // 0x2e3528: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E3528u;
    {
        const bool branch_taken_0x2e3528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3528u;
        // 0x2e352c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3528) {
            ctx->pc = 0x2E3638u;
            goto label_2e3638;
        }
    }
    ctx->pc = 0x2E3530u;
label_2e3530:
    // 0x2e3530: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2e3530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3534: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2e3534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3538: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2E3538u;
    {
        const bool branch_taken_0x2e3538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3538u;
        // 0x2e353c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3538) {
            ctx->pc = 0x2E3638u;
            goto label_2e3638;
        }
    }
    ctx->pc = 0x2E3540u;
    // 0x2e3540: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e3544: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x2e3544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x2e3548: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2e3548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e354c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e3550: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3550u;
    {
        const bool branch_taken_0x2e3550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3550u;
        // 0x2e3554: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3550) {
            ctx->pc = 0x2E3564u;
            goto label_2e3564;
        }
    }
    ctx->pc = 0x2E3558u;
    // 0x2e3558: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x2e3558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x2e355c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E355Cu;
    {
        const bool branch_taken_0x2e355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E355Cu;
        // 0x2e3560: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e355c) {
            ctx->pc = 0x2E3578u;
            goto label_2e3578;
        }
    }
    ctx->pc = 0x2E3564u;
label_2e3564:
    // 0x2e3564: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E3564u;
    {
        const bool branch_taken_0x2e3564 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3564u;
        // 0x2e3568: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3564) {
            ctx->pc = 0x2E3638u;
            goto label_2e3638;
        }
    }
    ctx->pc = 0x2E356Cu;
    // 0x2e356c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2e356cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2e3570: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2E3570u;
    {
        const bool branch_taken_0x2e3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3570u;
        // 0x2e3574: 0x24445368  addiu       $a0, $v0, 0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3570) {
            ctx->pc = 0x2E3638u;
            goto label_2e3638;
        }
    }
    ctx->pc = 0x2E3578u;
label_2e3578:
    // 0x2e3578: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3578u;
    {
        const bool branch_taken_0x2e3578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3578u;
        // 0x2e357c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3578) {
            ctx->pc = 0x2E3590u;
            goto label_2e3590;
        }
    }
    ctx->pc = 0x2E3580u;
    // 0x2e3580: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2e3580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x2e3584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e3584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3588: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E3588u;
    {
        const bool branch_taken_0x2e3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3588u;
        // 0x2e358c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3588) {
            ctx->pc = 0x2E3638u;
            goto label_2e3638;
        }
    }
    ctx->pc = 0x2E3590u;
label_2e3590:
    // 0x2e3590: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3590u;
    {
        const bool branch_taken_0x2e3590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3590u;
        // 0x2e3594: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3590) {
            ctx->pc = 0x2E35A8u;
            goto label_2e35a8;
        }
    }
    ctx->pc = 0x2E3598u;
    // 0x2e3598: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e359c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E35A0u;
    {
        const bool branch_taken_0x2e35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35A0u;
        // 0x2e35a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35a0) {
            ctx->pc = 0x2E3638u;
            goto label_2e3638;
        }
    }
    ctx->pc = 0x2E35A8u;
label_2e35a8:
    // 0x2e35a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e35ac: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2e35acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e35b0: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x2e35b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e35b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2e35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e35b8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2e35b8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e35bc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E35BCu;
    {
        const bool branch_taken_0x2e35bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35BCu;
        // 0x2e35c0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35bc) {
            ctx->pc = 0x2E35D4u;
            goto label_2e35d4;
        }
    }
    ctx->pc = 0x2E35C4u;
    // 0x2e35c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e35c8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x2e35c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x2e35cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2e35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2e35d0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2e35d0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e35d4:
    // 0x2e35d4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e35d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e35d8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2e35d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2e35dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E35DCu;
    {
        const bool branch_taken_0x2e35dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35DCu;
        // 0x2e35e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35dc) {
            ctx->pc = 0x2E35ECu;
            goto label_2e35ec;
        }
    }
    ctx->pc = 0x2E35E4u;
    // 0x2e35e4: 0x0  nop
    ctx->pc = 0x2e35e4u;
    // NOP
label_2e35e8:
    // 0x2e35e8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2e35e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e35ec:
    // 0x2e35ec: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E35ECu;
    {
        const bool branch_taken_0x2e35ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e35ec) {
            ctx->pc = 0x2E35F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E35ECu;
            // 0x2e35f0: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3600u;
            goto label_2e3600;
        }
    }
    ctx->pc = 0x2E35F4u;
    // 0x2e35f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2e35f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2e35f8: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x2e35f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x2e35fc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2e35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_2e3600:
    // 0x2e3600: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E3600u;
    {
        const bool branch_taken_0x2e3600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3600u;
        // 0x2e3604: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3600) {
            ctx->pc = 0x2E35E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e35e8;
        }
    }
    ctx->pc = 0x2E3608u;
    // 0x2e3608: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2e3608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e360c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e3610: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3610u;
    {
        const bool branch_taken_0x2e3610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3610) {
            ctx->pc = 0x2E3614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3610u;
            // 0x2e3614: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3634u;
            goto label_2e3634;
        }
    }
    ctx->pc = 0x2E3618u;
    // 0x2e3618: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x2e3618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x2e361c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E361Cu;
    {
        const bool branch_taken_0x2e361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E361Cu;
        // 0x2e3620: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e361c) {
            ctx->pc = 0x2E362Cu;
            goto label_2e362c;
        }
    }
    ctx->pc = 0x2E3624u;
    // 0x2e3624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3624u;
    {
        const bool branch_taken_0x2e3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3624u;
        // 0x2e3628: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3624) {
            ctx->pc = 0x2E3630u;
            goto label_2e3630;
        }
    }
    ctx->pc = 0x2E362Cu;
label_2e362c:
    // 0x2e362c: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2e362cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_2e3630:
    // 0x2e3630: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2e3630u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_2e3634:
    // 0x2e3634: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e3634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e3638:
    // 0x2e3638: 0xc0b8b5c  jal         func_2E2D70
    ctx->pc = 0x2E3638u;
    SET_GPR_U32(ctx, 31, 0x2E3640u);
    ctx->pc = 0x2E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D70u, 0x2E3638u, 0x2E3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3640u;
label_2e3640:
    // 0x2e3640: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e3640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3644: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2e3644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3648: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3648u;
        // 0x2e364c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3650u;
}

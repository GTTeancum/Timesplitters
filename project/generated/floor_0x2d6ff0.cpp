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

// Function: floor
// Address: 0x2d6ff0 - 0x2d71c8
void floor_0x2d6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("floor_0x2d6ff0");
#endif

    switch (ctx->pc) {
        case 0x2d704cu: goto label_2d704c;
        case 0x2d7058u: goto label_2d7058;
        case 0x2d70bcu: goto label_2d70bc;
        case 0x2d70c8u: goto label_2d70c8;
        case 0x2d7110u: goto label_2d7110;
        case 0x2d713cu: goto label_2d713c;
        case 0x2d7148u: goto label_2d7148;
        default: break;
    }

    ctx->pc = 0x2d6ff0u;

    // 0x2d6ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d6ff4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d6ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ff8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d6ffc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d7000: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2d7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2d7004: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d7004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d7008: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2d7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2d700c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d7010: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d7010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7014: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2d7014u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d7018: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2d7018u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2d701c: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x2d701cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d7020: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x2d7020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x2d7024: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2d7024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2d7028: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x2d7028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x2d702c: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x2d702cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2d7030: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D7030u;
    {
        const bool branch_taken_0x2d7030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7030u;
        // 0x2d7034: 0x2a220034  slti        $v0, $s1, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7030) {
            ctx->pc = 0x2D70F4u;
            goto label_2d70f4;
        }
    }
    ctx->pc = 0x2D7038u;
    // 0x2d7038: 0x6210017  bgez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D7038u;
    {
        const bool branch_taken_0x2d7038 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2D703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7038u;
        // 0x2d703c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7038) {
            ctx->pc = 0x2D7098u;
            goto label_2d7098;
        }
    }
    ctx->pc = 0x2D7040u;
    // 0x2d7040: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d7044: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D7044u;
    SET_GPR_U32(ctx, 31, 0x2D704Cu);
    ctx->pc = 0x2D7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7044u;
    // 0x2d7048: 0xdc45a840  ld          $a1, -0x57C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294944832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D7044u, 0x2D704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D704Cu;
label_2d704c:
    // 0x2d704c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7050: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7050u;
    SET_GPR_U32(ctx, 31, 0x2D7058u);
    ctx->pc = 0x2D7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7050u;
    // 0x2d7054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7050u, 0x2D7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7058u;
label_2d7058:
    // 0x2d7058: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D7058u;
    {
        const bool branch_taken_0x2d7058 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7058u;
        // 0x2d705c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7058) {
            ctx->pc = 0x2D7198u;
            goto label_2d7198;
        }
    }
    ctx->pc = 0x2D7060u;
    // 0x2d7060: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7060u;
    {
        const bool branch_taken_0x2d7060 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2D7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7060u;
        // 0x2d7064: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7060) {
            ctx->pc = 0x2D7078u;
            goto label_2d7078;
        }
    }
    ctx->pc = 0x2D7068u;
    // 0x2d7068: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d7068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d706c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2D706Cu;
    {
        const bool branch_taken_0x2d706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D706Cu;
        // 0x2d7070: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d706c) {
            ctx->pc = 0x2D7190u;
            goto label_2d7190;
        }
    }
    ctx->pc = 0x2D7074u;
    // 0x2d7074: 0x0  nop
    ctx->pc = 0x2d7074u;
    // NOP
label_2d7078:
    // 0x2d7078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d707c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2d707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2d7080: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2d7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2d7084: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D7084u;
    {
        const bool branch_taken_0x2d7084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7084u;
        // 0x2d7088: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7084) {
            ctx->pc = 0x2D7198u;
            goto label_2d7198;
        }
    }
    ctx->pc = 0x2D708Cu;
    // 0x2d708c: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x2d708cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x2d7090: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2D7090u;
    {
        const bool branch_taken_0x2d7090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7090u;
        // 0x2d7094: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7090) {
            ctx->pc = 0x2D7190u;
            goto label_2d7190;
        }
    }
    ctx->pc = 0x2D7098u;
label_2d7098:
    // 0x2d7098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d709c: 0x2229807  srav        $s3, $v0, $s1
    ctx->pc = 0x2d709cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2d70a0: 0x2131824  and         $v1, $s0, $s3
    ctx->pc = 0x2d70a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x2d70a4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x2d70a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x2d70a8: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D70A8u;
    {
        const bool branch_taken_0x2d70a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70A8u;
        // 0x2d70ac: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70a8) {
            ctx->pc = 0x2D71A4u;
            goto label_2d71a4;
        }
    }
    ctx->pc = 0x2D70B0u;
    // 0x2d70b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d70b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70b4: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D70B4u;
    SET_GPR_U32(ctx, 31, 0x2D70BCu);
    ctx->pc = 0x2D70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70B4u;
    // 0x2d70b8: 0xdc45a840  ld          $a1, -0x57C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294944832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D70B4u, 0x2D70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70BCu;
label_2d70bc:
    // 0x2d70bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70c0: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D70C0u;
    SET_GPR_U32(ctx, 31, 0x2D70C8u);
    ctx->pc = 0x2D70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70C0u;
    // 0x2d70c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D70C0u, 0x2D70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70C8u;
label_2d70c8:
    // 0x2d70c8: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D70C8u;
    {
        const bool branch_taken_0x2d70c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70C8u;
        // 0x2d70cc: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70c8) {
            ctx->pc = 0x2D7198u;
            goto label_2d7198;
        }
    }
    ctx->pc = 0x2D70D0u;
    // 0x2d70d0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D70D0u;
    {
        const bool branch_taken_0x2d70d0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2D70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70D0u;
        // 0x2d70d4: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70d0) {
            ctx->pc = 0x2D70E8u;
            goto label_2d70e8;
        }
    }
    ctx->pc = 0x2D70D8u;
    // 0x2d70d8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2d70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2d70dc: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x2d70dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2d70e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d70e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d70e4: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x2d70e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_2d70e8:
    // 0x2d70e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d70e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d70ec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D70ECu;
    {
        const bool branch_taken_0x2d70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70ECu;
        // 0x2d70f0: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70ec) {
            ctx->pc = 0x2D7190u;
            goto label_2d7190;
        }
    }
    ctx->pc = 0x2D70F4u;
label_2d70f4:
    // 0x2d70f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D70F4u;
    {
        const bool branch_taken_0x2d70f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70F4u;
        // 0x2d70f8: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70f4) {
            ctx->pc = 0x2D7118u;
            goto label_2d7118;
        }
    }
    ctx->pc = 0x2D70FCu;
    // 0x2d70fc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2d70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2d7100: 0x16220029  bne         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D7100u;
    {
        const bool branch_taken_0x2d7100 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7100u;
        // 0x2d7104: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7100) {
            ctx->pc = 0x2D71A8u;
            goto label_2d71a8;
        }
    }
    ctx->pc = 0x2D7108u;
    // 0x2d7108: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D7108u;
    SET_GPR_U32(ctx, 31, 0x2D7110u);
    ctx->pc = 0x2D710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7108u;
    // 0x2d710c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D7108u, 0x2D7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7110u;
label_2d7110:
    // 0x2d7110: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2D7110u;
    {
        const bool branch_taken_0x2d7110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7110u;
        // 0x2d7114: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7110) {
            ctx->pc = 0x2D71ACu;
            goto label_2d71ac;
        }
    }
    ctx->pc = 0x2D7118u;
label_2d7118:
    // 0x2d7118: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d7118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d711c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d7120: 0x829806  srlv        $s3, $v0, $a0
    ctx->pc = 0x2d7120u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d7124: 0x2531824  and         $v1, $s2, $s3
    ctx->pc = 0x2d7124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 19));
    // 0x2d7128: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D7128u;
    {
        const bool branch_taken_0x2d7128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7128u;
        // 0x2d712c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7128) {
            ctx->pc = 0x2D71A4u;
            goto label_2d71a4;
        }
    }
    ctx->pc = 0x2D7130u;
    // 0x2d7130: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d7130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7134: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2D7134u;
    SET_GPR_U32(ctx, 31, 0x2D713Cu);
    ctx->pc = 0x2D7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7134u;
    // 0x2d7138: 0xdc45a840  ld          $a1, -0x57C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294944832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2D7134u, 0x2D713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D713Cu;
label_2d713c:
    // 0x2d713c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7140: 0xc0b8dda  jal         func_2E3768
    ctx->pc = 0x2D7140u;
    SET_GPR_U32(ctx, 31, 0x2D7148u);
    ctx->pc = 0x2D7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7140u;
    // 0x2d7144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3768u, 0x2D7140u, 0x2D7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7148u;
label_2d7148:
    // 0x2d7148: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D7148u;
    {
        const bool branch_taken_0x2d7148 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7148u;
        // 0x2d714c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7148) {
            ctx->pc = 0x2D7198u;
            goto label_2d7198;
        }
    }
    ctx->pc = 0x2D7150u;
    // 0x2d7150: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D7150u;
    {
        const bool branch_taken_0x2d7150 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2D7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7150u;
        // 0x2d7154: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7150) {
            ctx->pc = 0x2D718Cu;
            goto label_2d718c;
        }
    }
    ctx->pc = 0x2D7158u;
    // 0x2d7158: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2d7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d715c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D715Cu;
    {
        const bool branch_taken_0x2d715c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D715Cu;
        // 0x2d7160: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d715c) {
            ctx->pc = 0x2D716Cu;
            goto label_2d716c;
        }
    }
    ctx->pc = 0x2D7164u;
    // 0x2d7164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7164u;
    {
        const bool branch_taken_0x2d7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7164u;
        // 0x2d7168: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7164) {
            ctx->pc = 0x2D7188u;
            goto label_2d7188;
        }
    }
    ctx->pc = 0x2D716Cu;
label_2d716c:
    // 0x2d716c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7170: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2d7170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d7174: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2d7174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d7178: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2d7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d717c: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x2d717cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d7180: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d7184: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2d7184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d7188:
    // 0x2d7188: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x2d7188u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_2d718c:
    // 0x2d718c: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2d718cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2d7190:
    // 0x2d7190: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2d7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2d7194: 0x0  nop
    ctx->pc = 0x2d7194u;
    // NOP
label_2d7198:
    // 0x2d7198: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d7198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d719c: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x2d719cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2d71a0: 0x2822825  or          $a1, $s4, $v0
    ctx->pc = 0x2d71a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2d71a4:
    // 0x2d71a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d71a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d71a8:
    // 0x2d71a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d71a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d71ac:
    // 0x2d71ac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d71acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d71b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2d71b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d71b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d71b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d71b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2d71b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d71bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d71bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d71c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D71C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71C0u;
        // 0x2d71c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D71C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D71C8u;
}

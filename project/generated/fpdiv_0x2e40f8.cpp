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

// Function: fpdiv
// Address: 0x2e40f8 - 0x2e4258
void fpdiv_0x2e40f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpdiv_0x2e40f8");
#endif

    switch (ctx->pc) {
        case 0x2e4118u: goto label_2e4118;
        case 0x2e4128u: goto label_2e4128;
        case 0x2e41f0u: goto label_2e41f0;
        case 0x2e4248u: goto label_2e4248;
        default: break;
    }

    ctx->pc = 0x2e40f8u;

    // 0x2e40f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e40f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e40fc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e40fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e4100: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e4100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e4104: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e4108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e4108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e410c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2e410cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e4110: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4110u;
    SET_GPR_U32(ctx, 31, 0x2E4118u);
    ctx->pc = 0x2E4114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4110u;
    // 0x2e4114: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4110u, 0x2E4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4118u;
label_2e4118:
    // 0x2e4118: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e4118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e411c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x2e411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2e4120: 0xc0b8ede  jal         func_2E3B78
    ctx->pc = 0x2E4120u;
    SET_GPR_U32(ctx, 31, 0x2E4128u);
    ctx->pc = 0x2E4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4120u;
    // 0x2e4124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B78u, 0x2E4120u, 0x2E4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4128u;
label_2e4128:
    // 0x2e4128: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2e4128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e412c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x2e412cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e4130: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4130u;
    {
        const bool branch_taken_0x2e4130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4130u;
        // 0x2e4134: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4130) {
            ctx->pc = 0x2E4140u;
            goto label_2e4140;
        }
    }
    ctx->pc = 0x2E4138u;
    // 0x2e4138: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E4138u;
    {
        const bool branch_taken_0x2e4138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4138u;
        // 0x2e413c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4138) {
            ctx->pc = 0x2E4240u;
            goto label_2e4240;
        }
    }
    ctx->pc = 0x2E4140u;
label_2e4140:
    // 0x2e4140: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2e4140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4144: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2e4144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e4148: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E4148u;
    {
        const bool branch_taken_0x2e4148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4148u;
        // 0x2e414c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4148) {
            ctx->pc = 0x2E4240u;
            goto label_2e4240;
        }
    }
    ctx->pc = 0x2E4150u;
    // 0x2e4150: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2e4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e4154: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x2e4154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x2e4158: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2e4158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e415c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e4160: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4160u;
    {
        const bool branch_taken_0x2e4160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4160u;
        // 0x2e4164: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4160) {
            ctx->pc = 0x2E4174u;
            goto label_2e4174;
        }
    }
    ctx->pc = 0x2E4168u;
    // 0x2e4168: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x2e4168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x2e416c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E416Cu;
    {
        const bool branch_taken_0x2e416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E416Cu;
        // 0x2e4170: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e416c) {
            ctx->pc = 0x2E4188u;
            goto label_2e4188;
        }
    }
    ctx->pc = 0x2E4174u;
label_2e4174:
    // 0x2e4174: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E4174u;
    {
        const bool branch_taken_0x2e4174 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4174u;
        // 0x2e4178: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4174) {
            ctx->pc = 0x2E4240u;
            goto label_2e4240;
        }
    }
    ctx->pc = 0x2E417Cu;
    // 0x2e417c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2e417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2e4180: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E4180u;
    {
        const bool branch_taken_0x2e4180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4180u;
        // 0x2e4184: 0x24445380  addiu       $a0, $v0, 0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4180) {
            ctx->pc = 0x2E4240u;
            goto label_2e4240;
        }
    }
    ctx->pc = 0x2E4188u;
label_2e4188:
    // 0x2e4188: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4188u;
    {
        const bool branch_taken_0x2e4188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4188u;
        // 0x2e418c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4188) {
            ctx->pc = 0x2E41A0u;
            goto label_2e41a0;
        }
    }
    ctx->pc = 0x2E4190u;
    // 0x2e4190: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e4190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e4194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e4194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4198: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2E4198u;
    {
        const bool branch_taken_0x2e4198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4198u;
        // 0x2e419c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4198) {
            ctx->pc = 0x2E4240u;
            goto label_2e4240;
        }
    }
    ctx->pc = 0x2E41A0u;
label_2e41a0:
    // 0x2e41a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E41A0u;
    {
        const bool branch_taken_0x2e41a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41A0u;
        // 0x2e41a4: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41a0) {
            ctx->pc = 0x2E41B8u;
            goto label_2e41b8;
        }
    }
    ctx->pc = 0x2E41A8u;
    // 0x2e41a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e41ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e41acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E41B0u;
    {
        const bool branch_taken_0x2e41b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41B0u;
        // 0x2e41b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41b0) {
            ctx->pc = 0x2E4240u;
            goto label_2e4240;
        }
    }
    ctx->pc = 0x2E41B8u;
label_2e41b8:
    // 0x2e41b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e41bc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2e41bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e41c0: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x2e41c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2e41c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2e41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e41c8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2e41c8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2e41cc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E41CCu;
    {
        const bool branch_taken_0x2e41cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41CCu;
        // 0x2e41d0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41cc) {
            ctx->pc = 0x2E41E4u;
            goto label_2e41e4;
        }
    }
    ctx->pc = 0x2E41D4u;
    // 0x2e41d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e41d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2e41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e41dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2e41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2e41e0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2e41e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e41e4:
    // 0x2e41e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e41e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E41E8u;
    {
        const bool branch_taken_0x2e41e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41E8u;
        // 0x2e41ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41e8) {
            ctx->pc = 0x2E41F4u;
            goto label_2e41f4;
        }
    }
    ctx->pc = 0x2E41F0u;
label_2e41f0:
    // 0x2e41f0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2e41f0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e41f4:
    // 0x2e41f4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E41F4u;
    {
        const bool branch_taken_0x2e41f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e41f4) {
            ctx->pc = 0x2E41F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E41F4u;
            // 0x2e41f8: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4208u;
            goto label_2e4208;
        }
    }
    ctx->pc = 0x2E41FCu;
    // 0x2e41fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2e41fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2e4200: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x2e4200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2e4204: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2e4208:
    // 0x2e4208: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E4208u;
    {
        const bool branch_taken_0x2e4208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4208u;
        // 0x2e420c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4208) {
            ctx->pc = 0x2E41F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e41f0;
        }
    }
    ctx->pc = 0x2E4210u;
    // 0x2e4210: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x2e4210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x2e4214: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2e4214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e4218: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4218u;
    {
        const bool branch_taken_0x2e4218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4218) {
            ctx->pc = 0x2E421Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4218u;
            // 0x2e421c: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E423Cu;
            goto label_2e423c;
        }
    }
    ctx->pc = 0x2E4220u;
    // 0x2e4220: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x2e4220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x2e4224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4224u;
    {
        const bool branch_taken_0x2e4224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4224u;
        // 0x2e4228: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4224) {
            ctx->pc = 0x2E4234u;
            goto label_2e4234;
        }
    }
    ctx->pc = 0x2E422Cu;
    // 0x2e422c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E422Cu;
    {
        const bool branch_taken_0x2e422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E422Cu;
        // 0x2e4230: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e422c) {
            ctx->pc = 0x2E4238u;
            goto label_2e4238;
        }
    }
    ctx->pc = 0x2E4234u;
label_2e4234:
    // 0x2e4234: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2e4234u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_2e4238:
    // 0x2e4238: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x2e4238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_2e423c:
    // 0x2e423c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e4240:
    // 0x2e4240: 0xc0b8e9a  jal         func_2E3A68
    ctx->pc = 0x2E4240u;
    SET_GPR_U32(ctx, 31, 0x2E4248u);
    ctx->pc = 0x2E3A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A68u, 0x2E4240u, 0x2E4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4248u;
label_2e4248:
    // 0x2e4248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e424c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e424cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4250: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4250u;
        // 0x2e4254: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4258u;
}

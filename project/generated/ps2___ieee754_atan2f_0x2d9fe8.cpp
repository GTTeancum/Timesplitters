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

// Function: __ieee754_atan2f
// Address: 0x2d9fe8 - 0x2da2d0
void ps2___ieee754_atan2f_0x2d9fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_atan2f_0x2d9fe8");
#endif

    switch (ctx->pc) {
        case 0x2da04cu: goto label_2da04c;
        case 0x2da098u: goto label_2da098;
        case 0x2da220u: goto label_2da220;
        case 0x2da228u: goto label_2da228;
        default: break;
    }

    ctx->pc = 0x2d9fe8u;

    // 0x2d9fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9fec: 0x44086800  mfc1        $t0, $f13
    ctx->pc = 0x2d9fecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2d9ff0: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2d9ff0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9ff8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2d9ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ffc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2d9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2da000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2da000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2da004: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x2da004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2da008: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2da008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da00c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2da00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da010: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x2da010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2da014: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x2da018: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2da018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2da01c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA01Cu;
    {
        const bool branch_taken_0x2da01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA01Cu;
        // 0x2da020: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da01c) {
            ctx->pc = 0x2DA030u;
            goto label_2da030;
        }
    }
    ctx->pc = 0x2DA024u;
    // 0x2da024: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2da024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2da028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA028u;
    {
        const bool branch_taken_0x2da028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA028u;
        // 0x2da02c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da028) {
            ctx->pc = 0x2DA03Cu;
            goto label_2da03c;
        }
    }
    ctx->pc = 0x2DA030u;
label_2da030:
    // 0x2da030: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2da030u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da034: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2DA034u;
    {
        const bool branch_taken_0x2da034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA034u;
        // 0x2da038: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da034) {
            ctx->pc = 0x2DA2C0u;
            goto label_2da2c0;
        }
    }
    ctx->pc = 0x2DA03Cu;
label_2da03c:
    // 0x2da03c: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA03Cu;
    {
        const bool branch_taken_0x2da03c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA03Cu;
        // 0x2da040: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da03c) {
            ctx->pc = 0x2DA054u;
            goto label_2da054;
        }
    }
    ctx->pc = 0x2DA044u;
    // 0x2da044: 0xc0b70be  jal         func_2DC2F8
    ctx->pc = 0x2DA044u;
    SET_GPR_U32(ctx, 31, 0x2DA04Cu);
    ctx->pc = 0x2DA048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA044u;
    // 0x2da048: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC2F8u, 0x2DA044u, 0x2DA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA04Cu;
label_2da04c:
    // 0x2da04c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2DA04Cu;
    {
        const bool branch_taken_0x2da04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA04Cu;
        // 0x2da050: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da04c) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA054u;
label_2da054:
    // 0x2da054: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x2da054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2da058: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2da058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2da05c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA05Cu;
    {
        const bool branch_taken_0x2da05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA05Cu;
        // 0x2da060: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da05c) {
            ctx->pc = 0x2DA090u;
            goto label_2da090;
        }
    }
    ctx->pc = 0x2DA064u;
    // 0x2da064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da068: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2DA068u;
    {
        const bool branch_taken_0x2da068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA068u;
        // 0x2da06c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da068) {
            ctx->pc = 0x2DA1A8u;
            goto label_2da1a8;
        }
    }
    ctx->pc = 0x2DA070u;
    // 0x2da070: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA070u;
    {
        const bool branch_taken_0x2da070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA070u;
        // 0x2da074: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da070) {
            ctx->pc = 0x2DA088u;
            goto label_2da088;
        }
    }
    ctx->pc = 0x2DA078u;
    // 0x2da078: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2DA078u;
    {
        const bool branch_taken_0x2da078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da078) {
            ctx->pc = 0x2DA1BCu;
            goto label_2da1bc;
        }
    }
    ctx->pc = 0x2DA080u;
    // 0x2da080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA080u;
    {
        const bool branch_taken_0x2da080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da080) {
            ctx->pc = 0x2DA090u;
            goto label_2da090;
        }
    }
    ctx->pc = 0x2DA088u;
label_2da088:
    // 0x2da088: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2DA088u;
    {
        const bool branch_taken_0x2da088 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2DA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA088u;
        // 0x2da08c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da088) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA090u;
label_2da090:
    // 0x2da090: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA090u;
    {
        const bool branch_taken_0x2da090 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA090u;
        // 0x2da094: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da090) {
            ctx->pc = 0x2DA0C0u;
            goto label_2da0c0;
        }
    }
    ctx->pc = 0x2DA098u;
label_2da098:
    // 0x2da098: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2da098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2da09c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da09cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da0a4: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x2DA0A4u;
    {
        const bool branch_taken_0x2da0a4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2DA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0A4u;
        // 0x2da0a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0a4) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA0ACu;
    // 0x2da0ac: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2da0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2da0b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da0b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da0b8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2DA0B8u;
    {
        const bool branch_taken_0x2da0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0B8u;
        // 0x2da0bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0b8) {
            ctx->pc = 0x2DA2C8u;
            goto label_2da2c8;
        }
    }
    ctx->pc = 0x2DA0C0u;
label_2da0c0:
    // 0x2da0c0: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DA0C0u;
    {
        const bool branch_taken_0x2da0c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0C0u;
        // 0x2da0c4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0c0) {
            ctx->pc = 0x2DA1D0u;
            goto label_2da1d0;
        }
    }
    ctx->pc = 0x2DA0C8u;
    // 0x2da0c8: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DA0C8u;
    {
        const bool branch_taken_0x2da0c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0C8u;
        // 0x2da0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0c8) {
            ctx->pc = 0x2DA158u;
            goto label_2da158;
        }
    }
    ctx->pc = 0x2DA0D0u;
    // 0x2da0d0: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DA0D0u;
    {
        const bool branch_taken_0x2da0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0D0u;
        // 0x2da0d4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0d0) {
            ctx->pc = 0x2DA11Cu;
            goto label_2da11c;
        }
    }
    ctx->pc = 0x2DA0D8u;
    // 0x2da0d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA0D8u;
    {
        const bool branch_taken_0x2da0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0D8u;
        // 0x2da0dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0d8) {
            ctx->pc = 0x2DA0F0u;
            goto label_2da0f0;
        }
    }
    ctx->pc = 0x2DA0E0u;
    // 0x2da0e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA0E0u;
    {
        const bool branch_taken_0x2da0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0E0u;
        // 0x2da0e4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0e0) {
            ctx->pc = 0x2DA108u;
            goto label_2da108;
        }
    }
    ctx->pc = 0x2DA0E8u;
    // 0x2da0e8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2DA0E8u;
    {
        const bool branch_taken_0x2da0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da0e8) {
            ctx->pc = 0x2DA1D0u;
            goto label_2da1d0;
        }
    }
    ctx->pc = 0x2DA0F0u;
label_2da0f0:
    // 0x2da0f0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DA0F0u;
    {
        const bool branch_taken_0x2da0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0F0u;
        // 0x2da0f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0f0) {
            ctx->pc = 0x2DA130u;
            goto label_2da130;
        }
    }
    ctx->pc = 0x2DA0F8u;
    // 0x2da0f8: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DA0F8u;
    {
        const bool branch_taken_0x2da0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0F8u;
        // 0x2da0fc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0f8) {
            ctx->pc = 0x2DA144u;
            goto label_2da144;
        }
    }
    ctx->pc = 0x2DA100u;
    // 0x2da100: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2DA100u;
    {
        const bool branch_taken_0x2da100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da100) {
            ctx->pc = 0x2DA1D0u;
            goto label_2da1d0;
        }
    }
    ctx->pc = 0x2DA108u;
label_2da108:
    // 0x2da108: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2da108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x2da10c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da10cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da114: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2DA114u;
    {
        const bool branch_taken_0x2da114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA114u;
        // 0x2da118: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da114) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA11Cu;
label_2da11c:
    // 0x2da11c: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x2da11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x2da120: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da128: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2DA128u;
    {
        const bool branch_taken_0x2da128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA128u;
        // 0x2da12c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da128) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA130u;
label_2da130:
    // 0x2da130: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x2da130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x2da134: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x2da134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x2da138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da13c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2DA13Cu;
    {
        const bool branch_taken_0x2da13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA13Cu;
        // 0x2da140: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da13c) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA144u;
label_2da144:
    // 0x2da144: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x2da144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x2da148: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x2da148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x2da14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da150: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2DA150u;
    {
        const bool branch_taken_0x2da150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA150u;
        // 0x2da154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da150) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA158u;
label_2da158:
    // 0x2da158: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA158u;
    {
        const bool branch_taken_0x2da158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA158u;
        // 0x2da15c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da158) {
            ctx->pc = 0x2DA19Cu;
            goto label_2da19c;
        }
    }
    ctx->pc = 0x2DA160u;
    // 0x2da160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA160u;
    {
        const bool branch_taken_0x2da160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA160u;
        // 0x2da164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da160) {
            ctx->pc = 0x2DA178u;
            goto label_2da178;
        }
    }
    ctx->pc = 0x2DA168u;
    // 0x2da168: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA168u;
    {
        const bool branch_taken_0x2da168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA168u;
        // 0x2da16c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da168) {
            ctx->pc = 0x2DA190u;
            goto label_2da190;
        }
    }
    ctx->pc = 0x2DA170u;
    // 0x2da170: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DA170u;
    {
        const bool branch_taken_0x2da170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da170) {
            ctx->pc = 0x2DA1D0u;
            goto label_2da1d0;
        }
    }
    ctx->pc = 0x2DA178u;
label_2da178:
    // 0x2da178: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA178u;
    {
        const bool branch_taken_0x2da178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA178u;
        // 0x2da17c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da178) {
            ctx->pc = 0x2DA1A8u;
            goto label_2da1a8;
        }
    }
    ctx->pc = 0x2DA180u;
    // 0x2da180: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DA180u;
    {
        const bool branch_taken_0x2da180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA180u;
        // 0x2da184: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da180) {
            ctx->pc = 0x2DA1BCu;
            goto label_2da1bc;
        }
    }
    ctx->pc = 0x2DA188u;
    // 0x2da188: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA188u;
    {
        const bool branch_taken_0x2da188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da188) {
            ctx->pc = 0x2DA1D0u;
            goto label_2da1d0;
        }
    }
    ctx->pc = 0x2DA190u;
label_2da190:
    // 0x2da190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da194: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2DA194u;
    {
        const bool branch_taken_0x2da194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA194u;
        // 0x2da198: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da194) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA19Cu;
label_2da19c:
    // 0x2da19c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2da1a0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2DA1A0u;
    {
        const bool branch_taken_0x2da1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1A0u;
        // 0x2da1a4: 0xc440abec  lwc1        $f0, -0x5414($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1a0) {
            ctx->pc = 0x2DA2C0u;
            goto label_2da2c0;
        }
    }
    ctx->pc = 0x2DA1A8u;
label_2da1a8:
    // 0x2da1a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da1ac: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2da1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2da1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da1b4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2DA1B4u;
    {
        const bool branch_taken_0x2da1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1B4u;
        // 0x2da1b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1b4) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA1BCu;
label_2da1bc:
    // 0x2da1bc: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da1c0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2da1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2da1c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da1c8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2DA1C8u;
    {
        const bool branch_taken_0x2da1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1C8u;
        // 0x2da1cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1c8) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA1D0u;
label_2da1d0:
    // 0x2da1d0: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2DA1D0u;
    {
        const bool branch_taken_0x2da1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1D0u;
        // 0x2da1d4: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1d0) {
            ctx->pc = 0x2DA098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da098;
        }
    }
    ctx->pc = 0x2DA1D8u;
    // 0x2da1d8: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x2da1d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x2da1dc: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x2da1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2da1e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA1E0u;
    {
        const bool branch_taken_0x2da1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da1e0) {
            ctx->pc = 0x2DA1F8u;
            goto label_2da1f8;
        }
    }
    ctx->pc = 0x2DA1E8u;
    // 0x2da1e8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2da1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2da1ec: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x2da1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x2da1f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DA1F0u;
    {
        const bool branch_taken_0x2da1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1F0u;
        // 0x2da1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1f0) {
            ctx->pc = 0x2DA230u;
            goto label_2da230;
        }
    }
    ctx->pc = 0x2DA1F8u;
label_2da1f8:
    // 0x2da1f8: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA1F8u;
    {
        const bool branch_taken_0x2da1f8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1F8u;
        // 0x2da1fc: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1f8) {
            ctx->pc = 0x2DA208u;
            goto label_2da208;
        }
    }
    ctx->pc = 0x2DA200u;
    // 0x2da200: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA200u;
    {
        const bool branch_taken_0x2da200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA200u;
        // 0x2da204: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da200) {
            ctx->pc = 0x2DA22Cu;
            goto label_2da22c;
        }
    }
    ctx->pc = 0x2DA208u;
label_2da208:
    // 0x2da208: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x2da208u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da20c: 0x0  nop
    ctx->pc = 0x2da20cu;
    // NOP
    // 0x2da210: 0x0  nop
    ctx->pc = 0x2da210u;
    // NOP
    // 0x2da214: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x2da214u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
    // 0x2da218: 0xc0b7168  jal         func_2DC5A0
    ctx->pc = 0x2DA218u;
    SET_GPR_U32(ctx, 31, 0x2DA220u);
    ctx->pc = 0x2DC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5A0u, 0x2DA218u, 0x2DA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA220u;
label_2da220:
    // 0x2da220: 0xc0b70be  jal         func_2DC2F8
    ctx->pc = 0x2DA220u;
    SET_GPR_U32(ctx, 31, 0x2DA228u);
    ctx->pc = 0x2DA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA220u;
    // 0x2da224: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC2F8u, 0x2DA220u, 0x2DA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA228u;
label_2da228:
    // 0x2da228: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2da228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2da22c:
    // 0x2da22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da230:
    // 0x2da230: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA230u;
    {
        const bool branch_taken_0x2da230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA230u;
        // 0x2da234: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da230) {
            ctx->pc = 0x2DA260u;
            goto label_2da260;
        }
    }
    ctx->pc = 0x2DA238u;
    // 0x2da238: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA238u;
    {
        const bool branch_taken_0x2da238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da238) {
            ctx->pc = 0x2DA23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA238u;
            // 0x2da23c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA250u;
            goto label_2da250;
        }
    }
    ctx->pc = 0x2DA240u;
    // 0x2da240: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DA240u;
    {
        const bool branch_taken_0x2da240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da240) {
            ctx->pc = 0x2DA268u;
            goto label_2da268;
        }
    }
    ctx->pc = 0x2DA248u;
    // 0x2da248: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DA248u;
    {
        const bool branch_taken_0x2da248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da248) {
            ctx->pc = 0x2DA29Cu;
            goto label_2da29c;
        }
    }
    ctx->pc = 0x2DA250u;
label_2da250:
    // 0x2da250: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA250u;
    {
        const bool branch_taken_0x2da250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da250) {
            ctx->pc = 0x2DA274u;
            goto label_2da274;
        }
    }
    ctx->pc = 0x2DA258u;
    // 0x2da258: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA258u;
    {
        const bool branch_taken_0x2da258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da258) {
            ctx->pc = 0x2DA29Cu;
            goto label_2da29c;
        }
    }
    ctx->pc = 0x2DA260u;
label_2da260:
    // 0x2da260: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2da260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2da264: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2da264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_2da268:
    // 0x2da268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da26c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DA26Cu;
    {
        const bool branch_taken_0x2da26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA26Cu;
        // 0x2da270: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da26c) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA274u;
label_2da274:
    // 0x2da274: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x2da274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x2da278: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2da278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2da27c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da280: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2da280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da284: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da288: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2da288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2da28c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da290: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2da290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2da294: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA294u;
    {
        const bool branch_taken_0x2da294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA294u;
        // 0x2da298: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da294) {
            ctx->pc = 0x2DA2C0u;
            goto label_2da2c0;
        }
    }
    ctx->pc = 0x2DA29Cu;
label_2da29c:
    // 0x2da29c: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x2da29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x2da2a0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x2da2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x2da2a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2da2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2da2ac: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da2b0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x2da2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x2da2b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da2b8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2da2b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2da2bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2da2bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2da2c0:
    // 0x2da2c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2da2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2da2c4:
    // 0x2da2c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da2c8:
    // 0x2da2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2C8u;
        // 0x2da2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA2D0u;
}

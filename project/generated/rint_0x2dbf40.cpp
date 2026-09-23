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

// Function: rint
// Address: 0x2dbf40 - 0x2dc13c
void rint_0x2dbf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rint_0x2dbf40");
#endif

    switch (ctx->pc) {
        case 0x2dc004u: goto label_2dc004;
        case 0x2dc010u: goto label_2dc010;
        case 0x2dc0a4u: goto label_2dc0a4;
        case 0x2dc114u: goto label_2dc114;
        case 0x2dc120u: goto label_2dc120;
        default: break;
    }

    ctx->pc = 0x2dbf40u;

    // 0x2dbf40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dbf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dbf44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dbf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dbf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2dbf4c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2dbf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2dbf50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2dbf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dbf54: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2dbf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2dbf58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dbf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dbf5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2dbf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf60: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2dbf60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dbf64: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2dbf64u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2dbf68: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x2dbf68u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dbf6c: 0x61503  sra         $v0, $a2, 20
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x2dbf70: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x2dbf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2dbf74: 0x2468fc01  addiu       $t0, $v1, -0x3FF
    ctx->pc = 0x2dbf74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x2dbf78: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x2dbf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2dbf7c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DBF7Cu;
    {
        const bool branch_taken_0x2dbf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF7Cu;
        // 0x2dbf80: 0x69fc2  srl         $s3, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf7c) {
            ctx->pc = 0x2DC084u;
            goto label_2dc084;
        }
    }
    ctx->pc = 0x2DBF84u;
    // 0x2dbf84: 0x501002c  bgez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DBF84u;
    {
        const bool branch_taken_0x2dbf84 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2DBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF84u;
        // 0x2dbf88: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf84) {
            ctx->pc = 0x2DC038u;
            goto label_2dc038;
        }
    }
    ctx->pc = 0x2DBF8Cu;
    // 0x2dbf8c: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x2dbf8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x2dbf90: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2dbf90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2dbf94: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x2dbf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x2dbf98: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2dbf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2dbf9c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2DBF9Cu;
    {
        const bool branch_taken_0x2dbf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF9Cu;
        // 0x2dbfa0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf9c) {
            ctx->pc = 0x2DC0C4u;
            goto label_2dc0c4;
        }
    }
    ctx->pc = 0x2DBFA4u;
    // 0x2dbfa4: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2dbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2dbfa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dbfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dbfac: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2dbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2dbfb0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2dbfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2dbfb4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2dbfb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2dbfb8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2dbfb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2dbfbc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2dbfc0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2dbfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2dbfc4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2dbfc8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2dbfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2dbfcc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2dbfccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2dbfd0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2dbfd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfd4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x2dbfd8: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x2dbfd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x2dbfdc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2dbfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2dbfe0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x2dbfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2dbfe4: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x2dbfe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dbfe8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2dbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2dbfec: 0x2484b120  addiu       $a0, $a0, -0x4EE0
    ctx->pc = 0x2dbfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947104));
    // 0x2dbff0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2dbff4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dbff8: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x2dbff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbffc: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2DBFFCu;
    SET_GPR_U32(ctx, 31, 0x2DC004u);
    ctx->pc = 0x2DC000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFFCu;
    // 0x2dc000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2DBFFCu, 0x2DC004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC004u;
label_2dc004:
    // 0x2dc004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dc004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc008: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2DC008u;
    SET_GPR_U32(ctx, 31, 0x2DC010u);
    ctx->pc = 0x2DC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC008u;
    // 0x2dc00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2DC008u, 0x2DC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC010u;
label_2dc010:
    // 0x2dc010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc014: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x2dc014u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dc018: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x2dc018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x2dc01c: 0x1317c0  sll         $v0, $s3, 31
    ctx->pc = 0x2dc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 31));
    // 0x2dc020: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x2dc020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x2dc024: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dc024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dc028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2dc028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2dc02c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dc02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dc030: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2DC030u;
    {
        const bool branch_taken_0x2dc030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC030u;
        // 0x2dc034: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc030) {
            ctx->pc = 0x2DC120u;
            goto label_2dc120;
        }
    }
    ctx->pc = 0x2DC038u;
label_2dc038:
    // 0x2dc038: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc03c: 0x1022007  srav        $a0, $v0, $t0
    ctx->pc = 0x2dc03cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2dc040: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2dc040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2dc044: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2dc044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2dc048: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DC048u;
    {
        const bool branch_taken_0x2dc048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC048u;
        // 0x2dc04c: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc048) {
            ctx->pc = 0x2DC0C4u;
            goto label_2dc0c4;
        }
    }
    ctx->pc = 0x2DC050u;
    // 0x2dc050: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x2dc050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2dc054: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2dc054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2dc058: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DC058u;
    {
        const bool branch_taken_0x2dc058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC058u;
        // 0x2dc05c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc058) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DC060u;
    // 0x2dc060: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC060u;
    {
        const bool branch_taken_0x2dc060 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC060u;
        // 0x2dc064: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc060) {
            ctx->pc = 0x2DC070u;
            goto label_2dc070;
        }
    }
    ctx->pc = 0x2DC068u;
    // 0x2dc068: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2DC068u;
    {
        const bool branch_taken_0x2dc068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC068u;
        // 0x2dc06c: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc068) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DC070u;
label_2dc070:
    // 0x2dc070: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2dc074: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2dc074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2dc078: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x2dc078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2dc07c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC07Cu;
    {
        const bool branch_taken_0x2dc07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC07Cu;
        // 0x2dc080: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc07c) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DC084u;
label_2dc084:
    // 0x2dc084: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x2dc084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x2dc088: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC088u;
    {
        const bool branch_taken_0x2dc088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc088) {
            ctx->pc = 0x2DC08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC088u;
            // 0x2dc08c: 0x2468fbed  addiu       $t0, $v1, -0x413 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0ACu;
            goto label_2dc0ac;
        }
    }
    ctx->pc = 0x2DC090u;
    // 0x2dc090: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2dc094: 0x15020022  bne         $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DC094u;
    {
        const bool branch_taken_0x2dc094 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC094u;
        // 0x2dc098: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc094) {
            ctx->pc = 0x2DC120u;
            goto label_2dc120;
        }
    }
    ctx->pc = 0x2DC09Cu;
    // 0x2dc09c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2DC09Cu;
    SET_GPR_U32(ctx, 31, 0x2DC0A4u);
    ctx->pc = 0x2DC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC09Cu;
    // 0x2dc0a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2DC09Cu, 0x2DC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0A4u;
label_2dc0a4:
    // 0x2dc0a4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2DC0A4u;
    {
        const bool branch_taken_0x2dc0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0A4u;
        // 0x2dc0a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0a4) {
            ctx->pc = 0x2DC124u;
            goto label_2dc124;
        }
    }
    ctx->pc = 0x2DC0ACu;
label_2dc0ac:
    // 0x2dc0ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc0b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc0b4: 0x1022006  srlv        $a0, $v0, $t0
    ctx->pc = 0x2dc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2dc0b8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x2dc0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2dc0bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC0BCu;
    {
        const bool branch_taken_0x2dc0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0BCu;
        // 0x2dc0c0: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0bc) {
            ctx->pc = 0x2DC0CCu;
            goto label_2dc0cc;
        }
    }
    ctx->pc = 0x2DC0C4u;
label_2dc0c4:
    // 0x2dc0c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DC0C4u;
    {
        const bool branch_taken_0x2dc0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0C4u;
        // 0x2dc0c8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0c4) {
            ctx->pc = 0x2DC120u;
            goto label_2dc120;
        }
    }
    ctx->pc = 0x2DC0CCu;
label_2dc0cc:
    // 0x2dc0cc: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x2dc0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2dc0d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC0D0u;
    {
        const bool branch_taken_0x2dc0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0D0u;
        // 0x2dc0d4: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0d0) {
            ctx->pc = 0x2DC0E8u;
            goto label_2dc0e8;
        }
    }
    ctx->pc = 0x2DC0D8u;
    // 0x2dc0d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dc0dc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2dc0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2dc0e0: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x2dc0e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2dc0e4: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x2dc0e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dc0e8:
    // 0x2dc0e8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2dc0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2dc0ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2dc0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2dc0f0: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x2dc0f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2dc0f4: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x2dc0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2dc0f8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dc0fc: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x2dc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x2dc100: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2dc100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2dc104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc108: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x2dc108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc10c: 0xc0b8c60  jal         func_2E3180
    ctx->pc = 0x2DC10Cu;
    SET_GPR_U32(ctx, 31, 0x2DC114u);
    ctx->pc = 0x2DC110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC10Cu;
    // 0x2dc110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x2DC10Cu, 0x2DC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC114u;
label_2dc114:
    // 0x2dc114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc118: 0xc0b8c76  jal         func_2E31D8
    ctx->pc = 0x2DC118u;
    SET_GPR_U32(ctx, 31, 0x2DC120u);
    ctx->pc = 0x2DC11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC118u;
    // 0x2dc11c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31D8u, 0x2DC118u, 0x2DC120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC120u;
label_2dc120:
    // 0x2dc120: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dc120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc124:
    // 0x2dc124: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2dc124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc128: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2dc128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc12c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2dc12cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc130: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dc130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc134: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC134u;
        // 0x2dc138: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC13Cu;
}

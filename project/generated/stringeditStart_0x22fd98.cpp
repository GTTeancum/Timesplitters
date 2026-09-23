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

// Function: stringeditStart
// Address: 0x22fd98 - 0x22fed4
void stringeditStart_0x22fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stringeditStart_0x22fd98");
#endif

    switch (ctx->pc) {
        case 0x22fdd4u: goto label_22fdd4;
        case 0x22fe08u: goto label_22fe08;
        default: break;
    }

    ctx->pc = 0x22fd98u;

    // 0x22fd98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22fd9c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22fda0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22fda4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x22fda4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fda8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22fdac: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x22fdacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22fdb4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x22fdb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22fdbc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22fdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fdc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22fdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fdc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22fdcc: 0xc08bfb6  jal         func_22FED8
    ctx->pc = 0x22FDCCu;
    SET_GPR_U32(ctx, 31, 0x22FDD4u);
    ctx->pc = 0x22FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FDCCu;
    // 0x22fdd0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED8u, 0x22FDCCu, 0x22FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FDD4u;
label_22fdd4:
    // 0x22fdd4: 0x8f86a034  lw          $a2, -0x5FCC($gp)
    ctx->pc = 0x22fdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942772)));
    // 0x22fdd8: 0xacd00034  sw          $s0, 0x34($a2)
    ctx->pc = 0x22fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 16));
    // 0x22fddc: 0xacd10030  sw          $s1, 0x30($a2)
    ctx->pc = 0x22fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 17));
    // 0x22fde0: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x22fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x22fde4: 0xacd40004  sw          $s4, 0x4($a2)
    ctx->pc = 0x22fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 20));
    // 0x22fde8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x22fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x22fdec: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x22fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x22fdf0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x22fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x22fdf4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x22fdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22fdf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22FDF8u;
    {
        const bool branch_taken_0x22fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDF8u;
        // 0x22fdfc: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdf8) {
            ctx->pc = 0x22FE2Cu;
            goto label_22fe2c;
        }
    }
    ctx->pc = 0x22FE00u;
    // 0x22fe00: 0x2a470003  slti        $a3, $s2, 0x3
    ctx->pc = 0x22fe00u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22fe04: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x22fe04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
label_22fe08:
    // 0x22fe08: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x22fe0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22fe10: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x22fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x22fe14: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22fe18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22fe18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fe1c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22FE1Cu;
    {
        const bool branch_taken_0x22fe1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fe1c) {
            ctx->pc = 0x22FE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fe08;
        }
    }
    ctx->pc = 0x22FE24u;
    // 0x22fe24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22FE24u;
    {
        const bool branch_taken_0x22fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE24u;
        // 0x22fe28: 0xacd20010  sw          $s2, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe24) {
            ctx->pc = 0x22FE38u;
            goto label_22fe38;
        }
    }
    ctx->pc = 0x22FE2Cu;
label_22fe2c:
    // 0x22fe2c: 0x2a470003  slti        $a3, $s2, 0x3
    ctx->pc = 0x22fe2cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22fe30: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x22fe34: 0xacd20010  sw          $s2, 0x10($a2)
    ctx->pc = 0x22fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 18));
label_22fe38:
    // 0x22fe38: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FE38u;
    {
        const bool branch_taken_0x22fe38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE38u;
        // 0x22fe3c: 0xacd50014  sw          $s5, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe38) {
            ctx->pc = 0x22FE5Cu;
            goto label_22fe5c;
        }
    }
    ctx->pc = 0x22FE40u;
    // 0x22fe40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x22fe44: 0x246499f0  addiu       $a0, $v1, -0x6610
    ctx->pc = 0x22fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941168));
    // 0x22fe48: 0x8c6599f0  lw          $a1, -0x6610($v1)
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3299F0u));
    // 0x22fe4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3299F8u));
    // 0x22fe50: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x22fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22fe54: 0x2442ff74  addiu       $v0, $v0, -0x8C
    ctx->pc = 0x22fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967156));
    // 0x22fe58: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x22fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_22fe5c:
    // 0x22fe5c: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x22FE5Cu;
    {
        const bool branch_taken_0x22fe5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE5Cu;
        // 0x22fe60: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe5c) {
            ctx->pc = 0x22FE84u;
            goto label_22fe84;
        }
    }
    ctx->pc = 0x22FE64u;
    // 0x22fe64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22fe68: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x22fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x22fe6c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x22fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x329A04u));
    // 0x22fe70: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x329A0Cu));
    // 0x22fe74: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fe78: 0x2463ffd2  addiu       $v1, $v1, -0x2E
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967250));
    // 0x22fe7c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x22fe80: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x22fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_22fe84:
    // 0x22fe84: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x22fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x22fe88: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x22fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x22fe8c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FE8Cu;
    {
        const bool branch_taken_0x22fe8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE8Cu;
        // 0x22fe90: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe8c) {
            ctx->pc = 0x22FE9Cu;
            goto label_22fe9c;
        }
    }
    ctx->pc = 0x22FE94u;
    // 0x22fe94: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x22fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x22fe98: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x22fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_22fe9c:
    // 0x22fe9c: 0x25222f40  addiu       $v0, $t1, 0x2F40
    ctx->pc = 0x22fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x22fea0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22fea4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22fea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fea8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22fea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22feac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22feacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22feb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22feb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22feb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22feb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22feb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22feb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22febc: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x22febcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x22fec0: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x22fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x22fec4: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x22fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x22fec8: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x22fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x22fecc: 0x3e00008  jr          $ra
    ctx->pc = 0x22FECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FECCu;
        // 0x22fed0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FED4u;
}

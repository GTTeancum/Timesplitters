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

// Function: fileLoadTo
// Address: 0x21a488 - 0x21a598
void fileLoadTo_0x21a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileLoadTo_0x21a488");
#endif

    switch (ctx->pc) {
        case 0x21a4b8u: goto label_21a4b8;
        case 0x21a4f0u: goto label_21a4f0;
        case 0x21a504u: goto label_21a504;
        case 0x21a548u: goto label_21a548;
        case 0x21a55cu: goto label_21a55c;
        case 0x21a56cu: goto label_21a56c;
        default: break;
    }

    ctx->pc = 0x21a488u;

    // 0x21a488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21a48c: 0x8f82b6b8  lw          $v0, -0x4948($gp)
    ctx->pc = 0x21a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948536)));
    // 0x21a490: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21a490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21a494: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21a498: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21a498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a49c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21a4a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a4a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21a4a8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21A4A8u;
    {
        const bool branch_taken_0x21a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4A8u;
        // 0x21a4ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4a8) {
            ctx->pc = 0x21A578u;
            goto label_21a578;
        }
    }
    ctx->pc = 0x21A4B0u;
    // 0x21a4b0: 0xc086854  jal         func_21A150
    ctx->pc = 0x21A4B0u;
    SET_GPR_U32(ctx, 31, 0x21A4B8u);
    ctx->pc = 0x21A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A150u, 0x21A4B0u, 0x21A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4B8u;
label_21a4b8:
    // 0x21a4b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4bc: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x21A4BCu;
    {
        const bool branch_taken_0x21a4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4BCu;
        // 0x21a4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4bc) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A4C4u;
    // 0x21a4c4: 0x8e080038  lw          $t0, 0x38($s0)
    ctx->pc = 0x21a4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21a4c8: 0x15000010  bnez        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A4C8u;
    {
        const bool branch_taken_0x21a4c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C8u;
        // 0x21a4cc: 0x8e110034  lw          $s1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4c8) {
            ctx->pc = 0x21A50Cu;
            goto label_21a50c;
        }
    }
    ctx->pc = 0x21A4D0u;
    // 0x21a4d0: 0x8f83b6c0  lw          $v1, -0x4940($gp)
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948544)));
    // 0x21a4d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4d8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x21a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21a4dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21a4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21a4e4: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x21a4e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x21a4e8: 0xc086732  jal         func_219CC8
    ctx->pc = 0x21A4E8u;
    SET_GPR_U32(ctx, 31, 0x21A4F0u);
    ctx->pc = 0x21A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4E8u;
    // 0x21a4ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219CC8u, 0x21A4E8u, 0x21A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4F0u;
label_21a4f0:
    // 0x21a4f0: 0x8f829358  lw          $v0, -0x6CA8($gp)
    ctx->pc = 0x21a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939480)));
    // 0x21a4f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4F4u;
        // 0x21a4f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A4FCu;
    // 0x21a4fc: 0xc0868bc  jal         func_21A2F0
    ctx->pc = 0x21A4FCu;
    SET_GPR_U32(ctx, 31, 0x21A504u);
    ctx->pc = 0x21A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F0u, 0x21A4FCu, 0x21A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A504u;
label_21a504:
    // 0x21a504: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21A504u;
    {
        const bool branch_taken_0x21a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a504) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A50Cu;
label_21a50c:
    // 0x21a50c: 0x8f87b6c0  lw          $a3, -0x4940($gp)
    ctx->pc = 0x21a50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948544)));
    // 0x21a510: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21a510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21a514: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x21a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x21a518: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x21a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21a51c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x21a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21a520: 0x2622824  and         $a1, $s3, $v0
    ctx->pc = 0x21a520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x21a524: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x21a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x21a528: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x21a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x21a52c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a530: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x21a530u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x21a534: 0xa38823  subu        $s1, $a1, $v1
    ctx->pc = 0x21a534u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21a538: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x21a538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21a53c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x21a53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a540: 0xc086732  jal         func_219CC8
    ctx->pc = 0x21A540u;
    SET_GPR_U32(ctx, 31, 0x21A548u);
    ctx->pc = 0x21A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A540u;
    // 0x21a544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219CC8u, 0x21A540u, 0x21A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A548u;
label_21a548:
    // 0x21a548: 0x8f829358  lw          $v0, -0x6CA8($gp)
    ctx->pc = 0x21a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939480)));
    // 0x21a54c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A54Cu;
    {
        const bool branch_taken_0x21a54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a54c) {
            ctx->pc = 0x21A550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A54Cu;
            // 0x21a550: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A560u;
            goto label_21a560;
        }
    }
    ctx->pc = 0x21A554u;
    // 0x21a554: 0xc0868bc  jal         func_21A2F0
    ctx->pc = 0x21A554u;
    SET_GPR_U32(ctx, 31, 0x21A55Cu);
    ctx->pc = 0x21A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F0u, 0x21A554u, 0x21A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A55Cu;
label_21a55c:
    // 0x21a55c: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x21a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_21a560:
    // 0x21a560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a564: 0xc08706c  jal         func_21C1B0
    ctx->pc = 0x21A564u;
    SET_GPR_U32(ctx, 31, 0x21A56Cu);
    ctx->pc = 0x21A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A564u;
    // 0x21a568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C1B0u, 0x21A564u, 0x21A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A56Cu;
label_21a56c:
    // 0x21a56c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21A570u;
    {
        const bool branch_taken_0x21a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A570u;
        // 0x21a574: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a570) {
            ctx->pc = 0x21A57Cu;
            goto label_21a57c;
        }
    }
    ctx->pc = 0x21A578u;
label_21a578:
    // 0x21a578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a57c:
    // 0x21a57c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21a57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a580: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21a584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21a588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a590: 0x3e00008  jr          $ra
    ctx->pc = 0x21A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A590u;
        // 0x21a594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A598u;
}

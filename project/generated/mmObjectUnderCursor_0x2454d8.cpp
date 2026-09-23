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

// Function: mmObjectUnderCursor
// Address: 0x2454d8 - 0x245650
void mmObjectUnderCursor_0x2454d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmObjectUnderCursor_0x2454d8");
#endif

    switch (ctx->pc) {
        case 0x245500u: goto label_245500;
        case 0x245524u: goto label_245524;
        case 0x245540u: goto label_245540;
        case 0x245558u: goto label_245558;
        default: break;
    }

    ctx->pc = 0x2454d8u;

    // 0x2454d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2454d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2454dc: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2454dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2454e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2454e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2454e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2454e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2454e8: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x2454ec: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x2454ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2454f0: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x2454f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x2454f4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2454f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2454f8: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2454F8u;
    SET_GPR_U32(ctx, 31, 0x245500u);
    ctx->pc = 0x2454FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454F8u;
    // 0x2454fc: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2454F8u, 0x245500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245500u;
label_245500:
    // 0x245500: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x245500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x245504: 0x8f85a15c  lw          $a1, -0x5EA4($gp)
    ctx->pc = 0x245504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x245508: 0x84640026  lh          $a0, 0x26($v1)
    ctx->pc = 0x245508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x24550c: 0x8f86a168  lw          $a2, -0x5E98($gp)
    ctx->pc = 0x24550cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x245510: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x245510u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x245514: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x245514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x245518: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x245518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24551c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x24551Cu;
    SET_GPR_U32(ctx, 31, 0x245524u);
    ctx->pc = 0x245520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24551Cu;
    // 0x245520: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x24551Cu, 0x245524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245524u;
label_245524:
    // 0x245524: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x245524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x245528: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x245528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24552c: 0x8f8ca0f8  lw          $t4, -0x5F08($gp)
    ctx->pc = 0x24552cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x245530: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x245530u;
    {
        const bool branch_taken_0x245530 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x245534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245530u;
        // 0x245534: 0x625021  addu        $t2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245530) {
            ctx->pc = 0x24553Cu;
            goto label_24553c;
        }
    }
    ctx->pc = 0x245538u;
    // 0x245538: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x245538u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_24553c:
    // 0x24553c: 0x8f8ea12c  lw          $t6, -0x5ED4($gp)
    ctx->pc = 0x24553cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
label_245540:
    // 0x245540: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x245540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245544: 0x10a00039  beqz        $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x245544u;
    {
        const bool branch_taken_0x245544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245544) {
            ctx->pc = 0x24562Cu;
            goto label_24562c;
        }
    }
    ctx->pc = 0x24554Cu;
    // 0x24554c: 0x8f8da0dc  lw          $t5, -0x5F24($gp)
    ctx->pc = 0x24554cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x245550: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x245550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x245554: 0x0  nop
    ctx->pc = 0x245554u;
    // NOP
label_245558:
    // 0x245558: 0x1449002f  bne         $v0, $t1, . + 4 + (0x2F << 2)
    ctx->pc = 0x245558u;
    {
        const bool branch_taken_0x245558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x24555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245558u;
        // 0x24555c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245558) {
            ctx->pc = 0x245618u;
            goto label_245618;
        }
    }
    ctx->pc = 0x245560u;
    // 0x245560: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x245560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x245564: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x245564u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245568: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x245568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24556c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245570: 0x152b0011  bne         $t1, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x245570u;
    {
        const bool branch_taken_0x245570 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        ctx->pc = 0x245574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245570u;
        // 0x245574: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245570) {
            ctx->pc = 0x2455B8u;
            goto label_2455b8;
        }
    }
    ctx->pc = 0x245578u;
    // 0x245578: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x245578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x24557c: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x24557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x245580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245584: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245588: 0x1a42023  subu        $a0, $t5, $a0
    ctx->pc = 0x245588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x24558c: 0x8c480024  lw          $t0, 0x24($v0)
    ctx->pc = 0x24558cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x245590: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x245590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x245594: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x245594u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x245598: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x245598u;
    {
        const bool branch_taken_0x245598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x245598) {
            ctx->pc = 0x24559Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245598u;
            // 0x24559c: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24561Cu;
            goto label_24561c;
        }
    }
    ctx->pc = 0x2455A0u;
    // 0x2455a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2455a4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2455a8: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x2455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x2455ac: 0x31d40  sll         $v1, $v1, 21
    ctx->pc = 0x2455acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
    // 0x2455b0: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2455b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2455b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2455b8:
    // 0x2455b8: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x2455b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2455bc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2455BCu;
    {
        const bool branch_taken_0x2455bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2455bc) {
            ctx->pc = 0x2455C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2455BCu;
            // 0x2455c0: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24561Cu;
            goto label_24561c;
        }
    }
    ctx->pc = 0x2455C4u;
    // 0x2455c4: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2455c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2455c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2455C8u;
    {
        const bool branch_taken_0x2455c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455C8u;
        // 0x2455cc: 0x146102a  slt         $v0, $t2, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455c8) {
            ctx->pc = 0x245618u;
            goto label_245618;
        }
    }
    ctx->pc = 0x2455D0u;
    // 0x2455d0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2455D0u;
    {
        const bool branch_taken_0x2455d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2455d0) {
            ctx->pc = 0x2455D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2455D0u;
            // 0x2455d4: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24561Cu;
            goto label_24561c;
        }
    }
    ctx->pc = 0x2455D8u;
    // 0x2455d8: 0x143102a  slt         $v0, $t2, $v1
    ctx->pc = 0x2455d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2455dc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2455DCu;
    {
        const bool branch_taken_0x2455dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2455dc) {
            ctx->pc = 0x2455E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2455DCu;
            // 0x2455e0: 0x8ca50038  lw          $a1, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24561Cu;
            goto label_24561c;
        }
    }
    ctx->pc = 0x2455E4u;
    // 0x2455e4: 0x152b000f  bne         $t1, $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x2455E4u;
    {
        const bool branch_taken_0x2455e4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        ctx->pc = 0x2455E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455E4u;
        // 0x2455e8: 0x1461023  subu        $v0, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455e4) {
            ctx->pc = 0x245624u;
            goto label_245624;
        }
    }
    ctx->pc = 0x2455ECu;
    // 0x2455ec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2455ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2455f0: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x2455f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x2455f4: 0x2072023  subu        $a0, $s0, $a3
    ctx->pc = 0x2455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2455f8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2455f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2455fc: 0x42543  sra         $a0, $a0, 21
    ctx->pc = 0x2455fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 21));
    // 0x245600: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x245604: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x245604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x245608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24560c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x24560cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245610: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245610u;
    {
        const bool branch_taken_0x245610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x245610) {
            ctx->pc = 0x245624u;
            goto label_245624;
        }
    }
    ctx->pc = 0x245618u;
label_245618:
    // 0x245618: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x245618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_24561c:
    // 0x24561c: 0x54a0ffce  bnel        $a1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x24561Cu;
    {
        const bool branch_taken_0x24561c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24561c) {
            ctx->pc = 0x245620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24561Cu;
            // 0x245620: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245558;
        }
    }
    ctx->pc = 0x245624u;
label_245624:
    // 0x245624: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x245624u;
    {
        const bool branch_taken_0x245624 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x245628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245624u;
        // 0x245628: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245624) {
            ctx->pc = 0x245640u;
            goto label_245640;
        }
    }
    ctx->pc = 0x24562Cu;
label_24562c:
    // 0x24562c: 0x15800004  bnez        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x24562Cu;
    {
        const bool branch_taken_0x24562c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x245630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24562Cu;
        // 0x245630: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24562c) {
            ctx->pc = 0x245640u;
            goto label_245640;
        }
    }
    ctx->pc = 0x245634u;
    // 0x245634: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x245634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x245638: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x245638u;
    {
        const bool branch_taken_0x245638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245638u;
        // 0x24563c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245638) {
            ctx->pc = 0x245540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245540;
        }
    }
    ctx->pc = 0x245640u;
label_245640:
    // 0x245640: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x245640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245648: 0x3e00008  jr          $ra
    ctx->pc = 0x245648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245648u;
        // 0x24564c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245650u;
}

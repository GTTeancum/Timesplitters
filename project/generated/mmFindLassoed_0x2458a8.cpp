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

// Function: mmFindLassoed
// Address: 0x2458a8 - 0x245b68
void mmFindLassoed_0x2458a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mmFindLassoed_0x2458a8");
#endif

    switch (ctx->pc) {
        case 0x2458e4u: goto label_2458e4;
        case 0x245908u: goto label_245908;
        case 0x245998u: goto label_245998;
        case 0x245ac8u: goto label_245ac8;
        case 0x245ae0u: goto label_245ae0;
        default: break;
    }

    ctx->pc = 0x2458a8u;

    // 0x2458a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2458a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2458ac: 0x8f82a004  lw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2458b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2458b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2458b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2458b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2458b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2458b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2458bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2458bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2458c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2458c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2458c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2458c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2458c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2458c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2458cc: 0x8f83a158  lw          $v1, -0x5EA8($gp)
    ctx->pc = 0x2458ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
    // 0x2458d0: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x2458d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2458d4: 0x8f85a188  lw          $a1, -0x5E78($gp)
    ctx->pc = 0x2458d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
    // 0x2458d8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2458d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2458dc: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x2458DCu;
    SET_GPR_U32(ctx, 31, 0x2458E4u);
    ctx->pc = 0x2458E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2458DCu;
    // 0x2458e0: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x2458DCu, 0x2458E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458E4u;
label_2458e4:
    // 0x2458e4: 0x8f83a004  lw          $v1, -0x5FFC($gp)
    ctx->pc = 0x2458e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942724)));
    // 0x2458e8: 0x8f85a15c  lw          $a1, -0x5EA4($gp)
    ctx->pc = 0x2458e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943068)));
    // 0x2458ec: 0x84640026  lh          $a0, 0x26($v1)
    ctx->pc = 0x2458ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x2458f0: 0x8f86a168  lw          $a2, -0x5E98($gp)
    ctx->pc = 0x2458f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
    // 0x2458f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2458f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2458f8: 0x8f85a18c  lw          $a1, -0x5E74($gp)
    ctx->pc = 0x2458f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943116)));
    // 0x2458fc: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x245900: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x245900u;
    SET_GPR_U32(ctx, 31, 0x245908u);
    ctx->pc = 0x245904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245900u;
    // 0x245904: 0x42400  sll         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x245900u, 0x245908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245908u;
label_245908:
    // 0x245908: 0x8f85a100  lw          $a1, -0x5F00($gp)
    ctx->pc = 0x245908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942976)));
    // 0x24590c: 0x8f83a16c  lw          $v1, -0x5E94($gp)
    ctx->pc = 0x24590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943084)));
    // 0x245910: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x245910u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245914: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245914u;
    {
        const bool branch_taken_0x245914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245914u;
        // 0x245918: 0x62c821  addu        $t9, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245914) {
            ctx->pc = 0x245928u;
            goto label_245928;
        }
    }
    ctx->pc = 0x24591Cu;
    // 0x24591c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x24591cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245920u;
    {
        const bool branch_taken_0x245920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245920u;
        // 0x245924: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245920) {
            ctx->pc = 0x24592Cu;
            goto label_24592c;
        }
    }
    ctx->pc = 0x245928u;
label_245928:
    // 0x245928: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x245928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24592c:
    // 0x24592c: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x24592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x245930: 0x323102a  slt         $v0, $t9, $v1
    ctx->pc = 0x245930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x245934: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245934u;
    {
        const bool branch_taken_0x245934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245934u;
        // 0x245938: 0x2122823  subu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245934) {
            ctx->pc = 0x245948u;
            goto label_245948;
        }
    }
    ctx->pc = 0x24593Cu;
    // 0x24593c: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x24593cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245940: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245940u;
    {
        const bool branch_taken_0x245940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245940u;
        // 0x245944: 0x60c82d  daddu       $t9, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245940) {
            ctx->pc = 0x24594Cu;
            goto label_24594c;
        }
    }
    ctx->pc = 0x245948u;
label_245948:
    // 0x245948: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x245948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24594c:
    // 0x24594c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x245950: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x245950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x245954: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x245954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245958: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245958u;
    {
        const bool branch_taken_0x245958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245958u;
        // 0x24595c: 0x3312023  subu        $a0, $t9, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245958) {
            ctx->pc = 0x24596Cu;
            goto label_24596c;
        }
    }
    ctx->pc = 0x245960u;
    // 0x245960: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x245960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x245964: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x245964u;
    {
        const bool branch_taken_0x245964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245964u;
        // 0x245968: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245964) {
            ctx->pc = 0x245B48u;
            goto label_245b48;
        }
    }
    ctx->pc = 0x24596Cu;
label_24596c:
    // 0x24596c: 0x8f82a0d8  lw          $v0, -0x5F28($gp)
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942936)));
    // 0x245970: 0x8f88a12c  lw          $t0, -0x5ED4($gp)
    ctx->pc = 0x245970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943020)));
    // 0x245974: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x245974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x245978: 0xaf80a108  sw          $zero, -0x5EF8($gp)
    ctx->pc = 0x245978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 0));
    // 0x24597c: 0x11000071  beqz        $t0, . + 4 + (0x71 << 2)
    ctx->pc = 0x24597Cu;
    {
        const bool branch_taken_0x24597c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x245980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24597Cu;
        // 0x245980: 0xaf82a0d8  sw          $v0, -0x5F28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24597c) {
            ctx->pc = 0x245B44u;
            goto label_245b44;
        }
    }
    ctx->pc = 0x245984u;
    // 0x245984: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x245984u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x245988: 0x8f94a0dc  lw          $s4, -0x5F24($gp)
    ctx->pc = 0x245988u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942940)));
    // 0x24598c: 0x3673fffe  ori         $s3, $s3, 0xFFFE
    ctx->pc = 0x24598cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65534);
    // 0x245990: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x245990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245994: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x245994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_245998:
    // 0x245998: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x245998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x24599c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x24599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2459a0: 0x14750064  bne         $v1, $s5, . + 4 + (0x64 << 2)
    ctx->pc = 0x2459A0u;
    {
        const bool branch_taken_0x2459a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2459A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459A0u;
        // 0x2459a4: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459a0) {
            ctx->pc = 0x245B34u;
            goto label_245b34;
        }
    }
    ctx->pc = 0x2459A8u;
    // 0x2459a8: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x2459a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2459ac: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2459b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2459b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2459b4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2459b8: 0x2842023  subu        $a0, $s4, $a0
    ctx->pc = 0x2459b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2459bc: 0x8c4b0024  lw          $t3, 0x24($v0)
    ctx->pc = 0x2459bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2459c0: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x2459c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2459c4: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2459c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2459c8: 0x5080005b  beql        $a0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2459C8u;
    {
        const bool branch_taken_0x2459c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2459c8) {
            ctx->pc = 0x2459CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2459C8u;
            // 0x2459cc: 0x8d070038  lw          $a3, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245B38u;
            goto label_245b38;
        }
    }
    ctx->pc = 0x2459D0u;
    // 0x2459d0: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x2459d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2459d4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2459d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2459d8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2459D8u;
    {
        const bool branch_taken_0x2459d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D8u;
        // 0x2459dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459d8) {
            ctx->pc = 0x245B34u;
            goto label_245b34;
        }
    }
    ctx->pc = 0x2459E0u;
    // 0x2459e0: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x2459e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2459e4: 0xd9102a  slt         $v0, $a2, $t9
    ctx->pc = 0x2459e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x2459e8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2459E8u;
    {
        const bool branch_taken_0x2459e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459E8u;
        // 0x2459ec: 0xc0c02d  daddu       $t8, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459e8) {
            ctx->pc = 0x245B34u;
            goto label_245b34;
        }
    }
    ctx->pc = 0x2459F0u;
    // 0x2459f0: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x2459f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2459f4: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x2459f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2459f8: 0xc4d40  sll         $t1, $t4, 21
    ctx->pc = 0x2459f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
    // 0x2459fc: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x2459fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x245a00: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x245a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x245a04: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x245A04u;
    {
        const bool branch_taken_0x245a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A04u;
        // 0x245a08: 0xf6d40  sll         $t5, $t7, 21 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a04) {
            ctx->pc = 0x245B34u;
            goto label_245b34;
        }
    }
    ctx->pc = 0x245A0Cu;
    // 0x245a0c: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x245a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x245a10: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x245a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x245a14: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x245A14u;
    {
        const bool branch_taken_0x245a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245a14) {
            ctx->pc = 0x245A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245A14u;
            // 0x245a18: 0x8d070038  lw          $a3, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245B38u;
            goto label_245b38;
        }
    }
    ctx->pc = 0x245A1Cu;
    // 0x245a1c: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x245a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x245a20: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x245A20u;
    {
        const bool branch_taken_0x245a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A20u;
        // 0x245a24: 0x2471023  subu        $v0, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a20) {
            ctx->pc = 0x245A54u;
            goto label_245a54;
        }
    }
    ctx->pc = 0x245A28u;
    // 0x245a28: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x245a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x245a2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245A2Cu;
    {
        const bool branch_taken_0x245a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A2Cu;
        // 0x245a30: 0xd1102a  slt         $v0, $a2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a2c) {
            ctx->pc = 0x245A48u;
            goto label_245a48;
        }
    }
    ctx->pc = 0x245A34u;
    // 0x245a34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x245A34u;
    {
        const bool branch_taken_0x245a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A34u;
        // 0x245a38: 0xf2102a  slt         $v0, $a3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a34) {
            ctx->pc = 0x245A4Cu;
            goto label_245a4c;
        }
    }
    ctx->pc = 0x245A3Cu;
    // 0x245a3c: 0x99102a  slt         $v0, $a0, $t9
    ctx->pc = 0x245a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x245a40: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x245A40u;
    {
        const bool branch_taken_0x245a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245a40) {
            ctx->pc = 0x245A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245A40u;
            // 0x245a44: 0x8d070038  lw          $a3, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245B18u;
            goto label_245b18;
        }
    }
    ctx->pc = 0x245A48u;
label_245a48:
    // 0x245a48: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x245a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_245a4c:
    // 0x245a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245A4Cu;
    {
        const bool branch_taken_0x245a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A4Cu;
        // 0x245a50: 0x2471023  subu        $v0, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a4c) {
            ctx->pc = 0x245A5Cu;
            goto label_245a5c;
        }
    }
    ctx->pc = 0x245A54u;
label_245a54:
    // 0x245a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245A54u;
    {
        const bool branch_taken_0x245a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A54u;
        // 0x245a58: 0x27543  sra         $t6, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a54) {
            ctx->pc = 0x245A60u;
            goto label_245a60;
        }
    }
    ctx->pc = 0x245A5Cu;
label_245a5c:
    // 0x245a5c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x245a5cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a60:
    // 0x245a60: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x245a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x245a64: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x245a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245A68u;
    {
        const bool branch_taken_0x245a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A68u;
        // 0x245a6c: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a68) {
            ctx->pc = 0x245A78u;
            goto label_245a78;
        }
    }
    ctx->pc = 0x245A70u;
    // 0x245a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245A70u;
    {
        const bool branch_taken_0x245a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A70u;
        // 0x245a74: 0x25543  sra         $t2, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a70) {
            ctx->pc = 0x245A7Cu;
            goto label_245a7c;
        }
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0x258affff  addiu       $t2, $t4, -0x1
    ctx->pc = 0x245a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_245a7c:
    // 0x245a7c: 0x311102a  slt         $v0, $t8, $s1
    ctx->pc = 0x245a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x245a80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245A80u;
    {
        const bool branch_taken_0x245a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A80u;
        // 0x245a84: 0x2261023  subu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a80) {
            ctx->pc = 0x245A90u;
            goto label_245a90;
        }
    }
    ctx->pc = 0x245A88u;
    // 0x245a88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245A88u;
    {
        const bool branch_taken_0x245a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A88u;
        // 0x245a8c: 0x21d43  sra         $v1, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a88) {
            ctx->pc = 0x245A94u;
            goto label_245a94;
        }
    }
    ctx->pc = 0x245A90u;
label_245a90:
    // 0x245a90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x245a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a94:
    // 0x245a94: 0x30d1021  addu        $v0, $t8, $t5
    ctx->pc = 0x245a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x245a98: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x245a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245a9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245A9Cu;
    {
        const bool branch_taken_0x245a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A9Cu;
        // 0x245aa0: 0x3261023  subu        $v0, $t9, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a9c) {
            ctx->pc = 0x245AACu;
            goto label_245aac;
        }
    }
    ctx->pc = 0x245AA4u;
    // 0x245aa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245AA4u;
    {
        const bool branch_taken_0x245aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AA4u;
        // 0x245aa8: 0x24d43  sra         $t1, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245aa4) {
            ctx->pc = 0x245AB0u;
            goto label_245ab0;
        }
    }
    ctx->pc = 0x245AACu;
label_245aac:
    // 0x245aac: 0x25e9ffff  addiu       $t1, $t7, -0x1
    ctx->pc = 0x245aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_245ab0:
    // 0x245ab0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x245ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ab4: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x245ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245ab8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x245AB8u;
    {
        const bool branch_taken_0x245ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AB8u;
        // 0x245abc: 0x8d070038  lw          $a3, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ab8) {
            ctx->pc = 0x245B38u;
            goto label_245b38;
        }
    }
    ctx->pc = 0x245AC0u;
    // 0x245ac0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x245ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ac4: 0x0  nop
    ctx->pc = 0x245ac4u;
    // NOP
label_245ac8:
    // 0x245ac8: 0x144102a  slt         $v0, $t2, $a0
    ctx->pc = 0x245ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x245acc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x245ACCu;
    {
        const bool branch_taken_0x245acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245acc) {
            ctx->pc = 0x245AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245ACCu;
            // 0x245ad0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245B04u;
            goto label_245b04;
        }
    }
    ctx->pc = 0x245AD4u;
    // 0x245ad4: 0x8d66000c  lw          $a2, 0xC($t3)
    ctx->pc = 0x245ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x245ad8: 0xac1818  mult        $v1, $a1, $t4
    ctx->pc = 0x245ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x245adc: 0x0  nop
    ctx->pc = 0x245adcu;
    // NOP
label_245ae0:
    // 0x245ae0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x245ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x245ae4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x245ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x245ae8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x245ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245aec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x245AECu;
    {
        const bool branch_taken_0x245aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AECu;
        // 0x245af0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245aec) {
            ctx->pc = 0x245B18u;
            goto label_245b18;
        }
    }
    ctx->pc = 0x245AF4u;
    // 0x245af4: 0x144102a  slt         $v0, $t2, $a0
    ctx->pc = 0x245af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x245af8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x245AF8u;
    {
        const bool branch_taken_0x245af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245AF8u;
        // 0x245afc: 0xac1818  mult        $v1, $a1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x245af8) {
            ctx->pc = 0x245AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245ae0;
        }
    }
    ctx->pc = 0x245B00u;
    // 0x245b00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x245b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_245b04:
    // 0x245b04: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x245b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245b08: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x245B08u;
    {
        const bool branch_taken_0x245b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B08u;
        // 0x245b0c: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b08) {
            ctx->pc = 0x245AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245ac8;
        }
    }
    ctx->pc = 0x245B10u;
    // 0x245b10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x245B10u;
    {
        const bool branch_taken_0x245b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B10u;
        // 0x245b14: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b10) {
            ctx->pc = 0x245B3Cu;
            goto label_245b3c;
        }
    }
    ctx->pc = 0x245B18u;
label_245b18:
    // 0x245b18: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x245b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x245b1c: 0x8f83a108  lw          $v1, -0x5EF8($gp)
    ctx->pc = 0x245b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942984)));
    // 0x245b20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x245b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x245b24: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x245b24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x245b28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x245b2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245B2Cu;
    {
        const bool branch_taken_0x245b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B2Cu;
        // 0x245b30: 0xaf83a108  sw          $v1, -0x5EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b2c) {
            ctx->pc = 0x245B38u;
            goto label_245b38;
        }
    }
    ctx->pc = 0x245B34u;
label_245b34:
    // 0x245b34: 0x8d070038  lw          $a3, 0x38($t0)
    ctx->pc = 0x245b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_245b38:
    // 0x245b38: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x245b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245b3c:
    // 0x245b3c: 0x5500ff96  bnel        $t0, $zero, . + 4 + (-0x6A << 2)
    ctx->pc = 0x245B3Cu;
    {
        const bool branch_taken_0x245b3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x245b3c) {
            ctx->pc = 0x245B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245B3Cu;
            // 0x245b40: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245998;
        }
    }
    ctx->pc = 0x245B44u;
label_245b44:
    // 0x245b44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245b48:
    // 0x245b48: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x245b48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x245b4c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x245b4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245b50: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x245b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245b54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245b58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x245b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245b60: 0x3e00008  jr          $ra
    ctx->pc = 0x245B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B60u;
        // 0x245b64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245B68u;
}
